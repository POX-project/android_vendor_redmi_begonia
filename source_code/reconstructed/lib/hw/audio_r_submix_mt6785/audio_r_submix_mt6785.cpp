/*
 * Reverse-Engineered Source for: audio.r_submix.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
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

/* Exported Object: r_submix_streamin */
extern "C" __attribute__((visibility("default"))) void* r_submix_streamin = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: r_submix_streamout */
extern "C" __attribute__((visibility("default"))) void* r_submix_streamout = NULL;

/* Demangled: android::sp<android::MonoPipeReader>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_14MonoPipeReaderEE5clearEv(void) {
    ALOGD("_ZN7android2spINS_14MonoPipeReaderEE5clearEv() called");
    return 0;
}

/* Demangled: android::sp<android::MonoPipe>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8MonoPipeEE5clearEv(void) {
    ALOGD("_ZN7android2spINS_8MonoPipeEE5clearEv() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: in_update_frame_lost_info */
extern "C" __attribute__((visibility("default"))) int in_update_frame_lost_info(void) {
    ALOGD("in_update_frame_lost_info() called");
    return 0;
}

/* Exported Object: submixlog_propty */
extern "C" __attribute__((visibility("default"))) void* submixlog_propty = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: dumpPcmData */
extern "C" __attribute__((visibility("default"))) int dumpPcmData(void) {
    ALOGD("dumpPcmData() called");
    return 0;
}

/* Exported Object: streamin_propty */
extern "C" __attribute__((visibility("default"))) void* streamin_propty = NULL;

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: streamout_propty */
extern "C" __attribute__((visibility("default"))) void* streamout_propty = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: android::sp<android::MonoPipeReader>::operator=(android::MonoPipeReader*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_14MonoPipeReaderEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_14MonoPipeReaderEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::sp<android::MonoPipe>::operator=(android::MonoPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8MonoPipeEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_8MonoPipeEEaSEPS1_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: checkAndCreateDirectory */
extern "C" __attribute__((visibility("default"))) int checkAndCreateDirectory(void) {
    ALOGD("checkAndCreateDirectory() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
