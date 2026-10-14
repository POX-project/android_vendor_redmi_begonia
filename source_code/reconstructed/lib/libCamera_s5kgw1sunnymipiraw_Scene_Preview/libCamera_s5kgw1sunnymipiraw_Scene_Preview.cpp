/*
 * Reverse-Engineered Source for: libCamera_s5kgw1sunnymipiraw_Scene_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1sunnymipiraw_Scene_Preview"

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
#include "libCamera_s5kgw1sunnymipiraw_Scene_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0069 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0069 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_THRES_0003 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_THRES_0003 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0202 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0202 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0203 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0203 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0204 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0204 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0205 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0205 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0206 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0206 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0207 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0207 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0208 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0208 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0209 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0209 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0007 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0008 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0080 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0081 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0082 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0083 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0084 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0085 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0006 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0086 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0080 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0007 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0007 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0087 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0081 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0008 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0008 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0088 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0082 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0120 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0070 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0070 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0009 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0009 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0089 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0083 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0121 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0071 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0071 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0084 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0122 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0072 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0072 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0085 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0123 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0073 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0073 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0086 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0124 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0074 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0074 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0087 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0125 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0075 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0075 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_AE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_AE_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_LCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_LCE_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0160 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0160 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0088 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0126 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0076 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0076 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0161 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0161 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0089 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0127 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0077 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0077 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0162 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0162 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0128 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0078 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0078 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0163 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0163 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0129 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0079 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0079 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0164 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0164 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0165 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0165 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0166 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0166 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0167 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0167 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0210 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0210 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0168 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0168 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0211 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0211 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0169 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0169 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0212 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0212 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0030 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0030 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0213 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0213 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0031 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0031 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0010 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0010 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0214 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0214 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0032 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0032 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_TBL_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_TBL_0011 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0215 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0215 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0033 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0033 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RNR_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RNR_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0216 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0216 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0034 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0034 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0217 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0217 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0035 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0035 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0218 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0218 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0036 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0036 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ANR2_0219 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ANR2_0219 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0037 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0037 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0038 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0038 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_ABF_0039 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_ABF_0039 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0010 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0010 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0090 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_FD_ANR_0011 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_FD_ANR_0011 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DBS_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0091 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ADBS_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ADBS_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0092 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0093 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0171 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0094 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0095 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0096 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0090 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0097 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0091 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0098 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0092 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0130 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_LCE_LINK_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_LCE_LINK_0099 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0093 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0131 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_ClearZoom_0001 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_ClearZoom_0001 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0094 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0132 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0095 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0133 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_HFG_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_HFG_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0096 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0134 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_DCE_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_DCE_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0097 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0135 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_RMM_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_RMM_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0170 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0170 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0098 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0136 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0171 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0171 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NR3D_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NR3D_0099 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0137 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_GMA_0002 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_GMA_0002 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0172 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0172 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0138 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0173 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0173 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_UDM_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_UDM_0139 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0174 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0174 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0175 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0175 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0176 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0176 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0020 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0020 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0177 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0177 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0021 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0021 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0178 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0178 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0022 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0022 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_EE_0179 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_EE_0179 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0023 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0023 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0024 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0024 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0025 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0025 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0040 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0040 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0026 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0026 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0041 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0041 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0027 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0027 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0042 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0042 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0028 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0028 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0043 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0043 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC2_CCR_0029 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC2_CCR_0029 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0044 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0044 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0045 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0045 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0046 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0046 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0047 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0047 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0048 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0048 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_BPC_0049 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_BPC_0049 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0060 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0060 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0061 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0061 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0062 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0062 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0050 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0050 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0063 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0063 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0051 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0051 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0064 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0064 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0056 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0056 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0052 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0052 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0065 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0065 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0057 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0057 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0053 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0053 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0066 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0066 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0058 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0058 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0054 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0054 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0200 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0200 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0067 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0067 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_NR1_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_NR1_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_BNR_PDC_0059 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_BNR_PDC_0059 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_OBC_0055 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_OBC_0055 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_NBC_ANR_0201 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_NBC_ANR_0201 = NULL;

/* Exported Object: s5kgw1sunnymipiraw_SWNR_0068 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1sunnymipiraw_SWNR_0068 = NULL;
