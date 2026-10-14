/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Face_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Face_Preview"

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
#include "libCamera_s5kgw1sunnymipiraw_Face_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0101 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0114 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0102 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0115 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0103 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0116 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0104 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0117 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0105 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0118 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0106 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0119 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0107 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0108 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0109 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0110 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0111 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0112 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0001 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0100 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0113 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0101 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0114 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0102 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0115 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0103 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0116 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0104 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0117 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0105 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0118 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0106 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0119 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0107 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0108 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0109 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0153 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0110 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0111 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0112 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0100 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0113 = NULL;
