/*
 * Reverse-Engineered Source for: a985d3eb3b524d44be6c628a813561e8.ta
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "a985d3eb3b524d44be6c628a813561e8_ta"

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
#include "a985d3eb3b524d44be6c628a813561e8_ta.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating a985d3eb3b524d44be6c628a813561e8_ta", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting a985d3eb3b524d44be6c628a813561e8_ta service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("a985d3eb3b524d44be6c628a813561e8_ta service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: sign */
extern "C" __attribute__((visibility("default"))) void* sign = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: pubkey_three_py */
extern "C" __attribute__((visibility("default"))) void* pubkey_three_py = NULL;

/* Exported Object: pubkey_three_px */
extern "C" __attribute__((visibility("default"))) void* pubkey_three_px = NULL;

/* Exported Object: sm2_param_ende_key */
extern "C" __attribute__((visibility("default"))) void* sm2_param_ende_key = NULL;

/* Demangled: _fini */
extern "C" __attribute__((visibility("default"))) int _fini(void) {
    ALOGD("_fini() called");
    return 0;
}

/* Exported Object: handle_process */
extern "C" __attribute__((visibility("default"))) void* handle_process = NULL;

/* Demangled: EC_GROUP_new_curve_GF2m */
extern "C" __attribute__((visibility("default"))) int EC_GROUP_new_curve_GF2m(void) {
    ALOGD("EC_GROUP_new_curve_GF2m() called");
    return 0;
}

/* Demangled: EC_POINT_set_affine_coordinates_GF2m */
extern "C" __attribute__((visibility("default"))) int EC_POINT_set_affine_coordinates_GF2m(void) {
    ALOGD("EC_POINT_set_affine_coordinates_GF2m() called");
    return 0;
}

/* Demangled: BN_sub */
extern "C" __attribute__((visibility("default"))) int BN_sub(void) {
    ALOGD("BN_sub() called");
    return 0;
}

/* Demangled: TA_InvokeCommandEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_InvokeCommandEntryPoint(void) {
    ALOGD("TA_InvokeCommandEntryPoint() called");
    return 0;
}

/* Exported Object: __exidx_start */
extern "C" __attribute__((visibility("default"))) void* obj___exidx_start __asm__("__exidx_start") = NULL;

/* Demangled: TA_CloseSessionEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_CloseSessionEntryPoint(void) {
    ALOGD("TA_CloseSessionEntryPoint() called");
    return 0;
}

/* Exported Object: sm2_param_dh_h */
extern "C" __attribute__((visibility("default"))) void* sm2_param_dh_h = NULL;

/* Exported Object: __L4_KIP_ADDR__ */
extern "C" __attribute__((visibility("default"))) void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__") = NULL;

/* Exported Object: ALPHABET */
extern "C" __attribute__((visibility("default"))) void* ALPHABET = NULL;

/* Demangled: base64_encode */
extern "C" __attribute__((visibility("default"))) int base64_encode(void) {
    ALOGD("base64_encode() called");
    return 0;
}

/* Exported Object: sm2_param_sign_r */
extern "C" __attribute__((visibility("default"))) void* sm2_param_sign_r = NULL;

/* Exported Object: const_aid */
extern "C" __attribute__((visibility("default"))) void* const_aid = NULL;

/* Exported Object: ecp */
extern "C" __attribute__((visibility("default"))) void* ecp = NULL;

/* Exported Object: sign_head */
extern "C" __attribute__((visibility("default"))) void* sign_head = NULL;

/* Demangled: _init */
extern "C" __attribute__((visibility("default"))) int _init(void) {
    ALOGD("_init() called");
    return 0;
}

/* Exported Object: sm2_param_sign_pri */
extern "C" __attribute__((visibility("default"))) void* sm2_param_sign_pri = NULL;

/* Demangled: lh_strhash */
extern "C" __attribute__((visibility("default"))) int lh_strhash(void) {
    ALOGD("lh_strhash() called");
    return 0;
}

/* Exported Object: sm2_param_recommand */
extern "C" __attribute__((visibility("default"))) void* sm2_param_recommand = NULL;

