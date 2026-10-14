/*
 * Reverse-Engineered ABI Specification for: libssccalapi.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libssccalapi.so
 */

#ifndef BEGONIA_RE_LIBSSCCALAPI_H
#define BEGONIA_RE_LIBSSCCALAPI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ssccalapi_set_debug */
/* Demangled: ssccalapi_set_debug */
int ssccalapi_set_debug(void);

/* Symbol: transfer_ssc_oem_test_msg */
/* Demangled: transfer_ssc_oem_test_msg */
int transfer_ssc_oem_test_msg(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSSCCALAPI_H */
