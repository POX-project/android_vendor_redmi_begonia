/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.displayfeature@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_displayfeature_1_0_impl"

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
#include "vendor_xiaomi_hardware_displayfeature_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::callbacks_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10callbacks_E = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendMessage(int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::registerCallback(int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::setFeature(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10setFeatureEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10setFeatureEiiii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendPostProcCommand(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature19sendPostProcCommandEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature19sendPostProcCommandEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::DisplayFeature(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC1EPK11hw_module_t(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC1EPK11hw_module_t() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IDisplayFeature */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IDisplayFeature(void) {
    ALOGD("HIDL_FETCH_IDisplayFeature() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::initDispatch() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature12initDispatchEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature12initDispatchEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::notifyListeners(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15notifyListenersEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15notifyListenersEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::setFunction(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11setFunctionEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11setFunctionEiiii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::initCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16initCapabilitiesEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16initCapabilitiesEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE8_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::DisplayFeature(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC2EPK11hw_module_t(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC2EPK11hw_module_t() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::callbacks_lock_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15callbacks_lock_E = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::notifyBrightness(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16notifyBrightnessEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16notifyBrightnessEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendPanelCommand(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendRefreshCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature18sendRefreshCommandEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature18sendRefreshCommandEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_NS3_15IDisplayFeatureE = NULL;
