/*
 * Reverse-Engineered Source for: libkmsetkey.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkmsetkey"

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
#include "libkmsetkey.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: check_clean */
extern "C" __attribute__((visibility("default"))) int check_clean(void) {
    ALOGD("check_clean() called");
    return 0;
}

/* Demangled: import_clean */
extern "C" __attribute__((visibility("default"))) int import_clean(void) {
    ALOGD("import_clean() called");
    return 0;
}

/* Demangled: ree_check_attest_keybox */
extern "C" __attribute__((visibility("default"))) int ree_check_attest_keybox(void) {
    ALOGD("ree_check_attest_keybox() called");
    return 0;
}

/* Demangled: ree_import_attest_keybox */
extern "C" __attribute__((visibility("default"))) int ree_import_attest_keybox(void) {
    ALOGD("ree_import_attest_keybox() called");
    return 0;
}
