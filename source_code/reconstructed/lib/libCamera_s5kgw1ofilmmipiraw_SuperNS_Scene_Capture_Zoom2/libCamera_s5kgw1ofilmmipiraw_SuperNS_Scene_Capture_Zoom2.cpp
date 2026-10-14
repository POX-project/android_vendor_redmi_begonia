/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Capture_Zoom2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Capture_Zoom2"

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
#include "libCamera_s5kgw1ofilmmipiraw_SuperNS_Scene_Capture_Zoom2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_EE_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0385 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0397 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0386 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0398 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0270 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0386 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0398 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0387 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0399 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0271 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0387 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0399 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0388 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0260 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0272 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0388 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0389 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0261 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0273 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0389 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0262 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0274 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0263 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0275 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0264 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0276 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0265 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0277 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0330 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0266 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0278 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0331 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0267 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0279 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0320 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0332 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0450 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0268 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0321 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0333 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0451 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0269 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0322 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0334 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0440 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0452 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0323 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0335 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0441 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0453 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0324 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0336 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0442 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0454 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0325 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0337 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0443 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0455 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0326 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0338 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0444 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0456 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0327 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0339 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0445 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0457 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0328 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0446 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0458 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0270 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0329 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0447 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0459 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0271 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0448 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0260 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0272 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0449 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0261 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0273 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0262 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0274 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0450 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0450 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0263 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0275 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0451 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0451 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0264 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0276 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0440 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0440 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0452 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0452 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0265 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0277 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0441 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0441 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0453 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0453 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0266 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0278 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0390 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0442 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0442 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0454 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0454 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0267 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0279 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0390 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0391 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0443 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0443 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0455 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0455 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0268 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0391 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0380 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0392 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0444 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0444 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0456 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0456 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0269 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0380 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0392 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0381 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0393 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0445 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0445 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0457 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0457 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0381 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0393 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0382 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0394 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0446 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0446 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0458 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0458 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0382 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0394 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0383 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0395 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0447 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0447 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0459 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0459 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0383 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0395 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0384 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0396 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0448 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0448 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0384 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0396 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0385 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0397 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0449 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0449 = NULL;
