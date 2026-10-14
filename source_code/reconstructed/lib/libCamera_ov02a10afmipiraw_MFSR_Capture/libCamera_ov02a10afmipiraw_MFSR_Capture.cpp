/*
 * Reverse-Engineered Source for: libCamera_ov02a10afmipiraw_MFSR_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10afmipiraw_MFSR_Capture"

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
#include "libCamera_ov02a10afmipiraw_MFSR_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10afmipiraw_EE_0122 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0122 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0134 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0134 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0145 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0145 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0157 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0157 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0110 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0110 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0123 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0123 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0135 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0135 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0146 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0146 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0158 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0158 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0111 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0111 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0124 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0124 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0136 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0136 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0147 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0147 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0159 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0159 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0090 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0100 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0100 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0112 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0112 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0125 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0125 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0137 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0137 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0148 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0148 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0150 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0150 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0091 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0101 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0101 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0113 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0113 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0126 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0126 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0138 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0138 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0130 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0130 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0149 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0149 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0151 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0151 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0080 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0092 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0102 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0102 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0114 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0114 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0127 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0127 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0139 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0139 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0131 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0131 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0140 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0140 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0152 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0152 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0081 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0093 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0103 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0103 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0115 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0115 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0128 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0128 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0120 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0120 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0132 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0132 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0141 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0141 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0153 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0153 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0082 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0094 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0104 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0104 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0116 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0116 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0129 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0129 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0121 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0121 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0133 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0133 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0142 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0142 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0154 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0154 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0083 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0095 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0105 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0105 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0117 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0117 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0122 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0122 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0134 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0134 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0143 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0143 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0155 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0155 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0084 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0096 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0106 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0106 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0118 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0118 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0123 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0123 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0135 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0135 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0144 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0144 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0156 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0156 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0090 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0085 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0097 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0107 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0107 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0119 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0119 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0124 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0124 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0136 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0136 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0145 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0145 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0157 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0157 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0091 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0086 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0098 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0108 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0108 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0125 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0125 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0137 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0137 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0146 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0146 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0158 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0158 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0080 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0092 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0087 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0099 = NULL;

/* Exported Object: ov02a10afmipiraw_UDM_0109 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_UDM_0109 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0126 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0126 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0138 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0138 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0147 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0147 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0159 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0159 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0081 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0093 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0088 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0127 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0127 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0139 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0139 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0148 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0148 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0082 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0094 = NULL;

/* Exported Object: ov02a10afmipiraw_NR3D_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NR3D_0089 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0128 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0128 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_ANR_0149 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_ANR_0149 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0083 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0095 = NULL;

/* Exported Object: ov02a10afmipiraw_HFG_0129 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_HFG_0129 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0084 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0096 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0085 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0097 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0086 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0098 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0087 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0099 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0088 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC_LCE_LINK_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC_LCE_LINK_0089 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0150 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0150 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0151 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0151 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0140 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0140 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0152 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0152 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0130 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0130 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0141 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0141 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0153 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0153 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0131 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0131 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0142 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0142 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0154 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0154 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0120 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0120 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0132 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0132 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0143 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0143 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0155 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0155 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0121 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0121 = NULL;

/* Exported Object: ov02a10afmipiraw_EE_0133 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_EE_0133 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0144 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0144 = NULL;

/* Exported Object: ov02a10afmipiraw_NBC2_ANR2_0156 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_NBC2_ANR2_0156 = NULL;
