/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.keymaster_attestation@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_keymaster_attestation_1_1_impl"

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
#include "vendor_mediatek_hardware_keymaster_attestation_1_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HIDL_FETCH_IKeymasterDevice */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IKeymasterDevice(void) {
    ALOGD("HIDL_FETCH_IKeymasterDevice() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::attestKeyInstall(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDevice16attestKeyInstallERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDevice16attestKeyInstallERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice-in-vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceE0_NS2_4V1_016IKeymasterDeviceE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::keymaster_attestation::V1_1::IKeymasterDevice-in-vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceE0_NS3_16IKeymasterDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::attestKeyCheck(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDevice14attestKeyCheckERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDevice14attestKeyCheckERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::~KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::~KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::~KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::~KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_1::implementation::KeymasterDevice::~KeymasterDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware21keymaster_attestation4V1_114implementation15KeymasterDeviceD1Ev() called");
    return 0;
}
