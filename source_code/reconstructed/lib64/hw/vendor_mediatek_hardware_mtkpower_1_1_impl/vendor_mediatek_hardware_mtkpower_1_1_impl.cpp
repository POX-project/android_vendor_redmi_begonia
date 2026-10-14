/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkpower@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkpower_1_1_impl"

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
#include "vendor_mediatek_hardware_mtkpower_1_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::mtkPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower12mtkPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower12mtkPowerHintEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::querySysInfo(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower12querySysInfoEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower12querySysInfoEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerE0_NS2_4V1_09IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::perfLockRelease(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfLockReleaseEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfLockReleaseEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::perfCusLockHint(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfCusLockHintEij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfCusLockHintEij() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: libpowerhal_wrap_LockAcq */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockAcq(void) {
    ALOGD("libpowerhal_wrap_LockAcq() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::~MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::~MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::~MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::~MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::~MtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::perfLockAcquire(int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfE0_NS3_8IMtkPerfE = NULL;

/* Demangled: libpowerhal_wrap_NotifyAppState */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_NotifyAppState(void) {
    ALOGD("libpowerhal_wrap_NotifyAppState() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfE = NULL;

/* Demangled: libpowerhal_wrap_UserScnRestoreAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnRestoreAll(void) {
    ALOGD("libpowerhal_wrap_UserScnRestoreAll() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMtkPower */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMtkPower(void) {
    ALOGD("HIDL_FETCH_IMtkPower() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::setMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_CusLockHint */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_CusLockHint(void) {
    ALOGD("libpowerhal_wrap_CusLockHint() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_SetSysInfo */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_SetSysInfo(void) {
    ALOGD("libpowerhal_wrap_SetSysInfo() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::~MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::~MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::~MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::~MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf::~MtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerE0_NS3_9IMtkPowerE = NULL;

/* Demangled: HIDL_FETCH_IMtkPerf */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMtkPerf(void) {
    ALOGD("HIDL_FETCH_IMtkPerf() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::setSysInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserGetCapability */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserGetCapability(void) {
    ALOGD("libpowerhal_wrap_UserGetCapability() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: libpowerhal_wrap_LockRel */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockRel(void) {
    ALOGD("libpowerhal_wrap_LockRel() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfE0_NS2_4V1_08IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::setSysInfoAsync(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPowerE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_114implementation7MtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower14notifyAppStateERKN7android8hardware11hidl_stringESA_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower14notifyAppStateERKN7android8hardware11hidl_stringESA_iii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::implementation::MtkPower::mtkCusPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower15mtkCusPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_114implementation8MtkPower15mtkCusPowerHintEii() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_Init */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_Init(void) {
    ALOGD("libpowerhal_wrap_Init() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserScnDisableAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnDisableAll(void) {
    ALOGD("libpowerhal_wrap_UserScnDisableAll() called");
    return 0;
}
