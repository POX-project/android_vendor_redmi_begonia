/*
 * Reverse-Engineered ABI Specification for: libcamera_scene.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamera_scene.so
 */

#ifndef BEGONIA_RE_LIBCAMERA_SCENE_H
#define BEGONIA_RE_LIBCAMERA_SCENE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7MiAILab19SetCameraSceneModelEPKci */
/* Demangled: MiAILab::SetCameraSceneModel(char const*, int) */
int _ZN7MiAILab19SetCameraSceneModelEPKci(void);

/* Symbol: _ZN7MiAILab23SetMoonTriggerConditionEfiiiii */
/* Demangled: MiAILab::SetMoonTriggerCondition(float, int, int, int, int, int) */
int _ZN7MiAILab23SetMoonTriggerConditionEfiiiii(void);

/* Symbol: _ZN7MiAILab19SetCameraSceneModelEPKcNS_9ModelTypeE */
/* Demangled: MiAILab::SetCameraSceneModel(char const*, MiAILab::ModelType) */
int _ZN7MiAILab19SetCameraSceneModelEPKcNS_9ModelTypeE(void);

/* Symbol: _ZN7MiAILab28GetCameraSceneNetAsyncResultERf */
/* Demangled: MiAILab::GetCameraSceneNetAsyncResult(float&) */
int _ZN7MiAILab28GetCameraSceneNetAsyncResultERf(void);

/* Symbol: _ZN7MiAILab14scene_classify21HasWideAngleRecommendEv */
/* Demangled: MiAILab::scene_classify::HasWideAngleRecommend() */
int _ZN7MiAILab14scene_classify21HasWideAngleRecommendEv(void);

/* Symbol: _ZN7MiAILab7SetZoomEf */
/* Demangled: MiAILab::SetZoom(float) */
int _ZN7MiAILab7SetZoomEf(void);

/* Symbol: _ZN7MiAILab12rgb2yuv_neonEPhS0_S0_iiii */
/* Demangled: MiAILab::rgb2yuv_neon(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
int _ZN7MiAILab12rgb2yuv_neonEPhS0_S0_iiii(void);

/* Symbol: _ZN7MiAILab11SetMoonModeEb */
/* Demangled: MiAILab::SetMoonMode(bool) */
int _ZN7MiAILab11SetMoonModeEb(void);

/* Symbol: _ZN7MiAILab18SetAdspLibraryPathEPKc */
/* Demangled: MiAILab::SetAdspLibraryPath(char const*) */
int _ZN7MiAILab18SetAdspLibraryPathEPKc(void);

/* Symbol: _ZN7MiAILab20InitCameraSceneModelEPKcS1_bi */
/* Demangled: MiAILab::InitCameraSceneModel(char const*, char const*, bool, int) */
int _ZN7MiAILab20InitCameraSceneModelEPKcS1_bi(void);

/* Symbol: _ZN7MiAILab20InitCameraSceneModelEPKcS1_b */
/* Demangled: MiAILab::InitCameraSceneModel(char const*, char const*, bool) */
int _ZN7MiAILab20InitCameraSceneModelEPKcS1_b(void);

/* Symbol: MIBOCKEH_1.0 */
/* Demangled: MIBOCKEH_1.0 */
extern void* obj_MIBOCKEH_1_0 __asm__("MIBOCKEH_1.0");

/* Symbol: _ZN7MiAILab20InitCameraSceneModelEv */
/* Demangled: MiAILab::InitCameraSceneModel() */
int _ZN7MiAILab20InitCameraSceneModelEv(void);

/* Symbol: _ZN7MiAILab21SetMaxZoomTriggerMoonEf */
/* Demangled: MiAILab::SetMaxZoomTriggerMoon(float) */
int _ZN7MiAILab21SetMaxZoomTriggerMoonEf(void);

/* Symbol: _ZN7MiAILab6SetIsoEi */
/* Demangled: MiAILab::SetIso(int) */
int _ZN7MiAILab6SetIsoEi(void);

/* Symbol: _ZN7MiAILab23ReleaseCameraSceneModelEPv */
/* Demangled: MiAILab::ReleaseCameraSceneModel(void*) */
int _ZN7MiAILab23ReleaseCameraSceneModelEPv(void);

/* Symbol: _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhS2_iiiiRfb */
/* Demangled: MiAILab::ForwardCameraSceneNetAsync(void*, unsigned char const*, unsigned char const*, int, int, int, int, float&, bool) */
int _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhS2_iiiiRfb(void);

/* Symbol: _ZN7MiAILab31ForwardCameraSceneNetWithScoresEPvPKhiiiiRfPfb */
/* Demangled: MiAILab::ForwardCameraSceneNetWithScores(void*, unsigned char const*, int, int, int, int, float&, float*, bool) */
int _ZN7MiAILab31ForwardCameraSceneNetWithScoresEPvPKhiiiiRfPfb(void);

/* Symbol: _ZN7MiAILab21HasWideAngleRecommendEv */
/* Demangled: MiAILab::HasWideAngleRecommend() */
int _ZN7MiAILab21HasWideAngleRecommendEv(void);

/* Symbol: _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhiiiiRfb */
/* Demangled: MiAILab::ForwardCameraSceneNetAsync(void*, unsigned char const*, int, int, int, int, float&, bool) */
int _ZN7MiAILab26ForwardCameraSceneNetAsyncEPvPKhiiiiRfb(void);

/* Symbol: _ZN7MiAILab24InitCameraSceneModelSyncEPKc */
/* Demangled: MiAILab::InitCameraSceneModelSync(char const*) */
int _ZN7MiAILab24InitCameraSceneModelSyncEPKc(void);

/* Symbol: _ZN7MiAILab21ForwardCameraSceneNetEPvPKhS2_iiiiRfb */
/* Demangled: MiAILab::ForwardCameraSceneNet(void*, unsigned char const*, unsigned char const*, int, int, int, int, float&, bool) */
int _ZN7MiAILab21ForwardCameraSceneNetEPvPKhS2_iiiiRfb(void);

/* Symbol: _ZN7MiAILab21ForwardCameraSceneNetEPvPKhiiiiRfb */
/* Demangled: MiAILab::ForwardCameraSceneNet(void*, unsigned char const*, int, int, int, int, float&, bool) */
int _ZN7MiAILab21ForwardCameraSceneNetEPvPKhiiiiRfb(void);

/* Symbol: _ZN7MiAILab7SetZoomENS_9ZoomValueE */
/* Demangled: MiAILab::SetZoom(MiAILab::ZoomValue) */
int _ZN7MiAILab7SetZoomENS_9ZoomValueE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMERA_SCENE_H */
