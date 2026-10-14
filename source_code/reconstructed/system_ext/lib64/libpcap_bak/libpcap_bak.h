/*
 * Reverse-Engineered ABI Specification for: libpcap_bak.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libpcap_bak.so
 */

#ifndef BEGONIA_RE_LIBPCAP_BAK_H
#define BEGONIA_RE_LIBPCAP_BAK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: add_or_find_if */
/* Demangled: add_or_find_if */
int add_or_find_if(void);

/* Symbol: gen_portop6 */
/* Demangled: gen_portop6 */
int gen_portop6(void);

/* Symbol: pcap_strcasecmp */
/* Demangled: pcap_strcasecmp */
int pcap_strcasecmp(void);

/* Symbol: pcap_datalink_name_to_val */
/* Demangled: pcap_datalink_name_to_val */
int pcap_datalink_name_to_val(void);

/* Symbol: pcap_open_offline_common */
/* Demangled: pcap_open_offline_common */
int pcap_open_offline_common(void);

/* Symbol: pcap_set_immediate_mode */
/* Demangled: pcap_set_immediate_mode */
int pcap_set_immediate_mode(void);

/* Symbol: pcap_lex_init */
/* Demangled: pcap_lex_init */
int pcap_lex_init(void);

/* Symbol: pcap_dump */
/* Demangled: pcap_dump */
int pcap_dump(void);

/* Symbol: pcap_realloc */
/* Demangled: pcap_realloc */
int pcap_realloc(void);

/* Symbol: pcap_next_ex */
/* Demangled: pcap_next_ex */
int pcap_next_ex(void);

/* Symbol: pcap_lex_init_extra */
/* Demangled: pcap_lex_init_extra */
int pcap_lex_init_extra(void);

/* Symbol: pcap_create_common */
/* Demangled: pcap_create_common */
int pcap_create_common(void);

/* Symbol: pcap_can_set_rfmon */
/* Demangled: pcap_can_set_rfmon */
int pcap_can_set_rfmon(void);

/* Symbol: pcap_datalink_ext */
/* Demangled: pcap_datalink_ext */
int pcap_datalink_ext(void);

/* Symbol: pcap_lex_destroy */
/* Demangled: pcap_lex_destroy */
int pcap_lex_destroy(void);

/* Symbol: pcap_open_offline */
/* Demangled: pcap_open_offline */
int pcap_open_offline(void);

/* Symbol: gen_and */
/* Demangled: gen_and */
int gen_and(void);

/* Symbol: gen_ncode */
/* Demangled: gen_ncode */
int gen_ncode(void);

/* Symbol: gen_or */
/* Demangled: gen_or */
int gen_or(void);

/* Symbol: pcap_ether_aton */
/* Demangled: pcap_ether_aton */
int pcap_ether_aton(void);

/* Symbol: pcap__scan_buffer */
/* Demangled: pcap__scan_buffer */
int pcap__scan_buffer(void);

/* Symbol: pcap_get_selectable_fd */
/* Demangled: pcap_get_selectable_fd */
int pcap_get_selectable_fd(void);

/* Symbol: pcap_lib_version */
/* Demangled: pcap_lib_version */
int pcap_lib_version(void);

/* Symbol: pcap_minor_version */
/* Demangled: pcap_minor_version */
int pcap_minor_version(void);

/* Symbol: pcap_sendpacket */
/* Demangled: pcap_sendpacket */
int pcap_sendpacket(void);

/* Symbol: pcap_statustostr */
/* Demangled: pcap_statustostr */
int pcap_statustostr(void);

/* Symbol: bpf_syntax_error */
/* Demangled: bpf_syntax_error */
int bpf_syntax_error(void);

/* Symbol: pcap_activate */
/* Demangled: pcap_activate */
int pcap_activate(void);

/* Symbol: pcap_set_datalink */
/* Demangled: pcap_set_datalink */
int pcap_set_datalink(void);

