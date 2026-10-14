/*
 * Reverse-Engineered ABI Specification for: libmt.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmt.so
 */

#ifndef BEGONIA_RE_LIBMT_H
#define BEGONIA_RE_LIBMT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: HIDL_FETCH_IMTService */
/* Demangled: HIDL_FETCH_IMTService */
int HIDL_FETCH_IMTService(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC1Ev */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::MTService() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC1Ev(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEED2Ev */
/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>::~sp() */
int _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEED2Ev(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEEaSEOS7_ */
/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>::operator=(android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>&&) */
int _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEEaSEOS7_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_NS3_10IMTServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_NS3_10IMTServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC2Ev */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::MTService() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20ifaa_key_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_get_version() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20ifaa_key_get_versionEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20fido_key_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_get_version() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20fido_key_get_versionEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev */
/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>::~sp() */
int _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEEaSEOS7_ */
/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>::operator=(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>&&) */
int _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEEaSEOS7_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_set_stateEi */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_set_state(int) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_set_stateEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_get_stateEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_get_state() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_get_stateEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMT_H */
