/*
 * Reverse-Engineered ABI Specification for: lib3a.log.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.log.so
 */

#ifndef BEGONIA_RE_LIB3A_LOG_H
#define BEGONIA_RE_LIB3A_LOG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z10blog_flushR4BLogPKc */
/* Demangled: blog_flush(BLog&, char const*) */
int _Z10blog_flushR4BLogPKc(void);

/* Symbol: _Z15blog_isUserLoadv */
/* Demangled: blog_isUserLoad() */
int _Z15blog_isUserLoadv(void);

/* Symbol: _ZN6clog3A3bEnE */
/* Demangled: clog3A::bEn */
extern void* _ZN6clog3A3bEnE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: afBlog_print */
/* Demangled: afBlog_print */
int afBlog_print(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z10blog_printR4BLogPKcS2_z */
/* Demangled: blog_print(BLog&, char const*, char const*, ...) */
int _Z10blog_printR4BLogPKcS2_z(void);

/* Symbol: afBlog_flush */
/* Demangled: afBlog_flush */
int afBlog_flush(void);

/* Symbol: mutexAfLog */
/* Demangled: mutexAfLog */
extern void* mutexAfLog;

/* Symbol: _ZN6clog3A12_initializerE */
/* Demangled: clog3A::_initializer */
extern void* _ZN6clog3A12_initializerE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_LOG_H */
