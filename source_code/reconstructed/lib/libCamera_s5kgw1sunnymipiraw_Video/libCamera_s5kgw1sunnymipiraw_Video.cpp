/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Video.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Video"

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
#include "libCamera_s5kgw1sunnymipiraw_Video.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0111 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0111 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0112 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0112 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0113 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0113 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0114 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0114 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0115 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0115 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0116 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0116 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0117 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0117 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0118 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0118 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0119 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0119 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0171 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0011 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AWB_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AWB_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0140 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0140 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0141 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0141 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0142 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0142 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_PARAM_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_PARAM_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0143 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0143 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0070 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_CA_LTM_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_CA_LTM_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ClearZoom_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ClearZoom_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0144 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0144 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0071 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0145 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0145 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0072 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0146 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0146 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0073 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0147 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0147 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0074 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0148 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0148 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0075 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0149 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0149 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0076 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0077 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0078 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0079 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0120 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0121 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0122 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0123 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0124 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0125 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0126 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0127 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0153 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0128 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0129 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0153 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0060 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0061 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0062 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0063 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AF_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AF_0001 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0064 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0065 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0066 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0150 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0150 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0067 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0151 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0151 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0068 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0152 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0152 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0069 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0153 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0153 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0154 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0154 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0180 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0180 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0155 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0155 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0181 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0181 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0156 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0156 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0182 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0182 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0157 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0157 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0183 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0183 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0100 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0100 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0158 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0158 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0184 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0184 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0101 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0101 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0159 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0159 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0185 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0185 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0102 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0102 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0186 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0186 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0103 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0103 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0187 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0187 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0104 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0104 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0188 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0188 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0105 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0105 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0189 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0189 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0106 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0106 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0107 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0107 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0108 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0108 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0130 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0109 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0109 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0131 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0194 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0194 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0132 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0195 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0195 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0133 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0196 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0196 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0134 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0197 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0197 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0135 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0198 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0198 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0136 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0199 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0199 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0137 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0138 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0139 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0070 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0071 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0072 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0060 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0073 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0061 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0074 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0062 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0075 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_COLOR_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_COLOR_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0063 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0076 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0064 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0077 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0065 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0078 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0066 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0079 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0067 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0190 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0190 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0068 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0191 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0191 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0069 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0192 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0192 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0193 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0193 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0110 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0110 = NULL;