/* Symbol: gen_less */
/* Demangled: gen_less */
int gen_less(void);

/* Symbol: pcap_push_buffer_state */
/* Demangled: pcap_push_buffer_state */
int pcap_push_buffer_state(void);

/* Symbol: pcap_free_tstamp_types */
/* Demangled: pcap_free_tstamp_types */
int pcap_free_tstamp_types(void);

/* Symbol: pcap_list_datalinks */
/* Demangled: pcap_list_datalinks */
int pcap_list_datalinks(void);

/* Symbol: pcap_tstamp_type_name_to_val */
/* Demangled: pcap_tstamp_type_name_to_val */
int pcap_tstamp_type_name_to_val(void);

/* Symbol: add_addr_to_dev */
/* Demangled: add_addr_to_dev */
int add_addr_to_dev(void);

/* Symbol: pcap_next */
/* Demangled: pcap_next */
int pcap_next(void);

/* Symbol: pcap_open_dead */
/* Demangled: pcap_open_dead */
int pcap_open_dead(void);

/* Symbol: gen_not */
/* Demangled: gen_not */
int gen_not(void);

/* Symbol: pcap_dump_close */
/* Demangled: pcap_dump_close */
int pcap_dump_close(void);

/* Symbol: pcap_datalink */
/* Demangled: pcap_datalink */
int pcap_datalink(void);

/* Symbol: gen_mpls */
/* Demangled: gen_mpls */
int gen_mpls(void);

/* Symbol: pcap_is_swapped */
/* Demangled: pcap_is_swapped */
int pcap_is_swapped(void);

/* Symbol: pcap_lookupdev */
/* Demangled: pcap_lookupdev */
int pcap_lookupdev(void);

/* Symbol: gen_arth */
/* Demangled: gen_arth */
int gen_arth(void);

/* Symbol: gen_vlan */
/* Demangled: gen_vlan */
int gen_vlan(void);

/* Symbol: bpf_filter */
/* Demangled: bpf_filter */
int bpf_filter(void);

/* Symbol: android_nflog_send_config_cmd */
/* Demangled: android_nflog_send_config_cmd */
int android_nflog_send_config_cmd(void);

/* Symbol: pcap_file */
/* Demangled: pcap_file */
int pcap_file(void);

/* Symbol: pcap_free_datalinks */
/* Demangled: pcap_free_datalinks */
int pcap_free_datalinks(void);

/* Symbol: pcap_offline_read */
/* Demangled: pcap_offline_read */
int pcap_offline_read(void);

/* Symbol: linktype_to_dlt */
/* Demangled: linktype_to_dlt */
int linktype_to_dlt(void);

/* Symbol: pcap__switch_to_buffer */
/* Demangled: pcap__switch_to_buffer */
int pcap__switch_to_buffer(void);

/* Symbol: pcap_get_lineno */
/* Demangled: pcap_get_lineno */
int pcap_get_lineno(void);

/* Symbol: pcap_cleanup_live_common */
/* Demangled: pcap_cleanup_live_common */
int pcap_cleanup_live_common(void);

/* Symbol: pcap_set_tstamp_type */
/* Demangled: pcap_set_tstamp_type */
int pcap_set_tstamp_type(void);

/* Symbol: __pcap_nametodnaddr */
/* Demangled: __pcap_nametodnaddr */
int fn___pcap_nametodnaddr(void) __asm__("__pcap_nametodnaddr");

/* Symbol: pcap_parse */
/* Demangled: pcap_parse */
int pcap_parse(void);

/* Symbol: pcap_get_out */
/* Demangled: pcap_get_out */
int pcap_get_out(void);

/* Symbol: pcap_create */
/* Demangled: pcap_create */
int pcap_create(void);

/* Symbol: pcap_loop */
/* Demangled: pcap_loop */
int pcap_loop(void);

