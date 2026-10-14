/*
 * Reverse-Engineered ABI Specification for: libneuropilot_hal_utils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libneuropilot_hal_utils.so
 */

#ifndef BEGONIA_RE_LIBNEUROPILOT_HAL_UTILS_H
#define BEGONIA_RE_LIBNEUROPILOT_HAL_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android2nn18decodeOperandValueEPhPNS0_15OemOperandValueE */
/* Demangled: android::nn::decodeOperandValue(unsigned char*, android::nn::OemOperandValue*) */
int _ZN7android2nn18decodeOperandValueEPhPNS0_15OemOperandValueE(void);

/* Symbol: _ZN7android2nn18encodeOperandValueEPNS0_15OemOperandValueEPh */
/* Demangled: android::nn::encodeOperandValue(android::nn::OemOperandValue*, unsigned char*) */
int _ZN7android2nn18encodeOperandValueEPNS0_15OemOperandValueEPh(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEUROPILOT_HAL_UTILS_H */
