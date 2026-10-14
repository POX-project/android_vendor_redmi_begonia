/*
 * Reverse-Engineered ABI Specification for: android.hidl.allocator@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hidl.allocator@1.0.so
 */

#ifndef BEGONIA_RE_ANDROID_HIDL_ALLOCATOR_1_0_H
#define BEGONIA_RE_ANDROID_HIDL_ALLOCATOR_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4hidl9allocator4V1_010IAllocator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS2_10IAllocatorE */
/* Demangled: construction vtable for android::hidl::allocator::V1_0::IAllocator-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS2_10IAllocatorE;

/* Symbol: _ZTv0_n40_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv */
/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
int _ZTv0_n40_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS0_4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS0_4base4V1_05IBaseE;

/* Symbol: _ZTTN7android4hidl9allocator4V1_010IAllocatorE */
/* Demangled: VTT for android::hidl::allocator::V1_0::IAllocator */
extern void* _ZTTN7android4hidl9allocator4V1_010IAllocatorE;

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocator10onTransactEjRKNS_8hardware6ParcelEPS5_jNSt3__18functionIFvRS5_EEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocator10onTransactEjRKNS_8hardware6ParcelEPS5_jNSt3__18functionIFvRS5_EEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocatorD2Ev */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD2Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceINS_4hidl9allocator4V1_010IAllocatorENS3_4base4V1_05IBaseENS5_13BpHwAllocatorEEENS0_6ReturnINS_2spIT_EEEENSC_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<android::hidl::allocator::V1_0::IAllocator> > android::hardware::details::castInterface<android::hidl::allocator::V1_0::IAllocator, android::hidl::base::V1_0::IBase, android::hidl::allocator::V1_0::BpHwAllocator>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceINS_4hidl9allocator4V1_010IAllocatorENS3_4base4V1_05IBaseENS5_13BpHwAllocatorEEENS0_6ReturnINS_2spIT_EEEENSC_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTTN7android4hidl9allocator4V1_013BnHwAllocatorE */
/* Demangled: VTT for android::hidl::allocator::V1_0::BnHwAllocator */
extern void* _ZTTN7android4hidl9allocator4V1_013BnHwAllocatorE;

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocatorD0Ev */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE8_NS_8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE8_NS_8hardware10IInterfaceE;

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN7android4hidl9allocator4V1_010IAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_011BsAllocatorC2ENS_2spINS2_10IAllocatorEEE */
/* Demangled: android::hidl::allocator::V1_0::BsAllocator::BsAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator>) */
int _ZN7android4hidl9allocator4V1_011BsAllocatorC2ENS_2spINS2_10IAllocatorEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware9BHwBinderE;

