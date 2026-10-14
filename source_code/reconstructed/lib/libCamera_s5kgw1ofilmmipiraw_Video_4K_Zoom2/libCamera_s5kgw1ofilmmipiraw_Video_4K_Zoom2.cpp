/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_4K_Zoom2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_4K_Zoom2"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_4K_Zoom2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0847 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0847 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0859 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0859 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0848 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0848 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0849 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0849 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0850 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0850 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0851 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0851 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0840 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0840 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0852 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0852 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0841 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0841 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0853 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0853 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0842 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0842 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0854 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0854 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0843 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0843 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0855 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0855 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0844 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0844 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0856 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0856 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0845 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0845 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0857 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0857 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0846 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0846 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0858 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0858 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0847 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0847 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0859 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0859 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0848 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0848 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0849 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0849 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0730 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0730 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0730 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0730 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0731 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0731 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0731 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0731 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0720 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0720 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0732 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0732 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0720 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0720 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0732 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0732 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0721 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0721 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0733 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0733 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0610 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0721 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0721 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0733 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0733 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0722 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0722 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0734 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0734 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0611 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0722 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0722 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0734 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0734 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0723 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0723 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0735 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0735 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0600 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0612 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0723 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0723 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0735 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0735 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0724 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0724 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0736 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0736 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0850 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0850 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0601 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0613 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0724 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0724 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0736 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0736 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0725 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0725 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0737 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0737 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0851 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0851 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0602 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0614 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0725 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0725 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0737 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0737 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0726 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0726 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0738 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0738 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0840 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0840 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0852 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0852 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0603 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0615 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0726 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0726 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0738 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0738 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0727 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0727 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0739 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0739 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0841 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0841 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0853 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0853 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0604 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0616 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0727 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0727 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0739 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0739 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0728 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0728 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0842 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0842 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0854 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0854 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0605 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0617 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0728 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0728 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0729 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0729 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0843 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0843 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0855 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0855 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0606 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0618 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0729 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0729 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0844 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0844 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0856 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0856 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0607 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0619 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0845 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0845 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0857 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0857 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0608 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0846 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0846 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0858 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0858 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0609 = NULL;
