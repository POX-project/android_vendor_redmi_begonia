/*
 * Reverse-Engineered Source for: libCamera_ov8856ofilmmipiraw_Zoom_Video720P.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856ofilmmipiraw_Zoom_Video720P"

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
#include "libCamera_ov8856ofilmmipiraw_Zoom_Video720P.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0321 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0321 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0333 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0333 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0211 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0211 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0322 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0322 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0334 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0334 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0200 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0200 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0212 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0212 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0323 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0323 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0335 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0335 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0201 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0201 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0213 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0213 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0324 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0324 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0336 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0336 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0330 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0330 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0202 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0202 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0214 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0214 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0325 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0325 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0337 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0337 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0331 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0331 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0203 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0203 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0215 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0215 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0326 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0326 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0338 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0338 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0320 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0320 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0332 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0332 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0204 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0204 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0216 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0216 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0327 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0327 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0339 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0339 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0321 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0321 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0333 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0333 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0205 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0205 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0217 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0217 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0328 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0328 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0322 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0322 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0334 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0334 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0206 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0206 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0218 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0218 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0210 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0210 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0290 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0290 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0329 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0329 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0323 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0323 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0335 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0335 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0207 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0207 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0219 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0219 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0211 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0211 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0291 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0291 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0324 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0324 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0336 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0336 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0208 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0208 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0200 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0200 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0212 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0212 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0280 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0280 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0292 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0292 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0325 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0325 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0337 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0337 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0209 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0209 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0201 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0201 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0213 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0213 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0281 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0281 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0293 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0293 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0326 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0326 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0338 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0338 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0202 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0202 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0214 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0214 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0282 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0282 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0294 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0294 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0327 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0327 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0339 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0339 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0203 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0203 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0215 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0215 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0283 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0283 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0295 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0295 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0328 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0328 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0204 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0204 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0216 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0216 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0290 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0290 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0284 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0284 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0296 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0296 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_ANR_0329 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_ANR_0329 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0205 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0205 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0217 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0217 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0291 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0291 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0285 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0285 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0297 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0297 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0206 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0206 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0218 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0218 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0280 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0280 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0292 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0292 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0286 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0286 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0298 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0298 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0207 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0207 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0219 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0219 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0281 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0281 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0293 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0293 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0287 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0287 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0299 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0299 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0208 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0208 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0282 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0282 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0294 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0294 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0288 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0288 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NR3D_0209 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NR3D_0209 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0283 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0283 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0295 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0295 = NULL;

/* Exported Object: ov8856ofilmmipiraw_HFG_0289 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_HFG_0289 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0250 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0250 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0284 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0284 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0296 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0296 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0251 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0251 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0285 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0285 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0297 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0297 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0240 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0240 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0252 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0252 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0286 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0286 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0298 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0298 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0241 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0241 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0253 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0253 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0287 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0287 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0299 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0299 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0242 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0242 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0254 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0254 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0288 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0288 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0243 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0243 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0255 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0255 = NULL;

/* Exported Object: ov8856ofilmmipiraw_EE_0289 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_EE_0289 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0244 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0244 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0256 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0256 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0245 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0245 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0257 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0257 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0246 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0246 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0258 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0258 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0247 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0247 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0259 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0259 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0248 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0248 = NULL;

/* Exported Object: ov8856ofilmmipiraw_UDM_0249 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_UDM_0249 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0330 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0330 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0331 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0331 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0320 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0320 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC2_ANR2_0332 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC2_ANR2_0332 = NULL;

/* Exported Object: ov8856ofilmmipiraw_NBC_LCE_LINK_0210 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_NBC_LCE_LINK_0210 = NULL;
