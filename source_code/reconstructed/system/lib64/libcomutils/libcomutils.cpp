/*
 * Reverse-Engineered Source for: libcomutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcomutils"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libcomutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::PixelFormatToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19PixelFormatToStringEi(void) {
    ALOGD("_ZN7android19PixelFormatToStringEi() called");
    return 0;
}

/* Demangled: android::mtk_scaling_list(int, android::ABitReader*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16mtk_scaling_listEiPNS_10ABitReaderE(void) {
    ALOGD("_ZN7android16mtk_scaling_listEiPNS_10ABitReaderE() called");
    return 0;
}

/* Demangled: android::mtk_parse_seq_scaling_matrix_present(android::ABitReader*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android36mtk_parse_seq_scaling_matrix_presentEPNS_10ABitReaderE(void) {
    ALOGD("_ZN7android36mtk_parse_seq_scaling_matrix_presentEPNS_10ABitReaderE() called");
    return 0;
}

/* Demangled: android::dumpRawYUVToPath(char const*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16dumpRawYUVToPathEPKcPvi(void) {
    ALOGD("_ZN7android16dumpRawYUVToPathEPKcPvi() called");
    return 0;
}

/* Demangled: android::convertToOMXProfile(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19convertToOMXProfileEPKci(void) {
    ALOGD("_ZN7android19convertToOMXProfileEPKci() called");
    return 0;
}

/* Demangled: android::convertToCWRotationDegree(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android25convertToCWRotationDegreeEbi(void) {
    ALOGD("_ZN7android25convertToCWRotationDegreeEbi() called");
    return 0;
}

/* Demangled: android::MakeAVCCodecSpecificData(char const*, int*, int*, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MakeAVCCodecSpecificDataEPKcPiS2_S2_S2_S2_S2_(void) {
    ALOGD("_ZN7android24MakeAVCCodecSpecificDataEPKcPiS2_S2_S2_S2_S2_() called");
    return 0;
}

/* Demangled: android::FindHEVCWH(android::sp<android::ABuffer> const&, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FindHEVCWHERKNS_2spINS_7ABufferEEEPiS5_(void) {
    ALOGD("_ZN7android10FindHEVCWHERKNS_2spINS_7ABufferEEEPiS5_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::OmxFormatToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17OmxFormatToStringEi(void) {
    ALOGD("_ZN7android17OmxFormatToStringEi() called");
    return 0;
}

/* Demangled: android::convertToCCWRotationDegree(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android26convertToCCWRotationDegreeEbi(void) {
    ALOGD("_ZN7android26convertToCCWRotationDegreeEbi() called");
    return 0;
}

/* Demangled: android::MakeHEVCCodecSpecificData(char const*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MakeHEVCCodecSpecificDataEPKcPiS2_(void) {
    ALOGD("_ZN7android25MakeHEVCCodecSpecificDataEPKcPiS2_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::U16_AT(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6U16_ATEPKh(void) {
    ALOGD("_ZN7android6U16_ATEPKh() called");
    return 0;
}

/* Demangled: android::dumpFileToPath(char const*, android::sp<android::ABuffer> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14dumpFileToPathEPKcRKNS_2spINS_7ABufferEEEb(void) {
    ALOGD("_ZN7android14dumpFileToPathEPKcRKNS_2spINS_7ABufferEEEb() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::RemovePreventionByte(unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20RemovePreventionByteEPhh(void) {
    ALOGD("_ZN7android20RemovePreventionByteEPhh() called");
    return 0;
}

/* Demangled: android::PixelForamt2ColorFomat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22PixelForamt2ColorFomatEi(void) {
    ALOGD("_ZN7android22PixelForamt2ColorFomatEi() called");
    return 0;
}

/* Demangled: android::getEncoderInPutFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21getEncoderInPutFormatEv(void) {
    ALOGD("_ZN7android21getEncoderInPutFormatEv() called");
    return 0;
}

/* Demangled: android::MTKFindAVCSPSInfo(unsigned char*, unsigned long, android::MtkSPSInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MTKFindAVCSPSInfoEPhmPNS_10MtkSPSInfoE(void) {
    ALOGD("_ZN7android17MTKFindAVCSPSInfoEPhmPNS_10MtkSPSInfoE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE = NULL;

/* Demangled: android::parseAVCCodecSpecificData(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android25parseAVCCodecSpecificDataEPKhm(void) {
    ALOGD("_ZN7android25parseAVCCodecSpecificDataEPKhm() called");
    return 0;
}

/* Demangled: android::convertToOMXLevel(char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17convertToOMXLevelEPKcii(void) {
    ALOGD("_ZN7android17convertToOMXLevelEPKcii() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}
