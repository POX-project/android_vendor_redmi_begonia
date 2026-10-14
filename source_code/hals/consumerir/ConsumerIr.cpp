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

#define LOG_TAG "android.hardware.ir@1.0-service.begonia"

#include <android-base/logging.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <vector>
#include "ConsumerIr.h"

namespace android {
namespace hardware {
namespace ir {
namespace V1_0 {
namespace implementation {

#define IRTX_IOC_SET_CARRIER_FREQ   _IOW('R', 0, unsigned int)
#define DEV_IRTX "/dev/irtx"

static const ConsumerIrFreqRange kConsumerIrFreqRange[] = {
    {.min = 30000, .max = 30000},
    {.min = 33000, .max = 33000},
    {.min = 36000, .max = 36000},
    {.min = 38000, .max = 38000},
    {.min = 40000, .max = 40000},
    {.min = 56000, .max = 60000},
};

ConsumerIr::ConsumerIr() : mDeviceFd(-1) {
    if (access(DEV_IRTX, F_OK) == 0) {
        mDeviceFd = open(DEV_IRTX, O_RDWR | O_CLOEXEC);
        if (mDeviceFd >= 0) {
            LOG(INFO) << "Opened Begonia IR blaster device node: " << DEV_IRTX;
        } else {
            LOG(WARNING) << "Failed to open Begonia IR device: " << DEV_IRTX;
        }
    } else {
        LOG(WARNING) << "Begonia IR device node " << DEV_IRTX << " does not exist!";
    }
}

ConsumerIr::~ConsumerIr() {
    if (mDeviceFd >= 0) {
        close(mDeviceFd);
        mDeviceFd = -1;
    }
}

Return<bool> ConsumerIr::transmit(int32_t carrierFreq, const hidl_vec<int32_t>& pattern) {
    std::lock_guard<std::mutex> lock(mLock);

    if (mDeviceFd < 0) {
        mDeviceFd = open(DEV_IRTX, O_RDWR | O_CLOEXEC);
        if (mDeviceFd < 0) {
            LOG(ERROR) << "Cannot transmit IR: device node not available";
            return false;
        }
    }

    if (carrierFreq <= 0 || pattern.size() == 0) {
        LOG(ERROR) << "Invalid IR transmit arguments: freq=" << carrierFreq << ", size=" << pattern.size();
        return false;
    }

    // Set carrier frequency via ioctl
    unsigned int freq = static_cast<unsigned int>(carrierFreq);
    if (ioctl(mDeviceFd, IRTX_IOC_SET_CARRIER_FREQ, &freq) < 0) {
        LOG(WARNING) << "IRTX_IOC_SET_CARRIER_FREQ failed, err=" << errno;
    }

    // Write pulse pattern
    ssize_t bytesToWrite = pattern.size() * sizeof(int32_t);
    ssize_t written = write(mDeviceFd, pattern.data(), bytesToWrite);
    if (written < 0) {
        LOG(ERROR) << "Failed to write pattern to IRTX device, err=" << errno;
        return false;
    }

    LOG(DEBUG) << "Successfully transmitted " << pattern.size() << " IR pulses at " << carrierFreq << " Hz";
    return true;
}

Return<void> ConsumerIr::getCarrierFreqs(getCarrierFreqs_cb _hidl_cb) {
    hidl_vec<ConsumerIrFreqRange> ranges;
    ranges.setToExternal(const_cast<ConsumerIrFreqRange*>(kConsumerIrFreqRange),
                         sizeof(kConsumerIrFreqRange) / sizeof(kConsumerIrFreqRange[0]));
    _hidl_cb(true, ranges);
    return Void();
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace ir
}  // namespace hardware
}  // namespace android
