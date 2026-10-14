/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Capture"

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
#include "libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0427 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0435 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0428 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0436 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0429 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0437 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0438 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0439 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0360 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0361 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0244 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0362 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0245 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0230 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0230 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0363 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0246 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0231 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0231 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0364 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0247 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0232 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0232 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0365 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0370 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0248 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0233 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0233 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0366 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0371 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0249 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0234 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0234 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0007 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0367 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0372 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0235 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0235 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0368 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0373 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0420 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0236 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0236 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0369 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0374 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0421 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0237 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0237 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0375 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0422 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0238 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0238 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0376 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0423 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0239 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0239 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0377 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0424 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0378 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0425 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_PARAM_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_PARAM_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0379 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0426 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0310 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0427 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0311 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0428 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0312 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0429 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0313 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0314 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0315 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0316 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0220 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0220 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0430 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0317 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0221 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0221 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0431 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0318 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0222 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0222 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0360 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0432 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0319 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0223 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0223 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0361 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0433 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0224 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0224 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0362 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0434 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0225 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0225 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0007 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0363 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0435 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0226 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0226 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0364 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0436 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0227 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0227 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0365 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0437 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0228 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0228 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0366 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0438 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0229 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0229 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0367 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0439 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0250 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0368 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0251 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0369 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0252 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0300 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0370 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0253 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0301 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0371 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0254 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0302 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0372 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0255 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0303 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0373 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0256 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0304 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0374 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0257 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0305 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0375 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0258 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0306 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0007 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0376 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0420 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0259 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0307 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0005 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0005 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0377 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0421 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0308 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0378 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0422 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0430 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0309 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0379 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0423 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0431 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0240 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0424 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0432 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0241 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0425 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0433 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0242 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0426 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0434 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0243 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0217 = NULL;
