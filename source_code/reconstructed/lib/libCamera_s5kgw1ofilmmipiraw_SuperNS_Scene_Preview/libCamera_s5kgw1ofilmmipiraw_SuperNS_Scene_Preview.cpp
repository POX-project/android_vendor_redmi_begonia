/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Preview"

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
#include "libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0186 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0198 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0251 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0251 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0187 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0199 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0240 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0240 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0252 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0252 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0370 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0188 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0241 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0241 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0253 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0253 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0371 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0189 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0242 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0242 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0254 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0254 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0360 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0372 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0243 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0243 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0255 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0255 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0361 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0373 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0244 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0244 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0256 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0256 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0362 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0374 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0245 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0245 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0257 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0257 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0363 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0375 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0246 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0246 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0258 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0258 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0364 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0376 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0247 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0247 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0259 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0259 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0310 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0310 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0365 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0377 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0248 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0248 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0311 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0311 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0366 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0378 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0190 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0249 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0249 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0300 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0300 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0312 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0312 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0367 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0379 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0191 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0301 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0301 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0313 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0313 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0368 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0180 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0192 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0302 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0302 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0314 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0314 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0369 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0181 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0193 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0303 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0303 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0315 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0315 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0182 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0194 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0304 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0304 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0316 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0316 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0370 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0370 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0183 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0195 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0305 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0305 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0317 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0317 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0371 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0371 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0184 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0196 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0306 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0306 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0318 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0318 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0360 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0360 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0372 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0372 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0185 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0197 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0307 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0307 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0319 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0319 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0361 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0361 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0373 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0373 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0186 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0198 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0308 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0308 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0362 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0362 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0374 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0374 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0187 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0199 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0309 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0309 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0363 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0363 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0375 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0375 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0188 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0364 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0364 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0376 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0376 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0189 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0365 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0365 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0377 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0377 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0366 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0366 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0378 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0378 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0367 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0367 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0379 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0379 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0368 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0368 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0369 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0369 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0190 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0191 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0180 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0192 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0181 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0193 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0182 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0194 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0183 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0195 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0184 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0196 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0185 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0197 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0250 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0250 = NULL;
