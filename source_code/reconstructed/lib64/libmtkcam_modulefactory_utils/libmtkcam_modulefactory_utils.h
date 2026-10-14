/*
 * Reverse-Engineered ABI Specification for: libmtkcam_modulefactory_utils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_modulefactory_utils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_UTILS_H
#define BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi4EEE */
/* Demangled: register_mtkcam_module(mtkcam_module_info const*, NSCam::Int2Type<4>) */
int _Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi4EEE(void);

/* Symbol: MtkCam_getModuleFactory_utils */
/* Demangled: MtkCam_getModuleFactory_utils */
int MtkCam_getModuleFactory_utils(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_UTILS_H */
