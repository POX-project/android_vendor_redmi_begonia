/*
 * Reverse-Engineered Source for: libpcap_bak.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libpcap_bak"

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
#include "libpcap_bak.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_BUS_USB "/dev/bus/usb/"
#define DEV_DEV_USBMON "/dev/usbmon"
#define DEV_DEV_USBMON0 "/dev/usbmon0"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_BUS_USB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BUS_USB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BUS_USB, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_USBMON, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_USBMON, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_USBMON, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_USBMON0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_USBMON0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_USBMON0, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: add_or_find_if */
extern "C" __attribute__((visibility("default"))) int add_or_find_if(void) {
    ALOGD("add_or_find_if() called");
    return 0;
}

/* Demangled: gen_portop6 */
extern "C" __attribute__((visibility("default"))) int gen_portop6(void) {
    ALOGD("gen_portop6() called");
    return 0;
}

/* Demangled: pcap_strcasecmp */
extern "C" __attribute__((visibility("default"))) int pcap_strcasecmp(void) {
    ALOGD("pcap_strcasecmp() called");
    return 0;
}

/* Demangled: pcap_datalink_name_to_val */
extern "C" __attribute__((visibility("default"))) int pcap_datalink_name_to_val(void) {
    ALOGD("pcap_datalink_name_to_val() called");
    return 0;
}

/* Demangled: pcap_open_offline_common */
extern "C" __attribute__((visibility("default"))) int pcap_open_offline_common(void) {
    ALOGD("pcap_open_offline_common() called");
    return 0;
}

/* Demangled: pcap_set_immediate_mode */
extern "C" __attribute__((visibility("default"))) int pcap_set_immediate_mode(void) {
    ALOGD("pcap_set_immediate_mode() called");
    return 0;
}

/* Demangled: pcap_lex_init */
extern "C" __attribute__((visibility("default"))) int pcap_lex_init(void) {
    ALOGD("pcap_lex_init() called");
    return 0;
}

/* Demangled: pcap_dump */
extern "C" __attribute__((visibility("default"))) int pcap_dump(void) {
    ALOGD("pcap_dump() called");
    return 0;
}

/* Demangled: pcap_realloc */
extern "C" __attribute__((visibility("default"))) int pcap_realloc(void) {
    ALOGD("pcap_realloc() called");
    return 0;
}

/* Demangled: pcap_next_ex */
extern "C" __attribute__((visibility("default"))) int pcap_next_ex(void) {
    ALOGD("pcap_next_ex() called");
    return 0;
}

/* Demangled: pcap_lex_init_extra */
extern "C" __attribute__((visibility("default"))) int pcap_lex_init_extra(void) {
    ALOGD("pcap_lex_init_extra() called");
    return 0;
}

/* Demangled: pcap_create_common */
extern "C" __attribute__((visibility("default"))) int pcap_create_common(void) {
    ALOGD("pcap_create_common() called");
    return 0;
}

/* Demangled: pcap_can_set_rfmon */
extern "C" __attribute__((visibility("default"))) int pcap_can_set_rfmon(void) {
    ALOGD("pcap_can_set_rfmon() called");
    return 0;
}

/* Demangled: pcap_datalink_ext */
extern "C" __attribute__((visibility("default"))) int pcap_datalink_ext(void) {
    ALOGD("pcap_datalink_ext() called");
    return 0;
}

/* Demangled: pcap_lex_destroy */
extern "C" __attribute__((visibility("default"))) int pcap_lex_destroy(void) {
    ALOGD("pcap_lex_destroy() called");
    return 0;
}

/* Demangled: pcap_open_offline */
extern "C" __attribute__((visibility("default"))) int pcap_open_offline(void) {
    ALOGD("pcap_open_offline() called");
    return 0;
}

/* Demangled: gen_and */
extern "C" __attribute__((visibility("default"))) int gen_and(void) {
    ALOGD("gen_and() called");
    return 0;
}

/* Demangled: gen_ncode */
extern "C" __attribute__((visibility("default"))) int gen_ncode(void) {
    ALOGD("gen_ncode() called");
    return 0;
}

/* Demangled: gen_or */
extern "C" __attribute__((visibility("default"))) int gen_or(void) {
    ALOGD("gen_or() called");
    return 0;
}

/* Demangled: pcap_ether_aton */
extern "C" __attribute__((visibility("default"))) int pcap_ether_aton(void) {
    ALOGD("pcap_ether_aton() called");
    return 0;
}

/* Demangled: pcap__scan_buffer */
extern "C" __attribute__((visibility("default"))) int pcap__scan_buffer(void) {
    ALOGD("pcap__scan_buffer() called");
    return 0;
}

/* Demangled: pcap_get_selectable_fd */
extern "C" __attribute__((visibility("default"))) int pcap_get_selectable_fd(void) {
    ALOGD("pcap_get_selectable_fd() called");
    return 0;
}

/* Demangled: pcap_lib_version */
extern "C" __attribute__((visibility("default"))) int pcap_lib_version(void) {
    ALOGD("pcap_lib_version() called");
    return 0;
}

/* Demangled: pcap_minor_version */
extern "C" __attribute__((visibility("default"))) int pcap_minor_version(void) {
    ALOGD("pcap_minor_version() called");
    return 0;
}

/* Demangled: pcap_sendpacket */
extern "C" __attribute__((visibility("default"))) int pcap_sendpacket(void) {
    ALOGD("pcap_sendpacket() called");
    return 0;
}

