/*
 * Reverse-Engineered Source for: gralloc.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "gralloc_default"

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
#include "gralloc_default.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_FB "/dev/fb"
#define DEV_DEV_GRAPHICS_FB "/dev/graphics/fb"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_FB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_FB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_FB, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GRAPHICS_FB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GRAPHICS_FB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GRAPHICS_FB, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int gralloc_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int gralloc_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t gralloc_default_module_methods = {
    .open = gralloc_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "gralloc",
    .name = "Begonia gralloc_default Module",
    .author = "LineageOS / Community RE",
    .methods = &gralloc_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int gralloc_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int gralloc_default_close(struct hw_device_t* dev) {
    ALOGI("Closing gralloc_default module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: fb_device_open(hw_module_t const*, char const*, hw_device_t**) */
extern "C" __attribute__((visibility("default"))) int _Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t(void) {
    ALOGD("_Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t() called");
    return 0;
}

/* Demangled: mapFrameBufferLocked(private_module_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z20mapFrameBufferLockedP16private_module_ti(void) {
    ALOGD("_Z20mapFrameBufferLockedP16private_module_ti() called");
    return 0;
}

/* Demangled: gralloc_unregister_buffer(gralloc_module_t const*, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle(void) {
    ALOGD("_Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle() called");
    return 0;
}

/* Demangled: gralloc_lock(gralloc_module_t const*, native_handle const*, int, int, int, int, int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv(void) {
    ALOGD("_Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv() called");
    return 0;
}

/* Demangled: gralloc_unlock(gralloc_module_t const*, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle(void) {
    ALOGD("_Z14gralloc_unlockPK16gralloc_module_tPK13native_handle() called");
    return 0;
}

/* Demangled: terminateBuffer(gralloc_module_t const*, private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z15terminateBufferPK16gralloc_module_tP16private_handle_t(void) {
    ALOGD("_Z15terminateBufferPK16gralloc_module_tP16private_handle_t() called");
    return 0;
}

/* Demangled: gralloc_register_buffer(gralloc_module_t const*, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle(void) {
    ALOGD("_Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle() called");
    return 0;
}

/* Demangled: mapBuffer(gralloc_module_t const*, private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z9mapBufferPK16gralloc_module_tP16private_handle_t(void) {
    ALOGD("_Z9mapBufferPK16gralloc_module_tP16private_handle_t() called");
    return 0;
}
