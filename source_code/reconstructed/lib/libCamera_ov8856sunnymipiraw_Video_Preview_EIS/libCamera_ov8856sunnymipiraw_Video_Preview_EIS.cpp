/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Video_Preview_EIS.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Video_Preview_EIS"

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
#include "libCamera_ov8856sunnymipiraw_Video_Preview_EIS.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_NR3D_0124 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0124 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0199 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0199 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0210 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0210 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0125 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0125 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0170 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0170 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0211 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0211 = NULL;

/* Exported Object: ov8856sunnymipiraw_DCE_0005 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_DCE_0005 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0210 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0210 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0126 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0126 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0171 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0171 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0212 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0212 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0211 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0211 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0127 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0127 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0172 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0172 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0213 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0213 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0212 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0212 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0250 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0250 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0128 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0128 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0173 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0173 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0214 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0214 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0213 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0213 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0251 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0251 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0129 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0129 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0174 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0174 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0215 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0215 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0214 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0214 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0252 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0252 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0175 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0175 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0216 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0216 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0215 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0215 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0253 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0253 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0176 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0176 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0217 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0217 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0216 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0216 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0254 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0254 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0177 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0177 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0218 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0218 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0217 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0217 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0255 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0255 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0178 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0178 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0180 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0180 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0219 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0219 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0218 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0218 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0256 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0256 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0179 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0179 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0181 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0181 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0219 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0219 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0257 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0257 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0182 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0182 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0258 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0258 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0250 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0250 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0183 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0183 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0259 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0259 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0251 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0251 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0130 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0130 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0184 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0184 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0252 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0252 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0131 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0131 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0185 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0185 = NULL;

/* Exported Object: ov8856sunnymipiraw_GMA_0005 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_GMA_0005 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0253 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0253 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0132 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0132 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0186 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0186 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0230 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0230 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0254 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0254 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0133 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0133 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0187 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0187 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0231 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0231 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0255 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0255 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0134 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0134 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0188 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0188 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0232 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0232 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0256 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0256 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0135 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0135 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0189 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0189 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0200 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0200 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0233 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0233 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0257 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0257 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0136 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0136 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0160 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0160 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0201 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0201 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0234 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0234 = NULL;

/* Exported Object: ov8856sunnymipiraw_AE_0004 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_AE_0004 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0200 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0200 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0258 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0258 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0137 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0137 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0161 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0161 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0202 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0202 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0235 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0235 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0201 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0201 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0259 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0259 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0138 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0138 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0162 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0162 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0203 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0203 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0236 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0236 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0202 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0202 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0210 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0210 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0240 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0240 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0139 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0139 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0163 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0163 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0204 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0204 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0237 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0237 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0203 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0203 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0211 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0211 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0241 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0241 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0164 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0164 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0205 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0205 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0238 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0238 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0204 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0204 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0212 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0212 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0242 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0242 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0165 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0165 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0206 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0206 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0239 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0239 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0205 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0205 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0213 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0213 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0243 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0243 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0166 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0166 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0207 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0207 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0206 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0206 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0214 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0214 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0244 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0244 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0167 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0167 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0208 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0208 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0207 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0207 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0215 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0215 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0245 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0245 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0168 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0168 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0209 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0209 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0208 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0208 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0216 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0216 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0246 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0246 = NULL;

/* Exported Object: ov8856sunnymipiraw_UDM_0169 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_UDM_0169 = NULL;

/* Exported Object: ov8856sunnymipiraw_EE_0209 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_EE_0209 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0217 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0217 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0247 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0247 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0130 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0130 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0218 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0218 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0248 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0248 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0240 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0240 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0131 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0131 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0219 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0219 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC2_ANR2_0249 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC2_ANR2_0249 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0241 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0241 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0120 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0120 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0132 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0132 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0242 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0242 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0121 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0121 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0133 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0133 = NULL;

/* Exported Object: ov8856sunnymipiraw_AWB_0003 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_AWB_0003 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0243 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0243 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0122 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0122 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0134 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0134 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0220 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0220 = NULL;

/* Exported Object: ov8856sunnymipiraw_LCE_0005 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_LCE_0005 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0244 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0244 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0123 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0123 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0135 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0135 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0221 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0221 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0245 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0245 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0124 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0124 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0136 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0136 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0222 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0222 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0246 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0246 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0125 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0125 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0137 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0137 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0223 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0223 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_PARAM_0003 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_PARAM_0003 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0247 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0247 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0126 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0126 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0138 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0138 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0224 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0224 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0248 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0248 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0127 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0127 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0139 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0139 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0225 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0225 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_ANR_0249 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_ANR_0249 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0128 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0128 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0226 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0226 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0200 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0200 = NULL;

/* Exported Object: ov8856sunnymipiraw_NBC_LCE_LINK_0129 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NBC_LCE_LINK_0129 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0227 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0227 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0201 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0201 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0228 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0228 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0202 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0202 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0190 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0190 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0229 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0229 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0203 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0203 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0191 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0191 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0204 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0204 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0192 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0192 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0205 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0205 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0193 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0193 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0206 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0206 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0194 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0194 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0207 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0207 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0120 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0120 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0195 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0195 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0208 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0208 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0121 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0121 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0196 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0196 = NULL;

/* Exported Object: ov8856sunnymipiraw_HFG_0209 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_HFG_0209 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0122 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0122 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0197 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0197 = NULL;

/* Exported Object: ov8856sunnymipiraw_NR3D_0123 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_NR3D_0123 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0198 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0198 = NULL;
