/*
 * Reverse-Engineered ABI Specification for: libmtkcam_modulefactory_custom.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_modulefactory_custom.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_CUSTOM_H
#define BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_CUSTOM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi3EEE */
/* Demangled: register_mtkcam_module(mtkcam_module_info const*, NSCam::Int2Type<3>) */
int _Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi3EEE(void);

/* Symbol: MtkCam_getModuleFactory_custom */
/* Demangled: MtkCam_getModuleFactory_custom */
int MtkCam_getModuleFactory_custom(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_MODULEFACTORY_CUSTOM_H */
