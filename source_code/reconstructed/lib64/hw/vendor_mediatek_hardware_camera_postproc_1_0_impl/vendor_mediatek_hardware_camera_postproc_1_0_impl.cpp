/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.postproc@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_postproc_1_0_impl"

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
#include "vendor_mediatek_hardware_camera_postproc_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::~PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice-in-vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceE0_NS4_11IPostDeviceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: HIDL_FETCH_IPostDevice */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IPostDevice(void) {
    ALOGD("HIDL_FETCH_IPostDevice() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::~PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::~PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::doChromaNR(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDevice10doChromaNRERKNS4_13ChromaNRParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDevice10doChromaNRERKNS4_13ChromaNRParamE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::~PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::implementation::PostDevice::~PostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014implementation10PostDeviceD1Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
