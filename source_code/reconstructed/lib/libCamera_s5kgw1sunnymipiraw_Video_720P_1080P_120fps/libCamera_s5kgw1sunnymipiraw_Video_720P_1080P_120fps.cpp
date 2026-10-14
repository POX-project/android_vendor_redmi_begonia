/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Video_720P_1080P_120fps.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Video_720P_1080P_120fps"

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
#include "libCamera_s5kgw1sunnymipiraw_Video_720P_1080P_120fps.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_EE_0825 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0825 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0837 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0837 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0946 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0946 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0958 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0958 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0826 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0826 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0838 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0838 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0947 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0947 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0959 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0959 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0827 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0827 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0839 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0839 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0948 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0948 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0597 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0828 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0828 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0949 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0949 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0829 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0829 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0950 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0950 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0951 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0951 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0940 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0940 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0952 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0952 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0941 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0941 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0953 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0953 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0710 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0710 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0942 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0942 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0954 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0954 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0711 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0711 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AF_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AF_0004 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0943 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0943 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0955 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0955 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0700 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0700 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0712 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0712 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0944 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0944 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0956 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0956 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0701 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0701 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0713 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0713 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0945 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0945 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0957 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0957 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0702 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0702 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0714 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0714 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0946 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0946 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0958 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0958 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0703 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0703 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0715 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0715 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0947 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0947 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0959 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0959 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0594 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0704 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0704 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0716 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0716 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0948 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0948 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0705 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0705 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0717 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0717 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0830 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0830 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0949 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0949 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0706 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0706 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0718 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0718 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0831 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0831 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0597 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0707 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0707 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0719 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0719 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0820 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0820 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0832 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0832 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0708 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0708 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0821 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0821 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0833 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0833 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0709 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0709 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0822 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0822 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0834 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0834 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0823 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0823 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0835 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0835 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0824 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0824 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0836 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0836 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0825 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0825 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0837 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0837 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0826 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0826 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0838 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0838 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0827 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0827 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0839 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0839 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0828 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0828 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0829 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0829 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0950 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0950 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0830 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0830 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0951 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0951 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0831 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0831 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0940 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0940 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0952 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0952 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0820 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0820 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0832 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0832 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0941 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0941 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0953 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0953 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0821 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0821 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0833 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0833 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0942 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0942 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0954 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0954 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0822 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0822 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0834 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0834 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0943 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0943 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0955 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0955 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0823 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0823 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0835 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0835 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0944 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0944 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0956 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0956 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0824 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0824 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0836 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0836 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0945 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0945 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0957 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0957 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0594 = NULL;
