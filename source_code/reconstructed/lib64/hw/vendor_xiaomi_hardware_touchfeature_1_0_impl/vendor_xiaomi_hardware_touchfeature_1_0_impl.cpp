/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.touchfeature@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_touchfeature_1_0_impl"

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
#include "vendor_xiaomi_hardware_touchfeature_1_0_impl.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_XIAOMI_TOUCH "/dev/xiaomi-touch"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_XIAOMI_TOUCH, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_XIAOMI_TOUCH, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_XIAOMI_TOUCH, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::setModeValue(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature12setModeValueEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature12setModeValueEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::getModeCurValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeCurValueEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeCurValueEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::getModeMaxValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeMaxValueEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeMaxValueEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::~TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::~TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::~TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureE = NULL;

/* Demangled: HIDL_FETCH_ITouchFeature */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ITouchFeature(void) {
    ALOGD("HIDL_FETCH_ITouchFeature() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::getModeMinValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeMinValueEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature15getModeMinValueEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::getModeValue(int, std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature12getModeValueEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature12getModeValueEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::getModeDefaultValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature19getModeDefaultValueEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature19getModeDefaultValueEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::modeReset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature9modeResetEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeature9modeResetEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureC1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::~TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature-in-vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureE0_NS3_13ITouchFeatureE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::implementation::TouchFeature::~TouchFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware12touchfeature4V1_014implementation12TouchFeatureD0Ev() called");
    return 0;
}
