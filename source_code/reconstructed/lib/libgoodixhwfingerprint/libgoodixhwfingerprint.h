/*
 * Reverse-Engineered ABI Specification for: libgoodixhwfingerprint.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgoodixhwfingerprint.so
 */

#ifndef BEGONIA_RE_LIBGOODIXHWFINGERPRINT_H
#define BEGONIA_RE_LIBGOODIXHWFINGERPRINT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11getInstanceEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::getInstance() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11getInstanceEv(void);

/* Symbol: _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtEEC2EPS8_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt>::sp(vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt*) */
int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtEEC2EPS8_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9sInstanceE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::sInstance */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9sInstanceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::GoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8screenOnEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::screenOn() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8screenOnEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9sInstanceE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::sInstance */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9sInstanceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::GoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon11getInstanceEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::getInstance() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon11getInstanceEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon6notifyEPK18gf_fingerprint_msg */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::notify(gf_fingerprint_msg const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon6notifyEPK18gf_fingerprint_msg(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev(void);

/* Symbol: _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonEEC2EPS8_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon>::sp(vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon*) */
int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonEEC2EPS8_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt14stopNavigationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::stopNavigation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt14stopNavigationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7lockoutEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::lockout() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7lockoutEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt17stopCameraCaptureEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::stopCameraCapture() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt17stopCameraCaptureEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt23enableFingerprintModuleEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enableFingerprintModule(unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt23enableFingerprintModuleEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8navigateEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::navigate(unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt8navigateEj(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9enumerateEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enumerate() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9enumerateEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::GoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtC1Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE;

/* Symbol: _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEEaSERKS8_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>::operator=(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEEaSERKS8_(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE;

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD1Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12setSafeClassEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::setSafeClass(unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12setSafeClassEj(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD2Ev(void);

/* Symbol: _Z16registerServicesP21gf_fingerprint_device */
/* Demangled: registerServices(gf_fingerprint_device*) */
int _Z16registerServicesP21gf_fingerprint_device(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::testCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEEaSERKS8_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>::operator=(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN7android2spIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEEaSERKS8_(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9setDeviceEP21gf_fingerprint_device */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::setDevice(gf_fingerprint_device*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9setDeviceEP21gf_fingerprint_device(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::~GoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11pauseEnrollEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::pauseEnroll() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt11pauseEnrollEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12resumeEnrollEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::resumeEnroll() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt12resumeEnrollEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9screenOffEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::screenOff() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt9screenOffEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13reset_lockoutEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::reset_lockout() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13reset_lockoutEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt15enableFfFeatureEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::enableFfFeature(unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt15enableFfFeatureEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9setDeviceEP21gf_fingerprint_device */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::setDevice(gf_fingerprint_device*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon9setDeviceEP21gf_fingerprint_device(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon::GoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonC2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13cameraCaptureEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::cameraCapture() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt13cameraCaptureEv(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemon */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation23GoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::dumpCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD0Ev(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::~GoodixFingerprintDaemonExt() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExtD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt6notifyEPK25gf_fingerprint_dump_msg_t */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::implementation::GoodixFingerprintDaemonExt::notify(gf_fingerprint_dump_msg_t const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_114implementation26GoodixFingerprintDaemonExt6notifyEPK25gf_fingerprint_dump_msg_t(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGOODIXHWFINGERPRINT_H */
