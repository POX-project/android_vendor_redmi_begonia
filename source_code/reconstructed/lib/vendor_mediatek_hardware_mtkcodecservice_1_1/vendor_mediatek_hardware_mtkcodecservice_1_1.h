/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mtkcodecservice@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mtkcodecservice@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::castFrom(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DecodeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Decode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DecodeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS6_27BpHwMtkCodecServiceCallbackENS6_27BnHwMtkCodecServiceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS6_27BpHwMtkCodecServiceCallbackENS6_27BnHwMtkCodecServiceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::descriptor */
extern void* _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10descriptorE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11_hidl_ResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_14apeResetParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Reset(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11_hidl_ResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_14apeResetParamsEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_12apeDecParamsERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::readEmbeddedFromParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_12apeDecParamsERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceENS7_16IMtkCodecServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService, vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceENS7_16IMtkCodecServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Decode(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_15apeDecRetParamsEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::writeEmbeddedToParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_15apeDecRetParamsEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC2ERKN7android2spINS3_16IMtkCodecServiceEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::BnHwMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC2ERKN7android2spINS3_16IMtkCodecServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC1ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::BnHwMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC1ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::setCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::BpHwMtkCodecServiceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10_hidl_InitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10_hidl_InitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackENS7_24IMtkCodecServiceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackENS7_24IMtkCodecServiceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DeInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_DeInit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DeInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceENS_4hidl4base4V1_05IBaseENS7_19BpHwMtkCodecServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceENS_4hidl4base4V1_05IBaseENS7_19BpHwMtkCodecServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5ResetERKNS3_14apeResetParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5ResetERKNS3_14apeResetParamsEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService7DestoryEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Destory(int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService7DestoryEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC1EN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::BsMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC1EN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC1EN7android2spINS3_16IMtkCodecServiceEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::BsMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC1EN7android2spINS3_16IMtkCodecServiceEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4InitERKNS3_13apeInitParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4InitERKNS3_13apeInitParamsEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC2EN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::BsMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC2EN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService10_hidl_InitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13apeInitParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService10_hidl_InitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13apeInitParamsEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DeInitEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::DeInit(int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DeInitEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::castFrom(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService13_hidl_DestoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Destory(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService13_hidl_DestoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::BpHwMtkCodecServiceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::BpHwMtkCodecService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DecodeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Decode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DecodeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC1ERKN7android2spINS3_16IMtkCodecServiceEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::BnHwMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC1ERKN7android2spINS3_16IMtkCodecServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE0_NS3_16IMtkCodecServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE0_NS3_16IMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMtkCodecServiceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMtkCodecServiceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_15apeDecRetParamsERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::readEmbeddedFromParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_15apeDecRetParamsERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::callbackToClient(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_CreateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Create(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_CreateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService4pingEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::ping() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_NS3_16IMtkCodecServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_NS3_16IMtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC2ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::BnHwMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC2ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC2EN7android2spINS3_16IMtkCodecServiceEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::BsMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC2EN7android2spINS3_16IMtkCodecServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService11_hidl_ResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Reset(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService11_hidl_ResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_CreateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Create(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_CreateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13_hidl_DestoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Destory(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13_hidl_DestoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_12apeDecParamsEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::writeEmbeddedToParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_12apeDecParamsEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, void>(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Create(std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android8hardware11BpInterfaceINS3_16IMtkCodecServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android8hardware11BpInterfaceINS3_16IMtkCodecServiceEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android8hardware11BpInterfaceINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android8hardware11BpInterfaceINS3_24IMtkCodecServiceCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DeInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_DeInit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DeInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::BpHwMtkCodecService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_H */
