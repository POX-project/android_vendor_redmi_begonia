/*
 * Reverse-Engineered Source for: libCamera_s5k3t1sunnymipiraw_AutoHDR_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t1sunnymipiraw_AutoHDR_Capture"

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
#include "libCamera_s5k3t1sunnymipiraw_AutoHDR_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_PARAM_0004 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_PARAM_0004 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_GMA_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_GMA_0007 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0200 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0250 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0250 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0280 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0280 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0201 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0251 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0251 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0281 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0281 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0202 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0252 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0252 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0282 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0282 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0203 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0240 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0240 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0253 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0253 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0283 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0283 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0204 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0241 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0241 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0254 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0254 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0284 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0284 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0205 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0242 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0242 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0255 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0255 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0285 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0285 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0206 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0243 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0243 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0256 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0256 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0286 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0286 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0207 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0244 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0244 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0257 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0257 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0280 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0280 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0287 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0287 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0208 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0245 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0245 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0258 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0258 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0281 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0281 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0288 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0288 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0209 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0250 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0250 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0246 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0246 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0259 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0259 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0282 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0282 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0289 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0289 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0251 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0251 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0247 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0247 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0283 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0283 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0252 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0252 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0248 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0248 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0284 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0284 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0253 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0253 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0249 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0249 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0285 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0285 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0254 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0254 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0286 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0286 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0255 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0255 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0287 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0287 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0256 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0256 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0288 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0288 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0257 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0257 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0289 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0289 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0258 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0258 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0280 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0280 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0259 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0259 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0281 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0281 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0282 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0282 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DCE_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DCE_0007 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0283 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0283 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0284 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0284 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0285 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0285 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0286 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0286 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0287 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0287 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0288 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0288 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0289 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0289 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AWB_0004 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AWB_0004 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0210 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0290 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0290 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0211 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0291 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0291 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0212 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0292 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0292 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0213 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0250 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0250 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0293 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0293 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0214 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0251 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0251 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0294 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0294 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0215 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0252 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0252 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0295 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0295 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0216 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0253 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0253 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0296 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0296 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0217 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0254 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0254 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0290 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0290 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0297 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0297 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0218 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0255 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0255 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0291 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0291 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0298 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0298 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0219 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0260 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0260 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0256 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0256 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0292 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0292 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0299 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0299 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0261 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0261 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0257 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0257 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0293 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0293 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0262 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0262 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0258 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0258 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0294 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0294 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0263 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0263 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0259 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0259 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0295 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0295 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0264 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0264 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0296 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0296 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0265 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0265 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0297 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0297 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0266 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0266 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0298 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0298 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0267 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0267 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0299 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0299 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0268 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0268 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0290 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0290 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0269 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0269 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0291 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0291 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0292 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0292 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0293 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0293 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0294 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0294 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0295 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0295 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0296 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0296 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0297 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0297 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0298 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0298 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0240 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0240 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0299 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0299 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0241 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0241 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0242 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0242 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0243 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0243 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0244 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0244 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0245 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0245 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0246 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0246 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AE_0005 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0247 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0247 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0248 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0248 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0240 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0240 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0249 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0249 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0241 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0241 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0242 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0242 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0243 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0243 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0244 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0244 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0245 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0245 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0246 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0246 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0247 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0247 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0248 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0248 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0270 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0270 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_LCE_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_LCE_0007 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0249 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0249 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0271 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0271 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0272 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0272 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0273 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0273 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0274 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0274 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0275 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0275 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0276 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0276 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0277 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0277 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0278 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0278 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0279 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0279 = NULL;
