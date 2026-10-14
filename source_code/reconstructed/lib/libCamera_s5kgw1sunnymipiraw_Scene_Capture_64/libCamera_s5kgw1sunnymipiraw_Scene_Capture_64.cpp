/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Scene_Capture_64.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Scene_Capture_64"

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
#include "libCamera_s5kgw1sunnymipiraw_Scene_Capture_64.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0442 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0501 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0478 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0074 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0071 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0537 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0402 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0443 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0502 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0479 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0075 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0072 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0538 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0403 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0444 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0503 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0480 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0076 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0073 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0539 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0404 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0445 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0504 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0481 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0077 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0074 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0405 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0446 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0505 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0482 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0078 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0075 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0406 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0447 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0506 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0483 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0079 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0076 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0407 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0448 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0507 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0484 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0077 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0408 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0449 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0508 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0485 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0078 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0409 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0450 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0509 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0486 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0079 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0451 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0487 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0452 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0488 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0453 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0489 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0454 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0455 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0380 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0456 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0381 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0457 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0382 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFNR_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFNR_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0458 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0383 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0459 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0384 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0100 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0385 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0101 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0510 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0386 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0102 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0511 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0387 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0103 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0512 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0388 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0104 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_THRES_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_THRES_0005 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0513 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0389 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0105 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0514 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0106 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0515 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0107 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0516 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0480 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0108 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0517 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0481 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0109 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0518 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0482 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0519 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0483 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0484 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0485 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0450 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0486 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0410 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0451 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0510 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0487 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0411 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0452 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0511 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0488 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0412 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0453 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0512 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0489 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0413 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0454 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0513 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0490 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0414 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0455 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0514 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0491 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0415 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0456 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0515 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0492 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0416 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0457 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0516 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0493 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0417 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0458 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0517 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0494 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0418 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0459 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0518 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0495 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0419 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0519 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0460 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0496 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AWB_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AWB_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0461 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0497 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0462 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0498 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0463 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0499 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0464 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0390 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0465 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0391 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0466 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0392 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0467 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0393 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0468 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0394 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0469 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0110 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0395 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0111 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0396 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0520 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0112 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0397 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0521 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0113 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0398 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0522 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0114 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0399 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0523 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0115 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0524 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0116 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0525 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0117 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0490 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0526 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0118 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0491 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0527 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0119 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0492 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0528 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0493 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0529 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0494 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0495 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0460 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0496 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0461 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0497 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0520 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0462 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0498 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0521 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0463 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0499 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0522 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0464 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0060 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0523 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0465 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0061 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0524 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0466 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0062 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0525 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0467 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0063 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0060 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0526 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0468 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0064 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0061 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0527 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0469 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0065 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0062 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0528 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0470 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0066 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0063 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0529 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0471 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0067 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0064 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0472 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0068 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0065 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0473 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0069 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0066 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0474 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0067 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0475 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0068 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0440 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0476 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0069 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0441 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0477 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0442 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0478 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0443 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0479 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0444 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0445 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0530 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0446 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0531 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0447 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0532 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0448 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0533 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0449 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0534 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0535 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0500 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0536 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0501 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0537 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0502 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0538 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0503 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0539 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0504 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0505 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0506 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0470 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0507 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0471 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0530 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0508 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0472 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0531 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0509 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0473 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0532 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0474 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0070 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0533 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0475 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0071 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0534 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0440 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0476 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0072 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0535 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0400 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0441 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0500 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0477 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0073 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0070 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0536 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0401 = NULL;
