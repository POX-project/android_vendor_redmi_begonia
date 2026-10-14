/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.touchll@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.touchll@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_TOUCHLL_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_TOUCHLL_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE */
/* Demangled: VTT for vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTTN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC1ERKN7android2spINS3_8ITouchllEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::BnHwTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC1ERKN7android2spINS3_8ITouchllEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchll13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchll13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC2EN7android2spINS3_8ITouchllEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::BsTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC2EN7android2spINS3_8ITouchllEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android8hardware11BpInterfaceINS3_8ITouchllEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::touchll::V1_0::ITouchll>-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android8hardware11BpInterfaceINS3_8ITouchllEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE */
/* Demangled: vtable for vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTVN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14notifyAppStateERKN7android8hardware11hidl_stringEi */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::notifyAppState(android::hardware::hidl_string const&, int) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14notifyAppStateERKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll18_hidl_getAppStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvSE_EEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::_hidl_getAppStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll18_hidl_getAppStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvSE_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEi */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, int) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll4pingEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::ping() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::BpHwTouchll(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll18_hidl_getAppStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::_hidl_getAppStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll18_hidl_getAppStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD2Ev */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_NS3_8ITouchllE */
/* Demangled: construction vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_NS3_8ITouchllE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getAppStatusERKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getAppStatus(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getAppStatusERKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7touchll4V1_08ITouchllE */
/* Demangled: vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern void* _ZTVN6vendor8mediatek8hardware7touchll4V1_08ITouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE */
/* Demangled: vtable for vendor::mediatek::hardware::touchll::V1_0::BsTouchll */
extern void* _ZTVN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll4pingEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::ping() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC2ERKN7android2spINS3_8ITouchllEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::BnHwTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC2ERKN7android2spINS3_8ITouchllEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10descriptorE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::descriptor */
extern void* _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10descriptorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllENS7_8ITouchllEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll, vendor::mediatek::hardware::touchll::V1_0::ITouchll, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllENS7_8ITouchllEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7touchll4V1_08ITouchllENS_4hidl4base4V1_05IBaseENS7_11BpHwTouchllEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> > android::hardware::details::castInterface<vendor::mediatek::hardware::touchll::V1_0::ITouchll, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7touchll4V1_08ITouchllENS_4hidl4base4V1_05IBaseENS7_11BpHwTouchllEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE0_NS3_8ITouchllE */
/* Demangled: construction vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll-in-vendor::mediatek::hardware::touchll::V1_0::BsTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE0_NS3_8ITouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll4pingEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::ping() */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE */
/* Demangled: VTT for vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern void* _ZTTN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7touchll4V1_08ITouchllE */
/* Demangled: VTT for vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern void* _ZTTN6vendor8mediatek8hardware7touchll4V1_08ITouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::BpHwTouchll(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::castFrom(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&, bool) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE */
/* Demangled: vtable for vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern void* _ZTVN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE;

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC1EN7android2spINS3_8ITouchllEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::BsTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll>) */
int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC1EN7android2spINS3_8ITouchllEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware7IBinderE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
int _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7touchll4V1_08ITouchllE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern void* _ZTCN6vendor8mediatek8hardware7touchll4V1_08ITouchllE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_TOUCHLL_1_0_H */
