/*
 * Reverse-Engineered Source for: libvcodec_capenc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvcodec_capenc"

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
#include "libvcodec_capenc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: getHEVCAdaptativeEncodeInfo(unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z27getHEVCAdaptativeEncodeInfojPjjjS_(void) {
    ALOGD("_Z27getHEVCAdaptativeEncodeInfojPjjjS_() called");
    return 0;
}

/* Demangled: getHEVCAdaptiveDropFrameCapabiltiy() */
extern "C" __attribute__((visibility("default"))) int _Z34getHEVCAdaptiveDropFrameCapabiltiyv(void) {
    ALOGD("_Z34getHEVCAdaptiveDropFrameCapabiltiyv() called");
    return 0;
}

/* Demangled: enc_unsigned_exp_golomb(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z23enc_unsigned_exp_golombiPiS_(void) {
    ALOGD("_Z23enc_unsigned_exp_golombiPiS_() called");
    return 0;
}

/* Demangled: enc_log2ceil(int) */
extern "C" __attribute__((visibility("default"))) int _Z12enc_log2ceili(void) {
    ALOGD("_Z12enc_log2ceili() called");
    return 0;
}

/* Demangled: H264_GetLevel(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13H264_GetLeveljj(void) {
    ALOGD("_Z13H264_GetLeveljj() called");
    return 0;
}

/* Demangled: HEVC_GetGeneralLevel_idc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24HEVC_GetGeneralLevel_idcj(void) {
    ALOGD("_Z24HEVC_GetGeneralLevel_idcj() called");
    return 0;
}

/* Demangled: getH264AdaptiveDropFrameCapabiltiy() */
extern "C" __attribute__((visibility("default"))) int _Z34getH264AdaptiveDropFrameCapabiltiyv(void) {
    ALOGD("_Z34getH264AdaptiveDropFrameCapabiltiyv() called");
    return 0;
}

/* Demangled: H264_GetProfile(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15H264_GetProfilej(void) {
    ALOGD("_Z15H264_GetProfilej() called");
    return 0;
}

/* Demangled: H264_GetVencDpbSize(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19H264_GetVencDpbSizejjj(void) {
    ALOGD("_Z19H264_GetVencDpbSizejjj() called");
    return 0;
}

/* Demangled: H264_EncodePPS_SW(__VENC_DRV_H264_VIDEO_PROFILE_T, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17H264_EncodePPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_TP25__VENC_DRV_PARAM_BS_BUF_TPi(void) {
    ALOGD("_Z17H264_EncodePPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_TP25__VENC_DRV_PARAM_BS_BUF_TPi() called");
    return 0;
}

/* Demangled: HEVC_EncodeVPS_SW(__VENC_DRV_VIDEO_LEVEL_T, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17HEVC_EncodeVPS_SW24__VENC_DRV_VIDEO_LEVEL_TP25__VENC_DRV_PARAM_BS_BUF_TPi(void) {
    ALOGD("_Z17HEVC_EncodeVPS_SW24__VENC_DRV_VIDEO_LEVEL_TP25__VENC_DRV_PARAM_BS_BUF_TPi() called");
    return 0;
}

/* Demangled: getAdaptativeEncodeInfo(unsigned int, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z23getAdaptativeEncodeInfojjjPj(void) {
    ALOGD("_Z23getAdaptativeEncodeInfojjjPj() called");
    return 0;
}

/* Demangled: getH264ResolutionChangeCapabiltiy() */
extern "C" __attribute__((visibility("default"))) int _Z33getH264ResolutionChangeCapabiltiyv(void) {
    ALOGD("_Z33getH264ResolutionChangeCapabiltiyv() called");
    return 0;
}

/* Demangled: property_get(char const*, char*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12property_getPKcPcS0_(void) {
    ALOGD("_Z12property_getPKcPcS0_() called");
    return 0;
}

/* Demangled: SetcEncodeconfig(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16SetcEncodeconfigii(void) {
    ALOGD("_Z16SetcEncodeconfigii() called");
    return 0;
}

/* Demangled: getHEVCResolutionChangeCapabiltiy() */
extern "C" __attribute__((visibility("default"))) int _Z33getHEVCResolutionChangeCapabiltiyv(void) {
    ALOGD("_Z33getHEVCResolutionChangeCapabiltiyv() called");
    return 0;
}

/* Demangled: enc_putbits(unsigned char*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11enc_putbitsPhPiii(void) {
    ALOGD("_Z11enc_putbitsPhPiii() called");
    return 0;
}

/* Demangled: getH264AdaptativeEncodeInfo(unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z27getH264AdaptativeEncodeInfojPjjjS_jjjjS_S_(void) {
    ALOGD("_Z27getH264AdaptativeEncodeInfojPjjjS_jjjjS_S_() called");
    return 0;
}

/* Demangled: H264_EncodeSPS_SW_Crop(unsigned int, unsigned int, unsigned int, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z22H264_EncodeSPS_SW_CropjjjPhPi(void) {
    ALOGD("_Z22H264_EncodeSPS_SW_CropjjjPhPi() called");
    return 0;
}

/* Demangled: H264_EncodeSPS_SW_VUI(unsigned int, unsigned int, unsigned int, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21H264_EncodeSPS_SW_VUIjjjPhPi(void) {
    ALOGD("_Z21H264_EncodeSPS_SW_VUIjjjPhPi() called");
    return 0;
}

/* Demangled: H264_EncodeSPS_SW(__VENC_DRV_H264_VIDEO_PROFILE_T, __VENC_DRV_VIDEO_LEVEL_T, unsigned int, unsigned int, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17H264_EncodeSPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_T24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi(void) {
    ALOGD("_Z17H264_EncodeSPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_T24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi() called");
    return 0;
}

/* Demangled: HEVC_EncodeSPS_SW(__VENC_DRV_VIDEO_LEVEL_T, unsigned int, unsigned int, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17HEVC_EncodeSPS_SW24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi(void) {
    ALOGD("_Z17HEVC_EncodeSPS_SW24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi() called");
    return 0;
}

/* Demangled: HEVC_EncodePPS_SW(__VENC_DRV_PARAM_BS_BUF_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17HEVC_EncodePPS_SWP25__VENC_DRV_PARAM_BS_BUF_TPi(void) {
    ALOGD("_Z17HEVC_EncodePPS_SWP25__VENC_DRV_PARAM_BS_BUF_TPi() called");
    return 0;
}
