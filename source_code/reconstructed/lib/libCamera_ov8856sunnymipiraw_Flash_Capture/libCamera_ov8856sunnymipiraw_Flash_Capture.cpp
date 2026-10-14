/*
 * Reverse-Engineered Source for: libCamera_ov8856sunnymipiraw_Flash_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856sunnymipiraw_Flash_Capture"

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
#include "libCamera_ov8856sunnymipiraw_Flash_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856sunnymipiraw_CCM_0012 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0012 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0122 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0122 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0133 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0133 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0144 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0144 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0155 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0155 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0166 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0166 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0177 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0177 = NULL;

/* Exported Object: ov8856sunnymipiraw_CCM_0013 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0013 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0123 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0123 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0134 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0134 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0145 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0145 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0156 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0156 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0167 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0167 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0178 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0178 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_PARAM_0002 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_PARAM_0002 = NULL;

/* Exported Object: ov8856sunnymipiraw_CCM_0014 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0014 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0124 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0124 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0135 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0135 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0146 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0146 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0157 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0157 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0168 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0168 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0179 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0179 = NULL;

/* Exported Object: ov8856sunnymipiraw_CCM_0015 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0015 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0125 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0125 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0136 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0136 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0147 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0147 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0158 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0158 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0169 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0169 = NULL;

/* Exported Object: ov8856sunnymipiraw_CCM_0016 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0016 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0126 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0126 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0137 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0137 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0148 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0148 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0159 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0159 = NULL;

/* Exported Object: ov8856sunnymipiraw_CCM_0017 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_CCM_0017 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0127 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0127 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0138 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0138 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0149 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0149 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0128 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0128 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0139 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0139 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0129 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0129 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0170 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0170 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0160 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0160 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0171 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0171 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0150 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0150 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0161 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0161 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0172 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0172 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0140 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0140 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0151 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0151 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0162 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0162 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0173 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0173 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0130 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0130 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0141 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0141 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0152 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0152 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0163 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0163 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0174 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0174 = NULL;

/* Exported Object: ov8856sunnymipiraw_AWB_0002 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_AWB_0002 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0120 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0120 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0131 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0131 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0142 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0142 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0153 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0153 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0164 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0164 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0175 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0175 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0121 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0121 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0132 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0132 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0143 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0143 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0154 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0154 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0165 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0165 = NULL;

/* Exported Object: ov8856sunnymipiraw_COLOR_0176 */
extern "C" __attribute__((visibility("default"))) void* ov8856sunnymipiraw_COLOR_0176 = NULL;
