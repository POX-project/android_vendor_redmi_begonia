/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Video720P_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Video720P_Preview"

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
#include "libCamera_ov8856sunnymipiraw_Video720P_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_NR3D_0069 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0069 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0150 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0150 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0110 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0110 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0151 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0151 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0111 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0111 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0140 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0140 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0152 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0152 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0100 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0100 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0112 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0112 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0141 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0141 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0153 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0153 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0101 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0101 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0113 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0113 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0142 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0142 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0154 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0154 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0102 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0102 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0114 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0114 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0143 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0143 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0155 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0155 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0190 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0190 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0103 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0103 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0115 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0115 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0144 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0144 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0156 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0156 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0191 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0191 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0104 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0104 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0116 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0116 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0145 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0145 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0157 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0157 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0180 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0180 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0192 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0192 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0105 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0105 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0117 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0117 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0146 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0146 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0158 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0158 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0181 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0181 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0193 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0193 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0106 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0106 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0118 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0118 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0147 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0147 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0159 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0159 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0182 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0182 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0194 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0194 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0107 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0107 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0119 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0119 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0148 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0148 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0183 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0183 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0195 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0195 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0108 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0108 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0149 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0149 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0184 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0184 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0196 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0196 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0190 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0190 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0109 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0109 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0185 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0185 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0197 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0197 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0191 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0191 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0186 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0186 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0198 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0198 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0180 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0180 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0192 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0192 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0187 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0187 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0199 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0199 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0181 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0181 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0193 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0193 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0070 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0070 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0188 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0188 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0182 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0182 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0194 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0194 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0071 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0071 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0189 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0189 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0183 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0183 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0195 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0195 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0060 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0060 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0072 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0072 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0150 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0150 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0184 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0184 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0196 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0196 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0061 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0061 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0073 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0073 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0151 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0151 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0185 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0185 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0197 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0197 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0062 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0062 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0074 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0074 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0140 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0140 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0152 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0152 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0186 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0186 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0198 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0198 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0063 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0063 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0075 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0075 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0141 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0141 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0153 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0153 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0187 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0187 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0199 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0199 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0064 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0064 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0076 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0076 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0070 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0070 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0142 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0142 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0154 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0154 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0188 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0188 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0065 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0065 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0077 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0077 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0071 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0071 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0143 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0143 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0155 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0155 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0189 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0189 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0066 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0066 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0078 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0078 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0060 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0060 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0072 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0072 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0144 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0144 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0156 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0156 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0067 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0067 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0079 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0079 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0061 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0061 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0073 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0073 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0145 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0145 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0157 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0157 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0068 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0068 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0062 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0062 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0074 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0074 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0146 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0146 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0158 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0158 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0069 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0069 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0063 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0063 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0075 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0075 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0147 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0147 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0159 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0159 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0064 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0064 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0076 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0076 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0148 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0148 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0065 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0065 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0077 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0077 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0149 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0149 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0066 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0066 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0078 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0078 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0067 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0067 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0079 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0079 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0068 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0068 = NULL;
