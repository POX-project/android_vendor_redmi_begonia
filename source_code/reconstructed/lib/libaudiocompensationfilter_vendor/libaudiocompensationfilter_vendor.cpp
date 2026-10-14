/*
 * Reverse-Engineered Source for: libaudiocompensationfilter_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiocompensationfilter_vendor"

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
#include "libaudiocompensationfilter_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: android::kFltCategoryName */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16kFltCategoryNameE = NULL;

/* Demangled: android::audioComFltCustParamInit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24audioComFltCustParamInitEv(void) {
    ALOGD("_ZN7android24audioComFltCustParamInitEv() called");
    return 0;
}

/* Demangled: android::getDefaultAudioCompFltParam(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27getDefaultAudioCompFltParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT(void) {
    ALOGD("_ZN7android27getDefaultAudioCompFltParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT() called");
    return 0;
}

/* Exported Object: android::audioHierarchicalParamString */
extern "C" __attribute__((visibility("default"))) void* _ZN7android28audioHierarchicalParamStringE = NULL;

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

/* Demangled: setAudioCompFltCustParamToStorage */
extern "C" __attribute__((visibility("default"))) int setAudioCompFltCustParamToStorage(void) {
    ALOGD("setAudioCompFltCustParamToStorage() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::getPlaybackPostProcessParameterFromXML(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android38getPlaybackPostProcessParameterFromXMLENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc(void) {
    ALOGD("_ZN7android38getPlaybackPostProcessParameterFromXMLENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc() called");
    return 0;
}

/* Demangled: getAudioCompFltCustParamFromStorage */
extern "C" __attribute__((visibility("default"))) int getAudioCompFltCustParamFromStorage(void) {
    ALOGD("getAudioCompFltCustParamFromStorage() called");
    return 0;
}

/* Exported Object: android::kFltAudioTypeFileName */
extern "C" __attribute__((visibility("default"))) void* _ZN7android21kFltAudioTypeFileNameE = NULL;

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
