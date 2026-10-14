/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Video_720P_240fps.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Video_720P_240fps"

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
#include "libCamera_s5kgw1sunnymipiraw_Video_720P_240fps.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0785 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0785 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0798 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0798 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0786 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0786 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0799 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0799 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0787 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0787 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0788 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0788 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0789 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0789 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0790 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0790 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0791 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0791 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0792 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0792 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0013 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0780 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0780 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0793 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0793 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0910 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0910 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0781 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0781 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0794 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0794 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0911 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0911 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0782 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0782 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0795 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0795 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0912 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0912 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0783 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0783 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0796 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0796 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0900 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0900 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0913 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0913 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0015 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0015 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0784 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0784 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0797 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0797 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0901 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0901 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0914 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0914 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0785 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0785 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0798 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0798 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0902 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0902 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0915 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0915 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0786 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0786 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0799 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0799 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0903 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0903 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0916 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0916 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0787 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0787 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0904 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0904 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0917 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0917 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0788 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0788 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0905 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0905 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0918 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0918 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0910 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0910 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0789 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0789 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0906 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0906 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0919 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0919 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0911 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0911 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0907 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0907 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0912 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0912 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0908 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0908 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0900 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0900 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0913 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0913 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0909 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0909 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0901 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0901 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0914 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0914 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AF_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AF_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0902 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0902 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0915 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0915 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0903 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0903 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0916 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0916 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0670 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0670 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0904 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0904 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0917 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0917 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0671 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0671 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0905 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0905 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0918 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0918 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0672 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0672 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0013 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0906 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0906 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0919 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0919 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0660 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0660 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0673 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0673 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0907 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0907 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0661 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0661 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0674 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0674 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0908 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0908 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0662 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0662 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0675 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0675 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0790 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0790 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0909 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0909 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0663 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0663 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0676 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0676 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0791 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0791 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0664 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0664 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0677 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0677 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0792 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0792 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0665 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0665 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0678 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0678 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0780 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0780 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0793 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0793 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0666 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0666 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0679 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0679 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0781 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0781 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0794 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0794 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0667 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0667 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0782 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0782 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0795 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0795 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0668 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0668 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0783 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0783 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0796 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0796 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0669 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0669 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0784 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0784 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0797 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0797 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0013 = NULL;
