/*
 * Reverse-Engineered Source for: libCamera_s5k3t2mipiraw_YUV_Reprocess.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t2mipiraw_YUV_Reprocess"

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
#include "libCamera_s5k3t2mipiraw_YUV_Reprocess.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0311 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0311 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0180 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0180 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0192 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0192 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0300 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0300 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0312 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0312 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0190 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0190 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0181 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0181 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0193 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0193 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0301 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0301 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0313 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0313 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0191 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0191 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0182 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0182 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0194 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0194 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0302 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0302 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0314 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0314 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0180 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0180 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0192 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0192 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0183 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0183 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0195 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0195 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0303 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0303 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0315 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0315 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0181 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0181 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0193 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0193 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0184 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0184 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0196 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0196 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0304 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0304 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0316 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0316 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0182 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0182 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0194 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0194 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0185 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0185 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0197 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0197 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0310 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0310 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0305 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0305 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0317 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0317 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0183 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0183 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0195 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0195 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0186 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0186 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0198 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0198 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0311 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0311 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0306 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0306 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0318 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0318 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0184 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0184 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0196 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0196 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0187 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0187 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0199 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0199 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0270 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0270 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0300 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0300 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0312 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0312 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0307 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0307 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0319 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0319 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0185 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0185 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0197 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0197 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0188 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0188 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0230 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0230 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0271 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0271 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0301 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0301 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0313 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0313 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0308 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0308 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0186 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0186 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0198 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0198 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0189 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0189 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0231 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0231 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0260 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0260 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0272 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0272 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0302 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0302 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0314 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0314 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0309 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0309 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0187 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0187 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0199 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0199 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0220 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0220 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0232 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0232 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0261 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0261 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0273 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0273 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0303 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0303 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0315 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0315 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0188 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0188 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0221 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0221 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0233 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0233 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0262 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0262 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0274 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0274 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0304 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0304 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0316 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0316 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_LCE_LINK_0189 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_LCE_LINK_0189 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0222 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0222 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0234 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0234 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0263 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0263 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0275 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0275 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0305 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0305 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0317 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0317 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0223 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0223 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0235 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0235 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0264 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0264 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0276 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0276 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0306 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0306 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0318 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0318 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0224 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0224 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0236 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0236 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0270 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0270 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0265 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0265 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0277 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0277 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0307 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0307 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0319 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0319 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0225 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0225 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0237 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0237 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0271 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0271 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0266 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0266 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0278 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0278 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0308 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0308 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0226 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0226 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0238 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0238 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0260 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0260 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0272 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0272 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0267 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0267 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0279 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0279 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC2_ANR2_0309 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC2_ANR2_0309 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0227 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0227 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0239 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0239 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0261 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0261 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0273 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0273 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0268 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0268 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0228 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0228 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0262 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0262 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0274 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0274 = NULL;

/* Exported Object: s5k3t2mipiraw_HFG_0269 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_HFG_0269 = NULL;

/* Exported Object: s5k3t2mipiraw_UDM_0229 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_UDM_0229 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0263 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0263 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0275 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0275 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0264 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0264 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0276 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0276 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0265 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0265 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0277 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0277 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0266 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0266 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0278 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0278 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0267 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0267 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0279 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0279 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0268 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0268 = NULL;

/* Exported Object: s5k3t2mipiraw_EE_0269 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_EE_0269 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0190 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0190 = NULL;

/* Exported Object: s5k3t2mipiraw_NBC_ANR_0310 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NBC_ANR_0310 = NULL;

/* Exported Object: s5k3t2mipiraw_NR3D_0191 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_NR3D_0191 = NULL;
