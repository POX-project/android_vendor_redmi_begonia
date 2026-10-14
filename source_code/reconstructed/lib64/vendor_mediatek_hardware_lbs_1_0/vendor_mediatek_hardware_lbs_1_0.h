/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.lbs@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.lbs@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LBS_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LBS_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbs13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbs13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_04ILbsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_04ILbsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21setHALInstrumentationEv(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::BpHwLbsCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12sendToServerERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12sendToServerERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC1ERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::BnHwLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC1ERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::castFrom(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::castFrom(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC2ERKN7android2spINS3_4ILbsEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::BnHwLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC2ERKN7android2spINS3_4ILbsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD2Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD2Ev(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, void>(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs30_hidl_sendToServerWithCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_sendToServerWithCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs30_hidl_sendToServerWithCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackENS7_12ILbsCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback, vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackENS7_12ILbsCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC1EN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::BsLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC1EN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC1ERKN7android2spINS3_4ILbsEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::BnHwLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC1ERKN7android2spINS3_4ILbsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS5_8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS5_8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_NS3_4ILbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::BpHwLbs(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_04ILbsE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_04ILbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsENS7_4ILbsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::lbs::V1_0::BpHwLbs, vendor::mediatek::hardware::lbs::V1_0::ILbs, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsENS7_4ILbsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC2ERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::BnHwLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC2ERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android8hardware11BpInterfaceINS3_4ILbsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::lbs::V1_0::ILbs>-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android8hardware11BpInterfaceINS3_4ILbsEEE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLbsCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLbsCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE0_NS3_12ILbsCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback-in-vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE0_NS3_12ILbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_04ILbsENS_4hidl4base4V1_05IBaseENS7_7BpHwLbsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> > android::hardware::details::castInterface<vendor::mediatek::hardware::lbs::V1_0::ILbs, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::lbs::V1_0::BpHwLbs>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_04ILbsENS_4hidl4base4V1_05IBaseENS7_7BpHwLbsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::BpHwLbsCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10descriptorE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::descriptor */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_04ILbsE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_04ILbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11setCallbackERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC2EN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::BsLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC2EN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_NS3_12ILbsCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_NS3_12ILbsCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_05BsLbsE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::BsLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_05BsLbsE0_NS3_4ILbsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC1EN7android2spINS3_4ILbsEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::BsLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC1EN7android2spINS3_4ILbsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::BpHwLbs(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS6_15BpHwLbsCallbackENS6_15BnHwLbsCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::fromBinder<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback, vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS6_15BpHwLbsCallbackENS6_15BnHwLbsCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android8hardware11BpInterfaceINS3_12ILbsCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android8hardware11BpInterfaceINS3_12ILbsCallbackEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_05BsLbsE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BsLbs */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_05BsLbsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC2EN7android2spINS3_4ILbsEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::BsLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC2EN7android2spINS3_4ILbsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs30_hidl_sendToServerWithCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_sendToServerWithCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs30_hidl_sendToServerWithCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::callbackToClient(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs4pingEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::ping() */
int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LBS_1_0_H */
