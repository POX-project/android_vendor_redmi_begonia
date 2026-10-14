/*
 * Reverse-Engineered Source for: libCamera_s5k3t1sunnymipiraw_Face_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t1sunnymipiraw_Face_Capture"

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
#include "libCamera_s5k3t1sunnymipiraw_Face_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0159 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_GMA_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_GMA_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_LCE_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_LCE_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0100 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0100 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0101 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0101 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0102 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0102 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0103 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0103 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0060 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0060 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0104 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0104 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0061 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0061 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0100 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0100 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0105 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0105 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0062 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0062 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0101 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0101 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0106 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0106 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0140 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0063 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0063 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0102 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0102 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0107 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0107 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0141 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0050 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0064 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0064 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0103 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0103 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0108 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0108 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0142 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0051 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0065 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0065 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0104 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0104 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0109 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0109 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0143 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0052 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0066 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0066 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0105 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0105 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0144 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0053 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0067 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0067 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0106 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0106 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0145 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0054 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0068 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0068 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0107 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0107 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0146 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0055 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0069 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0069 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0108 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0108 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0147 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0056 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0109 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0109 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0148 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0057 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0149 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0058 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0059 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0070 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0070 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0071 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0071 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0110 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0110 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0072 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0072 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0111 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0111 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0073 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0073 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0112 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0112 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0074 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0074 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0113 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0113 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0075 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0075 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0114 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0114 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0076 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0076 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0115 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0115 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0077 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0077 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0116 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0116 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0078 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0078 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0117 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0117 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0079 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0079 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0118 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0118 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0119 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0119 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0040 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0041 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0042 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0043 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0110 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0110 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0044 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0111 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0111 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0045 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0112 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0112 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0046 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0113 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0113 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0070 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0070 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0047 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0114 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0114 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0071 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0071 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0110 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0110 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0048 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0115 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0115 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0072 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0072 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0111 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0111 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0049 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0116 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0116 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0150 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0073 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0073 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0112 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0112 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0117 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0117 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0151 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0060 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0060 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0074 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0074 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0113 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0113 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0118 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0118 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0152 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0061 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0061 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0075 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0075 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0114 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0114 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0119 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0119 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0153 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0062 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0062 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0076 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0076 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0115 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0115 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0154 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0063 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0063 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0077 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0077 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0116 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0116 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0155 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0064 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0064 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0078 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0078 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0117 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0117 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0156 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0065 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0065 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0079 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0079 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0118 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0118 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0157 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0066 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0066 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0119 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0119 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0158 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0067 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0067 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0159 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0159 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0068 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0068 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0069 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0069 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0080 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0081 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0082 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0100 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0100 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0083 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0101 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0101 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0084 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0102 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0102 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0085 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0103 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0103 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0086 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0104 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0104 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0087 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0105 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0105 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0088 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0106 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0106 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0089 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0107 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0107 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0108 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0108 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0109 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0109 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0060 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0060 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0050 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0050 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0061 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0061 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0051 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0051 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0100 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0100 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0062 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0062 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0080 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0052 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0052 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0101 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0101 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0063 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0063 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0081 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0053 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0053 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0102 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0102 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0064 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0064 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0082 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0054 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0054 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0103 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0103 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AWB_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AWB_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0065 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0065 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0083 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0055 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0055 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0104 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0104 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0066 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0066 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0084 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0056 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0056 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0105 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0105 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0080 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0067 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0067 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0085 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0057 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0057 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0106 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0106 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0081 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0068 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0068 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0086 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0058 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0058 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0107 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0107 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0082 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0069 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0069 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0087 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0059 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0059 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0108 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0108 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0083 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0088 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0109 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0109 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0070 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0070 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0084 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0089 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0071 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0071 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0085 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0072 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0072 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0086 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0073 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0073 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0087 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0074 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0074 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0088 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0075 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0075 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0089 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0076 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0076 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_AE_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_AE_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0077 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0077 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0078 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0078 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0079 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0079 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0090 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0091 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0092 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0110 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0110 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0093 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0111 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0111 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0094 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0112 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0112 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0095 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0113 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0113 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0096 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0114 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0114 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0006 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0006 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_ADBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_ADBS_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0097 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0115 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0115 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0007 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0007 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0098 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0116 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0116 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0008 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0008 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0099 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0117 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0117 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0009 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0009 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0118 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0118 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0119 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0119 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0070 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0070 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0060 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0060 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0071 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0071 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0110 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0110 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0061 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0061 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0072 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0072 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0090 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0111 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0111 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0062 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0062 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0073 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0073 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0091 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0112 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0112 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0063 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0063 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0074 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0074 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0092 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0113 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0113 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFNR_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFNR_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0064 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0064 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0075 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0075 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0093 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0114 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0114 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0065 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0065 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0076 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0076 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0094 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0115 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0115 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0066 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0066 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0090 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0077 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0077 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0095 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0116 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0116 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0067 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0067 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0091 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0078 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0078 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0096 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0117 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0117 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0068 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0068 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0092 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0079 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0079 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0097 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0118 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0118 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0069 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0069 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0093 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0098 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0119 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0119 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0094 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0099 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_THRES_0002 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_THRES_0002 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0095 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_THRES_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_THRES_0003 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0096 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0097 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0098 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_0099 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0010 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0010 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0080 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_CCM_0011 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_CCM_0011 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0081 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0120 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0082 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0121 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0083 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0122 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0084 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0123 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0085 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0124 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0086 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0125 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0087 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0126 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0088 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0127 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0089 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0128 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0129 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0080 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0080 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0070 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0070 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0081 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0081 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0071 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0071 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0082 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0082 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0072 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0072 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0083 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0083 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0140 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0140 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0073 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0073 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0084 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0084 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0141 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0141 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0074 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0074 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0085 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0085 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0142 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0142 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0075 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0075 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0086 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0086 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0143 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0143 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0076 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0076 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0087 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0087 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0144 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0144 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0077 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0077 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_COLOR_PARAM_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_COLOR_PARAM_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NR3D_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NR3D_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0088 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0088 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0145 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0145 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0078 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0078 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0089 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0089 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0146 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0146 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_UDM_0079 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_UDM_0079 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0147 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0147 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_BPC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_BPC_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0148 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0148 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0149 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0149 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MFB_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MFB_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DCE_0001 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DCE_0001 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RMM_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RMM_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0090 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0091 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0130 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0092 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0131 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0040 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0040 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_PDC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_PDC_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0093 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0132 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0041 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0041 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0094 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0133 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0042 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0042 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0095 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0134 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0043 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0043 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0096 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0135 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0044 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0044 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0097 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0136 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0045 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0045 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0098 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0137 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0046 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0046 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0099 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0138 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0047 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0047 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_RNR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_RNR_0039 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_LCE_LINK_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_LCE_LINK_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC_ANR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC_ANR_0139 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0048 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0048 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_SWNR_0049 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_SWNR_0049 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0060 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0060 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0090 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0090 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0020 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0061 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0061 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0100 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0100 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0091 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0091 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0021 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0062 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0062 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0101 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0101 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0092 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0092 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0022 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0063 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0063 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0102 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0102 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0093 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0093 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0150 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0150 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0023 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0064 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0064 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0103 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0103 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0094 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0094 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0151 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0151 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0024 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0065 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0065 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0104 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0104 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0095 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0095 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0152 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0152 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0025 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0066 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0066 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0105 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0105 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0096 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0096 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0153 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0153 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0026 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0030 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0067 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0067 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0106 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0106 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0097 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0097 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0154 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0154 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0027 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0031 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0068 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0068 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0107 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0107 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0098 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0098 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0155 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0155 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0028 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0036 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0036 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0032 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0069 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0069 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0108 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0108 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_HFG_0099 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_HFG_0099 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_MIXER3_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_MIXER3_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0156 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0156 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_CCR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_CCR_0029 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0037 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0037 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0033 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_EE_0109 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_EE_0109 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0157 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0157 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_BNR_NR1_0038 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_BNR_NR1_0038 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_DBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_DBS_0035 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_OBC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_OBC_0034 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ANR2_0158 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ANR2_0158 = NULL;

/* Exported Object: s5k3t1sunnymipiraw_NBC2_ABF_0039 */
extern "C" __attribute__((visibility("default"))) void* s5k3t1sunnymipiraw_NBC2_ABF_0039 = NULL;
