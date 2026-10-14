/*
 * Reverse-Engineered Source for: libfft_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfft_vendor"

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
#include "libfft_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ApplyFFT256 */
extern "C" __attribute__((visibility("default"))) int ApplyFFT256(void) {
    ALOGD("ApplyFFT256() called");
    return 0;
}

/* Exported Object: Wn_i_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_i_256 = NULL;

/* Demangled: ApplyFFT */
extern "C" __attribute__((visibility("default"))) int ApplyFFT(void) {
    ALOGD("ApplyFFT() called");
    return 0;
}

/* Demangled: DIF_FFT */
extern "C" __attribute__((visibility("default"))) int DIF_FFT(void) {
    ALOGD("DIF_FFT() called");
    return 0;
}

/* Demangled: FreqCheck */
extern "C" __attribute__((visibility("default"))) int FreqCheck(void) {
    ALOGD("FreqCheck() called");
    return 0;
}

/* Demangled: MagnitudeCheck */
extern "C" __attribute__((visibility("default"))) int MagnitudeCheck(void) {
    ALOGD("MagnitudeCheck() called");
    return 0;
}

/* Demangled: comp_divs */
extern "C" __attribute__((visibility("default"))) int comp_divs(void) {
    ALOGD("comp_divs() called");
    return 0;
}

/* Exported Object: Wn_r_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_r_256 = NULL;
