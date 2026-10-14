/*
 * Reverse-Engineered Source for: libCamera_s5k3t1ofilmmipiraw_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t1ofilmmipiraw_Scene_Preview"

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
#include "libCamera_s5k3t1ofilmmipiraw_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0135 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0097 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0136 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0098 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0137 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0099 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0138 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_GMA_0002 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_GMA_0002 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0139 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0006 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0007 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0008 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0008 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0009 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0009 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0160 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0161 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0162 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_LCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_LCE_0002 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0163 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0164 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0165 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ClearZoom_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ClearZoom_0001 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0166 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0167 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0168 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0006 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0169 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0007 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0008 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0008 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0170 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0009 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0009 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0171 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0172 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0173 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0174 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0175 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0080 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0176 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0081 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0177 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0082 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0178 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0083 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0179 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0084 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0085 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0086 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0120 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0087 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0010 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0010 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0121 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0088 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_TBL_0011 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_TBL_0011 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0122 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0089 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0123 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0124 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0125 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0126 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0127 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0128 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0129 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0170 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0171 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DCE_0002 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0172 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0010 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0010 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RMM_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RMM_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0173 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_FD_ANR_0011 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_FD_ANR_0011 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0174 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_THRES_0004 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_THRES_0004 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0175 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0176 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0177 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0178 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ANR2_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ANR2_0179 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0080 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0081 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0120 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0082 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0121 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0083 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0090 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0122 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0084 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0091 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0123 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0085 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0092 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0124 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0086 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0093 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0125 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0087 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0094 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0126 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0088 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0095 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0127 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0089 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0096 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0130 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0128 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0097 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0131 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0129 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0098 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0132 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_SWNR_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_SWNR_0099 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0133 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0134 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0135 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0136 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0137 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0138 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_EE_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_EE_0139 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_BPC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_BPC_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_ADBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_ADBS_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0050 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0051 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0160 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0052 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0161 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0053 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0162 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0054 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_DBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_DBS_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0163 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0055 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_PDC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_PDC_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0164 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0056 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_RNR_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_RNR_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0165 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_LCE_LINK_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_LCE_LINK_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0046 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0057 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0166 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0047 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0058 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0167 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NR3D_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NR3D_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0090 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0048 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_BNR_NR1_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_BNR_NR1_0059 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0168 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0091 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_ABF_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_ABF_0049 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0130 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC_ANR_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC_ANR_0169 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0092 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0131 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0093 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0040 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0132 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0094 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0041 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0044 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0133 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0095 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0042 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_OBC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_OBC_0045 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_HFG_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_HFG_0134 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_UDM_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_UDM_0096 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_NBC2_CCR_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_NBC2_CCR_0043 = NULL;

/* Exported Object: s5k3t1ofilmmipiraw_CA_LTM_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1ofilmmipiraw_CA_LTM_0001 = NULL;
