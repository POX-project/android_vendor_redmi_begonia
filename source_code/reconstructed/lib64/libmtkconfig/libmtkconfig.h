/*
 * Reverse-Engineered ABI Specification for: libmtkconfig.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkconfig.so
 */

#ifndef BEGONIA_RE_LIBMTKCONFIG_H
#define BEGONIA_RE_LIBMTKCONFIG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mtkSetFeaturePorting */
/* Demangled: mtkSetFeaturePorting */
int mtkSetFeaturePorting(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: msgToConfigs */
/* Demangled: msgToConfigs */
int msgToConfigs(void);

/* Symbol: mtkGetFeatureByOs */
/* Demangled: mtkGetFeatureByOs */
int mtkGetFeatureByOs(void);

/* Symbol: mtkGetFeaturePorting */
/* Demangled: mtkGetFeaturePorting */
int mtkGetFeaturePorting(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: mtkGetFeatureByDefault */
/* Demangled: mtkGetFeatureByDefault */
int mtkGetFeatureByDefault(void);

/* Symbol: mtkSetFeatureByOs */
/* Demangled: mtkSetFeatureByOs */
int mtkSetFeatureByOs(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCONFIG_H */
