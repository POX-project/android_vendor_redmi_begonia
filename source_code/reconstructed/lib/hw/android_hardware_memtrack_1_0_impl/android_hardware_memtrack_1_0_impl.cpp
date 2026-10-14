/*
 * Reverse-Engineered Source for: android.hardware.memtrack@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_memtrack_1_0_impl"

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
#include "android_hardware_memtrack_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::getMemory(int, android::hardware::memtrack::V1_0::MemtrackType, std::__1::function<void (android::hardware::memtrack::V1_0::MemtrackStatus, android::hardware::hidl_vec<android::hardware::memtrack::V1_0::MemtrackRecord> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8Memtrack9getMemoryEiNS2_12MemtrackTypeENSt3__18functionIFvNS2_14MemtrackStatusERKNS0_8hidl_vecINS2_14MemtrackRecordEEEEEE(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8Memtrack9getMemoryEiNS2_12MemtrackTypeENSt3__18functionIFvNS2_14MemtrackStatusERKNS0_8hidl_vecINS2_14MemtrackRecordEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::Memtrack(memtrack_module const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC1EPK15memtrack_module(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8MemtrackC1EPK15memtrack_module() called");
    return 0;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::Memtrack(memtrack_module const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC2EPK15memtrack_module(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8MemtrackC2EPK15memtrack_module() called");
    return 0;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD2Ev(void) {
    ALOGD("_ZN7android8hardware8memtrack4V1_014implementation8MemtrackD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::memtrack::V1_0::IMemtrack-in-android::hardware::memtrack::V1_0::implementation::Memtrack */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS2_9IMemtrackE = NULL;

/* Exported Object: vtable for android::hardware::memtrack::V1_0::implementation::Memtrack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8memtrack4V1_014implementation8MemtrackE = NULL;

/* Demangled: virtual thunk to android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMemtrack */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMemtrack(void) {
    ALOGD("HIDL_FETCH_IMemtrack() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::memtrack::V1_0::implementation::Memtrack */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::memtrack::V1_0::implementation::Memtrack */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware8memtrack4V1_014implementation8MemtrackE = NULL;
