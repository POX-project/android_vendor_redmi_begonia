/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Video_480P.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Video_480P"

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
#include "libCamera_s5kgw1sunnymipiraw_Video_480P.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0682 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0694 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0802 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0802 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0814 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0814 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0451 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0683 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0695 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0803 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0803 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0815 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0815 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0440 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0452 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0684 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0696 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0804 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0804 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0816 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0816 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0441 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0453 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0685 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0697 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0805 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0805 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0817 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0817 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0442 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0454 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0686 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0698 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0806 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0806 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0818 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0818 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0443 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0455 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0687 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0699 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0807 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0807 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0819 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0819 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0444 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0456 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0688 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0808 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0808 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0445 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0457 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0689 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0809 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0809 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0446 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0458 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0690 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0447 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0459 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0691 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0810 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0810 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0448 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0680 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0692 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0811 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0811 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0449 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0681 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0693 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0800 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0800 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0812 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0812 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0682 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0694 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0801 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0801 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0813 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0813 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0683 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0695 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0802 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0802 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0814 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0814 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0684 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0696 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0803 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0803 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0815 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0815 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0450 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0685 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0697 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0804 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0804 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0816 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0816 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0451 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0686 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0698 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0805 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0805 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0817 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0817 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0440 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0452 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0687 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0699 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0806 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0806 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0818 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0818 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0441 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0453 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0688 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0807 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0807 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0819 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0819 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0442 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0454 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0689 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0808 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0808 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0443 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0455 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0809 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0809 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0444 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0456 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0445 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0457 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0446 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0458 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0447 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0459 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0570 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0448 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0571 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0449 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0560 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0572 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0561 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0573 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0562 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0574 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0563 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0575 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0564 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0576 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0565 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0577 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0690 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0810 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0810 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0566 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0578 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0691 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0811 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0811 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0567 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0579 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0680 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0692 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0800 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0800 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0812 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0812 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0568 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0681 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0693 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0801 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0801 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0813 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0813 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0450 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0569 = NULL;
