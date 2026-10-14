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
#include <hidl/HidlTransportSupport.h>
#include "ConsumerIr.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::hardware::ir::V1_0::IConsumerIr;
using android::hardware::ir::V1_0::implementation::ConsumerIr;
using android::sp;
using android::status_t;
using android::OK;

int main() {
    android::base::InitLogging(nullptr, android::base::LogdLogger());
    LOG(INFO) << "Starting Begonia Consumer IR HAL service...";

    configureRpcThreadpool(1, true /*callerWillJoin*/);

    sp<IConsumerIr> ir = new ConsumerIr();
    status_t status = ir->registerAsService();
    if (status != OK) {
        LOG(FATAL) << "Could not register service for Begonia Consumer IR HAL (" << status << ")";
    }

    LOG(INFO) << "Begonia Consumer IR HAL registered successfully.";
    joinRpcThreadpool();

    return 0;
}
