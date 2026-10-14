/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.bgservice@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_bgservice_1_1_impl"

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
#include "vendor_mediatek_hardware_camera_bgservice_1_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::setEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS4_14IEventCallbackEEERNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS4_14IEventCallbackEEERNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IBGService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IBGService(void) {
    ALOGD("HIDL_FETCH_IBGService() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::resetCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap13resetCallbackEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap13resetCallbackEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::setEventCallback_1_1(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE8_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_NS4_14IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getInstanceEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getInstanceEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::setEventCallback(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::requestCallback(int, int, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap15requestCallbackEiijm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap15requestCallbackEiijm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS3_4V1_010IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS3_4V1_014IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS3_4V1_014IEventCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::setEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS3_4V1_014IEventCallbackEEERNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS3_4V1_014IEventCallbackEEERNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::onRequestCallback(int, int, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap17onRequestCallbackEiijm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap17onRequestCallbackEiijm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS4_10IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback::onCompleted(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallback11onCompletedEiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallback11onCompletedEiij() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE = NULL;
