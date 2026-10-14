/*
 * Reverse-Engineered ABI Specification for: libabfadp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libabfadp.so
 */

#ifndef BEGONIA_RE_LIBABFADP_H
#define BEGONIA_RE_LIBABFADP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10AbfAdapter7needAbfERKNS_12ProcessParamE */
/* Demangled: AbfAdapter::needAbf(AbfAdapter::ProcessParam const&) */
int _ZN10AbfAdapter7needAbfERKNS_12ProcessParamE(void);

/* Symbol: _ZTV10AbfAdapter */
/* Demangled: vtable for AbfAdapter */
extern void* _ZTV10AbfAdapter;

/* Symbol: _ZN10AbfAdapter14createInstanceEjj */
/* Demangled: AbfAdapter::createInstance(unsigned int, unsigned int) */
int _ZN10AbfAdapter14createInstanceEjj(void);

/* Symbol: _ZN10AbfAdapter7processERKNS_12ProcessParamEPN5NSCam12IImageBufferE */
/* Demangled: AbfAdapter::process(AbfAdapter::ProcessParam const&, NSCam::IImageBuffer*) */
int _ZN10AbfAdapter7processERKNS_12ProcessParamEPN5NSCam12IImageBufferE(void);

/* Symbol: _ZN10AbfAdapterC1Ejj */
/* Demangled: AbfAdapter::AbfAdapter(unsigned int, unsigned int) */
int _ZN10AbfAdapterC1Ejj(void);

/* Symbol: _ZN10AbfAdapterC2Ejj */
/* Demangled: AbfAdapter::AbfAdapter(unsigned int, unsigned int) */
int _ZN10AbfAdapterC2Ejj(void);

/* Symbol: _ZTT10AbfAdapter */
/* Demangled: VTT for AbfAdapter */
extern void* _ZTT10AbfAdapter;

/* Symbol: _ZTv0_n24_N10AbfAdapterD0Ev */
/* Demangled: virtual thunk to AbfAdapter::~AbfAdapter() */
int _ZTv0_n24_N10AbfAdapterD0Ev(void);

/* Symbol: _ZTv0_n24_N10AbfAdapterD1Ev */
/* Demangled: virtual thunk to AbfAdapter::~AbfAdapter() */
int _ZTv0_n24_N10AbfAdapterD1Ev(void);

/* Symbol: _ZN10AbfAdapter13getTuningDataERKNS_12ProcessParamE */
/* Demangled: AbfAdapter::getTuningData(AbfAdapter::ProcessParam const&) */
int _ZN10AbfAdapter13getTuningDataERKNS_12ProcessParamE(void);

/* Symbol: _ZN10AbfAdapterD0Ev */
/* Demangled: AbfAdapter::~AbfAdapter() */
int _ZN10AbfAdapterD0Ev(void);

/* Symbol: _ZN10AbfAdapterD1Ev */
/* Demangled: AbfAdapter::~AbfAdapter() */
int _ZN10AbfAdapterD1Ev(void);

/* Symbol: _ZN10AbfAdapterD2Ev */
/* Demangled: AbfAdapter::~AbfAdapter() */
int _ZN10AbfAdapterD2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBABFADP_H */
