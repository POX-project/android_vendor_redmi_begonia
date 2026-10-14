/*
 * Reverse-Engineered ABI Specification for: libaptXHD_encoder.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libaptXHD_encoder.so
 */

#ifndef BEGONIA_RE_LIBAPTXHD_ENCODER_H
#define BEGONIA_RE_LIBAPTXHD_ENCODER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: processSubband_HDLL */
/* Demangled: processSubband_HDLL */
int processSubband_HDLL(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: SizeofAptxhdbtenc */
/* Demangled: SizeofAptxhdbtenc */
int SizeofAptxhdbtenc(void);

/* Symbol: processSubband_HDHL */
/* Demangled: processSubband_HDHL */
int processSubband_HDHL(void);

/* Symbol: Qmf_outerCoeffs */
/* Demangled: Qmf_outerCoeffs */
extern void* Qmf_outerCoeffs;

/* Symbol: aptxhdbtenc_init */
/* Demangled: aptxhdbtenc_init */
int aptxhdbtenc_init(void);

/* Symbol: version */
/* Demangled: version */
extern void* version;

/* Symbol: AsmQmfConvO_HD */
/* Demangled: AsmQmfConvO_HD */
int AsmQmfConvO_HD(void);

/* Symbol: Qmf_innerCoeffs */
/* Demangled: Qmf_innerCoeffs */
extern void* Qmf_innerCoeffs;

/* Symbol: aptXHDStereoEncoder */
/* Demangled: aptXHDStereoEncoder */
extern void* aptXHDStereoEncoder;

/* Symbol: BsearchLH */
/* Demangled: BsearchLH */
int BsearchLH(void);

/* Symbol: quantiseDifference_HDLH */
/* Demangled: quantiseDifference_HDLH */
int quantiseDifference_HDLH(void);

/* Symbol: aptxhdbtenc_encodestereo */
/* Demangled: aptxhdbtenc_encodestereo */
int aptxhdbtenc_encodestereo(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* obj___end__ __asm__("__end__");

/* Symbol: aptxhdbtenc_build */
/* Demangled: aptxhdbtenc_build */
int aptxhdbtenc_build(void);

/* Symbol: quantiseDifference_HDHH */
/* Demangled: quantiseDifference_HDHH */
int quantiseDifference_HDHH(void);

/* Symbol: quantiseDifference_HDHL */
/* Demangled: quantiseDifference_HDHL */
int quantiseDifference_HDHL(void);

/* Symbol: aptxhdbtenc_version */
/* Demangled: aptxhdbtenc_version */
int aptxhdbtenc_version(void);

/* Symbol: NewAptxhdEnc */
/* Demangled: NewAptxhdEnc */
int NewAptxhdEnc(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* obj___bss_start__ __asm__("__bss_start__");

/* Symbol: processSubband_HD */
/* Demangled: processSubband_HD */
int processSubband_HD(void);

/* Symbol: clearmem_HD */
/* Demangled: clearmem_HD */
int clearmem_HD(void);

/* Symbol: AsmQmfConvI_HD */
/* Demangled: AsmQmfConvI_HD */
int AsmQmfConvI_HD(void);

/* Symbol: quantiseDifference_HDLL */
/* Demangled: quantiseDifference_HDLL */
int quantiseDifference_HDLL(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

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

#endif /* BEGONIA_RE_LIBAPTXHD_ENCODER_H */
