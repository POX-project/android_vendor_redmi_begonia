/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_Zoom2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_Zoom2"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_Zoom2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0870 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0870 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0871 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0871 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0860 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0860 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0872 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0872 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0861 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0861 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0873 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0873 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0862 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0862 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0874 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0874 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0863 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0863 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0875 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0875 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0864 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0864 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0876 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0876 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0865 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0865 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0877 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0877 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0866 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0866 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0878 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0878 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0867 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0867 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0879 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0879 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0868 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0868 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0869 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0869 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0750 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0750 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0750 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0750 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0751 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0751 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0751 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0751 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0740 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0740 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0752 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0752 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0740 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0740 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0752 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0752 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0741 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0741 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0753 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0753 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0630 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0741 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0741 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0753 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0753 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0742 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0742 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0754 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0754 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0631 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0742 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0742 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0754 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0754 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0743 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0743 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0755 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0755 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0620 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0632 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0743 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0743 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0755 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0755 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0744 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0744 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0756 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0756 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0870 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0870 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0621 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0633 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0744 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0744 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0756 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0756 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0745 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0745 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0757 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0757 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0871 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0871 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0622 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0634 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0745 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0745 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0757 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0757 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0746 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0746 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0758 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0758 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0860 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0860 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0872 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0872 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0623 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0635 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0746 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0746 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0758 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0758 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0747 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0747 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0759 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0759 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0861 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0861 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0873 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0873 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0624 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0636 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0747 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0747 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0759 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0759 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0748 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0748 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0862 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0862 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0874 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0874 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0625 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0637 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0748 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0748 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0749 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0749 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0863 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0863 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0875 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0875 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0626 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0638 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0749 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0749 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0864 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0864 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0876 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0876 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0627 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0639 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0865 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0865 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0877 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0877 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0628 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0866 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0866 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0878 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0878 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0629 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0867 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0867 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0879 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0879 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0868 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0868 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0869 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0869 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0508 = NULL;
