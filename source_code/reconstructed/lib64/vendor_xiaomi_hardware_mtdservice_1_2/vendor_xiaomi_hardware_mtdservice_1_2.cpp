/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.mtdservice@1.2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_mtdservice_1_2"

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
#include "vendor_xiaomi_hardware_mtdservice_1_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService>-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE0_N7android8hardware11BpInterfaceINS3_10IMTServiceEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::_hidl_external_key_version(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService26_hidl_external_key_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService26_hidl_external_key_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_2::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::widevine_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::external_key_dump(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService17external_key_dumpEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService17external_key_dumpEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::ifaa_key_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::getWhitelistVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService19getWhitelistVersionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService19getWhitelistVersionEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService, vendor::xiaomi::hardware::mtdservice::V1_0::IMTService, vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService>(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS6_4V1_010IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS6_4V1_010IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE0_NS2_4V1_010IMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::widevine_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService, vendor::xiaomi::hardware::mtdservice::V1_1::IMTService, vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService>(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS6_4V1_110IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS6_4V1_110IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE0_NS2_4V1_110IMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::_hidl_external_key_load(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService23_hidl_external_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService23_hidl_external_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::_hidl_external_key_version(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService26_hidl_external_key_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService26_hidl_external_key_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::tuiOff(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::soter_set_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15soter_set_stateEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15soter_set_stateEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::tuiOn(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::enrollV2(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::_hidl_external_key_prepare(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService26_hidl_external_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService26_hidl_external_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::soter_get_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15soter_get_stateEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15soter_get_stateEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::updateWhitelist(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::_hidl_external_key_prepare(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService26_hidl_external_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService26_hidl_external_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::_hidl_external_key_dump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService23_hidl_external_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService23_hidl_external_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::persist_remove(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14persist_removeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14persist_removeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_2::BsMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::external_key_load(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService17external_key_loadEiRKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService17external_key_loadEiRKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::_hidl_external_key_dump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService23_hidl_external_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService23_hidl_external_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_2::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::persist_read(int, android::hardware::hidl_string const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::loadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6loadTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6loadTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService, vendor::xiaomi::hardware::mtdservice::V1_2::IMTService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::widevine_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13widevine_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13widevine_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::runTaCmd(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::unloadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BsMTService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::unInstallTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::external_key_prepare(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20external_key_prepareEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20external_key_prepareEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS2_4V1_010IMTServiceEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS2_4V1_010IMTServiceEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::_hidl_external_key_load(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService23_hidl_external_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService23_hidl_external_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::persist_write(int, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS6_8hidl_vecIhEEj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS6_8hidl_vecIhEEj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::runExternalCmd(int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSA_NSt3__18functionIFviSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSA_NSt3__18functionIFviSA_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS2_4V1_110IMTServiceEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS2_4V1_110IMTServiceEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::widevine_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20widevine_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20widevine_get_versionEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_2::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_213BnHwMTServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceC1EN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceC1EN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceE0_NS2_4V1_010IMTServiceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_2::IMTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceC2EN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceC2EN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceE0_NS2_4V1_110IMTServiceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::checkPermission(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15checkPermissionERKN7android8hardware8hidl_vecIhEESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService15checkPermissionERKN7android8hardware8hidl_vecIhEESA_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_2::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE0_NS3_10IMTServiceE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTServiceE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::external_key_version(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20external_key_versionEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService20external_key_versionEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::BpHwMTService::installTa(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService9installTaEiRKN7android8hardware8hidl_vecIhEESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_213BpHwMTService9installTaEiRKN7android8hardware8hidl_vecIhEESA_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_2::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::BsMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_211BsMTServiceE0_NS3_10IMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::IMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_210IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_2::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_210IMTServiceE = NULL;
