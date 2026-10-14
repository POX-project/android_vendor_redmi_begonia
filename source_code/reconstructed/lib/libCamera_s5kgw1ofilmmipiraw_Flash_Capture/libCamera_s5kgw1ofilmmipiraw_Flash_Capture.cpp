/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Flash_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Flash_Capture"

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
#include "libCamera_s5kgw1ofilmmipiraw_Flash_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_EE_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0580 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0612 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0112 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0262 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0581 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0613 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0113 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0263 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0582 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0614 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0114 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0710 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0710 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0264 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_PARAM_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_PARAM_0004 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0583 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0615 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0115 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0711 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0711 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0265 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0584 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0616 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0116 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0680 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0712 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0712 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0266 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0585 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0617 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0117 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0681 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0713 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0713 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0720 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0720 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0267 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0586 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0618 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0118 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0682 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0714 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0714 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0721 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0721 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0268 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0587 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0619 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0119 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0683 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0715 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0715 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0690 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0722 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0722 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0269 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0588 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0684 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0716 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0716 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0691 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0723 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0723 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0589 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0685 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0717 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0717 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0692 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0724 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0724 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0686 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0718 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0718 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0693 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0725 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0725 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0687 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0719 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0719 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0694 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0726 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0726 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0290 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0290 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0688 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0695 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0727 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0727 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0291 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0291 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0689 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0696 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0728 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0728 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0292 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0292 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0697 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0729 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0729 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0293 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0293 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0698 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0294 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0294 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0699 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0295 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0295 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0296 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0296 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0590 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0240 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0297 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0297 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0591 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_THRES_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_THRES_0007 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0241 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0298 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0298 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0592 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0242 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0299 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0299 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0593 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0110 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0243 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0594 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0111 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0244 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0595 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0112 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0245 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0596 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0113 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0246 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0597 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0114 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0700 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0700 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0247 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0598 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0115 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0701 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0701 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0248 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0599 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0116 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0702 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0702 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0249 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0117 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0703 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0703 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0118 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0704 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0704 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0119 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0705 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0705 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0706 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0706 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0270 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0707 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0707 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0271 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0590 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0708 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0708 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0272 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0591 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0709 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0709 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0273 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0592 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0720 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0720 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0274 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0593 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0600 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0721 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0721 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0275 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0594 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0601 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0690 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0690 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0722 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0722 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0276 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0595 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0602 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0691 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0691 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0723 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0723 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0730 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0730 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0140 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0277 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0596 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0603 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0692 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0692 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0724 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0724 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0731 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0731 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0141 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0278 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0597 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0604 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0693 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0693 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0725 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0725 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0732 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0732 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0142 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0279 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0598 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0605 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0694 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0694 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0726 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0726 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0733 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0733 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0143 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0599 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0606 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0695 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0695 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0727 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0727 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0734 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0734 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0144 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0607 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0696 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0696 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0728 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0728 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0735 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0735 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0145 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0608 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0697 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0697 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0729 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0729 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0736 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0736 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0146 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0609 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0698 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0698 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0737 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0737 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0147 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0699 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0699 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0738 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0738 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0148 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0739 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0739 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0149 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0600 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0100 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0250 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0601 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0101 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0251 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0602 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0102 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0252 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0603 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0103 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0253 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0604 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0104 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0700 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0700 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0254 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0605 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0105 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0701 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0701 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0255 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0606 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0106 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0702 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0702 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0256 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0607 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0107 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0703 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0703 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0710 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0710 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0257 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0608 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0108 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0704 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0704 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0711 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0711 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0258 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0609 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0109 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0705 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0705 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0680 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0680 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0712 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0712 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0259 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0706 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0706 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0681 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0681 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0713 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0713 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0707 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0707 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0682 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0682 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0714 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0714 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0708 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0708 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0683 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0683 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0715 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0715 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0709 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0709 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0684 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0684 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0716 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0716 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0280 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0280 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0685 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0685 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0717 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0717 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0281 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0281 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0686 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0686 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0718 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0718 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0282 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0282 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0687 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0687 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0719 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0719 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0283 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0283 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0730 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0730 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0688 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0688 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0284 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0284 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0610 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0731 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0731 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0689 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0689 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0285 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0285 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0611 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0732 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0732 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0286 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0286 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0580 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0612 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFNR_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFNR_0005 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0733 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0733 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0150 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0287 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0287 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0581 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0613 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0734 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0734 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0151 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0288 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0288 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0582 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0614 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0735 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0735 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0152 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0289 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0289 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0583 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0615 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0100 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0736 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0736 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0153 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0584 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0616 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0101 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0737 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0737 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0154 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0585 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0617 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0102 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0738 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0738 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0155 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0586 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0618 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0103 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0739 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0739 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0156 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0587 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0619 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0104 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0157 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0588 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0105 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0158 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0589 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0106 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0159 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0107 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0108 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AWB_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AWB_0005 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0109 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0610 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0110 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0260 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0611 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0111 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0261 = NULL;
