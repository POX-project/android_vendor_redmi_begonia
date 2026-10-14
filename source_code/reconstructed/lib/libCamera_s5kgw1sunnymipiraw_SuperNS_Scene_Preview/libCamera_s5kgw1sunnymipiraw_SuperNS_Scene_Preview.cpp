/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Preview"

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
#include "libCamera_s5kgw1sunnymipiraw_SuperNS_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0383 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0395 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0384 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0396 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0385 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0397 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0386 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0398 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0387 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0399 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0388 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0389 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0390 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0391 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0380 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0392 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0381 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0393 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0270 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0382 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0394 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0271 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0383 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0383 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0395 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0395 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0260 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0272 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0384 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0384 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0396 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0396 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0261 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0273 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0385 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0385 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0397 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0397 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0262 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0274 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0386 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0386 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0398 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0398 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0263 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0275 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0387 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0387 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0399 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0399 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0264 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0276 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0388 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0388 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0265 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0277 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0389 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0389 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0266 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0278 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0267 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0279 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0268 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0269 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0390 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0390 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0391 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0391 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0380 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0380 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0392 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0392 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0381 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0381 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0393 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0393 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0382 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0382 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0394 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0394 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0210 = NULL;
