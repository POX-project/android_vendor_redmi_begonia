/*
 * Reverse-Engineered ABI Specification for: libmfido.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmfido.so
 */

#ifndef BEGONIA_RE_LIBMFIDO_H
#define BEGONIA_RE_LIBMFIDO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read16EPKh */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::read16(unsigned char const*) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read16EPKh(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_NS3_12IFidoServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService-in-vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_NS3_12IFidoServiceE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService9sInstanceE */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::sInstance */
extern void* _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService9sInstanceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService20fido_key_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_get_version() */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService20fido_key_get_versionEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC1Ev */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::FidoService() */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC1Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService15init_req_bufferEPKhiPh */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::init_req_buffer(unsigned char const*, int, unsigned char*) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService15init_req_bufferEPKhiPh(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation14invoke_commandEjPvjS5_Pj */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::invoke_command(unsigned int, void*, unsigned int, void*, unsigned int*) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation14invoke_commandEjPvjS5_Pj(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService23fido_authenticator_initEv */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_authenticator_init() */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService23fido_authenticator_initEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write16EPht */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::write16(unsigned char*, unsigned short) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write16EPht(void);

/* Symbol: HIDL_FETCH_IFidoService */
/* Demangled: HIDL_FETCH_IFidoService */
int HIDL_FETCH_IFidoService(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation16is_little_endianEv */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::is_little_endian() */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation16is_little_endianEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read32EPKh */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::read32(unsigned char const*) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read32EPKh(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern void* _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z11printBufferPhi */
/* Demangled: printBuffer(unsigned char*, int) */
int _Z11printBufferPhi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService13fido_key_loadERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService13fido_key_loadERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::execute(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC2Ev */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::FidoService() */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write32EPhj */
/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::write32(unsigned char*, unsigned int) */
int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write32EPhj(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMFIDO_H */
