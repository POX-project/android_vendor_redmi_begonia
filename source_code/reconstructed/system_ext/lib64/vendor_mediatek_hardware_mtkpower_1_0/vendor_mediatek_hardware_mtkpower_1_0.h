/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mtkpower@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mtkpower@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::perfLockAcquire(int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_querySysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockReleaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::_hidl_perfLockRelease(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockReleaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_mtkPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_setSysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_mtkCusPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_mtkCusPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_setSysInfoAsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_setSysInfoAsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_setSysInfoAsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_NS3_8IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_NS3_8IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE0_NS3_8IMtkPerfE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE0_NS3_8IMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_NS3_9IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_NS3_9IMtkPowerE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12mtkPowerHintEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::mtkPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12mtkPowerHintEii(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setSysInfoAsync(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::descriptor */
extern void* _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockAcquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEijRKNS6_8hidl_vecIiEEi */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::_hidl_perfLockAcquire(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockAcquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEijRKNS6_8hidl_vecIiEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::ping() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE;

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_querySysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::descriptor */
extern void* _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_setSysInfoAsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_setSysInfoAsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_setSysInfoAsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12querySysInfoEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::querySysInfo(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12querySysInfoEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockReleaseEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::perfLockRelease(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockReleaseEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_setSysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15mtkCusPowerHintEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::mtkCusPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15mtkCusPowerHintEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE;

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_mtkPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE0_NS3_9IMtkPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE0_NS3_9IMtkPowerE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockReleaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::_hidl_perfLockRelease(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockReleaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockAcquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::_hidl_perfLockAcquire(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockAcquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZThn32_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
int _ZTv0_n24_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setSysInfo(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_H */
