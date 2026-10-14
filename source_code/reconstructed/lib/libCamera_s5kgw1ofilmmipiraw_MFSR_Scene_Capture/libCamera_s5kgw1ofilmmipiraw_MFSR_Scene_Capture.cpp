/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_MFSR_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_MFSR_Scene_Capture"

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
#include "libCamera_s5kgw1ofilmmipiraw_MFSR_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0282 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0294 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0283 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0295 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0284 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0296 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0285 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0297 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0350 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0286 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0298 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0351 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0287 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0299 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0340 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0352 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0288 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0341 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0353 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0289 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0342 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0354 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0343 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0355 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0344 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0356 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0345 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0357 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0346 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0358 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0410 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0347 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0359 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0410 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0411 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0348 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0411 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0400 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0412 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0478 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0290 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0349 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0400 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0412 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0401 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0413 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0291 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0401 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0413 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0402 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0414 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0280 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0292 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0402 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0414 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0403 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0415 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0281 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0293 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0403 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0415 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0404 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0416 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0282 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0294 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0404 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0416 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0405 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0417 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0283 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0295 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0405 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0417 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0406 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0418 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0284 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0296 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0406 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0418 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0407 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0419 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0285 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0297 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0407 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0419 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0408 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0286 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0298 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0408 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0409 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0287 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0299 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0409 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0288 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0289 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0478 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0290 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0291 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0280 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0292 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0281 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0293 = NULL;
