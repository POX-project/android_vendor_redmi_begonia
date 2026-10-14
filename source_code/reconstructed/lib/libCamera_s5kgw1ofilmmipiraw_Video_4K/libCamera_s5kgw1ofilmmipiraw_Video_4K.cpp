/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_4K.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_4K"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_4K.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0750 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0750 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0390 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0751 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0751 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0391 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0740 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0740 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0752 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0752 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0380 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0392 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0741 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0741 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0753 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0753 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0381 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0393 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0742 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0742 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0754 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0754 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0382 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0394 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0743 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0743 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0755 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0755 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0383 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0395 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0744 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0744 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0756 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0756 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0384 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0396 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0745 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0745 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0757 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0757 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0385 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0397 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0746 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0746 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0758 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0758 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0386 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0398 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0747 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0747 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0759 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0759 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0387 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0399 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0748 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0748 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0388 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0749 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0749 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0389 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0630 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0630 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0631 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0631 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0620 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0632 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0390 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0620 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0632 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0621 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0633 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0391 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0621 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0633 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0622 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0634 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0380 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0392 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0622 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0634 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0623 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0635 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0381 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0393 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0623 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0635 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0624 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0636 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0750 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0750 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0382 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0394 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0624 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0636 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0625 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0637 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0751 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0751 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0383 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0395 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0625 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0637 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0626 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0638 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0740 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0740 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0752 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0752 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0384 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0396 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0626 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0638 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0627 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0639 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0741 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0741 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0753 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0753 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0385 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0397 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0627 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0639 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0628 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0742 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0742 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0754 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0754 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0386 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0398 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0628 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0629 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0743 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0743 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0755 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0755 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0387 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0399 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0629 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0744 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0744 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0756 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0756 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0388 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0745 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0745 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0757 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0757 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0389 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0746 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0746 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0758 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0758 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0747 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0747 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0759 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0759 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0748 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0748 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0749 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0749 = NULL;
