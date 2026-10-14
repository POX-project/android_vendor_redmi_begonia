/*
 * Reverse-Engineered ABI Specification for: memtrack.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: memtrack.mt6785.so
 */

#ifndef BEGONIA_RE_MEMTRACK_MT6785_H
#define BEGONIA_RE_MEMTRACK_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: graphic_memtrack_get_memory */
/* Demangled: graphic_memtrack_get_memory */
int graphic_memtrack_get_memory(void);

/* Symbol: graphic_memtrack_init */
/* Demangled: graphic_memtrack_init */
int graphic_memtrack_init(void);

/* Symbol: gl_memtrack_get_memory */
/* Demangled: gl_memtrack_get_memory */
int gl_memtrack_get_memory(void);

/* Symbol: gl_memtrack_init */
/* Demangled: gl_memtrack_init */
int gl_memtrack_init(void);

/* Symbol: record_templates */
/* Demangled: record_templates */
extern void* record_templates;

/* Symbol: mtk_memtrack_get_memory */
/* Demangled: mtk_memtrack_get_memory */
int mtk_memtrack_get_memory(void);

/* Symbol: mtk_memtrack_init */
/* Demangled: mtk_memtrack_init */
int mtk_memtrack_init(void);

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

#endif /* BEGONIA_RE_MEMTRACK_MT6785_H */
