/*
 * Reverse-Engineered ABI Specification for: libmtkhardware_legacy.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkhardware_legacy.so
 */

#ifndef BEGONIA_RE_LIBMTKHARDWARE_LEGACY_H
#define BEGONIA_RE_LIBMTKHARDWARE_LEGACY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mtk_acquire_wake_lock */
/* Demangled: mtk_acquire_wake_lock */
int mtk_acquire_wake_lock(void);

/* Symbol: mtk_release_wake_lock */
/* Demangled: mtk_release_wake_lock */
int mtk_release_wake_lock(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKHARDWARE_LEGACY_H */
