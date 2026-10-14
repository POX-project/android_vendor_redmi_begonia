/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.tidaservice@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.tidaservice@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::castFrom(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::signInit(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE0_NS3_12ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE0_NS3_12ITidaServiceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::sign(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10_hidl_signEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_sign(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10_hidl_signEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService16_hidl_signUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_signUpdate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService16_hidl_signUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService21_hidl_generateKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_generateKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService21_hidl_generateKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::signUpdate(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8containsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::contains(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8containsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_signInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_signInit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_signInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService18_hidl_removeAllKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_removeAllKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService18_hidl_removeAllKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12removeAllKeyEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::removeAllKey() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12removeAllKeyEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService16_hidl_signUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_signUpdate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService16_hidl_signUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_getFpIdsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_getFpIds(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_getFpIdsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_containsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_contains(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_containsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_NS3_12ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_NS3_12ITidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService4pingEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::ping() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getFpIds(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::generateKeyPair(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21_hidl_generateKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_generateKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21_hidl_generateKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_signInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_signInit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_signInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android8hardware11BpInterfaceINS3_12ITidaServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android8hardware11BpInterfaceINS3_12ITidaServiceEEE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD2Ev */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_getFpIdsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_getFpIds(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_getFpIdsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService, vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_containsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_contains(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_containsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10_hidl_signEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_sign(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10_hidl_signEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10descriptorE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::descriptor */
extern void* _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService18_hidl_removeAllKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_removeAllKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService18_hidl_removeAllKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TIDASERVICE_1_0_H */
