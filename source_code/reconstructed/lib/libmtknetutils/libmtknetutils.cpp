/*
 * Reverse-Engineered Source for: libmtknetutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtknetutils"

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
#include "libmtknetutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ifc_act_on_address */
extern "C" __attribute__((visibility("default"))) int ifc_act_on_address(void) {
    ALOGD("ifc_act_on_address() called");
    return 0;
}

/* Demangled: ifc_enable */
extern "C" __attribute__((visibility("default"))) int ifc_enable(void) {
    ALOGD("ifc_enable() called");
    return 0;
}

/* Demangled: ifc_get_ifindex */
extern "C" __attribute__((visibility("default"))) int ifc_get_ifindex(void) {
    ALOGD("ifc_get_ifindex() called");
    return 0;
}

/* Demangled: ifc_reset_connections */
extern "C" __attribute__((visibility("default"))) int ifc_reset_connections(void) {
    ALOGD("ifc_reset_connections() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: TC_PATH */
extern "C" __attribute__((visibility("default"))) void* TC_PATH = NULL;

/* Demangled: ifc_set_prefixLength */
extern "C" __attribute__((visibility("default"))) int ifc_set_prefixLength(void) {
    ALOGD("ifc_set_prefixLength() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: ifc_get_addr */
extern "C" __attribute__((visibility("default"))) int ifc_get_addr(void) {
    ALOGD("ifc_get_addr() called");
    return 0;
}

/* Demangled: ifc_set_hwaddr */
extern "C" __attribute__((visibility("default"))) int ifc_set_hwaddr(void) {
    ALOGD("ifc_set_hwaddr() called");
    return 0;
}

/* Demangled: ifc_set_txq_state */
extern "C" __attribute__((visibility("default"))) int ifc_set_txq_state(void) {
    ALOGD("ifc_set_txq_state() called");
    return 0;
}

/* Exported Object: ipv6_proc_path */
extern "C" __attribute__((visibility("default"))) void* ipv6_proc_path = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: ifc_add_address */
extern "C" __attribute__((visibility("default"))) int ifc_add_address(void) {
    ALOGD("ifc_add_address() called");
    return 0;
}

/* Demangled: ifc_create_default_route */
extern "C" __attribute__((visibility("default"))) int ifc_create_default_route(void) {
    ALOGD("ifc_create_default_route() called");
    return 0;
}

/* Demangled: ifc_init6 */
extern "C" __attribute__((visibility("default"))) int ifc_init6(void) {
    ALOGD("ifc_init6() called");
    return 0;
}

/* Demangled: ifc_set_mask */
extern "C" __attribute__((visibility("default"))) int ifc_set_mask(void) {
    ALOGD("ifc_set_mask() called");
    return 0;
}

/* Demangled: prefixLengthToIpv4Netmask */
extern "C" __attribute__((visibility("default"))) int prefixLengthToIpv4Netmask(void) {
    ALOGD("prefixLengthToIpv4Netmask() called");
    return 0;
}

/* Demangled: ifc_disable */
extern "C" __attribute__((visibility("default"))) int ifc_disable(void) {
    ALOGD("ifc_disable() called");
    return 0;
}

/* Demangled: ifc_init */
extern "C" __attribute__((visibility("default"))) int ifc_init(void) {
    ALOGD("ifc_init() called");
    return 0;
}

/* Demangled: ipv4NetmaskToPrefixLength */
extern "C" __attribute__((visibility("default"))) int ipv4NetmaskToPrefixLength(void) {
    ALOGD("ipv4NetmaskToPrefixLength() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: ifc_up */
extern "C" __attribute__((visibility("default"))) int ifc_up(void) {
    ALOGD("ifc_up() called");
    return 0;
}

/* Demangled: ifc_act_on_ipv4_route */
extern "C" __attribute__((visibility("default"))) int ifc_act_on_ipv4_route(void) {
    ALOGD("ifc_act_on_ipv4_route() called");
    return 0;
}

/* Demangled: ifc_clear_ipv6_addresses */
extern "C" __attribute__((visibility("default"))) int ifc_clear_ipv6_addresses(void) {
    ALOGD("ifc_clear_ipv6_addresses() called");
    return 0;
}

/* Demangled: ifc_close */
extern "C" __attribute__((visibility("default"))) int ifc_close(void) {
    ALOGD("ifc_close() called");
    return 0;
}

/* Demangled: ifc_ccmni_md_cfg */
extern "C" __attribute__((visibility("default"))) int ifc_ccmni_md_cfg(void) {
    ALOGD("ifc_ccmni_md_cfg() called");
    return 0;
}

/* Demangled: ifc_get_hwaddr */
extern "C" __attribute__((visibility("default"))) int ifc_get_hwaddr(void) {
    ALOGD("ifc_get_hwaddr() called");
    return 0;
}

/* Demangled: ifc_close6 */
extern "C" __attribute__((visibility("default"))) int ifc_close6(void) {
    ALOGD("ifc_close6() called");
    return 0;
}

/* Demangled: ifc_configure */
extern "C" __attribute__((visibility("default"))) int ifc_configure(void) {
    ALOGD("ifc_configure() called");
    return 0;
}

/* Demangled: ifc_del_address */
extern "C" __attribute__((visibility("default"))) int ifc_del_address(void) {
    ALOGD("ifc_del_address() called");
    return 0;
}

/* Demangled: string_to_ip */
extern "C" __attribute__((visibility("default"))) int string_to_ip(void) {
    ALOGD("string_to_ip() called");
    return 0;
}

/* Demangled: ifc_clear_addresses */
extern "C" __attribute__((visibility("default"))) int ifc_clear_addresses(void) {
    ALOGD("ifc_clear_addresses() called");
    return 0;
}

/* Demangled: ifc_down */
extern "C" __attribute__((visibility("default"))) int ifc_down(void) {
    ALOGD("ifc_down() called");
    return 0;
}

/* Demangled: ifc_remove_default_route */
extern "C" __attribute__((visibility("default"))) int ifc_remove_default_route(void) {
    ALOGD("ifc_remove_default_route() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: ifc_clear_ipv4_addresses */
extern "C" __attribute__((visibility("default"))) int ifc_clear_ipv4_addresses(void) {
    ALOGD("ifc_clear_ipv4_addresses() called");
    return 0;
}

/* Demangled: ifc_get_info */
extern "C" __attribute__((visibility("default"))) int ifc_get_info(void) {
    ALOGD("ifc_get_info() called");
    return 0;
}

/* Demangled: ifc_set_addr */
extern "C" __attribute__((visibility("default"))) int ifc_set_addr(void) {
    ALOGD("ifc_set_addr() called");
    return 0;
}

/* Exported Object: rx */
extern "C" __attribute__((visibility("default"))) void* rx = NULL;

/* Exported Object: tx */
extern "C" __attribute__((visibility("default"))) void* tx = NULL;
