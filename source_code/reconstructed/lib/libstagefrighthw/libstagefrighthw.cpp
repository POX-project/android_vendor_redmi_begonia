/*
 * Reverse-Engineered Source for: libstagefrighthw.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefrighthw"

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
#include "libstagefrighthw.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::MtkOMXPlugin::enumerateComponents(char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPlugin19enumerateComponentsEPcjj(void) {
    ALOGD("_ZN7android12MtkOMXPlugin19enumerateComponentsEPcjj() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::makeComponentInstance(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android12MtkOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::MtkOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPluginC2Ev(void) {
    ALOGD("_ZN7android12MtkOMXPluginC2Ev() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPluginD1Ev(void) {
    ALOGD("_ZN7android12MtkOMXPluginD1Ev() called");
    return 0;
}

/* Demangled: android::createOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15createOMXPluginEv(void) {
    ALOGD("_ZN7android15createOMXPluginEv() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::getRolesOfComponent(char const*, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE(void) {
    ALOGD("_ZN7android12MtkOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::destroyComponentInstance(OMX_COMPONENTTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android12MtkOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::MtkOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPluginC1Ev(void) {
    ALOGD("_ZN7android12MtkOMXPluginC1Ev() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPluginD0Ev(void) {
    ALOGD("_ZN7android12MtkOMXPluginD0Ev() called");
    return 0;
}

/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkOMXPluginD2Ev(void) {
    ALOGD("_ZN7android12MtkOMXPluginD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MtkOMXPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12MtkOMXPluginE = NULL;
