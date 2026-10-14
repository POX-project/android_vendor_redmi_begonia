/*
 * Reverse-Engineered ABI Specification for: c09c9c5daa504b78b0e46eda61556c3a.ta
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Executable Service Daemon
 * Soname: c09c9c5daa504b78b0e46eda61556c3a.ta
 */

#ifndef BEGONIA_RE_C09C9C5DAA504B78B0E46EDA61556C3A_TA_H
#define BEGONIA_RE_C09C9C5DAA504B78B0E46EDA61556C3A_TA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZdlPv */
/* Demangled: operator delete(void*) */
int _ZdlPv(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* obj___bss_start__ __asm__("__bss_start__");

/* Symbol: TA_CloseSessionEntryPoint */
/* Demangled: TA_CloseSessionEntryPoint */
int TA_CloseSessionEntryPoint(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _fini */
/* Demangled: _fini */
int _fini(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* obj___bss_end__ __asm__("__bss_end__");

/* Symbol: TA_DestroyEntryPoint */
/* Demangled: TA_DestroyEntryPoint */
int TA_DestroyEntryPoint(void);

/* Symbol: _ZSt7nothrow */
/* Demangled: std::nothrow */
extern void* _ZSt7nothrow;

/* Symbol: TA_InvokeCommandEntryPoint */
/* Demangled: TA_InvokeCommandEntryPoint */
int TA_InvokeCommandEntryPoint(void);

/* Symbol: __L4_KIP_ADDR__ */
/* Demangled: __L4_KIP_ADDR__ */
extern void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__");

/* Symbol: _ZnwjRKSt9nothrow_t */
/* Demangled: operator new(unsigned int, std::nothrow_t const&) */
int _ZnwjRKSt9nothrow_t(void);

/* Symbol: __cxa_pure_virtual */
/* Demangled: __cxa_pure_virtual */
int fn___cxa_pure_virtual(void) __asm__("__cxa_pure_virtual");

/* Symbol: __ctype_b */
/* Demangled: __ctype_b */
extern void* obj___ctype_b __asm__("__ctype_b");

/* Symbol: _ZnajRKSt9nothrow_t */
/* Demangled: operator new[](unsigned int, std::nothrow_t const&) */
int _ZnajRKSt9nothrow_t(void);

/* Symbol: __exidx_end */
/* Demangled: __exidx_end */
extern void* obj___exidx_end __asm__("__exidx_end");

/* Symbol: _ZdaPv */
/* Demangled: operator delete[](void*) */
int _ZdaPv(void);

/* Symbol: TA_CreateEntryPoint */
/* Demangled: TA_CreateEntryPoint */
int TA_CreateEntryPoint(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: l4re_global_env */
/* Demangled: l4re_global_env */
extern void* l4re_global_env;

/* Symbol: _start */
/* Demangled: _start */
int _start(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* obj___end__ __asm__("__end__");

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: TA_OpenSessionEntryPoint */
/* Demangled: TA_OpenSessionEntryPoint */
int TA_OpenSessionEntryPoint(void);

/* Symbol: _ZTVN10__cxxabiv120__si_class_type_infoE */
/* Demangled: vtable for __cxxabiv1::__si_class_type_info */
extern void* _ZTVN10__cxxabiv120__si_class_type_infoE;

/* Symbol: _ta_cfg */
/* Demangled: _ta_cfg */
extern void* _ta_cfg;

/* Symbol: __exidx_start */
/* Demangled: __exidx_start */
extern void* obj___exidx_start __asm__("__exidx_start");

/* Symbol: _ZTVN10__cxxabiv117__class_type_infoE */
/* Demangled: vtable for __cxxabiv1::__class_type_info */
extern void* _ZTVN10__cxxabiv117__class_type_infoE;

/* Symbol: _init */
/* Demangled: _init */
int _init(void);

/* Symbol: _ZTVN10__cxxabiv121__vmi_class_type_infoE */
/* Demangled: vtable for __cxxabiv1::__vmi_class_type_info */
extern void* _ZTVN10__cxxabiv121__vmi_class_type_infoE;

__END_DECLS

#endif /* BEGONIA_RE_C09C9C5DAA504B78B0E46EDA61556C3A_TA_H */
