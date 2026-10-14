/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Zoom_Video_EIS_2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Zoom_Video_EIS_2"

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
#include "libCamera_ov8856sunnymipiraw_Zoom_Video_EIS_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0420 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0420 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0432 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0432 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0421 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0421 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0433 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0433 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0422 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0422 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0434 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0434 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0423 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0423 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0435 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0435 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0390 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0390 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0424 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0424 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0436 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0436 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0430 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0430 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0350 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0350 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0391 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0391 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0425 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0425 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0437 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0437 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0431 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0431 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0351 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0351 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0380 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0380 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0392 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0392 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0426 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0426 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0438 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0438 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0420 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0420 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0432 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0432 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0340 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0340 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0352 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0352 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0381 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0381 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0393 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0393 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0427 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0427 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0439 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0439 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0421 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0421 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0433 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0433 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0310 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0310 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0341 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0341 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0353 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0353 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0382 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0382 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0394 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0394 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0428 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0428 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0422 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0422 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0434 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0434 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0311 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0311 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0342 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0342 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0354 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0354 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0383 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0383 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0395 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0395 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0429 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0429 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0423 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0423 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0435 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0435 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0300 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0300 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0312 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0312 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0343 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0343 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0355 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0355 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0384 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0384 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0396 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0396 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0424 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0424 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0436 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0436 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0301 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0301 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0313 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0313 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0344 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0344 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0356 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0356 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0385 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0385 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0397 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0397 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0425 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0425 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0437 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0437 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0302 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0302 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0314 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0314 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0345 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0345 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0357 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0357 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0386 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0386 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0398 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0398 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0426 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0426 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0438 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0438 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0303 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0303 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0315 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0315 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0346 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0346 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0358 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0358 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0387 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0387 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0399 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0399 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0427 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0427 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0439 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0439 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0304 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0304 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0316 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0316 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0310 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0310 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0347 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0347 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0359 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0359 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0388 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0388 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0428 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0428 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0305 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0305 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0317 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0317 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0311 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0311 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0348 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0348 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0389 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0389 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0429 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0429 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0306 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0306 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0318 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0318 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0300 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0300 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0312 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0312 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0349 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0349 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0307 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0307 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0319 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0319 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0301 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0301 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0313 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0313 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0308 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0308 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0302 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0302 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0314 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0314 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0309 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0309 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0303 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0303 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0315 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0315 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0304 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0304 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0316 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0316 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0305 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0305 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0317 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0317 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0390 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0390 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0306 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0306 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0318 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0318 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0391 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0391 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0307 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0307 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0319 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0319 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0380 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0380 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0392 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0392 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0308 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0308 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0381 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0381 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0393 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0393 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0309 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0309 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0382 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0382 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0394 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0394 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0383 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0383 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0395 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0395 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0384 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0384 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0396 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0396 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0385 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0385 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0397 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0397 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0386 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0386 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0398 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0398 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0387 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0387 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0399 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0399 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0388 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0388 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0389 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0389 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0430 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0430 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0431 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0431 = NULL;
