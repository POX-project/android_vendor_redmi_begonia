/*
 * Reverse-Engineered Source for: android.hidl.allocator@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hidl_allocator_1_0"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "android_hidl_allocator_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::allocator::V1_0::IAllocator-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS2_10IAllocatorE = NULL;

/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS0_4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hidl::allocator::V1_0::IAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android4hidl9allocator4V1_010IAllocatorE = NULL;

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocator10onTransactEjRKNS_8hardware6ParcelEPS5_jNSt3__18functionIFvRS5_EEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocator10onTransactEjRKNS_8hardware6ParcelEPS5_jNSt3__18functionIFvRS5_EEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD2Ev(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocatorD2Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<android::hidl::allocator::V1_0::IAllocator> > android::hardware::details::castInterface<android::hidl::allocator::V1_0::IAllocator, android::hidl::base::V1_0::IBase, android::hidl::allocator::V1_0::BpHwAllocator>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceINS_4hidl9allocator4V1_010IAllocatorENS3_4base4V1_05IBaseENS5_13BpHwAllocatorEEENS0_6ReturnINS_2spIT_EEEENSC_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceINS_4hidl9allocator4V1_010IAllocatorENS3_4base4V1_05IBaseENS5_13BpHwAllocatorEEENS0_6ReturnINS_2spIT_EEEENSC_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for android::hidl::allocator::V1_0::BnHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android4hidl9allocator4V1_013BnHwAllocatorE = NULL;

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocatorD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE8_NS_8hardware10IInterfaceE = NULL;

/* Demangled: android::hidl::allocator::V1_0::IAllocator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BsAllocator::BsAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_011BsAllocatorC2ENS_2spINS2_10IAllocatorEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_011BsAllocatorC2ENS_2spINS2_10IAllocatorEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware9BHwBinderE = NULL;

/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spINS0_4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spINS0_4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocator4pingEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocator4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::allocator::V1_0::IAllocator-in-android::hidl::allocator::V1_0::BsAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_011BsAllocatorE0_NS2_10IAllocatorE = NULL;

/* Exported Object: vtable for android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4hidl9allocator4V1_013BpHwAllocatorE = NULL;

/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void) {
    ALOGD("_ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator21setHALInstrumentationEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BsAllocator::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_011BsAllocator13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_011BsAllocator13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BsAllocator::BsAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_011BsAllocatorC1ENS_2spINS2_10IAllocatorEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_011BsAllocatorC1ENS_2spINS2_10IAllocatorEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::_hidl_batchAllocate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocator19_hidl_batchAllocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocator19_hidl_batchAllocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator13unlinkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::allocate(unsigned long, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator8allocateEmNSt3__18functionIFvbRKNS_8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator8allocateEmNSt3__18functionIFvbRKNS_8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::BpHwAllocator(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocatorC1ERKNS_2spINS_8hardware7IBinderEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocatorC1ERKNS_2spINS_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS0_4base4V1_08BnHwBaseE = NULL;

/* Exported Object: android::hidl::allocator::V1_0::IAllocator::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN7android4hidl9allocator4V1_010IAllocator10descriptorE = NULL;

/* Demangled: android::hidl::allocator::V1_0::IAllocator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::batchAllocate(unsigned long, unsigned long, std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::hidl_memory> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator13batchAllocateEmmNSt3__18functionIFvbRKNS_8hardware8hidl_vecINS6_11hidl_memoryEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator13batchAllocateEmmNSt3__18functionIFvbRKNS_8hardware8hidl_vecINS6_11hidl_memoryEEEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator5debugERKNS_8hardware11hidl_handleERKNS4_8hidl_vecINS4_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator21notifySyspropsChangedEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocator12getDebugInfoENSt3__18functionIFvRKNS0_4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator11linkToDeathERKNS_2spINS_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::_hidl_allocate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator14_hidl_allocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmNSt3__18functionIFvbRKNS4_11hidl_memoryEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator14_hidl_allocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmNSt3__18functionIFvbRKNS4_11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator4pingEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: vtable for android::hidl::allocator::V1_0::BnHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4hidl9allocator4V1_013BnHwAllocatorE = NULL;

/* Demangled: android::hidl::allocator::V1_0::IAllocator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator4pingEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator4pingEv() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocatorD1Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::_hidl_batchAllocate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, unsigned long, std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::hidl_memory> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator19_hidl_batchAllocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmmNSt3__18functionIFvbRKNS4_8hidl_vecINS4_11hidl_memoryEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator19_hidl_batchAllocateEPNS_8hardware10IInterfaceEPNS4_7details16HidlInstrumentorEmmNSt3__18functionIFvbRKNS4_8hidl_vecINS4_11hidl_memoryEEEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::BpHwAllocator(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocatorC2ERKNS_2spINS_8hardware7IBinderEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocatorC2ERKNS_2spINS_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::BnHwAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocatorC2ERKNS_2spINS2_10IAllocatorEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocatorC2ERKNS_2spINS2_10IAllocatorEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator21setHALInstrumentationEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: android::sp<android::hidl::allocator::V1_0::IAllocator> android::hardware::details::getServiceInternal<android::hidl::allocator::V1_0::BpHwAllocator, android::hidl::allocator::V1_0::IAllocator, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalINS_4hidl9allocator4V1_013BpHwAllocatorENS5_10IAllocatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalINS_4hidl9allocator4V1_013BpHwAllocatorENS5_10IAllocatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hidl::allocator::V1_0::IAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_010IAllocatorE0_NS0_4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<android::hidl::allocator::V1_0::IAllocator>-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE0_NS_8hardware11BpInterfaceINS2_10IAllocatorEEE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-android::hidl::allocator::V1_0::BnHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BnHwAllocatorE0_NS_8hardware7IBinderE = NULL;

/* Exported Object: vtable for android::hidl::allocator::V1_0::IAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4hidl9allocator4V1_010IAllocatorE = NULL;

/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev(void) {
    ALOGD("_ZThn32_N7android4hidl9allocator4V1_013BnHwAllocatorD1Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::castFrom(android::sp<android::hidl::allocator::V1_0::IAllocator> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spIS3_EEb(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator8castFromERKNS_2spIS3_EEb() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator19interfaceDescriptorENSt3__18functionIFvRKNS_8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android4hidl9allocator4V1_013BpHwAllocatorE = NULL;

/* Exported Object: vtable for android::hidl::allocator::V1_0::BsAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4hidl9allocator4V1_011BsAllocatorE = NULL;

/* Demangled: virtual thunk to android::hidl::allocator::V1_0::BnHwAllocator::~BnHwAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android4hidl9allocator4V1_013BnHwAllocatorD0Ev() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::_hidl_allocate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocator14_hidl_allocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocator14_hidl_allocateEPNS0_4base4V1_08BnHwBaseERKNS_8hardware6ParcelEPS9_NSt3__18functionIFvRS9_EEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BnHwAllocator::BnHwAllocator(android::sp<android::hidl::allocator::V1_0::IAllocator> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BnHwAllocatorC1ERKNS_2spINS2_10IAllocatorEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BnHwAllocatorC1ERKNS_2spINS2_10IAllocatorEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator14interfaceChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hidl::allocator::V1_0::BpHwAllocator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N7android4hidl9allocator4V1_013BpHwAllocator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator12getHashChainENSt3__18functionIFvRKNS_8hardware8hidl_vecINS6_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::IAllocator::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_010IAllocator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS_2spINS0_7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_010IAllocator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS_2spINS0_7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: android::hidl::allocator::V1_0::BpHwAllocator::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4hidl9allocator4V1_013BpHwAllocator21notifySyspropsChangedEv(void) {
    ALOGD("_ZN7android4hidl9allocator4V1_013BpHwAllocator21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hidl::allocator::V1_0::BpHwAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android4hidl9allocator4V1_013BpHwAllocatorE16_NS_8hardware11BpHwRefBaseE = NULL;
