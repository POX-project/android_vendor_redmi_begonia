/*
 * Reverse-Engineered ABI Specification for: libkmsetkey.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libkmsetkey.so
 */

#ifndef BEGONIA_RE_LIBKMSETKEY_H
#define BEGONIA_RE_LIBKMSETKEY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: check_clean */
/* Demangled: check_clean */
int check_clean(void);

/* Symbol: import_clean */
/* Demangled: import_clean */
int import_clean(void);

/* Symbol: ree_check_attest_keybox */
/* Demangled: ree_check_attest_keybox */
int ree_check_attest_keybox(void);

/* Symbol: ree_import_attest_keybox */
/* Demangled: ree_import_attest_keybox */
int ree_import_attest_keybox(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBKMSETKEY_H */
