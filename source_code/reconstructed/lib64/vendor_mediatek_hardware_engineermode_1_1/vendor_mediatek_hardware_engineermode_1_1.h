/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.engineermode@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.engineermode@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_1::BsEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd18btStartNoSigRxTestEiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btStartNoSigRxTest(int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd18btStartNoSigRxTestEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd8btUninitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btUninit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd8btUninitEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_NS3_4IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setBypassEn(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android8hardware7IBinderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmdC1EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmdC1EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd20_hidl_setEmConfigureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::_hidl_setEmConfigure(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd20_hidl_setEmConfigureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setOmxVdecLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdC2ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdC2ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE0_NS2_4V1_011IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_1::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE0_NS2_4V1_011IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setSmsFormat(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16btIsComboSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btIsComboSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16btIsComboSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setOmxVencLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BsEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13btPollingStopEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btPollingStop() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13btPollingStopEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_NS2_4V1_04IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_NS2_4V1_04IEmdE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::genMdLogFilter(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setVolteMalPctid(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setBypassDis(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btStartRelayerEii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btStartRelayer(int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btStartRelayerEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btHciCommandRun(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setWcnCoreDump(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setRadioCapabilitySwitchEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback, vendor::mediatek::hardware::engineermode::V1_1::IEmCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setUsbOtgSwitch(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16clearItemsforRscEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::clearItemsforRsc() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16clearItemsforRscEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setBypassService(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setDisableC2kCap(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_NS2_4V1_011IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_NS2_4V1_011IEmCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd6btInitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btInit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd6btInitEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd8btDoTestEiiiiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btDoTest(int, int, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd8btDoTestEiiiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback>-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setModemWarningEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback10descriptorE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setEmUsbValue(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmdC2EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmdC2EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setDsbpSupport(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback, vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btPollingStartEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btPollingStart() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btPollingStartEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setSvpLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_14IEmdE0_NS2_4V1_04IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_1::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_14IEmdE0_NS2_4V1_04IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setCtIREngMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setEmConfigure(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback4pingEv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setEmUsbType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13btStopRelayerEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btStopRelayer() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd13btStopRelayerEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_15BsEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BsEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_15BsEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmd13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmd::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_15BsEmd13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, void>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_14IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmd, vendor::mediatek::hardware::engineermode::V1_0::IEmd, vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_14IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_14IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmd, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_14IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::sendToServer(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_1::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_111IEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_1::IEmd>-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setTestSimCardType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::getFilePathListWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_14IEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_14IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22btIsBLEEnhancedSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btIsBLEEnhancedSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22btIsBLEEnhancedSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setUsbPort(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_14IEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_1::IEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_14IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::callbackToClient(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setMdResetDelay(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_15BsEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_1::BsEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_15BsEmdE0_NS3_4IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::sendToServerWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd, vendor::mediatek::hardware::engineermode::V1_1::IEmd, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_114BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_14IEmd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::IEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_111IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BsEmCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_112BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd7setMomsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setMoms(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd7setMomsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setOmxCoreLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdC1ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BnHwEmdC1ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setImsTestMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btEndNoSigRxTest(std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setVencDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_14IEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_1::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_14IEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_1::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_114BnHwEmCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btIsBLESupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::btIsBLESupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd14btIsBLESupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setPreferGprsMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd20_hidl_setEmConfigureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::_hidl_setEmConfigure(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd20_hidl_setEmConfigureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_1::BpHwEmd::setVdecDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_17BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_1_H */
