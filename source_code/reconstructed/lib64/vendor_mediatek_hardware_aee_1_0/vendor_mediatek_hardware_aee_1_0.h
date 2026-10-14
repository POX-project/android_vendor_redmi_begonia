/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.aee@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.aee@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AEE_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AEE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD2Ev */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12hangCopyDataERKN7android8hardware11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::hangCopyData(android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12hangCopyDataERKN7android8hardware11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee18_hidl_hangCopyDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::_hidl_hangCopyData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee18_hidl_hangCopyDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee18_hidl_hangCopyDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::_hidl_hangCopyData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee18_hidl_hangCopyDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3aee4V1_04IAeeE */
/* Demangled: vtable for vendor::mediatek::hardware::aee::V1_0::IAee */
extern void* _ZTVN6vendor8mediatek8hardware3aee4V1_04IAeeE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZThn32_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeC1ERKN7android2spINS3_4IAeeEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::BnHwAee(android::sp<vendor::mediatek::hardware::aee::V1_0::IAee> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeC1ERKN7android2spINS3_4IAeeEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_NS3_4IAeeE */
/* Demangled: construction vtable for vendor::mediatek::hardware::aee::V1_0::IAee-in-vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_NS3_4IAeeE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3aee4V1_07BpHwAeeENS7_4IAeeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::aee::V1_0::IAee> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::aee::V1_0::BpHwAee, vendor::mediatek::hardware::aee::V1_0::IAee, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3aee4V1_07BpHwAeeENS7_4IAeeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee4pingEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::ping() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZTv0_n24_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_05BsAeeC2EN7android2spINS3_4IAeeEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BsAee::BsAee(android::sp<vendor::mediatek::hardware::aee::V1_0::IAee>) */
int _ZN6vendor8mediatek8hardware3aee4V1_05BsAeeC2EN7android2spINS3_4IAeeEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3aee4V1_04IAeeE */
/* Demangled: VTT for vendor::mediatek::hardware::aee::V1_0::IAee */
extern void* _ZTTN6vendor8mediatek8hardware3aee4V1_04IAeeE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee4pingEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::ping() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAeeC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::BpHwAee(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAeeC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::aee::V1_0::BpHwAee::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee4pingEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::ping() */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeC2ERKN7android2spINS3_4IAeeEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::BnHwAee(android::sp<vendor::mediatek::hardware::aee::V1_0::IAee> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAeeC2ERKN7android2spINS3_4IAeeEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12sendToServerERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::sendToServer(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12sendToServerERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_N7android8hardware11BpInterfaceINS3_4IAeeEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::aee::V1_0::IAee>-in-vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE0_N7android8hardware11BpInterfaceINS3_4IAeeEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE */
/* Demangled: vtable for vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTVN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZThn32_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::castFrom(android::sp<vendor::mediatek::hardware::aee::V1_0::IAee> const&, bool) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::aee::V1_0::BnHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_05BsAee13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BsAee::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3aee4V1_05BsAee13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_05BsAeeC1EN7android2spINS3_4IAeeEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BsAee::BsAee(android::sp<vendor::mediatek::hardware::aee::V1_0::IAee>) */
int _ZN6vendor8mediatek8hardware3aee4V1_05BsAeeC1EN7android2spINS3_4IAeeEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BnHwAee::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BnHwAee18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE */
/* Demangled: vtable for vendor::mediatek::hardware::aee::V1_0::BnHwAee */
extern void* _ZTVN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee10descriptorE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::descriptor */
extern void* _ZN6vendor8mediatek8hardware3aee4V1_04IAee10descriptorE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_04IAeeE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::aee::V1_0::IAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_04IAeeE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::aee::V1_0::BnHwAee::~BnHwAee() */
int _ZTv0_n24_N6vendor8mediatek8hardware3aee4V1_07BnHwAeeD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee21setHALInstrumentationEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE */
/* Demangled: VTT for vendor::mediatek::hardware::aee::V1_0::BnHwAee */
extern void* _ZTTN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::aee::V1_0::BpHwAee::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware3aee4V1_07BpHwAee15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::aee::V1_0::BnHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAeeC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::BpHwAee(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAeeC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3aee4V1_04IAeeENS_4hidl4base4V1_05IBaseENS7_7BpHwAeeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::aee::V1_0::IAee> > android::hardware::details::castInterface<vendor::mediatek::hardware::aee::V1_0::IAee, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::aee::V1_0::BpHwAee>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3aee4V1_04IAeeENS_4hidl4base4V1_05IBaseENS7_7BpHwAeeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_05BsAeeE0_NS3_4IAeeE */
/* Demangled: construction vtable for vendor::mediatek::hardware::aee::V1_0::IAee-in-vendor::mediatek::hardware::aee::V1_0::BsAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_05BsAeeE0_NS3_4IAeeE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE */
/* Demangled: VTT for vendor::mediatek::hardware::aee::V1_0::BpHwAee */
extern void* _ZTTN6vendor8mediatek8hardware3aee4V1_07BpHwAeeE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3aee4V1_05BsAeeE */
/* Demangled: vtable for vendor::mediatek::hardware::aee::V1_0::BsAee */
extern void* _ZTVN6vendor8mediatek8hardware3aee4V1_05BsAeeE;

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_04IAee24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::IAee::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3aee4V1_04IAee24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::aee::V1_0::BpHwAee::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3aee4V1_07BpHwAee12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::aee::V1_0::BnHwAee */
extern void* _ZTCN6vendor8mediatek8hardware3aee4V1_07BnHwAeeE0_N7android8hardware7IBinderE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AEE_1_0_H */
