/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Video.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Video"

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
#include "libCamera_s5kgw1ofilmmipiraw_Video.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0170 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0174 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0171 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0175 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0172 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0176 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0173 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0177 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0174 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0178 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0175 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0179 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0176 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0177 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0178 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0179 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AE_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AE_0011 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ClearZoom_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ClearZoom_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0150 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0080 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0151 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0081 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0152 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0082 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0153 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0083 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0154 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0084 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0155 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0085 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0156 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0086 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0157 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0087 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0158 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0088 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0159 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0089 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AF_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AF_0001 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_LCE_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_LCE_0009 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0160 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0161 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0162 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0163 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0164 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0165 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0166 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0167 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0168 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0160 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0169 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0090 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0161 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0091 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0162 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0092 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0163 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0160 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0093 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0164 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0161 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0040 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0094 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0165 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0162 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0050 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0041 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0095 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0166 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0163 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0051 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0042 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0096 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0167 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0164 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0052 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0043 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0097 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0168 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0165 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0053 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0044 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0098 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0169 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RMM_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RMM_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0166 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0054 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0045 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0099 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0167 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0055 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0046 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DCE_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DCE_0009 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0168 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0056 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0047 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0169 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0057 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0048 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0058 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0049 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AWB_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AWB_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0059 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_PARAM_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_PARAM_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_CA_LTM_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_CA_LTM_0002 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_NR1_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_NR1_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_PDC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_PDC_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0170 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0171 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0140 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0030 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0172 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0141 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0031 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0028 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0173 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0142 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0032 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_OBC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_OBC_0029 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0174 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0143 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0033 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0175 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0144 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0034 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0176 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0145 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0035 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0023 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0177 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0146 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_GMA_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_GMA_0009 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0036 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0024 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0178 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0147 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0170 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0037 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0025 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0020 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0179 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0148 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0171 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0038 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0026 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0021 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0149 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0172 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_ADBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_ADBS_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_BNR_BPC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_BNR_BPC_0039 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_DBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_DBS_0027 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_RNR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_RNR_0022 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_COLOR_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_COLOR_0173 = NULL;
