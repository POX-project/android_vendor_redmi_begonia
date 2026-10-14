/*
 * Reverse-Engineered Source for: libfeature_fsc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_fsc"

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
#include "libfeature_fsc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: FSCHalImp::createDumpFile() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp14createDumpFileEv(void) {
    ALOGD("_ZN9FSCHalImp14createDumpFileEv() called");
    return 0;
}

/* Demangled: FSCHalImp::FSCHalImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImpC2Ej(void) {
    ALOGD("_ZN9FSCHalImpC2Ej() called");
    return 0;
}

/* Demangled: FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImpD1Ev(void) {
    ALOGD("_ZN9FSCHalImpD1Ev() called");
    return 0;
}

/* Exported Object: vtable for FSCHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9FSCHalImp = NULL;

/* Demangled: virtual thunk to FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9FSCHalImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N9FSCHalImpD1Ev() called");
    return 0;
}

/* Demangled: FSCUtil::FSCUtil(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtilC2Ei(void) {
    ALOGD("_ZN7FSCUtilC2Ei() called");
    return 0;
}

/* Demangled: FSCUtil::~FSCUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtilD2Ev(void) {
    ALOGD("_ZN7FSCUtilD2Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: FSCHalImp::FSCHalImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImpC1Ej(void) {
    ALOGD("_ZN9FSCHalImpC1Ej() called");
    return 0;
}

/* Demangled: FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImpD0Ev(void) {
    ALOGD("_ZN9FSCHalImpD0Ev() called");
    return 0;
}

/* Exported Object: vtable for FSCHal */
extern "C" __attribute__((visibility("default"))) void* _ZTV6FSCHal = NULL;

/* Demangled: non-virtual thunk to FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9FSCHalImpD1Ev(void) {
    ALOGD("_ZThn8_N9FSCHalImpD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9FSCHalImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N9FSCHalImpD0Ev() called");
    return 0;
}

/* Demangled: FSCUtil::FSCUtil(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtilC1Ei(void) {
    ALOGD("_ZN7FSCUtilC1Ei() called");
    return 0;
}

/* Demangled: FSCUtil::~FSCUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtilD1Ev(void) {
    ALOGD("_ZN7FSCUtilD1Ev() called");
    return 0;
}

/* Exported Object: vtable for FSCUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV7FSCUtil = NULL;

/* Demangled: FSCHal::CreateInstance(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6FSCHal14CreateInstanceEPKcj(void) {
    ALOGD("_ZN6FSCHal14CreateInstanceEPKcj() called");
    return 0;
}

/* Demangled: non-virtual thunk to FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9FSCHalImpD0Ev(void) {
    ALOGD("_ZThn8_N9FSCHalImpD0Ev() called");
    return 0;
}

/* Demangled: FSCUtil::~FSCUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtilD0Ev(void) {
    ALOGD("_ZN7FSCUtilD0Ev() called");
    return 0;
}

/* Demangled: FSCHalImp::getAFInitParams(NS3Av3::IHal3A*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp15getAFInitParamsEPN6NS3Av36IHal3AE(void) {
    ALOGD("_ZN9FSCHalImp15getAFInitParamsEPN6NS3Av36IHal3AE() called");
    return 0;
}

/* Demangled: non-virtual thunk to FSCHalImp::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9FSCHalImp10doNotifyCbEilll(void) {
    ALOGD("_ZThn8_N9FSCHalImp10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: FSCUtil::isFSCSubpixelEnabled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtil20isFSCSubpixelEnabledEj(void) {
    ALOGD("_ZN7FSCUtil20isFSCSubpixelEnabledEj() called");
    return 0;
}

/* Exported Object: VTT for FSCHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTT9FSCHalImp = NULL;

/* Demangled: FSCUtil::getConstrainFlag(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtil16getConstrainFlagEj(void) {
    ALOGD("_ZN7FSCUtil16getConstrainFlagEj() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: FSCHal::~FSCHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6FSCHalD2Ev(void) {
    ALOGD("_ZN6FSCHalD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NS3Av3::IHal3ACb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av38IHal3ACbE = NULL;

/* Demangled: FSCUtil::getFSCDebugLevel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7FSCUtil16getFSCDebugLevelEj(void) {
    ALOGD("_ZN7FSCUtil16getFSCDebugLevelEj() called");
    return 0;
}

/* Demangled: FSCHal::~FSCHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6FSCHalD1Ev(void) {
    ALOGD("_ZN6FSCHalD1Ev() called");
    return 0;
}

/* Demangled: FSCHalImp::Init(NS3Av3::IHal3A*, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp4InitEPN6NS3Av36IHal3AEN5NSCam5MSizeE(void) {
    ALOGD("_ZN9FSCHalImp4InitEPN6NS3Av36IHal3AEN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: FSCHalImp::Uninit(NS3Av3::IHal3A*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp6UninitEPN6NS3Av36IHal3AE(void) {
    ALOGD("_ZN9FSCHalImp6UninitEPN6NS3Av36IHal3AE() called");
    return 0;
}

/* Exported Object: construction vtable for FSCHal-in-FSCHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC9FSCHalImp0_6FSCHal = NULL;

/* Exported Object: VTT for FSCHal */
extern "C" __attribute__((visibility("default"))) void* _ZTT6FSCHal = NULL;

/* Demangled: virtual thunk to FSCHal::~FSCHal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6FSCHalD1Ev(void) {
    ALOGD("_ZTv0_n24_N6FSCHalD1Ev() called");
    return 0;
}

/* Demangled: FSCHal::~FSCHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6FSCHalD0Ev(void) {
    ALOGD("_ZN6FSCHalD0Ev() called");
    return 0;
}

/* Demangled: FSCHalImp::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp10doNotifyCbEilll(void) {
    ALOGD("_ZN9FSCHalImp10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: FSCHalImp::processResult(int, NSCam::IMetadata*, NSCam::IMetadata*, NS3Av3::MetaSet_T&, NS3Av3::IHal3A*, int, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, unsigned int, unsigned int, unsigned int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImp13processResultEiPN5NSCam9IMetadataES2_RN6NS3Av39MetaSet_TEPNS3_6IHal3AEiRKNS0_8NSIoPipe11NSCamIOPipe8QBufInfoEjjjRS1_(void) {
    ALOGD("_ZN9FSCHalImp13processResultEiPN5NSCam9IMetadataES2_RN6NS3Av39MetaSet_TEPNS3_6IHal3AEiRKNS0_8NSIoPipe11NSCamIOPipe8QBufInfoEjjjRS1_() called");
    return 0;
}

/* Demangled: virtual thunk to FSCHal::~FSCHal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6FSCHalD0Ev(void) {
    ALOGD("_ZTv0_n24_N6FSCHalD0Ev() called");
    return 0;
}

/* Demangled: FSCHalImp::~FSCHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCHalImpD2Ev(void) {
    ALOGD("_ZN9FSCHalImpD2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
