/*
 * Reverse-Engineered Source for: android.hardware.power-service-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_power_service_mediatek"

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
#include "android_hardware_power_service_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD2Ev(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5PowerD2Ev() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_LockAcq */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockAcq(void) {
    ALOGD("libpowerhal_wrap_LockAcq() called");
    return 0;
}

/* Exported Object: guard variable for aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::setMode(aidl::android::hardware::power::Mode, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5Power7setModeENS2_4ModeEb(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5Power7setModeENS2_4ModeEb() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD1Ev(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5PowerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for aidl::android::hardware::power::impl::mediatek::Power */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4aidl7android8hardware5power4impl8mediatek5PowerE = NULL;

/* Demangled: libpowerhal_wrap_CusLockHint */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_CusLockHint(void) {
    ALOGD("libpowerhal_wrap_CusLockHint() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_Init */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_Init(void) {
    ALOGD("libpowerhal_wrap_Init() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserScnRestoreAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnRestoreAll(void) {
    ALOGD("libpowerhal_wrap_UserScnRestoreAll() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::setBoost(aidl::android::hardware::power::Boost, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5Power8setBoostENS2_5BoostEi(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5Power8setBoostENS2_5BoostEi() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD0Ev(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5PowerD0Ev() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_NotifyAppState */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_NotifyAppState(void) {
    ALOGD("libpowerhal_wrap_NotifyAppState() called");
    return 0;
}

/* Demangled: ndk::BnCInterface<aidl::android::hardware::power::IPower>::asBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk12BnCInterfaceIN4aidl7android8hardware5power6IPowerEE8asBinderEv(void) {
    ALOGD("_ZN3ndk12BnCInterfaceIN4aidl7android8hardware5power6IPowerEE8asBinderEv() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::isBoostSupported(aidl::android::hardware::power::Boost, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5Power16isBoostSupportedENS2_5BoostEPb(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5Power16isBoostSupportedENS2_5BoostEPb() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::Power() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5PowerC2Ev(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5PowerC2Ev() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserScnDisableAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnDisableAll(void) {
    ALOGD("libpowerhal_wrap_UserScnDisableAll() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_SetSysInfo */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_SetSysInfo(void) {
    ALOGD("libpowerhal_wrap_SetSysInfo() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserGetCapability */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserGetCapability(void) {
    ALOGD("libpowerhal_wrap_UserGetCapability() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::isModeSupported(aidl::android::hardware::power::Mode, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5Power15isModeSupportedENS2_4ModeEPb(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5Power15isModeSupportedENS2_4ModeEPb() called");
    return 0;
}

/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::Power() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware5power4impl8mediatek5PowerC1Ev(void) {
    ALOGD("_ZN4aidl7android8hardware5power4impl8mediatek5PowerC1Ev() called");
    return 0;
}

/* Exported Object: aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Demangled: libpowerhal_wrap_LockRel */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockRel(void) {
    ALOGD("libpowerhal_wrap_LockRel() called");
    return 0;
}
