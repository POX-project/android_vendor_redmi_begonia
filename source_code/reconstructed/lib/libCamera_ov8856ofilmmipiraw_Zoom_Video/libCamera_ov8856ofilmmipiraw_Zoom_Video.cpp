/*
 * Reverse-Engineered Source for: libCamera_ov8856ofilmmipiraw_Zoom_Video.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856ofilmmipiraw_Zoom_Video"

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
#include "libCamera_ov8856ofilmmipiraw_Zoom_Video.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856ofilmmipiraw_EE_0323 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0323 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0335 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0335 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0329 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0329 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0369 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0369 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0363 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0363 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0375 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0375 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0247 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0247 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0259 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0259 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0251 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0251 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0324 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0324 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0336 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0336 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0364 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0364 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0376 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0376 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0248 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0248 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0240 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0240 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0252 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0252 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0325 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0325 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0337 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0337 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0365 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0365 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0377 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0377 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0249 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0249 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0241 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0241 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0253 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0253 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0326 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0326 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0338 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0338 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0366 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0366 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0378 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0378 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0242 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0242 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0254 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0254 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0327 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0327 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0339 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0339 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0367 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0367 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0379 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0379 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0243 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0243 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0255 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0255 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0328 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0328 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0368 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0368 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0244 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0244 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0256 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0256 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0329 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0329 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0369 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0369 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0245 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0245 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0257 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0257 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0246 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0246 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0258 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0258 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0247 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0247 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0259 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0259 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0248 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0248 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0249 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0249 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0290 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0290 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0291 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0291 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0280 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0280 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0292 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0292 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0281 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0281 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0293 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0293 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0282 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0282 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0294 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0294 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0283 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0283 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0295 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0295 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0284 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0284 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0296 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0296 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0285 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0285 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0297 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0297 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0286 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0286 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0298 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0298 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0287 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0287 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0299 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0299 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0288 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0288 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0289 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0289 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0330 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0330 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0370 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0370 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0331 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0331 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0371 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0371 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0320 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0320 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0332 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0332 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0360 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0360 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0372 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0372 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0250 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0250 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0321 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0321 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0333 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0333 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0361 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0361 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0373 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0373 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0251 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0251 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0322 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0322 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0334 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0334 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0362 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0362 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0374 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0374 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0240 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0240 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0252 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0252 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0323 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0323 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0335 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0335 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0363 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0363 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0375 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0375 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0241 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0241 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0253 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0253 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0330 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0330 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0324 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0324 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0336 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0336 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0364 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0364 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0376 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0376 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0370 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0370 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0242 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0242 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0254 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0254 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0331 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0331 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0325 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0325 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0337 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0337 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0365 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0365 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0377 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0377 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0371 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0371 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0243 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0243 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0255 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0255 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0320 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0320 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0332 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0332 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0326 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0326 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0338 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0338 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0366 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0366 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0378 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0378 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0360 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0360 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0372 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0372 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0244 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0244 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0256 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0256 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0321 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0321 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0333 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0333 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0327 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0327 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0339 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0339 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0367 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0367 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0379 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0379 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0361 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0361 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0373 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0373 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0245 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0245 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0257 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0257 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0322 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0322 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0334 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0334 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0328 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0328 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0368 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0368 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0362 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0362 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0374 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0374 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0246 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0246 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0258 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0258 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0250 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0250 = NULL;
