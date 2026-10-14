/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mtkpower@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mtkpower@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS2_4V1_09IMtkPowerEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS2_4V1_09IMtkPowerEEEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14notifyAppStateERKN7android8hardware11hidl_stringES9_iii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower4pingEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::_hidl_mtkPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS3_8IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS3_8IMtkPerfE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE;

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15mtkCusPowerHintEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::mtkCusPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15mtkCusPowerHintEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE0_NS3_9IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE0_NS3_9IMtkPowerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS2_4V1_09IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS2_4V1_09IMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS6_4V1_09IMtkPowerENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower>(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS6_4V1_09IMtkPowerENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS2_4V1_08IMtkPerfEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS2_4V1_08IMtkPerfEEEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfCusLockHintEij */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfCusLockHint(int, unsigned int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfCusLockHintEij(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfLockAcquire(int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12mtkPowerHintEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::mtkPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12mtkPowerHintEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS2_4V1_08IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS2_4V1_08IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setSysInfo(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::_hidl_mtkPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE0_NS3_8IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE0_NS3_8IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockReleaseEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfLockRelease(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockReleaseEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS6_20BpHwMtkPowerCallbackENS6_20BnHwMtkPowerCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS6_20BpHwMtkPowerCallbackENS6_20BnHwMtkPowerCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackENS7_17IMtkPowerCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackENS7_17IMtkPowerCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setSysInfoAsync(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::BpHwMtkPowerCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf21_hidl_perfCusLockHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::_hidl_perfCusLockHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf21_hidl_perfCusLockHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::descriptor */
extern void* _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12mtkPowerHintEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::mtkPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12mtkPowerHintEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_NS2_4V1_08IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_NS2_4V1_08IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android8hardware11BpInterfaceINS3_17IMtkPowerCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android8hardware11BpInterfaceINS3_17IMtkPowerCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::BpHwMtkPowerCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower25_hidl_setMtkPowerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::_hidl_setMtkPowerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower25_hidl_setMtkPowerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12querySysInfoEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::querySysInfo(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12querySysInfoEii(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwMtkPowerCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwMtkPowerCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC2ERKN7android2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::BnHwMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC2ERKN7android2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS3_9IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS3_9IMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::descriptor */
extern void* _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, void>(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC2EN7android2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::BsMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC2EN7android2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC1ERKN7android2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::BnHwMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC1ERKN7android2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower25_hidl_setMtkPowerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::_hidl_setMtkPowerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower25_hidl_setMtkPowerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC1EN7android2spINS3_17IMtkPowerCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::BsMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC1EN7android2spINS3_17IMtkPowerCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS6_4V1_08IMtkPerfENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf>(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS6_4V1_08IMtkPerfENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_NS2_4V1_09IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_NS2_4V1_09IMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21_hidl_perfCusLockHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEij */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::_hidl_perfCusLockHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21_hidl_perfCusLockHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEij(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware9BHwBinderE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_1_H */
