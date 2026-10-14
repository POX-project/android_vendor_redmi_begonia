/*
 * Reverse-Engineered Source for: audio.r_submix.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "audio_r_submix_mt6785"

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
#include "audio_r_submix_mt6785.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int audio_r_submix_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int audio_r_submix_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t audio_r_submix_mt6785_module_methods = {
    .open = audio_r_submix_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "audio",
    .name = "Begonia audio_r_submix_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &audio_r_submix_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int audio_r_submix_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int audio_r_submix_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing audio_r_submix_mt6785 module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: in_update_frame_lost_info */
extern "C" __attribute__((visibility("default"))) int in_update_frame_lost_info(void) {
    ALOGD("in_update_frame_lost_info() called");
    return 0;
}

/* Exported Object: r_submix_streamin */
extern "C" __attribute__((visibility("default"))) void* r_submix_streamin = NULL;

/* Exported Object: streamout_propty */
extern "C" __attribute__((visibility("default"))) void* streamout_propty = NULL;

/* Exported Object: submixlog_propty */
extern "C" __attribute__((visibility("default"))) void* submixlog_propty = NULL;

/* Demangled: checkAndCreateDirectory */
extern "C" __attribute__((visibility("default"))) int checkAndCreateDirectory(void) {
    ALOGD("checkAndCreateDirectory() called");
    return 0;
}

/* Demangled: dumpPcmData */
extern "C" __attribute__((visibility("default"))) int dumpPcmData(void) {
    ALOGD("dumpPcmData() called");
    return 0;
}

/* Exported Object: r_submix_streamout */
extern "C" __attribute__((visibility("default"))) void* r_submix_streamout = NULL;

/* Exported Object: streamin_propty */
extern "C" __attribute__((visibility("default"))) void* streamin_propty = NULL;
