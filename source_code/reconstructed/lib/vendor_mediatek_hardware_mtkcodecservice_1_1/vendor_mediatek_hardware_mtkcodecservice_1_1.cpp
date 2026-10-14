/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkcodecservice@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkcodecservice_1_1"

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
#include "vendor_mediatek_hardware_mtkcodecservice_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::castFrom(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Decode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DecodeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DecodeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS6_27BpHwMtkCodecServiceCallbackENS6_27BnHwMtkCodecServiceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS6_27BpHwMtkCodecServiceCallbackENS6_27BnHwMtkCodecServiceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10descriptorE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Reset(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11_hidl_ResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_14apeResetParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11_hidl_ResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_14apeResetParamsEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::readEmbeddedFromParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_12apeDecParamsERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_12apeDecParamsERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService, vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceENS7_16IMtkCodecServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceENS7_16IMtkCodecServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Decode(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::writeEmbeddedToParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_15apeDecRetParamsEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_15apeDecRetParamsEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::BnHwMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC2ERKN7android2spINS3_16IMtkCodecServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC2ERKN7android2spINS3_16IMtkCodecServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::BnHwMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC1ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC1ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::setCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::BpHwMtkCodecServiceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10_hidl_InitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10_hidl_InitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback, vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackENS7_24IMtkCodecServiceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackENS7_24IMtkCodecServiceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_DeInit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DeInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DeInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceENS_4hidl4base4V1_05IBaseENS7_19BpHwMtkCodecServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceENS_4hidl4base4V1_05IBaseENS7_19BpHwMtkCodecServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5ResetERKNS3_14apeResetParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService5ResetERKNS3_14apeResetParamsEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Destory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService7DestoryEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService7DestoryEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::BsMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC1EN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC1EN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::BsMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC1EN7android2spINS3_16IMtkCodecServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC1EN7android2spINS3_16IMtkCodecServiceEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_NS3_24IMtkCodecServiceCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4InitERKNS3_13apeInitParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4InitERKNS3_13apeInitParamsEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback::BsMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC2EN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackC2EN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService10_hidl_InitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13apeInitParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService10_hidl_InitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_13apeInitParamsEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::DeInit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DeInitEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6DeInitEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::castFrom(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Destory(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService13_hidl_DestoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService13_hidl_DestoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::BpHwMtkCodecServiceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::BpHwMtkCodecService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Decode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DecodeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_DecodeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::BnHwMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC1ERKN7android2spINS3_16IMtkCodecServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceC1ERKN7android2spINS3_16IMtkCodecServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_125BsMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceE0_NS3_16IMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMtkCodecServiceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMtkCodecServiceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::readEmbeddedFromParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_15apeDecRetParamsERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_122readEmbeddedFromParcelERKNS3_15apeDecRetParamsERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::callbackToClient(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback16callbackToClientERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Create(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_CreateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_CreateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_NS3_16IMtkCodecServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::BnHwMtkCodecServiceCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC2ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackC2ERKN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BsMtkCodecService::BsMtkCodecService(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC2EN7android2spINS3_16IMtkCodecServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_117BsMtkCodecServiceC2EN7android2spINS3_16IMtkCodecServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::~BnHwMtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Reset(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService11_hidl_ResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService11_hidl_ResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecService::_hidl_Create(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_CreateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BnHwMtkCodecService12_hidl_CreateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_Destory(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13_hidl_DestoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService13_hidl_DestoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::writeEmbeddedToParcel(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_12apeDecParamsEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_121writeEmbeddedToParcelERKNS3_12apeDecParamsEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback, void>(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::Create(std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceE0_N7android8hardware11BpInterfaceINS3_16IMtkCodecServiceEEE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecServiceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_127BpHwMtkCodecServiceCallbackE0_N7android8hardware11BpInterfaceINS3_24IMtkCodecServiceCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::_hidl_DeInit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DeInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecService12_hidl_DeInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::BpHwMtkCodecService::BpHwMtkCodecService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_119BpHwMtkCodecServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkcodecservice::V1_1::BnHwMtkCodecServiceCallback::~BnHwMtkCodecServiceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware15mtkcodecservice4V1_127BnHwMtkCodecServiceCallbackD1Ev() called");
    return 0;
}
