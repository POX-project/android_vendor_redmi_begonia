/*
 * Reverse-Engineered Source for: libneuropilot_hal_utils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libneuropilot_hal_utils"

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
#include "libneuropilot_hal_utils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::nn::decodeOperandValue(unsigned char*, android::nn::OemOperandValue*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2nn18decodeOperandValueEPhPNS0_15OemOperandValueE(void) {
    ALOGD("_ZN7android2nn18decodeOperandValueEPhPNS0_15OemOperandValueE() called");
    return 0;
}

/* Demangled: android::nn::encodeOperandValue(android::nn::OemOperandValue*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2nn18encodeOperandValueEPNS0_15OemOperandValueEPh(void) {
    ALOGD("_ZN7android2nn18encodeOperandValueEPNS0_15OemOperandValueEPh() called");
    return 0;
}
