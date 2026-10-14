/*
 * Reverse-Engineered ABI Specification for: libcares_naptr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcares_naptr.so
 */

#ifndef BEGONIA_RE_LIBCARES_NAPTR_H
#define BEGONIA_RE_LIBCARES_NAPTR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ares_parse_ns_reply */
/* Demangled: ares_parse_ns_reply */
int ares_parse_ns_reply(void);

/* Symbol: ares__send_query */
/* Demangled: ares__send_query */
int ares__send_query(void);

/* Symbol: ares__close_sockets */
/* Demangled: ares__close_sockets */
int ares__close_sockets(void);

/* Symbol: ares_gethostbyname_file */
/* Demangled: ares_gethostbyname_file */
int ares_gethostbyname_file(void);

/* Symbol: ares_library_initialized */
/* Demangled: ares_library_initialized */
int ares_library_initialized(void);

/* Symbol: ares_cancel */
/* Demangled: ares_cancel */
int ares_cancel(void);

/* Symbol: ares__destroy_servers_state */
/* Demangled: ares__destroy_servers_state */
int ares__destroy_servers_state(void);

/* Symbol: ares_library_cleanup */
/* Demangled: ares_library_cleanup */
int ares_library_cleanup(void);

/* Symbol: callback_naptr */
/* Demangled: callback_naptr */
int callback_naptr(void);

/* Symbol: ares_inet_net_pton */
/* Demangled: ares_inet_net_pton */
int ares_inet_net_pton(void);

/* Symbol: ares__tvnow */
/* Demangled: ares__tvnow */
int ares__tvnow(void);

/* Symbol: ares_init */
/* Demangled: ares_init */
int ares_init(void);

/* Symbol: ares__timeoffset */
/* Demangled: ares__timeoffset */
int ares__timeoffset(void);

/* Symbol: ares__get_hostent */
/* Demangled: ares__get_hostent */
int ares__get_hostent(void);

/* Symbol: ares__read_line */
/* Demangled: ares__read_line */
int ares__read_line(void);

/* Symbol: ares__expand_name_for_response */
/* Demangled: ares__expand_name_for_response */
int ares__expand_name_for_response(void);

/* Symbol: ares_getsock */
/* Demangled: ares_getsock */
int ares_getsock(void);

/* Symbol: ares_set_servers_csv */
/* Demangled: ares_set_servers_csv */
int ares_set_servers_csv(void);

