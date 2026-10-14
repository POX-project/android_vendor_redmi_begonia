/*
 * Reverse-Engineered Source for: libipsec_ims_shr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libipsec_ims_shr"

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
#include "libipsec_ims_shr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: setkey_flushSPD_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_flushSPD_xfrm(void) {
    ALOGD("setkey_flushSPD_xfrm() called");
    return 0;
}

/* Demangled: rtnl_accept_msg_xfrm */
extern "C" __attribute__((visibility("default"))) int rtnl_accept_msg_xfrm(void) {
    ALOGD("rtnl_accept_msg_xfrm() called");
    return 0;
}

/* Demangled: xfrm_algo_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_algo_parse(void) {
    ALOGD("xfrm_algo_parse() called");
    return 0;
}

/* Demangled: xfrm_dir_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_dir_parse(void) {
    ALOGD("xfrm_dir_parse() called");
    return 0;
}

/* Demangled: get_netmask */
extern "C" __attribute__((visibility("default"))) int get_netmask(void) {
    ALOGD("get_netmask() called");
    return 0;
}

/* Demangled: mask2bits */
extern "C" __attribute__((visibility("default"))) int mask2bits(void) {
    ALOGD("mask2bits() called");
    return 0;
}

/* Demangled: rtnl_close_xfrm */
extern "C" __attribute__((visibility("default"))) int rtnl_close_xfrm(void) {
    ALOGD("rtnl_close_xfrm() called");
    return 0;
}

/* Demangled: xfrm_mode_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_mode_parse(void) {
    ALOGD("xfrm_mode_parse() called");
    return 0;
}

/* Demangled: setkey_setSA */
extern "C" __attribute__((visibility("default"))) int setkey_setSA(void) {
    ALOGD("setkey_setSA() called");
    return 0;
}

