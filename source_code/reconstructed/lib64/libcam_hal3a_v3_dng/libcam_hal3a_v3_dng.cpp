/*
 * Reverse-Engineered Source for: libcam.hal3a.v3.dng.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcam_hal3a_v3_dng"

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
#include "libcam_hal3a_v3_dng.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NS3Av3::DngInfoImp::DngInfoImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImpC2Ej(void) {
    ALOGD("_ZN6NS3Av310DngInfoImpC2Ej() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::~DngInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImpD1Ev(void) {
    ALOGD("_ZN6NS3Av310DngInfoImpD1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3Av3::DngInfoImp::~DngInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImpD2Ev(void) {
    ALOGD("_ZN6NS3Av310DngInfoImpD2Ev() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getRawBitDepth() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av310DngInfoImp14getRawBitDepthEv(void) {
    ALOGD("_ZNK6NS3Av310DngInfoImp14getRawBitDepthEv() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImp11getInstanceEj(void) {
    ALOGD("_ZN6NS3Av310DngInfoImp11getInstanceEj() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getOB(NVRAM_CAMERA_ISP_PARAM_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImp5getOBERK29NVRAM_CAMERA_ISP_PARAM_STRUCT(void) {
    ALOGD("_ZN6NS3Av310DngInfoImp5getOBERK29NVRAM_CAMERA_ISP_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: NS3Av3::IDngInfo::getInstance(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av38IDngInfo11getInstanceEPKcj(void) {
    ALOGD("_ZN6NS3Av38IDngInfo11getInstanceEPKcj() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getDynamicNoiseProfile(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av310DngInfoImp22getDynamicNoiseProfileEj(void) {
    ALOGD("_ZNK6NS3Av310DngInfoImp22getDynamicNoiseProfileEj() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::convertColorTransform(NVRAM_CAMERA_ISP_PARAM_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImp21convertColorTransformERK29NVRAM_CAMERA_ISP_PARAM_STRUCT(void) {
    ALOGD("_ZN6NS3Av310DngInfoImp21convertColorTransformERK29NVRAM_CAMERA_ISP_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::DngInfoImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImpC1Ej(void) {
    ALOGD("_ZN6NS3Av310DngInfoImpC1Ej() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::~DngInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av310DngInfoImpD0Ev(void) {
    ALOGD("_ZN6NS3Av310DngInfoImpD0Ev() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getStaticMetadata() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av310DngInfoImp17getStaticMetadataEv(void) {
    ALOGD("_ZNK6NS3Av310DngInfoImp17getStaticMetadataEv() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getShadingMapFromHal(NSCam::IMetadata const&, NSCam::IMetadata const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av310DngInfoImp20getShadingMapFromHalERKN5NSCam9IMetadataES4_(void) {
    ALOGD("_ZNK6NS3Av310DngInfoImp20getShadingMapFromHalERKN5NSCam9IMetadataES4_() called");
    return 0;
}

/* Demangled: NS3Av3::DngInfoImp::getShadingMapFromMem(int, NSCam::IMetadata::Memory const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av310DngInfoImp20getShadingMapFromMemEiRKN5NSCam9IMetadata6MemoryE(void) {
    ALOGD("_ZNK6NS3Av310DngInfoImp20getShadingMapFromMemEiRKN5NSCam9IMetadata6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for NS3Av3::DngInfoImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av310DngInfoImpE = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;
