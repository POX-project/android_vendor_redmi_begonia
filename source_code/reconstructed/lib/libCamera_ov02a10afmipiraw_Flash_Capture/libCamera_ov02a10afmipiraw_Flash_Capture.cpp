/*
 * Reverse-Engineered Source for: libCamera_ov02a10afmipiraw_Flash_Capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10afmipiraw_Flash_Capture"

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
#include "libCamera_ov02a10afmipiraw_Flash_Capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10afmipiraw_COLOR_0103 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0103 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0114 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0114 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0104 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0104 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0115 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0115 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0105 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0105 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0116 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0116 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0106 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0106 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0117 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0117 = NULL;

/* Exported Object: ov02a10afmipiraw_AWB_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_AWB_0001 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0090 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0090 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0107 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0107 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0118 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0118 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0010 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0010 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0080 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0080 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0091 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0091 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0108 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0108 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0119 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0119 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0011 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0011 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0070 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0070 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0081 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0081 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0092 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0092 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0109 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0109 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0060 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0060 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0071 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0071 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0082 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0082 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0093 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0093 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0061 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0061 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0072 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0072 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0083 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0083 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0094 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0094 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0062 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0062 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0073 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0073 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0084 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0084 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0095 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0095 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0063 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0063 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0074 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0074 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0085 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0085 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0096 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0096 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0064 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0064 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0075 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0075 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0086 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0086 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0097 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0097 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0006 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0006 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0065 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0065 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0076 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0076 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0087 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0087 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0098 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0098 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0007 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0007 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0066 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0066 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0077 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0077 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0088 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0088 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0099 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0099 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0110 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0110 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0008 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0008 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0067 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0067 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0078 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0078 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0089 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0089 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0100 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0100 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0111 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0111 = NULL;

/* Exported Object: ov02a10afmipiraw_CCM_0009 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_CCM_0009 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0068 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0068 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0079 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0079 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0101 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0101 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0112 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0112 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0069 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0069 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0102 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0102 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_0113 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_0113 = NULL;

/* Exported Object: ov02a10afmipiraw_COLOR_PARAM_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_COLOR_PARAM_0001 = NULL;
