/*
 * Reverse-Engineered ABI Specification for: libaptX_encoder.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libaptX_encoder.so
 */

#ifndef BEGONIA_RE_LIBAPTX_ENCODER_H
#define BEGONIA_RE_LIBAPTX_ENCODER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: aptxbtenc_encodestereo */
/* Demangled: aptxbtenc_encodestereo */
int aptxbtenc_encodestereo(void);

/* Symbol: Qmf_outerCoeffs */
/* Demangled: Qmf_outerCoeffs */
extern void* Qmf_outerCoeffs;

/* Symbol: AsmQmfConvI */
/* Demangled: AsmQmfConvI */
int AsmQmfConvI(void);

/* Symbol: processSubbandHL */
/* Demangled: processSubbandHL */
int processSubbandHL(void);

/* Symbol: version */
/* Demangled: version */
extern void* version;

/* Symbol: AsmQmfConvO */
/* Demangled: AsmQmfConvO */
int AsmQmfConvO(void);

/* Symbol: aptxbtenc_build */
/* Demangled: aptxbtenc_build */
int aptxbtenc_build(void);

/* Symbol: Qmf_innerCoeffs */
/* Demangled: Qmf_innerCoeffs */
extern void* Qmf_innerCoeffs;

/* Symbol: aptxbtenc_version */
/* Demangled: aptxbtenc_version */
int aptxbtenc_version(void);

/* Symbol: aptxbtenc_init */
/* Demangled: aptxbtenc_init */
int aptxbtenc_init(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: aptxbtenc_setsync_mode */
/* Demangled: aptxbtenc_setsync_mode */
int aptxbtenc_setsync_mode(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* obj___end__ __asm__("__end__");

/* Symbol: quantiseDifferenceLL */
/* Demangled: quantiseDifferenceLL */
int quantiseDifferenceLL(void);

/* Symbol: SizeofAptxbtenc */
/* Demangled: SizeofAptxbtenc */
int SizeofAptxbtenc(void);

/* Symbol: processSubband */
/* Demangled: processSubband */
int processSubband(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* obj___bss_start__ __asm__("__bss_start__");

/* Symbol: quantiseDifferenceHH */
/* Demangled: quantiseDifferenceHH */
int quantiseDifferenceHH(void);

/* Symbol: quantiseDifferenceLH */
/* Demangled: quantiseDifferenceLH */
int quantiseDifferenceLH(void);

/* Symbol: processSubbandLL */
/* Demangled: processSubbandLL */
int processSubbandLL(void);

/* Symbol: quantiseDifferenceHL */
/* Demangled: quantiseDifferenceHL */
int quantiseDifferenceHL(void);

/* Symbol: clearmem */
/* Demangled: clearmem */
int clearmem(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: NewAptxEnc */
/* Demangled: NewAptxEnc */
int NewAptxEnc(void);

/* Symbol: aptXStereoEncoder */
/* Demangled: aptXStereoEncoder */
extern void* aptXStereoEncoder;

/* Symbol: build */
/* Demangled: build */
extern void* build;

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* obj___bss_end__ __asm__("__bss_end__");

/* Symbol: swversion */
/* Demangled: swversion */
extern void* swversion;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBAPTX_ENCODER_H */
