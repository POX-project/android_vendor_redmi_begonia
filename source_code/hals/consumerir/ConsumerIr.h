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

#pragma once

#include <android/hardware/ir/1.0/IConsumerIr.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <mutex>

namespace android {
namespace hardware {
namespace ir {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::ir::V1_0::ConsumerIrFreqRange;
using ::android::hardware::ir::V1_0::IConsumerIr;

class ConsumerIr : public IConsumerIr {
  public:
    ConsumerIr();
    ~ConsumerIr() override;

    Return<bool> transmit(int32_t carrierFreq, const hidl_vec<int32_t>& pattern) override;
    Return<void> getCarrierFreqs(getCarrierFreqs_cb _hidl_cb) override;

  private:
    std::mutex mLock;
    int mDeviceFd;
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace ir
}  // namespace hardware
}  // namespace android
