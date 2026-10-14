/*
 * Reverse-Engineered Source for: libCamera_ov8856ofilmmipiraw_Zoom_Video_EIS.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856ofilmmipiraw_Zoom_Video_EIS"

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
#include "libCamera_ov8856ofilmmipiraw_Zoom_Video_EIS.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856ofilmmipiraw_EE_0347 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0347 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0359 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0359 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0387 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0387 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0399 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0399 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0263 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0263 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0275 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0275 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0302 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0302 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0314 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0314 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0348 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0348 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0388 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0388 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0264 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0264 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0276 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0276 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0303 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0303 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0315 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0315 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0349 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0349 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0389 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0389 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0265 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0265 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0277 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0277 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0304 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0304 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0316 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0316 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0266 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0266 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0278 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0278 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0305 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0305 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0317 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0317 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0267 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0267 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0279 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0279 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0306 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0306 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0318 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0318 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0268 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0268 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0307 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0307 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0319 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0319 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0269 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0269 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0308 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0308 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0309 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0309 = NULL;

/* Exported Object: ov8856ofilmmipiraw_AWB_0005 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_AWB_0005 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0350 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0350 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0390 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0390 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0351 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0351 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0391 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0391 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0340 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0340 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0352 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0352 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0380 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0380 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0392 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0392 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0270 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0270 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0341 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0341 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0353 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0353 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0381 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0381 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0393 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0393 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0271 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0271 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0342 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0342 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0354 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0354 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0382 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0382 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0394 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0394 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0260 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0260 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0272 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0272 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0343 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0343 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0355 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0355 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0383 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0383 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0395 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0395 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0261 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0261 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0273 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0273 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0350 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0350 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0344 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0344 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0356 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0356 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0384 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0384 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0396 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0396 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0390 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0390 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0262 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0262 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0274 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0274 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0351 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0351 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0345 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0345 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0357 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0357 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0385 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0385 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0397 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0397 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0391 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0391 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0263 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0263 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0275 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0275 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0340 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0340 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0352 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0352 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0346 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0346 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0358 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0358 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0386 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0386 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0398 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0398 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0380 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0380 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0392 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0392 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0264 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0264 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0276 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0276 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0341 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0341 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0353 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0353 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0347 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0347 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0359 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0359 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0387 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0387 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0399 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0399 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0381 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0381 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0393 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0393 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0265 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0265 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0277 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0277 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0342 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0342 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0354 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0354 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0348 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0348 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0388 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0388 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0382 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0382 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0394 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0394 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0266 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0266 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0278 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0278 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0270 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0270 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0343 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0343 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0355 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0355 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0349 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0349 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0389 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0389 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0383 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0383 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0395 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0395 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0267 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0267 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0279 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0279 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0271 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0271 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0310 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0310 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0344 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0344 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0356 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0356 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0384 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0384 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0396 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0396 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0268 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0268 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0260 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0260 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0272 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0272 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0311 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0311 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0345 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0345 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0357 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0357 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0385 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0385 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0397 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0397 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0269 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0269 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0261 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0261 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0273 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0273 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0300 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0300 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0312 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0312 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0346 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0346 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0358 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0358 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0386 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0386 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0398 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0398 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0262 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0262 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0274 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0274 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0301 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0301 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0313 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0313 = NULL;
