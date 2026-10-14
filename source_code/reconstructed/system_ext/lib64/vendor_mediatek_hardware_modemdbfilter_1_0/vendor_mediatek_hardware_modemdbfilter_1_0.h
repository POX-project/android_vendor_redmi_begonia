/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.modemdbfilter@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.modemdbfilter@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MODEMDBFILTER_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MODEMDBFILTER_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, void>(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD2Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::BpHwCopyDBFilter(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackENS7_17IFileDataCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackENS7_17IFileDataCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11getFileDataERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getFileData(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11getFileDataERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC2EN7android2spINS3_13ICopyDBFilterEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::BsCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC2EN7android2spINS3_13ICopyDBFilterEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterENS_4hidl4base4V1_05IBaseENS7_16BpHwCopyDBFilterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterENS_4hidl4base4V1_05IBaseENS7_16BpHwCopyDBFilterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android8hardware11BpInterfaceINS3_13ICopyDBFilterEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android8hardware11BpInterfaceINS3_13ICopyDBFilterEEE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_NS3_17IFileDataCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_NS3_17IFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::_hidl_getFileListAndSize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::BpHwCopyDBFilter(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC2ERKN7android2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::BnHwFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC2ERKN7android2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC1ERKN7android2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::BnHwFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC1ERKN7android2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE;

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback24_hidl_sendFileFDToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::_hidl_sendFileFDToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback24_hidl_sendFileFDToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE0_NS3_17IFileDataCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE0_NS3_17IFileDataCallbackE;

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_NS3_17IFileListCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_NS3_17IFileListCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback4pingEv(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC1ERKN7android2spINS3_13ICopyDBFilterEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::BnHwCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC1ERKN7android2spINS3_13ICopyDBFilterEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback26_hidl_sendFileListToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::_hidl_sendFileListToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback26_hidl_sendFileListToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE0_NS3_17IFileListCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE0_NS3_17IFileListCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10descriptorE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::BpHwFileListCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10descriptorE;

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback26_hidl_sendFileListToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::_hidl_sendFileListToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback26_hidl_sendFileListToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD2Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback24_hidl_sendFileFDToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::_hidl_sendFileFDToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback24_hidl_sendFileFDToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter17_hidl_getFileDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::_hidl_getFileData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter17_hidl_getFileDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC2ERKN7android2spINS3_13ICopyDBFilterEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::BnHwCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC2ERKN7android2spINS3_13ICopyDBFilterEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter17_hidl_getFileDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::_hidl_getFileData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter17_hidl_getFileDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_NS3_13ICopyDBFilterE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_NS3_13ICopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileDataCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileDataCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileListCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileListCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::BpHwFileListCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE;

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE0_NS3_13ICopyDBFilterE */
/* Demangled: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE0_NS3_13ICopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC2EN7android2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::BsFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC2EN7android2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback20sendFileListToClientERKN7android8hardware8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::sendFileListToClient(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback20sendFileListToClientERKN7android8hardware8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilter13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilter13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC2EN7android2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::BsFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC2EN7android2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC2ERKN7android2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::BnHwFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC2ERKN7android2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS6_20BpHwFileListCallbackENS6_20BnHwFileListCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::fromBinder<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS6_20BpHwFileListCallbackENS6_20BnHwFileListCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, void>(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::BpHwFileDataCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware7IBinderE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackENS7_17IFileListCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackENS7_17IFileListCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::_hidl_getFileListAndSize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC1ERKN7android2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::BnHwFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC1ERKN7android2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback18sendFileFDToClientERKN7android8hardware11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::sendFileFDToClient(android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback18sendFileFDToClientERKN7android8hardware11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10descriptorE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::descriptor */
extern void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10descriptorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE */
/* Demangled: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileListCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileListCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC1EN7android2spINS3_17IFileDataCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::BsFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC1EN7android2spINS3_17IFileDataCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileDataCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileDataCallbackEEE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterENS7_13ICopyDBFilterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter, vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterENS7_13ICopyDBFilterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::ping() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback */
extern void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC1EN7android2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::BsFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC1EN7android2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter18getFileListAndSizeERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getFileListAndSize(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter18getFileListAndSizeERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::BpHwFileDataCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS6_20BpHwFileDataCallbackENS6_20BnHwFileDataCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::fromBinder<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS6_20BpHwFileDataCallbackENS6_20BnHwFileDataCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC1EN7android2spINS3_13ICopyDBFilterEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::BsCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC1EN7android2spINS3_13ICopyDBFilterEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MODEMDBFILTER_1_0_H */