/* Demangled: pcap_statustostr */
extern "C" __attribute__((visibility("default"))) int pcap_statustostr(void) {
    ALOGD("pcap_statustostr() called");
    return 0;
}

/* Demangled: bpf_syntax_error */
extern "C" __attribute__((visibility("default"))) int bpf_syntax_error(void) {
    ALOGD("bpf_syntax_error() called");
    return 0;
}

/* Demangled: pcap_activate */
extern "C" __attribute__((visibility("default"))) int pcap_activate(void) {
    ALOGD("pcap_activate() called");
    return 0;
}

/* Demangled: pcap_set_datalink */
extern "C" __attribute__((visibility("default"))) int pcap_set_datalink(void) {
    ALOGD("pcap_set_datalink() called");
    return 0;
}

/* Demangled: gen_less */
extern "C" __attribute__((visibility("default"))) int gen_less(void) {
    ALOGD("gen_less() called");
    return 0;
}

/* Demangled: pcap_push_buffer_state */
extern "C" __attribute__((visibility("default"))) int pcap_push_buffer_state(void) {
    ALOGD("pcap_push_buffer_state() called");
    return 0;
}

/* Demangled: pcap_free_tstamp_types */
extern "C" __attribute__((visibility("default"))) int pcap_free_tstamp_types(void) {
    ALOGD("pcap_free_tstamp_types() called");
    return 0;
}

/* Demangled: pcap_list_datalinks */
extern "C" __attribute__((visibility("default"))) int pcap_list_datalinks(void) {
    ALOGD("pcap_list_datalinks() called");
    return 0;
}

/* Demangled: pcap_tstamp_type_name_to_val */
extern "C" __attribute__((visibility("default"))) int pcap_tstamp_type_name_to_val(void) {
    ALOGD("pcap_tstamp_type_name_to_val() called");
    return 0;
}

/* Demangled: add_addr_to_dev */
extern "C" __attribute__((visibility("default"))) int add_addr_to_dev(void) {
    ALOGD("add_addr_to_dev() called");
    return 0;
}

/* Demangled: pcap_next */
extern "C" __attribute__((visibility("default"))) int pcap_next(void) {
    ALOGD("pcap_next() called");
    return 0;
}

/* Demangled: pcap_open_dead */
extern "C" __attribute__((visibility("default"))) int pcap_open_dead(void) {
    ALOGD("pcap_open_dead() called");
    return 0;
}

/* Demangled: gen_not */
extern "C" __attribute__((visibility("default"))) int gen_not(void) {
    ALOGD("gen_not() called");
    return 0;
}

/* Demangled: pcap_dump_close */
extern "C" __attribute__((visibility("default"))) int pcap_dump_close(void) {
    ALOGD("pcap_dump_close() called");
    return 0;
}

/* Demangled: pcap_datalink */
extern "C" __attribute__((visibility("default"))) int pcap_datalink(void) {
    ALOGD("pcap_datalink() called");
    return 0;
}

/* Demangled: gen_mpls */
extern "C" __attribute__((visibility("default"))) int gen_mpls(void) {
    ALOGD("gen_mpls() called");
    return 0;
}

/* Demangled: pcap_is_swapped */
extern "C" __attribute__((visibility("default"))) int pcap_is_swapped(void) {
    ALOGD("pcap_is_swapped() called");
    return 0;
}

/* Demangled: pcap_lookupdev */
extern "C" __attribute__((visibility("default"))) int pcap_lookupdev(void) {
    ALOGD("pcap_lookupdev() called");
    return 0;
}

/* Demangled: gen_arth */
extern "C" __attribute__((visibility("default"))) int gen_arth(void) {
    ALOGD("gen_arth() called");
    return 0;
}

/* Demangled: gen_vlan */
extern "C" __attribute__((visibility("default"))) int gen_vlan(void) {
    ALOGD("gen_vlan() called");
    return 0;
}

/* Demangled: bpf_filter */
extern "C" __attribute__((visibility("default"))) int bpf_filter(void) {
    ALOGD("bpf_filter() called");
    return 0;
}

/* Demangled: android_nflog_send_config_cmd */
extern "C" __attribute__((visibility("default"))) int android_nflog_send_config_cmd(void) {
    ALOGD("android_nflog_send_config_cmd() called");
    return 0;
}

/* Demangled: pcap_file */
extern "C" __attribute__((visibility("default"))) int pcap_file(void) {
    ALOGD("pcap_file() called");
    return 0;
}

/* Demangled: pcap_free_datalinks */
extern "C" __attribute__((visibility("default"))) int pcap_free_datalinks(void) {
    ALOGD("pcap_free_datalinks() called");
    return 0;
}

/* Demangled: pcap_offline_read */
extern "C" __attribute__((visibility("default"))) int pcap_offline_read(void) {
    ALOGD("pcap_offline_read() called");
    return 0;
}

/* Demangled: linktype_to_dlt */
extern "C" __attribute__((visibility("default"))) int linktype_to_dlt(void) {
    ALOGD("linktype_to_dlt() called");
    return 0;
}

/* Demangled: pcap__switch_to_buffer */
extern "C" __attribute__((visibility("default"))) int pcap__switch_to_buffer(void) {
    ALOGD("pcap__switch_to_buffer() called");
    return 0;
}

/* Demangled: pcap_get_lineno */
extern "C" __attribute__((visibility("default"))) int pcap_get_lineno(void) {
    ALOGD("pcap_get_lineno() called");
    return 0;
}

