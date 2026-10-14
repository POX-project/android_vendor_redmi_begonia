/*
 * Reverse-Engineered Source for: libCamera_s5k3t1sunnymipiraw_FaceUnlock_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t1sunnymipiraw_FaceUnlock_Capture"

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
#include "libCamera_s5k3t1sunnymipiraw_FaceUnlock_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0184 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0184 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0193 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0193 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0229 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0229 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0238 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0238 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0185 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0185 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0194 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0194 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0239 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0239 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AWB_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AWB_0003 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0186 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0186 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0195 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0195 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0187 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0187 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0196 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0196 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0188 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0188 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0197 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0197 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0189 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0189 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0198 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0198 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0200 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0200 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0199 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0199 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0201 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0201 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0210 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0210 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_PARAM_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_PARAM_0003 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DCE_0006 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0202 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0202 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0211 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0211 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0220 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0220 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0203 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0203 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0212 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0212 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0221 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0221 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0230 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0230 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0204 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0204 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0213 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0213 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0222 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0222 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0231 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0231 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0205 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0205 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0214 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0214 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0223 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0223 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0232 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0232 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0206 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0206 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0215 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0215 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0224 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0224 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0233 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0233 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0180 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0180 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0207 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0207 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0216 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0216 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0225 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0225 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0234 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0234 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0181 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0181 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0190 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0190 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0208 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0208 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0217 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0217 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0226 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0226 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0235 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0235 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0182 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0182 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0191 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0191 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0209 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0209 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0218 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0218 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0227 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0227 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0236 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0236 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AE_0004 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AE_0004 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_LCE_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_LCE_0006 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0183 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0183 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0192 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0192 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0219 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0219 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0228 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0228 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0237 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0237 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_GMA_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_GMA_0006 = NULL;
