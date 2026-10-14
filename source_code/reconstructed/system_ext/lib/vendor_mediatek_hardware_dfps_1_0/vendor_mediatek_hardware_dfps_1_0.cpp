/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.dfps@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_dfps_1_0"

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
#include "vendor_mediatek_hardware_dfps_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync, vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncENS7_9IFpsVsyncEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncENS7_9IFpsVsyncEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::BnHwFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC2ERKN7android2spINS3_10IFpsPolicyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC2ERKN7android2spINS3_10IFpsPolicyEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS6_12BpHwFpsVsyncENS6_12BnHwFpsVsyncEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS6_12BpHwFpsVsyncENS6_12BnHwFpsVsyncEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::BnHwFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC2ERKN7android2spINS3_8IFpsInfoEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC2ERKN7android2spINS3_8IFpsInfoEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::BpHwFpsInfoClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackENS7_14IVsyncCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackENS7_14IVsyncCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS6_9IFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClient13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClient13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_setFps(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12_hidl_setFpsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12_hidl_setFpsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::BpHwVsyncCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE8_NS0_11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createInfoClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::BpHwFpsVsync(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::BpHwFpsPolicyClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setForegroundInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::BnHwFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC2ERKN7android2spINS3_15IFpsVsyncClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC2ERKN7android2spINS3_15IFpsVsyncClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_regVsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_regVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_9IFpsVsyncEEERKNSC_INS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_regVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_9IFpsVsyncEEERKNSC_INS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::BsVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC1EN7android2spINS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC1EN7android2spINS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::BnHwFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC1ERKN7android2spINS3_14IFpsInfoClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC1ERKN7android2spINS3_14IFpsInfoClientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientENS7_14IFpsInfoClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientENS7_14IFpsInfoClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE4_NS0_10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::BpHwFpsPolicy(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE8_NS0_11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createInfoClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService22_hidl_createInfoClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService22_hidl_createInfoClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16setNumberDisplayEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::BsFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC1EN7android2spINS3_16IFpsPolicyClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC1EN7android2spINS3_16IFpsPolicyClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_NS3_8IFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_regInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient13_hidl_regInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient13_hidl_regInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient4pingEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::BpHwFpsInfoClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android8hardware11BpInterfaceINS3_16IFpsPolicyClientEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::BsFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC2EN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC2EN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::BnHwVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC1ERKN7android2spINS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC1ERKN7android2spINS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::BpHwVsyncCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10descriptorE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::BpHwFpsVsyncClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::BnHwFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC2ERKN7android2spINS3_17IFpsPolicyServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC2ERKN7android2spINS3_17IFpsPolicyServiceEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::regVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS6_INS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS6_INS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14setSingleLayerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14setSingleLayerEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::BpHwFpsVsync(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::BsFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC1EN7android2spINS3_8IFpsInfoEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC1EN7android2spINS3_8IFpsInfoEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_NS3_14IFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::BsFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC1EN7android2spINS3_17IFpsPolicyServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC1EN7android2spINS3_17IFpsPolicyServiceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS6_17BpHwVsyncCallbackENS6_17BnHwVsyncCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS6_17BpHwVsyncCallbackENS6_17BnHwVsyncCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::unregPolicy(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11unregPolicyEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11unregPolicyEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::BpHwFpsPolicy(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::BsFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC2EN7android2spINS3_8IFpsInfoEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC2EN7android2spINS3_8IFpsInfoEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS6_11BpHwFpsInfoENS6_11BnHwFpsInfoEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS6_11BpHwFpsInfoENS6_11BnHwFpsInfoEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_getPanelInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient18_hidl_getPanelInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient18_hidl_getPanelInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE0_NS3_15IFpsVsyncClientE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE4_NS0_10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setForegroundInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient23_hidl_setForegroundInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient23_hidl_setForegroundInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::BnHwFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC1ERKN7android2spINS3_10IFpsPolicyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC1ERKN7android2spINS3_10IFpsPolicyEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyENS7_10IFpsPolicyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyENS7_10IFpsPolicyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getPanelInfo(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS_4hidl4base4V1_05IBaseENS7_19BpHwFpsPolicyClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS_4hidl4base4V1_05IBaseENS7_19BpHwFpsPolicyClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createVsyncClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService23_hidl_createVsyncClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_15IFpsVsyncClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService23_hidl_createVsyncClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_15IFpsVsyncClientEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setWindowFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19_hidl_setWindowFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19_hidl_setWindowFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::BsVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC2EN7android2spINS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC2EN7android2spINS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_forbidAdjustingVsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::BnHwFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC1ERKN7android2spINS3_16IFpsPolicyClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC1ERKN7android2spINS3_16IFpsPolicyClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::BnHwFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC2ERKN7android2spINS3_14IFpsInfoClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC2ERKN7android2spINS3_14IFpsInfoClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::BpHwFpsVsyncClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_getFpsRange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_getFpsRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_getFpsRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setSingleLayer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient20_hidl_setSingleLayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient20_hidl_setSingleLayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_NS3_10IFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::BsFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC2EN7android2spINS3_17IFpsPolicyServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC2EN7android2spINS3_17IFpsPolicyServiceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_regPolicy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15_hidl_regPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_10IFpsPolicyEEERKNS6_11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15_hidl_regPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_10IFpsPolicyEEERKNS6_11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS6_13BpHwFpsPolicyENS6_13BnHwFpsPolicyEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS6_13BpHwFpsPolicyENS6_13BnHwFpsPolicyEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_NS3_9IFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setInputWindows(android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::BsFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC2EN7android2spINS3_16IFpsPolicyClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC2EN7android2spINS3_16IFpsPolicyClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE0_NS3_10IFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::dumpInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient4pingEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_dumpDebugInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::BnHwVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC2ERKN7android2spINS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC2ERKN7android2spINS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createVsyncClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE0_NS3_8IFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setNumberDisplay(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient22_hidl_setNumberDisplayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient22_hidl_setNumberDisplayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android8hardware11BpInterfaceINS3_9IFpsVsyncEEE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS_4hidl4base4V1_05IBaseENS7_18BpHwFpsVsyncClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS_4hidl4base4V1_05IBaseENS7_18BpHwFpsVsyncClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android8hardware11BpInterfaceINS3_15IFpsVsyncClientEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_unregPolicy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_unregPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_unregPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_regInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13_hidl_regInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_8IFpsInfoEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13_hidl_regInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_8IFpsInfoEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setHwcInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient16_hidl_setHwcInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient16_hidl_setHwcInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setNumberDisplay(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient22_hidl_setNumberDisplayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient22_hidl_setNumberDisplayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::BsFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC1EN7android2spINS3_15IFpsVsyncClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC1EN7android2spINS3_15IFpsVsyncClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwFpsPolicyServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwFpsPolicyServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10descriptorE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::BsFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC1EN7android2spINS3_14IFpsInfoClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC1EN7android2spINS3_14IFpsInfoClientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::BsFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC1EN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC1EN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setInputWindows(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21_hidl_setInputWindowsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21_hidl_setInputWindowsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::BnHwFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC2ERKN7android2spINS3_16IFpsPolicyClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC2ERKN7android2spINS3_16IFpsPolicyClientEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::_hidl_onSwVsyncChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13enableTrackerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13enableTrackerEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE0_NS3_9IFpsVsyncE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::BpHwFpsPolicyService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_NS3_14IVsyncCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android8hardware11BpInterfaceINS3_14IVsyncCallbackEEE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::BsFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC2EN7android2spINS3_15IFpsVsyncClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC2EN7android2spINS3_15IFpsVsyncClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createPolicyClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE0_NS3_14IFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::BsFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC1EN7android2spINS3_10IFpsPolicyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC1EN7android2spINS3_10IFpsPolicyEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android8hardware11BpInterfaceINS3_17IFpsPolicyServiceEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClient13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClient13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::BnHwFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC1ERKN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC1ERKN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setInputWindows(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient21_hidl_setInputWindowsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient21_hidl_setInputWindowsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createInfoClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService22_hidl_createInfoClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_14IFpsInfoClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService22_hidl_createInfoClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_14IFpsInfoClientEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::BnHwFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC1ERKN7android2spINS3_17IFpsPolicyServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC1ERKN7android2spINS3_17IFpsPolicyServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_NS3_15IFpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::dumpDebugInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_regPolicy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient15_hidl_regPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient15_hidl_regPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfo13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfo13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS5_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS5_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS6_18BpHwFpsVsyncClientENS6_18BnHwFpsVsyncClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS6_18BpHwFpsVsyncClientENS6_18BnHwFpsVsyncClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS_4hidl4base4V1_05IBaseENS7_17BpHwVsyncCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS_4hidl4base4V1_05IBaseENS7_17BpHwVsyncCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_forbidAdjustingVsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_setFps(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12_hidl_setFpsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12_hidl_setFpsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientENS7_15IFpsVsyncClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientENS7_15IFpsVsyncClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS6_8IFpsInfoE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_dumpDebugInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::BsFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC2EN7android2spINS3_10IFpsPolicyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC2EN7android2spINS3_10IFpsPolicyEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::BpHwFpsPolicyService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::BnHwFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC2ERKN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC2ERKN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_NS3_16IFpsPolicyClientE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android8hardware11BpInterfaceINS3_8IFpsInfoEEE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient10setHwcInfoERKNS3_7HwcInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient10setHwcInfoERKNS3_7HwcInfoE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setHwcInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16_hidl_setHwcInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_7HwcInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16_hidl_setHwcInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_7HwcInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS6_19BpHwFpsPolicyClientENS6_19BnHwFpsPolicyClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS6_19BpHwFpsPolicyClientENS6_19BnHwFpsPolicyClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::BsFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC2EN7android2spINS3_14IFpsInfoClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC2EN7android2spINS3_14IFpsInfoClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::forbidAdjustingVsync(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20forbidAdjustingVsyncEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20forbidAdjustingVsyncEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE = NULL;

