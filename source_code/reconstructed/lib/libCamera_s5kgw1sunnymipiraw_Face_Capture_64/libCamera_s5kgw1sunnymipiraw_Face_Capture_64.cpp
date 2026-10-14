/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Face_Capture_64.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Face_Capture_64"

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
#include "libCamera_s5kgw1sunnymipiraw_Face_Capture_64.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_UDM_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0438 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0621 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0657 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0439 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0622 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0658 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0623 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0659 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0624 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0530 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0625 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0531 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0626 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0532 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0627 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0533 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0628 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0534 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0629 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0535 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0500 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0536 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0501 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0537 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0130 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0502 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0538 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0131 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0503 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0539 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0132 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0504 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0133 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0505 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0134 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0506 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFNR_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFNR_0004 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0135 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0507 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0136 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0508 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0137 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0509 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0630 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0138 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0510 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0631 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0139 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0511 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0632 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0512 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0633 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_THRES_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_THRES_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0513 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0634 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0514 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0635 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0515 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0600 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0636 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0440 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0516 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0601 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0637 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0441 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0517 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0602 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0638 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0442 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0518 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0603 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0639 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0443 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0519 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0080 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0604 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0444 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0081 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0605 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0445 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0082 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0606 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0446 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0083 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0080 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0630 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0607 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0447 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0084 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0081 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0631 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0608 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0448 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0085 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0082 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0632 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0609 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0449 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0086 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0083 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0633 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0087 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0084 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0634 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0540 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0540 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0088 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0085 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0635 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0541 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0541 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0089 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0086 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0600 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0636 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0542 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0542 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0087 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0601 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0637 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0543 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0543 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0088 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0602 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0638 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0544 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0544 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0089 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0603 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0639 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0545 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0545 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0604 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AWB_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AWB_0004 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0510 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0546 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0546 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0605 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0511 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0547 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0547 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0606 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0512 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0548 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0548 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0607 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0513 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0549 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0549 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0608 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0514 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0340 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0340 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0609 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0515 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0341 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0341 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0516 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0342 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0342 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0517 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0343 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0343 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0518 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0344 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0344 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0519 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0345 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0345 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0640 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0580 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0346 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0346 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0520 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0641 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0581 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0347 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0347 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0521 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0642 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0582 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0348 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0348 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0522 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0643 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0583 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0349 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0349 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0523 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0644 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0584 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0524 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0645 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0585 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0525 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0610 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0646 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0450 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0586 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0526 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0611 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0647 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0451 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0587 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0527 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0612 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0648 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0452 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0588 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0528 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0613 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0649 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0453 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0589 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0529 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0090 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0614 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0454 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0091 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0615 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0455 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0420 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0092 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0616 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0456 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0421 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0093 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0090 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0640 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0640 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0617 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0457 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0422 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0094 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0091 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0641 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0641 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0618 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0458 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0423 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0095 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0092 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0642 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0642 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0619 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0459 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0424 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0096 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0093 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0643 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0643 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0425 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0097 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0094 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0644 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0644 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0426 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0550 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0550 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0098 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0095 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0645 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0645 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0427 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0551 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0551 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MFB_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MFB_0099 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0096 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0610 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0646 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0646 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0428 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0552 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0552 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0097 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0611 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0647 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0647 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0429 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0553 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0553 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0098 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0612 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0648 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0648 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0554 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0554 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_MIXER3_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_MIXER3_0099 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0613 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0649 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0649 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0555 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0555 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0614 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0520 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0556 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0556 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0615 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0594 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0521 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0557 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0557 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0616 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0522 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0558 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0558 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0617 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0523 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0559 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0559 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0618 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0597 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0350 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0350 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0524 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0619 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0351 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0351 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0525 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0352 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0352 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0526 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0353 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0353 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0527 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0120 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0354 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0354 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0528 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0121 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0355 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0355 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0529 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0650 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0122 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0590 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0356 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0356 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0530 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0651 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0123 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0591 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0357 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0357 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0531 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0652 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0124 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0592 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0358 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0358 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0532 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0653 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0125 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0593 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0359 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0359 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0533 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0654 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0126 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0594 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0534 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0655 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0127 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0595 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0535 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0620 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0656 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0128 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0500 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0596 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0536 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0621 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0657 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0657 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0129 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0501 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0597 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0537 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0622 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0658 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0658 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0502 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0598 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0538 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0623 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0659 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0659 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0503 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0599 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0539 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0624 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0504 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0625 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0505 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0430 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0626 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0506 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0431 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0650 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0650 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0627 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0507 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0432 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0651 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0651 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0628 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0508 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0433 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0652 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0652 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0629 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0509 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0434 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0653 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0653 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0435 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0654 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0654 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0436 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0655 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0655 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0437 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0620 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0656 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0656 = NULL;
