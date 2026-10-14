/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.tidaservice@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.tidaservice@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_1_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE;

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService22_hidl_removeAllKey_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::_hidl_removeAllKey_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService22_hidl_removeAllKey_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService18_hidl_contains_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::_hidl_contains_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService18_hidl_contains_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService25_hidl_generateKeyPair_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::_hidl_generateKeyPair_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService25_hidl_generateKeyPair_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceE0_NS3_12ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::BsTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceE0_NS3_12ITidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_N7android8hardware11BpInterfaceINS3_12ITidaServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService>-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_N7android8hardware11BpInterfaceINS3_12ITidaServiceEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8containsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::contains(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8containsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::signUpdate(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceENS6_4V1_012ITidaServiceENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService, vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService, vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService>(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceENS6_4V1_012ITidaServiceENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService16removeAllKey_1_1Ej */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::removeAllKey_1_1(unsigned int) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService16removeAllKey_1_1Ej(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService18_hidl_signInit_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::_hidl_signInit_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService18_hidl_signInit_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::castFrom(android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService18_hidl_signInit_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::_hidl_signInit_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService18_hidl_signInit_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::generateKeyPair_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService20_hidl_signUpdate_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::_hidl_signUpdate_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService20_hidl_signUpdate_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12removeAllKeyEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::removeAllKey() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12removeAllKeyEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE0_NS2_4V1_012ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE0_NS2_4V1_012ITidaServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::BsTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaServiceE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService10descriptorE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::descriptor */
extern void* _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BsTidaService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_113BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12contains_1_1EjRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::contains_1_1(unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12contains_1_1EjRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spINS2_4V1_012ITidaServiceEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::castFrom(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService8castFromERKN7android2spINS2_4V1_012ITidaServiceEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService18_hidl_contains_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::_hidl_contains_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService18_hidl_contains_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService, vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12signInit_1_1EjRKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::signInit_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService12signInit_1_1EjRKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::getFpIds(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_NS2_4V1_012ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_NS2_4V1_012ITidaServiceE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService20_hidl_signUpdate_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::_hidl_signUpdate_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService20_hidl_signUpdate_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::sign(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD2Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService22_hidl_removeAllKey_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::_hidl_removeAllKey_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService22_hidl_removeAllKey_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_NS3_12ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE0_NS3_12ITidaServiceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::signUpdate_1_1(unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::generateKeyPair(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService25_hidl_generateKeyPair_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::_hidl_generateKeyPair_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService25_hidl_generateKeyPair_1_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_1::BnHwTidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_115BnHwTidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_112ITidaService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService::signInit(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_1::BpHwTidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_115BpHwTidaServiceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_1_H */
