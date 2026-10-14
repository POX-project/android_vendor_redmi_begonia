/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.misys@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.misys@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V1_0::BsMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20_hidl_MiSysWriteFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_SE_jh */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_MiSysWriteFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, unsigned char) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20_hidl_MiSysWriteFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_SE_jh(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC2EN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC2EN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys20_hidl_MiSysWriteFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_MiSysWriteFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys20_hidl_MiSysWriteFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_11IReadResultEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IReadResult const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_11IReadResultEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys26_hidl_EraseFileOrDirectoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_EraseFileOrDirectory(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys26_hidl_EraseFileOrDirectoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_11IReadResultERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IReadResult const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_11IReadResultERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10descriptorE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::descriptor */
extern void* _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::DirListFiles(android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13MiSysReadFileERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_11IReadResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::MiSysReadFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IReadResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13MiSysReadFileERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_11IReadResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14MiSysWriteFileERKN7android8hardware11hidl_stringES9_S9_jh */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::MiSysWriteFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, unsigned char) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14MiSysWriteFileERKN7android8hardware11hidl_stringES9_S9_jh(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V1_06IMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V1_06IMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_15IFileListResultEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_15IFileListResultEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_9IFileInfoERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IFileInfo const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_9IFileInfoERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::EraseFileOrDirectory(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys19_hidl_MiSysReadFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_MiSysReadFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys19_hidl_MiSysReadFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware7IBinderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::castFrom(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC1EN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC1EN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys18_hidl_DirListFilesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_DirListFiles(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys18_hidl_DirListFilesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys18_hidl_DirListFilesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_DirListFiles(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys18_hidl_DirListFilesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V1_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> > android::hardware::details::castInterface<vendor::xiaomi::hardware::misys::V1_0::IMiSys, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V1_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_NS3_6IMiSysE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys26_hidl_EraseFileOrDirectoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_EraseFileOrDirectory(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys26_hidl_EraseFileOrDirectoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19_hidl_MiSysReadFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_11IReadResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_MiSysReadFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IReadResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19_hidl_MiSysReadFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_11IReadResultEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys-in-vendor::xiaomi::hardware::misys::V1_0::BsMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE0_NS3_6IMiSysE;

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_15IFileListResultERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_15IFileListResultERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V1_06IMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V1_06IMiSysE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys4pingEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys, vendor::xiaomi::hardware::misys::V1_0::IMiSys, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD2Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD2Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_06IMiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_06IMiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android8hardware11BpInterfaceINS3_6IMiSysEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::misys::V1_0::IMiSys>-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android8hardware11BpInterfaceINS3_6IMiSysEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_9IFileInfoEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IFileInfo const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_9IFileInfoEPN7android8hardware6ParcelEjj(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_H */
