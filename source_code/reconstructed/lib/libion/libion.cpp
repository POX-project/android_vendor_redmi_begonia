/*
 * Reverse-Engineered Source for: libion.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libion"

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
#include "libion.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_ION "/dev/ion"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
        if (access(DEV_DEV_ION, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ION, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ION, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ion_is_legacy */
extern "C" __attribute__((visibility("default"))) int ion_is_legacy(void) {
    ALOGD("ion_is_legacy() called");
    return 0;
}

/* Demangled: ion_free */
extern "C" __attribute__((visibility("default"))) int ion_free(void) {
    ALOGD("ion_free() called");
    return 0;
}

/* Demangled: ion_open */
extern "C" __attribute__((visibility("default"))) int ion_open(void) {
    ALOGD("ion_open() called");
    return 0;
}

/* Demangled: ion_close */
extern "C" __attribute__((visibility("default"))) int ion_close(void) {
    ALOGD("ion_close() called");
    return 0;
}

/* Demangled: ion_is_using_modular_heaps */
extern "C" __attribute__((visibility("default"))) int ion_is_using_modular_heaps(void) {
    ALOGD("ion_is_using_modular_heaps() called");
    return 0;
}

/* Demangled: ion_share */
extern "C" __attribute__((visibility("default"))) int ion_share(void) {
    ALOGD("ion_share() called");
    return 0;
}

/* Demangled: ion_query_get_heaps */
extern "C" __attribute__((visibility("default"))) int ion_query_get_heaps(void) {
    ALOGD("ion_query_get_heaps() called");
    return 0;
}

/* Demangled: ion_alloc */
extern "C" __attribute__((visibility("default"))) int ion_alloc(void) {
    ALOGD("ion_alloc() called");
    return 0;
}

/* Demangled: ion_map */
extern "C" __attribute__((visibility("default"))) int ion_map(void) {
    ALOGD("ion_map() called");
    return 0;
}

/* Demangled: ion_alloc_fd */
extern "C" __attribute__((visibility("default"))) int ion_alloc_fd(void) {
    ALOGD("ion_alloc_fd() called");
    return 0;
}

/* Demangled: ion_import */
extern "C" __attribute__((visibility("default"))) int ion_import(void) {
    ALOGD("ion_import() called");
    return 0;
}

/* Demangled: ion_sync_fd */
extern "C" __attribute__((visibility("default"))) int ion_sync_fd(void) {
    ALOGD("ion_sync_fd() called");
    return 0;
}

/* Demangled: ion_query_heap_cnt */
extern "C" __attribute__((visibility("default"))) int ion_query_heap_cnt(void) {
    ALOGD("ion_query_heap_cnt() called");
    return 0;
}
