/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom1"

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
#include "libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0669 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0669 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0367 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0379 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0368 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0369 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0370 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0371 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0360 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0372 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0361 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0373 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0362 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0374 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0008 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0670 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0670 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0363 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0375 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0671 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0671 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0364 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0376 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0660 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0660 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0672 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0672 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0365 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0377 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0661 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0661 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0673 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0673 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0366 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0378 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0662 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0662 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0674 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0674 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0367 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0379 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0663 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0663 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0675 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0675 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0368 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0664 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0664 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0676 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0676 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0369 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0665 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0665 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0677 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0677 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0666 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0666 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0678 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0678 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0470 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0667 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0667 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0679 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0679 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0471 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0668 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0668 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0460 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0472 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0669 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0669 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0461 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0473 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0462 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0474 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0670 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0670 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0463 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0475 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0671 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0671 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0464 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0476 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0660 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0660 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0672 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0672 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0370 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0465 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0477 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0661 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0661 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0673 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0673 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0371 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0466 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0478 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0662 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0662 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0674 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0674 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0360 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0372 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0467 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0479 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0663 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0663 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0675 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0675 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0361 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0373 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0468 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0664 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0664 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0676 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0676 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0362 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0374 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0469 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0665 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0665 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0677 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0677 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0363 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0375 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0666 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0666 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0678 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0678 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0364 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0376 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0667 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0667 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0679 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0679 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0365 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0377 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0668 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0668 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0366 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0378 = NULL;