/* Symbol: pcap_stats */
/* Demangled: pcap_stats */
int pcap_stats(void);

/* Symbol: pcap_get_lval */
/* Demangled: pcap_get_lval */
int pcap_get_lval(void);

/* Symbol: pcap_datalink_val_to_description */
/* Demangled: pcap_datalink_val_to_description */
int pcap_datalink_val_to_description(void);

/* Symbol: pcap_inject */
/* Demangled: pcap_inject */
int pcap_inject(void);

/* Symbol: pcap_set_rfmon */
/* Demangled: pcap_set_rfmon */
int pcap_set_rfmon(void);

/* Symbol: pcap_tstamp_type_val_to_description */
/* Demangled: pcap_tstamp_type_val_to_description */
int pcap_tstamp_type_val_to_description(void);

/* Symbol: gen_portrangeop */
/* Demangled: gen_portrangeop */
int gen_portrangeop(void);

/* Symbol: pcap_get_leng */
/* Demangled: pcap_get_leng */
int pcap_get_leng(void);

/* Symbol: pcap_remove_from_pcaps_to_close */
/* Demangled: pcap_remove_from_pcaps_to_close */
int pcap_remove_from_pcaps_to_close(void);

/* Symbol: pcap_list_tstamp_types */
/* Demangled: pcap_list_tstamp_types */
int pcap_list_tstamp_types(void);

/* Symbol: pcap_open_offline_with_tstamp_precision */
/* Demangled: pcap_open_offline_with_tstamp_precision */
int pcap_open_offline_with_tstamp_precision(void);

/* Symbol: pcap_version */
/* Demangled: pcap_version */
extern void* pcap_version;

/* Symbol: gen_p80211_fcdir */
/* Demangled: gen_p80211_fcdir */
int gen_p80211_fcdir(void);

/* Symbol: gen_portrangeop6 */
/* Demangled: gen_portrangeop6 */
int gen_portrangeop6(void);

/* Symbol: pcap__delete_buffer */
/* Demangled: pcap__delete_buffer */
int pcap__delete_buffer(void);

/* Symbol: pcap_restart */
/* Demangled: pcap_restart */
int pcap_restart(void);

/* Symbol: pcap_snapshot */
/* Demangled: pcap_snapshot */
int pcap_snapshot(void);

/* Symbol: gen_llc_s_subtype */
/* Demangled: gen_llc_s_subtype */
int gen_llc_s_subtype(void);

/* Symbol: gen_portop */
/* Demangled: gen_portop */
int gen_portop(void);

/* Symbol: pcap_get_in */
/* Demangled: pcap_get_in */
int pcap_get_in(void);

/* Symbol: pcap_set_in */
/* Demangled: pcap_set_in */
int pcap_set_in(void);

/* Symbol: pcap_add_to_pcaps_to_close */
/* Demangled: pcap_add_to_pcaps_to_close */
int pcap_add_to_pcaps_to_close(void);

/* Symbol: pcap_getnonblock */
/* Demangled: pcap_getnonblock */
int pcap_getnonblock(void);

/* Symbol: pcap_check_header */
/* Demangled: pcap_check_header */
int pcap_check_header(void);

/* Symbol: pcap_fopen_offline */
/* Demangled: pcap_fopen_offline */
int pcap_fopen_offline(void);

/* Symbol: swap_pseudo_headers */
/* Demangled: swap_pseudo_headers */
int swap_pseudo_headers(void);

/* Symbol: pcap_dump_open */
/* Demangled: pcap_dump_open */
int pcap_dump_open(void);

/* Symbol: bpf_image */
/* Demangled: bpf_image */
int bpf_image(void);

/* Symbol: pcap_set_column */
/* Demangled: pcap_set_column */
int pcap_set_column(void);

/* Symbol: pcap_setfilter */
/* Demangled: pcap_setfilter */
int pcap_setfilter(void);

