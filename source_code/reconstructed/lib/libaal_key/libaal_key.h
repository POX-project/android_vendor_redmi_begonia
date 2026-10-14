/*
 * Reverse-Engineered ABI Specification for: libaal_key.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaal_key.so
 */

#ifndef BEGONIA_RE_LIBAAL_KEY_H
#define BEGONIA_RE_LIBAAL_KEY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: getAALKey */
/* Demangled: getAALKey */
int getAALKey(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAAL_KEY_H */
