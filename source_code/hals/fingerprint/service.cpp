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
#include <hidl/HidlTransportSupport.h>
#include "BiometricsFingerprint.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::hardware::biometrics::fingerprint::V2_1::IBiometricsFingerprint;
using android::hardware::biometrics::fingerprint::V2_1::implementation::BiometricsFingerprint;
using android::sp;
using android::status_t;
using android::OK;

int main() {
    android::base::InitLogging(nullptr, android::base::LogdLogger());
    LOG(INFO) << "Starting Begonia Biometrics Fingerprint HAL service...";

    configureRpcThreadpool(1, true /*callerWillJoin*/);

    sp<IBiometricsFingerprint> bio = BiometricsFingerprint::getInstance();
    if (bio == nullptr) {
        LOG(FATAL) << "Could not create instance of BiometricsFingerprint HAL for Begonia!";
    }

    status_t status = bio->registerAsService();
    if (status != OK) {
        LOG(FATAL) << "Could not register service for Begonia BiometricsFingerprint HAL (" << status << ")";
    }

    LOG(INFO) << "Begonia BiometricsFingerprint HAL successfully registered and joining RPC threadpool.";
    joinRpcThreadpool();

    return 0;
}