/* Symbol: gen_atmmulti_abbrev */
/* Demangled: gen_atmmulti_abbrev */
int gen_atmmulti_abbrev(void);

/* Symbol: gen_geneve */
/* Demangled: gen_geneve */
int gen_geneve(void);

/* Symbol: gen_greater */
/* Demangled: gen_greater */
int gen_greater(void);

/* Symbol: gen_mtp3field_code */
/* Demangled: gen_mtp3field_code */
int gen_mtp3field_code(void);

/* Symbol: pcap_fopen_offline_with_tstamp_precision */
/* Demangled: pcap_fopen_offline_with_tstamp_precision */
int pcap_fopen_offline_with_tstamp_precision(void);

/* Symbol: pcap__scan_bytes */
/* Demangled: pcap__scan_bytes */
int pcap__scan_bytes(void);

/* Symbol: pcap_free */
/* Demangled: pcap_free */
int pcap_free(void);

/* Symbol: pcap_setnonblock_fd */
/* Demangled: pcap_setnonblock_fd */
int pcap_setnonblock_fd(void);

/* Symbol: pcap_open_dead_with_tstamp_precision */
/* Demangled: pcap_open_dead_with_tstamp_precision */
int pcap_open_dead_with_tstamp_precision(void);

/* Symbol: pcap_setdirection */
/* Demangled: pcap_setdirection */
int pcap_setdirection(void);

/* Symbol: gen_pf_rnr */
/* Demangled: gen_pf_rnr */
int gen_pf_rnr(void);

/* Symbol: gen_proto_abbrev */
/* Demangled: gen_proto_abbrev */
int gen_proto_abbrev(void);

/* Symbol: pcap_compile_nopcap */
/* Demangled: pcap_compile_nopcap */
int pcap_compile_nopcap(void);

/* Symbol: pcap_nametoproto */
/* Demangled: pcap_nametoproto */
int pcap_nametoproto(void);

/* Symbol: bpf_optimize */
/* Demangled: bpf_optimize */
int bpf_optimize(void);

/* Symbol: eproto_db */
/* Demangled: eproto_db */
extern void* eproto_db;

/* Symbol: pcap_set_timeout */
/* Demangled: pcap_set_timeout */
int pcap_set_timeout(void);

/* Symbol: finish_parse */
/* Demangled: finish_parse */
int finish_parse(void);

/* Symbol: gen_llc_u_subtype */
/* Demangled: gen_llc_u_subtype */
int gen_llc_u_subtype(void);

/* Symbol: gen_load */
/* Demangled: gen_load */
int gen_load(void);

/* Symbol: gen_mcode6 */
/* Demangled: gen_mcode6 */
int gen_mcode6(void);

/* Symbol: bpf_validate */
/* Demangled: bpf_validate */
int bpf_validate(void);

/* Symbol: pcap_set_debug */
/* Demangled: pcap_set_debug */
int pcap_set_debug(void);

/* Symbol: pcap_nametoeproto */
/* Demangled: pcap_nametoeproto */
int pcap_nametoeproto(void);

/* Symbol: pcap_nametonetaddr */
/* Demangled: pcap_nametonetaddr */
int pcap_nametonetaddr(void);

/* Symbol: pcap_ng_check_header */
/* Demangled: pcap_ng_check_header */
int pcap_ng_check_header(void);

/* Symbol: bpf_filter_with_aux_data */
/* Demangled: bpf_filter_with_aux_data */
int bpf_filter_with_aux_data(void);

/* Symbol: if_flags_to_pcap_flags */
/* Demangled: if_flags_to_pcap_flags */
int if_flags_to_pcap_flags(void);

/* Symbol: pcap_findalldevs_interfaces */
/* Demangled: pcap_findalldevs_interfaces */
int pcap_findalldevs_interfaces(void);

/* Symbol: pcap_getnonblock_fd */
/* Demangled: pcap_getnonblock_fd */
int pcap_getnonblock_fd(void);

