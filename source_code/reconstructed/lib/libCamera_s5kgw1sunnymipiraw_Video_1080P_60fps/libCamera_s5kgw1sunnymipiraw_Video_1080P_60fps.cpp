/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Video_1080P_60fps.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Video_1080P_60fps"

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
#include "libCamera_s5kgw1sunnymipiraw_Video_1080P_60fps.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0808 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0808 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0014 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0014 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0809 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0809 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0810 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0810 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0930 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0930 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0811 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0811 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0931 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0931 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0812 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0812 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0932 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0932 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0800 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0800 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0813 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0813 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0920 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0920 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0933 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0933 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0801 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0801 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0814 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0814 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0921 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0921 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0934 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0934 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_CA_LTM_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_CA_LTM_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0802 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0802 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0815 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0815 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0922 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0922 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0935 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0935 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0803 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0803 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0816 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0816 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0923 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0923 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0936 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0936 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0014 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0014 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0804 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0804 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0817 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0817 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0924 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0924 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0937 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0937 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0805 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0805 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0818 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0818 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0925 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0925 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0938 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0938 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0930 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0930 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0806 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0806 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0819 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0819 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0926 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0926 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0939 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0939 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0931 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0931 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0807 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0807 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0927 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0927 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0932 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0932 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0016 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0016 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0808 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0808 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0928 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0928 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0920 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0920 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0933 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0933 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0809 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0809 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0929 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0929 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0921 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0921 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0934 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0934 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0922 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0922 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0935 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0935 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0923 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0923 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0936 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0936 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0690 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0924 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0924 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0937 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0937 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0691 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0925 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0925 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0938 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0938 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0692 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0926 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0926 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0939 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0939 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0680 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0693 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0927 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0927 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0681 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0694 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0928 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0928 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0682 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0695 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AF_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AF_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0929 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0929 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0683 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0696 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0684 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0697 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0685 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0698 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0810 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0810 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0686 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0699 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0014 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0014 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0811 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0811 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0569 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0687 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0812 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0812 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0688 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0800 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0800 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0813 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0813 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0689 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0801 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0801 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0814 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0814 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0802 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0802 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0815 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0815 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0803 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0803 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0816 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0816 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0804 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0804 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0817 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0817 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0805 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0805 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0818 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0818 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0806 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0806 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0819 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0819 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0807 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0807 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0579 = NULL;
