/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Scene_Preview_Zoom1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Scene_Preview_Zoom1"

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
#include "libCamera_s5kgw1ofilmmipiraw_Scene_Preview_Zoom1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0642 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0654 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0347 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0359 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0643 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0655 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0348 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0644 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0656 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0349 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0645 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0657 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0646 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0658 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0647 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0659 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0648 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0649 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0450 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AE_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AE_0008 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0550 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0350 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0451 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0550 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0551 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0351 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0440 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0452 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0551 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0540 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0552 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0340 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0352 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0441 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0453 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0540 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0552 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0541 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0553 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0341 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0353 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0442 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0454 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0541 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0553 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0542 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0554 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0342 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0354 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0443 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0455 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0542 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0554 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0543 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0555 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0343 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0355 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0444 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0456 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0543 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0555 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0544 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0556 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0344 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0356 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0445 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0457 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0544 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0556 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0545 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0557 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0345 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0357 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0446 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0458 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0545 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0557 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0546 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0558 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0346 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0358 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0447 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0459 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0546 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0558 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0547 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0559 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0347 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0359 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0448 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0547 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0559 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0548 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0650 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0348 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0449 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0548 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0549 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0651 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0349 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0549 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0640 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0652 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0641 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0653 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0642 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0654 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0643 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0655 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0644 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0656 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0645 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0657 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0646 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0658 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0350 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0647 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0659 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0351 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0648 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0340 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0352 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0649 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0341 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0353 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0342 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0354 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0650 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0343 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0355 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0651 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0344 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0356 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0640 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0652 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0345 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0357 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0641 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0653 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0346 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0358 = NULL;