/* Symbol: pcap_set_extra */
/* Demangled: pcap_set_extra */
int pcap_set_extra(void);

/* Symbol: pcap_next_etherent */
/* Demangled: pcap_next_etherent */
int pcap_next_etherent(void);

/* Symbol: pcap_lex */
/* Demangled: pcap_lex */
int pcap_lex(void);

/* Symbol: usb_findalldevs */
/* Demangled: usb_findalldevs */
int usb_findalldevs(void);

/* Symbol: pcap_datalink_val_to_name */
/* Demangled: pcap_datalink_val_to_name */
int pcap_datalink_val_to_name(void);

/* Symbol: pcap_oneshot */
/* Demangled: pcap_oneshot */
int pcap_oneshot(void);

/* Symbol: gen_acode */
/* Demangled: gen_acode */
int gen_acode(void);

/* Symbol: gen_atmfield_code */
/* Demangled: gen_atmfield_code */
int gen_atmfield_code(void);

/* Symbol: gen_ecode */
/* Demangled: gen_ecode */
int gen_ecode(void);

/* Symbol: gen_mcode */
/* Demangled: gen_mcode */
int gen_mcode(void);

/* Symbol: gen_scode */
/* Demangled: gen_scode */
int gen_scode(void);

/* Symbol: pcap_get_tstamp_precision */
/* Demangled: pcap_get_tstamp_precision */
int pcap_get_tstamp_precision(void);

/* Symbol: gen_llc_i */
/* Demangled: gen_llc_i */
int gen_llc_i(void);

/* Symbol: pcap_set_out */
/* Demangled: pcap_set_out */
int pcap_set_out(void);

/* Symbol: install_bpf_program */
/* Demangled: install_bpf_program */
int install_bpf_program(void);

/* Symbol: pcap_check_activated */
/* Demangled: pcap_check_activated */
int pcap_check_activated(void);

/* Symbol: pcap_set_snaplen */
/* Demangled: pcap_set_snaplen */
int pcap_set_snaplen(void);

/* Symbol: gen_mtp2type_abbrev */
/* Demangled: gen_mtp2type_abbrev */
int gen_mtp2type_abbrev(void);

/* Symbol: gen_relation */
/* Demangled: gen_relation */
int gen_relation(void);

/* Symbol: sappend */
/* Demangled: sappend */
int sappend(void);

/* Symbol: pcap_get_debug */
/* Demangled: pcap_get_debug */
int pcap_get_debug(void);

/* Symbol: pcap_do_addexit */
/* Demangled: pcap_do_addexit */
int pcap_do_addexit(void);

/* Symbol: gen_broadcast */
/* Demangled: gen_broadcast */
int gen_broadcast(void);

/* Symbol: gen_pf_reason */
/* Demangled: gen_pf_reason */
int gen_pf_reason(void);

/* Symbol: pcap_nametollc */
/* Demangled: pcap_nametollc */
int pcap_nametollc(void);

/* Symbol: pcap__create_buffer */
/* Demangled: pcap__create_buffer */
int pcap__create_buffer(void);

/* Symbol: pcap_get_text */
/* Demangled: pcap_get_text */
int pcap_get_text(void);

/* Symbol: pcap_pop_buffer_state */
/* Demangled: pcap_pop_buffer_state */
int pcap_pop_buffer_state(void);

/* Symbol: pcap_strerror */
/* Demangled: pcap_strerror */
int pcap_strerror(void);

/* Symbol: pcap_freecode */
/* Demangled: pcap_freecode */
int pcap_freecode(void);

/* Symbol: pcap_open_live */
/* Demangled: pcap_open_live */
int pcap_open_live(void);

/* Symbol: gen_llc */
/* Demangled: gen_llc */
int gen_llc(void);

/* Symbol: pcap_get_extra */
/* Demangled: pcap_get_extra */
int pcap_get_extra(void);

