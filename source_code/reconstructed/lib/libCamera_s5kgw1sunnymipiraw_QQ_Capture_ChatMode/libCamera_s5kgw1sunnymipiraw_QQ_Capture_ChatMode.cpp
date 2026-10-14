/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_QQ_Capture_ChatMode.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_QQ_Capture_ChatMode"

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
#include "libCamera_s5kgw1sunnymipiraw_QQ_Capture_ChatMode.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_EE_0849 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0849 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0603 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0615 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0970 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0970 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0604 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0616 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0971 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0971 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0605 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0617 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0960 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0960 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0972 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0972 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0606 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0618 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0961 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0961 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0973 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0973 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0607 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0619 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0730 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0730 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0962 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0962 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0974 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0974 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0608 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0731 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0731 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0963 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0963 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0975 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0975 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0609 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0720 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0720 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0732 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0732 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0964 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0964 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0976 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0976 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0721 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0721 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0733 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0733 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0965 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0965 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0977 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0977 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0722 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0722 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0734 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0734 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0966 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0966 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0978 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0978 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0723 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0723 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0735 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0735 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0015 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0015 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0015 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0015 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0967 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0967 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0979 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0979 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0724 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0724 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0736 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0736 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0968 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0968 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0725 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0725 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0737 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0737 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0850 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0850 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0969 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0969 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0726 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0726 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0738 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0738 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0015 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0015 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0851 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0851 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0727 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0727 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0739 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0739 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0840 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0840 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0852 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0852 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0728 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0728 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0841 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0841 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0853 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0853 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0610 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0729 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0729 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0842 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0842 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0854 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0854 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0611 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0843 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0843 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0855 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0855 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0600 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0612 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0844 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0844 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0856 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0856 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0601 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0613 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0845 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0845 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0857 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0857 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0602 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0614 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0846 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0846 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0858 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0858 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0603 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0615 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0847 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0847 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0859 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0859 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0604 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0616 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0848 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0848 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0605 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0617 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0849 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0849 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0970 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0970 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0606 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0618 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0850 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0850 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0971 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0971 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0607 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0619 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0851 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0851 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0960 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0960 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0972 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0972 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0608 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0840 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0840 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0852 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0852 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0961 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0961 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0973 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0973 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0609 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0841 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0841 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0853 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0853 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0962 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0962 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0974 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0974 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0842 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0842 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0854 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0854 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0963 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0963 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0975 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0975 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0843 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0843 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0855 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0855 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0964 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0964 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0976 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0976 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0844 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0844 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0856 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0856 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0965 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0965 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0977 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0977 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0610 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0845 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0845 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0857 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0857 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0966 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0966 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0978 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0978 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0611 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0846 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0846 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0858 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0858 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0967 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0967 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0979 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0979 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0600 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0612 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0847 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0847 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0859 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0859 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0968 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0968 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0601 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0613 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0848 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0848 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0969 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0969 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0602 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0614 = NULL;
