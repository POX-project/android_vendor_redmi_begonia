/*
 * Reverse-Engineered ABI Specification for: libmtkproperty.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkproperty.so
 */

#ifndef BEGONIA_RE_LIBMTKPROPERTY_H
#define BEGONIA_RE_LIBMTKPROPERTY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mtk_property_get */
/* Demangled: mtk_property_get */
int mtk_property_get(void);

/* Symbol: mtk_property_set */
/* Demangled: mtk_property_set */
int mtk_property_set(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKPROPERTY_H */
