/*
 * Reverse-Engineered Source for: libtida@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libtida_1_1"

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
#include "libtida_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: secauth_get_fp_indices(_secauth_fp_indices_t*) */
extern "C" __attribute__((visibility("default"))) int _Z22secauth_get_fp_indicesP21_secauth_fp_indices_t(void) {
    ALOGD("_Z22secauth_get_fp_indicesP21_secauth_fp_indices_t() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::generateKeyPair(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService15generateKeyPairERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService15generateKeyPairERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: secauth_calc_sign_string() */
extern "C" __attribute__((visibility("default"))) int _Z24secauth_calc_sign_stringv(void) {
    ALOGD("_Z24secauth_calc_sign_stringv() called");
    return 0;
}

/* Demangled: construct_bak_finger_device_info(secauth_ecc_pubkey_t*, _secauth_fp_indices_t*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z32construct_bak_finger_device_infoP20secauth_ecc_pubkey_tP21_secauth_fp_indices_tPc(void) {
    ALOGD("_Z32construct_bak_finger_device_infoP20secauth_ecc_pubkey_tP21_secauth_fp_indices_tPc() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::contains(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8containsERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8containsERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS2_4V1_012ITidaServiceE = NULL;

/* Demangled: secauth_check_ask_exist(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23secauth_check_ask_existj(void) {
    ALOGD("_Z23secauth_check_ask_existj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::removeAllKey_1_1(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService16removeAllKey_1_1Ej(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService16removeAllKey_1_1Ej() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: construct_challenge_str(char const*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z23construct_challenge_strPKcPci(void) {
    ALOGD("_Z23construct_challenge_strPKcPci() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signUpdate(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService10signUpdateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService10signUpdateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signUpdate_1_1(unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::generateKeyPair_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS3_12ITidaServiceE = NULL;

/* Demangled: base64_encode(char const*, unsigned long, char*) */
extern "C" __attribute__((visibility("default"))) int _Z13base64_encodePKcmPc(void) {
    ALOGD("_Z13base64_encodePKcmPc() called");
    return 0;
}

/* Demangled: secauth_check_bak_exist(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23secauth_check_bak_existjj(void) {
    ALOGD("_Z23secauth_check_bak_existjj() called");
    return 0;
}

/* Demangled: secauth_load_ask_pubkey(unsigned int, secauth_ecc_pubkey_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23secauth_load_ask_pubkeyjP20secauth_ecc_pubkey_t(void) {
    ALOGD("_Z23secauth_load_ask_pubkeyjP20secauth_ecc_pubkey_t() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::contains_1_1(unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12contains_1_1EjRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12contains_1_1EjRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::getFpIds(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signInit(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8signInitERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8signInitERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>::operator=(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEEaSEOS7_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE = NULL;

/* Demangled: secauth_generate_ask(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20secauth_generate_askj(void) {
    ALOGD("_Z20secauth_generate_askj() called");
    return 0;
}

/* Demangled: secauth_generate_bak(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20secauth_generate_bakjj(void) {
    ALOGD("_Z20secauth_generate_bakjj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::removeAllKey() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12removeAllKeyEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12removeAllKeyEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: base64_decode(char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z13base64_decodePKcPc(void) {
    ALOGD("_Z13base64_decodePKcPc() called");
    return 0;
}

/* Demangled: secauth_sign_digest(unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned char*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19secauth_sign_digestjjjjPcjPhPjS1_(void) {
    ALOGD("_Z19secauth_sign_digestjjjjPcjPhPjS1_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::sign(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_ITidaService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ITidaService(void) {
    ALOGD("HIDL_FETCH_ITidaService() called");
    return 0;
}

/* Demangled: parse_alias_string(char const*, unsigned int*, char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z18parse_alias_stringPKcPjPcS1_(void) {
    ALOGD("_Z18parse_alias_stringPKcPjPcS1_() called");
    return 0;
}

/* Demangled: construct_ask_finger_device_info(secauth_ecc_pubkey_t*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z32construct_ask_finger_device_infoP20secauth_ecc_pubkey_tPc(void) {
    ALOGD("_Z32construct_ask_finger_device_infoP20secauth_ecc_pubkey_tPc() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signInit_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12signInit_1_1EjRKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12signInit_1_1EjRKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: g_secauth_sign */
extern "C" __attribute__((visibility("default"))) void* g_secauth_sign = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: secauth_sign_raw(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned char*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16secauth_sign_rawjjjjjPcjPhPjS1_(void) {
    ALOGD("_Z16secauth_sign_rawjjjjjPcjPhPjS1_() called");
    return 0;
}

/* Demangled: secauth_load_bak_pubkey_and_indices(unsigned int, unsigned int, secauth_ecc_pubkey_t*, _secauth_fp_indices_t*) */
extern "C" __attribute__((visibility("default"))) int _Z35secauth_load_bak_pubkey_and_indicesjjP20secauth_ecc_pubkey_tP21_secauth_fp_indices_t(void) {
    ALOGD("_Z35secauth_load_bak_pubkey_and_indicesjjP20secauth_ecc_pubkey_tP21_secauth_fp_indices_t() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE = NULL;