/* Symbol: _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev */
/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spINS0_4base4V1_05IBaseEEEb */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spINS0_4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocator4pingEv */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::ping() */
int _ZN7android4hidl9allocator4V1_013BnHwAllocator4pingEv(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_011BsAllocatorE0_NS2_10IAllocatorE */
/* Demangled: construction vtable for android::hidl::allocator::V1_0::IAllocator-in-android::hidl::allocator::V1_0::BsAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_011BsAllocatorE0_NS2_10IAllocatorE;

/* Symbol: _ZTVN7android4hidl9allocator4V1_013BpHwAllocatorE */
/* Demangled: vtable for android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTVN7android4hidl9allocator4V1_013BpHwAllocatorE;

/* Symbol: _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev */
/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator21setHALInstrumentationEv */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::setHALInstrumentation() */
int _ZN7android4hidl9allocator4V1_010IAllocator21setHALInstrumentationEv(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android4hidl9allocator4V1_010IAllocator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android4hidl9allocator4V1_011BsAllocator13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: android::hidl::allocator::V1_0::BsAllocator::addOnewayTask(std::__1::function<void ()>) */
int _ZN7android4hidl9allocator4V1_011BsAllocator13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_011BsAllocatorC1ENS_2spINS2_10IAllocatorEEE */
/* Demangled: android::hidl::allocator::V1_0::BsAllocator::BsAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator>) */
int _ZN7android4hidl9allocator4V1_011BsAllocatorC1ENS_2spINS2_10IAllocatorEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocator19_hidl_batchAllocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::_hidl_batchAllocate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocator19_hidl_batchAllocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator8allocateEmNSt3__18functionIFvbRKNS_8hardware11hidl_memoryEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::allocate(unsigned long, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator8allocateEmNSt3__18functionIFvbRKNS_8hardware11hidl_memoryEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocatorC1ERKNS_2spINS_8hardware7IBinderEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::BpHwAllocator(android::sp<android::hardware::IBinder> const&) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocatorC1ERKNS_2spINS_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS0_4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS0_4base4V1_08BnHwBaseE;

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator10descriptorE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::descriptor */
extern void* _ZN7android4hidl9allocator4V1_010IAllocator10descriptorE;

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN7android4hidl9allocator4V1_010IAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator13batchAllocateEmmNSt3__18functionIFvbRKNS_8hardware8hidl_vecINS6_11hidl_memoryEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::batchAllocate(unsigned long, unsigned long, std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::hidl_memory> const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator13batchAllocateEmmNSt3__18functionIFvbRKNS_8hardware8hidl_vecINS6_11hidl_memoryEEEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN7android4hidl9allocator4V1_010IAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN7android4hidl9allocator4V1_010IAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android4hidl9allocator4V1_010IAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator21notifySyspropsChangedEv */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::notifySyspropsChanged() */
int _ZN7android4hidl9allocator4V1_010IAllocator21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator14_hidl_allocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmNSt3__18functionIFvbRKNS4_11hidl_memoryEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::_hidl_allocate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator14_hidl_allocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmNSt3__18functionIFvbRKNS4_11hidl_memoryEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator4pingEv */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::ping() */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTVN7android4hidl9allocator4V1_013BnHwAllocatorE */
/* Demangled: vtable for android::hidl::allocator::V1_0::BnHwAllocator */
extern void* _ZTVN7android4hidl9allocator4V1_013BnHwAllocatorE;

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN7android4hidl9allocator4V1_010IAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator4pingEv */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::ping() */
int _ZN7android4hidl9allocator4V1_010IAllocator4pingEv(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocatorD1Ev */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator19_hidl_batchAllocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmmNSt3__18functionIFvbRKNS4_8hidl_vecINS4_11hidl_memoryEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::_hidl_batchAllocate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, unsigned long, std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::hidl_memory> const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator19_hidl_batchAllocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmmNSt3__18functionIFvbRKNS4_8hidl_vecINS4_11hidl_memoryEEEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocatorC2ERKNS_2spINS_8hardware7IBinderEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::BpHwAllocator(android::sp<android::hardware::IBinder> const&) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocatorC2ERKNS_2spINS_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android4hidl9allocator4V1_010IAllocator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocatorC2ERKNS_2spINS2_10IAllocatorEEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::BnHwAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator> const&) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocatorC2ERKNS_2spINS2_10IAllocatorEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator21setHALInstrumentationEv */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::setHALInstrumentation() */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalINS_4hidl9allocator4V1_013BpHwAllocatorENS5_10IAllocatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEbb */
/* Demangled: android::sp<android::hidl::allocator::V1_0::IAllocator> android::hardware::details::getServiceInternal<android::hidl::allocator::V1_0::BpHwAllocator, android::hidl::allocator::V1_0::IAllocator, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalINS_4hidl9allocator4V1_013BpHwAllocatorENS5_10IAllocatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_010IAllocatorE0_NS0_4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hidl::allocator::V1_0::IAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_010IAllocatorE0_NS0_4base4V1_05IBaseE;

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS_8hardware11BpInterfaceINS2_10IAllocatorEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<android::hidl::allocator::V1_0::IAllocator>-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS_8hardware11BpInterfaceINS2_10IAllocatorEEE;

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware7IBinderE;

/* Symbol: _ZTVN7android4hidl9allocator4V1_010IAllocatorE */
/* Demangled: vtable for android::hidl::allocator::V1_0::IAllocator */
extern void* _ZTVN7android4hidl9allocator4V1_010IAllocatorE;

/* Symbol: _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev */
/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spIS3_EEb */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::castFrom(android::sp<android::hidl::allocator::V1_0::IAllocator> const&, bool) */
int _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spIS3_EEb(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN7android4hidl9allocator4V1_013BpHwAllocatorE */
/* Demangled: VTT for android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTTN7android4hidl9allocator4V1_013BpHwAllocatorE;

/* Symbol: _ZTVN7android4hidl9allocator4V1_011BsAllocatorE */
/* Demangled: vtable for android::hidl::allocator::V1_0::BsAllocator */
extern void* _ZTVN7android4hidl9allocator4V1_011BsAllocatorE;

/* Symbol: _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev */
/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
int _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocator14_hidl_allocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::_hidl_allocate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocator14_hidl_allocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BnHwAllocatorC1ERKNS_2spINS2_10IAllocatorEEE */
/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::BnHwAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator> const&) */
int _ZN7android4hidl9allocator4V1_013BnHwAllocatorC1ERKNS_2spINS2_10IAllocatorEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void);

/* Symbol: _ZThn16_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
int _ZThn16_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN7android4hidl9allocator4V1_010IAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_010IAllocator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS_2spINS0_7manager4V1_020IServiceNotificationEEE */
/* Demangled: android::hidl::allocator::V1_0::IAllocator::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN7android4hidl9allocator4V1_010IAllocator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS_2spINS0_7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN7android4hidl9allocator4V1_013BpHwAllocator21notifySyspropsChangedEv */
/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::notifySyspropsChanged() */
int _ZN7android4hidl9allocator4V1_013BpHwAllocator21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE16_NS_8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE16_NS_8hardware11BpHwRefBaseE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HIDL_ALLOCATOR_1_0_H */
