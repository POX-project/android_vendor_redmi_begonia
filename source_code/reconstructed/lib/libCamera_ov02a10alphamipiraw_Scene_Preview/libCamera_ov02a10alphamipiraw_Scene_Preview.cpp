/*
 * Reverse-Engineered Source for: libCamera_ov02a10alphamipiraw_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10alphamipiraw_Scene_Preview"

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
#include "libCamera_ov02a10alphamipiraw_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10alphamipiraw_ADBS_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0069 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0095 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0096 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0097 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0070 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0098 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0071 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0099 = NULL;

/* Exported Object: ov02a10alphamipiraw_DCE_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DCE_0001 = NULL;

/* Exported Object: ov02a10alphamipiraw_LCE_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_LCE_0001 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0072 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0073 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0074 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0075 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0076 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0077 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0078 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0079 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0040 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0040 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0080 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0041 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0041 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0081 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0042 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0042 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0082 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0043 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0043 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0083 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0044 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0044 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0084 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0045 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0045 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0085 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0046 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0046 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0086 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0047 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0047 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0087 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0048 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0048 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0088 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0049 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0049 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0089 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0070 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0071 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0072 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0073 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0074 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0075 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0076 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0077 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0078 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0079 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0080 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0081 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0082 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_CA_LTM_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_CA_LTM_0001 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0083 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0084 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0085 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0086 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0087 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0060 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0088 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0050 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0050 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0061 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0090 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0089 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0051 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0051 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0062 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0091 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0052 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0052 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0063 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0092 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0053 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0053 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0064 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0093 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0054 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0054 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0065 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0094 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0055 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0055 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_NR1_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_NR1_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0066 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0095 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0056 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0056 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_RNR_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RNR_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0067 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0096 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0057 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0057 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0068 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0097 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0058 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0058 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_HFG_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_HFG_0069 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0098 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0023 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0023 = NULL;

/* Exported Object: ov02a10alphamipiraw_UDM_0059 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_UDM_0059 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC2_ANR2_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC2_ANR2_0099 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0024 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0024 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0025 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0025 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0026 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0026 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_DBS_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_DBS_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_RMM_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_RMM_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0027 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0027 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0028 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0028 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_BPC_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_BPC_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_NR3D_0029 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NR3D_0029 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0060 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0030 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0030 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0061 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_ClearZoom_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ClearZoom_0001 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0031 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0031 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0062 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0032 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0032 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0063 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0033 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0033 = NULL;

/* Exported Object: ov02a10alphamipiraw_OBC_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_OBC_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0064 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0090 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0034 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0034 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0065 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0091 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0035 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0035 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0020 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0020 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0066 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0092 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0038 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0038 = NULL;

/* Exported Object: ov02a10alphamipiraw_GMA_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_GMA_0001 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0036 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0036 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0021 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0021 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0067 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0093 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_LCE_LINK_0039 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_LCE_LINK_0039 = NULL;

/* Exported Object: ov02a10alphamipiraw_ADBS_0037 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_ADBS_0037 = NULL;

/* Exported Object: ov02a10alphamipiraw_BNR_PDC_0022 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_BNR_PDC_0022 = NULL;

/* Exported Object: ov02a10alphamipiraw_EE_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_EE_0068 = NULL;

/* Exported Object: ov02a10alphamipiraw_NBC_ANR_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10alphamipiraw_NBC_ANR_0094 = NULL;
