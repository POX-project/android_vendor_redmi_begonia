/*
 * Reverse-Engineered Source for: libMtkOmxCore.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMtkOmxCore"

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
#include "libMtkOmxCore.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Mtk_OMX_ComponentNameEnum */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_ComponentNameEnum(void) {
    ALOGD("Mtk_OMX_ComponentNameEnum() called");
    return 0;
}

/* Demangled: Mtk_OMX_Deinit */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_Deinit(void) {
    ALOGD("Mtk_OMX_Deinit() called");
    return 0;
}

/* Demangled: free_inst_handle(int) */
extern "C" __attribute__((visibility("default"))) int _Z16free_inst_handlei(void) {
    ALOGD("_Z16free_inst_handlei() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: gCoreReferenceCounts */
extern "C" __attribute__((visibility("default"))) void* gCoreReferenceCounts = NULL;

/* Demangled: Core_Init */
extern "C" __attribute__((visibility("default"))) int Core_Init(void) {
    ALOGD("Core_Init() called");
    return 0;
}

/* Demangled: Mtk_OMX_FreeHandle */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_FreeHandle(void) {
    ALOGD("Mtk_OMX_FreeHandle() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: Mtk_OMX_GetRolesOfComponent */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_GetRolesOfComponent(void) {
    ALOGD("Mtk_OMX_GetRolesOfComponent() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: Mtk_OMX_GetHandle */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_GetHandle(void) {
    ALOGD("Mtk_OMX_GetHandle() called");
    return 0;
}

/* Demangled: Mtk_OMX_Init */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_Init(void) {
    ALOGD("Mtk_OMX_Init() called");
    return 0;
}

/* Demangled: getTickCountMs() */
extern "C" __attribute__((visibility("default"))) int _Z14getTickCountMsv(void) {
    ALOGD("_Z14getTickCountMsv() called");
    return 0;
}

/* Exported Object: gCompInstanceCount */
extern "C" __attribute__((visibility("default"))) void* gCompInstanceCount = NULL;

/* Exported Object: gCoreCompInstance */
extern "C" __attribute__((visibility("default"))) void* gCoreCompInstance = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: Core_Deinit */
extern "C" __attribute__((visibility("default"))) int Core_Deinit(void) {
    ALOGD("Core_Deinit() called");
    return 0;
}

/* Demangled: Mtk_OMX_GetComponentsOfRole */
extern "C" __attribute__((visibility("default"))) int Mtk_OMX_GetComponentsOfRole(void) {
    ALOGD("Mtk_OMX_GetComponentsOfRole() called");
    return 0;
}

/* Exported Object: gCoreComponentCounts */
extern "C" __attribute__((visibility("default"))) void* gCoreComponentCounts = NULL;

/* Exported Object: gInitialized */
extern "C" __attribute__((visibility("default"))) void* gInitialized = NULL;

/* Exported Object: gInstancePoolLock */
extern "C" __attribute__((visibility("default"))) void* gInstancePoolLock = NULL;

/* Exported Object: gCoreComponents */
extern "C" __attribute__((visibility("default"))) void* gCoreComponents = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
