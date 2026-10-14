/*
 * Reverse-Engineered Source for: libCamera_ov8856ofilmmipiraw_Zoom_Video720P_2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856ofilmmipiraw_Zoom_Video720P_2"

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
#include "libCamera_ov8856ofilmmipiraw_Zoom_Video720P_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856ofilmmipiraw_EE_0311 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0311 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0305 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0305 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0317 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0317 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0345 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0345 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0357 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0357 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0351 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0351 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0223 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0223 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0235 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0235 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0300 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0300 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0312 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0312 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0306 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0306 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0318 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0318 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0346 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0346 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0358 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0358 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0340 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0340 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0352 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0352 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0224 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0224 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0236 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0236 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0301 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0301 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0313 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0313 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0307 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0307 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0319 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0319 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0347 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0347 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0359 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0359 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0341 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0341 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0353 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0353 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0225 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0225 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0237 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0237 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0302 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0302 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0314 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0314 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0308 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0308 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0348 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0348 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0342 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0342 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0354 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0354 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0226 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0226 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0238 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0238 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0230 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0230 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0303 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0303 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0315 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0315 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0309 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0309 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0349 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0349 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0343 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0343 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0355 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0355 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0227 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0227 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0239 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0239 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0231 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0231 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0304 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0304 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0316 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0316 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0344 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0344 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0356 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0356 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0228 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0228 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0220 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0220 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0232 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0232 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0305 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0305 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0317 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0317 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0345 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0345 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0357 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0357 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0229 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0229 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0221 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0221 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0233 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0233 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0306 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0306 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0318 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0318 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0346 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0346 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0358 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0358 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0222 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0222 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0234 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0234 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0307 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0307 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0319 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0319 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0347 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0347 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0359 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0359 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0223 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0223 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0235 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0235 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0308 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0308 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0348 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0348 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0224 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0224 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0236 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0236 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0309 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0309 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0349 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0349 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0225 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0225 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0237 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0237 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0226 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0226 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0238 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0238 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0227 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0227 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0239 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0239 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0228 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0228 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0229 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0229 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0270 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0270 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0271 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0271 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0260 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0260 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0272 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0272 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0261 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0261 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0273 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0273 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0262 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0262 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0274 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0274 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0263 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0263 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0275 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0275 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0264 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0264 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0276 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0276 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0265 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0265 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0277 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0277 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0266 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0266 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0278 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0278 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0267 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0267 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0279 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0279 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0268 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0268 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0269 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0269 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0310 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0310 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0350 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0350 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0311 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0311 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0351 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0351 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0300 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0300 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0312 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0312 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0340 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0340 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0352 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0352 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0230 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0230 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0301 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0301 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0313 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0313 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0341 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0341 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0353 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0353 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0231 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0231 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0302 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0302 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0314 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0314 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0342 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0342 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0354 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0354 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0220 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0220 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0232 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0232 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0303 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0303 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0315 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0315 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0343 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0343 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0355 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0355 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0221 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0221 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0233 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0233 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0310 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0310 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0304 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0304 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0316 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0316 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0344 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0344 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0356 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0356 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0350 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0350 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0222 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0222 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0234 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0234 = NULL;
