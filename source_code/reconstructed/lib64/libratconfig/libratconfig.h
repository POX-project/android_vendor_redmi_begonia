/*
 * Reverse-Engineered ABI Specification for: libratconfig.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libratconfig.so
 */

#ifndef BEGONIA_RE_LIBRATCONFIG_H
#define BEGONIA_RE_LIBRATCONFIG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: RatConfig_isC2kSupported */
/* Demangled: RatConfig_isC2kSupported */
int RatConfig_isC2kSupported(void);

/* Symbol: RatConfig_isGsmSupported */
/* Demangled: RatConfig_isGsmSupported */
int RatConfig_isGsmSupported(void);

/* Symbol: RatConfig_isLteFddSupported */
/* Demangled: RatConfig_isLteFddSupported */
int RatConfig_isLteFddSupported(void);

/* Symbol: RatConfig_isLteTddSupported */
/* Demangled: RatConfig_isLteTddSupported */
int RatConfig_isLteTddSupported(void);

/* Symbol: RatConfig_isNrSupported */
/* Demangled: RatConfig_isNrSupported */
int RatConfig_isNrSupported(void);

/* Symbol: RatConfig_isTdscdmaSupported */
/* Demangled: RatConfig_isTdscdmaSupported */
int RatConfig_isTdscdmaSupported(void);

/* Symbol: RatConfig_isWcdmaSupported */
/* Demangled: RatConfig_isWcdmaSupported */
int RatConfig_isWcdmaSupported(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBRATCONFIG_H */
