/*
 * Reverse-Engineered ABI Specification for: libaudiofmtconv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiofmtconv.so
 */

#ifndef BEGONIA_RE_LIBAUDIOFMTCONV_H
#define BEGONIA_RE_LIBAUDIOFMTCONV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: aud_fmt_conv_process */
/* Demangled: aud_fmt_conv_process */
int aud_fmt_conv_process(void);

/* Symbol: link_aud_fmt_conv_api */
/* Demangled: link_aud_fmt_conv_api */
int link_aud_fmt_conv_api(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: aud_fmt_conv_create */
/* Demangled: aud_fmt_conv_create */
int aud_fmt_conv_create(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: aud_fmt_conv_destroy */
/* Demangled: aud_fmt_conv_destroy */
int aud_fmt_conv_destroy(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOFMTCONV_H */