/* Symbol: add_addr_to_iflist */
/* Demangled: add_addr_to_iflist */
int add_addr_to_iflist(void);

/* Symbol: pcap_tstamp_type_val_to_name */
/* Demangled: pcap_tstamp_type_val_to_name */
int pcap_tstamp_type_val_to_name(void);

/* Symbol: gen_pppoed */
/* Demangled: gen_pppoed */
int gen_pppoed(void);

/* Symbol: pcap_nametoportrange */
/* Demangled: pcap_nametoportrange */
int pcap_nametoportrange(void);

/* Symbol: pcap_dump_open_append */
/* Demangled: pcap_dump_open_append */
int pcap_dump_open_append(void);

/* Symbol: pcap_add_if */
/* Demangled: pcap_add_if */
int pcap_add_if(void);

/* Symbol: gen_loadlen */
/* Demangled: gen_loadlen */
int gen_loadlen(void);

/* Symbol: pcap_nametoaddrinfo */
/* Demangled: pcap_nametoaddrinfo */
int pcap_nametoaddrinfo(void);

/* Symbol: pcap_nametoport */
/* Demangled: pcap_nametoport */
int pcap_nametoport(void);

/* Symbol: pcap_dump_flush */
/* Demangled: pcap_dump_flush */
int pcap_dump_flush(void);

/* Symbol: pcap_close */
/* Demangled: pcap_close */
int pcap_close(void);

/* Symbol: gen_pf_ifname */
/* Demangled: gen_pf_ifname */
int gen_pf_ifname(void);

/* Symbol: gen_pf_ruleset */
/* Demangled: gen_pf_ruleset */
int gen_pf_ruleset(void);

/* Symbol: pcap_alloc */
/* Demangled: pcap_alloc */
int pcap_alloc(void);

/* Symbol: pcap_get_column */
/* Demangled: pcap_get_column */
int pcap_get_column(void);

/* Symbol: pcap_perror */
/* Demangled: pcap_perror */
int pcap_perror(void);

/* Symbol: pcap_breakloop */
/* Demangled: pcap_breakloop */
int pcap_breakloop(void);

/* Symbol: gen_llc_s */
/* Demangled: gen_llc_s */
int gen_llc_s(void);

/* Symbol: gen_p80211_type */
/* Demangled: gen_p80211_type */
int gen_p80211_type(void);

/* Symbol: pcap_nametoaddr */
/* Demangled: pcap_nametoaddr */
int pcap_nametoaddr(void);

/* Symbol: pcap_findalldevs */
/* Demangled: pcap_findalldevs */
int pcap_findalldevs(void);

/* Symbol: pcap_major_version */
/* Demangled: pcap_major_version */
int pcap_major_version(void);

/* Symbol: pcap_offline_filter */
/* Demangled: pcap_offline_filter */
int pcap_offline_filter(void);

/* Symbol: gen_neg */
/* Demangled: gen_neg */
int gen_neg(void);

/* Symbol: bpf_dump */
/* Demangled: bpf_dump */
int bpf_dump(void);

/* Symbol: pcap_set_lval */
/* Demangled: pcap_set_lval */
int pcap_set_lval(void);

/* Symbol: netfilter_create */
/* Demangled: netfilter_create */
int netfilter_create(void);

/* Symbol: netfilter_findalldevs */
/* Demangled: netfilter_findalldevs */
int netfilter_findalldevs(void);

/* Symbol: pcap_lookupnet */
/* Demangled: pcap_lookupnet */
int pcap_lookupnet(void);

/* Symbol: gen_llc_u */
/* Demangled: gen_llc_u */
int gen_llc_u(void);

/* Symbol: gen_loadi */
/* Demangled: gen_loadi */
int gen_loadi(void);

/* Symbol: sdup */
/* Demangled: sdup */
int sdup(void);

/* Symbol: pcap_create_interface */
/* Demangled: pcap_create_interface */
int pcap_create_interface(void);

