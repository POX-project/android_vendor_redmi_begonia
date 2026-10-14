/*
 * Reverse-Engineered Source for: libstagefright_softomx_plugin.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_softomx_plugin"

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
#include "libstagefright_softomx_plugin.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SoftOMXPlugin::getRolesOfComponent(char const*, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE(void) {
    ALOGD("_ZN7android13SoftOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE() called");
    return 0;
}

/* Demangled: android::SoftOMXPlugin::destroyComponentInstance(OMX_COMPONENTTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android13SoftOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXPlugin::SoftOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPluginC1Ev(void) {
    ALOGD("_ZN7android13SoftOMXPluginC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SoftOMXPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13SoftOMXPluginE = NULL;

/* Demangled: createOMXPlugin */
extern "C" __attribute__((visibility("default"))) int createOMXPlugin(void) {
    ALOGD("createOMXPlugin() called");
    return 0;
}

/* Demangled: destroyOMXPlugin */
extern "C" __attribute__((visibility("default"))) int destroyOMXPlugin(void) {
    ALOGD("destroyOMXPlugin() called");
    return 0;
}

/* Demangled: android::SoftOMXPlugin::enumerateComponents(char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPlugin19enumerateComponentsEPcjj(void) {
    ALOGD("_ZN7android13SoftOMXPlugin19enumerateComponentsEPcjj() called");
    return 0;
}

/* Demangled: android::SoftOMXPlugin::makeComponentInstance(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android13SoftOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXPlugin::SoftOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SoftOMXPluginC2Ev(void) {
    ALOGD("_ZN7android13SoftOMXPluginC2Ev() called");
    return 0;
}
