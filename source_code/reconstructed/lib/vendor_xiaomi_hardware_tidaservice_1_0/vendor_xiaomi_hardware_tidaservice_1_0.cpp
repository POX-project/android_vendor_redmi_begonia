/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.tidaservice@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_tidaservice_1_0"

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
#include "vendor_xiaomi_hardware_tidaservice_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::castFrom(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::signInit(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8signInitERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE0_NS3_12ITidaServiceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::sign(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_sign(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10_hidl_signEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService10_hidl_signEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_signUpdate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService16_hidl_signUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService16_hidl_signUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_generateKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService21_hidl_generateKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService21_hidl_generateKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwTidaServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC1ERKN7android2spINS3_12ITidaServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::signUpdate(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10signUpdateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::contains(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8containsERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8containsERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_signInit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_signInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_signInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_removeAllKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService18_hidl_removeAllKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService18_hidl_removeAllKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::removeAllKey() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12removeAllKeyEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12removeAllKeyEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_signUpdate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService16_hidl_signUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService16_hidl_signUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_getFpIds(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_getFpIdsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_getFpIdsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_contains(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_containsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_containsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_NS3_12ITidaServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getFpIds(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::generateKeyPair(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15generateKeyPairERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_generateKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21_hidl_generateKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService21_hidl_generateKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
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

/* Exported Object: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_signInit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_signInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_signInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE0_N7android8hardware11BpInterfaceINS3_12ITidaServiceEEE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::~BnHwTidaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_getFpIds(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_getFpIdsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService14_hidl_getFpIdsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService, vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceENS7_12ITidaServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC1EN7android2spINS3_12ITidaServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::_hidl_contains(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_containsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaService14_hidl_containsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::BpHwTidaService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BsTidaService::BsTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_013BsTidaServiceC2EN7android2spINS3_12ITidaServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_sign(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10_hidl_signEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService10_hidl_signEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService::BnHwTidaService(android::sp<vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceC2ERKN7android2spINS3_12ITidaServiceEEE() called");
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

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_012ITidaServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService::_hidl_removeAllKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService18_hidl_removeAllKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaService18_hidl_removeAllKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::tidaservice::V1_0::BpHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_015BpHwTidaServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::tidaservice::V1_0::BnHwTidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_015BnHwTidaServiceE = NULL;