/* Symbol: usb_create */
/* Demangled: usb_create */
int usb_create(void);

/* Symbol: gen_multicast */
/* Demangled: gen_multicast */
int gen_multicast(void);

/* Symbol: pcap_dump_ftell */
/* Demangled: pcap_dump_ftell */
int pcap_dump_ftell(void);

/* Symbol: pcap_freealldevs */
/* Demangled: pcap_freealldevs */
int pcap_freealldevs(void);

/* Symbol: pcap_set_buffer_size */
/* Demangled: pcap_set_buffer_size */
int pcap_set_buffer_size(void);

/* Symbol: gen_byteop */
/* Demangled: gen_byteop */
int gen_byteop(void);

/* Symbol: pcap_compile */
/* Demangled: pcap_compile */
int pcap_compile(void);

/* Symbol: sf_cleanup */
/* Demangled: sf_cleanup */
int sf_cleanup(void);

/* Symbol: pcap_dump_file */
/* Demangled: pcap_dump_file */
int pcap_dump_file(void);

/* Symbol: pcap_set_promisc */
/* Demangled: pcap_set_promisc */
int pcap_set_promisc(void);

/* Symbol: __pcap_atodn */
/* Demangled: __pcap_atodn */
int fn___pcap_atodn(void) __asm__("__pcap_atodn");

/* Symbol: bpf_error */
/* Demangled: bpf_error */
int bpf_error(void);

/* Symbol: gen_pf_srnr */
/* Demangled: gen_pf_srnr */
int gen_pf_srnr(void);

/* Symbol: pcap__scan_string */
/* Demangled: pcap__scan_string */
int pcap__scan_string(void);

/* Symbol: pcap_set_lineno */
/* Demangled: pcap_set_lineno */
int pcap_set_lineno(void);

/* Symbol: icode_to_fcode */
/* Demangled: icode_to_fcode */
int icode_to_fcode(void);

/* Symbol: pcap_dispatch */
/* Demangled: pcap_dispatch */
int pcap_dispatch(void);

/* Symbol: dlt_to_linktype */
/* Demangled: dlt_to_linktype */
int dlt_to_linktype(void);

/* Symbol: pcap__flush_buffer */
/* Demangled: pcap__flush_buffer */
int pcap__flush_buffer(void);

/* Symbol: pcap_platform_finddevs */
/* Demangled: pcap_platform_finddevs */
int pcap_platform_finddevs(void);

/* Symbol: pcap_fileno */
/* Demangled: pcap_fileno */
int pcap_fileno(void);

/* Symbol: pcap_geterr */
/* Demangled: pcap_geterr */
int pcap_geterr(void);

/* Symbol: __pcap_atoin */
/* Demangled: __pcap_atoin */
int fn___pcap_atoin(void) __asm__("__pcap_atoin");

/* Symbol: gen_inbound */
/* Demangled: gen_inbound */
int gen_inbound(void);

/* Symbol: pcap_dump_fopen */
/* Demangled: pcap_dump_fopen */
int pcap_dump_fopen(void);

/* Symbol: pcap_setnonblock */
/* Demangled: pcap_setnonblock */
int pcap_setnonblock(void);

/* Symbol: pcap_ether_hostton */
/* Demangled: pcap_ether_hostton */
int pcap_ether_hostton(void);

/* Symbol: pcap_set_tstamp_precision */
/* Demangled: pcap_set_tstamp_precision */
int pcap_set_tstamp_precision(void);

/* Symbol: gen_atmtype_abbrev */
/* Demangled: gen_atmtype_abbrev */
int gen_atmtype_abbrev(void);

/* Symbol: gen_pf_action */
/* Demangled: gen_pf_action */
int gen_pf_action(void);

/* Symbol: gen_pppoes */
/* Demangled: gen_pppoes */
int gen_pppoes(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPCAP_BAK_H */
