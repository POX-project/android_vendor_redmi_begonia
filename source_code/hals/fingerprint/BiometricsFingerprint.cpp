/*
 * Copyright (C) 2021-2024 The LineageOS Project
 * Copyright (C) 2024 POX Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "android.hardware.biometrics.fingerprint@2.1-service.begonia"

#include <android-base/logging.h>
#include <android-base/properties.h>
#include <fcntl.h>
#include <unistd.h>
#include <fstream>
#include "BiometricsFingerprint.h"

namespace android {
namespace hardware {
namespace biometrics {
namespace fingerprint {
namespace V2_1 {
namespace implementation {

BiometricsFingerprint* BiometricsFingerprint::sInstance = nullptr;

BiometricsFingerprint::BiometricsFingerprint() : mDevice(nullptr), mSensorType(SensorType::UNKNOWN) {
    sInstance = this;
    mSensorType = detectSensorType();

    LOG(INFO) << "Begonia Fingerprint HAL detected hardware sensor: "
              << (mSensorType == SensorType::FPC ? "FPC1020" :
                  mSensorType == SensorType::GOODIX ? "Goodix GF3208" : "Unknown");

    if (!openHal(mSensorType, &mDevice)) {
        LOG(ERROR) << "Failed to open fingerprint HAL device for Begonia!";
    }
}

BiometricsFingerprint::~BiometricsFingerprint() {
    LOG(INFO) << "~BiometricsFingerprint destructor called";
    if (mDevice != nullptr) {
        int ret = mDevice->common.close(reinterpret_cast<hw_device_t*>(mDevice));
        if (ret < 0) {
            LOG(ERROR) << "Failed to close fingerprint device, err=" << ret;
        }
        mDevice = nullptr;
    }
}

SensorType BiometricsFingerprint::detectSensorType() {
    // 1. Check bootloader/kernel cmdline property if set
    std::string prop = android::base::GetProperty("ro.boot.fingerprint", "");
    if (prop == "fpc" || prop == "fpc1020") return SensorType::FPC;
    if (prop == "goodix" || prop == "gf3208") return SensorType::GOODIX;

    // 2. Check physical character device node availability
    if (access("/dev/goodix_fp", F_OK) == 0) {
        LOG(INFO) << "Found Goodix character device node /dev/goodix_fp";
        return SensorType::GOODIX;
    }

    if (access("/dev/teei_fp", F_OK) == 0) {
        LOG(INFO) << "Found Microtrust TEE FPC device node /dev/teei_fp";
        return SensorType::FPC;
    }

    // 3. Check SPI sysfs nodes
    std::ifstream spiGoodix("/sys/devices/platform/1100a000.spi0/spi_master/spi0/spi0.0/gf_input");
    if (spiGoodix.good()) {
        return SensorType::GOODIX;
    }

    std::ifstream spiFpc("/sys/devices/platform/1100a000.spi0/spi_master/spi0/spi0.0/irq");
    if (spiFpc.good()) {
        return SensorType::FPC;
    }

    // Default fallback to FPC on Begonia if ambiguous
    return SensorType::FPC;
}

bool BiometricsFingerprint::openHal(SensorType type, fingerprint_device_t** device) {
    const hw_module_t* hw_mdl = nullptr;
    int err = 0;

    const char* module_ids[] = {
        (type == SensorType::GOODIX ? "gf" : "fpc"),
        "fingerprint",
        (type == SensorType::GOODIX ? "fpc" : "gf"),
        nullptr
    };

    for (int i = 0; module_ids[i] != nullptr; ++i) {
        err = hw_get_module_by_class(FINGERPRINT_HARDWARE_MODULE_ID, module_ids[i], &hw_mdl);
        if (err == 0 && hw_mdl != nullptr) {
            LOG(INFO) << "Successfully loaded fingerprint module: " << module_ids[i];
            break;
        }
        LOG(DEBUG) << "hw_get_module_by_class(" << module_ids[i] << ") returned: " << err;
    }

    if (hw_mdl == nullptr) {
        err = hw_get_module(FINGERPRINT_HARDWARE_MODULE_ID, &hw_mdl);
        if (err != 0 || hw_mdl == nullptr) {
            LOG(ERROR) << "Could not open any fingerprint hw_module, err=" << err;
            return false;
        }
    }

    hw_device_t* dev = nullptr;
    err = hw_mdl->methods->open(hw_mdl, nullptr, &dev);
    if (err < 0) {
        LOG(ERROR) << "Could not open fingerprint device, err=" << err;
        return false;
    }

    *device = reinterpret_cast<fingerprint_device_t*>(dev);
    if ((*device)->set_notify != nullptr) {
        err = (*device)->set_notify(*device, BiometricsFingerprint::notify);
        if (err < 0) {
            LOG(ERROR) << "Failed to set notify callback on device, err=" << err;
        }
    }

    return true;
}

void BiometricsFingerprint::notify(const fingerprint_msg_t* msg) {
    BiometricsFingerprint* thisPtr = sInstance;
    if (thisPtr == nullptr) {
        LOG(ERROR) << "Receiving callbacks before the instance is ready";
        return;
    }

    std::lock_guard<std::mutex> lock(thisPtr->mClientCallbackMutex);
    if (thisPtr->mClientCallback == nullptr) {
        LOG(WARNING) << "Client callback not set, ignoring message type: " << msg->type;
        return;
    }

    switch (msg->type) {
        case FINGERPRINT_ERROR: {
            int32_t vendorCode = 0;
            FingerprintError result = VendorErrorFilter(msg->data.error, &vendorCode);
            LOG(DEBUG) << "onError(" << static_cast<int>(result) << ", " << vendorCode << ")";
            if (!thisPtr->mClientCallback->onError(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                   result, vendorCode).isOk()) {
                LOG(ERROR) << "Failed to invoke onError callback";
            }
            break;
        }
        case FINGERPRINT_ACQUIRED: {
            int32_t vendorCode = 0;
            FingerprintAcquiredInfo result = VendorAcquiredFilter(msg->data.acquired.acquired_info, &vendorCode);
            LOG(VERBOSE) << "onAcquired(" << static_cast<int>(result) << ", " << vendorCode << ")";
            if (!thisPtr->mClientCallback->onAcquired(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                      result, vendorCode).isOk()) {
                LOG(ERROR) << "Failed to invoke onAcquired callback";
            }
            break;
        }
        case FINGERPRINT_AUTHENTICATED: {
            LOG(DEBUG) << "onAuthenticated(fid=" << msg->data.authenticated.finger.fid
                       << ", gid=" << msg->data.authenticated.finger.gid << ")";
            if (msg->data.authenticated.finger.fid != 0) {
                const uint8_t* hat = reinterpret_cast<const uint8_t*>(&msg->data.authenticated.hat);
                hidl_vec<uint8_t> token(hat, hat + sizeof(msg->data.authenticated.hat));
                if (!thisPtr->mClientCallback->onAuthenticated(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                               msg->data.authenticated.finger.fid,
                                                               msg->data.authenticated.finger.gid,
                                                               token).isOk()) {
                    LOG(ERROR) << "Failed to invoke onAuthenticated callback";
                }
            } else {
                hidl_vec<uint8_t> token;
                if (!thisPtr->mClientCallback->onAuthenticated(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                               0, 0, token).isOk()) {
                    LOG(ERROR) << "Failed to invoke onAuthenticated (failure) callback";
                }
            }
            break;
        }
        case FINGERPRINT_TEMPLATE_ENROLLING: {
            LOG(DEBUG) << "onEnrollResult(fid=" << msg->data.enroll.finger.fid
                       << ", gid=" << msg->data.enroll.finger.gid
                       << ", rem=" << msg->data.enroll.samples_remaining << ")";
            if (!thisPtr->mClientCallback->onEnrollResult(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                          msg->data.enroll.finger.fid,
                                                          msg->data.enroll.finger.gid,
                                                          msg->data.enroll.samples_remaining).isOk()) {
                LOG(ERROR) << "Failed to invoke onEnrollResult callback";
            }
            break;
        }
        case FINGERPRINT_TEMPLATE_REMOVED: {
            LOG(DEBUG) << "onRemoved(fid=" << msg->data.removed.finger.fid
                       << ", gid=" << msg->data.removed.finger.gid << ")";
            if (!thisPtr->mClientCallback->onRemoved(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                     msg->data.removed.finger.fid,
                                                     msg->data.removed.finger.gid).isOk()) {
                LOG(ERROR) << "Failed to invoke onRemoved callback";
            }
            break;
        }
        case FINGERPRINT_TEMPLATE_ENUMERATING: {
            LOG(VERBOSE) << "onEnumerate(fid=" << msg->data.enumerated.finger.fid
                         << ", gid=" << msg->data.enumerated.finger.gid
                         << ", rem=" << msg->data.enumerated.samples_remaining << ")";
            if (!thisPtr->mClientCallback->onEnumerate(reinterpret_cast<uint64_t>(thisPtr->mDevice),
                                                       msg->data.enumerated.finger.fid,
                                                       msg->data.enumerated.finger.gid,
                                                       msg->data.enumerated.samples_remaining).isOk()) {
                LOG(ERROR) << "Failed to invoke onEnumerate callback";
            }
            break;
        }
        default:
            LOG(WARNING) << "Unknown fingerprint message type: " << msg->type;
            break;
    }
}

Return<RequestStatus> BiometricsFingerprint::ErrorFilter(int32_t error) {
    switch (error) {
        case 0: return RequestStatus::SYS_OK;
        case -2: return RequestStatus::SYS_ENOENT;
        case -4: return RequestStatus::SYS_EINTR;
        case -5: return RequestStatus::SYS_EIO;
        case -11: return RequestStatus::SYS_EAGAIN;
        case -12: return RequestStatus::SYS_ENOMEM;
        case -13: return RequestStatus::SYS_EACCES;
        case -14: return RequestStatus::SYS_EFAULT;
        case -16: return RequestStatus::SYS_EBUSY;
        case -22: return RequestStatus::SYS_EINVAL;
        default:
            LOG(ERROR) << "Unmapped error code: " << error;
            return RequestStatus::SYS_UNKNOWN;
    }
}

FingerprintError BiometricsFingerprint::VendorErrorFilter(int32_t error, int32_t* vendorCode) {
    *vendorCode = 0;
    switch (error) {
        case FINGERPRINT_ERROR_HW_UNAVAILABLE: return FingerprintError::ERROR_HW_UNAVAILABLE;
        case FINGERPRINT_ERROR_UNABLE_TO_PROCESS: return FingerprintError::ERROR_UNABLE_TO_PROCESS;
        case FINGERPRINT_ERROR_TIMEOUT: return FingerprintError::ERROR_TIMEOUT;
        case FINGERPRINT_ERROR_NO_SPACE: return FingerprintError::ERROR_NO_SPACE;
        case FINGERPRINT_ERROR_CANCELED: return FingerprintError::ERROR_CANCELED;
        case FINGERPRINT_ERROR_UNABLE_TO_REMOVE: return FingerprintError::ERROR_UNABLE_TO_REMOVE;
        case FINGERPRINT_ERROR_LOCKOUT: return FingerprintError::ERROR_LOCKOUT;
        default:
            if (error >= FINGERPRINT_ERROR_VENDOR_BASE) {
                *vendorCode = error - FINGERPRINT_ERROR_VENDOR_BASE;
                return FingerprintError::ERROR_VENDOR;
            }
            return FingerprintError::ERROR_UNABLE_TO_PROCESS;
    }
}

FingerprintAcquiredInfo BiometricsFingerprint::VendorAcquiredFilter(int32_t info, int32_t* vendorCode) {
    *vendorCode = 0;
    switch (info) {
        case FINGERPRINT_ACQUIRED_GOOD: return FingerprintAcquiredInfo::ACQUIRED_GOOD;
        case FINGERPRINT_ACQUIRED_PARTIAL: return FingerprintAcquiredInfo::ACQUIRED_PARTIAL;
        case FINGERPRINT_ACQUIRED_INSUFFICIENT: return FingerprintAcquiredInfo::ACQUIRED_INSUFFICIENT;
        case FINGERPRINT_ACQUIRED_IMAGER_DIRTY: return FingerprintAcquiredInfo::ACQUIRED_IMAGER_DIRTY;
        case FINGERPRINT_ACQUIRED_TOO_SLOW: return FingerprintAcquiredInfo::ACQUIRED_TOO_SLOW;
        case FINGERPRINT_ACQUIRED_TOO_FAST: return FingerprintAcquiredInfo::ACQUIRED_TOO_FAST;
        default:
            if (info >= FINGERPRINT_ACQUIRED_VENDOR_BASE) {
                *vendorCode = info - FINGERPRINT_ACQUIRED_VENDOR_BASE;
                return FingerprintAcquiredInfo::ACQUIRED_VENDOR;
            }
            return FingerprintAcquiredInfo::ACQUIRED_GOOD;
    }
}

IBiometricsFingerprint* BiometricsFingerprint::getInstance() {
    if (sInstance == nullptr) {
        sInstance = new BiometricsFingerprint();
    }
    return sInstance;
}

Return<uint64_t> BiometricsFingerprint::setNotify(
        const sp<IBiometricsFingerprintClientCallback>& clientCallback) {
    std::lock_guard<std::mutex> lock(mClientCallbackMutex);
    mClientCallback = clientCallback;
    return reinterpret_cast<uint64_t>(mDevice);
}

Return<uint64_t> BiometricsFingerprint::preEnroll() {
    if (mDevice == nullptr || mDevice->pre_enroll == nullptr) return 0;
    return mDevice->pre_enroll(mDevice);
}

Return<RequestStatus> BiometricsFingerprint::enroll(const hidl_vec<uint8_t>& hat,
                                                   uint32_t gid,
                                                   uint32_t timeoutSec) {
    if (mDevice == nullptr || mDevice->enroll == nullptr) return RequestStatus::SYS_EINVAL;
    const hw_auth_token_t* authToken = reinterpret_cast<const hw_auth_token_t*>(hat.data());
    return ErrorFilter(mDevice->enroll(mDevice, authToken, gid, timeoutSec));
}

Return<RequestStatus> BiometricsFingerprint::postEnroll() {
    if (mDevice == nullptr || mDevice->post_enroll == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->post_enroll(mDevice));
}

Return<uint64_t> BiometricsFingerprint::getAuthenticatorId() {
    if (mDevice == nullptr || mDevice->get_authenticator_id == nullptr) return 0;
    return mDevice->get_authenticator_id(mDevice);
}

Return<RequestStatus> BiometricsFingerprint::cancel() {
    if (mDevice == nullptr || mDevice->cancel == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->cancel(mDevice));
}

Return<RequestStatus> BiometricsFingerprint::enumerate() {
    if (mDevice == nullptr || mDevice->enumerate == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->enumerate(mDevice));
}

Return<RequestStatus> BiometricsFingerprint::remove(uint32_t gid, uint32_t fid) {
    if (mDevice == nullptr || mDevice->remove == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->remove(mDevice, gid, fid));
}

Return<RequestStatus> BiometricsFingerprint::setActiveGroup(uint32_t gid,
                                                           const hidl_string& storePath) {
    if (mDevice == nullptr || mDevice->set_active_group == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->set_active_group(mDevice, gid, storePath.c_str()));
}

Return<RequestStatus> BiometricsFingerprint::authenticate(uint64_t operationId, uint32_t gid) {
    if (mDevice == nullptr || mDevice->authenticate == nullptr) return RequestStatus::SYS_EINVAL;
    return ErrorFilter(mDevice->authenticate(mDevice, operationId, gid));
}

}  // namespace implementation
}  // namespace V2_1
}  // namespace fingerprint
}  // namespace biometrics
}  // namespace hardware
}  // namespace android
