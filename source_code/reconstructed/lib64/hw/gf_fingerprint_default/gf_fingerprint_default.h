/*
 * Reverse-Engineered ABI Specification for: gf_fingerprint.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: gf_fingerprint.default.so
 */

#ifndef BEGONIA_RE_GF_FINGERPRINT_DEFAULT_H
#define BEGONIA_RE_GF_FINGERPRINT_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: gpDevice */
/* Demangled: gpDevice */
extern void* gpDevice;

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

__END_DECLS

#endif /* BEGONIA_RE_GF_FINGERPRINT_DEFAULT_H */
