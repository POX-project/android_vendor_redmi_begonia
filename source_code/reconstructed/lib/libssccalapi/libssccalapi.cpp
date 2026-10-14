/*
 * Reverse-Engineered Source for: libssccalapi.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libssccalapi"

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
#include "libssccalapi.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ssccalapi_set_debug */
extern "C" __attribute__((visibility("default"))) int ssccalapi_set_debug(void) {
    ALOGD("ssccalapi_set_debug() called");
    return 0;
}

/* Demangled: transfer_ssc_oem_test_msg */
extern "C" __attribute__((visibility("default"))) int transfer_ssc_oem_test_msg(void) {
    ALOGD("transfer_ssc_oem_test_msg() called");
    return 0;
}
