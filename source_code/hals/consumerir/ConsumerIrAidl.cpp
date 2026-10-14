/*
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

#define LOG_TAG "android.hardware.ir-service.begonia"

#include "ConsumerIrAidl.h"

#include <android-base/logging.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <vector>

namespace aidl {
namespace android {
namespace hardware {
namespace ir {

#define IRTX_IOC_SET_CARRIER_FREQ   _IOW('R', 0, unsigned int)
#define DEV_IRTX "/dev/irtx"

static const std::vector<ConsumerIrFreqRange> kRange = {
    {.minHz = 30000, .maxHz = 30000},
    {.minHz = 33000, .maxHz = 33000},
    {.minHz = 36000, .maxHz = 36000},
    {.minHz = 38000, .maxHz = 38000},
    {.minHz = 40000, .maxHz = 40000},
    {.minHz = 56000, .maxHz = 60000},
};

ConsumerIr::ConsumerIr() : mDeviceFd(-1) {
    if (access(DEV_IRTX, F_OK) == 0) {
        mDeviceFd = open(DEV_IRTX, O_RDWR | O_CLOEXEC);
        if (mDeviceFd >= 0) {
            LOG(INFO) << "Opened Begonia IR blaster node: " << DEV_IRTX;
        } else {
            LOG(WARNING) << "Failed to open Begonia IR blaster node: " << DEV_IRTX;
        }
    } else {
        LOG(WARNING) << "Begonia IR node " << DEV_IRTX << " does not exist!";
    }
}

ConsumerIr::~ConsumerIr() {
    if (mDeviceFd >= 0) {
        close(mDeviceFd);
        mDeviceFd = -1;
    }
}

::ndk::ScopedAStatus ConsumerIr::getCarrierFreqs(
        std::vector<ConsumerIrFreqRange>* _aidl_return) {
    *_aidl_return = kRange;
    return ::ndk::ScopedAStatus::ok();
}

::ndk::ScopedAStatus ConsumerIr::transmit(
        int32_t in_carrierFreq, const std::vector<int32_t>& in_pattern) {
    std::lock_guard<std::mutex> lock(mLock);

    if (in_carrierFreq < 30000 || in_carrierFreq > 60000) {
        LOG(ERROR) << "Requested carrier frequency " << in_carrierFreq
                   << " Hz is outside Begonia IR hardware range [30000, 60000]!";
        return ::ndk::ScopedAStatus::fromExceptionCode(EX_ILLEGAL_ARGUMENT);
    }

    if (in_pattern.empty()) {
        return ::ndk::ScopedAStatus::ok();
    }

    int fd = mDeviceFd;
    bool needClose = false;
    if (fd < 0) {
        fd = open(DEV_IRTX, O_RDWR | O_CLOEXEC);
        if (fd < 0) {
            LOG(ERROR) << "Failed to open /dev/irtx for transmit!";
            return ::ndk::ScopedAStatus::fromServiceSpecificError(-errno);
        }
        needClose = true;
    }

    unsigned int freq = static_cast<unsigned int>(in_carrierFreq);
    if (ioctl(fd, IRTX_IOC_SET_CARRIER_FREQ, &freq) < 0) {
        LOG(ERROR) << "Failed to set IR carrier frequency to " << in_carrierFreq;
        if (needClose) close(fd);
        return ::ndk::ScopedAStatus::fromServiceSpecificError(-errno);
    }

    // Convert pattern timings from microseconds to pulses
    std::vector<unsigned int> waveBuf(in_pattern.size());
    for (size_t i = 0; i < in_pattern.size(); ++i) {
        waveBuf[i] = static_cast<unsigned int>(in_pattern[i]);
    }

    ssize_t bytesToWrite = waveBuf.size() * sizeof(unsigned int);
    ssize_t written = write(fd, waveBuf.data(), bytesToWrite);
    if (written < 0) {
        LOG(ERROR) << "Failed writing IR pattern data to /dev/irtx, errno=" << errno;
        if (needClose) close(fd);
        return ::ndk::ScopedAStatus::fromServiceSpecificError(-errno);
    }

    if (needClose) {
        close(fd);
    }

    LOG(INFO) << "Transmitted " << in_pattern.size() << " IR pulses at "
              << in_carrierFreq << " Hz on Begonia";
    return ::ndk::ScopedAStatus::ok();
}

}  // namespace ir
}  // namespace hardware
}  // namespace android
}  // namespace aidl
