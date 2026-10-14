/*
 * Reverse-Engineered Source for: android.hardware.vibrator@1.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_vibrator_1_0_impl_mediatek"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "android_hardware_vibrator_1_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HIDL_FETCH_IVibrator */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IVibrator(void) {
    ALOGD("HIDL_FETCH_IVibrator() called");
    return 0;
}

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::setAmplitude(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator12setAmplitudeEh(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8Vibrator12setAmplitudeEh() called");
    return 0;
}

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::Vibrator(vibrator_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8VibratorC2EP15vibrator_device(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8VibratorC2EP15vibrator_device() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::vibrator::V1_0::IVibrator-in-android::hardware::vibrator::V1_0::implementation::Vibrator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS2_9IVibratorE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::vibrator::V1_0::implementation::Vibrator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::supportsAmplitudeControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator24supportsAmplitudeControlEv(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8Vibrator24supportsAmplitudeControlEv() called");
    return 0;
}

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::off() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator3offEv(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8Vibrator3offEv() called");
    return 0;
}

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::perform(android::hardware::vibrator::V1_0::Effect, android::hardware::vibrator::V1_0::EffectStrength, std::__1::function<void (android::hardware::vibrator::V1_0::Status, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator7performENS2_6EffectENS2_14EffectStrengthENSt3__18functionIFvNS2_6StatusEjEEE(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8Vibrator7performENS2_6EffectENS2_14EffectStrengthENSt3__18functionIFvNS2_6StatusEjEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::vibrator::V1_0::implementation::Vibrator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8vibrator4V1_014implementation8VibratorE = NULL;

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::on(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator2onEj(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8Vibrator2onEj() called");
    return 0;
}

/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::Vibrator(vibrator_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8vibrator4V1_014implementation8VibratorC1EP15vibrator_device(void) {
    ALOGD("_ZN7android8hardware8vibrator4V1_014implementation8VibratorC1EP15vibrator_device() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::vibrator::V1_0::implementation::Vibrator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware8vibrator4V1_014implementation8VibratorE = NULL;
