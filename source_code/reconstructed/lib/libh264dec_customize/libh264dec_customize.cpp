/*
 * Reverse-Engineered Source for: libh264dec_customize.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libh264dec_customize"

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
#include "libh264dec_customize.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SWH264GetSkipBLevel */
extern "C" __attribute__((visibility("default"))) int SWH264GetSkipBLevel(void) {
    ALOGD("SWH264GetSkipBLevel() called");
    return 0;
}

/* Demangled: SWH264GetLossyQty */
extern "C" __attribute__((visibility("default"))) int SWH264GetLossyQty(void) {
    ALOGD("SWH264GetLossyQty() called");
    return 0;
}

/* Demangled: SWH264LossyQueryDynamicSwitch */
extern "C" __attribute__((visibility("default"))) int SWH264LossyQueryDynamicSwitch(void) {
    ALOGD("SWH264LossyQueryDynamicSwitch() called");
    return 0;
}

/* Demangled: SWH264LossyQuerySwitchPercent */
extern "C" __attribute__((visibility("default"))) int SWH264LossyQuerySwitchPercent(void) {
    ALOGD("SWH264LossyQuerySwitchPercent() called");
    return 0;
}

/* Demangled: SWH264QueryConcealSetting */
extern "C" __attribute__((visibility("default"))) int SWH264QueryConcealSetting(void) {
    ALOGD("SWH264QueryConcealSetting() called");
    return 0;
}

/* Demangled: SWH264TurnOnSubsample */
extern "C" __attribute__((visibility("default"))) int SWH264TurnOnSubsample(void) {
    ALOGD("SWH264TurnOnSubsample() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
