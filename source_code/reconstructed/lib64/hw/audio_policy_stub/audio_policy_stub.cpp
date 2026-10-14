/*
 * Reverse-Engineered Source for: audio_policy.stub.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "audio_policy_stub"

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
#include "audio_policy_stub.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int audio_policy_stub_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int audio_policy_stub_close(struct hw_device_t* dev);

static struct hw_module_methods_t audio_policy_stub_module_methods = {
    .open = audio_policy_stub_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "audio",
    .name = "Begonia audio_policy_stub Module",
    .author = "LineageOS / Community RE",
    .methods = &audio_policy_stub_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int audio_policy_stub_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int audio_policy_stub_close(struct hw_device_t* dev) {
    ALOGI("Closing audio_policy_stub module");
    if (dev) free(dev);
    return 0;
}
