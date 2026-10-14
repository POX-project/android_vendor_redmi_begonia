/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.bgservice@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.bgservice@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_N7android8hardware11BpInterfaceINS4_10IBGServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService>-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_N7android8hardware11BpInterfaceINS4_10IBGServiceEEE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BsBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD2Ev(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback17_hidl_onCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::_hidl_onCompleted(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback17_hidl_onCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_NS4_14IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_NS4_14IEventCallbackE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService22_hidl_setEventCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::_hidl_setEventCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService22_hidl_setEventCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_N7android8hardware11BpInterfaceINS4_14IEventCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_N7android8hardware11BpInterfaceINS4_14IEventCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService, vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BsEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsBGService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceE0_NS4_10IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BsBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceE0_NS4_10IBGServiceE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback17_hidl_onCompletedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiij */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::_hidl_onCompleted(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback17_hidl_onCompletedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiij(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService22_hidl_setEventCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::_hidl_setEventCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService22_hidl_setEventCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsEventCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService16setEventCallbackEiRKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::setEventCallback(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService16setEventCallbackEiRKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceC1EN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceC1EN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceC2EN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_011BsBGServiceC2EN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_NS4_10IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE0_NS4_10IBGServiceE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback10descriptorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, void>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback11onCompletedEiij */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwEventCallback::onCompleted(int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BpHwEventCallback11onCompletedEiij(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_010IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_013BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_013BnHwBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_017BnHwEventCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackE0_NS4_14IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_0::BsEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_015BsEventCallbackE0_NS4_14IEventCallbackE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_0_H */
