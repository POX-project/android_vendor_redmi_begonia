/*
 * Reverse-Engineered Source for: libmtkcam.eventcallback.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_eventcallback"

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
#include "libmtkcam_eventcallback.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::onImageBufferFinishedCB(int, int, long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_Imp23onImageBufferFinishedCBEiixj(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_Imp23onImageBufferFinishedCBEiixj() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_Imp4initEv(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_Imp4initEv() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::EventCallbackMgr_Imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_ImpC1Ev(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_ImpC1Ev() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_ImpD0Ev(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_ImpD0Ev() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_ImpD2Ev(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_ImpD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::EventCallbackMgr_Imp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam20EventCallbackMgr_ImpE = NULL;

/* Demangled: NSCam::EventCallbackMgr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16EventCallbackMgr11getInstanceEv(void) {
    ALOGD("_ZN5NSCam16EventCallbackMgr11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::registerRequestCB(bool (*)(int, int, unsigned int, unsigned long long)) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_Imp17registerRequestCBEPFbiijyE(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_Imp17registerRequestCBEPFbiijyE() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::onRequestFinishedCB(int, int, long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_Imp19onRequestFinishedCBEiixj(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_Imp19onRequestFinishedCBEiixj() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::EventCallbackMgr_Imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_ImpC2Ev(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_ImpC2Ev() called");
    return 0;
}

/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20EventCallbackMgr_ImpD1Ev(void) {
    ALOGD("_ZN5NSCam20EventCallbackMgr_ImpD1Ev() called");
    return 0;
}
