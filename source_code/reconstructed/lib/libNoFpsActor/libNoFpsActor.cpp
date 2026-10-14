/*
 * Reverse-Engineered Source for: libNoFpsActor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libNoFpsActor"

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
#include "libNoFpsActor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ARC::Actor::GetOptionFloat(char const*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor14GetOptionFloatEPKcPf(void) {
    ALOGD("_ZN3ARC5Actor14GetOptionFloatEPKcPf() called");
    return 0;
}

/* Demangled: NoFPSActor::PassFpsLimitation(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActor17PassFpsLimitationEi(void) {
    ALOGD("_ZN10NoFPSActor17PassFpsLimitationEi() called");
    return 0;
}

/* Demangled: NoFPSActor::passFpsLimitation(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActor17passFpsLimitationEi(void) {
    ALOGD("_ZN10NoFPSActor17passFpsLimitationEi() called");
    return 0;
}

/* Demangled: NoFPSActor::NoFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActorC2Ev(void) {
    ALOGD("_ZN10NoFPSActorC2Ev() called");
    return 0;
}

/* Demangled: NoFPSActor::~NoFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActorD1Ev(void) {
    ALOGD("_ZN10NoFPSActorD1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<NoFPSActor>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI10NoFPSActorE5sLockE = NULL;

/* Exported Object: android::Singleton<NoFPSActor>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI10NoFPSActorE9sInstanceE = NULL;

/* Demangled: NoFPSActor::~NoFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActorD2Ev(void) {
    ALOGD("_ZN10NoFPSActorD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorEC1Ev() called");
    return 0;
}

/* Demangled: ARC::Actor::GetOptionInt(char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor12GetOptionIntEPKcPi(void) {
    ALOGD("_ZN3ARC5Actor12GetOptionIntEPKcPi() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorED1Ev(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorED1Ev() called");
    return 0;
}

/* Demangled: ARC::Actor::GetStepFramerate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor16GetStepFramerateEi(void) {
    ALOGD("_ZN3ARC5Actor16GetStepFramerateEi() called");
    return 0;
}

/* Demangled: ARC::Actor::GetUserAssignedFramerate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor24GetUserAssignedFramerateEi(void) {
    ALOGD("_ZN3ARC5Actor24GetUserAssignedFramerateEi() called");
    return 0;
}

/* Demangled: PassFpsLimitation */
extern "C" __attribute__((visibility("default"))) int PassFpsLimitation(void) {
    ALOGD("PassFpsLimitation() called");
    return 0;
}

/* Demangled: NoFPSActor::NoFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN10NoFPSActorC1Ev(void) {
    ALOGD("_ZN10NoFPSActorC1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NoFPSActor>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10NoFPSActorED2Ev(void) {
    ALOGD("_ZN7android9SingletonI10NoFPSActorED2Ev() called");
    return 0;
}
