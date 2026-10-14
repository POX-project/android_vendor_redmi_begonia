/*
 * Reverse-Engineered Source for: libCamera_s5k3t2mipiraw_3rd_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t2mipiraw_3rd_Preview"

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
#include "libCamera_s5k3t2mipiraw_3rd_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0237 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0237 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0238 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0238 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0239 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0239 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0270 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0270 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0260 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0260 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0271 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0271 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0261 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0261 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0272 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0272 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0262 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0262 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0190 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0190 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0273 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0273 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0263 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0263 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0191 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0191 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0274 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0274 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0264 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0264 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0192 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0192 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0275 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0275 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0265 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0265 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0193 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0193 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0276 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0276 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0266 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0266 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0194 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0194 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0277 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0277 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0267 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0267 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0195 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0195 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0278 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0278 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0268 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0268 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0196 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0196 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0279 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0279 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0269 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0269 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0197 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0197 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0198 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0198 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0199 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0199 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0220 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0220 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0221 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0221 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0222 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0222 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0223 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0223 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0224 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0224 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0225 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0225 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0226 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0226 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0220 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0220 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0227 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0227 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0221 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0221 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0228 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0228 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0222 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0222 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0229 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0229 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0223 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0223 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0270 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0270 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0224 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0224 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0271 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0271 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0225 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0225 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0272 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0272 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0226 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0226 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0273 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0273 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0227 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0227 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0274 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0274 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0228 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0228 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0275 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0275 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0229 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0229 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0276 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0276 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0277 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0277 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0278 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0278 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0260 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0260 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0279 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0279 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0261 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0261 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0262 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0262 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0180 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0180 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0263 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0263 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0181 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0181 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0264 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0264 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0182 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0182 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0265 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0265 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0183 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0183 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0266 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0266 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0184 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0184 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0267 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0267 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0185 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0185 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0268 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0268 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0186 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0186 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0269 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0269 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0187 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0187 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0188 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0188 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0189 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0189 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0153 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0154 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0155 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0230 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0230 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0156 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0231 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0231 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0157 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0232 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0232 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0158 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0233 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0233 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0159 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0140 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0234 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0234 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0141 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0235 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0235 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0142 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0236 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0236 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0143 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0230 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0230 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0237 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0237 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0144 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0231 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0231 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0238 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0238 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0145 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0232 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0232 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0239 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0239 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0146 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0233 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0233 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0150 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0147 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0234 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0234 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0151 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0148 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0235 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0235 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0152 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0149 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0236 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0236 = NULL;