/* Exported Object: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_unregInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient15_hidl_unregInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient15_hidl_unregInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE0_NS3_16IFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS_4hidl4base4V1_05IBaseENS7_12BpHwFpsVsyncEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS_4hidl4base4V1_05IBaseENS7_12BpHwFpsVsyncEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS_4hidl4base4V1_05IBaseENS7_17BpHwFpsInfoClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS_4hidl4base4V1_05IBaseENS7_17BpHwFpsInfoClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_unregPolicy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_unregPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_unregPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::BnHwFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC1ERKN7android2spINS3_8IFpsInfoEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC1ERKN7android2spINS3_8IFpsInfoEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS6_10IFpsPolicyE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setWindowFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient19_hidl_setWindowFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient19_hidl_setWindowFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::BpHwFpsInfo(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13setWindowFlagEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13setWindowFlagEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createPolicyClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService24_hidl_createPolicyClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService24_hidl_createPolicyClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_enableTracker(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient19_hidl_enableTrackerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient19_hidl_enableTrackerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setForegroundInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient23_hidl_setForegroundInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient23_hidl_setForegroundInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::unregInfo(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient9unregInfoEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient9unregInfoEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE8_NS0_11BpHwRefBaseE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo, vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoENS7_8IFpsInfoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoENS7_8IFpsInfoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClient13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClient13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onSwVsyncChange(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onSwVsyncChangeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onSwVsyncChangeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::_hidl_onSwVsyncChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_dumpInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_dumpInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_dumpInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy4pingEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_dumpInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_dumpInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_dumpInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware7IBinderE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS_4hidl4base4V1_05IBaseENS7_11BpHwFpsInfoEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS_4hidl4base4V1_05IBaseENS7_11BpHwFpsInfoEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback-in-vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE0_NS3_14IVsyncCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicy13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicy13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::BpHwFpsPolicyClient(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_getFpsRange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_getFpsRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorESE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_getFpsRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorESE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsync13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsync13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::BnHwFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC1ERKN7android2spINS3_15IFpsVsyncClientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC1ERKN7android2spINS3_15IFpsVsyncClientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientENS7_16IFpsPolicyClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientENS7_16IFpsPolicyClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_enableTracker(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19_hidl_enableTrackerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19_hidl_enableTrackerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE4_NS0_10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::BpHwFpsInfo(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_unregInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15_hidl_unregInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15_hidl_unregInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android8hardware11BpInterfaceINS3_14IFpsInfoClientEEE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android8hardware11BpInterfaceINS3_10IFpsPolicyEEE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setSingleLayer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20_hidl_setSingleLayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20_hidl_setSingleLayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_regVsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_regVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_regVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_getPanelInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient18_hidl_getPanelInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient18_hidl_getPanelInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createVsyncClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService23_hidl_createVsyncClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService23_hidl_createVsyncClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createPolicyClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService24_hidl_createPolicyClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_16IFpsPolicyClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService24_hidl_createPolicyClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_16IFpsPolicyClientEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS6_17BpHwFpsInfoClientENS6_17BnHwFpsInfoClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS6_17BpHwFpsInfoClientENS6_17BnHwFpsInfoClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceENS7_17IFpsPolicyServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceENS7_17IFpsPolicyServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS_4hidl4base4V1_05IBaseENS7_13BpHwFpsPolicyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS_4hidl4base4V1_05IBaseENS7_13BpHwFpsPolicyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10descriptorE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv() called");
    return 0;
}
