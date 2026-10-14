/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_720P_240fps.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_720P_240fps"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_720P_240fps.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_GMA_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_GMA_0013 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0890 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0890 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0891 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0891 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0892 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0892 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0880 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0880 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0893 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0893 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0770 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0770 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0890 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0890 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0881 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0881 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0894 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0894 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AE_0015 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AE_0015 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0771 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0771 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0891 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0891 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0882 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0882 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0895 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0895 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0650 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0772 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0772 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0892 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0892 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0883 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0883 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0896 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0896 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0651 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0760 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0760 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0773 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0773 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0770 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0770 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0880 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0880 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0893 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0893 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0884 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0884 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0897 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0897 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0652 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0761 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0761 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0774 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0774 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0771 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0771 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0881 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0881 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0894 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0894 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0885 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0885 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0898 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0898 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0640 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0653 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0762 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0762 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0775 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0775 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0772 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0772 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0882 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0882 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0895 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0895 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0886 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0886 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0899 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0899 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0641 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0654 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0763 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0763 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0776 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0776 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0760 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0760 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0773 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0773 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0883 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0883 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0896 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0896 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0887 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0887 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0642 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0655 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0764 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0764 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0777 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0777 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0761 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0761 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0774 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0774 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0884 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0884 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0897 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0897 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0888 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0888 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0643 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0656 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0765 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0765 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0778 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0778 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0762 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0762 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0775 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0775 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0885 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0885 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0898 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0898 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0889 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0889 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0644 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0657 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DCE_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DCE_0013 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0766 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0766 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0779 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0779 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0763 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0763 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0776 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0776 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0886 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0886 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0899 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0899 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0645 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0658 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AF_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AF_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0767 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0767 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0764 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0764 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0777 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0777 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0887 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0887 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0646 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0659 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0768 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0768 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0765 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0765 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0778 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0778 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0888 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0888 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0647 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0769 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0769 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0766 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0766 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0779 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0779 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0889 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0889 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0648 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_LCE_0013 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_LCE_0013 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0767 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0767 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0649 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0768 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0768 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0769 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0769 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0533 = NULL;
