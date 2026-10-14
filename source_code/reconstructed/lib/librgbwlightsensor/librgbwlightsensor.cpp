/*
 * Reverse-Engineered Source for: librgbwlightsensor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "librgbwlightsensor"

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
#include "librgbwlightsensor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::rgbwLightSensorEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21rgbwLightSensorEnableEi(void) {
    ALOGD("_ZN7android21rgbwLightSensorEnableEi() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::frameworks::sensorservice::V1_0::IEventQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_() called");
    return 0;
}

/* Exported Object: gPQSensorDiedUser */
extern "C" __attribute__((visibility("default"))) void* gPQSensorDiedUser = NULL;

/* Exported Object: gPQSensorNotify */
extern "C" __attribute__((visibility("default"))) void* gPQSensorNotify = NULL;

/* Demangled: pqLightSensorInit */
extern "C" __attribute__((visibility("default"))) int pqLightSensorInit(void) {
    ALOGD("pqLightSensorInit() called");
    return 0;
}

/* Demangled: pqSetListener */
extern "C" __attribute__((visibility("default"))) int pqSetListener(void) {
    ALOGD("pqSetListener() called");
    return 0;
}

/* Demangled: android::rgbwLightSensorInit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19rgbwLightSensorInitEv(void) {
    ALOGD("_ZN7android19rgbwLightSensorInitEv() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::frameworks::sensorservice::V1_0::ISensorManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: gPQSensorDied */
extern "C" __attribute__((visibility("default"))) void* gPQSensorDied = NULL;

/* Demangled: pqLightSensorDeInit */
extern "C" __attribute__((visibility("default"))) int pqLightSensorDeInit(void) {
    ALOGD("pqLightSensorDeInit() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::RGBWCallback>::operator=(android::RGBWCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_12RGBWCallbackEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_12RGBWCallbackEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::sp<android::SensorDeathRecipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_20SensorDeathRecipientEED2Ev(void) {
    ALOGD("_ZN7android2spINS_20SensorDeathRecipientEED2Ev() called");
    return 0;
}

/* Exported Object: gPQSensorUser */
extern "C" __attribute__((visibility("default"))) void* gPQSensorUser = NULL;

/* Demangled: pqSetDiedListener */
extern "C" __attribute__((visibility("default"))) int pqSetDiedListener(void) {
    ALOGD("pqSetDiedListener() called");
    return 0;
}

/* Demangled: android::rgbwLightSensorDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21rgbwLightSensorDeInitEv(void) {
    ALOGD("_ZN7android21rgbwLightSensorDeInitEv() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::RGBWCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_12RGBWCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_12RGBWCallbackEED2Ev() called");
    return 0;
}

/* Demangled: pqLightSensorEnable */
extern "C" __attribute__((visibility("default"))) int pqLightSensorEnable(void) {
    ALOGD("pqLightSensorEnable() called");
    return 0;
}
