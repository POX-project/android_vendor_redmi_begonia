/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_480P.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_480P"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_480P.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0786 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0786 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0798 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0798 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0431 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0787 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0787 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0799 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0799 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0420 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0432 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0788 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0788 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0421 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0433 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0789 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0789 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0422 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0434 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0423 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0435 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0424 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0436 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0425 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0437 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0426 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0438 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0670 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0670 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0427 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0439 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0670 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0670 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0671 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0671 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0428 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0671 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0671 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0660 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0660 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0672 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0672 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0429 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0660 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0660 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0672 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0672 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0661 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0661 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0673 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0673 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0550 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0661 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0661 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0673 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0673 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0662 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0662 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0674 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0674 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0551 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0662 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0662 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0674 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0674 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0663 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0663 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0675 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0675 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0540 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0552 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0663 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0663 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0675 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0675 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0664 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0664 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0676 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0676 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0790 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0790 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0541 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0553 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0664 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0664 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0676 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0676 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0665 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0665 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0677 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0677 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0791 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0791 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0542 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0554 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0665 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0665 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0677 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0677 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0666 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0666 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0678 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0678 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0780 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0780 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0792 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0792 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0430 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0543 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0555 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0666 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0666 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0678 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0678 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0667 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0667 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0679 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0679 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0781 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0781 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0793 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0793 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0431 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0544 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0556 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0667 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0667 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0679 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0679 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0668 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0668 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0782 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0782 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0794 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0794 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0420 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0432 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0545 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0557 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0668 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0668 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0669 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0669 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0783 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0783 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0795 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0795 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0421 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0433 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0546 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0558 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0669 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0669 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0784 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0784 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0796 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0796 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0422 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0434 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0547 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0559 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0785 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0785 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0797 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0797 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0423 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0435 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0548 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0786 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0786 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0798 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0798 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0424 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0436 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0549 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0787 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0787 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0799 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0799 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0425 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0437 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0788 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0788 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0426 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0438 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0789 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0789 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0427 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0439 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0428 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0790 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0790 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0429 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0791 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0791 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0780 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0780 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0792 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0792 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0781 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0781 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0793 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0793 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0782 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0782 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0794 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0794 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0783 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0783 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0795 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0795 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0784 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0784 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0796 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0796 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0785 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0785 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0797 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0797 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0430 = NULL;
