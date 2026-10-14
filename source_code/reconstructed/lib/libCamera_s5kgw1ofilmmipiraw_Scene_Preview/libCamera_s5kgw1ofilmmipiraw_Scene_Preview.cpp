/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Scene_Preview"

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
#include "libCamera_s5kgw1ofilmmipiraw_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AE_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0150 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0151 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0152 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0153 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0154 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0155 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0156 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0157 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0158 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0159 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0070 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0071 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0072 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0190 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0073 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ClearZoom_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ClearZoom_0001 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0010 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0010 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0191 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0074 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0011 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0192 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0075 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0100 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0070 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0193 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0076 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0101 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0071 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0194 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0077 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0102 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0072 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0195 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0078 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0103 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0073 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0196 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0079 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0104 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0074 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0197 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0105 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0075 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0198 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0106 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0076 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0199 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0107 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0077 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0108 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0078 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0109 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0079 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DCE_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0140 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0141 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0142 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0143 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0144 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0145 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0146 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0147 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0180 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0148 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0181 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0149 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0182 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0183 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0007 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0184 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0008 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0185 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0009 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0186 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0187 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0060 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0188 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0061 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0189 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0062 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0063 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_LCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_LCE_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0064 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0065 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0066 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0067 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0110 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0068 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0111 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0069 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0112 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0113 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0114 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0115 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0116 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0117 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0118 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0119 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0150 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0151 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0152 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0140 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0153 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0141 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0010 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0010 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0154 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0142 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_FD_ANR_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_FD_ANR_0011 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0155 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0143 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0156 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0144 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0157 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0145 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0190 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0158 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0146 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0191 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0159 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0147 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0192 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0148 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0193 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0149 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0194 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0060 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0195 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0061 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0196 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0062 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0180 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0197 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0063 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0070 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0181 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0198 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0064 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0071 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0182 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0199 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0065 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0072 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0060 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0183 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0066 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0073 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0061 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0184 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0067 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0074 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0062 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0185 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0068 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0075 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0063 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_GMA_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_GMA_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0186 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0069 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0076 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0064 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0187 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0077 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0065 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0007 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0188 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0078 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ABF_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ABF_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0066 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_THRES_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_THRES_0003 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0008 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0189 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0079 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0067 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_TBL_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_TBL_0009 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0068 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0069 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_CCR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_CCR_0022 = NULL;
