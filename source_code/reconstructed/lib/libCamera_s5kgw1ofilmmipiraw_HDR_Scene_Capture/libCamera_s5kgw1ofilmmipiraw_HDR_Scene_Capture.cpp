/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_HDR_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_HDR_Scene_Capture"

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
#include "libCamera_s5kgw1ofilmmipiraw_HDR_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0184 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0197 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0185 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0198 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0186 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0199 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_CA_LTM_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_CA_LTM_0001 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0187 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0188 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0189 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0250 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0251 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0252 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_GMA_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_GMA_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0240 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0253 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0250 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0241 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0254 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0251 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0242 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0255 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0252 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AE_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AE_0004 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0243 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0256 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0240 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0253 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0244 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0257 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0241 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0254 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0245 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0258 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0242 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0255 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0246 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0259 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0243 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0256 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0247 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0244 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0257 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0248 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0245 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0258 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0249 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0246 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0259 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0247 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0248 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0249 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DCE_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0190 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0191 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0192 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_LCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_LCE_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0180 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0193 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0181 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0194 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0182 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0195 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0183 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0196 = NULL;
