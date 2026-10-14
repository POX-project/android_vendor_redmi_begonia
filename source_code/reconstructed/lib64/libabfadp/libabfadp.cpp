/*
 * Reverse-Engineered Source for: libabfadp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libabfadp"

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
#include "libabfadp.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AbfAdapter::needAbf(AbfAdapter::ProcessParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapter7needAbfERKNS_12ProcessParamE(void) {
    ALOGD("_ZN10AbfAdapter7needAbfERKNS_12ProcessParamE() called");
    return 0;
}

/* Exported Object: vtable for AbfAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AbfAdapter = NULL;

/* Demangled: AbfAdapter::createInstance(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapter14createInstanceEjj(void) {
    ALOGD("_ZN10AbfAdapter14createInstanceEjj() called");
    return 0;
}

/* Demangled: AbfAdapter::process(AbfAdapter::ProcessParam const&, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapter7processERKNS_12ProcessParamEPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN10AbfAdapter7processERKNS_12ProcessParamEPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: AbfAdapter::AbfAdapter(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapterC1Ejj(void) {
    ALOGD("_ZN10AbfAdapterC1Ejj() called");
    return 0;
}

/* Demangled: AbfAdapter::AbfAdapter(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapterC2Ejj(void) {
    ALOGD("_ZN10AbfAdapterC2Ejj() called");
    return 0;
}

/* Exported Object: VTT for AbfAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTT10AbfAdapter = NULL;

/* Demangled: virtual thunk to AbfAdapter::~AbfAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10AbfAdapterD0Ev(void) {
    ALOGD("_ZTv0_n24_N10AbfAdapterD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to AbfAdapter::~AbfAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10AbfAdapterD1Ev(void) {
    ALOGD("_ZTv0_n24_N10AbfAdapterD1Ev() called");
    return 0;
}

/* Demangled: AbfAdapter::getTuningData(AbfAdapter::ProcessParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapter13getTuningDataERKNS_12ProcessParamE(void) {
    ALOGD("_ZN10AbfAdapter13getTuningDataERKNS_12ProcessParamE() called");
    return 0;
}

/* Demangled: AbfAdapter::~AbfAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapterD0Ev(void) {
    ALOGD("_ZN10AbfAdapterD0Ev() called");
    return 0;
}

/* Demangled: AbfAdapter::~AbfAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapterD1Ev(void) {
    ALOGD("_ZN10AbfAdapterD1Ev() called");
    return 0;
}

/* Demangled: AbfAdapter::~AbfAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN10AbfAdapterD2Ev(void) {
    ALOGD("_ZN10AbfAdapterD2Ev() called");
    return 0;
}