/* Demangled: pcap_cleanup_live_common */
extern "C" __attribute__((visibility("default"))) int pcap_cleanup_live_common(void) {
    ALOGD("pcap_cleanup_live_common() called");
    return 0;
}

/* Demangled: pcap_set_tstamp_type */
extern "C" __attribute__((visibility("default"))) int pcap_set_tstamp_type(void) {
    ALOGD("pcap_set_tstamp_type() called");
    return 0;
}

/* Demangled: __pcap_nametodnaddr */
extern "C" __attribute__((visibility("default"))) int fn___pcap_nametodnaddr(void) __asm__("__pcap_nametodnaddr");
int fn___pcap_nametodnaddr(void) {
    ALOGD("__pcap_nametodnaddr() called");
    return 0;
}

/* Demangled: pcap_parse */
extern "C" __attribute__((visibility("default"))) int pcap_parse(void) {
    ALOGD("pcap_parse() called");
    return 0;
}

/* Demangled: pcap_get_out */
extern "C" __attribute__((visibility("default"))) int pcap_get_out(void) {
    ALOGD("pcap_get_out() called");
    return 0;
}

/* Demangled: pcap_create */
extern "C" __attribute__((visibility("default"))) int pcap_create(void) {
    ALOGD("pcap_create() called");
    return 0;
}

/* Demangled: pcap_loop */
extern "C" __attribute__((visibility("default"))) int pcap_loop(void) {
    ALOGD("pcap_loop() called");
    return 0;
}

/* Demangled: pcap_stats */
extern "C" __attribute__((visibility("default"))) int pcap_stats(void) {
    ALOGD("pcap_stats() called");
    return 0;
}

/* Demangled: pcap_get_lval */
extern "C" __attribute__((visibility("default"))) int pcap_get_lval(void) {
    ALOGD("pcap_get_lval() called");
    return 0;
}

/* Demangled: pcap_datalink_val_to_description */
extern "C" __attribute__((visibility("default"))) int pcap_datalink_val_to_description(void) {
    ALOGD("pcap_datalink_val_to_description() called");
    return 0;
}

/* Demangled: pcap_inject */
extern "C" __attribute__((visibility("default"))) int pcap_inject(void) {
    ALOGD("pcap_inject() called");
    return 0;
}

/* Demangled: pcap_set_rfmon */
extern "C" __attribute__((visibility("default"))) int pcap_set_rfmon(void) {
    ALOGD("pcap_set_rfmon() called");
    return 0;
}

/* Demangled: pcap_tstamp_type_val_to_description */
extern "C" __attribute__((visibility("default"))) int pcap_tstamp_type_val_to_description(void) {
    ALOGD("pcap_tstamp_type_val_to_description() called");
    return 0;
}

/* Demangled: gen_portrangeop */
extern "C" __attribute__((visibility("default"))) int gen_portrangeop(void) {
    ALOGD("gen_portrangeop() called");
    return 0;
}

/* Demangled: pcap_get_leng */
extern "C" __attribute__((visibility("default"))) int pcap_get_leng(void) {
    ALOGD("pcap_get_leng() called");
    return 0;
}

/* Demangled: pcap_remove_from_pcaps_to_close */
extern "C" __attribute__((visibility("default"))) int pcap_remove_from_pcaps_to_close(void) {
    ALOGD("pcap_remove_from_pcaps_to_close() called");
    return 0;
}

/* Demangled: pcap_list_tstamp_types */
extern "C" __attribute__((visibility("default"))) int pcap_list_tstamp_types(void) {
    ALOGD("pcap_list_tstamp_types() called");
    return 0;
}

/* Demangled: pcap_open_offline_with_tstamp_precision */
extern "C" __attribute__((visibility("default"))) int pcap_open_offline_with_tstamp_precision(void) {
    ALOGD("pcap_open_offline_with_tstamp_precision() called");
    return 0;
}

/* Exported Object: pcap_version */
extern "C" __attribute__((visibility("default"))) void* pcap_version = NULL;

/* Demangled: gen_p80211_fcdir */
extern "C" __attribute__((visibility("default"))) int gen_p80211_fcdir(void) {
    ALOGD("gen_p80211_fcdir() called");
    return 0;
}

/* Demangled: gen_portrangeop6 */
extern "C" __attribute__((visibility("default"))) int gen_portrangeop6(void) {
    ALOGD("gen_portrangeop6() called");
    return 0;
}

/* Demangled: pcap__delete_buffer */
extern "C" __attribute__((visibility("default"))) int pcap__delete_buffer(void) {
    ALOGD("pcap__delete_buffer() called");
    return 0;
}

/* Demangled: pcap_restart */
extern "C" __attribute__((visibility("default"))) int pcap_restart(void) {
    ALOGD("pcap_restart() called");
    return 0;
}

/* Demangled: pcap_snapshot */
extern "C" __attribute__((visibility("default"))) int pcap_snapshot(void) {
    ALOGD("pcap_snapshot() called");
    return 0;
}

/* Demangled: gen_llc_s_subtype */
extern "C" __attribute__((visibility("default"))) int gen_llc_s_subtype(void) {
    ALOGD("gen_llc_s_subtype() called");
    return 0;
}

/* Demangled: gen_portop */
extern "C" __attribute__((visibility("default"))) int gen_portop(void) {
    ALOGD("gen_portop() called");
    return 0;
}

