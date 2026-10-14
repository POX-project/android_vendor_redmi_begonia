/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.mfidoca@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_mfidoca_1_0"

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
#include "vendor_xiaomi_hardware_mfidoca_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::BpHwFidoService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>-in-vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE0_N7android8hardware11BpInterfaceINS3_12IFidoServiceEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService-in-vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE0_NS3_12IFidoServiceE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BsFidoService::BsFidoService(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceC1EN7android2spINS3_12IFidoServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceC1EN7android2spINS3_12IFidoServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::execute(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwFidoServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwFidoServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::BsFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BsFidoService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::_hidl_execute(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService13_hidl_executeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService13_hidl_executeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::_hidl_fido_key_prepare(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService22_hidl_fido_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService22_hidl_fido_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::_hidl_execute(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13_hidl_executeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEEjNSt3__18functionIFvSF_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13_hidl_executeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEEjNSt3__18functionIFvSF_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::BpHwFidoService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
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

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BsFidoService::BsFidoService(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceC2EN7android2spINS3_12IFidoServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceC2EN7android2spINS3_12IFidoServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::BnHwFidoService(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceC1ERKN7android2spINS3_12IFidoServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceC1ERKN7android2spINS3_12IFidoServiceEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::castFrom(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::BnHwFidoService(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceC2ERKN7android2spINS3_12IFidoServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceC2ERKN7android2spINS3_12IFidoServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::_hidl_fido_key_load(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService19_hidl_fido_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService19_hidl_fido_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::_hidl_fido_key_get_version(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService26_hidl_fido_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService26_hidl_fido_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::~BnHwFidoService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::_hidl_fido_key_prepare(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService22_hidl_fido_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService22_hidl_fido_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::_hidl_fido_key_get_version(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService26_hidl_fido_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService26_hidl_fido_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService, vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceENS7_12IFidoServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceENS7_12IFidoServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService-in-vendor::xiaomi::hardware::mfidoca::V1_0::BsFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_013BsFidoServiceE0_NS3_12IFidoServiceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::_hidl_fido_key_load(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService19_hidl_fido_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService19_hidl_fido_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BnHwFidoService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BnHwFidoService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::BpHwFidoService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13fido_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_015BpHwFidoService13fido_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceE = NULL;
