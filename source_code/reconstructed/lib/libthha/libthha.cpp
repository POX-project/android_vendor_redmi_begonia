/*
 * Reverse-Engineered Source for: libthha.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libthha"

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
#include "libthha.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: thha_score */
extern "C" __attribute__((visibility("default"))) int thha_score(void) {
    ALOGD("thha_score() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;
