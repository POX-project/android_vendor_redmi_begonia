/*
 * Reverse-Engineered Source for: libCamera_gc2375afmipiraw_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_gc2375afmipiraw_Scene_Preview"

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
#include "libCamera_gc2375afmipiraw_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: gc2375afmipiraw_BNR_BPC_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0054 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0052 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0056 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0055 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0044 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0086 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0086 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0045 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0053 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0055 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0053 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0057 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0056 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0045 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0087 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0087 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0046 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0054 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0056 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0054 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0058 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0057 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0046 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0088 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0088 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0100 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0100 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0047 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0055 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0057 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0055 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0059 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0058 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0047 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0089 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0089 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0101 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0101 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0048 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0056 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0058 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0056 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0059 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0048 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0102 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0102 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0057 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0059 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0057 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0103 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0103 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0058 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0058 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0104 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0104 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0059 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0059 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0105 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0105 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0106 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0106 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0100 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0100 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0107 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0107 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0101 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0101 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0108 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0108 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0102 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0102 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0109 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0109 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0070 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0070 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0050 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0103 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0103 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0071 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0071 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0051 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0104 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0104 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0072 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0072 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0052 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0050 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0105 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0105 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0073 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0073 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0053 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0051 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0106 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0106 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0074 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0074 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0054 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0052 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0080 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0080 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0107 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0107 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0075 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0075 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0055 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0053 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0081 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0081 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0108 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0108 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0076 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0076 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0056 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0054 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0082 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0082 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0109 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0109 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0060 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0060 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0077 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0077 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0270 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0270 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0057 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0055 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0083 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0083 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0061 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0061 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0078 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0078 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0271 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0271 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0058 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0056 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0084 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0084 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0062 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0062 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0079 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0079 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0272 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0272 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0059 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0057 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0085 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0085 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0063 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0063 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0273 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0273 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0058 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0086 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0086 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0064 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0064 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0274 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0274 = NULL;

/* Exported Object: gc2375afmipiraw_ClearZoom_0002 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ClearZoom_0002 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0059 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0087 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0087 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0065 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0065 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0275 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0275 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0012 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0012 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0088 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0088 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0066 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0066 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0276 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0276 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0013 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0013 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0089 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0089 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0067 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0067 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0277 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0277 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0014 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0014 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0068 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0068 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0278 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0278 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0015 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0015 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0090 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0090 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0069 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0069 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0279 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0279 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0016 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0016 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0091 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0091 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0050 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0240 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0240 = NULL;

/* Exported Object: gc2375afmipiraw_FD_ANR_0017 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_FD_ANR_0017 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0050 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0092 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0092 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0051 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0241 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0241 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0051 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0093 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0093 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0052 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0242 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0242 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0052 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0094 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0094 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0053 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0243 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0243 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0053 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0095 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0095 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0054 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0244 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0244 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0054 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0096 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0096 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0055 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0245 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0245 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0055 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0097 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0097 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0056 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0246 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0246 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0056 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0098 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0098 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0110 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0110 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0057 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0247 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0247 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0057 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0099 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0099 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0111 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0111 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0058 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0248 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0248 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0058 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0112 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0112 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0059 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0249 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0249 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0059 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0113 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0113 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0114 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0114 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0115 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0115 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0116 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0116 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_THRES_0003 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_THRES_0003 = NULL;

/* Exported Object: gc2375afmipiraw_DCE_0001 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DCE_0001 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0110 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0110 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0117 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0117 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0111 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0111 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0118 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0118 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0112 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0112 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_ANR_0119 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_ANR_0119 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0113 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0113 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0040 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0114 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0114 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0041 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0115 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0115 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0042 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0116 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0116 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0043 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0090 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0090 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0117 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0117 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0044 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0091 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0091 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0118 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0118 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0045 = NULL;

/* Exported Object: gc2375afmipiraw_GMA_0001 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_GMA_0001 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0040 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0092 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0092 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ANR2_0119 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ANR2_0119 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0070 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0070 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0046 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0280 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0280 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0041 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0093 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0093 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0071 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0071 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0047 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0281 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0281 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0042 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0094 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0094 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0072 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0072 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0048 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0282 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0282 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0043 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0095 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0095 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0073 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0073 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0049 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0283 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0283 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0044 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0096 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0096 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0074 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0074 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0284 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0284 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0045 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0097 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0097 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0075 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0075 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0285 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0285 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0046 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0098 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0098 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0076 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0076 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0286 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0286 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0047 = NULL;

/* Exported Object: gc2375afmipiraw_EE_0099 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_EE_0099 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0077 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0077 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0287 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0287 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0048 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0078 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0078 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0288 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0288 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0040 = NULL;

/* Exported Object: gc2375afmipiraw_UDM_0079 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_UDM_0079 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0289 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0289 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0041 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0250 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0250 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0042 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0251 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0251 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0043 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0252 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0252 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0044 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0253 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0253 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0045 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0254 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0254 = NULL;

/* Exported Object: gc2375afmipiraw_LCE_0001 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_LCE_0001 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0012 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0012 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0046 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0255 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0255 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0013 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0013 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0047 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0256 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0256 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0014 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0014 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0048 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0257 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0257 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0015 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0015 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0049 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0258 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0258 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0016 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0016 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0040 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0259 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0259 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_TBL_0017 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_TBL_0017 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0041 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0040 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0040 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0042 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0041 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0041 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0043 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0042 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0040 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0042 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0040 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0044 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0043 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0041 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0043 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0041 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0045 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0044 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0042 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0044 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0042 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0046 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0045 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0043 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0045 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0043 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0047 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0046 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0044 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0046 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0044 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0048 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0047 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0050 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0045 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0047 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0045 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0049 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0048 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0051 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0046 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0048 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0046 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0052 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0047 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0049 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0047 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0053 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0048 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0048 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0054 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0049 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0055 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0050 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0056 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0290 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0290 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0051 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0057 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0291 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0291 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0052 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0058 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0292 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0292 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0053 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_ABF_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_ABF_0059 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0060 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0060 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0293 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0293 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0040 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0054 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0061 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0061 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0294 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0294 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0041 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0055 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0062 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0062 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0295 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0295 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0042 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0040 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0056 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0063 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0063 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0296 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0296 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0043 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0041 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0057 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0064 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0064 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0297 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0297 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0044 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0042 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0058 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0065 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0065 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0298 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0298 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0045 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0043 = NULL;

/* Exported Object: gc2375afmipiraw_RNR_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RNR_0059 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0050 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0066 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0066 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0299 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0299 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0046 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0044 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0051 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0067 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0067 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0260 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0260 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0047 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0045 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0045 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0052 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0068 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0068 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0261 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0261 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0048 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0046 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0046 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0053 = NULL;

/* Exported Object: gc2375afmipiraw_SWNR_0069 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_SWNR_0069 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0262 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0262 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_PARAM_0004 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_PARAM_0004 = NULL;

/* Exported Object: gc2375afmipiraw_CA_LTM_0002 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_CA_LTM_0002 = NULL;

/* Exported Object: gc2375afmipiraw_ADBS_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_ADBS_0049 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0047 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0047 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0054 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0263 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0263 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0048 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0048 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0055 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0264 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0264 = NULL;

/* Exported Object: gc2375afmipiraw_DBS_0049 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_DBS_0049 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0056 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0056 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0265 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0265 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0057 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0057 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0266 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0266 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0058 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0058 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0267 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0267 = NULL;

/* Exported Object: gc2375afmipiraw_NBC_LCE_LINK_0059 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC_LCE_LINK_0059 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0268 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0268 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0050 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0080 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0080 = NULL;

/* Exported Object: gc2375afmipiraw_COLOR_0269 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_COLOR_0269 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0051 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0050 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0081 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0081 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0040 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0050 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0052 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0051 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0040 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0040 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0082 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0082 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0041 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0051 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0053 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0052 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0041 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0041 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0083 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0083 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0042 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0050 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0052 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0050 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0050 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0054 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0053 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0042 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0042 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0084 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0084 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0043 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0051 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_BPC_0053 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_BPC_0053 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_NR1_0051 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_NR1_0051 = NULL;

/* Exported Object: gc2375afmipiraw_BNR_PDC_0055 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_BNR_PDC_0055 = NULL;

/* Exported Object: gc2375afmipiraw_OBC_0054 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_OBC_0054 = NULL;

/* Exported Object: gc2375afmipiraw_RMM_0043 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_RMM_0043 = NULL;

/* Exported Object: gc2375afmipiraw_HFG_0085 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_HFG_0085 = NULL;

/* Exported Object: gc2375afmipiraw_NR3D_0044 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NR3D_0044 = NULL;

/* Exported Object: gc2375afmipiraw_NBC2_CCR_0052 */
extern "C" __attribute__((visibility("default"))) void* gc2375afmipiraw_NBC2_CCR_0052 = NULL;