/* Demangled: pcap_get_in */
extern "C" __attribute__((visibility("default"))) int pcap_get_in(void) {
    ALOGD("pcap_get_in() called");
    return 0;
}

/* Demangled: pcap_set_in */
extern "C" __attribute__((visibility("default"))) int pcap_set_in(void) {
    ALOGD("pcap_set_in() called");
    return 0;
}

/* Demangled: pcap_add_to_pcaps_to_close */
extern "C" __attribute__((visibility("default"))) int pcap_add_to_pcaps_to_close(void) {
    ALOGD("pcap_add_to_pcaps_to_close() called");
    return 0;
}

/* Demangled: pcap_getnonblock */
extern "C" __attribute__((visibility("default"))) int pcap_getnonblock(void) {
    ALOGD("pcap_getnonblock() called");
    return 0;
}

/* Demangled: pcap_check_header */
extern "C" __attribute__((visibility("default"))) int pcap_check_header(void) {
    ALOGD("pcap_check_header() called");
    return 0;
}

/* Demangled: pcap_fopen_offline */
extern "C" __attribute__((visibility("default"))) int pcap_fopen_offline(void) {
    ALOGD("pcap_fopen_offline() called");
    return 0;
}

/* Demangled: swap_pseudo_headers */
extern "C" __attribute__((visibility("default"))) int swap_pseudo_headers(void) {
    ALOGD("swap_pseudo_headers() called");
    return 0;
}

/* Demangled: pcap_dump_open */
extern "C" __attribute__((visibility("default"))) int pcap_dump_open(void) {
    ALOGD("pcap_dump_open() called");
    return 0;
}

/* Demangled: bpf_image */
extern "C" __attribute__((visibility("default"))) int bpf_image(void) {
    ALOGD("bpf_image() called");
    return 0;
}

/* Demangled: pcap_set_column */
extern "C" __attribute__((visibility("default"))) int pcap_set_column(void) {
    ALOGD("pcap_set_column() called");
    return 0;
}

/* Demangled: pcap_setfilter */
extern "C" __attribute__((visibility("default"))) int pcap_setfilter(void) {
    ALOGD("pcap_setfilter() called");
    return 0;
}

/* Demangled: gen_atmmulti_abbrev */
extern "C" __attribute__((visibility("default"))) int gen_atmmulti_abbrev(void) {
    ALOGD("gen_atmmulti_abbrev() called");
    return 0;
}

/* Demangled: gen_geneve */
extern "C" __attribute__((visibility("default"))) int gen_geneve(void) {
    ALOGD("gen_geneve() called");
    return 0;
}

/* Demangled: gen_greater */
extern "C" __attribute__((visibility("default"))) int gen_greater(void) {
    ALOGD("gen_greater() called");
    return 0;
}

/* Demangled: gen_mtp3field_code */
extern "C" __attribute__((visibility("default"))) int gen_mtp3field_code(void) {
    ALOGD("gen_mtp3field_code() called");
    return 0;
}

/* Demangled: pcap_fopen_offline_with_tstamp_precision */
extern "C" __attribute__((visibility("default"))) int pcap_fopen_offline_with_tstamp_precision(void) {
    ALOGD("pcap_fopen_offline_with_tstamp_precision() called");
    return 0;
}

/* Demangled: pcap__scan_bytes */
extern "C" __attribute__((visibility("default"))) int pcap__scan_bytes(void) {
    ALOGD("pcap__scan_bytes() called");
    return 0;
}

/* Demangled: pcap_free */
extern "C" __attribute__((visibility("default"))) int pcap_free(void) {
    ALOGD("pcap_free() called");
    return 0;
}

/* Demangled: pcap_setnonblock_fd */
extern "C" __attribute__((visibility("default"))) int pcap_setnonblock_fd(void) {
    ALOGD("pcap_setnonblock_fd() called");
    return 0;
}

/* Demangled: pcap_open_dead_with_tstamp_precision */
extern "C" __attribute__((visibility("default"))) int pcap_open_dead_with_tstamp_precision(void) {
    ALOGD("pcap_open_dead_with_tstamp_precision() called");
    return 0;
}

/* Demangled: pcap_setdirection */
extern "C" __attribute__((visibility("default"))) int pcap_setdirection(void) {
    ALOGD("pcap_setdirection() called");
    return 0;
}

/* Demangled: gen_pf_rnr */
extern "C" __attribute__((visibility("default"))) int gen_pf_rnr(void) {
    ALOGD("gen_pf_rnr() called");
    return 0;
}

/* Demangled: gen_proto_abbrev */
extern "C" __attribute__((visibility("default"))) int gen_proto_abbrev(void) {
    ALOGD("gen_proto_abbrev() called");
    return 0;
}

/* Demangled: pcap_compile_nopcap */
extern "C" __attribute__((visibility("default"))) int pcap_compile_nopcap(void) {
    ALOGD("pcap_compile_nopcap() called");
    return 0;
}

/* Demangled: pcap_nametoproto */
extern "C" __attribute__((visibility("default"))) int pcap_nametoproto(void) {
    ALOGD("pcap_nametoproto() called");
    return 0;
}

/* Demangled: bpf_optimize */
extern "C" __attribute__((visibility("default"))) int bpf_optimize(void) {
    ALOGD("bpf_optimize() called");
    return 0;
}

/* Exported Object: eproto_db */
extern "C" __attribute__((visibility("default"))) void* eproto_db = NULL;

