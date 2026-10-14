/*
 * Reverse-Engineered Source for: libCamera_s5k3t1sunnymipiraw_3rd_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t1sunnymipiraw_3rd_Capture"

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
#include "libCamera_s5k3t1sunnymipiraw_3rd_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0240 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0240 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0170 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0241 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0241 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0171 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0242 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0242 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0172 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0243 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0243 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0173 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0244 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0244 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0174 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0200 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0245 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0245 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0175 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0201 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0246 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0246 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0176 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0202 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0247 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0247 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0177 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0203 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0210 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0248 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0248 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0178 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0204 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0211 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0249 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0249 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0179 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0205 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0212 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0206 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0213 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0207 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0214 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0208 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0215 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0209 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0216 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0217 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0218 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0219 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0240 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0240 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0241 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0241 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0242 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0242 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0243 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0243 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0244 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0244 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0245 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0245 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0246 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0246 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0247 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0247 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0248 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0248 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0249 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0249 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0250 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0250 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0251 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0251 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0252 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0252 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0253 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0253 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0254 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0254 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0210 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0255 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0255 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0211 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0256 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0256 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0212 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0257 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0257 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0213 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0258 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0258 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0214 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0259 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0259 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0160 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0215 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0161 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0216 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0162 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0217 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0163 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0218 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0164 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0219 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0165 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0166 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0167 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0200 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0168 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0201 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0169 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0202 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0250 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0250 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0203 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0251 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0251 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0204 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0252 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0252 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0205 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0253 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0253 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0206 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0254 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0254 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0207 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0255 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0255 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0208 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0256 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0256 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0209 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0257 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0257 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0258 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0258 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0259 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0259 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0127 = NULL;
