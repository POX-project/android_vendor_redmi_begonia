/*
 * Reverse-Engineered Source for: secure_element-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "secure_element_impl"

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
#include "secure_element_impl.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_P73 "/dev/p73"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_P73, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_P73, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_P73, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: seCloseChannel */
extern "C" __attribute__((visibility("default"))) int seCloseChannel(void) {
    ALOGD("seCloseChannel() called");
    return 0;
}

/* Demangled: open_spi_clk */
extern "C" __attribute__((visibility("default"))) int open_spi_clk(void) {
    ALOGD("open_spi_clk() called");
    return 0;
}

/* Demangled: memscpy(void*, unsigned int, void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7memscpyPvjPKvj(void) {
    ALOGD("_Z7memscpyPvjPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: allChannelsClosed() */
extern "C" __attribute__((visibility("default"))) int _Z17allChannelsClosedv(void) {
    ALOGD("_Z17allChannelsClosedv() called");
    return 0;
}

/* Demangled: gp_open */
extern "C" __attribute__((visibility("default"))) int gp_open(void) {
    ALOGD("gp_open() called");
    return 0;
}

/* Exported Object: isGetAtrOnce */
extern "C" __attribute__((visibility("default"))) void* isGetAtrOnce = NULL;

/* Demangled: wrapper_invoke_cmd */
extern "C" __attribute__((visibility("default"))) int wrapper_invoke_cmd(void) {
    ALOGD("wrapper_invoke_cmd() called");
    return 0;
}

/* Demangled: close_spi_clk */
extern "C" __attribute__((visibility("default"))) int close_spi_clk(void) {
    ALOGD("close_spi_clk() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: jcop_fail_flag */
extern "C" __attribute__((visibility("default"))) void* jcop_fail_flag = NULL;

/* Demangled: seInit */
extern "C" __attribute__((visibility("default"))) int seInit(void) {
    ALOGD("seInit() called");
    return 0;
}

/* Demangled: seIsCardPresent */
extern "C" __attribute__((visibility("default"))) int seIsCardPresent(void) {
    ALOGD("seIsCardPresent() called");
    return 0;
}

/* Demangled: seOpenBasicChannel */
extern "C" __attribute__((visibility("default"))) int seOpenBasicChannel(void) {
    ALOGD("seOpenBasicChannel() called");
    return 0;
}

/* Demangled: prepare_and_do_transceive(unsigned char const*, int, unsigned char*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z25prepare_and_do_transceivePKhiPhiPi(void) {
    ALOGD("_Z25prepare_and_do_transceivePKhiPhiPi() called");
    return 0;
}

/* Demangled: ese_power_on */
extern "C" __attribute__((visibility("default"))) int ese_power_on(void) {
    ALOGD("ese_power_on() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: context */
extern "C" __attribute__((visibility("default"))) void* context = NULL;

/* Demangled: gp_close */
extern "C" __attribute__((visibility("default"))) int gp_close(void) {
    ALOGD("gp_close() called");
    return 0;
}

/* Demangled: seGetAtr */
extern "C" __attribute__((visibility("default"))) int seGetAtr(void) {
    ALOGD("seGetAtr() called");
    return 0;
}

/* Demangled: ese_close() */
extern "C" __attribute__((visibility("default"))) int _Z9ese_closev(void) {
    ALOGD("_Z9ese_closev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: iseSEGPOpen */
extern "C" __attribute__((visibility("default"))) void* iseSEGPOpen = NULL;

/* Exported Object: session */
extern "C" __attribute__((visibility("default"))) void* session = NULL;

/* Demangled: resetJcopUpdate() */
extern "C" __attribute__((visibility("default"))) int _Z15resetJcopUpdatev(void) {
    ALOGD("_Z15resetJcopUpdatev() called");
    return 0;
}

/* Demangled: gp_generic_transceive */
extern "C" __attribute__((visibility("default"))) int gp_generic_transceive(void) {
    ALOGD("gp_generic_transceive() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: ese_hard_reset */
extern "C" __attribute__((visibility("default"))) int ese_hard_reset(void) {
    ALOGD("ese_hard_reset() called");
    return 0;
}

/* Demangled: seTransmit */
extern "C" __attribute__((visibility("default"))) int seTransmit(void) {
    ALOGD("seTransmit() called");
    return 0;
}

/* Demangled: ese_init() */
extern "C" __attribute__((visibility("default"))) int _Z8ese_initv(void) {
    ALOGD("_Z8ese_initv() called");
    return 0;
}

/* Demangled: ese_open() */
extern "C" __attribute__((visibility("default"))) int _Z8ese_openv(void) {
    ALOGD("_Z8ese_openv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: seOpenLogicalChannel */
extern "C" __attribute__((visibility("default"))) int seOpenLogicalChannel(void) {
    ALOGD("seOpenLogicalChannel() called");
    return 0;
}

/* Demangled: memsApducmp(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11memsApducmpPKhjS0_j(void) {
    ALOGD("_Z11memsApducmpPKhjS0_j() called");
    return 0;
}

/* Demangled: print_text(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10print_textNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKhi(void) {
    ALOGD("_Z10print_textNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKhi() called");
    return 0;
}

/* Demangled: ese_power_off */
extern "C" __attribute__((visibility("default"))) int ese_power_off(void) {
    ALOGD("ese_power_off() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
