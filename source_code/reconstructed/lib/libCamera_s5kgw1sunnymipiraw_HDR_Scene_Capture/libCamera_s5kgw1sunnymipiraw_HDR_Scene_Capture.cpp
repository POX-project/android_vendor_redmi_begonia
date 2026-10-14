/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture"

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
#include "libCamera_s5kgw1sunnymipiraw_HDR_Scene_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_HFG_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0268 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0269 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0270 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0271 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0272 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_CA_LTM_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_CA_LTM_0001 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0260 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0273 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0261 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0274 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0262 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0275 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0263 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0276 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0264 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0277 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0265 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0278 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0266 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0279 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0267 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0268 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0268 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0004 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0269 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0269 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0153 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0270 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0270 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0271 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0271 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0272 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0272 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0260 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0260 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0273 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0273 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0325 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0338 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0330 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0261 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0261 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0274 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0274 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0326 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0339 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0331 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0262 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0262 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0275 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0275 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0327 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0332 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0263 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0263 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0276 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0276 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0328 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0320 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0333 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0264 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0264 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0277 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0277 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0329 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0321 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0334 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0265 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0265 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0278 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0278 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0322 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0335 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0266 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0266 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0279 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0279 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0323 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0336 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0267 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0267 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0324 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0337 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0153 = NULL;
