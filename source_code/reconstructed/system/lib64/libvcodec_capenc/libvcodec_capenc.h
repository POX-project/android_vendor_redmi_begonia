/*
 * Reverse-Engineered ABI Specification for: libvcodec_capenc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libvcodec_capenc.so
 */

#ifndef BEGONIA_RE_LIBVCODEC_CAPENC_H
#define BEGONIA_RE_LIBVCODEC_CAPENC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z27getHEVCAdaptativeEncodeInfojPjjjS_ */
/* Demangled: getHEVCAdaptativeEncodeInfo(unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int*) */
int _Z27getHEVCAdaptativeEncodeInfojPjjjS_(void);

/* Symbol: _Z34getHEVCAdaptiveDropFrameCapabiltiyv */
/* Demangled: getHEVCAdaptiveDropFrameCapabiltiy() */
int _Z34getHEVCAdaptiveDropFrameCapabiltiyv(void);

/* Symbol: _Z23enc_unsigned_exp_golombiPiS_ */
/* Demangled: enc_unsigned_exp_golomb(int, int*, int*) */
int _Z23enc_unsigned_exp_golombiPiS_(void);

/* Symbol: _Z12enc_log2ceili */
/* Demangled: enc_log2ceil(int) */
int _Z12enc_log2ceili(void);

/* Symbol: _Z13H264_GetLeveljj */
/* Demangled: H264_GetLevel(unsigned int, unsigned int) */
int _Z13H264_GetLeveljj(void);

/* Symbol: _Z24HEVC_GetGeneralLevel_idcj */
/* Demangled: HEVC_GetGeneralLevel_idc(unsigned int) */
int _Z24HEVC_GetGeneralLevel_idcj(void);

/* Symbol: _Z34getH264AdaptiveDropFrameCapabiltiyv */
/* Demangled: getH264AdaptiveDropFrameCapabiltiy() */
int _Z34getH264AdaptiveDropFrameCapabiltiyv(void);

/* Symbol: _Z15H264_GetProfilej */
/* Demangled: H264_GetProfile(unsigned int) */
int _Z15H264_GetProfilej(void);

/* Symbol: _Z19H264_GetVencDpbSizejjj */
/* Demangled: H264_GetVencDpbSize(unsigned int, unsigned int, unsigned int) */
int _Z19H264_GetVencDpbSizejjj(void);

/* Symbol: _Z17H264_EncodePPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_TP25__VENC_DRV_PARAM_BS_BUF_TPi */
/* Demangled: H264_EncodePPS_SW(__VENC_DRV_H264_VIDEO_PROFILE_T, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
int _Z17H264_EncodePPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_TP25__VENC_DRV_PARAM_BS_BUF_TPi(void);

/* Symbol: _Z17HEVC_EncodeVPS_SW24__VENC_DRV_VIDEO_LEVEL_TP25__VENC_DRV_PARAM_BS_BUF_TPi */
/* Demangled: HEVC_EncodeVPS_SW(__VENC_DRV_VIDEO_LEVEL_T, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
int _Z17HEVC_EncodeVPS_SW24__VENC_DRV_VIDEO_LEVEL_TP25__VENC_DRV_PARAM_BS_BUF_TPi(void);

/* Symbol: _Z23getAdaptativeEncodeInfojjjPj */
/* Demangled: getAdaptativeEncodeInfo(unsigned int, unsigned int, unsigned int, unsigned int*) */
int _Z23getAdaptativeEncodeInfojjjPj(void);

/* Symbol: _Z33getH264ResolutionChangeCapabiltiyv */
/* Demangled: getH264ResolutionChangeCapabiltiy() */
int _Z33getH264ResolutionChangeCapabiltiyv(void);

/* Symbol: _Z12property_getPKcPcS0_ */
/* Demangled: property_get(char const*, char*, char const*) */
int _Z12property_getPKcPcS0_(void);

/* Symbol: _Z16SetcEncodeconfigii */
/* Demangled: SetcEncodeconfig(int, int) */
int _Z16SetcEncodeconfigii(void);

/* Symbol: _Z33getHEVCResolutionChangeCapabiltiyv */
/* Demangled: getHEVCResolutionChangeCapabiltiy() */
int _Z33getHEVCResolutionChangeCapabiltiyv(void);

/* Symbol: _Z11enc_putbitsPhPiii */
/* Demangled: enc_putbits(unsigned char*, int*, int, int) */
int _Z11enc_putbitsPhPiii(void);

/* Symbol: _Z27getH264AdaptativeEncodeInfojPjjjS_jjjjS_S_ */
/* Demangled: getH264AdaptativeEncodeInfo(unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
int _Z27getH264AdaptativeEncodeInfojPjjjS_jjjjS_S_(void);

/* Symbol: _Z22H264_EncodeSPS_SW_CropjjjPhPi */
/* Demangled: H264_EncodeSPS_SW_Crop(unsigned int, unsigned int, unsigned int, unsigned char*, int*) */
int _Z22H264_EncodeSPS_SW_CropjjjPhPi(void);

/* Symbol: _Z21H264_EncodeSPS_SW_VUIjjjPhPi */
/* Demangled: H264_EncodeSPS_SW_VUI(unsigned int, unsigned int, unsigned int, unsigned char*, int*) */
int _Z21H264_EncodeSPS_SW_VUIjjjPhPi(void);

/* Symbol: _Z17H264_EncodeSPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_T24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi */
/* Demangled: H264_EncodeSPS_SW(__VENC_DRV_H264_VIDEO_PROFILE_T, __VENC_DRV_VIDEO_LEVEL_T, unsigned int, unsigned int, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
int _Z17H264_EncodeSPS_SW31__VENC_DRV_H264_VIDEO_PROFILE_T24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi(void);

/* Symbol: _Z17HEVC_EncodeSPS_SW24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi */
/* Demangled: HEVC_EncodeSPS_SW(__VENC_DRV_VIDEO_LEVEL_T, unsigned int, unsigned int, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*, int*) */
int _Z17HEVC_EncodeSPS_SW24__VENC_DRV_VIDEO_LEVEL_TjjjP25__VENC_DRV_PARAM_BS_BUF_TPi(void);

/* Symbol: _Z17HEVC_EncodePPS_SWP25__VENC_DRV_PARAM_BS_BUF_TPi */
/* Demangled: HEVC_EncodePPS_SW(__VENC_DRV_PARAM_BS_BUF_T*, int*) */
int _Z17HEVC_EncodePPS_SWP25__VENC_DRV_PARAM_BS_BUF_TPi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVCODEC_CAPENC_H */
