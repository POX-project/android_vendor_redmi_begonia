/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.lbs@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_lbs_1_0"

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
#include "vendor_mediatek_hardware_lbs_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbs13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_05BsLbs13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_04ILbsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::BpHwLbsCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12sendToServerERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12sendToServerERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::BnHwLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC1ERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC1ERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::castFrom(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::castFrom(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::BnHwLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC2ERKN7android2spINS3_4ILbsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC2ERKN7android2spINS3_4ILbsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE = NULL;

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, void>(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_sendToServerWithCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs30_hidl_sendToServerWithCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs30_hidl_sendToServerWithCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
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

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback, vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackENS7_12ILbsCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackENS7_12ILbsCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::BsLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC1EN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC1EN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::BnHwLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC1ERKN7android2spINS3_4ILbsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsC1ERKN7android2spINS3_4ILbsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS5_8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS5_8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_NS3_4ILbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::BpHwLbs(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_04ILbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::lbs::V1_0::BpHwLbs, vendor::mediatek::hardware::lbs::V1_0::ILbs, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsENS7_4ILbsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsENS7_4ILbsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::BnHwLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC2ERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackC2ERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::lbs::V1_0::ILbs>-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android8hardware11BpInterfaceINS3_4ILbsEEE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLbsCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLbsCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback-in-vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackE0_NS3_12ILbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs> > android::hardware::details::castInterface<vendor::mediatek::hardware::lbs::V1_0::ILbs, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::lbs::V1_0::BpHwLbs>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_04ILbsENS_4hidl4base4V1_05IBaseENS7_7BpHwLbsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3lbs4V1_04ILbsENS_4hidl4base4V1_05IBaseENS7_7BpHwLbsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::BpHwLbsCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::ILbs::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::ILbs */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_04ILbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbs17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs11setCallbackERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::BsLbsCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC2EN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallbackC2EN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbsCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_013BsLbsCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_NS3_12ILbsCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::BsLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_05BsLbsE0_NS3_4ILbsE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::ILbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::BsLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC1EN7android2spINS3_4ILbsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC1EN7android2spINS3_4ILbsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::BpHwLbs(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> android::hardware::fromBinder<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback, vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback, vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS6_15BpHwLbsCallbackENS6_15BnHwLbsCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3lbs4V1_012ILbsCallbackENS6_15BpHwLbsCallbackENS6_15BnHwLbsCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback>-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallbackE0_N7android8hardware11BpInterfaceINS3_12ILbsCallbackEEE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BsLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_05BsLbsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BsLbs::BsLbs(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbs>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC2EN7android2spINS3_4ILbsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_05BsLbsC2EN7android2spINS3_4ILbsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbs::_hidl_sendToServerWithCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs30_hidl_sendToServerWithCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BpHwLbs30_hidl_sendToServerWithCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILbsCallbackEEERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::lbs::V1_0::BpHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_07BpHwLbsE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::BnHwLbs */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_07BnHwLbsE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::lbs::V1_0::BnHwLbs::~BnHwLbs() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3lbs4V1_07BnHwLbsD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BpHwLbsCallback::callbackToClient(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BpHwLbsCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbs::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_04ILbs4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_04ILbs4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::ILbsCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_012ILbsCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::BnHwLbsCallback::~BnHwLbsCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_015BnHwLbsCallbackD1Ev() called");
    return 0;
}
