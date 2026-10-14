/*
 * Reverse-Engineered ABI Specification for: fpsgo.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: fpsgo.ko
 */

#ifndef BEGONIA_RE_FPSGO_KO_H
#define BEGONIA_RE_FPSGO_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: xgf_ko_init */
/* Demangled: xgf_ko_init */
int xgf_ko_init(void);

/* Symbol: xgf_est_runtime */
/* Demangled: xgf_est_runtime */
int xgf_est_runtime(void);

/* Symbol: xgf_stat_xchg */
/* Demangled: xgf_stat_xchg */
int xgf_stat_xchg(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

__END_DECLS

#endif /* BEGONIA_RE_FPSGO_KO_H */
