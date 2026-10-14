/*
 * Reverse-Engineered Source for: sensors.touch.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "sensors_touch"

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
#include "sensors_touch.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int sensors_touch_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int sensors_touch_close(struct hw_device_t* dev);

static struct hw_module_methods_t sensors_touch_module_methods = {
    .open = sensors_touch_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "sensors",
    .name = "Begonia sensors_touch Module",
    .author = "LineageOS / Community RE",
    .methods = &sensors_touch_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int sensors_touch_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int sensors_touch_close(struct hw_device_t* dev) {
    ALOGI("Closing sensors_touch module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: void std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__push_back_slow_path<sensor_t const&>(sensor_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: _sensor_info */
extern "C" __attribute__((visibility("default"))) void* _sensor_info = NULL;

/* Exported Object: _touch_sensors */
extern "C" __attribute__((visibility("default"))) void* _touch_sensors = NULL;

/* Exported Object: flush_count */
extern "C" __attribute__((visibility("default"))) void* flush_count = NULL;
