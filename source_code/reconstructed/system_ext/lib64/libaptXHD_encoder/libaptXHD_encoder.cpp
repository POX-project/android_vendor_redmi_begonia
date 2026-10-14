/*
 * Reverse-Engineered Source for: libaptXHD_encoder.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libaptXHD_encoder"

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
#include "libaptXHD_encoder.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: processSubband_HDLL */
extern "C" __attribute__((visibility("default"))) int processSubband_HDLL(void) {
    ALOGD("processSubband_HDLL() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: SizeofAptxhdbtenc */
extern "C" __attribute__((visibility("default"))) int SizeofAptxhdbtenc(void) {
    ALOGD("SizeofAptxhdbtenc() called");
    return 0;
}

/* Demangled: processSubband_HDHL */
extern "C" __attribute__((visibility("default"))) int processSubband_HDHL(void) {
    ALOGD("processSubband_HDHL() called");
    return 0;
}

/* Exported Object: Qmf_outerCoeffs */
extern "C" __attribute__((visibility("default"))) void* Qmf_outerCoeffs = NULL;

/* Demangled: aptxhdbtenc_init */
extern "C" __attribute__((visibility("default"))) int aptxhdbtenc_init(void) {
    ALOGD("aptxhdbtenc_init() called");
    return 0;
}

/* Exported Object: version */
extern "C" __attribute__((visibility("default"))) void* version = NULL;

/* Demangled: AsmQmfConvO_HD */
extern "C" __attribute__((visibility("default"))) int AsmQmfConvO_HD(void) {
    ALOGD("AsmQmfConvO_HD() called");
    return 0;
}

/* Exported Object: Qmf_innerCoeffs */
extern "C" __attribute__((visibility("default"))) void* Qmf_innerCoeffs = NULL;

/* Exported Object: aptXHDStereoEncoder */
extern "C" __attribute__((visibility("default"))) void* aptXHDStereoEncoder = NULL;

/* Demangled: BsearchLH */
extern "C" __attribute__((visibility("default"))) int BsearchLH(void) {
    ALOGD("BsearchLH() called");
    return 0;
}

/* Demangled: quantiseDifference_HDLH */
extern "C" __attribute__((visibility("default"))) int quantiseDifference_HDLH(void) {
    ALOGD("quantiseDifference_HDLH() called");
    return 0;
}

/* Demangled: aptxhdbtenc_encodestereo */
extern "C" __attribute__((visibility("default"))) int aptxhdbtenc_encodestereo(void) {
    ALOGD("aptxhdbtenc_encodestereo() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: aptxhdbtenc_build */
extern "C" __attribute__((visibility("default"))) int aptxhdbtenc_build(void) {
    ALOGD("aptxhdbtenc_build() called");
    return 0;
}

/* Demangled: quantiseDifference_HDHH */
extern "C" __attribute__((visibility("default"))) int quantiseDifference_HDHH(void) {
    ALOGD("quantiseDifference_HDHH() called");
    return 0;
}

/* Demangled: quantiseDifference_HDHL */
extern "C" __attribute__((visibility("default"))) int quantiseDifference_HDHL(void) {
    ALOGD("quantiseDifference_HDHL() called");
    return 0;
}

/* Demangled: aptxhdbtenc_version */
extern "C" __attribute__((visibility("default"))) int aptxhdbtenc_version(void) {
    ALOGD("aptxhdbtenc_version() called");
    return 0;
}

/* Demangled: NewAptxhdEnc */
extern "C" __attribute__((visibility("default"))) int NewAptxhdEnc(void) {
    ALOGD("NewAptxhdEnc() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Demangled: processSubband_HD */
extern "C" __attribute__((visibility("default"))) int processSubband_HD(void) {
    ALOGD("processSubband_HD() called");
    return 0;
}

/* Demangled: clearmem_HD */
extern "C" __attribute__((visibility("default"))) int clearmem_HD(void) {
    ALOGD("clearmem_HD() called");
    return 0;
}

/* Demangled: AsmQmfConvI_HD */
extern "C" __attribute__((visibility("default"))) int AsmQmfConvI_HD(void) {
    ALOGD("AsmQmfConvI_HD() called");
    return 0;
}

/* Demangled: quantiseDifference_HDLL */
extern "C" __attribute__((visibility("default"))) int quantiseDifference_HDLL(void) {
    ALOGD("quantiseDifference_HDLL() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: build */
extern "C" __attribute__((visibility("default"))) void* build = NULL;

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Exported Object: swversion */
extern "C" __attribute__((visibility("default"))) void* swversion = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
