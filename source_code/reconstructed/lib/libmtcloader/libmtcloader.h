/*
 * Reverse-Engineered ABI Specification for: libmtcloader.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtcloader.so
 */

#ifndef BEGONIA_RE_LIBMTCLOADER_H
#define BEGONIA_RE_LIBMTCLOADER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: readPolicy_formatV1 */
/* Demangled: readPolicy_formatV1 */
int readPolicy_formatV1(void);

/* Symbol: write_TP */
/* Demangled: write_TP */
int write_TP(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: change_policy */
/* Demangled: change_policy */
int change_policy(void);

/* Symbol: loadmtc */
/* Demangled: loadmtc */
int loadmtc(void);

/* Symbol: readPolicy_formatV2 */
/* Demangled: readPolicy_formatV2 */
int readPolicy_formatV2(void);

/* Symbol: reset_propertydata */
/* Demangled: reset_propertydata */
int reset_propertydata(void);

/* Symbol: spa_socket_send */
/* Demangled: spa_socket_send */
int spa_socket_send(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTCLOADER_H */
