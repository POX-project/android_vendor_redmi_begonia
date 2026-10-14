/*
 * Reverse-Engineered Source for: libaptX_encoder.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libaptX_encoder"

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
#include "libaptX_encoder.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: aptxbtenc_encodestereo */
extern "C" __attribute__((visibility("default"))) int aptxbtenc_encodestereo(void) {
    ALOGD("aptxbtenc_encodestereo() called");
    return 0;
}

/* Exported Object: Qmf_outerCoeffs */
extern "C" __attribute__((visibility("default"))) void* Qmf_outerCoeffs = NULL;

/* Demangled: AsmQmfConvI */
extern "C" __attribute__((visibility("default"))) int AsmQmfConvI(void) {
    ALOGD("AsmQmfConvI() called");
    return 0;
}

/* Demangled: processSubbandHL */
extern "C" __attribute__((visibility("default"))) int processSubbandHL(void) {
    ALOGD("processSubbandHL() called");
    return 0;
}

/* Exported Object: version */
extern "C" __attribute__((visibility("default"))) void* version = NULL;

/* Demangled: AsmQmfConvO */
extern "C" __attribute__((visibility("default"))) int AsmQmfConvO(void) {
    ALOGD("AsmQmfConvO() called");
    return 0;
}

/* Demangled: aptxbtenc_build */
extern "C" __attribute__((visibility("default"))) int aptxbtenc_build(void) {
    ALOGD("aptxbtenc_build() called");
    return 0;
}

/* Exported Object: Qmf_innerCoeffs */
extern "C" __attribute__((visibility("default"))) void* Qmf_innerCoeffs = NULL;

/* Demangled: aptxbtenc_version */
extern "C" __attribute__((visibility("default"))) int aptxbtenc_version(void) {
    ALOGD("aptxbtenc_version() called");
    return 0;
}

/* Demangled: aptxbtenc_init */
extern "C" __attribute__((visibility("default"))) int aptxbtenc_init(void) {
    ALOGD("aptxbtenc_init() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: aptxbtenc_setsync_mode */
extern "C" __attribute__((visibility("default"))) int aptxbtenc_setsync_mode(void) {
    ALOGD("aptxbtenc_setsync_mode() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: quantiseDifferenceLL */
extern "C" __attribute__((visibility("default"))) int quantiseDifferenceLL(void) {
    ALOGD("quantiseDifferenceLL() called");
    return 0;
}

/* Demangled: SizeofAptxbtenc */
extern "C" __attribute__((visibility("default"))) int SizeofAptxbtenc(void) {
    ALOGD("SizeofAptxbtenc() called");
    return 0;
}

/* Demangled: processSubband */
extern "C" __attribute__((visibility("default"))) int processSubband(void) {
    ALOGD("processSubband() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Demangled: quantiseDifferenceHH */
extern "C" __attribute__((visibility("default"))) int quantiseDifferenceHH(void) {
    ALOGD("quantiseDifferenceHH() called");
    return 0;
}

/* Demangled: quantiseDifferenceLH */
extern "C" __attribute__((visibility("default"))) int quantiseDifferenceLH(void) {
    ALOGD("quantiseDifferenceLH() called");
    return 0;
}

/* Demangled: processSubbandLL */
extern "C" __attribute__((visibility("default"))) int processSubbandLL(void) {
    ALOGD("processSubbandLL() called");
    return 0;
}

/* Demangled: quantiseDifferenceHL */
extern "C" __attribute__((visibility("default"))) int quantiseDifferenceHL(void) {
    ALOGD("quantiseDifferenceHL() called");
    return 0;
}

/* Demangled: clearmem */
extern "C" __attribute__((visibility("default"))) int clearmem(void) {
    ALOGD("clearmem() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NewAptxEnc */
extern "C" __attribute__((visibility("default"))) int NewAptxEnc(void) {
    ALOGD("NewAptxEnc() called");
    return 0;
}

/* Exported Object: aptXStereoEncoder */
extern "C" __attribute__((visibility("default"))) void* aptXStereoEncoder = NULL;

/* Exported Object: build */
extern "C" __attribute__((visibility("default"))) void* build = NULL;

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Exported Object: swversion */
extern "C" __attribute__((visibility("default"))) void* swversion = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
