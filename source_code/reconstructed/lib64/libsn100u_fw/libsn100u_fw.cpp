/*
 * Reverse-Engineered Source for: libsn100u_fw.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libsn100u_fw"

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
#include "libsn100u_fw.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: gphDnldNfc_DlSequence */
extern "C" __attribute__((visibility("default"))) void* gphDnldNfc_DlSequence = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Exported Object: gphDnldNfc_DlSeq */
extern "C" __attribute__((visibility("default"))) void* gphDnldNfc_DlSeq = NULL;

/* Exported Object: gphDnldNfc_DlSeqSz */
extern "C" __attribute__((visibility("default"))) void* gphDnldNfc_DlSeqSz = NULL;

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _stack */
extern "C" __attribute__((visibility("default"))) void* _stack = NULL;

/* Exported Object: __data_start */
extern "C" __attribute__((visibility("default"))) void* obj___data_start __asm__("__data_start") = NULL;
