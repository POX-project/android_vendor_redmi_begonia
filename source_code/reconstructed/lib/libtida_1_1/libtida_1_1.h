/*
 * Reverse-Engineered ABI Specification for: libtida@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtida@1.1.so
 */

#ifndef BEGONIA_RE_LIBTIDA_1_1_H
#define BEGONIA_RE_LIBTIDA_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z22secauth_get_fp_indicesP21_secauth_fp_indices_t */
/* Demangled: secauth_get_fp_indices(_secauth_fp_indices_t*) */
int _Z22secauth_get_fp_indicesP21_secauth_fp_indices_t(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService15generateKeyPairERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::generateKeyPair(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService15generateKeyPairERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z24secauth_calc_sign_stringv */
/* Demangled: secauth_calc_sign_string() */
int _Z24secauth_calc_sign_stringv(void);

/* Symbol: _Z32construct_bak_finger_device_infoP20secauth_ecc_pubkey_tP21_secauth_fp_indices_tPc */
/* Demangled: construct_bak_finger_device_info(secauth_ecc_pubkey_t*, _secauth_fp_indices_t*, char*) */
int _Z32construct_bak_finger_device_infoP20secauth_ecc_pubkey_tP21_secauth_fp_indices_tPc(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8containsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::contains(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8containsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEED2Ev */
/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>::~sp() */
int _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEED2Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS2_4V1_012ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_0::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS2_4V1_012ITidaServiceE;

/* Symbol: _Z23secauth_check_ask_existj */
/* Demangled: secauth_check_ask_exist(unsigned int) */
int _Z23secauth_check_ask_existj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService16removeAllKey_1_1Ej */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::removeAllKey_1_1(unsigned int) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService16removeAllKey_1_1Ej(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z23construct_challenge_strPKcPci */
/* Demangled: construct_challenge_str(char const*, char*, int) */
int _Z23construct_challenge_strPKcPci(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService10signUpdateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signUpdate(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService10signUpdateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signUpdate_1_1(unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService14signUpdate_1_1EjRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::generateKeyPair_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService19generateKeyPair_1_1EjRKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS3_12ITidaServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::tidaservice::V1_1::ITidaService-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_NS3_12ITidaServiceE;

/* Symbol: _Z13base64_encodePKcmPc */
/* Demangled: base64_encode(char const*, unsigned long, char*) */
int _Z13base64_encodePKcmPc(void);

/* Symbol: _Z23secauth_check_bak_existjj */
/* Demangled: secauth_check_bak_exist(unsigned int, unsigned int) */
int _Z23secauth_check_bak_existjj(void);

/* Symbol: _Z23secauth_load_ask_pubkeyjP20secauth_ecc_pubkey_t */
/* Demangled: secauth_load_ask_pubkey(unsigned int, secauth_ecc_pubkey_t*) */
int _Z23secauth_load_ask_pubkeyjP20secauth_ecc_pubkey_t(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12contains_1_1EjRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::contains_1_1(unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12contains_1_1EjRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::getFpIds(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8getFpIdsENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8signInitERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signInit(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService8signInitERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEEaSEOS7_ */
/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>::operator=(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>&&) */
int _ZN7android2spIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceEEaSEOS7_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern void* _ZTVN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE;

/* Symbol: _Z20secauth_generate_askj */
/* Demangled: secauth_generate_ask(unsigned int) */
int _Z20secauth_generate_askj(void);

/* Symbol: _Z20secauth_generate_bakjj */
/* Demangled: secauth_generate_bak(unsigned int, unsigned int) */
int _Z20secauth_generate_bakjj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12removeAllKeyEv */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::removeAllKey() */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12removeAllKeyEv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z13base64_decodePKcPc */
/* Demangled: base64_decode(char const*, char*) */
int _Z13base64_decodePKcPc(void);

/* Symbol: _Z19secauth_sign_digestjjjjPcjPhPjS1_ */
/* Demangled: secauth_sign_digest(unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned char*, unsigned int*, unsigned int*) */
int _Z19secauth_sign_digestjjjjPcjPhPjS1_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::sign(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService4signENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: HIDL_FETCH_ITidaService */
/* Demangled: HIDL_FETCH_ITidaService */
int HIDL_FETCH_ITidaService(void);

/* Symbol: _Z18parse_alias_stringPKcPjPcS1_ */
/* Demangled: parse_alias_string(char const*, unsigned int*, char*, unsigned int*) */
int _Z18parse_alias_stringPKcPjPcS1_(void);

/* Symbol: _Z32construct_ask_finger_device_infoP20secauth_ecc_pubkey_tPc */
/* Demangled: construct_ask_finger_device_info(secauth_ecc_pubkey_t*, char*) */
int _Z32construct_ask_finger_device_infoP20secauth_ecc_pubkey_tPc(void);

/* Symbol: _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12signInit_1_1EjRKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService::signInit_1_1(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaService12signInit_1_1EjRKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern void* _ZTCN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: g_secauth_sign */
/* Demangled: g_secauth_sign */
extern void* g_secauth_sign;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z16secauth_sign_rawjjjjjPcjPhPjS1_ */
/* Demangled: secauth_sign_raw(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned char*, unsigned int*, unsigned int*) */
int _Z16secauth_sign_rawjjjjjPcjPhPjS1_(void);

/* Symbol: _Z35secauth_load_bak_pubkey_and_indicesjjP20secauth_ecc_pubkey_tP21_secauth_fp_indices_t */
/* Demangled: secauth_load_bak_pubkey_and_indices(unsigned int, unsigned int, secauth_ecc_pubkey_t*, _secauth_fp_indices_t*) */
int _Z35secauth_load_bak_pubkey_and_indicesjjP20secauth_ecc_pubkey_tP21_secauth_fp_indices_t(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::tidaservice::V1_1::implementation::TidaService */
extern void* _ZTTN6vendor6xiaomi8hardware11tidaservice4V1_114implementation11TidaServiceE;

__END_DECLS

#endif /* BEGONIA_RE_LIBTIDA_1_1_H */
