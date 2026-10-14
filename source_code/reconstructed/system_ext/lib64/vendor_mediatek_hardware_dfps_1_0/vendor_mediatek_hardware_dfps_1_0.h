/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.dfps@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.dfps@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE8_NS0_10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE8_NS0_10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE8_NS0_10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE8_NS0_10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncENS7_9IFpsVsyncEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync, vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncENS7_9IFpsVsyncEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC2ERKN7android2spINS3_10IFpsPolicyEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::BnHwFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC2ERKN7android2spINS3_10IFpsPolicyEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS6_12BpHwFpsVsyncENS6_12BnHwFpsVsyncEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS6_12BpHwFpsVsyncENS6_12BnHwFpsVsyncEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC2ERKN7android2spINS3_8IFpsInfoEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::BnHwFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC2ERKN7android2spINS3_8IFpsInfoEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::BpHwFpsInfoClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackENS7_14IVsyncCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackENS7_14IVsyncCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS6_9IFpsVsyncE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS6_9IFpsVsyncE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClient13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClient13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12_hidl_setFpsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13FpsPolicyInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_setFps(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12_hidl_setFpsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::BpHwVsyncCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE16_NS0_11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE16_NS0_11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createInfoClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::BpHwFpsVsync(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE */
/* Demangled: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::BpHwFpsPolicyClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setForegroundInfo(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC2ERKN7android2spINS3_15IFpsVsyncClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::BnHwFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC2ERKN7android2spINS3_15IFpsVsyncClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_regVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_9IFpsVsyncEEERKNSC_INS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_regVsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_regVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_9IFpsVsyncEEERKNSC_INS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC1EN7android2spINS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::BsVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC1EN7android2spINS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC1ERKN7android2spINS3_14IFpsInfoClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::BnHwFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC1ERKN7android2spINS3_14IFpsInfoClientEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientENS7_14IFpsInfoClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientENS7_14IFpsInfoClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::BpHwFpsPolicy(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService22_hidl_createInfoClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createInfoClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService22_hidl_createInfoClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16setNumberDisplayEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setNumberDisplay(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16setNumberDisplayEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC1EN7android2spINS3_16IFpsPolicyClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::BsFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC1EN7android2spINS3_16IFpsPolicyClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_NS3_8IFpsInfoE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_NS3_8IFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient13_hidl_regInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_regInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient13_hidl_regInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD2Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11unregPolicyEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::unregPolicy(unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11unregPolicyEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD1Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::BpHwFpsInfoClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android8hardware11BpInterfaceINS3_16IFpsPolicyClientEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android8hardware11BpInterfaceINS3_16IFpsPolicyClientEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC2EN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::BsFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC2EN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC1ERKN7android2spINS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::BnHwVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC1ERKN7android2spINS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::BpHwVsyncCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::BpHwFpsVsyncClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC2ERKN7android2spINS3_17IFpsPolicyServiceEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::BnHwFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC2ERKN7android2spINS3_17IFpsPolicyServiceEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS6_INS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::regVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS6_INS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14setSingleLayerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setSingleLayer(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14setSingleLayerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::BpHwFpsVsync(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC1EN7android2spINS3_8IFpsInfoEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::BsFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC1EN7android2spINS3_8IFpsInfoEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_NS3_14IFpsInfoClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_NS3_14IFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC1EN7android2spINS3_17IFpsPolicyServiceEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::BsFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC1EN7android2spINS3_17IFpsPolicyServiceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS6_17BpHwVsyncCallbackENS6_17BnHwVsyncCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback, vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS6_17BpHwVsyncCallbackENS6_17BnHwVsyncCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21notifySyspropsChangedEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::BpHwFpsPolicy(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC2EN7android2spINS3_8IFpsInfoEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::BsFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoC2EN7android2spINS3_8IFpsInfoEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE;

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS6_11BpHwFpsInfoENS6_11BnHwFpsInfoEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS6_11BpHwFpsInfoENS6_11BnHwFpsInfoEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient18_hidl_getPanelInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_getPanelInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient18_hidl_getPanelInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE0_NS3_15IFpsVsyncClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE0_NS3_15IFpsVsyncClientE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient23_hidl_setForegroundInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setForegroundInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient23_hidl_setForegroundInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC1ERKN7android2spINS3_10IFpsPolicyEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::BnHwFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyC1ERKN7android2spINS3_10IFpsPolicyEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyENS7_10IFpsPolicyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyENS7_10IFpsPolicyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::~BnHwFpsVsync() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getPanelInfo(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS_4hidl4base4V1_05IBaseENS7_19BpHwFpsPolicyClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS_4hidl4base4V1_05IBaseENS7_19BpHwFpsPolicyClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE;

/* Symbol: _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE */
/* Demangled: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService23_hidl_createVsyncClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_15IFpsVsyncClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createVsyncClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService23_hidl_createVsyncClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_15IFpsVsyncClientEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19_hidl_setWindowFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setWindowFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19_hidl_setWindowFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC2EN7android2spINS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::BsVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackC2EN7android2spINS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_forbidAdjustingVsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC1ERKN7android2spINS3_16IFpsPolicyClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::BnHwFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC1ERKN7android2spINS3_16IFpsPolicyClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC2ERKN7android2spINS3_14IFpsInfoClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::BnHwFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientC2ERKN7android2spINS3_14IFpsInfoClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::BpHwFpsVsyncClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_getFpsRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_getFpsRange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_getFpsRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient20_hidl_setSingleLayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setSingleLayer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient20_hidl_setSingleLayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_NS3_10IFpsPolicyE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_NS3_10IFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC2EN7android2spINS3_17IFpsPolicyServiceEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::BsFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyServiceC2EN7android2spINS3_17IFpsPolicyServiceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15_hidl_regPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_10IFpsPolicyEEERKNS6_11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_regPolicy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15_hidl_regPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_10IFpsPolicyEEERKNS6_11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD1Ev(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS6_13BpHwFpsPolicyENS6_13BnHwFpsPolicyEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS6_13BpHwFpsPolicyENS6_13BnHwFpsPolicyEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_NS3_9IFpsVsyncE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_NS3_9IFpsVsyncE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setInputWindows(android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC2EN7android2spINS3_16IFpsPolicyClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::BsFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientC2EN7android2spINS3_16IFpsPolicyClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_unregPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_unregPolicy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_unregPolicyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13_hidl_regInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_8IFpsInfoEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_regInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13_hidl_regInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_8IFpsInfoEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE0_NS3_10IFpsPolicyE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE0_NS3_10IFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::dumpInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_dumpDebugInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC2ERKN7android2spINS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::BnHwVsyncCallback(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackC2ERKN7android2spINS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createVsyncClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE0_NS3_8IFpsInfoE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE0_NS3_8IFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient22_hidl_setNumberDisplayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setNumberDisplay(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient22_hidl_setNumberDisplayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android8hardware11BpInterfaceINS3_9IFpsVsyncEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE0_N7android8hardware11BpInterfaceINS3_9IFpsVsyncEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS_4hidl4base4V1_05IBaseENS7_18BpHwFpsVsyncClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS_4hidl4base4V1_05IBaseENS7_18BpHwFpsVsyncClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android8hardware11BpInterfaceINS3_15IFpsVsyncClientEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android8hardware11BpInterfaceINS3_15IFpsVsyncClientEEE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient16_hidl_setHwcInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setHwcInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient16_hidl_setHwcInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient22_hidl_setNumberDisplayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setNumberDisplay(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient22_hidl_setNumberDisplayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::~BnHwFpsInfoClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC1EN7android2spINS3_15IFpsVsyncClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::BsFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC1EN7android2spINS3_15IFpsVsyncClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwFpsPolicyServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwFpsPolicyServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync10descriptorE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC1EN7android2spINS3_14IFpsInfoClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::BsFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC1EN7android2spINS3_14IFpsInfoClientEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC1EN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::BsFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncC1EN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21_hidl_setInputWindowsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS3_21SimpleInputWindowInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setInputWindows(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient21_hidl_setInputWindowsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC2ERKN7android2spINS3_16IFpsPolicyClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::BnHwFpsPolicyClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientC2ERKN7android2spINS3_16IFpsPolicyClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::_hidl_onSwVsyncChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13enableTrackerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::enableTracker(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13enableTrackerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE0_NS3_9IFpsVsyncE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsync-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsyncE0_NS3_9IFpsVsyncE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsVsync */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE16_NS0_11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE16_NS0_11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::BpHwFpsPolicyService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_NS3_14IVsyncCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_NS3_14IVsyncCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android8hardware11BpInterfaceINS3_14IVsyncCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE0_N7android8hardware11BpInterfaceINS3_14IVsyncCallbackEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE */
/* Demangled: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC2EN7android2spINS3_15IFpsVsyncClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsyncClient::BsFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016BsFpsVsyncClientC2EN7android2spINS3_15IFpsVsyncClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfo15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::createPolicyClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE0_NS3_14IFpsInfoClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientE0_NS3_14IFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC1EN7android2spINS3_10IFpsPolicyEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::BsFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC1EN7android2spINS3_10IFpsPolicyEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android8hardware11BpInterfaceINS3_17IFpsPolicyServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_N7android8hardware11BpInterfaceINS3_17IFpsPolicyServiceEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClient13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClient13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC1ERKN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::BnHwFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC1ERKN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient21_hidl_setInputWindowsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setInputWindows(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient21_hidl_setInputWindowsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService22_hidl_createInfoClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_14IFpsInfoClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createInfoClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService22_hidl_createInfoClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_14IFpsInfoClientEEEEEE(void);

/* Symbol: _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE */
/* Demangled: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC1ERKN7android2spINS3_17IFpsPolicyServiceEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::BnHwFpsPolicyService(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceC1ERKN7android2spINS3_17IFpsPolicyServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::~BnHwFpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_NS3_15IFpsVsyncClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_NS3_15IFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::dumpDebugInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient15_hidl_regPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_regPolicy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient15_hidl_regPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfo13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfo::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09BsFpsInfo13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS5_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS5_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS6_18BpHwFpsVsyncClientENS6_18BnHwFpsVsyncClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientENS6_18BpHwFpsVsyncClientENS6_18BnHwFpsVsyncClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS_4hidl4base4V1_05IBaseENS7_17BpHwVsyncCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackENS_4hidl4base4V1_05IBaseENS7_17BpHwVsyncCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_forbidAdjustingVsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient26_hidl_forbidAdjustingVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12_hidl_setFpsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_setFps(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12_hidl_setFpsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientENS7_15IFpsVsyncClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient, vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientENS7_15IFpsVsyncClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS6_8IFpsInfoE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE0_NS6_8IFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_dumpDebugInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService19_hidl_dumpDebugInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC2EN7android2spINS3_10IFpsPolicyEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::BsFpsPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyC2EN7android2spINS3_10IFpsPolicyEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::BpHwFpsPolicyService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC2ERKN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::BnHwFpsVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsyncC2ERKN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_NS3_16IFpsPolicyClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_NS3_16IFpsPolicyClientE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallbackE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android8hardware11BpInterfaceINS3_8IFpsInfoEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoE0_N7android8hardware11BpInterfaceINS3_8IFpsInfoEEE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::~BnHwFpsPolicy() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::~BnHwFpsInfo() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient10setHwcInfoERKNS3_7HwcInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient10setHwcInfoERKNS3_7HwcInfoE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientE;

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE16_NS0_11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE16_NS0_11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16_hidl_setHwcInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_7HwcInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setHwcInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient16_hidl_setHwcInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_7HwcInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS6_19BpHwFpsPolicyClientENS6_19BnHwFpsPolicyClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientENS6_19BpHwFpsPolicyClientENS6_19BnHwFpsPolicyClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC2EN7android2spINS3_14IFpsInfoClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::BsFpsInfoClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClientC2EN7android2spINS3_14IFpsInfoClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20forbidAdjustingVsyncEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::forbidAdjustingVsync(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20forbidAdjustingVsyncEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE;

/* Symbol: _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE */
/* Demangled: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> */
extern void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient15_hidl_unregInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_unregInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient15_hidl_unregInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient4pingEv(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE0_NS3_16IFpsPolicyClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BsFpsPolicyClientE0_NS3_16IFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient9unregInfoEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::unregInfo(unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient9unregInfoEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS_4hidl4base4V1_05IBaseENS7_12BpHwFpsVsyncEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncENS_4hidl4base4V1_05IBaseENS7_12BpHwFpsVsyncEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS_4hidl4base4V1_05IBaseENS7_17BpHwFpsInfoClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS_4hidl4base4V1_05IBaseENS7_17BpHwFpsInfoClientEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD2Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_unregPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::_hidl_unregPolicy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClient17_hidl_unregPolicyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceE0_NS3_17IFpsPolicyServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC1ERKN7android2spINS3_8IFpsInfoEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::BnHwFpsInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoC1ERKN7android2spINS3_8IFpsInfoEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS6_10IFpsPolicyE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE0_NS6_10IFpsPolicyE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient19_hidl_setWindowFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::_hidl_setWindowFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient19_hidl_setWindowFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::BpHwFpsInfo(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13setWindowFlagEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::setWindowFlag(int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient13setWindowFlagEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService24_hidl_createPolicyClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createPolicyClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService24_hidl_createPolicyClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient19_hidl_enableTrackerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_enableTracker(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient19_hidl_enableTrackerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE;

/* Symbol: _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE8_NS0_10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> */
extern void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_09IFpsVsyncEEE8_NS0_10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE */
/* Demangled: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> */
extern void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient23_hidl_setForegroundInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setForegroundInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient23_hidl_setForegroundInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoENS7_8IFpsInfoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo, vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoENS7_8IFpsInfoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClient13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsInfoClient::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsFpsInfoClient13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onSwVsyncChangeEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::onSwVsyncChange(int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback15onSwVsyncChangeEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::_hidl_onSwVsyncChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback21_hidl_onSwVsyncChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_dumpInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_dumpInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_dumpInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService4pingEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD1Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, void>(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4dfps4V1_016IFpsPolicyClientEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_dumpInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_dumpInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient14_hidl_dumpInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15_hidl_unregInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_unregInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient15_hidl_unregInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEm(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsync5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS_4hidl4base4V1_05IBaseENS7_11BpHwFpsInfoEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoENS_4hidl4base4V1_05IBaseENS7_11BpHwFpsInfoEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClientE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE0_NS3_14IVsyncCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback-in-vendor::mediatek::hardware::dfps::V1_0::BsVsyncCallback */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_015BsVsyncCallbackE0_NS3_14IVsyncCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::castFrom(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfoE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD2Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwVsyncCallback::~BnHwVsyncCallback() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_017BnHwVsyncCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo4pingEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::ping() */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfo */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicy13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicy::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BsFpsPolicy13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::BpHwFpsPolicyClient(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicy12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BnHwFpsPolicyE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicy5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_getFpsRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorESE_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_getFpsRange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient17_hidl_getFpsRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorESE_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsync13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsVsync::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_010BsFpsVsync13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC1ERKN7android2spINS3_15IFpsVsyncClientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::BnHwFpsVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientC1ERKN7android2spINS3_15IFpsVsyncClientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfo::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BnHwFpsInfo10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientENS7_16IFpsPolicyClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientENS7_16IFpsPolicyClientEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsync::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_012BnHwFpsVsync10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19_hidl_enableTrackerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::_hidl_enableTracker(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19_hidl_enableTrackerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsyncClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BpHwFpsVsyncClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfo::BpHwFpsInfo(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_011BpHwFpsInfoC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BpHwFpsVsync */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_012BpHwFpsVsyncE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android8hardware11BpInterfaceINS3_14IFpsInfoClientEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android8hardware11BpInterfaceINS3_14IFpsInfoClientEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android8hardware11BpInterfaceINS3_10IFpsPolicyEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_013BpHwFpsPolicyE0_N7android8hardware11BpInterfaceINS3_10IFpsPolicyEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsync::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_09IFpsVsync11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20_hidl_setSingleLayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient::_hidl_setSingleLayer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClient20_hidl_setSingleLayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicy21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_regVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient::_hidl_regVsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClient14_hidl_regVsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient18_hidl_getPanelInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::_hidl_getPanelInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient18_hidl_getPanelInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyClient::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_019BpHwFpsPolicyClient19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService23_hidl_createVsyncClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::_hidl_createVsyncClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyService23_hidl_createVsyncClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyService::~BnHwFpsPolicyService() */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BnHwFpsPolicyServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService24_hidl_createPolicyClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_16IFpsPolicyClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService::_hidl_createPolicyClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyService24_hidl_createPolicyClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_5ErrorERKNS5_2spINS3_16IFpsPolicyClientEEEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS6_17BpHwFpsInfoClientENS6_17BnHwFpsInfoClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> android::hardware::fromBinder<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient, vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4dfps4V1_014IFpsInfoClientENS6_17BpHwFpsInfoClientENS6_17BnHwFpsInfoClientEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceENS7_17IFpsPolicyServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicyService, vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4dfps4V1_020BpHwFpsPolicyServiceENS7_17IFpsPolicyServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::BnHwFpsVsyncClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_018BnHwFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsInfo::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4dfps4V1_08IFpsInfo21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BsFpsPolicyService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_018BsFpsPolicyService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BpHwVsyncCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BpHwVsyncCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::BnHwFpsInfoClient::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_017BnHwFpsInfoClient10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::BpHwFpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_017BpHwFpsInfoClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS_4hidl4base4V1_05IBaseENS7_13BpHwFpsPolicyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> > android::hardware::details::castInterface<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dfps::V1_0::BpHwFpsPolicy>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyENS_4hidl4base4V1_05IBaseENS7_13BpHwFpsPolicyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::BnHwFpsPolicyClient::~BnHwFpsPolicyClient() */
int _ZThn32_N6vendor8mediatek8hardware4dfps4V1_019BnHwFpsPolicyClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10descriptorE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService::descriptor */
extern void* _ZN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyService10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClient11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_H */
