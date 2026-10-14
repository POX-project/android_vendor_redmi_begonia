/*
 * Reverse-Engineered Source for: libgralloc_metadata.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgralloc_metadata"

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
#include "libgralloc_metadata.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: gm_free_fd(int*) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_free_fdPi(void) {
    ALOGD("_Z10gm_free_fdPi() called");
    return 0;
}

/* Demangled: gm_get_xxx(int, unsigned long long, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_get_xxxiyPy(void) {
    ALOGD("_Z10gm_get_xxxiyPy() called");
    return 0;
}

/* Demangled: gm_set_xxx(int, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_set_xxxiyy(void) {
    ALOGD("_Z10gm_set_xxxiyy() called");
    return 0;
}

/* Demangled: gm_shared_memory_allocate(int*, void**, unsigned long long*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z25gm_shared_memory_allocatePiPPvPyy(void) {
    ALOGD("_Z25gm_shared_memory_allocatePiPPvPyy() called");
    return 0;
}

/* Demangled: gm_get_yyy(int, unsigned long long, mediatek::graphics::common::gm_yyy_info_t*) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_get_yyyiyPN8mediatek8graphics6common13gm_yyy_info_tE(void) {
    ALOGD("_Z10gm_get_yyyiyPN8mediatek8graphics6common13gm_yyy_info_tE() called");
    return 0;
}

/* Demangled: gm_get_zzz(int, unsigned long long, mediatek::graphics::common::gm_zzz_info_t*) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_get_zzziyPN8mediatek8graphics6common13gm_zzz_info_tE(void) {
    ALOGD("_Z10gm_get_zzziyPN8mediatek8graphics6common13gm_zzz_info_tE() called");
    return 0;
}

/* Demangled: gm_set_yyy(int, unsigned long long, mediatek::graphics::common::gm_yyy_info_t) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_set_yyyiyN8mediatek8graphics6common13gm_yyy_info_tE(void) {
    ALOGD("_Z10gm_set_yyyiyN8mediatek8graphics6common13gm_yyy_info_tE() called");
    return 0;
}

/* Demangled: gm_set_zzz(int, unsigned long long, mediatek::graphics::common::gm_zzz_info_t) */
extern "C" __attribute__((visibility("default"))) int _Z10gm_set_zzziyN8mediatek8graphics6common13gm_zzz_info_tE(void) {
    ALOGD("_Z10gm_set_zzziyN8mediatek8graphics6common13gm_zzz_info_tE() called");
    return 0;
}

/* Demangled: gm_alloc_fd(int*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _Z11gm_alloc_fdPiPy(void) {
    ALOGD("_Z11gm_alloc_fdPiPy() called");
    return 0;
}

/* Demangled: gm_shared_memory_free(int*) */
extern "C" __attribute__((visibility("default"))) int _Z21gm_shared_memory_freePi(void) {
    ALOGD("_Z21gm_shared_memory_freePi() called");
    return 0;
}
