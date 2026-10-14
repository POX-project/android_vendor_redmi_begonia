/*
 * Reverse-Engineered Source for: libCamera_ov02a10afmipiraw_Zoom_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10afmipiraw_Zoom_Preview"

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
#include "libCamera_ov02a10afmipiraw_Zoom_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0126 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0126 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0127 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0127 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0128 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0128 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0129 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0129 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0100 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0100 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0101 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0101 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0130 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0130 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0090 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0110 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0110 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0102 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0102 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0131 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0131 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0091 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0111 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0111 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0103 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0103 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0132 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0132 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0092 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0112 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0112 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0104 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0104 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0133 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0133 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0093 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0113 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0113 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0105 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0105 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0134 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0134 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0094 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0114 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0114 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0106 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0106 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0135 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0135 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0095 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0115 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0115 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0107 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0107 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0136 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0136 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0096 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0116 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0116 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0108 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0108 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0137 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0137 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0097 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0117 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0117 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0109 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0109 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0138 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0138 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0098 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0118 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0118 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0139 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0139 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0099 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0119 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0119 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_DCE_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DCE_0005 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0130 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0130 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0131 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0131 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0132 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0132 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0133 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0133 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0134 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0134 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0135 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0135 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0136 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0136 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0137 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0137 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0138 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0138 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0139 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0139 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0110 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0110 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0111 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0111 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0112 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0112 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0113 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0113 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0114 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0114 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0115 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0115 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0116 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0116 = NULL;

/* Exported Object: ov02a10afmipiraw_AE_0003 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_AE_0003 = NULL;

/* Exported Object: ov02a10afmipiraw_ADBS_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_ADBS_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0117 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0117 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0118 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0118 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0119 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0119 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0120 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0120 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0080 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0100 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0100 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0121 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0121 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0081 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_PDC_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_PDC_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_RMM_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RMM_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0101 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0101 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0122 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0122 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0082 = NULL;

/* Exported Object: ov02a10afmipiraw_DBS_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DBS_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0102 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0102 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0123 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0123 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0083 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0103 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0103 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0124 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0124 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0084 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0104 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0104 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0125 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0125 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0085 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0105 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0105 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0126 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0126 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0086 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_RNR_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_RNR_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0106 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0106 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0127 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0127 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0087 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0107 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0107 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0128 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0128 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0088 = NULL;

/* Exported Object: ov02a10afmipiraw_GMA_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_GMA_0005 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0108 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0108 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0129 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0129 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0089 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0109 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0109 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_NR1_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_NR1_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_LCE_0005 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_LCE_0005 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0120 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0120 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0121 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0121 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0122 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0122 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0123 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0123 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0124 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0124 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_BNR_BPC_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_BNR_BPC_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_OBC_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_OBC_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0125 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0125 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0062 = NULL;
