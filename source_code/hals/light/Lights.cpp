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

#define LOG_TAG "android.hardware.light-service.begonia"

#include <android-base/logging.h>
#include <fcntl.h>
#include <unistd.h>
#include <fstream>
#include "Lights.h"

namespace aidl {
namespace android {
namespace hardware {
namespace light {

#define LCD_BACKLIGHT_PATH "/sys/class/leds/lcd-backlight/brightness"
#define LCD_MAX_BACKLIGHT_PATH "/sys/class/leds/lcd-backlight/max_brightness"
#define RED_LED_PATH "/sys/class/leds/red/brightness"
#define GREEN_LED_PATH "/sys/class/leds/green/brightness"
#define BLUE_LED_PATH "/sys/class/leds/blue/brightness"
#define WHITE_LED_PATH "/sys/class/leds/white/brightness"

Lights::Lights() {
    mMaxBacklight = readMaxBacklight();
    LOG(INFO) << "Begonia Lights HAL initialized with max backlight: " << mMaxBacklight;

    HwLight backlightLight{};
    backlightLight.id = static_cast<int>(LightType::BACKLIGHT);
    backlightLight.type = LightType::BACKLIGHT;
    backlightLight.ordinal = 0;
    mAvailableLights.emplace_back(backlightLight);

    HwLight batteryLight{};
    batteryLight.id = static_cast<int>(LightType::BATTERY);
    batteryLight.type = LightType::BATTERY;
    batteryLight.ordinal = 0;
    mAvailableLights.emplace_back(batteryLight);

    HwLight notificationLight{};
    notificationLight.id = static_cast<int>(LightType::NOTIFICATIONS);
    notificationLight.type = LightType::NOTIFICATIONS;
    notificationLight.ordinal = 0;
    mAvailableLights.emplace_back(notificationLight);
}

int Lights::readMaxBacklight() {
    std::ifstream file(LCD_MAX_BACKLIGHT_PATH);
    int maxBrightness = 2047;
    if (file.is_open()) {
        file >> maxBrightness;
    }
    if (maxBrightness <= 0) {
        maxBrightness = 2047;
    }
    return maxBrightness;
}

int Lights::writeInt(const std::string& path, int value) {
    std::ofstream file(path);
    if (!file.is_open()) {
        LOG(WARNING) << "Failed to open sysfs node: " << path;
        return -errno;
    }
    file << value << std::endl;
    return file.good() ? 0 : -errno;
}

void Lights::setBacklight(const HwLightState& state) {
    uint32_t color = state.color & 0x00FFFFFF;
    uint32_t red = (color >> 16) & 0xFF;
    uint32_t green = (color >> 8) & 0xFF;
    uint32_t blue = color & 0xFF;

    // Linear RGB to perceived luminance: (77R + 150G + 29B) / 256
    uint32_t brightness = ((77 * red) + (150 * green) + (29 * blue)) >> 8;
    int scaled = 0;
    if (brightness > 0) {
        scaled = (brightness * mMaxBacklight) / 255;
        if (scaled < 1) scaled = 1;
    }

    LOG(VERBOSE) << "Setting LCD backlight: " << scaled << " / " << mMaxBacklight;
    writeInt(LCD_BACKLIGHT_PATH, scaled);
}

void Lights::setLed(int id, const HwLightState& state) {
    uint32_t color = state.color & 0x00FFFFFF;
    int red = (color >> 16) & 0xFF;
    int green = (color >> 8) & 0xFF;
    int blue = color & 0xFF;

    // On Begonia, white LED node is commonly tied to notification/charging
    int active = (red || green || blue) ? 255 : 0;

    writeInt(RED_LED_PATH, red ? 255 : 0);
    writeInt(GREEN_LED_PATH, green ? 255 : 0);
    writeInt(BLUE_LED_PATH, blue ? 255 : 0);
    writeInt(WHITE_LED_PATH, active);
}

ndk::ScopedAStatus Lights::setLightState(int id, const HwLightState& state) {
    std::lock_guard<std::mutex> lock(mLock);

    LightType type = static_cast<LightType>(id);
    switch (type) {
        case LightType::BACKLIGHT:
            setBacklight(state);
            break;
        case LightType::BATTERY:
        case LightType::NOTIFICATIONS:
        case LightType::ATTENTION:
            setLed(id, state);
            break;
        default:
            return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
    }

    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus Lights::getLights(std::vector<HwLight>* lights) {
    *lights = mAvailableLights;
    return ndk::ScopedAStatus::ok();
}

}  // namespace light
}  // namespace hardware
}  // namespace android
}  // namespace aidl
