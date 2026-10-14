/*
 * Reverse-Engineered Source for: libmt@1.2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmt_1_2"

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
#include "libmt_1_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::soter_set_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15soter_set_stateEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15soter_set_stateEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::updateWhitelist(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::loadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6loadTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6loadTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::MTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceC1Ev() called");
    return 0;
}

/* Demangled: IExternalKeyManager::~IExternalKeyManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19IExternalKeyManagerD0Ev(void) {
    ALOGD("_ZN19IExternalKeyManagerD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::MTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: IExternalKeyManager::~IExternalKeyManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19IExternalKeyManagerD1Ev(void) {
    ALOGD("_ZN19IExternalKeyManagerD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::enrollV2(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESB_NSt3__18functionIFviSB_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESB_NSt3__18functionIFviSB_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Demangled: IExternalKeyManager::~IExternalKeyManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19IExternalKeyManagerD2Ev(void) {
    ALOGD("_ZN19IExternalKeyManagerD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::persist_remove(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14persist_removeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14persist_removeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::external_key_dump(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService17external_key_dumpEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService17external_key_dumpEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::getWhitelistVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService19getWhitelistVersionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService19getWhitelistVersionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::external_key_version(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20external_key_versionEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20external_key_versionEi() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::external_key_prepare(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20external_key_prepareEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20external_key_prepareEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE0_NS2_4V1_010IMTServiceE = NULL;

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE0_NS2_4V1_110IMTServiceE = NULL;

/* Exported Object: persist_path */
extern "C" __attribute__((visibility("default"))) void* persist_path = NULL;

/* Demangled: hexlify(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7hexlifyPKcj(void) {
    ALOGD("_Z7hexlifyPKcj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::persist_read(int, android::hardware::hidl_string const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS7_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS7_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::ifaa_key_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::installTa(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService9installTaEiRKN7android8hardware8hidl_vecIhEESB_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService9installTaEiRKN7android8hardware8hidl_vecIhEESB_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_2::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE0_NS3_10IMTServiceE = NULL;

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Exported Object: vtable for IExternalKeyManager */
extern "C" __attribute__((visibility("default"))) void* _ZTV19IExternalKeyManager = NULL;

/* Demangled: unhexlify(char const*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z9unhexlifyPKcjPj(void) {
    ALOGD("_Z9unhexlifyPKcjPj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: dump_to_hex(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11dump_to_hexPKcS0_j(void) {
    ALOGD("_Z11dump_to_hexPKcS0_j() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::widevine_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::runExternalCmd(int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSB_NSt3__18functionIFviSB_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSB_NSt3__18functionIFviSB_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::soter_get_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15soter_get_stateEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15soter_get_stateEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::tuiOn(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::checkPermission(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15checkPermissionERKN7android8hardware8hidl_vecIhEESB_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService15checkPermissionERKN7android8hardware8hidl_vecIhEESB_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::widevine_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::widevine_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20widevine_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20widevine_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::persist_write(int, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS7_8hidl_vecIhEEj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS7_8hidl_vecIhEEj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::runTaCmd(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESB_NSt3__18functionIFviSB_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESB_NSt3__18functionIFviSB_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<int, std::__1::pair<int const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, int const&, std::__1::pair<int const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::widevine_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13widevine_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13widevine_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::unloadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Demangled: getExternalKeyManager(int) */
extern "C" __attribute__((visibility("default"))) int _Z21getExternalKeyManageri(void) {
    ALOGD("_Z21getExternalKeyManageri() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::external_key_load(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService17external_key_loadEiRKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService17external_key_loadEiRKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: HIDL_FETCH_IMTService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMTService(void) {
    ALOGD("HIDL_FETCH_IMTService() called");
    return 0;
}

/* Demangled: runCmd(TEEC_UUID*, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z6runCmdP9TEEC_UUIDjPhjS1_Pj(void) {
    ALOGD("_Z6runCmdP9TEEC_UUIDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::unInstallTa(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::tuiOff(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_2::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_214implementation9MTServiceE = NULL;
