/*
 * Reverse-Engineered ABI Specification for: libvsim.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvsim.so
 */

#ifndef BEGONIA_RE_LIBVSIM_H
#define BEGONIA_RE_LIBVSIM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService11is_enrolledEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::is_enrolled() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService11is_enrolledEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService4authERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvSA_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::auth(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService4authERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService5auth2ERKN7android8hardware11hidl_stringESA_jRKNS7_8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::auth2(android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService5auth2ERKN7android8hardware11hidl_stringESA_jRKNS7_8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_addERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_add(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_addERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_get(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_list(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: HIDL_FETCH_IVSIMService */
/* Demangled: HIDL_FETCH_IVSIMService */
int HIDL_FETCH_IVSIMService(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_delERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_del(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_delERKN7android8hardware11hidl_stringE(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern void* _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::enroll_v3(unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation9tee_mutexE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::tee_mutex */
extern void* _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation9tee_mutexE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::enroll(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_NS3_12IVSIMServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService-in-vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_NS3_12IVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::export_key(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVSIM_H */
