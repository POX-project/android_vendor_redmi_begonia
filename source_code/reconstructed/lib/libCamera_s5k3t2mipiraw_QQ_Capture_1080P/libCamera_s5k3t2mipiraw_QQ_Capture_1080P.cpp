/*
 * Reverse-Engineered Source for: libCamera_s5k3t2mipiraw_QQ_Capture_1080P.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t2mipiraw_QQ_Capture_1080P"

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
#include "libCamera_s5k3t2mipiraw_QQ_Capture_1080P.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0167 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0212 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0203 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0168 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0213 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0204 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0169 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0214 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0205 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0215 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0206 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0216 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0207 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0217 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0208 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0218 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0209 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0219 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0170 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0171 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0172 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0173 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0174 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0175 = NULL;

/* Exported Object: s5k3t2mipiraw_GMA_0005 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_GMA_0005 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0176 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0177 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0178 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0179 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_DCE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DCE_0005 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0170 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0170 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0171 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0171 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0172 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0172 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0173 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0173 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0174 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0174 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0210 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0175 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0175 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0211 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0176 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0176 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0212 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0177 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0177 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0213 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0120 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0178 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0178 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0214 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0121 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0179 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0179 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0215 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0122 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0216 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0123 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0217 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0124 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0218 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0125 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0219 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0126 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0127 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0200 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0128 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0201 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0129 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0202 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_ADBS_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_ADBS_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0203 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0204 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_RMM_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RMM_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0205 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0206 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0207 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0208 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0209 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_BPC_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_BPC_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0160 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0161 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_OBC_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_OBC_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0162 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0163 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0164 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0165 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0099 = NULL;

/* Exported Object: s5k3t2mipiraw_AE_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_AE_0003 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0166 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0167 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0167 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0080 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0168 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0168 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0081 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0169 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0169 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0082 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0130 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0083 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0131 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0084 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0132 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0085 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0160 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0160 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0133 = NULL;

/* Exported Object: s5k3t2mipiraw_LCE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_LCE_0005 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0086 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0161 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0161 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0134 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0087 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0091 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0162 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0162 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0135 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0088 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0092 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0163 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0163 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0136 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0096 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_PDC_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_PDC_0089 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0093 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0164 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0164 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0200 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0137 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0097 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0094 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0165 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0165 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0210 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0201 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0138 = NULL;

/* Exported Object: s5k3t2mipiraw_BNR_NR1_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_BNR_NR1_0098 = NULL;

/* Exported Object: s5k3t2mipiraw_DBS_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DBS_0095 = NULL;

/* Exported Object: s5k3t2mipiraw_RNR_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_RNR_0090 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0166 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0166 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0211 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0202 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0139 = NULL;