/* Symbol: ares_version */
/* Demangled: ares_version */
int ares_version(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: aresx_uztosi */
/* Demangled: aresx_uztosi */
int aresx_uztosi(void);

/* Symbol: ares_get_datatype */
/* Demangled: ares_get_datatype */
int ares_get_datatype(void);

/* Symbol: ares_fds */
/* Demangled: ares_fds */
int ares_fds(void);

/* Symbol: ares_save_options */
/* Demangled: ares_save_options */
int ares_save_options(void);

/* Symbol: ares__swap_lists */
/* Demangled: ares__swap_lists */
int ares__swap_lists(void);

/* Symbol: ares__timedout */
/* Demangled: ares__timedout */
int ares__timedout(void);

/* Symbol: destroy_addr_list */
/* Demangled: destroy_addr_list */
int destroy_addr_list(void);

/* Symbol: display_rr_naptr */
/* Demangled: display_rr_naptr */
int display_rr_naptr(void);

/* Symbol: ares_send */
/* Demangled: ares_send */
int ares_send(void);

/* Symbol: ares_free_data */
/* Demangled: ares_free_data */
int ares_free_data(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: ares__init_list_node */
/* Demangled: ares__init_list_node */
int ares__init_list_node(void);

/* Symbol: ares_parse_txt_reply */
/* Demangled: ares_parse_txt_reply */
int ares_parse_txt_reply(void);

/* Symbol: display_question */
/* Demangled: display_question */
int display_question(void);

/* Symbol: ares_parse_ptr_reply */
/* Demangled: ares_parse_ptr_reply */
int ares_parse_ptr_reply(void);

/* Symbol: ares__rc4 */
/* Demangled: ares__rc4 */
int ares__rc4(void);

/* Symbol: ares__free_query */
/* Demangled: ares__free_query */
int ares__free_query(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: ares_query */
/* Demangled: ares_query */
int ares_query(void);

/* Symbol: ares_search */
/* Demangled: ares_search */
int ares_search(void);

/* Symbol: ares__insert_in_list */
/* Demangled: ares__insert_in_list */
int ares__insert_in_list(void);

/* Symbol: ares__timeadd */
/* Demangled: ares__timeadd */
int ares__timeadd(void);

/* Symbol: aresx_sztoui */
/* Demangled: aresx_sztoui */
int aresx_sztoui(void);

/* Symbol: ares_strerror */
/* Demangled: ares_strerror */
int ares_strerror(void);

/* Symbol: ares_destroy */
/* Demangled: ares_destroy */
int ares_destroy(void);

/* Symbol: ares_gethostbyname */
/* Demangled: ares_gethostbyname */
int ares_gethostbyname(void);

/* Symbol: ares_parse_a_reply */
/* Demangled: ares_parse_a_reply */
int ares_parse_a_reply(void);

/* Symbol: ares_parse_srv_reply */
/* Demangled: ares_parse_srv_reply */
int ares_parse_srv_reply(void);

/* Symbol: aes_getrecords_free */
/* Demangled: aes_getrecords_free */
int aes_getrecords_free(void);

/* Symbol: append_result_list */
/* Demangled: append_result_list */
int append_result_list(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: ares_destroy_options */
/* Demangled: ares_destroy_options */
int ares_destroy_options(void);

/* Symbol: ares__remove_from_list */
/* Demangled: ares__remove_from_list */
int ares__remove_from_list(void);

/* Symbol: display_rr */
/* Demangled: display_rr */
int display_rr(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: aresx_sztosi */
/* Demangled: aresx_sztosi */
int aresx_sztosi(void);

/* Symbol: aes_getrecords */
/* Demangled: aes_getrecords */
int aes_getrecords(void);

/* Symbol: ares_expand_string */
/* Demangled: ares_expand_string */
int ares_expand_string(void);

/* Symbol: ares__init_list_head */
/* Demangled: ares__init_list_head */
int ares__init_list_head(void);

/* Symbol: ares_set_local_ip4 */
/* Demangled: ares_set_local_ip4 */
int ares_set_local_ip4(void);

/* Symbol: ares_set_servers */
/* Demangled: ares_set_servers */
int ares_set_servers(void);

/* Symbol: aresx_sltosi */
/* Demangled: aresx_sltosi */
int aresx_sltosi(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: ares_free_hostent */
/* Demangled: ares_free_hostent */
int ares_free_hostent(void);

/* Symbol: ares_bitncmp */
/* Demangled: ares_bitncmp */
int ares_bitncmp(void);

/* Symbol: ares_set_local_ip6 */
/* Demangled: ares_set_local_ip6 */
int ares_set_local_ip6(void);

/* Symbol: ares_process_fd */
/* Demangled: ares_process_fd */
int ares_process_fd(void);

/* Symbol: ares_init_options */
/* Demangled: ares_init_options */
int ares_init_options(void);

/* Symbol: ares_library_init */
/* Demangled: ares_library_init */
int ares_library_init(void);

/* Symbol: ares_parse_aaaa_reply */
/* Demangled: ares_parse_aaaa_reply */
int ares_parse_aaaa_reply(void);

/* Symbol: ares_dup */
/* Demangled: ares_dup */
int ares_dup(void);

/* Symbol: ares__insert_in_list_after */
/* Demangled: ares__insert_in_list_after */
int ares__insert_in_list_after(void);

/* Symbol: ares_timeout */
/* Demangled: ares_timeout */
int ares_timeout(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: ares_malloc_data */
/* Demangled: ares_malloc_data */
int ares_malloc_data(void);

/* Symbol: ares__init_servers_state */
/* Demangled: ares__init_servers_state */
int ares__init_servers_state(void);

/* Symbol: ares_set_socket_callback */
/* Demangled: ares_set_socket_callback */
int ares_set_socket_callback(void);

/* Symbol: ares_parse_mx_reply */
/* Demangled: ares_parse_mx_reply */
int ares_parse_mx_reply(void);

/* Symbol: ares_free_string */
/* Demangled: ares_free_string */
int ares_free_string(void);

/* Symbol: ares_mkquery */
/* Demangled: ares_mkquery */
int ares_mkquery(void);

/* Symbol: append_addr_list */
/* Demangled: append_addr_list */
int append_addr_list(void);

/* Symbol: ares_in6addr_any */
/* Demangled: ares_in6addr_any */
extern void* ares_in6addr_any;

/* Symbol: result_list_isempty */
/* Demangled: result_list_isempty */
int result_list_isempty(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: ares_expand_name */
/* Demangled: ares_expand_name */
int ares_expand_name(void);

/* Symbol: ares__is_list_empty */
/* Demangled: ares__is_list_empty */
int ares__is_list_empty(void);

/* Symbol: ares_gethostbyaddr */
/* Demangled: ares_gethostbyaddr */
int ares_gethostbyaddr(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: ares__generate_new_id */
/* Demangled: ares__generate_new_id */
int ares__generate_new_id(void);

/* Symbol: ares_get_servers */
/* Demangled: ares_get_servers */
int ares_get_servers(void);

/* Symbol: ares_set_local_dev */
/* Demangled: ares_set_local_dev */
int ares_set_local_dev(void);

/* Symbol: ares_process */
/* Demangled: ares_process */
int ares_process(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCARES_NAPTR_H */
