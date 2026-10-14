/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.fingerprintextension@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.fingerprintextension@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint10descriptorE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::descriptor */
extern void* _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint4pingEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::ping() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprint13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BsXiaomiFingerprint::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprint13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE */
/* Demangled: VTT for vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint */
extern void* _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE */
/* Demangled: vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint */
extern void* _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint12_hidl_extCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::_hidl_extCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint12_hidl_extCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZTv0_n24_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintC2EN7android2spINS3_18IXiaomiFingerprintEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BsXiaomiFingerprint::BsXiaomiFingerprint(android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintC2EN7android2spINS3_18IXiaomiFingerprintEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12_hidl_extCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjj */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::_hidl_extCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12_hidl_extCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintENS_4hidl4base4V1_05IBaseENS7_21BpHwXiaomiFingerprintEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint> > android::hardware::details::castInterface<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintENS_4hidl4base4V1_05IBaseENS7_21BpHwXiaomiFingerprintEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE */
/* Demangled: VTT for vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint */
extern void* _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::BpHwXiaomiFingerprint(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZThn32_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZThn32_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintE0_NS3_18IXiaomiFingerprintE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BsXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintE0_NS3_18IXiaomiFingerprintE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE */
/* Demangled: VTT for vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTTN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE;

/* Symbol: _ZThn16_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::onLastStrongRef(void const*) */
int _ZThn16_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint6extCmdEjj */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::extCmd(unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint6extCmdEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::BpHwXiaomiFingerprint(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintE */
/* Demangled: vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::BsXiaomiFingerprint */
extern void* _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintE;

/* Symbol: _ZTv0_n40_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_N7android8hardware11BpInterfaceINS3_18IXiaomiFingerprintEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint>-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_N7android8hardware11BpInterfaceINS3_18IXiaomiFingerprintEEE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE */
/* Demangled: vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint */
extern void* _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprintE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::castFrom(android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint> const&, bool) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE */
/* Demangled: vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTVN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint4pingEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::ping() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint4pingEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_NS3_18IXiaomiFingerprintE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_NS3_18IXiaomiFingerprintE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintC1EN7android2spINS3_18IXiaomiFingerprintEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BsXiaomiFingerprint::BsXiaomiFingerprint(android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_019BsXiaomiFingerprintC1EN7android2spINS3_18IXiaomiFingerprintEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn32_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZThn32_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintC1ERKN7android2spINS3_18IXiaomiFingerprintEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::BnHwXiaomiFingerprint(android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintC1ERKN7android2spINS3_18IXiaomiFingerprintEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZTv0_n24_N6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprint10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintC2ERKN7android2spINS3_18IXiaomiFingerprintEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::BnHwXiaomiFingerprint(android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint> const&) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintC2ERKN7android2spINS3_18IXiaomiFingerprintEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint4pingEv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::ping() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint4pingEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintENS7_18IXiaomiFingerprintEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint, vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintENS7_18IXiaomiFingerprintEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint */
extern void* _ZTCN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprintE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_018IXiaomiFingerprint19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD2Ev */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BnHwXiaomiFingerprint::~BnHwXiaomiFingerprint() */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BnHwXiaomiFingerprintD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::fingerprintextension::V1_0::BpHwXiaomiFingerprint::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware20fingerprintextension4V1_021BpHwXiaomiFingerprint15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_1_0_H */
