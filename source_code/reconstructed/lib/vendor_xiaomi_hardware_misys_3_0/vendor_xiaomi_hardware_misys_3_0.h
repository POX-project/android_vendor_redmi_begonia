/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.misys@3.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.misys@3.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys20_hidl_GetCallBackPidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_GetCallBackPid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys20_hidl_GetCallBackPidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_OnDataReadyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryEyj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_OnDataReady(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, unsigned long long, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_OnDataReadyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryEyj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> android::hardware::details::wrapPassthrough<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack, void>(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_GetFileSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_GetFileSize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IFileSizeResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_GetFileSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys, vendor::xiaomi::hardware::misys::V3_0::IMiSys, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys19_hidl_AllocateBlockEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_AllocateBlock(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys19_hidl_AllocateBlockEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BsMiSysCallBack */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack10descriptorE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::descriptor */
extern void* _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSysC2EN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSysC2EN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::SetCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackC1ERKN7android2spINS3_14IMiSysCallBackEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::BnHwMiSysCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackC1ERKN7android2spINS3_14IMiSysCallBackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11GetFileSizeERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::GetFileSize(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IFileSizeResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11GetFileSizeERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_OnDataReadyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_OnDataReady(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_OnDataReadyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_ReadFromFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_ReadFromFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_ReadFromFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_ReleaseBlockEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_ReleaseBlock(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_ReleaseBlockEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::GetCallBackPid(unsigned int, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IGetPidResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_MiSysSetPropEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_MiSysSetProp(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_MiSysSetPropEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackENS6_17BpHwMiSysCallBackENS6_17BnHwMiSysCallBackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> android::hardware::fromBinder<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack, vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack, vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackENS6_17BpHwMiSysCallBackENS6_17BnHwMiSysCallBackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::castFrom(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackENS_4hidl4base4V1_05IBaseENS7_17BpHwMiSysCallBackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> > android::hardware::details::castInterface<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackENS_4hidl4base4V1_05IBaseENS7_17BpHwMiSysCallBackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys13AllocateBlockEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::AllocateBlock(unsigned long long, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys13AllocateBlockEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD0Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_NS3_14IMiSysCallBackE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_NS3_14IMiSysCallBackE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_06IMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_06IMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_SetCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_SetCallBack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_SetCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_WriteToFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_WriteToFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_WriteToFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_ReleaseBlockEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_ReleaseBlock(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_ReleaseBlockEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_06IMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::IMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_06IMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::ReleaseCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21_hidl_ReleaseCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_ReleaseCallBack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21_hidl_ReleaseCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys21_hidl_ReleaseCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_ReleaseCallBack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys21_hidl_ReleaseCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS6_11hidl_stringESC_y */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::WriteToFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS6_11hidl_stringESC_y(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::ReleaseBlock(android::hardware::hidl_memory const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V3_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys> > android::hardware::details::castInterface<vendor::xiaomi::hardware::misys::V3_0::IMiSys, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V3_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackE0_NS3_14IMiSysCallBackE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack-in-vendor::xiaomi::hardware::misys::V3_0::BsMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackE0_NS3_14IMiSysCallBackE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD2Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS6_11hidl_stringESC_NSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::ReadFromFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS6_11hidl_stringESC_NSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_N7android8hardware11BpInterfaceINS3_14IMiSysCallBackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack>-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_N7android8hardware11BpInterfaceINS3_14IMiSysCallBackEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackENS7_14IMiSysCallBackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack, vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackENS7_14IMiSysCallBackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBack13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSysCallBack::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBack13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_06IMiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::IMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_06IMiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackC2EN7android2spINS3_14IMiSysCallBackEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSysCallBack::BsMiSysCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackC2EN7android2spINS3_14IMiSysCallBackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_MiSysSetPropEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_MiSysSetProp(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys18_hidl_MiSysSetPropEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11OnDataReadyERKN7android8hardware11hidl_memoryEyj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::OnDataReady(android::hardware::hidl_memory const&, unsigned long long, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys11OnDataReadyERKN7android8hardware11hidl_memoryEyj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSys-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_NS3_6IMiSysE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackC2ERKN7android2spINS3_14IMiSysCallBackEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::BnHwMiSysCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackC2ERKN7android2spINS3_14IMiSysCallBackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_022readEmbeddedFromParcelERKNS3_12IBlockResultERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_022readEmbeddedFromParcelERKNS3_12IBlockResultERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_07BsMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BsMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_07BsMiSysE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::BpHwMiSysCallBack(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys10descriptorE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::descriptor */
extern void* _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_GetFileSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_GetFileSize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys17_hidl_GetFileSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::castFrom(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys> const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZThn20_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSys::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_ReadFromFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryERKNS6_11hidl_stringESH_NSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_ReadFromFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys18_hidl_ReadFromFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryERKNS6_11hidl_stringESH_NSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_07BsMiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSys-in-vendor::xiaomi::hardware::misys::V3_0::BsMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_07BsMiSysE0_NS3_6IMiSysE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack14_hidl_onDataCbEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryEyj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::_hidl_onDataCb(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, unsigned long long, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack14_hidl_onDataCbEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryEyj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys19_hidl_AllocateBlockEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::_hidl_AllocateBlock(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys19_hidl_AllocateBlockEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys20_hidl_GetCallBackPidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_GetCallBackPid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IGetPidResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys20_hidl_GetCallBackPidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_N7android8hardware11BpInterfaceINS3_6IMiSysEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::misys::V3_0::IMiSys>-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE0_N7android8hardware11BpInterfaceINS3_6IMiSysEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD2Ev */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::~BnHwMiSysCallBack() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackC1EN7android2spINS3_14IMiSysCallBackEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSysCallBack::BsMiSysCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_015BsMiSysCallBackC1EN7android2spINS3_14IMiSysCallBackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack14_hidl_onDataCbEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::_hidl_onDataCb(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack14_hidl_onDataCbEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::BpHwMiSysCallBack(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12MiSysSetPropERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::MiSysSetProp(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys12MiSysSetPropERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_SetCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_SetCallBack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_SetCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBack12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::misys::V3_0::BnHwMiSysCallBack */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_017BnHwMiSysCallBackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_021writeEmbeddedToParcelERKNS3_12IBlockResultEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_021writeEmbeddedToParcelERKNS3_12IBlockResultEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSysC1EN7android2spINS3_6IMiSysEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSys>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_07BsMiSysC1EN7android2spINS3_6IMiSysEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSysE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack8onDataCbERKN7android8hardware11hidl_memoryEyj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::onDataCb(android::hardware::hidl_memory const&, unsigned long long, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack8onDataCbERKN7android8hardware11hidl_memoryEyj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_014IMiSysCallBack4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::IMiSys::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys4pingEv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::ping() */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSys4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_WriteToFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryERKNS6_11hidl_stringESH_y */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::BpHwMiSys::_hidl_WriteToFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_09BpHwMiSys17_hidl_WriteToFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_memoryERKNS6_11hidl_stringESH_y(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BnHwMiSys::~BnHwMiSys() */
int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V3_09BnHwMiSysD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V3_0::BpHwMiSysCallBack::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V3_017BpHwMiSysCallBack15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_H */
