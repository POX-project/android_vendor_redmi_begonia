/*
 * Reverse-Engineered Source for: libgoodixhwfingerprint.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgoodixhwfingerprint"

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
#include "libgoodixhwfingerprint.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11getInstanceEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11getInstanceEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt>::sp(vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtEEC2EPS8_(void) {
    ALOGD("_ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtEEC2EPS8_() called");
    return 0;
}

/* Exported Object: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9sInstanceE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC1Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC1Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::screenOn() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8screenOnEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8screenOnEv() called");
    return 0;
}

/* Exported Object: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9sInstanceE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC2Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC2Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon11getInstanceEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon11getInstanceEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::notify(gf_fingerprint_msg const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon6notifyEPK18gf_fingerprint_msg(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon6notifyEPK18gf_fingerprint_msg() called");
    return 0;
}

/* Exported Object: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon>::sp(vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonEEC2EPS8_(void) {
    ALOGD("_ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonEEC2EPS8_() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD2Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD2Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::stopNavigation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt14stopNavigationEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt14stopNavigationEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::lockout() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7lockoutEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7lockoutEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE = NULL;

/* Exported Object: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::stopCameraCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt17stopCameraCaptureEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt17stopCameraCaptureEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enableFingerprintModule(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt23enableFingerprintModuleEh(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt23enableFingerprintModuleEh() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::navigate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8navigateEj(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8navigateEj() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enumerate() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9enumerateEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9enumerateEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC1Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE = NULL;

/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>::operator=(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEEaSERKS8_(void) {
    ALOGD("_ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEEaSERKS8_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE = NULL;

/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::setSafeClass(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12setSafeClassEj(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12setSafeClassEj() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD2Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD2Ev() called");
    return 0;
}

/* Demangled: registerServices(gf_fingerprint_device*) */
extern "C" __attribute__((visibility("default"))) int _Z16registerServicesP21gf_fingerprint_device(void) {
    ALOGD("_Z16registerServicesP21gf_fingerprint_device() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::testCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>::operator=(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEEaSERKS8_(void) {
    ALOGD("_ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEEaSERKS8_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::setDevice(gf_fingerprint_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9setDeviceEP21gf_fingerprint_device(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9setDeviceEP21gf_fingerprint_device() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::pauseEnroll() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11pauseEnrollEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11pauseEnrollEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::resumeEnroll() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12resumeEnrollEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12resumeEnrollEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::screenOff() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9screenOffEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9screenOffEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::reset_lockout() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13reset_lockoutEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13reset_lockoutEv() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enableFfFeature(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt15enableFfFeatureEh(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt15enableFfFeatureEh() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::setDevice(gf_fingerprint_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9setDeviceEP21gf_fingerprint_device(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9setDeviceEP21gf_fingerprint_device() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::GoodixFingerprintDaemon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC2Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC2Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::cameraCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13cameraCaptureEv(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13cameraCaptureEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE = NULL;

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::dumpCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev() called");
    return 0;
}

/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::notify(gf_fingerprint_dump_msg_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt6notifyEPK25gf_fingerprint_dump_msg_t(void) {
    ALOGD("_ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt6notifyEPK25gf_fingerprint_dump_msg_t() called");
    return 0;
}
