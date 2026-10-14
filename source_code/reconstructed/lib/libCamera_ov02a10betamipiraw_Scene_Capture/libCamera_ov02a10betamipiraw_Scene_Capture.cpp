/*
 * Reverse-Engineered Source for: libCamera_ov02a10betamipiraw_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10betamipiraw_Scene_Capture"

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
#include "libCamera_ov02a10betamipiraw_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10betamipiraw_OBC_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0079 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_ClearZoom_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ClearZoom_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0050 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0051 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0052 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0053 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_Flash_AE_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_Flash_AE_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0054 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0055 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0056 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0060 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0057 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0061 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_Flash_Calibration_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_Flash_Calibration_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0058 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0062 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0059 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0063 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0050 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0064 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0051 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0065 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0052 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0066 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0053 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0067 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0054 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0068 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0055 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0069 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0056 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0040 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0057 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0041 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0058 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0042 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0059 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0043 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0044 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0045 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0046 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0047 = NULL;

/* Exported Object: ov02a10betamipiraw_Flash_AWB_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_Flash_AWB_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0048 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0049 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0070 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0071 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_DBS_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DBS_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0072 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0073 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0074 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_FD_ANR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_FD_ANR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0075 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_LCE_LINK_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_LCE_LINK_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0076 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0077 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0078 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_NR1_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_NR1_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0079 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0050 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0051 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0052 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0053 = NULL;

/* Exported Object: ov02a10betamipiraw_AF_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_AF_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0054 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0055 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0056 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_CCM_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CCM_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0057 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0058 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0059 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0040 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0041 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_PARAM_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_PARAM_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0042 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_BPC_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_BPC_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0043 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0044 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0045 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0046 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0047 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0048 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0049 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ABF_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ABF_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_CA_LTM_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_CA_LTM_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_DCE_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_DCE_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0050 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0051 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0052 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0053 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0054 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0055 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0056 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0057 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0058 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0059 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_GMA_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_GMA_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_MFNR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFNR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0040 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0041 = NULL;

/* Exported Object: ov02a10betamipiraw_AE_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_AE_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0042 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0043 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0044 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_THRES_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_THRES_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0045 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_THRES_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_THRES_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0046 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0047 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_BNR_PDC_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_BNR_PDC_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0048 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0049 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0060 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0061 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0039 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0062 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0063 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0024 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0064 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0006 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0025 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0065 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0007 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0026 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0066 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0008 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0027 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0067 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0009 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0028 = NULL;

/* Exported Object: ov02a10betamipiraw_RMM_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RMM_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0068 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0029 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0069 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_MIXER3_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MIXER3_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_MFB_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_MFB_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0002 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0040 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0003 = NULL;

/* Exported Object: ov02a10betamipiraw_RNR_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_RNR_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0041 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0004 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0004 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0042 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_TBL_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_TBL_0005 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0043 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_UDM_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_UDM_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0044 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0045 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0046 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0050 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NR3D_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NR3D_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0047 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0051 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0048 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0052 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_EE_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_EE_0049 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0053 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0040 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0054 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0041 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0055 = NULL;

/* Exported Object: ov02a10betamipiraw_AWB_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_AWB_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0042 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0056 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0043 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0057 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0044 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0058 = NULL;

/* Exported Object: ov02a10betamipiraw_ADBS_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_ADBS_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0045 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0059 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0010 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0046 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0011 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0030 = NULL;

/* Exported Object: ov02a10betamipiraw_LCE_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_LCE_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0047 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0070 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0012 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0031 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0048 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0071 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0013 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0032 = NULL;

/* Exported Object: ov02a10betamipiraw_HFG_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_HFG_0049 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0072 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0014 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0033 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0073 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0015 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0034 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0074 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0016 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0035 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0075 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0020 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0017 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0036 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0076 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0021 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0018 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0018 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0037 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0077 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0022 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_CCR_0019 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_CCR_0019 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0038 = NULL;

/* Exported Object: ov02a10betamipiraw_OBC_0000 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_OBC_0000 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC2_ANR2_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC2_ANR2_0001 = NULL;

/* Exported Object: ov02a10betamipiraw_NBC_ANR_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_NBC_ANR_0078 = NULL;

/* Exported Object: ov02a10betamipiraw_SWNR_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_SWNR_0023 = NULL;

/* Exported Object: ov02a10betamipiraw_COLOR_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10betamipiraw_COLOR_0039 = NULL;
