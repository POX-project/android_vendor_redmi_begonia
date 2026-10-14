/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Zoom_Video_2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Zoom_Video_2"

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
#include "libCamera_ov8856sunnymipiraw_Zoom_Video_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_EE_0368 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0368 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0285 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0285 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0297 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0297 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0369 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0369 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0286 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0286 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0298 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0298 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0410 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0410 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0287 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0287 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0299 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0299 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0411 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0411 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0288 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0288 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0400 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0400 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0412 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0412 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0289 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0289 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0401 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0401 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0413 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0413 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0402 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0402 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0414 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0414 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0403 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0403 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0415 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0415 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0370 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0370 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0404 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0404 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0416 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0416 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0410 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0410 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0330 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0330 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0371 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0371 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0405 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0405 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0417 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0417 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0411 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0411 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0331 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0331 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0360 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0360 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0372 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0372 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0406 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0406 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0418 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0418 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0400 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0400 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0412 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0412 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0320 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0320 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0332 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0332 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0361 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0361 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0373 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0373 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0407 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0407 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0419 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0419 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0401 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0401 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0413 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0413 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0321 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0321 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0333 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0333 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0362 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0362 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0374 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0374 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0408 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0408 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0402 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0402 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0414 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0414 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0322 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0322 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0334 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0334 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0363 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0363 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0375 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0375 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0409 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0409 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0403 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0403 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0415 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0415 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0323 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0323 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0335 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0335 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0364 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0364 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0376 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0376 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0404 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0404 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0416 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0416 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0324 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0324 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0336 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0336 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0365 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0365 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0377 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0377 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0405 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0405 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0417 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0417 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0325 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0325 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0337 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0337 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0366 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0366 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0378 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0378 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0406 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0406 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0418 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0418 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0326 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0326 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0338 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0338 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0367 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0367 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0379 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0379 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0407 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0407 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0419 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0419 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0327 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0327 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0339 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0339 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0368 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0368 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0408 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0408 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0328 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0328 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0369 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0369 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0409 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0409 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0329 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0329 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0290 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0290 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0291 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0291 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0280 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0280 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0292 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0292 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0370 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0370 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0281 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0281 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0293 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0293 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0371 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0371 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0282 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0282 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0294 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0294 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0360 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0360 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0372 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0372 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0283 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0283 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0295 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0295 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0361 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0361 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0373 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0373 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0284 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0284 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0296 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0296 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0290 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0290 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0362 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0362 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0374 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0374 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0285 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0285 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0297 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0297 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0291 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0291 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0363 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0363 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0375 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0375 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0286 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0286 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0298 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0298 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0280 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0280 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0292 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0292 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0364 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0364 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0376 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0376 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0287 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0287 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0299 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0299 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0281 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0281 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0293 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0293 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0365 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0365 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0377 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0377 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0288 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0288 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0282 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0282 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0294 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0294 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0366 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0366 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0378 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0378 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0289 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0289 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0283 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0283 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0295 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0295 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0367 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0367 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0379 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0379 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0284 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0284 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0296 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0296 = NULL;
