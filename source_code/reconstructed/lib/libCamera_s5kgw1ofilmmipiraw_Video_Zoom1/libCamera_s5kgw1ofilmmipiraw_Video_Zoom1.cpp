/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video_Zoom1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video_Zoom1"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video_Zoom1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_EE_0708 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0708 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0709 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0709 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0823 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0823 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0835 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0835 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0709 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0709 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0824 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0824 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0836 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0836 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0825 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0825 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0837 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0837 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0826 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0826 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0838 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0838 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0590 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0827 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0827 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0839 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0839 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0591 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0828 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0828 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0580 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0592 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0829 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0829 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0581 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0593 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0582 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0594 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0830 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0830 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0583 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0595 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0831 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0831 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0584 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0596 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0820 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0820 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0832 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0832 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0585 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0597 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0821 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0821 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0833 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0833 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0586 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0598 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0822 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0822 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0834 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0834 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0587 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0599 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0823 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0823 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0835 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0835 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0588 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0824 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0824 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0836 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0836 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0589 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0825 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0825 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0837 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0837 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0826 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0826 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0838 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0838 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0478 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0827 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0827 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0839 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0839 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0467 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0467 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0479 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0479 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0828 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0828 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0468 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0468 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0829 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0829 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0469 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0469 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0710 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0710 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0710 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0710 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0711 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0711 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0711 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0711 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0700 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0700 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0712 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0712 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0470 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0470 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0700 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0700 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0712 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0712 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0701 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0701 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0713 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0713 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0471 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0471 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0701 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0701 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0713 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0713 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0702 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0702 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0714 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0714 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0460 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0460 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0472 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0472 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0702 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0702 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0714 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0714 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0703 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0703 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0715 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0715 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0461 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0461 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0473 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0473 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0703 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0703 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0715 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0715 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0704 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0704 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0716 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0716 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0830 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0830 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0462 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0462 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0474 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0474 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0704 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0704 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0716 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0716 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0705 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0705 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0717 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0717 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0831 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0831 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0463 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0463 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0475 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0475 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0705 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0705 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0717 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0717 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0706 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0706 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0718 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0718 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0820 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0820 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0832 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0832 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0464 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0464 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0476 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0476 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0706 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0706 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0718 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0718 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0707 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0707 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0719 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0719 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0821 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0821 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0833 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0833 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0465 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0465 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0477 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0477 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0707 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0707 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0719 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0719 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0708 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0708 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0822 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0822 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0834 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0834 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0466 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0466 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0478 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0478 = NULL;
