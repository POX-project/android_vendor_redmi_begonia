/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_portrait_capture_full.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_portrait_capture_full"

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
#include "libCamera_s5kgw1sunnymipiraw_portrait_capture_full.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_MFB_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0280 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0281 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0282 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0283 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0270 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0284 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0271 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0285 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0272 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0286 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0273 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0287 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0274 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0288 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0275 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0289 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0276 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0310 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0277 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0311 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0278 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0312 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0279 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0313 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0300 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0314 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0301 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_THRES_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_THRES_0004 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0315 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0302 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0316 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0303 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0317 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0304 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0171 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0318 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0305 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0319 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0306 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0307 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0308 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0309 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFNR_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFNR_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0120 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0290 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0121 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0291 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0122 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0292 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0123 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0293 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0280 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0124 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0294 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0281 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0125 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0295 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0282 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0126 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0296 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0283 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0127 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0260 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0297 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0284 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0128 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0261 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0298 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0285 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0129 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0262 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0299 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0286 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0263 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0287 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0264 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0288 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0265 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0289 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0266 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0310 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0005 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0267 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0311 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0268 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0312 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0269 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0313 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0314 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0120 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0315 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0121 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0316 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0122 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0317 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0123 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0318 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0124 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0319 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0125 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0126 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0127 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0005 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0128 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0129 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0080 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0081 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0082 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0083 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0084 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0130 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0085 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0131 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0086 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0132 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0087 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0133 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0290 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0088 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0134 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0291 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0089 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0135 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0292 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0136 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0293 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0137 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0270 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0294 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0138 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0271 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0295 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0139 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0272 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0296 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0273 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0260 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0297 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0274 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0261 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0298 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0005 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0275 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0262 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0299 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0276 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0263 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0277 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0264 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0278 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0265 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0279 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0266 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0300 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0267 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0130 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0301 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0268 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0131 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0302 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0269 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0132 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0303 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0133 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0304 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0134 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0305 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0135 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0306 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0136 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0307 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0137 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0308 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0138 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0309 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0139 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0090 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0091 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0092 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0093 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0094 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0095 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0096 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0097 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0098 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0099 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0041 = NULL;
