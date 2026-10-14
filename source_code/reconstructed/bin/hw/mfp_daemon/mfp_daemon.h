/*
 * Reverse-Engineered ABI Specification for: mfp-daemon
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: mfp-daemon
 */

#ifndef BEGONIA_RE_MFP_DAEMON_H
#define BEGONIA_RE_MFP_DAEMON_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: hw_get_module */
/* Demangled: hw_get_module */
int hw_get_module(const char *id, const struct hw_module_t **module);

/* Symbol: hw_get_module_by_class */
/* Demangled: hw_get_module_by_class */
int hw_get_module_by_class(const char *class_id, const char *inst, const struct hw_module_t **module);

__END_DECLS

#endif /* BEGONIA_RE_MFP_DAEMON_H */
