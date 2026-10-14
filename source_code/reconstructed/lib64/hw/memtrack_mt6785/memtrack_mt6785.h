/*
 * Reverse-Engineered ABI Specification for: memtrack.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
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

/* Symbol: gl_memtrack_get_memory */
/* Demangled: gl_memtrack_get_memory */
int gl_memtrack_get_memory(void);

/* Symbol: gl_memtrack_init */
/* Demangled: gl_memtrack_init */
int gl_memtrack_init(void);

/* Symbol: record_templates */
/* Demangled: record_templates */
extern void* record_templates;

/* Symbol: graphic_memtrack_get_memory */
/* Demangled: graphic_memtrack_get_memory */
int graphic_memtrack_get_memory(void);

/* Symbol: graphic_memtrack_init */
/* Demangled: graphic_memtrack_init */
int graphic_memtrack_init(void);

/* Symbol: mtk_memtrack_get_memory */
/* Demangled: mtk_memtrack_get_memory */
int mtk_memtrack_get_memory(void);

/* Symbol: mtk_memtrack_init */
/* Demangled: mtk_memtrack_init */
int mtk_memtrack_init(void);

__END_DECLS

#endif /* BEGONIA_RE_MEMTRACK_MT6785_H */
