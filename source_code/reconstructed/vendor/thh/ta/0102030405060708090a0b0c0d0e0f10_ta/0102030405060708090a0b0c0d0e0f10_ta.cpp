/*
 * Reverse-Engineered Source for: 0102030405060708090a0b0c0d0e0f10.ta
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "0102030405060708090a0b0c0d0e0f10_ta"

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
#include "0102030405060708090a0b0c0d0e0f10_ta.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating 0102030405060708090a0b0c0d0e0f10_ta", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting 0102030405060708090a0b0c0d0e0f10_ta service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("0102030405060708090a0b0c0d0e0f10_ta service active");
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

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: typeinfo name for cxx::List_item */
extern "C" __attribute__((visibility("default"))) void* _ZTSN3cxx9List_itemE = NULL;

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

/* Exported Object: L4Re::Util::cap_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZN4L4Re4Util9cap_allocE = NULL;

/* Exported Object: typeinfo for cxx::List_item */
extern "C" __attribute__((visibility("default"))) void* _ZTIN3cxx9List_itemE = NULL;

/* Demangled: _start */
extern "C" __attribute__((visibility("default"))) int _start(void) {
    ALOGD("_start() called");
    return 0;
}

/* Demangled: L4Re::Rm::Auto_region<unsigned char*>::~Auto_region() */
extern "C" __attribute__((visibility("default"))) int _ZN4L4Re2Rm11Auto_regionIPhED2Ev(void) {
    ALOGD("_ZN4L4Re2Rm11Auto_regionIPhED2Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: _fini */
extern "C" __attribute__((visibility("default"))) int _fini(void) {
    ALOGD("_fini() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: TA_CreateEntryPoint */
extern "C" __attribute__((visibility("default"))) int TA_CreateEntryPoint(void) {
    ALOGD("TA_CreateEntryPoint() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: L4Re::Rm::Auto_region<unsigned char*>::~Auto_region() */
extern "C" __attribute__((visibility("default"))) int _ZN4L4Re2Rm11Auto_regionIPhED1Ev(void) {
    ALOGD("_ZN4L4Re2Rm11Auto_regionIPhED1Ev() called");
    return 0;
}

/* Exported Object: l4re_global_env */
extern "C" __attribute__((visibility("default"))) void* l4re_global_env = NULL;

/* Exported Object: __L4_KIP_ADDR__ */
extern "C" __attribute__((visibility("default"))) void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__") = NULL;
