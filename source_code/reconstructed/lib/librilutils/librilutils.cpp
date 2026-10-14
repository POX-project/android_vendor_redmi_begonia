/*
 * Reverse-Engineered Source for: librilutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "librilutils"

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
#include "librilutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: RIL_SIM_SAP_CONNECT_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_CONNECT_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_DISCONNECT_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields = NULL;

/* Demangled: ril_nano_time */
extern "C" __attribute__((visibility("default"))) int ril_nano_time(void) {
    ALOGD("ril_nano_time() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_APDU_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_APDU_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields = NULL;

/* Demangled: record_stream_free */
extern "C" __attribute__((visibility("default"))) int record_stream_free(void) {
    ALOGD("record_stream_free() called");
    return 0;
}

/* Demangled: record_stream_get_next */
extern "C" __attribute__((visibility("default"))) int record_stream_get_next(void) {
    ALOGD("record_stream_get_next() called");
    return 0;
}

/* Demangled: record_stream_new */
extern "C" __attribute__((visibility("default"))) int record_stream_new(void) {
    ALOGD("record_stream_new() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_POWER_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_POWER_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_RESET_SIM_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_RESET_SIM_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_STATUS_IND_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_STATUS_IND_fields = NULL;

/* Exported Object: RIL_SIM_SAP_TRANSFER_ATR_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_ATR_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_CONNECT_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_CONNECT_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_POWER_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_POWER_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_RESET_SIM_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_RESET_SIM_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_TRANSFER_ATR_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_ATR_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_APDU_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_APDU_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_DISCONNECT_IND_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_IND_fields = NULL;

/* Exported Object: RIL_SIM_SAP_ERROR_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_ERROR_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields = NULL;

/* Exported Object: MsgHeader_fields */
extern "C" __attribute__((visibility("default"))) void* MsgHeader_fields = NULL;

/* Exported Object: RIL_SIM_SAP_DISCONNECT_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields = NULL;
