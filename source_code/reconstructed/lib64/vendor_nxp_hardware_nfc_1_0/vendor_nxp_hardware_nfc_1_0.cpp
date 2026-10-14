/*
 * Reverse-Engineered Source for: vendor.nxp.hardware.nfc@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_nxp_hardware_nfc_1_0"

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
#include "vendor_nxp_hardware_nfc_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::nxp::hardware::nfc::V1_0::INqNfc>-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android8hardware11BpInterfaceINS3_6INqNfcEEE = NULL;

/* Exported Object: VTT for vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::_hidl_ioctl(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc11_hidl_ioctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc11_hidl_ioctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD2Ev(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD2Ev() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE = NULL;

/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void) {
    ALOGD("_ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc4pingEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc4pingEv() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::nxp::hardware::nfc::V1_0::BsNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::BnHwNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC2ERKN7android2spINS3_6INqNfcEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC2ERKN7android2spINS3_6INqNfcEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> android::hardware::details::getServiceInternal<vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc, vendor::nxp::hardware::nfc::V1_0::INqNfc, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcENS7_6INqNfcEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcENS7_6INqNfcEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev() called");
    return 0;
}

/* Exported Object: vendor::nxp::hardware::nfc::V1_0::INqNfc::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10descriptorE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::ioctl(unsigned long, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5ioctlEmRKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5ioctlEmRKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void) {
    ALOGD("_ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::BpHwNqNfc(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfc13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfc13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::castFrom(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::BnHwNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC1ERKN7android2spINS3_6INqNfcEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC1ERKN7android2spINS3_6INqNfcEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::BpHwNqNfc(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
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

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc4pingEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc4pingEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> > android::hardware::details::castInterface<vendor::nxp::hardware::nfc::V1_0::INqNfc, android::hidl::base::V1_0::IBase, vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor3nxp8hardware3nfc4V1_06INqNfcENS_4hidl4base4V1_05IBaseENS7_9BpHwNqNfcEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor3nxp8hardware3nfc4V1_06INqNfcENS_4hidl4base4V1_05IBaseENS7_9BpHwNqNfcEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_NS3_6INqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::BsNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC1EN7android2spINS3_6INqNfcEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC1EN7android2spINS3_6INqNfcEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::_hidl_ioctl(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11_hidl_ioctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmRKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11_hidl_ioctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmRKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_06INqNfcE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor3nxp8hardware3nfc4V1_06INqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::BsNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC2EN7android2spINS3_6INqNfcEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC2EN7android2spINS3_6INqNfcEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc-in-vendor::nxp::hardware::nfc::V1_0::BsNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE0_NS3_6INqNfcE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc4pingEv(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor3nxp8hardware3nfc4V1_06INqNfc24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor3nxp8hardware3nfc4V1_06INqNfcE = NULL;

/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv() called");
    return 0;
}
