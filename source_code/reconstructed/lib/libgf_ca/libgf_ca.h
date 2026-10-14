/*
 * Reverse-Engineered ABI Specification for: libgf_ca.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgf_ca.so
 */

#ifndef BEGONIA_RE_LIBGF_CA_H
#define BEGONIA_RE_LIBGF_CA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gf_ca_logdump */
/* Demangled: gf_ca_logdump */
int gf_ca_logdump(void);

/* Symbol: g_log_level_strtable */
/* Demangled: g_log_level_strtable */
extern void* g_log_level_strtable;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: gf_ca_close_session */
/* Demangled: gf_ca_close_session */
int gf_ca_close_session(void);

/* Symbol: gf_ca_open_session */
/* Demangled: gf_ca_open_session */
int gf_ca_open_session(void);

/* Symbol: g_logdump_level */
/* Demangled: g_logdump_level */
extern void* g_logdump_level;

/* Symbol: gf_ca_invoke_command */
/* Demangled: gf_ca_invoke_command */
int gf_ca_invoke_command(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: gf_ca_get_logbuf_length */
/* Demangled: gf_ca_get_logbuf_length */
int gf_ca_get_logbuf_length(void);

/* Symbol: gf_ca_set_handle */
/* Demangled: gf_ca_set_handle */
int gf_ca_set_handle(void);

/* Symbol: gf_ca_tee_auth */
/* Demangled: gf_ca_tee_auth */
int gf_ca_tee_auth(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

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

#endif /* BEGONIA_RE_LIBGF_CA_H */
