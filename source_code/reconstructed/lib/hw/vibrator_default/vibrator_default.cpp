/*
 * Reverse-Engineered Source for: vibrator.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vibrator_default"

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
#include "vibrator_default.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int vibrator_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int vibrator_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t vibrator_default_module_methods = {
    .open = vibrator_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "vibrator",
    .name = "Begonia vibrator_default Module",
    .author = "LineageOS / Community RE",
    .methods = &vibrator_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int vibrator_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int vibrator_default_close(struct hw_device_t* dev) {
    ALOGI("Closing vibrator_default module");
    if (dev) free(dev);
    return 0;
}
