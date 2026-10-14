/*
 * Reverse-Engineered Source for: sensors.touch.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
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

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: void std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__push_back_slow_path<sensor_t const&>(sensor_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: _sensor_info */
extern "C" __attribute__((visibility("default"))) void* _sensor_info = NULL;

/* Demangled: std::__1::__split_buffer<sensor_t, std::__1::allocator<sensor_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<sensor_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI8sensor_tRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI8sensor_tRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<sensor_t, std::__1::allocator<sensor_t>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: _touch_sensors */
extern "C" __attribute__((visibility("default"))) void* _touch_sensors = NULL;

/* Exported Object: flush_count */
extern "C" __attribute__((visibility("default"))) void* flush_count = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
