/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.touchll@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_touchll_1_0"

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
#include "vendor_mediatek_hardware_touchll_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::BnHwTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC1ERKN7android2spINS3_8ITouchllEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC1ERKN7android2spINS3_8ITouchllEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchll13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchll13addOnewayTaskENSt3__18functionIFvvEEE() called");
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

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::BsTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC2EN7android2spINS3_8ITouchllEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC2EN7android2spINS3_8ITouchllEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::touchll::V1_0::ITouchll>-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_N7android8hardware11BpInterfaceINS3_8ITouchllEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::notifyAppState(android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14notifyAppStateERKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14notifyAppStateERKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::_hidl_getAppStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll18_hidl_getAppStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll18_hidl_getAppStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvSE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::BpHwTouchll(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::_hidl_getAppStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll18_hidl_getAppStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll18_hidl_getAppStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE0_NS3_8ITouchllE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getAppStatus(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getAppStatusERKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getAppStatusERKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7touchll4V1_08ITouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::touchll::V1_0::BsTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::BnHwTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC2ERKN7android2spINS3_8ITouchllEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllC2ERKN7android2spINS3_8ITouchllEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::touchll::V1_0::ITouchll::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll10descriptorE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll, vendor::mediatek::hardware::touchll::V1_0::ITouchll, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllENS7_8ITouchllEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllENS7_8ITouchllEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchll10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> > android::hardware::details::castInterface<vendor::mediatek::hardware::touchll::V1_0::ITouchll, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7touchll4V1_08ITouchllENS_4hidl4base4V1_05IBaseENS7_11BpHwTouchllEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7touchll4V1_08ITouchllENS_4hidl4base4V1_05IBaseENS7_11BpHwTouchllEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::touchll::V1_0::ITouchll-in-vendor::mediatek::hardware::touchll::V1_0::BsTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_09BsTouchllE0_NS3_8ITouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7touchll4V1_08ITouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::BpHwTouchll(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BpHwTouchllC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::castFrom(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE = NULL;

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::BsTouchll::BsTouchll(android::sp<vendor::mediatek::hardware::touchll::V1_0::ITouchll>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC1EN7android2spINS3_8ITouchllEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_09BsTouchllC1EN7android2spINS3_8ITouchllEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllE0_N7android8hardware7IBinderE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BnHwTouchll::~BnHwTouchll() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7touchll4V1_011BnHwTouchllD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::touchll::V1_0::ITouchll::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7touchll4V1_08ITouchll24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::touchll::V1_0::ITouchll */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7touchll4V1_08ITouchllE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::touchll::V1_0::BpHwTouchll::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware7touchll4V1_011BpHwTouchll15onLastStrongRefEPKv() called");
    return 0;
}
