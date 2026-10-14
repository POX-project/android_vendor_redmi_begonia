/*
 * Reverse-Engineered ABI Specification for: gf_fingerprint.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
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

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gpDevice */
/* Demangled: gpDevice */
extern void* gpDevice;

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

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

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

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

#endif /* BEGONIA_RE_GF_FINGERPRINT_DEFAULT_H */
