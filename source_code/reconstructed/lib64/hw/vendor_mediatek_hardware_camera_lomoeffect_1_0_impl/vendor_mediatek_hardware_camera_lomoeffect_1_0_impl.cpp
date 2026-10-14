/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.lomoeffect@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_lomoeffect_1_0_impl"

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
#include "vendor_mediatek_hardware_camera_lomoeffect_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::allocLomoDstImage(unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS8_11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS8_11hidl_handleE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::LomoIonInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::dlopenLomoHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect13dlopenLomoHalEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect13dlopenLomoHalEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect6uninitEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect6uninitEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::~LomoIonInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::lomoImageDeque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::lomoImageEnque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5resetEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5resetEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::~LomoIonInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_NS4_11ILomoEffectE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE = NULL;

/* Demangled: HIDL_FETCH_ILomoEffect */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ILomoEffect(void) {
    ALOGD("HIDL_FETCH_ILomoEffect() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::freeLomoDstImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoDstImageEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoDstImageEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect4initEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect4initEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::cleanup(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo7cleanupEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo7cleanupEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::freeLomoSrcImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoSrcImageEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoSrcImageEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::allocLomoSrcImage(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoSrcImageEjjjjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoSrcImageEjjjjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::uploadLomoSrcImage(android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS8_10hidl_arrayIjLm3EJEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS8_10hidl_arrayIjLm3EJEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::print(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5printEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5printEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::LomoIonInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC2Ev() called");
    return 0;
}
