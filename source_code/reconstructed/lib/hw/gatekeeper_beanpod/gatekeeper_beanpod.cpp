/*
 * Reverse-Engineered Source for: gatekeeper.beanpod.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "gatekeeper_beanpod"

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
#include "gatekeeper_beanpod.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int gatekeeper_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int gatekeeper_beanpod_close(struct hw_device_t* dev);

static struct hw_module_methods_t gatekeeper_beanpod_module_methods = {
    .open = gatekeeper_beanpod_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "gatekeeper",
    .name = "Begonia gatekeeper_beanpod Module",
    .author = "LineageOS / Community RE",
    .methods = &gatekeeper_beanpod_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int gatekeeper_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int gatekeeper_beanpod_close(struct hw_device_t* dev) {
    ALOGI("Closing gatekeeper_beanpod module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: ut_gk_delete_user(gatekeeper_device const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17ut_gk_delete_userPK17gatekeeper_devicej(void) {
    ALOGD("_Z17ut_gk_delete_userPK17gatekeeper_devicej() called");
    return 0;
}

/* Demangled: ut_gk_delete_all_users(gatekeeper_device const*) */
extern "C" __attribute__((visibility("default"))) int _Z22ut_gk_delete_all_usersPK17gatekeeper_device(void) {
    ALOGD("_Z22ut_gk_delete_all_usersPK17gatekeeper_device() called");
    return 0;
}

/* Exported Object: dev */
extern "C" __attribute__((visibility("default"))) void* dev = NULL;
