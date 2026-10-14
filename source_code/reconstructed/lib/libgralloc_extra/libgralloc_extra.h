/*
 * Reverse-Engineered ABI Specification for: libgralloc_extra.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgralloc_extra.so
 */

#ifndef BEGONIA_RE_LIBGRALLOC_EXTRA_H
#define BEGONIA_RE_LIBGRALLOC_EXTRA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ge_perform_free_sec_hwc */
/* Demangled: ge_perform_free_sec_hwc */
int ge_perform_free_sec_hwc(void);

/* Symbol: ge_perform_ion_debug */
/* Demangled: ge_perform_ion_debug */
int ge_perform_ion_debug(void);

/* Symbol: gralloc_extra_need_resident */
/* Demangled: gralloc_extra_need_resident */
int gralloc_extra_need_resident(void);

/* Symbol: gralloc_extra_perform */
/* Demangled: gralloc_extra_perform */
int gralloc_extra_perform(void);

/* Symbol: ge_alloc */
/* Demangled: ge_alloc */
int ge_alloc(void);

/* Symbol: ge_free */
/* Demangled: ge_free */
int ge_free(void);

/* Symbol: ge_retain */
/* Demangled: ge_retain */
int ge_retain(void);

/* Symbol: gralloc_extra_get_platform_format */
/* Demangled: gralloc_extra_get_platform_format */
int gralloc_extra_get_platform_format(void);

/* Symbol: gralloc_extra_sf_set_status */
/* Demangled: gralloc_extra_sf_set_status */
int gralloc_extra_sf_set_status(void);

/* Symbol: ge_perform_alloc_sec_hwc */
/* Demangled: ge_perform_alloc_sec_hwc */
int ge_perform_alloc_sec_hwc(void);

/* Symbol: ge_query_ion_debug */
/* Demangled: ge_query_ion_debug */
int ge_query_ion_debug(void);

/* Symbol: gralloc_extra_query */
/* Demangled: gralloc_extra_query */
int gralloc_extra_query(void);

/* Symbol: gralloc_extra_sf_set_status2 */
/* Demangled: gralloc_extra_sf_set_status2 */
int gralloc_extra_sf_set_status2(void);

/* Symbol: ge_release */
/* Demangled: ge_release */
int ge_release(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGRALLOC_EXTRA_H */