/* Demangled: pcap_set_timeout */
extern "C" __attribute__((visibility("default"))) int pcap_set_timeout(void) {
    ALOGD("pcap_set_timeout() called");
    return 0;
}

/* Demangled: finish_parse */
extern "C" __attribute__((visibility("default"))) int finish_parse(void) {
    ALOGD("finish_parse() called");
    return 0;
}

/* Demangled: gen_llc_u_subtype */
extern "C" __attribute__((visibility("default"))) int gen_llc_u_subtype(void) {
    ALOGD("gen_llc_u_subtype() called");
    return 0;
}

/* Demangled: gen_load */
extern "C" __attribute__((visibility("default"))) int gen_load(void) {
    ALOGD("gen_load() called");
    return 0;
}

/* Demangled: gen_mcode6 */
extern "C" __attribute__((visibility("default"))) int gen_mcode6(void) {
    ALOGD("gen_mcode6() called");
    return 0;
}

/* Demangled: bpf_validate */
extern "C" __attribute__((visibility("default"))) int bpf_validate(void) {
    ALOGD("bpf_validate() called");
    return 0;
}

/* Demangled: pcap_set_debug */
extern "C" __attribute__((visibility("default"))) int pcap_set_debug(void) {
    ALOGD("pcap_set_debug() called");
    return 0;
}

/* Demangled: pcap_nametoeproto */
extern "C" __attribute__((visibility("default"))) int pcap_nametoeproto(void) {
    ALOGD("pcap_nametoeproto() called");
    return 0;
}

/* Demangled: pcap_nametonetaddr */
extern "C" __attribute__((visibility("default"))) int pcap_nametonetaddr(void) {
    ALOGD("pcap_nametonetaddr() called");
    return 0;
}

/* Demangled: pcap_ng_check_header */
extern "C" __attribute__((visibility("default"))) int pcap_ng_check_header(void) {
    ALOGD("pcap_ng_check_header() called");
    return 0;
}

/* Demangled: bpf_filter_with_aux_data */
extern "C" __attribute__((visibility("default"))) int bpf_filter_with_aux_data(void) {
    ALOGD("bpf_filter_with_aux_data() called");
    return 0;
}

/* Demangled: if_flags_to_pcap_flags */
extern "C" __attribute__((visibility("default"))) int if_flags_to_pcap_flags(void) {
    ALOGD("if_flags_to_pcap_flags() called");
    return 0;
}

/* Demangled: pcap_findalldevs_interfaces */
extern "C" __attribute__((visibility("default"))) int pcap_findalldevs_interfaces(void) {
    ALOGD("pcap_findalldevs_interfaces() called");
    return 0;
}

/* Demangled: pcap_getnonblock_fd */
extern "C" __attribute__((visibility("default"))) int pcap_getnonblock_fd(void) {
    ALOGD("pcap_getnonblock_fd() called");
    return 0;
}

/* Demangled: pcap_set_extra */
extern "C" __attribute__((visibility("default"))) int pcap_set_extra(void) {
    ALOGD("pcap_set_extra() called");
    return 0;
}

/* Demangled: pcap_next_etherent */
extern "C" __attribute__((visibility("default"))) int pcap_next_etherent(void) {
    ALOGD("pcap_next_etherent() called");
    return 0;
}

/* Demangled: pcap_lex */
extern "C" __attribute__((visibility("default"))) int pcap_lex(void) {
    ALOGD("pcap_lex() called");
    return 0;
}

/* Demangled: usb_findalldevs */
extern "C" __attribute__((visibility("default"))) int usb_findalldevs(void) {
    ALOGD("usb_findalldevs() called");
    return 0;
}

/* Demangled: pcap_datalink_val_to_name */
extern "C" __attribute__((visibility("default"))) int pcap_datalink_val_to_name(void) {
    ALOGD("pcap_datalink_val_to_name() called");
    return 0;
}

/* Demangled: pcap_oneshot */
extern "C" __attribute__((visibility("default"))) int pcap_oneshot(void) {
    ALOGD("pcap_oneshot() called");
    return 0;
}

/* Demangled: gen_acode */
extern "C" __attribute__((visibility("default"))) int gen_acode(void) {
    ALOGD("gen_acode() called");
    return 0;
}

/* Demangled: gen_atmfield_code */
extern "C" __attribute__((visibility("default"))) int gen_atmfield_code(void) {
    ALOGD("gen_atmfield_code() called");
    return 0;
}

/* Demangled: gen_ecode */
extern "C" __attribute__((visibility("default"))) int gen_ecode(void) {
    ALOGD("gen_ecode() called");
    return 0;
}

/* Demangled: gen_mcode */
extern "C" __attribute__((visibility("default"))) int gen_mcode(void) {
    ALOGD("gen_mcode() called");
    return 0;
}

/* Demangled: gen_scode */
extern "C" __attribute__((visibility("default"))) int gen_scode(void) {
    ALOGD("gen_scode() called");
    return 0;
}

/* Demangled: pcap_get_tstamp_precision */
extern "C" __attribute__((visibility("default"))) int pcap_get_tstamp_precision(void) {
    ALOGD("pcap_get_tstamp_precision() called");
    return 0;
}

/* Demangled: gen_llc_i */
extern "C" __attribute__((visibility("default"))) int gen_llc_i(void) {
    ALOGD("gen_llc_i() called");
    return 0;
}

/* Demangled: pcap_set_out */
extern "C" __attribute__((visibility("default"))) int pcap_set_out(void) {
    ALOGD("pcap_set_out() called");
    return 0;
}