/* Demangled: setkey_setSA_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_setSA_xfrm(void) {
    ALOGD("setkey_setSA_xfrm() called");
    return 0;
}

/* Demangled: get_u8 */
extern "C" __attribute__((visibility("default"))) int get_u8(void) {
    ALOGD("get_u8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: flush_SA_SP_exist_xfrm */
extern "C" __attribute__((visibility("default"))) int flush_SA_SP_exist_xfrm(void) {
    ALOGD("flush_SA_SP_exist_xfrm() called");
    return 0;
}

/* Demangled: setkey_flushSPD */
extern "C" __attribute__((visibility("default"))) int setkey_flushSPD(void) {
    ALOGD("setkey_flushSPD() called");
    return 0;
}

/* Demangled: xfrm_state_process_delete_exist */
extern "C" __attribute__((visibility("default"))) int xfrm_state_process_delete_exist(void) {
    ALOGD("xfrm_state_process_delete_exist() called");
    return 0;
}

/* Demangled: set_property_volte */
extern "C" __attribute__((visibility("default"))) int set_property_volte(void) {
    ALOGD("set_property_volte() called");
    return 0;
}

/* Demangled: xfrm_interg_algo_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_interg_algo_parse(void) {
    ALOGD("xfrm_interg_algo_parse() called");
    return 0;
}

/* Exported Object: xfrmproto_types */
extern "C" __attribute__((visibility("default"))) void* xfrmproto_types = NULL;

/* Demangled: setkey_flushSAD_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_flushSAD_xfrm(void) {
    ALOGD("setkey_flushSAD_xfrm() called");
    return 0;
}

/* Demangled: rtnl_listen_xfrm */
extern "C" __attribute__((visibility("default"))) int rtnl_listen_xfrm(void) {
    ALOGD("rtnl_listen_xfrm() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: get_addr_ipv4 */
extern "C" __attribute__((visibility("default"))) int get_addr_ipv4(void) {
    ALOGD("get_addr_ipv4() called");
    return 0;
}

/* Demangled: flush_SA_SP_exist */
extern "C" __attribute__((visibility("default"))) int flush_SA_SP_exist(void) {
    ALOGD("flush_SA_SP_exist() called");
    return 0;
}

/* Demangled: setkey_SP */
extern "C" __attribute__((visibility("default"))) int setkey_SP(void) {
    ALOGD("setkey_SP() called");
    return 0;
}

/* Demangled: setkey_SP_2layer_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_SP_2layer_xfrm(void) {
    ALOGD("setkey_SP_2layer_xfrm() called");
    return 0;
}

/* Demangled: setkey_SP_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_SP_xfrm(void) {
    ALOGD("setkey_SP_xfrm() called");
    return 0;
}

/* Demangled: setkey_deleteSA_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_deleteSA_xfrm(void) {
    ALOGD("setkey_deleteSA_xfrm() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: setkey_SP_tunnel_transport */
extern "C" __attribute__((visibility("default"))) int setkey_SP_tunnel_transport(void) {
    ALOGD("setkey_SP_tunnel_transport() called");
    return 0;
}

/* Demangled: get_addr_1 */
extern "C" __attribute__((visibility("default"))) int get_addr_1(void) {
    ALOGD("get_addr_1() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: setkey_SP_update_transport */
extern "C" __attribute__((visibility("default"))) int setkey_SP_update_transport(void) {
    ALOGD("setkey_SP_update_transport() called");
    return 0;
}

/* Demangled: setkey_deleteSA */
extern "C" __attribute__((visibility("default"))) int setkey_deleteSA(void) {
    ALOGD("setkey_deleteSA() called");
    return 0;
}

/* Demangled: xfrm_selector_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_selector_parse(void) {
    ALOGD("xfrm_selector_parse() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: setkey_deleteSP */
extern "C" __attribute__((visibility("default"))) int setkey_deleteSP(void) {
    ALOGD("setkey_deleteSP() called");
    return 0;
}

/* Demangled: setkey_deleteSP_xfrm */
extern "C" __attribute__((visibility("default"))) int setkey_deleteSP_xfrm(void) {
    ALOGD("setkey_deleteSP_xfrm() called");
    return 0;
}

/* Demangled: xfrm_policy_process_delete_exist */
extern "C" __attribute__((visibility("default"))) int xfrm_policy_process_delete_exist(void) {
    ALOGD("xfrm_policy_process_delete_exist() called");
    return 0;
}

/* Demangled: xfrm_xfrmproto_getbyname */
extern "C" __attribute__((visibility("default"))) int xfrm_xfrmproto_getbyname(void) {
    ALOGD("xfrm_xfrmproto_getbyname() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: rtnl_open_byproto_xfrm */
extern "C" __attribute__((visibility("default"))) int rtnl_open_byproto_xfrm(void) {
    ALOGD("rtnl_open_byproto_xfrm() called");
    return 0;
}

/* Demangled: get_u32 */
extern "C" __attribute__((visibility("default"))) int get_u32(void) {
    ALOGD("get_u32() called");
    return 0;
}

/* Demangled: dump_setkeySA */
extern "C" __attribute__((visibility("default"))) int dump_setkeySA(void) {
    ALOGD("dump_setkeySA() called");
    return 0;
}

/* Demangled: setkey_SP_tunnel */
extern "C" __attribute__((visibility("default"))) int setkey_SP_tunnel(void) {
    ALOGD("setkey_SP_tunnel() called");
    return 0;
}

/* Demangled: setkey_SP_update_tunnel_transport */
extern "C" __attribute__((visibility("default"))) int setkey_SP_update_tunnel_transport(void) {
    ALOGD("setkey_SP_update_tunnel_transport() called");
    return 0;
}

/* Demangled: get_unsigned */
extern "C" __attribute__((visibility("default"))) int get_unsigned(void) {
    ALOGD("get_unsigned() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: dump_setkeySP */
extern "C" __attribute__((visibility("default"))) int dump_setkeySP(void) {
    ALOGD("dump_setkeySP() called");
    return 0;
}

/* Demangled: xfrm_encry_algo_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_encry_algo_parse(void) {
    ALOGD("xfrm_encry_algo_parse() called");
    return 0;
}

/* Demangled: xfrm_id_parse */
extern "C" __attribute__((visibility("default"))) int xfrm_id_parse(void) {
    ALOGD("xfrm_id_parse() called");
    return 0;
}

/* Demangled: get_prefix */
extern "C" __attribute__((visibility("default"))) int get_prefix(void) {
    ALOGD("get_prefix() called");
    return 0;
}

/* Demangled: setkey_flushSAD */
extern "C" __attribute__((visibility("default"))) int setkey_flushSAD(void) {
    ALOGD("setkey_flushSAD() called");
    return 0;
}

/* Demangled: setkey_setSA_update */
extern "C" __attribute__((visibility("default"))) int setkey_setSA_update(void) {
    ALOGD("setkey_setSA_update() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: volte_pid */
extern "C" __attribute__((visibility("default"))) void* volte_pid = NULL;
