/*
 * Reverse-Engineered Source for: b09c9c5daa504b78b0e46eda61556c3a.ta
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "b09c9c5daa504b78b0e46eda61556c3a_ta"

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
#include "b09c9c5daa504b78b0e46eda61556c3a_ta.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating b09c9c5daa504b78b0e46eda61556c3a_ta", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting b09c9c5daa504b78b0e46eda61556c3a_ta service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("b09c9c5daa504b78b0e46eda61556c3a_ta service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: __exidx_end */
extern "C" __attribute__((visibility("default"))) void* obj___exidx_end __asm__("__exidx_end") = NULL;

/* Exported Object: __ctype_b */
extern "C" __attribute__((visibility("default"))) void* obj___ctype_b __asm__("__ctype_b") = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Demangled: TA_DestroyEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_DestroyEntryPoint(void) {
    ALOGD("TA_DestroyEntryPoint() called");
    return 0;
}

/* Exported Object: __exidx_start */
extern "C" __attribute__((visibility("default"))) void* obj___exidx_start __asm__("__exidx_start") = NULL;

/* Exported Object: _ta_cfg */
extern "C" __attribute__((visibility("default"))) void* _ta_cfg = NULL;

/* Demangled: TA_CloseSessionEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_CloseSessionEntryPoint(void) {
    ALOGD("TA_CloseSessionEntryPoint() called");
    return 0;
}

/* Demangled: _init */
extern "C" __attribute__((visibility("default"))) int _init(void) {
    ALOGD("_init() called");
    return 0;
}

/* Demangled: TA_InvokeCommandEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_InvokeCommandEntryPoint(void) {
    ALOGD("TA_InvokeCommandEntryPoint() called");
    return 0;
}

/* Demangled: TA_OpenSessionEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_OpenSessionEntryPoint(void) {
    ALOGD("TA_OpenSessionEntryPoint() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Demangled: _start */
extern "C" __attribute__((visibility("default"))) int _start(void) {
    ALOGD("_start() called");
    return 0;
}

/* Demangled: base64_encode */
extern "C" __attribute__((visibility("default"))) int base64_encode(void) {
    ALOGD("base64_encode() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: _fini */
extern "C" __attribute__((visibility("default"))) int _fini(void) {
    ALOGD("_fini() called");
    return 0;
}

/* Demangled: base64_encodeblock */
extern "C" __attribute__((visibility("default"))) int base64_encodeblock(void) {
    ALOGD("base64_encodeblock() called");
    return 0;
}

/* Demangled: TA_CreateEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_CreateEntryPoint(void) {
    ALOGD("TA_CreateEntryPoint() called");
    return 0;
}

/* Demangled: base64_decode */
extern "C" __attribute__((visibility("default"))) int base64_decode(void) {
    ALOGD("base64_decode() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __stdout */
extern "C" __attribute__((visibility("default"))) void* obj___stdout __asm__("__stdout") = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: __L4_KIP_ADDR__ */
extern "C" __attribute__((visibility("default"))) void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__") = NULL;
