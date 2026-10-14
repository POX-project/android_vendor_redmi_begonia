/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.power@2.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.power@2.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_POWER_2_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_POWER_2_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD2Ev */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_0::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_0::IPower>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_16IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_16IPowerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_17BsPowerE0_NS3_6IPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::power::V2_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BsPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_17BsPowerE0_NS3_6IPowerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware11BpInterfaceINS3_6IPowerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::power::V2_1::IPower>-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware11BpInterfaceINS3_6IPowerEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS3_6IPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::power::V2_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS3_6IPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC1EN7android2spINS3_6IPowerEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower>) */
int _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC1EN7android2spINS3_6IPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_1::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_1::IPower>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10scnDisableEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnDisable(int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10scnDisableEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12querySysInfoENS2_4V2_011MtkQueryCmdEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::querySysInfo(vendor::mediatek::hardware::power::V2_0::MtkQueryCmd, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12querySysInfoENS2_4V2_011MtkQueryCmdEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_2::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_2::IPower>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower4pingEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::ping() */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC1ERKN7android2spINS3_6IPowerEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC1ERKN7android2spINS3_6IPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower4pingEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::ping() */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower4pingEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_19BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::power::V2_1::IPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::power::V2_1::BpHwPower, vendor::mediatek::hardware::power::V2_1::IPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_19BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower6scnRegEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnReg() */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower6scnRegEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_16IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_16IPowerE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5power4V2_16IPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTVN6vendor8mediatek8hardware5power4V2_16IPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_setSysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_NS2_4V2_06IPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_NS2_4V2_06IPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setFeature(android::hardware::power::V1_0::Feature, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18notifyAppState_2_1ERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifyAppState_2_1(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18notifyAppState_2_1ERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateEi(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_06IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_06IPowerE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12mtkPowerHintENS2_4V2_012MtkPowerHintEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::mtkPowerHint(vendor::mediatek::hardware::power::V2_0::MtkPowerHint, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12mtkPowerHintENS2_4V2_012MtkPowerHintEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14setInteractiveEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setInteractive(bool) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14setInteractiveEb(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getSubsystemLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_1::PowerStateSubsystem> const&, android::hardware::power::V1_0::Status)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5power4V2_19BnHwPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern void* _ZTTN6vendor8mediatek8hardware5power4V2_19BnHwPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_0::IPower> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS6_4V2_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, vendor::mediatek::hardware::power::V2_0::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<vendor::mediatek::hardware::power::V2_0::IPower>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS6_4V2_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5power4V2_19BnHwPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern void* _ZTVN6vendor8mediatek8hardware5power4V2_19BnHwPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnConfigEiNS2_4V2_011MtkPowerCmdEiiii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnConfig(int, vendor::mediatek::hardware::power::V2_0::MtkPowerCmd, int, int, int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnConfigEiNS2_4V2_011MtkPowerCmdEiiii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11scnUltraCfgEiiiiii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnUltraCfg(int, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11scnUltraCfgEiiiiii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_06IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_06IPowerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower19_hidl_scnConfig_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_scnConfig_2_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower19_hidl_scnConfig_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnEnableEii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnEnable(int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnEnableEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_2::IPower> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_26IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_26IPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower4pingEv */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::ping() */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHint(android::hardware::power::V1_0::PowerHint, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5power4V2_16IPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTTN6vendor8mediatek8hardware5power4V2_16IPowerE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5power4V2_19BpHwPowerE */
/* Demangled: VTT for vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTTN6vendor8mediatek8hardware5power4V2_19BpHwPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower10descriptorE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::descriptor */
extern void* _ZN6vendor8mediatek8hardware5power4V2_16IPower10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS2_4V2_06IPowerEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<vendor::mediatek::hardware::power::V2_0::IPower> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS2_4V2_06IPowerEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_1::IPower> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC2ERKN7android2spINS3_6IPowerEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC2ERKN7android2spINS3_6IPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15mtkCusPowerHintEii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::mtkCusPowerHint(int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15mtkCusPowerHintEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS2_4V2_06IPowerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS2_4V2_06IPowerE;

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHintAsync(android::hardware::power::V1_0::PowerHint, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHintAsync_1_2(android::hardware::power::V1_2::PowerHint, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower8scnUnregEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnUnreg(int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower8scnUnregEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5power4V2_17BsPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::power::V2_1::BsPower */
extern void* _ZTVN6vendor8mediatek8hardware5power4V2_17BsPowerE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5power4V2_19BpHwPowerE */
/* Demangled: vtable for vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern void* _ZTVN6vendor8mediatek8hardware5power4V2_19BpHwPowerE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower24_hidl_notifyAppState_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_notifyAppState_2_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower24_hidl_notifyAppState_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19_hidl_scnConfig_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_scnConfig_2_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::power::V2_1::MtkPowerCmd, int, int, int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19_hidl_scnConfig_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC2EN7android2spINS3_6IPowerEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower>) */
int _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC2EN7android2spINS3_6IPowerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_setSysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24_hidl_notifyAppState_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS2_4V2_011MtkActStateEi */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_notifyAppState_2_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24_hidl_notifyAppState_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS2_4V2_011MtkActStateEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getPlatformLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_0::PowerStatePlatformSleepState> const&, android::hardware::power::V1_0::Status)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_17BsPower13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5power4V2_17BsPower13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13scnConfig_2_1EiNS3_11MtkPowerCmdEiiii */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnConfig_2_1(int, vendor::mediatek::hardware::power::V2_1::MtkPowerCmd, int, int, int, int) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13scnConfig_2_1EiNS3_11MtkPowerCmdEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setSysInfoEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setSysInfo(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_26IPowerE */
/* Demangled: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_26IPowerE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_POWER_2_1_H */
