/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_720P.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_720P"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_720P.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0762 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0762 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0774 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0774 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0763 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0763 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0775 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0775 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0764 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0764 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0776 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0776 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0765 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0765 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0777 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0777 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0410 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0766 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0766 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0778 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0778 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0411 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0767 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0767 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0779 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0779 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0400 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0412 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0768 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0768 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0401 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0413 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0769 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0769 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0402 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0414 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0403 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0415 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0404 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0416 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0405 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0417 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0406 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0418 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0650 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0407 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0419 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0650 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0651 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0408 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0651 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0640 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0652 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0409 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0640 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0652 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0641 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0653 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0641 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0653 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0642 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0654 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0642 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0654 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0643 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0655 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0643 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0655 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0644 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0656 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0770 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0770 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0644 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0656 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0645 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0657 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0771 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0771 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0645 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0657 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0646 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0658 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0760 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0760 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0772 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0772 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0410 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0646 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0658 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0647 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0659 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0761 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0761 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0773 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0773 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0411 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0647 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0659 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0648 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0762 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0762 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0774 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0774 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0400 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0412 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0648 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0649 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0763 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0763 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0775 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0775 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0401 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0413 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0649 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0764 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0764 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0776 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0776 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0402 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0414 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0765 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0765 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0777 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0777 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0403 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0415 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0766 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0766 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0778 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0778 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0404 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0416 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0767 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0767 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0779 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0779 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0405 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0417 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0768 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0768 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0406 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0418 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0769 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0769 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0407 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0419 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0408 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0770 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0770 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0409 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0771 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0771 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0760 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0760 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0772 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0772 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0761 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0761 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0773 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0773 = NULL;