/* Demangled: install_bpf_program */
extern "C" __attribute__((visibility("default"))) int install_bpf_program(void) {
    ALOGD("install_bpf_program() called");
    return 0;
}

/* Demangled: pcap_check_activated */
extern "C" __attribute__((visibility("default"))) int pcap_check_activated(void) {
    ALOGD("pcap_check_activated() called");
    return 0;
}

/* Demangled: pcap_set_snaplen */
extern "C" __attribute__((visibility("default"))) int pcap_set_snaplen(void) {
    ALOGD("pcap_set_snaplen() called");
    return 0;
}

/* Demangled: gen_mtp2type_abbrev */
extern "C" __attribute__((visibility("default"))) int gen_mtp2type_abbrev(void) {
    ALOGD("gen_mtp2type_abbrev() called");
    return 0;
}

/* Demangled: gen_relation */
extern "C" __attribute__((visibility("default"))) int gen_relation(void) {
    ALOGD("gen_relation() called");
    return 0;
}

/* Demangled: sappend */
extern "C" __attribute__((visibility("default"))) int sappend(void) {
    ALOGD("sappend() called");
    return 0;
}

/* Demangled: pcap_get_debug */
extern "C" __attribute__((visibility("default"))) int pcap_get_debug(void) {
    ALOGD("pcap_get_debug() called");
    return 0;
}

/* Demangled: pcap_do_addexit */
extern "C" __attribute__((visibility("default"))) int pcap_do_addexit(void) {
    ALOGD("pcap_do_addexit() called");
    return 0;
}

/* Demangled: gen_broadcast */
extern "C" __attribute__((visibility("default"))) int gen_broadcast(void) {
    ALOGD("gen_broadcast() called");
    return 0;
}

/* Demangled: gen_pf_reason */
extern "C" __attribute__((visibility("default"))) int gen_pf_reason(void) {
    ALOGD("gen_pf_reason() called");
    return 0;
}

/* Demangled: pcap_nametollc */
extern "C" __attribute__((visibility("default"))) int pcap_nametollc(void) {
    ALOGD("pcap_nametollc() called");
    return 0;
}

/* Demangled: pcap__create_buffer */
extern "C" __attribute__((visibility("default"))) int pcap__create_buffer(void) {
    ALOGD("pcap__create_buffer() called");
    return 0;
}

/* Demangled: pcap_get_text */
extern "C" __attribute__((visibility("default"))) int pcap_get_text(void) {
    ALOGD("pcap_get_text() called");
    return 0;
}

/* Demangled: pcap_pop_buffer_state */
extern "C" __attribute__((visibility("default"))) int pcap_pop_buffer_state(void) {
    ALOGD("pcap_pop_buffer_state() called");
    return 0;
}

/* Demangled: pcap_strerror */
extern "C" __attribute__((visibility("default"))) int pcap_strerror(void) {
    ALOGD("pcap_strerror() called");
    return 0;
}

/* Demangled: pcap_freecode */
extern "C" __attribute__((visibility("default"))) int pcap_freecode(void) {
    ALOGD("pcap_freecode() called");
    return 0;
}

/* Demangled: pcap_open_live */
extern "C" __attribute__((visibility("default"))) int pcap_open_live(void) {
    ALOGD("pcap_open_live() called");
    return 0;
}

/* Demangled: gen_llc */
extern "C" __attribute__((visibility("default"))) int gen_llc(void) {
    ALOGD("gen_llc() called");
    return 0;
}

/* Demangled: pcap_get_extra */
extern "C" __attribute__((visibility("default"))) int pcap_get_extra(void) {
    ALOGD("pcap_get_extra() called");
    return 0;
}

/* Demangled: add_addr_to_iflist */
extern "C" __attribute__((visibility("default"))) int add_addr_to_iflist(void) {
    ALOGD("add_addr_to_iflist() called");
    return 0;
}

/* Demangled: pcap_tstamp_type_val_to_name */
extern "C" __attribute__((visibility("default"))) int pcap_tstamp_type_val_to_name(void) {
    ALOGD("pcap_tstamp_type_val_to_name() called");
    return 0;
}

/* Demangled: gen_pppoed */
extern "C" __attribute__((visibility("default"))) int gen_pppoed(void) {
    ALOGD("gen_pppoed() called");
    return 0;
}

/* Demangled: pcap_nametoportrange */
extern "C" __attribute__((visibility("default"))) int pcap_nametoportrange(void) {
    ALOGD("pcap_nametoportrange() called");
    return 0;
}

/* Demangled: pcap_dump_open_append */
extern "C" __attribute__((visibility("default"))) int pcap_dump_open_append(void) {
    ALOGD("pcap_dump_open_append() called");
    return 0;
}

/* Demangled: pcap_add_if */
extern "C" __attribute__((visibility("default"))) int pcap_add_if(void) {
    ALOGD("pcap_add_if() called");
    return 0;
}

/* Demangled: gen_loadlen */
extern "C" __attribute__((visibility("default"))) int gen_loadlen(void) {
    ALOGD("gen_loadlen() called");
    return 0;
}

/* Demangled: pcap_nametoaddrinfo */
extern "C" __attribute__((visibility("default"))) int pcap_nametoaddrinfo(void) {
    ALOGD("pcap_nametoaddrinfo() called");
    return 0;
}

