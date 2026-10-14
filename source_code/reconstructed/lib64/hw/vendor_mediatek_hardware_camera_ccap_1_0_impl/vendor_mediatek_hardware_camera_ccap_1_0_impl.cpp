/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.ccap@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_ccap_1_0_impl"

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
#include "vendor_mediatek_hardware_camera_ccap_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl::intf_ccap_const(android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl::intf_ccap_adb_op() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl16intf_ccap_adb_opEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl16intf_ccap_adb_opEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControlE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControlE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControlE = NULL;

/* Demangled: HIDL_FETCH_ICCAPControl */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ICCAPControl(void) {
    ALOGD("HIDL_FETCH_ICCAPControl() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl::intf_ccap_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl14intf_ccap_initEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl14intf_ccap_initEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl::intf_ccap_atci_op(android::hardware::hidl_memory const&, android::hardware::hidl_memory const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESB_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESB_i() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl-in-vendor::mediatek::hardware::camera::ccap::V1_0::implementation::CCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_014implementation11CCAPControlE0_NS4_12ICCAPControlE = NULL;
