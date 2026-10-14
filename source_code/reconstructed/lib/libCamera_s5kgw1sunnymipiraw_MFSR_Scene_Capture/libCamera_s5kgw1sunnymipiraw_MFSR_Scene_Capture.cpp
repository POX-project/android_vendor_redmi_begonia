/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_MFSR_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_MFSR_Scene_Capture"

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
#include "libCamera_s5kgw1sunnymipiraw_MFSR_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0430 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0491 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0431 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0480 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0492 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0420 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0432 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0481 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0493 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0421 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0433 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0482 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0494 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0310 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0422 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0434 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0483 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0495 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0311 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0423 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0435 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0484 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0496 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0300 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0312 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0424 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0436 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0485 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0497 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0301 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0313 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0425 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0437 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0486 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0498 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0302 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0314 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0426 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0438 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0487 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0499 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0303 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0315 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0427 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0439 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0488 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0304 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0316 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0428 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0489 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0305 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0317 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0429 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0306 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0318 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0430 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0490 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0307 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0319 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0431 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0491 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0308 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0420 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0432 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0480 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0492 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0309 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0421 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0433 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0481 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0493 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0370 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0422 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0434 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0482 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0494 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0371 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0423 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0435 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0483 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0495 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0360 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0372 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0424 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0436 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0484 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0496 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0310 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0361 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0373 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0425 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0437 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0485 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0497 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0311 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0362 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0374 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0426 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0438 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0486 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0498 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0300 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0312 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0363 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0375 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0427 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0439 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0487 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0499 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0301 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0313 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0364 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0376 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0428 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0488 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0302 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0314 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0365 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0377 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0429 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0489 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0303 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0315 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0366 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0378 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0304 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0316 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0367 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0379 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0305 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0317 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0368 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0306 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0318 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0369 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0307 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0319 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0308 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0309 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0490 = NULL;
