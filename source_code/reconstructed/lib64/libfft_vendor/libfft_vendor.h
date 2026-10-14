/*
 * Reverse-Engineered ABI Specification for: libfft_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfft_vendor.so
 */

#ifndef BEGONIA_RE_LIBFFT_VENDOR_H
#define BEGONIA_RE_LIBFFT_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ApplyFFT256 */
/* Demangled: ApplyFFT256 */
int ApplyFFT256(void);

/* Symbol: Wn_i_256 */
/* Demangled: Wn_i_256 */
extern void* Wn_i_256;

/* Symbol: ApplyFFT */
/* Demangled: ApplyFFT */
int ApplyFFT(void);

/* Symbol: DIF_FFT */
/* Demangled: DIF_FFT */
int DIF_FFT(void);

/* Symbol: FreqCheck */
/* Demangled: FreqCheck */
int FreqCheck(void);

/* Symbol: MagnitudeCheck */
/* Demangled: MagnitudeCheck */
int MagnitudeCheck(void);

/* Symbol: comp_divs */
/* Demangled: comp_divs */
int comp_divs(void);

/* Symbol: Wn_r_256 */
/* Demangled: Wn_r_256 */
extern void* Wn_r_256;

__END_DECLS

#endif /* BEGONIA_RE_LIBFFT_VENDOR_H */