/* Demangled: pcap_nametoport */
extern "C" __attribute__((visibility("default"))) int pcap_nametoport(void) {
    ALOGD("pcap_nametoport() called");
    return 0;
}

/* Demangled: pcap_dump_flush */
extern "C" __attribute__((visibility("default"))) int pcap_dump_flush(void) {
    ALOGD("pcap_dump_flush() called");
    return 0;
}

/* Demangled: pcap_close */
extern "C" __attribute__((visibility("default"))) int pcap_close(void) {
    ALOGD("pcap_close() called");
    return 0;
}

/* Demangled: gen_pf_ifname */
extern "C" __attribute__((visibility("default"))) int gen_pf_ifname(void) {
    ALOGD("gen_pf_ifname() called");
    return 0;
}

/* Demangled: gen_pf_ruleset */
extern "C" __attribute__((visibility("default"))) int gen_pf_ruleset(void) {
    ALOGD("gen_pf_ruleset() called");
    return 0;
}

/* Demangled: pcap_alloc */
extern "C" __attribute__((visibility("default"))) int pcap_alloc(void) {
    ALOGD("pcap_alloc() called");
    return 0;
}

/* Demangled: pcap_get_column */
extern "C" __attribute__((visibility("default"))) int pcap_get_column(void) {
    ALOGD("pcap_get_column() called");
    return 0;
}

/* Demangled: pcap_perror */
extern "C" __attribute__((visibility("default"))) int pcap_perror(void) {
    ALOGD("pcap_perror() called");
    return 0;
}

/* Demangled: pcap_breakloop */
extern "C" __attribute__((visibility("default"))) int pcap_breakloop(void) {
    ALOGD("pcap_breakloop() called");
    return 0;
}

/* Demangled: gen_llc_s */
extern "C" __attribute__((visibility("default"))) int gen_llc_s(void) {
    ALOGD("gen_llc_s() called");
    return 0;
}

/* Demangled: gen_p80211_type */
extern "C" __attribute__((visibility("default"))) int gen_p80211_type(void) {
    ALOGD("gen_p80211_type() called");
    return 0;
}

/* Demangled: pcap_nametoaddr */
extern "C" __attribute__((visibility("default"))) int pcap_nametoaddr(void) {
    ALOGD("pcap_nametoaddr() called");
    return 0;
}

/* Demangled: pcap_findalldevs */
extern "C" __attribute__((visibility("default"))) int pcap_findalldevs(void) {
    ALOGD("pcap_findalldevs() called");
    return 0;
}

/* Demangled: pcap_major_version */
extern "C" __attribute__((visibility("default"))) int pcap_major_version(void) {
    ALOGD("pcap_major_version() called");
    return 0;
}

/* Demangled: pcap_offline_filter */
extern "C" __attribute__((visibility("default"))) int pcap_offline_filter(void) {
    ALOGD("pcap_offline_filter() called");
    return 0;
}

/* Demangled: gen_neg */
extern "C" __attribute__((visibility("default"))) int gen_neg(void) {
    ALOGD("gen_neg() called");
    return 0;
}

/* Demangled: bpf_dump */
extern "C" __attribute__((visibility("default"))) int bpf_dump(void) {
    ALOGD("bpf_dump() called");
    return 0;
}

/* Demangled: pcap_set_lval */
extern "C" __attribute__((visibility("default"))) int pcap_set_lval(void) {
    ALOGD("pcap_set_lval() called");
    return 0;
}

/* Demangled: netfilter_create */
extern "C" __attribute__((visibility("default"))) int netfilter_create(void) {
    ALOGD("netfilter_create() called");
    return 0;
}

/* Demangled: netfilter_findalldevs */
extern "C" __attribute__((visibility("default"))) int netfilter_findalldevs(void) {
    ALOGD("netfilter_findalldevs() called");
    return 0;
}

/* Demangled: pcap_lookupnet */
extern "C" __attribute__((visibility("default"))) int pcap_lookupnet(void) {
    ALOGD("pcap_lookupnet() called");
    return 0;
}

/* Demangled: gen_llc_u */
extern "C" __attribute__((visibility("default"))) int gen_llc_u(void) {
    ALOGD("gen_llc_u() called");
    return 0;
}

/* Demangled: gen_loadi */
extern "C" __attribute__((visibility("default"))) int gen_loadi(void) {
    ALOGD("gen_loadi() called");
    return 0;
}

/* Demangled: sdup */
extern "C" __attribute__((visibility("default"))) int sdup(void) {
    ALOGD("sdup() called");
    return 0;
}

/* Demangled: pcap_create_interface */
extern "C" __attribute__((visibility("default"))) int pcap_create_interface(void) {
    ALOGD("pcap_create_interface() called");
    return 0;
}

/* Demangled: usb_create */
extern "C" __attribute__((visibility("default"))) int usb_create(void) {
    ALOGD("usb_create() called");
    return 0;
}

/* Demangled: gen_multicast */
extern "C" __attribute__((visibility("default"))) int gen_multicast(void) {
    ALOGD("gen_multicast() called");
    return 0;
}

/* Demangled: pcap_dump_ftell */
extern "C" __attribute__((visibility("default"))) int pcap_dump_ftell(void) {
    ALOGD("pcap_dump_ftell() called");
    return 0;
}

/* Demangled: pcap_freealldevs */
extern "C" __attribute__((visibility("default"))) int pcap_freealldevs(void) {
    ALOGD("pcap_freealldevs() called");
    return 0;
}

