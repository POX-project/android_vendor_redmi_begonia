/*
 * Reverse-Engineered ABI Specification for: epdg_wod
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: epdg_wod
 */

#ifndef BEGONIA_RE_EPDG_WOD_H
#define BEGONIA_RE_EPDG_WOD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __PREINIT_ARRAY__ */
/* Demangled: __PREINIT_ARRAY__ */
extern void* __PREINIT_ARRAY__;

/* Symbol: __FINI_ARRAY__ */
/* Demangled: __FINI_ARRAY__ */
extern void* __FINI_ARRAY__;

/* Symbol: wo_dispatcher_dispatch */
/* Demangled: wo_dispatcher_dispatch */
int wo_dispatcher_dispatch(void);

/* Symbol: __INIT_ARRAY__ */
/* Demangled: __INIT_ARRAY__ */
extern void* __INIT_ARRAY__;

__END_DECLS

#endif /* BEGONIA_RE_EPDG_WOD_H */
