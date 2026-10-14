/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.nvram@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.nvram@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10descriptorE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::descriptor */
extern void* _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram20_hidl_readFileByNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::_hidl_readFileByName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram20_hidl_readFileByNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC2ERKN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC2ERKN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_06INvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_0::INvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_06INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD2Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram24_hidl_writeFileByNamevecEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::_hidl_writeFileByNamevec(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram24_hidl_writeFileByNamevecEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_07BsNvramE0_NS3_6INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_0::BsNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_07BsNvramE0_NS3_6INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvram13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvram13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::nvram::V1_0::BpHwNvram, vendor::mediatek::hardware::nvram::V1_0::INvram, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::writeFileByNamevec(android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC2EN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC2EN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_NS3_6INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_NS3_6INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram20_hidl_readFileByNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjNSt3__18functionIFvSE_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::_hidl_readFileByName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram20_hidl_readFileByNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjNSt3__18functionIFvSE_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_06INvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_0::INvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_06INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC1ERKN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC1ERKN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_07BsNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_0::BsNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_07BsNvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_06INvramE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_0::INvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_06INvramE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android8hardware11BpInterfaceINS3_6INvramEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::nvram::V1_0::INvram>-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android8hardware11BpInterfaceINS3_6INvramEEE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram24_hidl_writeFileByNamevecEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::_hidl_writeFileByNamevec(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram24_hidl_writeFileByNamevecEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::readFileByName(android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::castFrom(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC1EN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC1EN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_06INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> > android::hardware::details::castInterface<vendor::mediatek::hardware::nvram::V1_0::INvram, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::nvram::V1_0::BpHwNvram>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_06INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_0_H */
