/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Scene_Capture_64.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Scene_Capture_64"

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
#include "libCamera_s5kgw1ofilmmipiraw_Scene_Capture_64.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0371 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0072 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0558 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0372 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0073 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0559 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0373 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0074 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0374 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0075 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0375 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0450 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0076 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0376 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0451 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0077 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0377 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0452 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0078 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0378 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0440 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0453 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0079 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0379 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0441 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0454 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0442 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0478 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0455 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0420 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0443 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0456 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0421 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0444 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0457 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0422 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0445 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0458 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0423 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0446 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0459 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0110 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0424 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0447 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0111 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0425 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0448 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0070 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0112 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0426 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0449 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0071 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0113 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0427 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0072 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0114 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0428 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0073 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0115 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0429 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0074 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0116 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0075 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0117 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0076 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0118 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0077 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0119 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0078 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0079 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_THRES_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_THRES_0005 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0380 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0381 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0382 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0383 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0384 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0385 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0386 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0387 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0450 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0388 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0451 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0389 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0452 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0430 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0453 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0431 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0454 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0432 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0455 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0420 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0433 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0456 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0421 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0434 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0457 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0422 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0435 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0458 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0423 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0436 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0459 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0424 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0437 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0425 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0438 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0540 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0426 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0439 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0541 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0427 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0542 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0428 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0543 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0429 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0544 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0545 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0546 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0547 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0548 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0549 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AWB_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AWB_0003 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0540 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0541 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0390 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0542 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0391 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0543 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0392 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0544 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0393 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0545 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0394 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0060 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0546 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0395 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0360 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0061 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0547 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0396 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0361 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0062 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0548 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0397 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0362 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0063 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0549 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0398 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0363 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0064 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0399 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0364 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0065 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0365 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0440 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0066 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0366 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0441 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0067 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0367 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0442 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0478 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0068 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0430 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0368 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0443 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0069 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0431 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0369 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0444 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0432 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0445 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0433 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0446 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0434 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0447 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFNR_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFNR_0003 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0435 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0448 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0550 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0436 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0449 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0551 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0100 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0437 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0552 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0101 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0438 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0060 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0553 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0102 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0439 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0061 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0554 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0103 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0062 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0555 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0104 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0063 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0556 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0105 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0064 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0557 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0106 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0065 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0558 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0107 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0066 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0559 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0108 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0067 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0109 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0068 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0069 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0550 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0551 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0552 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0553 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0554 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0555 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0070 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0556 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0370 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0071 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0557 = NULL;
