/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture_Zoom1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture_Zoom1"

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
#include "libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture_Zoom1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_EE_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0286 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0298 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0287 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0299 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0288 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0289 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0290 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0291 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0280 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0292 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0281 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0293 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0282 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0294 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0171 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0283 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0295 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0284 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0296 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0285 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0297 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0286 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0298 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0287 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0299 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0288 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0289 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0290 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0291 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0280 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0292 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0281 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0293 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0282 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0294 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0283 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0295 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0284 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0296 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0285 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0297 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0171 = NULL;
