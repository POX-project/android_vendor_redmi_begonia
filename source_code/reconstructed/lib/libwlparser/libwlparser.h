/*
 * Reverse-Engineered ABI Specification for: libwlparser.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwlparser.so
 */

#ifndef BEGONIA_RE_LIBWLPARSER_H
#define BEGONIA_RE_LIBWLPARSER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: WLInitWLParser */
/* Demangled: WLInitWLParser */
int WLInitWLParser(void);

/* Symbol: WLGetAppValidName */
/* Demangled: WLGetAppValidName */
int WLGetAppValidName(void);

/* Symbol: WLDeinitWLParser */
/* Demangled: WLDeinitWLParser */
int WLDeinitWLParser(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWLPARSER_H */
