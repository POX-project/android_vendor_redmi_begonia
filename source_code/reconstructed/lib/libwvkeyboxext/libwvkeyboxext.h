/*
 * Reverse-Engineered ABI Specification for: libwvkeyboxext.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwvkeyboxext.so
 */

#ifndef BEGONIA_RE_LIBWVKEYBOXEXT_H
#define BEGONIA_RE_LIBWVKEYBOXEXT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: restoreKeyboxFromBackup */
/* Demangled: restoreKeyboxFromBackup */
int restoreKeyboxFromBackup(void);

/* Symbol: _Z7hexlifyPKcj */
/* Demangled: hexlify(char const*, unsigned int) */
int _Z7hexlifyPKcj(void);

/* Symbol: _Z9unhexlifyPKcjPj */
/* Demangled: unhexlify(char const*, unsigned int, unsigned int*) */
int _Z9unhexlifyPKcjPj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z6runCmdP9TEEC_UUIDjPhjS1_Pj */
/* Demangled: runCmd(TEEC_UUID*, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _Z6runCmdP9TEEC_UUIDjPhjS1_Pj(void);

/* Symbol: _Z11dump_to_hexPKcS0_j */
/* Demangled: dump_to_hex(char const*, char const*, unsigned int) */
int _Z11dump_to_hexPKcS0_j(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWVKEYBOXEXT_H */