/* Demangled: TA_OpenSessionEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_OpenSessionEntryPoint(void) {
    ALOGD("TA_OpenSessionEntryPoint() called");
    return 0;
}

/* Demangled: EC_POINT_get_affine_coordinates_GFp */
extern "C" __attribute__((visibility("default"))) int EC_POINT_get_affine_coordinates_GFp(void) {
    ALOGD("EC_POINT_get_affine_coordinates_GFp() called");
    return 0;
}

/* Demangled: _start */
extern "C" __attribute__((visibility("default"))) int _start(void) {
    ALOGD("_start() called");
    return 0;
}

/* Exported Object: __exidx_end */
extern "C" __attribute__((visibility("default"))) void* obj___exidx_end __asm__("__exidx_end") = NULL;

/* Demangled: BN_add */
extern "C" __attribute__((visibility("default"))) int BN_add(void) {
    ALOGD("BN_add() called");
    return 0;
}

/* Exported Object: sm2_param_ende_r */
extern "C" __attribute__((visibility("default"))) void* sm2_param_ende_r = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: key_file_len */
extern "C" __attribute__((visibility("default"))) void* key_file_len = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: TA_DestroyEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_DestroyEntryPoint(void) {
    ALOGD("TA_DestroyEntryPoint() called");
    return 0;
}

/* Exported Object: key_file_name */
extern "C" __attribute__((visibility("default"))) void* key_file_name = NULL;

/* Exported Object: eig_msg */
extern "C" __attribute__((visibility("default"))) void* eig_msg = NULL;

/* Exported Object: cleanse_ctr */
extern "C" __attribute__((visibility("default"))) void* cleanse_ctr = NULL;

/* Exported Object: BZ2_crc32Table */
extern "C" __attribute__((visibility("default"))) void* BZ2_crc32Table = NULL;

/* Demangled: EC_GROUP_new_curve_GFp */
extern "C" __attribute__((visibility("default"))) int EC_GROUP_new_curve_GFp(void) {
    ALOGD("EC_GROUP_new_curve_GFp() called");
    return 0;
}

/* Demangled: base64_decode */
extern "C" __attribute__((visibility("default"))) int base64_decode(void) {
    ALOGD("base64_decode() called");
    return 0;
}

/* Exported Object: sm2_param_dh_A */
extern "C" __attribute__((visibility("default"))) void* sm2_param_dh_A = NULL;

/* Exported Object: sm2_param_dh_B */
extern "C" __attribute__((visibility("default"))) void* sm2_param_dh_B = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Exported Object: sm2_param_dh_key_B */
extern "C" __attribute__((visibility("default"))) void* sm2_param_dh_key_B = NULL;

/* Exported Object: sm2_param_dh_key_A */
extern "C" __attribute__((visibility("default"))) void* sm2_param_dh_key_A = NULL;

/* Demangled: EC_POINT_get_affine_coordinates_GF2m */
extern "C" __attribute__((visibility("default"))) int EC_POINT_get_affine_coordinates_GF2m(void) {
    ALOGD("EC_POINT_get_affine_coordinates_GF2m() called");
    return 0;
}

/* Exported Object: CNTR_BEF */
extern "C" __attribute__((visibility("default"))) void* CNTR_BEF = NULL;

/* Exported Object: _ta_cfg */
extern "C" __attribute__((visibility("default"))) void* _ta_cfg = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: BZ2_rNums */
extern "C" __attribute__((visibility("default"))) void* BZ2_rNums = NULL;

/* Exported Object: pic_buffer */
extern "C" __attribute__((visibility("default"))) void* pic_buffer = NULL;

/* Demangled: EC_POINT_set_affine_coordinates_GFp */
extern "C" __attribute__((visibility("default"))) int EC_POINT_set_affine_coordinates_GFp(void) {
    ALOGD("EC_POINT_set_affine_coordinates_GFp() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Exported Object: message_data */
extern "C" __attribute__((visibility("default"))) void* message_data = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: base64char */
extern "C" __attribute__((visibility("default"))) void* base64char = NULL;

/* Demangled: TA_CreateEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_CreateEntryPoint(void) {
    ALOGD("TA_CreateEntryPoint() called");
    return 0;
}
