/*
 * Reverse-Engineered ABI Specification for: libcomutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcomutils.so
 */

#ifndef BEGONIA_RE_LIBCOMUTILS_H
#define BEGONIA_RE_LIBCOMUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android19PixelFormatToStringEi */
/* Demangled: android::PixelFormatToString(int) */
int _ZN7android19PixelFormatToStringEi(void);

/* Symbol: _ZN7android16mtk_scaling_listEiPNS_10ABitReaderE */
/* Demangled: android::mtk_scaling_list(int, android::ABitReader*) */
int _ZN7android16mtk_scaling_listEiPNS_10ABitReaderE(void);

/* Symbol: _ZN7android36mtk_parse_seq_scaling_matrix_presentEPNS_10ABitReaderE */
/* Demangled: android::mtk_parse_seq_scaling_matrix_present(android::ABitReader*) */
int _ZN7android36mtk_parse_seq_scaling_matrix_presentEPNS_10ABitReaderE(void);

/* Symbol: _ZN7android16dumpRawYUVToPathEPKcPvi */
/* Demangled: android::dumpRawYUVToPath(char const*, void*, int) */
int _ZN7android16dumpRawYUVToPathEPKcPvi(void);

/* Symbol: _ZN7android19convertToOMXProfileEPKci */
/* Demangled: android::convertToOMXProfile(char const*, int) */
int _ZN7android19convertToOMXProfileEPKci(void);

/* Symbol: _ZN7android25convertToCWRotationDegreeEbi */
/* Demangled: android::convertToCWRotationDegree(bool, int) */
int _ZN7android25convertToCWRotationDegreeEbi(void);

/* Symbol: _ZN7android24MakeAVCCodecSpecificDataEPKcPiS2_S2_S2_S2_S2_ */
/* Demangled: android::MakeAVCCodecSpecificData(char const*, int*, int*, int*, int*, int*, int*) */
int _ZN7android24MakeAVCCodecSpecificDataEPKcPiS2_S2_S2_S2_S2_(void);

/* Symbol: _ZN7android10FindHEVCWHERKNS_2spINS_7ABufferEEEPiS5_ */
/* Demangled: android::FindHEVCWH(android::sp<android::ABuffer> const&, int*, int*) */
int _ZN7android10FindHEVCWHERKNS_2spINS_7ABufferEEEPiS5_(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android17OmxFormatToStringEi */
/* Demangled: android::OmxFormatToString(int) */
int _ZN7android17OmxFormatToStringEi(void);

/* Symbol: _ZN7android26convertToCCWRotationDegreeEbi */
/* Demangled: android::convertToCCWRotationDegree(bool, int) */
int _ZN7android26convertToCCWRotationDegreeEbi(void);

/* Symbol: _ZN7android25MakeHEVCCodecSpecificDataEPKcPiS2_ */
/* Demangled: android::MakeHEVCCodecSpecificData(char const*, int*, int*) */
int _ZN7android25MakeHEVCCodecSpecificDataEPKcPiS2_(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android6U16_ATEPKh */
/* Demangled: android::U16_AT(unsigned char const*) */
int _ZN7android6U16_ATEPKh(void);

/* Symbol: _ZN7android14dumpFileToPathEPKcRKNS_2spINS_7ABufferEEEb */
/* Demangled: android::dumpFileToPath(char const*, android::sp<android::ABuffer> const&, bool) */
int _ZN7android14dumpFileToPathEPKcRKNS_2spINS_7ABufferEEEb(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android20RemovePreventionByteEPhh */
/* Demangled: android::RemovePreventionByte(unsigned char*, unsigned char) */
int _ZN7android20RemovePreventionByteEPhh(void);

/* Symbol: _ZN7android22PixelForamt2ColorFomatEi */
/* Demangled: android::PixelForamt2ColorFomat(int) */
int _ZN7android22PixelForamt2ColorFomatEi(void);

/* Symbol: _ZN7android21getEncoderInPutFormatEv */
/* Demangled: android::getEncoderInPutFormat() */
int _ZN7android21getEncoderInPutFormatEv(void);

/* Symbol: _ZN7android17MTKFindAVCSPSInfoEPhmPNS_10MtkSPSInfoE */
/* Demangled: android::MTKFindAVCSPSInfo(unsigned char*, unsigned long, android::MtkSPSInfo*) */
int _ZN7android17MTKFindAVCSPSInfoEPhmPNS_10MtkSPSInfoE(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::ABuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE;

/* Symbol: _ZN7android25parseAVCCodecSpecificDataEPKhm */
/* Demangled: android::parseAVCCodecSpecificData(unsigned char const*, unsigned long) */
int _ZN7android25parseAVCCodecSpecificDataEPKhm(void);

/* Symbol: _ZN7android17convertToOMXLevelEPKcii */
/* Demangled: android::convertToOMXLevel(char const*, int, int) */
int _ZN7android17convertToOMXLevelEPKcii(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCOMUTILS_H */
