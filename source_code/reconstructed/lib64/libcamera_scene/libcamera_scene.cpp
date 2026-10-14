/*
 * Reverse-Engineered Source for: libcamera_scene.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamera_scene"

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
#include "libcamera_scene.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MiAILab::SetCameraSceneModel(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab19SetCameraSceneModelEPKci(void) {
    ALOGD("_ZN7MiAILab19SetCameraSceneModelEPKci() called");
    return 0;
}

/* Demangled: MiAILab::SetMoonTriggerCondition(float, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab23SetMoonTriggerConditionEfiiiii(void) {
    ALOGD("_ZN7MiAILab23SetMoonTriggerConditionEfiiiii() called");
    return 0;
}

/* Demangled: MiAILab::SetCameraSceneModel(char const*, MiAILab::ModelType) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab19SetCameraSceneModelEPKcNS_9ModelTypeE(void) {
    ALOGD("_ZN7MiAILab19SetCameraSceneModelEPKcNS_9ModelTypeE() called");
    return 0;
}

/* Demangled: MiAILab::GetCameraSceneNetAsyncResult(float&) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab28GetCameraSceneNetAsyncResultERf(void) {
    ALOGD("_ZN7MiAILab28GetCameraSceneNetAsyncResultERf() called");
    return 0;
}

/* Demangled: MiAILab::scene_classify::HasWideAngleRecommend() */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab14scene_classify21HasWideAngleRecommendEv(void) {
    ALOGD("_ZN7MiAILab14scene_classify21HasWideAngleRecommendEv() called");
    return 0;
}

/* Demangled: MiAILab::SetZoom(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab7SetZoomEf(void) {
    ALOGD("_ZN7MiAILab7SetZoomEf() called");
    return 0;
}

/* Demangled: MiAILab::rgb2yuv_neon(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab12rgb2yuv_neonEPhS0_S0_iiii(void) {
    ALOGD("_ZN7MiAILab12rgb2yuv_neonEPhS0_S0_iiii() called");
    return 0;
}

/* Demangled: MiAILab::SetMoonMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab11SetMoonModeEb(void) {
    ALOGD("_ZN7MiAILab11SetMoonModeEb() called");
    return 0;
}

/* Demangled: MiAILab::SetAdspLibraryPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab18SetAdspLibraryPathEPKc(void) {
    ALOGD("_ZN7MiAILab18SetAdspLibraryPathEPKc() called");
    return 0;
}

/* Demangled: MiAILab::InitCameraSceneModel(char const*, char const*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab20InitCameraSceneModelEPKcS1_bi(void) {
    ALOGD("_ZN7MiAILab20InitCameraSceneModelEPKcS1_bi() called");
    return 0;
}

/* Demangled: MiAILab::InitCameraSceneModel(char const*, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab20InitCameraSceneModelEPKcS1_b(void) {
    ALOGD("_ZN7MiAILab20InitCameraSceneModelEPKcS1_b() called");
    return 0;
}

/* Exported Object: MIBOCKEH_1.0 */
extern "C" __attribute__((visibility("default"))) void* obj_MIBOCKEH_1_0 __asm__("MIBOCKEH_1.0") = NULL;

/* Demangled: MiAILab::InitCameraSceneModel() */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab20InitCameraSceneModelEv(void) {
    ALOGD("_ZN7MiAILab20InitCameraSceneModelEv() called");
    return 0;
}

/* Demangled: MiAILab::SetMaxZoomTriggerMoon(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab21SetMaxZoomTriggerMoonEf(void) {
    ALOGD("_ZN7MiAILab21SetMaxZoomTriggerMoonEf() called");
    return 0;
}

/* Demangled: MiAILab::SetIso(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab6SetIsoEi(void) {
    ALOGD("_ZN7MiAILab6SetIsoEi() called");
    return 0;
}

/* Demangled: MiAILab::ReleaseCameraSceneModel(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab23ReleaseCameraSceneModelEPv(void) {
    ALOGD("_ZN7MiAILab23ReleaseCameraSceneModelEPv() called");
    return 0;
}

/* Demangled: MiAILab::ForwardCameraSceneNetAsync(void*, unsigned char const*, unsigned char const*, int, int, int, int, float&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhS2_iiiiRfb(void) {
    ALOGD("_ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhS2_iiiiRfb() called");
    return 0;
}

/* Demangled: MiAILab::ForwardCameraSceneNetWithScores(void*, unsigned char const*, int, int, int, int, float&, float*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab31ForwardCameraSceneNetWithScoresEPvPKhiiiiRfPfb(void) {
    ALOGD("_ZN7MiAILab31ForwardCameraSceneNetWithScoresEPvPKhiiiiRfPfb() called");
    return 0;
}

/* Demangled: MiAILab::HasWideAngleRecommend() */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab21HasWideAngleRecommendEv(void) {
    ALOGD("_ZN7MiAILab21HasWideAngleRecommendEv() called");
    return 0;
}

/* Demangled: MiAILab::ForwardCameraSceneNetAsync(void*, unsigned char const*, int, int, int, int, float&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhiiiiRfb(void) {
    ALOGD("_ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhiiiiRfb() called");
    return 0;
}

/* Demangled: MiAILab::InitCameraSceneModelSync(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab24InitCameraSceneModelSyncEPKc(void) {
    ALOGD("_ZN7MiAILab24InitCameraSceneModelSyncEPKc() called");
    return 0;
}

/* Demangled: MiAILab::ForwardCameraSceneNet(void*, unsigned char const*, unsigned char const*, int, int, int, int, float&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab21ForwardCameraSceneNetEPvPKhS2_iiiiRfb(void) {
    ALOGD("_ZN7MiAILab21ForwardCameraSceneNetEPvPKhS2_iiiiRfb() called");
    return 0;
}

/* Demangled: MiAILab::ForwardCameraSceneNet(void*, unsigned char const*, int, int, int, int, float&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab21ForwardCameraSceneNetEPvPKhiiiiRfb(void) {
    ALOGD("_ZN7MiAILab21ForwardCameraSceneNetEPvPKhiiiiRfb() called");
    return 0;
}

/* Demangled: MiAILab::SetZoom(MiAILab::ZoomValue) */
extern "C" __attribute__((visibility("default"))) int _ZN7MiAILab7SetZoomENS_9ZoomValueE(void) {
    ALOGD("_ZN7MiAILab7SetZoomENS_9ZoomValueE() called");
    return 0;
}
