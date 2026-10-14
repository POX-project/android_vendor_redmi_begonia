/*
 * Reverse-Engineered ABI Specification for: libem_camera_jni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libem_camera_jni.so
 */

#ifndef BEGONIA_RE_LIBEM_CAMERA_JNI_H
#define BEGONIA_RE_LIBEM_CAMERA_JNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Java_com_mediatek_emcamera_CameraJni_getCamHalVersion */
/* Demangled: Java_com_mediatek_emcamera_CameraJni_getCamHalVersion */
int Java_com_mediatek_emcamera_CameraJni_getCamHalVersion(void);

/* Symbol: Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion */
/* Demangled: Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion */
int Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion(void);

/* Symbol: Java_com_mediatek_emcamera_CameraJni_isFeatureSupported */
/* Demangled: Java_com_mediatek_emcamera_CameraJni_isFeatureSupported */
int Java_com_mediatek_emcamera_CameraJni_isFeatureSupported(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBEM_CAMERA_JNI_H */
