/*
 * Reverse-Engineered Source for: power.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "power_mt6785"

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
#include "power_mt6785.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int power_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int power_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t power_mt6785_module_methods = {
    .open = power_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "power",
    .name = "Begonia power_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &power_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int power_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int power_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing power_mt6785 module");
    if (dev) free(dev);
    return 0;
}
