/*
 * Reverse-Engineered ABI Specification for: kheaders.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: kheaders.ko
 */

#ifndef BEGONIA_RE_KHEADERS_KO_H
#define BEGONIA_RE_KHEADERS_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: kernel_headers_data */
/* Demangled: kernel_headers_data */
extern void* kernel_headers_data;

/* Symbol: kernel_headers_data_end */
/* Demangled: kernel_headers_data_end */
extern void* kernel_headers_data_end;

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

__END_DECLS

#endif /* BEGONIA_RE_KHEADERS_KO_H */
