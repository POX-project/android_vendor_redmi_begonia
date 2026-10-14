/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_SuperNS_Face_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_SuperNS_Face_Preview"

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
#include "libCamera_s5kgw1sunnymipiraw_SuperNS_Face_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0405 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0417 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0406 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0418 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0407 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0419 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0408 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0409 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0290 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0291 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0280 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0292 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0281 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0293 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0282 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0294 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0283 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0295 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0284 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0296 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0285 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0297 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0410 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0286 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0298 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0411 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0287 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0299 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0400 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0412 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0288 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0401 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0413 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0289 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0402 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0414 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0403 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0415 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0404 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0416 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0405 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0417 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0406 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0418 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0407 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0419 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0408 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0409 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0410 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0411 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0400 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0412 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0401 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0413 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0402 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0414 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0403 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0415 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0404 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0416 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0234 = NULL;