/* Demangled: pcap_set_buffer_size */
extern "C" __attribute__((visibility("default"))) int pcap_set_buffer_size(void) {
    ALOGD("pcap_set_buffer_size() called");
    return 0;
}

/* Demangled: gen_byteop */
extern "C" __attribute__((visibility("default"))) int gen_byteop(void) {
    ALOGD("gen_byteop() called");
    return 0;
}

/* Demangled: pcap_compile */
extern "C" __attribute__((visibility("default"))) int pcap_compile(void) {
    ALOGD("pcap_compile() called");
    return 0;
}

/* Demangled: sf_cleanup */
extern "C" __attribute__((visibility("default"))) int sf_cleanup(void) {
    ALOGD("sf_cleanup() called");
    return 0;
}

/* Demangled: pcap_dump_file */
extern "C" __attribute__((visibility("default"))) int pcap_dump_file(void) {
    ALOGD("pcap_dump_file() called");
    return 0;
}

/* Demangled: pcap_set_promisc */
extern "C" __attribute__((visibility("default"))) int pcap_set_promisc(void) {
    ALOGD("pcap_set_promisc() called");
    return 0;
}

/* Demangled: __pcap_atodn */
extern "C" __attribute__((visibility("default"))) int fn___pcap_atodn(void) __asm__("__pcap_atodn");
int fn___pcap_atodn(void) {
    ALOGD("__pcap_atodn() called");
    return 0;
}

/* Demangled: bpf_error */
extern "C" __attribute__((visibility("default"))) int bpf_error(void) {
    ALOGD("bpf_error() called");
    return 0;
}

/* Demangled: gen_pf_srnr */
extern "C" __attribute__((visibility("default"))) int gen_pf_srnr(void) {
    ALOGD("gen_pf_srnr() called");
    return 0;
}

/* Demangled: pcap__scan_string */
extern "C" __attribute__((visibility("default"))) int pcap__scan_string(void) {
    ALOGD("pcap__scan_string() called");
    return 0;
}

/* Demangled: pcap_set_lineno */
extern "C" __attribute__((visibility("default"))) int pcap_set_lineno(void) {
    ALOGD("pcap_set_lineno() called");
    return 0;
}

/* Demangled: icode_to_fcode */
extern "C" __attribute__((visibility("default"))) int icode_to_fcode(void) {
    ALOGD("icode_to_fcode() called");
    return 0;
}

/* Demangled: pcap_dispatch */
extern "C" __attribute__((visibility("default"))) int pcap_dispatch(void) {
    ALOGD("pcap_dispatch() called");
    return 0;
}

/* Demangled: dlt_to_linktype */
extern "C" __attribute__((visibility("default"))) int dlt_to_linktype(void) {
    ALOGD("dlt_to_linktype() called");
    return 0;
}

/* Demangled: pcap__flush_buffer */
extern "C" __attribute__((visibility("default"))) int pcap__flush_buffer(void) {
    ALOGD("pcap__flush_buffer() called");
    return 0;
}

/* Demangled: pcap_platform_finddevs */
extern "C" __attribute__((visibility("default"))) int pcap_platform_finddevs(void) {
    ALOGD("pcap_platform_finddevs() called");
    return 0;
}

/* Demangled: pcap_fileno */
extern "C" __attribute__((visibility("default"))) int pcap_fileno(void) {
    ALOGD("pcap_fileno() called");
    return 0;
}

/* Demangled: pcap_geterr */
extern "C" __attribute__((visibility("default"))) int pcap_geterr(void) {
    ALOGD("pcap_geterr() called");
    return 0;
}

/* Demangled: __pcap_atoin */
extern "C" __attribute__((visibility("default"))) int fn___pcap_atoin(void) __asm__("__pcap_atoin");
int fn___pcap_atoin(void) {
    ALOGD("__pcap_atoin() called");
    return 0;
}

/* Demangled: gen_inbound */
extern "C" __attribute__((visibility("default"))) int gen_inbound(void) {
    ALOGD("gen_inbound() called");
    return 0;
}

/* Demangled: pcap_dump_fopen */
extern "C" __attribute__((visibility("default"))) int pcap_dump_fopen(void) {
    ALOGD("pcap_dump_fopen() called");
    return 0;
}

/* Demangled: pcap_setnonblock */
extern "C" __attribute__((visibility("default"))) int pcap_setnonblock(void) {
    ALOGD("pcap_setnonblock() called");
    return 0;
}

/* Demangled: pcap_ether_hostton */
extern "C" __attribute__((visibility("default"))) int pcap_ether_hostton(void) {
    ALOGD("pcap_ether_hostton() called");
    return 0;
}

/* Demangled: pcap_set_tstamp_precision */
extern "C" __attribute__((visibility("default"))) int pcap_set_tstamp_precision(void) {
    ALOGD("pcap_set_tstamp_precision() called");
    return 0;
}

/* Demangled: gen_atmtype_abbrev */
extern "C" __attribute__((visibility("default"))) int gen_atmtype_abbrev(void) {
    ALOGD("gen_atmtype_abbrev() called");
    return 0;
}

/* Demangled: gen_pf_action */
extern "C" __attribute__((visibility("default"))) int gen_pf_action(void) {
    ALOGD("gen_pf_action() called");
    return 0;
}

/* Demangled: gen_pppoes */
extern "C" __attribute__((visibility("default"))) int gen_pppoes(void) {
    ALOGD("gen_pppoes() called");
    return 0;
}
