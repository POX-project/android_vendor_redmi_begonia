/*
 * Reverse-Engineered ABI Specification for: libimsg_log.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libimsg_log.so
 */

#ifndef BEGONIA_RE_LIBIMSG_LOG_H
#define BEGONIA_RE_LIBIMSG_LOG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: imsg_log_write */
/* Demangled: imsg_log_write */
int imsg_log_write(void);

/* Symbol: kernel_log_write */
/* Demangled: kernel_log_write */
int kernel_log_write(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMSG_LOG_H */
