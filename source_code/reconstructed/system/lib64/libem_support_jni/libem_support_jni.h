/*
 * Reverse-Engineered ABI Specification for: libem_support_jni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libem_support_jni.so
 */

#ifndef BEGONIA_RE_LIBEM_SUPPORT_JNI_H
#define BEGONIA_RE_LIBEM_SUPPORT_JNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: _Z18em_jni_get_chip_idv */
/* Demangled: em_jni_get_chip_id() */
int _Z18em_jni_get_chip_idv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

__END_DECLS

#endif /* BEGONIA_RE_LIBEM_SUPPORT_JNI_H */
