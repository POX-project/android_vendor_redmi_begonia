/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom2"

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
#include "libCamera_s5kgw1sunnymipiraw_Scene_Preview_Zoom2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0390 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0391 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0380 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0392 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0381 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0393 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0382 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0394 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0690 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0383 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0395 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0594 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0691 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0384 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0396 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0680 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0692 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0385 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0397 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0681 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0693 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0386 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0398 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0597 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0682 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0694 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0387 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0399 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0683 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0695 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0388 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0684 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0696 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0389 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0685 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0697 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0686 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0698 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0490 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0687 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0699 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0491 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0688 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0480 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0492 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0689 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0481 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0493 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0482 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0494 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0690 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0483 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0495 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0691 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0484 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0496 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0680 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0692 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0390 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0485 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0497 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0681 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0693 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0391 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0486 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0498 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0682 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0694 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0380 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0392 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0487 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0499 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0683 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0695 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0381 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0393 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0488 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0684 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0696 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0382 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0394 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0489 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0685 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0697 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0383 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0395 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0686 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0698 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0384 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0396 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0687 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0699 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0385 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0397 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0688 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0386 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0398 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0594 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0689 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0387 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0399 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0388 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0389 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0597 = NULL;
