/*
 * Reverse-Engineered Source for: kmsetkey.beanpod.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "kmsetkey_beanpod"

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
#include "kmsetkey_beanpod.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int kmsetkey_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int kmsetkey_beanpod_close(struct hw_device_t* dev);

static struct hw_module_methods_t kmsetkey_beanpod_module_methods = {
    .open = kmsetkey_beanpod_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "kmsetkey",
    .name = "Begonia kmsetkey_beanpod Module",
    .author = "LineageOS / Community RE",
    .methods = &kmsetkey_beanpod_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int kmsetkey_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int kmsetkey_beanpod_close(struct hw_device_t* dev) {
    ALOGI("Closing kmsetkey_beanpod module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: TEE_Free_KM_Buffer */
extern "C" __attribute__((visibility("default"))) int TEE_Free_KM_Buffer(void) {
    ALOGD("TEE_Free_KM_Buffer() called");
    return 0;
}

/* Demangled: ut_km_check_google_key */
extern "C" __attribute__((visibility("default"))) int ut_km_check_google_key(void) {
    ALOGD("ut_km_check_google_key() called");
    return 0;
}

/* Demangled: TEE_Alloc_KM_Buffer_And_Reset */
extern "C" __attribute__((visibility("default"))) int TEE_Alloc_KM_Buffer_And_Reset(void) {
    ALOGD("TEE_Alloc_KM_Buffer_And_Reset() called");
    return 0;
}

/* Exported Object: keymaster_buffer */
extern "C" __attribute__((visibility("default"))) void* keymaster_buffer = NULL;

/* Demangled: ut_km_import_google_key_model(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29ut_km_import_google_key_modelPhj(void) {
    ALOGD("_Z29ut_km_import_google_key_modelPhj() called");
    return 0;
}

/* Demangled: ut_km_import_google_key */
extern "C" __attribute__((visibility("default"))) int ut_km_import_google_key(void) {
    ALOGD("ut_km_import_google_key() called");
    return 0;
}

/* Demangled: ut_km_import_google_key_and_model */
extern "C" __attribute__((visibility("default"))) int ut_km_import_google_key_and_model(void) {
    ALOGD("ut_km_import_google_key_and_model() called");
    return 0;
}
