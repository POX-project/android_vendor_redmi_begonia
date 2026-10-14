/*
 * Reverse-Engineered ABI Specification for: 08010203000000000000000000000000.ta
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Executable Service Daemon
 * Soname: 08010203000000000000000000000000.ta
 */

#ifndef BEGONIA_RE_08010203000000000000000000000000_TA_H
#define BEGONIA_RE_08010203000000000000000000000000_TA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __exidx_end */
/* Demangled: __exidx_end */
extern void* obj___exidx_end __asm__("__exidx_end");

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* obj___bss_start__ __asm__("__bss_start__");

/* Symbol: TA_DestroyEntryPoint */
/* Demangled: TA_DestroyEntryPoint */
int TA_DestroyEntryPoint(void);

/* Symbol: __exidx_start */
/* Demangled: __exidx_start */
extern void* obj___exidx_start __asm__("__exidx_start");

/* Symbol: _ta_cfg */
/* Demangled: _ta_cfg */
extern void* _ta_cfg;

/* Symbol: TA_CloseSessionEntryPoint */
/* Demangled: TA_CloseSessionEntryPoint */
int TA_CloseSessionEntryPoint(void);

/* Symbol: _init */
/* Demangled: _init */
int _init(void);

/* Symbol: TA_InvokeCommandEntryPoint */
/* Demangled: TA_InvokeCommandEntryPoint */
int TA_InvokeCommandEntryPoint(void);

/* Symbol: TA_OpenSessionEntryPoint */
/* Demangled: TA_OpenSessionEntryPoint */
int TA_OpenSessionEntryPoint(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* obj___bss_end__ __asm__("__bss_end__");

/* Symbol: _start */
/* Demangled: _start */
int _start(void);

/* Symbol: base64_encode */
/* Demangled: base64_encode */
int base64_encode(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* obj___end__ __asm__("__end__");

/* Symbol: _fini */
/* Demangled: _fini */
int _fini(void);

/* Symbol: TA_CreateEntryPoint */
/* Demangled: TA_CreateEntryPoint */
int TA_CreateEntryPoint(void);

/* Symbol: base64_decode */
/* Demangled: base64_decode */
int base64_decode(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __L4_KIP_ADDR__ */
/* Demangled: __L4_KIP_ADDR__ */
extern void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__");

__END_DECLS

#endif /* BEGONIA_RE_08010203000000000000000000000000_TA_H */
