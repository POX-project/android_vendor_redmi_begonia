/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Video_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Video_Preview"

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
#include "libCamera_ov8856sunnymipiraw_Video_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_ADBS_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0180 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0180 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0239 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0239 = NULL;

/* Exported Object: ov8856sunnymipiraw_GMA_0004 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_GMA_0004 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0181 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0181 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0182 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0182 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0183 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0183 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0100 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0100 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0184 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0184 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0101 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0101 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0185 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0185 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0102 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0102 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0186 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0186 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0103 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0103 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0187 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0187 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0104 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0104 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0188 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0188 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0105 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0105 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0189 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0189 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0106 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0106 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0220 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0220 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0107 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0107 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0221 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0221 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0108 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0108 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0222 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0222 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0109 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0109 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0223 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0223 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0224 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0224 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0012 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0012 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0225 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0225 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0013 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0013 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0226 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0226 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0014 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0014 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0227 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0227 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0015 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0015 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0228 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0228 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0110 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0110 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0016 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0016 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0180 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0180 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0229 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0229 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0111 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0111 = NULL;

/* Exported Object: ov8856sunnymipiraw_FD_ANR_0017 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_FD_ANR_0017 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0181 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0181 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0112 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0112 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0182 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0182 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0113 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0113 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_CA_LTM_0002 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CA_LTM_0002 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0183 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0183 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0114 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0114 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0184 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0184 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0115 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0115 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0185 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0185 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0116 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0116 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0140 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0140 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0186 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0186 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0117 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0117 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0141 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0141 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0187 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0187 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0118 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0118 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0142 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0142 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0188 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0188 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0119 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0119 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0143 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0143 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0189 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0189 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0144 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0144 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_AE_0003 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_AE_0003 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0145 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0145 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0146 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0146 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0147 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0147 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0148 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0148 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0190 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0190 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0149 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0149 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0191 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0191 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0192 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0192 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0193 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0193 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0110 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0110 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0194 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0194 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0111 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0111 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0195 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0195 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0112 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0112 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0196 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0196 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0113 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0113 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0197 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0197 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0114 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0114 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0198 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0198 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0115 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0115 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0080 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0080 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0199 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0199 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0116 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0116 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0081 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0081 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0230 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0230 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0117 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0117 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0082 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0082 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0231 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0231 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0118 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0118 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0083 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0083 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0232 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0232 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0119 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0119 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0084 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0084 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0233 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0233 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0085 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0085 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0234 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0234 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0086 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0086 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0235 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0235 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0087 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0087 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0236 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0236 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0088 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0088 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0237 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0237 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0089 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0089 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0238 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0238 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0190 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0190 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0239 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0239 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0220 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0220 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0191 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0191 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0221 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0221 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0192 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0192 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0222 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0222 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0193 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0193 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0223 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0223 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0194 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0194 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0224 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0224 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0195 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0195 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0225 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0225 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0150 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0150 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0196 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0196 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0226 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0226 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0151 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0151 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0197 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0197 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0227 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0227 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0152 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0152 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_LCE_0004 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_LCE_0004 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0198 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0198 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0228 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0228 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0153 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0153 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0199 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0199 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0229 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0229 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0154 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0154 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0155 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0155 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ABF_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ABF_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_THRES_0004 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_THRES_0004 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0156 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0156 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0157 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0157 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0158 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0158 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0159 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0159 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_RNR_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RNR_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_BPC_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_BPC_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_CCR_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_CCR_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0090 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0090 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0091 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0091 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0092 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0092 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0093 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0093 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_DBS_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DBS_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0094 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0094 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0100 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0100 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0095 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0095 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0101 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0101 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0096 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0096 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0102 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0102 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0097 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0097 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0050 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0050 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0103 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0103 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0098 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0098 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0012 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0012 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0051 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0051 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0104 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0104 = NULL;

/* Exported Object: ov8856sunnymipiraw_SWNR_0099 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_SWNR_0099 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0013 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0013 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0052 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0052 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0105 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0105 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0014 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0014 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_NR1_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_NR1_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0053 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0053 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0230 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0230 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0106 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0106 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0015 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0015 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0054 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0054 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0231 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0231 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0107 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0107 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0016 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0016 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0055 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0055 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0232 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0232 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0108 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0108 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_TBL_0017 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_TBL_0017 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0056 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0056 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0233 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0233 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0109 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0109 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0057 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0057 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0234 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0234 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0043 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0043 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0047 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0047 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0058 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0058 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0235 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0235 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0044 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0044 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0040 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0040 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0048 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0048 = NULL;

/* Exported Object: ov8856sunnymipiraw_RMM_0059 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_RMM_0059 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0236 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0236 = NULL;

/* Exported Object: ov8856sunnymipiraw_DCE_0004 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DCE_0004 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0045 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0045 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0041 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0041 = NULL;

/* Exported Object: ov8856sunnymipiraw_OBC_0049 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_OBC_0049 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0237 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0237 = NULL;

/* Exported Object: ov8856sunnymipiraw_ADBS_0046 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ADBS_0046 = NULL;

/* Exported Object: ov8856sunnymipiraw_BNR_PDC_0042 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_BNR_PDC_0042 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0238 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0238 = NULL;

/* Exported Object: ov8856sunnymipiraw_ClearZoom_0002 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_ClearZoom_0002 = NULL;
