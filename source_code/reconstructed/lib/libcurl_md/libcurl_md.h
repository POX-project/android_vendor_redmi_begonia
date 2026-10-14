/*
 * Reverse-Engineered ABI Specification for: libcurl-md.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcurl-md.so
 */

#ifndef BEGONIA_RE_LIBCURL_MD_H
#define BEGONIA_RE_LIBCURL_MD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Curl_ccalloc */
/* Demangled: Curl_ccalloc */
extern void* Curl_ccalloc;

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: curlx_tvnow */
/* Demangled: curlx_tvnow */
int curlx_tvnow(void);

/* Symbol: Curl_initinfo */
/* Demangled: Curl_initinfo */
int Curl_initinfo(void);

/* Symbol: Curl_pgrsStartNow */
/* Demangled: Curl_pgrsStartNow */
int Curl_pgrsStartNow(void);

/* Symbol: Curl_pgrsSetUploadSize */
/* Demangled: Curl_pgrsSetUploadSize */
int Curl_pgrsSetUploadSize(void);

/* Symbol: Curl_meets_timecondition */
/* Demangled: Curl_meets_timecondition */
int Curl_meets_timecondition(void);

/* Symbol: curl_msnprintf */
/* Demangled: curl_msnprintf */
int curl_msnprintf(void);

/* Symbol: Curl_client_write */
/* Demangled: Curl_client_write */
int Curl_client_write(void);

/* Symbol: Curl_gmtime */
/* Demangled: Curl_gmtime */
int Curl_gmtime(void);

/* Symbol: Curl_pgrsSetDownloadSize */
/* Demangled: Curl_pgrsSetDownloadSize */
int Curl_pgrsSetDownloadSize(void);

/* Symbol: Curl_infof */
/* Demangled: Curl_infof */
int Curl_infof(void);

/* Symbol: Curl_failf */
/* Demangled: Curl_failf */
int Curl_failf(void);

/* Symbol: Curl_fillreadbuffer */
/* Demangled: Curl_fillreadbuffer */
int Curl_fillreadbuffer(void);

/* Symbol: Curl_pgrsSetUploadCounter */
/* Demangled: Curl_pgrsSetUploadCounter */
int Curl_pgrsSetUploadCounter(void);

/* Symbol: Curl_pgrsUpdate */
/* Demangled: Curl_pgrsUpdate */
int Curl_pgrsUpdate(void);

/* Symbol: Curl_speedcheck */
/* Demangled: Curl_speedcheck */
int Curl_speedcheck(void);

/* Symbol: Curl_pgrsTime */
/* Demangled: Curl_pgrsTime */
int Curl_pgrsTime(void);

/* Symbol: curlx_sotouz */
/* Demangled: curlx_sotouz */
int curlx_sotouz(void);

/* Symbol: Curl_pgrsSetDownloadCounter */
/* Demangled: Curl_pgrsSetDownloadCounter */
int Curl_pgrsSetDownloadCounter(void);

/* Symbol: Curl_month */
/* Demangled: Curl_month */
extern void* Curl_month;

/* Symbol: Curl_wkday */
/* Demangled: Curl_wkday */
extern void* Curl_wkday;

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: Curl_cfree */
/* Demangled: Curl_cfree */
extern void* Curl_cfree;

/* Symbol: curl_easy_unescape */
/* Demangled: curl_easy_unescape */
int curl_easy_unescape(void);

/* Symbol: Curl_handler_file */
/* Demangled: Curl_handler_file */
extern void* Curl_handler_file;

/* Symbol: curlx_tvdiff */
/* Demangled: curlx_tvdiff */
int curlx_tvdiff(void);

/* Symbol: curlx_tvdiff_secs */
/* Demangled: curlx_tvdiff_secs */
int curlx_tvdiff_secs(void);

/* Symbol: Curl_tvlong */
/* Demangled: Curl_tvlong */
int Curl_tvlong(void);

/* Symbol: Curl_base64_decode */
/* Demangled: Curl_base64_decode */
int Curl_base64_decode(void);

/* Symbol: curlx_ultouc */
/* Demangled: curlx_ultouc */
int curlx_ultouc(void);

/* Symbol: Curl_cmalloc */
/* Demangled: Curl_cmalloc */
extern void* Curl_cmalloc;

/* Symbol: Curl_base64_encode */
/* Demangled: Curl_base64_encode */
int Curl_base64_encode(void);

/* Symbol: Curl_base64url_encode */
/* Demangled: Curl_base64url_encode */
int Curl_base64url_encode(void);

/* Symbol: Curl_global_host_cache_init */
/* Demangled: Curl_global_host_cache_init */
int Curl_global_host_cache_init(void);

/* Symbol: Curl_hash_init */
/* Demangled: Curl_hash_init */
int Curl_hash_init(void);

/* Symbol: Curl_str_key_compare */
/* Demangled: Curl_str_key_compare */
int Curl_str_key_compare(void);

/* Symbol: Curl_hash_str */
/* Demangled: Curl_hash_str */
int Curl_hash_str(void);

/* Symbol: Curl_freeaddrinfo */
/* Demangled: Curl_freeaddrinfo */
int Curl_freeaddrinfo(void);

/* Symbol: Curl_global_host_cache_dtor */
/* Demangled: Curl_global_host_cache_dtor */
int Curl_global_host_cache_dtor(void);

/* Symbol: Curl_hash_destroy */
/* Demangled: Curl_hash_destroy */
int Curl_hash_destroy(void);

/* Symbol: Curl_num_addresses */
/* Demangled: Curl_num_addresses */
int Curl_num_addresses(void);

/* Symbol: Curl_printable_address */
/* Demangled: Curl_printable_address */
int Curl_printable_address(void);

/* Symbol: Curl_hostcache_prune */
/* Demangled: Curl_hostcache_prune */
int Curl_hostcache_prune(void);

/* Symbol: Curl_share_lock */
/* Demangled: Curl_share_lock */
int Curl_share_lock(void);

/* Symbol: Curl_hash_clean_with_criterium */
/* Demangled: Curl_hash_clean_with_criterium */
int Curl_hash_clean_with_criterium(void);

/* Symbol: Curl_share_unlock */
/* Demangled: Curl_share_unlock */
int Curl_share_unlock(void);

/* Symbol: Curl_fetch_addr */
/* Demangled: Curl_fetch_addr */
int Curl_fetch_addr(void);

/* Symbol: Curl_hash_pick */
/* Demangled: Curl_hash_pick */
int Curl_hash_pick(void);

/* Symbol: Curl_hash_delete */
/* Demangled: Curl_hash_delete */
int Curl_hash_delete(void);

/* Symbol: Curl_cache_addr */
/* Demangled: Curl_cache_addr */
int Curl_cache_addr(void);

/* Symbol: Curl_hash_add */
/* Demangled: Curl_hash_add */
int Curl_hash_add(void);

/* Symbol: curl_maprintf */
/* Demangled: curl_maprintf */
int curl_maprintf(void);

/* Symbol: Curl_resolv */
/* Demangled: Curl_resolv */
int Curl_resolv(void);

/* Symbol: Curl_ipvalid */
/* Demangled: Curl_ipvalid */
int Curl_ipvalid(void);

/* Symbol: Curl_getaddrinfo */
/* Demangled: Curl_getaddrinfo */
int Curl_getaddrinfo(void);

/* Symbol: Curl_resolv_timeout */
/* Demangled: Curl_resolv_timeout */
int Curl_resolv_timeout(void);

/* Symbol: curlx_sltoui */
/* Demangled: curlx_sltoui */
int curlx_sltoui(void);

/* Symbol: curl_jmpenv */
/* Demangled: curl_jmpenv */
extern void* curl_jmpenv;

/* Symbol: Curl_resolv_unlock */
/* Demangled: Curl_resolv_unlock */
int Curl_resolv_unlock(void);

/* Symbol: Curl_mk_dnscache */
/* Demangled: Curl_mk_dnscache */
int Curl_mk_dnscache(void);

/* Symbol: Curl_hostcache_clean */
/* Demangled: Curl_hostcache_clean */
int Curl_hostcache_clean(void);

/* Symbol: Curl_hash_clean */
/* Demangled: Curl_hash_clean */
int Curl_hash_clean(void);

/* Symbol: Curl_loadhostpairs */
/* Demangled: Curl_loadhostpairs */
int Curl_loadhostpairs(void);

/* Symbol: Curl_str2addr */
/* Demangled: Curl_str2addr */
int Curl_str2addr(void);

/* Symbol: Curl_pgrsDone */
/* Demangled: Curl_pgrsDone */
int Curl_pgrsDone(void);

/* Symbol: curl_mfprintf */
/* Demangled: curl_mfprintf */
int curl_mfprintf(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: __aeabi_d2lz */
/* Demangled: __aeabi_d2lz */
int __aeabi_d2lz(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: Curl_pgrsResetTimesSizes */
/* Demangled: Curl_pgrsResetTimesSizes */
int Curl_pgrsResetTimesSizes(void);

/* Symbol: curl_formadd */
/* Demangled: curl_formadd */
int curl_formadd(void);

/* Symbol: curl_strequal */
/* Demangled: curl_strequal */
int curl_strequal(void);

/* Symbol: Curl_memdup */
/* Demangled: Curl_memdup */
int Curl_memdup(void);

/* Symbol: Curl_cstrdup */
/* Demangled: Curl_cstrdup */
extern void* Curl_cstrdup;

/* Symbol: Curl_formclean */
/* Demangled: Curl_formclean */
int Curl_formclean(void);

/* Symbol: curl_formget */
/* Demangled: curl_formget */
int curl_formget(void);

/* Symbol: Curl_getformdata */
/* Demangled: Curl_getformdata */
int Curl_getformdata(void);

/* Symbol: Curl_rand */
/* Demangled: Curl_rand */
int Curl_rand(void);

/* Symbol: Curl_FormInit */
/* Demangled: Curl_FormInit */
int Curl_FormInit(void);

/* Symbol: curl_formfree */
/* Demangled: curl_formfree */
int curl_formfree(void);

/* Symbol: curl_mvsnprintf */
/* Demangled: curl_mvsnprintf */
int curl_mvsnprintf(void);

/* Symbol: Curl_FormReader */
/* Demangled: Curl_FormReader */
int Curl_FormReader(void);

/* Symbol: Curl_formpostheader */
/* Demangled: Curl_formpostheader */
int Curl_formpostheader(void);

/* Symbol: Curl_http_setup_conn */
/* Demangled: Curl_http_setup_conn */
int Curl_http_setup_conn(void);

/* Symbol: Curl_http */
/* Demangled: Curl_http */
int Curl_http(void);

/* Symbol: Curl_checkheaders */
/* Demangled: Curl_checkheaders */
int Curl_checkheaders(void);

/* Symbol: Curl_http_output_auth */
/* Demangled: Curl_http_output_auth */
int Curl_http_output_auth(void);

/* Symbol: Curl_compareheader */
/* Demangled: Curl_compareheader */
int Curl_compareheader(void);

/* Symbol: Curl_raw_equal */
/* Demangled: Curl_raw_equal */
int Curl_raw_equal(void);

/* Symbol: Curl_raw_nequal */
/* Demangled: Curl_raw_nequal */
int Curl_raw_nequal(void);

/* Symbol: Curl_raw_toupper */
/* Demangled: Curl_raw_toupper */
int Curl_raw_toupper(void);

/* Symbol: Curl_add_bufferf */
/* Demangled: Curl_add_bufferf */
int Curl_add_bufferf(void);

/* Symbol: Curl_add_buffer */
/* Demangled: Curl_add_buffer */
int Curl_add_buffer(void);

/* Symbol: Curl_add_timecondition */
/* Demangled: Curl_add_timecondition */
int Curl_add_timecondition(void);

/* Symbol: Curl_add_custom_headers */
/* Demangled: Curl_add_custom_headers */
int Curl_add_custom_headers(void);

/* Symbol: Curl_add_buffer_send */
/* Demangled: Curl_add_buffer_send */
int Curl_add_buffer_send(void);

/* Symbol: Curl_setup_transfer */
/* Demangled: Curl_setup_transfer */
int Curl_setup_transfer(void);

/* Symbol: Curl_http_done */
/* Demangled: Curl_http_done */
int Curl_http_done(void);

/* Symbol: Curl_unencode_cleanup */
/* Demangled: Curl_unencode_cleanup */
int Curl_unencode_cleanup(void);

/* Symbol: Curl_http_connect */
/* Demangled: Curl_http_connect */
int Curl_http_connect(void);

/* Symbol: Curl_proxy_connect */
/* Demangled: Curl_proxy_connect */
int Curl_proxy_connect(void);

/* Symbol: Curl_ssl_connect_nonblocking */
/* Demangled: Curl_ssl_connect_nonblocking */
int Curl_ssl_connect_nonblocking(void);

/* Symbol: Curl_checkProxyheaders */
/* Demangled: Curl_checkProxyheaders */
int Curl_checkProxyheaders(void);

/* Symbol: Curl_copy_header_value */
/* Demangled: Curl_copy_header_value */
int Curl_copy_header_value(void);

/* Symbol: Curl_http_auth_act */
/* Demangled: Curl_http_auth_act */
int Curl_http_auth_act(void);

/* Symbol: Curl_readrewind */
/* Demangled: Curl_readrewind */
int Curl_readrewind(void);

/* Symbol: Curl_output_ntlm */
/* Demangled: Curl_output_ntlm */
int Curl_output_ntlm(void);

/* Symbol: Curl_output_digest */
/* Demangled: Curl_output_digest */
int Curl_output_digest(void);

/* Symbol: Curl_http_input_auth */
/* Demangled: Curl_http_input_auth */
int Curl_http_input_auth(void);

/* Symbol: Curl_input_ntlm */
/* Demangled: Curl_input_ntlm */
int Curl_input_ntlm(void);

/* Symbol: Curl_input_digest */
/* Demangled: Curl_input_digest */
int Curl_input_digest(void);

/* Symbol: Curl_add_buffer_init */
/* Demangled: Curl_add_buffer_init */
int Curl_add_buffer_init(void);

/* Symbol: Curl_add_buffer_free */
/* Demangled: Curl_add_buffer_free */
int Curl_add_buffer_free(void);

/* Symbol: Curl_write */
/* Demangled: Curl_write */
int Curl_write(void);

/* Symbol: Curl_debug */
/* Demangled: Curl_debug */
int Curl_debug(void);

/* Symbol: Curl_pipeline_leave_write */
/* Demangled: Curl_pipeline_leave_write */
int Curl_pipeline_leave_write(void);

/* Symbol: curl_mvaprintf */
/* Demangled: curl_mvaprintf */
int curl_mvaprintf(void);

/* Symbol: Curl_crealloc */
/* Demangled: Curl_crealloc */
extern void* Curl_crealloc;

/* Symbol: Curl_http_readwrite_headers */
/* Demangled: Curl_http_readwrite_headers */
int Curl_http_readwrite_headers(void);

/* Symbol: Curl_pipeline_server_blacklisted */
/* Demangled: Curl_pipeline_server_blacklisted */
int Curl_pipeline_server_blacklisted(void);

/* Symbol: Curl_pipeline_site_blacklisted */
/* Demangled: Curl_pipeline_site_blacklisted */
int Curl_pipeline_site_blacklisted(void);

/* Symbol: Curl_httpchunk_init */
/* Demangled: Curl_httpchunk_init */
int Curl_httpchunk_init(void);

/* Symbol: curl_getdate */
/* Demangled: curl_getdate */
int curl_getdate(void);

/* Symbol: Curl_rtsp_parseheader */
/* Demangled: Curl_rtsp_parseheader */
int Curl_rtsp_parseheader(void);

/* Symbol: Curl_handler_http */
/* Demangled: Curl_handler_http */
extern void* Curl_handler_http;

/* Symbol: Curl_handler_https */
/* Demangled: Curl_handler_https */
extern void* Curl_handler_https;

/* Symbol: Curl_sendf */
/* Demangled: Curl_sendf */
int Curl_sendf(void);

/* Symbol: Curl_send_plain */
/* Demangled: Curl_send_plain */
int Curl_send_plain(void);

/* Symbol: Curl_strerror */
/* Demangled: Curl_strerror */
int Curl_strerror(void);

/* Symbol: Curl_write_plain */
/* Demangled: Curl_write_plain */
int Curl_write_plain(void);

/* Symbol: Curl_recv_plain */
/* Demangled: Curl_recv_plain */
int Curl_recv_plain(void);

/* Symbol: Curl_client_chop_write */
/* Demangled: Curl_client_chop_write */
int Curl_client_chop_write(void);

/* Symbol: Curl_read_plain */
/* Demangled: Curl_read_plain */
int Curl_read_plain(void);

/* Symbol: Curl_read */
/* Demangled: Curl_read */
int Curl_read(void);

/* Symbol: Curl_pipeline_wanted */
/* Demangled: Curl_pipeline_wanted */
int Curl_pipeline_wanted(void);

/* Symbol: Curl_handler_ftp */
/* Demangled: Curl_handler_ftp */
extern void* Curl_handler_ftp;

/* Symbol: Curl_ftp_parselist_geterror */
/* Demangled: Curl_ftp_parselist_geterror */
int Curl_ftp_parselist_geterror(void);

/* Symbol: Curl_llist_remove */
/* Demangled: Curl_llist_remove */
int Curl_llist_remove(void);

/* Symbol: Curl_ftp_parselist_data_alloc */
/* Demangled: Curl_ftp_parselist_data_alloc */
int Curl_ftp_parselist_data_alloc(void);

/* Symbol: Curl_pp_statemach */
/* Demangled: Curl_pp_statemach */
int Curl_pp_statemach(void);

/* Symbol: Curl_ftp_parselist */
/* Demangled: Curl_ftp_parselist */
int Curl_ftp_parselist(void);

/* Symbol: Curl_pp_sendf */
/* Demangled: Curl_pp_sendf */
int Curl_pp_sendf(void);

/* Symbol: curl_easy_strerror */
/* Demangled: curl_easy_strerror */
int curl_easy_strerror(void);

/* Symbol: Curl_ssl_close */
/* Demangled: Curl_ssl_close */
int Curl_ssl_close(void);

/* Symbol: Curl_closesocket */
/* Demangled: Curl_closesocket */
int Curl_closesocket(void);

/* Symbol: Curl_GetFTPResponse */
/* Demangled: Curl_GetFTPResponse */
int Curl_GetFTPResponse(void);

/* Symbol: Curl_proxyCONNECT */
/* Demangled: Curl_proxyCONNECT */
int Curl_proxyCONNECT(void);

/* Symbol: Curl_is_connected */
/* Demangled: Curl_is_connected */
int Curl_is_connected(void);

/* Symbol: Curl_SOCKS5 */
/* Demangled: Curl_SOCKS5 */
int Curl_SOCKS5(void);

/* Symbol: Curl_SOCKS4 */
/* Demangled: Curl_SOCKS4 */
int Curl_SOCKS4(void);

/* Symbol: Curl_ssl_connect */
/* Demangled: Curl_ssl_connect */
int Curl_ssl_connect(void);

/* Symbol: Curl_pp_init */
/* Demangled: Curl_pp_init */
int Curl_pp_init(void);

/* Symbol: Curl_pp_getsock */
/* Demangled: Curl_pp_getsock */
int Curl_pp_getsock(void);

/* Symbol: Curl_pp_disconnect */
/* Demangled: Curl_pp_disconnect */
int Curl_pp_disconnect(void);

/* Symbol: Curl_pp_state_timeout */
/* Demangled: Curl_pp_state_timeout */
int Curl_pp_state_timeout(void);

/* Symbol: Curl_socket_check */
/* Demangled: Curl_socket_check */
int Curl_socket_check(void);

/* Symbol: Curl_pp_readresp */
/* Demangled: Curl_pp_readresp */
int Curl_pp_readresp(void);

/* Symbol: Curl_ftpsendf */
/* Demangled: Curl_ftpsendf */
int Curl_ftpsendf(void);

/* Symbol: Curl_pp_flushsend */
/* Demangled: Curl_pp_flushsend */
int Curl_pp_flushsend(void);

/* Symbol: Curl_ssl_shutdown */
/* Demangled: Curl_ssl_shutdown */
int Curl_ssl_shutdown(void);

/* Symbol: Curl_connecthost */
/* Demangled: Curl_connecthost */
int Curl_connecthost(void);

/* Symbol: curlx_sltosi */
/* Demangled: curlx_sltosi */
int curlx_sltosi(void);

/* Symbol: Curl_socket */
/* Demangled: Curl_socket */
int Curl_socket(void);

/* Symbol: curlx_ultous */
/* Demangled: curlx_ultous */
int curlx_ultous(void);

/* Symbol: Curl_ipv6_scope */
/* Demangled: Curl_ipv6_scope */
int Curl_ipv6_scope(void);

/* Symbol: Curl_if2ip */
/* Demangled: Curl_if2ip */
int Curl_if2ip(void);

/* Symbol: Curl_expire */
/* Demangled: Curl_expire */
int Curl_expire(void);

/* Symbol: Curl_timeleft */
/* Demangled: Curl_timeleft */
int Curl_timeleft(void);

/* Symbol: curlx_nonblock */
/* Demangled: curlx_nonblock */
int curlx_nonblock(void);

/* Symbol: curlx_uztosi */
/* Demangled: curlx_uztosi */
int curlx_uztosi(void);

/* Symbol: curlx_sztosi */
/* Demangled: curlx_sztosi */
int curlx_sztosi(void);

/* Symbol: curl_strnequal */
/* Demangled: curl_strnequal */
int curl_strnequal(void);

/* Symbol: Curl_ftp_parselist_data_free */
/* Demangled: Curl_ftp_parselist_data_free */
int Curl_ftp_parselist_data_free(void);

/* Symbol: Curl_handler_ftps */
/* Demangled: Curl_handler_ftps */
extern void* Curl_handler_ftps;

/* Symbol: Curl_freeset */
/* Demangled: Curl_freeset */
int Curl_freeset(void);

/* Symbol: Curl_dupset */
/* Demangled: Curl_dupset */
int Curl_dupset(void);

/* Symbol: Curl_close */
/* Demangled: Curl_close */
int Curl_close(void);

/* Symbol: curl_multi_remove_handle */
/* Demangled: curl_multi_remove_handle */
int curl_multi_remove_handle(void);

/* Symbol: curl_multi_cleanup */
/* Demangled: curl_multi_cleanup */
int curl_multi_cleanup(void);

/* Symbol: Curl_llist_destroy */
/* Demangled: Curl_llist_destroy */
int Curl_llist_destroy(void);

/* Symbol: Curl_ssl_close_all */
/* Demangled: Curl_ssl_close_all */
int Curl_ssl_close_all(void);

/* Symbol: Curl_ssl_free_certinfo */
/* Demangled: Curl_ssl_free_certinfo */
int Curl_ssl_free_certinfo(void);

/* Symbol: Curl_digest_cleanup */
/* Demangled: Curl_digest_cleanup */
int Curl_digest_cleanup(void);

/* Symbol: Curl_wildcard_dtor */
/* Demangled: Curl_wildcard_dtor */
int Curl_wildcard_dtor(void);

/* Symbol: Curl_free_request_state */
/* Demangled: Curl_free_request_state */
int Curl_free_request_state(void);

/* Symbol: Curl_init_userdefined */
/* Demangled: Curl_init_userdefined */
int Curl_init_userdefined(void);

/* Symbol: Curl_open */
/* Demangled: Curl_open */
int Curl_open(void);

/* Symbol: Curl_setopt */
/* Demangled: Curl_setopt */
int Curl_setopt(void);

/* Symbol: Curl_ssl_set_engine */
/* Demangled: Curl_ssl_set_engine */
int Curl_ssl_set_engine(void);

/* Symbol: Curl_set_dns_servers */
/* Demangled: Curl_set_dns_servers */
int Curl_set_dns_servers(void);

/* Symbol: Curl_set_dns_interface */
/* Demangled: Curl_set_dns_interface */
int Curl_set_dns_interface(void);

/* Symbol: Curl_set_dns_local_ip4 */
/* Demangled: Curl_set_dns_local_ip4 */
int Curl_set_dns_local_ip4(void);

/* Symbol: Curl_set_dns_local_ip6 */
/* Demangled: Curl_set_dns_local_ip6 */
int Curl_set_dns_local_ip6(void);

/* Symbol: Curl_ssl_set_engine_default */
/* Demangled: Curl_ssl_set_engine_default */
int Curl_ssl_set_engine_default(void);

/* Symbol: curlx_sltous */
/* Demangled: curlx_sltous */
int curlx_sltous(void);

/* Symbol: Curl_ssl_cert_status_request */
/* Demangled: Curl_ssl_cert_status_request */
int Curl_ssl_cert_status_request(void);

/* Symbol: Curl_ssl_false_start */
/* Demangled: Curl_ssl_false_start */
int Curl_ssl_false_start(void);

/* Symbol: Curl_disconnect */
/* Demangled: Curl_disconnect */
int Curl_disconnect(void);

/* Symbol: Curl_http_ntlm_cleanup */
/* Demangled: Curl_http_ntlm_cleanup */
int Curl_http_ntlm_cleanup(void);

/* Symbol: Curl_conncache_remove_conn */
/* Demangled: Curl_conncache_remove_conn */
int Curl_conncache_remove_conn(void);

/* Symbol: Curl_multi_handlePipeBreak */
/* Demangled: Curl_multi_handlePipeBreak */
int Curl_multi_handlePipeBreak(void);

/* Symbol: Curl_free_ssl_config */
/* Demangled: Curl_free_ssl_config */
int Curl_free_ssl_config(void);

/* Symbol: Curl_removeHandleFromPipeline */
/* Demangled: Curl_removeHandleFromPipeline */
int Curl_removeHandleFromPipeline(void);

/* Symbol: Curl_getoff_all_pipelines */
/* Demangled: Curl_getoff_all_pipelines */
int Curl_getoff_all_pipelines(void);

/* Symbol: Curl_recvpipe_head */
/* Demangled: Curl_recvpipe_head */
int Curl_recvpipe_head(void);

/* Symbol: Curl_sendpipe_head */
/* Demangled: Curl_sendpipe_head */
int Curl_sendpipe_head(void);

/* Symbol: Curl_pipeline_leave_read */
/* Demangled: Curl_pipeline_leave_read */
int Curl_pipeline_leave_read(void);

/* Symbol: Curl_oldest_idle_connection */
/* Demangled: Curl_oldest_idle_connection */
int Curl_oldest_idle_connection(void);

/* Symbol: Curl_hash_start_iterate */
/* Demangled: Curl_hash_start_iterate */
int Curl_hash_start_iterate(void);

/* Symbol: Curl_hash_next_element */
/* Demangled: Curl_hash_next_element */
int Curl_hash_next_element(void);

/* Symbol: Curl_connected_proxy */
/* Demangled: Curl_connected_proxy */
int Curl_connected_proxy(void);

/* Symbol: Curl_verboseconnect */
/* Demangled: Curl_verboseconnect */
int Curl_verboseconnect(void);

/* Symbol: Curl_protocol_getsock */
/* Demangled: Curl_protocol_getsock */
int Curl_protocol_getsock(void);

/* Symbol: Curl_doing_getsock */
/* Demangled: Curl_doing_getsock */
int Curl_doing_getsock(void);

/* Symbol: Curl_protocol_connecting */
/* Demangled: Curl_protocol_connecting */
int Curl_protocol_connecting(void);

/* Symbol: Curl_protocol_doing */
/* Demangled: Curl_protocol_doing */
int Curl_protocol_doing(void);

/* Symbol: Curl_protocol_connect */
/* Demangled: Curl_protocol_connect */
int Curl_protocol_connect(void);

/* Symbol: Curl_setup_conn */
/* Demangled: Curl_setup_conn */
int Curl_setup_conn(void);

/* Symbol: Curl_updateconninfo */
/* Demangled: Curl_updateconninfo */
int Curl_updateconninfo(void);

/* Symbol: Curl_connect */
/* Demangled: Curl_connect */
int Curl_connect(void);

/* Symbol: Curl_multi_max_host_connections */
/* Demangled: Curl_multi_max_host_connections */
int Curl_multi_max_host_connections(void);

/* Symbol: Curl_multi_max_total_connections */
/* Demangled: Curl_multi_max_total_connections */
int Curl_multi_max_total_connections(void);

/* Symbol: Curl_llist_alloc */
/* Demangled: Curl_llist_alloc */
int Curl_llist_alloc(void);

/* Symbol: Curl_dedotdotify */
/* Demangled: Curl_dedotdotify */
int Curl_dedotdotify(void);

/* Symbol: curl_getenv */
/* Demangled: curl_getenv */
int curl_getenv(void);

/* Symbol: Curl_strntoupper */
/* Demangled: Curl_strntoupper */
int Curl_strntoupper(void);

/* Symbol: Curl_parsenetrc */
/* Demangled: Curl_parsenetrc */
int Curl_parsenetrc(void);

/* Symbol: Curl_clone_ssl_config */
/* Demangled: Curl_clone_ssl_config */
int Curl_clone_ssl_config(void);

/* Symbol: Curl_conncache_foreach */
/* Demangled: Curl_conncache_foreach */
int Curl_conncache_foreach(void);

/* Symbol: Curl_conncache_add_conn */
/* Demangled: Curl_conncache_add_conn */
int Curl_conncache_add_conn(void);

/* Symbol: Curl_conncache_find_bundle */
/* Demangled: Curl_conncache_find_bundle */
int Curl_conncache_find_bundle(void);

/* Symbol: Curl_init_do */
/* Demangled: Curl_init_do */
int Curl_init_do(void);

/* Symbol: Curl_ssl_config_matches */
/* Demangled: Curl_ssl_config_matches */
int Curl_ssl_config_matches(void);

/* Symbol: Curl_pipeline_penalized */
/* Demangled: Curl_pipeline_penalized */
int Curl_pipeline_penalized(void);

/* Symbol: Curl_persistconninfo */
/* Demangled: Curl_persistconninfo */
int Curl_persistconninfo(void);

/* Symbol: Curl_speedinit */
/* Demangled: Curl_speedinit */
int Curl_speedinit(void);

/* Symbol: Curl_rtsp_connisdead */
/* Demangled: Curl_rtsp_connisdead */
int Curl_rtsp_connisdead(void);

/* Symbol: Curl_handler_telnet */
/* Demangled: Curl_handler_telnet */
extern void* Curl_handler_telnet;

/* Symbol: Curl_handler_dict */
/* Demangled: Curl_handler_dict */
extern void* Curl_handler_dict;

/* Symbol: Curl_handler_tftp */
/* Demangled: Curl_handler_tftp */
extern void* Curl_handler_tftp;

/* Symbol: Curl_handler_imap */
/* Demangled: Curl_handler_imap */
extern void* Curl_handler_imap;

/* Symbol: Curl_handler_imaps */
/* Demangled: Curl_handler_imaps */
extern void* Curl_handler_imaps;

/* Symbol: Curl_handler_pop3 */
/* Demangled: Curl_handler_pop3 */
extern void* Curl_handler_pop3;

/* Symbol: Curl_handler_pop3s */
/* Demangled: Curl_handler_pop3s */
extern void* Curl_handler_pop3s;

/* Symbol: Curl_handler_smb */
/* Demangled: Curl_handler_smb */
extern void* Curl_handler_smb;

/* Symbol: Curl_handler_smbs */
/* Demangled: Curl_handler_smbs */
extern void* Curl_handler_smbs;

/* Symbol: Curl_handler_smtp */
/* Demangled: Curl_handler_smtp */
extern void* Curl_handler_smtp;

/* Symbol: Curl_handler_smtps */
/* Demangled: Curl_handler_smtps */
extern void* Curl_handler_smtps;

/* Symbol: Curl_handler_rtsp */
/* Demangled: Curl_handler_rtsp */
extern void* Curl_handler_rtsp;

/* Symbol: Curl_handler_gopher */
/* Demangled: Curl_handler_gopher */
extern void* Curl_handler_gopher;

/* Symbol: Curl_if_is_interface_name */
/* Demangled: Curl_if_is_interface_name */
int Curl_if_is_interface_name(void);

/* Symbol: Curl_expire_latest */
/* Demangled: Curl_expire_latest */
int Curl_expire_latest(void);

/* Symbol: Curl_version_init */
/* Demangled: Curl_version_init */
int Curl_version_init(void);

/* Symbol: curl_version */
/* Demangled: curl_version */
int curl_version(void);

/* Symbol: curl_version_info */
/* Demangled: curl_version_info */
int curl_version_info(void);

/* Symbol: Curl_ssl_version */
/* Demangled: Curl_ssl_version */
int Curl_ssl_version(void);

/* Symbol: curl_escape */
/* Demangled: curl_escape */
int curl_escape(void);

/* Symbol: curl_easy_escape */
/* Demangled: curl_easy_escape */
int curl_easy_escape(void);

/* Symbol: curl_unescape */
/* Demangled: curl_unescape */
int curl_unescape(void);

/* Symbol: Curl_urldecode */
/* Demangled: Curl_urldecode */
int Curl_urldecode(void);

/* Symbol: curl_free */
/* Demangled: curl_free */
int curl_free(void);

/* Symbol: curl_msprintf */
/* Demangled: curl_msprintf */
int curl_msprintf(void);

/* Symbol: curl_mprintf */
/* Demangled: curl_mprintf */
int curl_mprintf(void);

/* Symbol: curl_mvsprintf */
/* Demangled: curl_mvsprintf */
int curl_mvsprintf(void);

/* Symbol: curl_mvprintf */
/* Demangled: curl_mvprintf */
int curl_mvprintf(void);

/* Symbol: curl_mvfprintf */
/* Demangled: curl_mvfprintf */
int curl_mvfprintf(void);

/* Symbol: curl_slist_append */
/* Demangled: curl_slist_append */
int curl_slist_append(void);

/* Symbol: curl_slist_free_all */
/* Demangled: curl_slist_free_all */
int curl_slist_free_all(void);

/* Symbol: Curl_poll */
/* Demangled: Curl_poll */
int Curl_poll(void);

/* Symbol: Curl_getinfo */
/* Demangled: Curl_getinfo */
int Curl_getinfo(void);

/* Symbol: Curl_getconnectinfo */
/* Demangled: Curl_getconnectinfo */
int Curl_getconnectinfo(void);

/* Symbol: Curl_ssl_backend */
/* Demangled: Curl_ssl_backend */
int Curl_ssl_backend(void);

/* Symbol: Curl_ssl_engines_list */
/* Demangled: Curl_ssl_engines_list */
int Curl_ssl_engines_list(void);

/* Symbol: Curl_readwrite */
/* Demangled: Curl_readwrite */
int Curl_readwrite(void);

/* Symbol: Curl_httpchunk_read */
/* Demangled: Curl_httpchunk_read */
int Curl_httpchunk_read(void);

/* Symbol: Curl_pop3_write */
/* Demangled: Curl_pop3_write */
int Curl_pop3_write(void);

/* Symbol: Curl_unencode_gzip_write */
/* Demangled: Curl_unencode_gzip_write */
int Curl_unencode_gzip_write(void);

/* Symbol: Curl_unencode_deflate_write */
/* Demangled: Curl_unencode_deflate_write */
int Curl_unencode_deflate_write(void);

/* Symbol: Curl_ssl_data_pending */
/* Demangled: Curl_ssl_data_pending */
int Curl_ssl_data_pending(void);

/* Symbol: Curl_smtp_escape_eob */
/* Demangled: Curl_smtp_escape_eob */
int Curl_smtp_escape_eob(void);

/* Symbol: Curl_chunked_strerror */
/* Demangled: Curl_chunked_strerror */
int Curl_chunked_strerror(void);

/* Symbol: Curl_single_getsock */
/* Demangled: Curl_single_getsock */
int Curl_single_getsock(void);

/* Symbol: Curl_sleep_time */
/* Demangled: Curl_sleep_time */
int Curl_sleep_time(void);

/* Symbol: Curl_init_CONNECT */
/* Demangled: Curl_init_CONNECT */
int Curl_init_CONNECT(void);

/* Symbol: Curl_pretransfer */
/* Demangled: Curl_pretransfer */
int Curl_pretransfer(void);

/* Symbol: Curl_ssl_initsessions */
/* Demangled: Curl_ssl_initsessions */
int Curl_ssl_initsessions(void);

/* Symbol: Curl_wildcard_init */
/* Demangled: Curl_wildcard_init */
int Curl_wildcard_init(void);

/* Symbol: Curl_posttransfer */
/* Demangled: Curl_posttransfer */
int Curl_posttransfer(void);

/* Symbol: Curl_follow */
/* Demangled: Curl_follow */
int Curl_follow(void);

/* Symbol: Curl_retry_request */
/* Demangled: Curl_retry_request */
int Curl_retry_request(void);

/* Symbol: curl_global_init */
/* Demangled: curl_global_init */
int curl_global_init(void);

/* Symbol: Curl_ssl_init */
/* Demangled: Curl_ssl_init */
int Curl_ssl_init(void);

/* Symbol: Curl_ipv6works */
/* Demangled: Curl_ipv6works */
int Curl_ipv6works(void);

/* Symbol: Curl_ack_eintr */
/* Demangled: Curl_ack_eintr */
extern void* Curl_ack_eintr;

/* Symbol: curl_global_init_mem */
/* Demangled: curl_global_init_mem */
int curl_global_init_mem(void);

/* Symbol: curl_global_cleanup */
/* Demangled: curl_global_cleanup */
int curl_global_cleanup(void);

/* Symbol: Curl_ssl_cleanup */
/* Demangled: Curl_ssl_cleanup */
int Curl_ssl_cleanup(void);

/* Symbol: curl_easy_init */
/* Demangled: curl_easy_init */
int curl_easy_init(void);

/* Symbol: curl_easy_setopt */
/* Demangled: curl_easy_setopt */
int curl_easy_setopt(void);

/* Symbol: curl_easy_perform */
/* Demangled: curl_easy_perform */
int curl_easy_perform(void);

/* Symbol: Curl_multi_handle */
/* Demangled: Curl_multi_handle */
int Curl_multi_handle(void);

/* Symbol: curl_multi_setopt */
/* Demangled: curl_multi_setopt */
int curl_multi_setopt(void);

/* Symbol: curl_multi_add_handle */
/* Demangled: curl_multi_add_handle */
int curl_multi_add_handle(void);

/* Symbol: curl_multi_wait */
/* Demangled: curl_multi_wait */
int curl_multi_wait(void);

/* Symbol: Curl_wait_ms */
/* Demangled: Curl_wait_ms */
int Curl_wait_ms(void);

/* Symbol: curl_multi_perform */
/* Demangled: curl_multi_perform */
int curl_multi_perform(void);

/* Symbol: curl_multi_info_read */
/* Demangled: curl_multi_info_read */
int curl_multi_info_read(void);

/* Symbol: curl_easy_cleanup */
/* Demangled: curl_easy_cleanup */
int curl_easy_cleanup(void);

/* Symbol: curl_easy_getinfo */
/* Demangled: curl_easy_getinfo */
int curl_easy_getinfo(void);

/* Symbol: curl_easy_duphandle */
/* Demangled: curl_easy_duphandle */
int curl_easy_duphandle(void);

/* Symbol: Curl_slist_duplicate */
/* Demangled: Curl_slist_duplicate */
int Curl_slist_duplicate(void);

/* Symbol: curl_easy_reset */
/* Demangled: curl_easy_reset */
int curl_easy_reset(void);

/* Symbol: curl_easy_pause */
/* Demangled: curl_easy_pause */
int curl_easy_pause(void);

/* Symbol: curl_easy_recv */
/* Demangled: curl_easy_recv */
int curl_easy_recv(void);

/* Symbol: curl_easy_send */
/* Demangled: curl_easy_send */
int curl_easy_send(void);

/* Symbol: Curl_fnmatch */
/* Demangled: Curl_fnmatch */
int Curl_fnmatch(void);

/* Symbol: Curl_fileinfo_alloc */
/* Demangled: Curl_fileinfo_alloc */
int Curl_fileinfo_alloc(void);

/* Symbol: Curl_fileinfo_dtor */
/* Demangled: Curl_fileinfo_dtor */
int Curl_fileinfo_dtor(void);

/* Symbol: Curl_llist_insert_next */
/* Demangled: Curl_llist_insert_next */
int Curl_llist_insert_next(void);

/* Symbol: Curl_prioritize_dns_entry */
/* Demangled: Curl_prioritize_dns_entry */
int Curl_prioritize_dns_entry(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int __aeabi_idiv(void);

/* Symbol: Curl_multi_closed */
/* Demangled: Curl_multi_closed */
int Curl_multi_closed(void);

/* Symbol: Curl_tcpnodelay */
/* Demangled: Curl_tcpnodelay */
int Curl_tcpnodelay(void);

/* Symbol: Curl_ssl_check_cxn */
/* Demangled: Curl_ssl_check_cxn */
int Curl_ssl_check_cxn(void);

/* Symbol: Curl_llist_count */
/* Demangled: Curl_llist_count */
int Curl_llist_count(void);

/* Symbol: Curl_llist_move */
/* Demangled: Curl_llist_move */
int Curl_llist_move(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: Curl_conncache_init */
/* Demangled: Curl_conncache_init */
int Curl_conncache_init(void);

/* Symbol: Curl_conncache_destroy */
/* Demangled: Curl_conncache_destroy */
int Curl_conncache_destroy(void);

/* Symbol: curl_multi_init */
/* Demangled: curl_multi_init */
int curl_multi_init(void);

/* Symbol: Curl_splayremovebyaddr */
/* Demangled: Curl_splayremovebyaddr */
int Curl_splayremovebyaddr(void);

/* Symbol: Curl_splayinsert */
/* Demangled: Curl_splayinsert */
int Curl_splayinsert(void);

/* Symbol: Curl_multi_process_pending_handles */
/* Demangled: Curl_multi_process_pending_handles */
int Curl_multi_process_pending_handles(void);

/* Symbol: curl_multi_fdset */
/* Demangled: curl_multi_fdset */
int curl_multi_fdset(void);

/* Symbol: Curl_splay */
/* Demangled: Curl_splay */
int Curl_splay(void);

/* Symbol: Curl_multi_connchanged */
/* Demangled: Curl_multi_connchanged */
int Curl_multi_connchanged(void);

/* Symbol: Curl_multi_add_perform */
/* Demangled: Curl_multi_add_perform */
int Curl_multi_add_perform(void);

/* Symbol: Curl_splaygetbest */
/* Demangled: Curl_splaygetbest */
int Curl_splaygetbest(void);

/* Symbol: Curl_pipeline_checkget_write */
/* Demangled: Curl_pipeline_checkget_write */
int Curl_pipeline_checkget_write(void);

/* Symbol: Curl_move_handle_from_send_to_recv_pipe */
/* Demangled: Curl_move_handle_from_send_to_recv_pipe */
int Curl_move_handle_from_send_to_recv_pipe(void);

/* Symbol: Curl_pipeline_checkget_read */
/* Demangled: Curl_pipeline_checkget_read */
int Curl_pipeline_checkget_read(void);

/* Symbol: Curl_add_handle_to_pipeline */
/* Demangled: Curl_add_handle_to_pipeline */
int Curl_add_handle_to_pipeline(void);

/* Symbol: Curl_conncache_find_first_connection */
/* Demangled: Curl_conncache_find_first_connection */
int Curl_conncache_find_first_connection(void);

/* Symbol: Curl_pipeline_set_site_blacklist */
/* Demangled: Curl_pipeline_set_site_blacklist */
int Curl_pipeline_set_site_blacklist(void);

/* Symbol: Curl_pipeline_set_server_blacklist */
/* Demangled: Curl_pipeline_set_server_blacklist */
int Curl_pipeline_set_server_blacklist(void);

/* Symbol: curl_multi_socket */
/* Demangled: curl_multi_socket */
int curl_multi_socket(void);

/* Symbol: curl_multi_socket_action */
/* Demangled: curl_multi_socket_action */
int curl_multi_socket_action(void);

/* Symbol: curl_multi_socket_all */
/* Demangled: curl_multi_socket_all */
int curl_multi_socket_all(void);

/* Symbol: curl_multi_timeout */
/* Demangled: curl_multi_timeout */
int curl_multi_timeout(void);

/* Symbol: curl_multi_assign */
/* Demangled: curl_multi_assign */
int curl_multi_assign(void);

/* Symbol: Curl_multi_content_length_penalty_size */
/* Demangled: Curl_multi_content_length_penalty_size */
int Curl_multi_content_length_penalty_size(void);

/* Symbol: Curl_multi_chunk_length_penalty_size */
/* Demangled: Curl_multi_chunk_length_penalty_size */
int Curl_multi_chunk_length_penalty_size(void);

/* Symbol: Curl_multi_pipelining_site_bl */
/* Demangled: Curl_multi_pipelining_site_bl */
int Curl_multi_pipelining_site_bl(void);

/* Symbol: Curl_multi_pipelining_server_bl */
/* Demangled: Curl_multi_pipelining_server_bl */
int Curl_multi_pipelining_server_bl(void);

/* Symbol: Curl_multi_dump */
/* Demangled: Curl_multi_dump */
int Curl_multi_dump(void);

/* Symbol: curl_share_init */
/* Demangled: curl_share_init */
int curl_share_init(void);

/* Symbol: curl_share_setopt */
/* Demangled: curl_share_setopt */
int curl_share_setopt(void);

/* Symbol: curl_share_cleanup */
/* Demangled: curl_share_cleanup */
int curl_share_cleanup(void);

/* Symbol: Curl_ssl_kill_session */
/* Demangled: Curl_ssl_kill_session */
int Curl_ssl_kill_session(void);

/* Symbol: Curl_auth_decode_digest_http_message */
/* Demangled: Curl_auth_decode_digest_http_message */
int Curl_auth_decode_digest_http_message(void);

/* Symbol: Curl_auth_create_digest_http_message */
/* Demangled: Curl_auth_create_digest_http_message */
int Curl_auth_create_digest_http_message(void);

/* Symbol: Curl_auth_digest_cleanup */
/* Demangled: Curl_auth_digest_cleanup */
int Curl_auth_digest_cleanup(void);

/* Symbol: Curl_md5it */
/* Demangled: Curl_md5it */
int Curl_md5it(void);

/* Symbol: curlx_uztoui */
/* Demangled: curlx_uztoui */
int curlx_uztoui(void);

/* Symbol: Curl_MD5_init */
/* Demangled: Curl_MD5_init */
int Curl_MD5_init(void);

/* Symbol: Curl_MD5_update */
/* Demangled: Curl_MD5_update */
int Curl_MD5_update(void);

/* Symbol: Curl_MD5_final */
/* Demangled: Curl_MD5_final */
int Curl_MD5_final(void);

/* Symbol: Curl_HMAC_MD5 */
/* Demangled: Curl_HMAC_MD5 */
extern void* Curl_HMAC_MD5;

/* Symbol: Curl_DIGEST_MD5 */
/* Demangled: Curl_DIGEST_MD5 */
extern void* Curl_DIGEST_MD5;

/* Symbol: curl_multi_strerror */
/* Demangled: curl_multi_strerror */
int curl_multi_strerror(void);

/* Symbol: curl_share_strerror */
/* Demangled: curl_share_strerror */
int curl_share_strerror(void);

/* Symbol: Curl_getaddrinfo_android */
/* Demangled: Curl_getaddrinfo_android */
int Curl_getaddrinfo_android(void);

/* Symbol: Curl_getaddrinfo_ex */
/* Demangled: Curl_getaddrinfo_ex */
int Curl_getaddrinfo_ex(void);

/* Symbol: Curl_blockread_all */
/* Demangled: Curl_blockread_all */
int Curl_blockread_all(void);

/* Symbol: Curl_he2ai */
/* Demangled: Curl_he2ai */
int Curl_he2ai(void);

/* Symbol: Curl_ip2addr */
/* Demangled: Curl_ip2addr */
int Curl_ip2addr(void);

/* Symbol: Curl_slist_append_nodup */
/* Demangled: Curl_slist_append_nodup */
int Curl_slist_append_nodup(void);

/* Symbol: Curl_sasl_init */
/* Demangled: Curl_sasl_init */
int Curl_sasl_init(void);

/* Symbol: Curl_sasl_parse_url_auth_option */
/* Demangled: Curl_sasl_parse_url_auth_option */
int Curl_sasl_parse_url_auth_option(void);

/* Symbol: Curl_sasl_cleanup */
/* Demangled: Curl_sasl_cleanup */
int Curl_sasl_cleanup(void);

/* Symbol: Curl_sasl_decode_mech */
/* Demangled: Curl_sasl_decode_mech */
int Curl_sasl_decode_mech(void);

/* Symbol: Curl_sasl_continue */
/* Demangled: Curl_sasl_continue */
int Curl_sasl_continue(void);

/* Symbol: Curl_pp_moredata */
/* Demangled: Curl_pp_moredata */
int Curl_pp_moredata(void);

/* Symbol: Curl_pp_vsendf */
/* Demangled: Curl_pp_vsendf */
int Curl_pp_vsendf(void);

/* Symbol: Curl_sasl_can_authenticate */
/* Demangled: Curl_sasl_can_authenticate */
int Curl_sasl_can_authenticate(void);

/* Symbol: Curl_sasl_start */
/* Demangled: Curl_sasl_start */
int Curl_sasl_start(void);

/* Symbol: Curl_gethostname */
/* Demangled: Curl_gethostname */
int Curl_gethostname(void);

/* Symbol: curlx_ultosi */
/* Demangled: curlx_ultosi */
int curlx_ultosi(void);

/* Symbol: curlx_uztoso */
/* Demangled: curlx_uztoso */
int curlx_uztoso(void);

/* Symbol: curlx_uztoul */
/* Demangled: curlx_uztoul */
int curlx_uztoul(void);

/* Symbol: curlx_uztosz */
/* Demangled: curlx_uztosz */
int curlx_uztosz(void);

/* Symbol: curlx_uitous */
/* Demangled: curlx_uitous */
int curlx_uitous(void);

/* Symbol: curlx_uitouc */
/* Demangled: curlx_uitouc */
int curlx_uitouc(void);

/* Symbol: curlx_uitosi */
/* Demangled: curlx_uitosi */
int curlx_uitosi(void);

/* Symbol: curlx_sitouz */
/* Demangled: curlx_sitouz */
int curlx_sitouz(void);

/* Symbol: Curl_HMAC_init */
/* Demangled: Curl_HMAC_init */
int Curl_HMAC_init(void);

/* Symbol: Curl_HMAC_update */
/* Demangled: Curl_HMAC_update */
int Curl_HMAC_update(void);

/* Symbol: Curl_HMAC_final */
/* Demangled: Curl_HMAC_final */
int Curl_HMAC_final(void);

/* Symbol: Curl_auth_ntlm_cleanup */
/* Demangled: Curl_auth_ntlm_cleanup */
int Curl_auth_ntlm_cleanup(void);

/* Symbol: Curl_auth_decode_ntlm_type2_message */
/* Demangled: Curl_auth_decode_ntlm_type2_message */
int Curl_auth_decode_ntlm_type2_message(void);

/* Symbol: Curl_auth_create_ntlm_type1_message */
/* Demangled: Curl_auth_create_ntlm_type1_message */
int Curl_auth_create_ntlm_type1_message(void);

/* Symbol: Curl_auth_create_ntlm_type3_message */
/* Demangled: Curl_auth_create_ntlm_type3_message */
int Curl_auth_create_ntlm_type3_message(void);

/* Symbol: Curl_ntlm_core_lm_resp */
/* Demangled: Curl_ntlm_core_lm_resp */
int Curl_ntlm_core_lm_resp(void);

/* Symbol: Curl_ntlm_core_mk_lm_hash */
/* Demangled: Curl_ntlm_core_mk_lm_hash */
int Curl_ntlm_core_mk_lm_hash(void);

/* Symbol: Curl_ntlm_core_mk_nt_hash */
/* Demangled: Curl_ntlm_core_mk_nt_hash */
int Curl_ntlm_core_mk_nt_hash(void);

/* Symbol: Curl_hmac_md5 */
/* Demangled: Curl_hmac_md5 */
int Curl_hmac_md5(void);

/* Symbol: Curl_ntlm_core_mk_ntlmv2_hash */
/* Demangled: Curl_ntlm_core_mk_ntlmv2_hash */
int Curl_ntlm_core_mk_ntlmv2_hash(void);

/* Symbol: Curl_ntlm_core_mk_ntlmv2_resp */
/* Demangled: Curl_ntlm_core_mk_ntlmv2_resp */
int Curl_ntlm_core_mk_ntlmv2_resp(void);

/* Symbol: Curl_write64_le */
/* Demangled: Curl_write64_le */
int Curl_write64_le(void);

/* Symbol: Curl_ntlm_core_mk_lmv2_resp */
/* Demangled: Curl_ntlm_core_mk_lmv2_resp */
int Curl_ntlm_core_mk_lmv2_resp(void);

/* Symbol: mechtable */
/* Demangled: mechtable */
extern void* mechtable;

/* Symbol: Curl_auth_create_plain_message */
/* Demangled: Curl_auth_create_plain_message */
int Curl_auth_create_plain_message(void);

/* Symbol: Curl_auth_create_external_message */
/* Demangled: Curl_auth_create_external_message */
int Curl_auth_create_external_message(void);

/* Symbol: Curl_auth_create_oauth_bearer_message */
/* Demangled: Curl_auth_create_oauth_bearer_message */
int Curl_auth_create_oauth_bearer_message(void);

/* Symbol: Curl_auth_create_login_message */
/* Demangled: Curl_auth_create_login_message */
int Curl_auth_create_login_message(void);

/* Symbol: Curl_auth_decode_cram_md5_message */
/* Demangled: Curl_auth_decode_cram_md5_message */
int Curl_auth_decode_cram_md5_message(void);

/* Symbol: Curl_auth_create_cram_md5_message */
/* Demangled: Curl_auth_create_cram_md5_message */
int Curl_auth_create_cram_md5_message(void);

/* Symbol: Curl_auth_create_digest_md5_message */
/* Demangled: Curl_auth_create_digest_md5_message */
int Curl_auth_create_digest_md5_message(void);

/* Symbol: Curl_cert_hostcheck */
/* Demangled: Curl_cert_hostcheck */
int Curl_cert_hostcheck(void);

/* Symbol: curl_pushheader_bynum */
/* Demangled: curl_pushheader_bynum */
int curl_pushheader_bynum(void);

/* Symbol: curl_pushheader_byname */
/* Demangled: curl_pushheader_byname */
int curl_pushheader_byname(void);

/* Symbol: Curl_read16_le */
/* Demangled: Curl_read16_le */
int Curl_read16_le(void);

/* Symbol: Curl_read16_be */
/* Demangled: Curl_read16_be */
int Curl_read16_be(void);

/* Symbol: Curl_read32_le */
/* Demangled: Curl_read32_le */
int Curl_read32_le(void);

/* Symbol: Curl_read64_le */
/* Demangled: Curl_read64_le */
int Curl_read64_le(void);

/* Symbol: Curl_read32_be */
/* Demangled: Curl_read32_be */
int Curl_read32_be(void);

/* Symbol: Curl_read64_be */
/* Demangled: Curl_read64_be */
int Curl_read64_be(void);

/* Symbol: Curl_write16_le */
/* Demangled: Curl_write16_le */
int Curl_write16_le(void);

/* Symbol: Curl_write32_le */
/* Demangled: Curl_write32_le */
int Curl_write32_le(void);

/* Symbol: Curl_auth_build_spn */
/* Demangled: Curl_auth_build_spn */
int Curl_auth_build_spn(void);

/* Symbol: Curl_auth_digest_get_pair */
/* Demangled: Curl_auth_digest_get_pair */
int Curl_auth_digest_get_pair(void);

/* Symbol: Curl_ssl_md5sum */
/* Demangled: Curl_ssl_md5sum */
int Curl_ssl_md5sum(void);

/* Symbol: Curl_ossl_init */
/* Demangled: Curl_ossl_init */
int Curl_ossl_init(void);

/* Symbol: Curl_ossl_cleanup */
/* Demangled: Curl_ossl_cleanup */
int Curl_ossl_cleanup(void);

/* Symbol: Curl_ossl_check_cxn */
/* Demangled: Curl_ossl_check_cxn */
int Curl_ossl_check_cxn(void);

/* Symbol: Curl_ossl_set_engine */
/* Demangled: Curl_ossl_set_engine */
int Curl_ossl_set_engine(void);

/* Symbol: Curl_ossl_set_engine_default */
/* Demangled: Curl_ossl_set_engine_default */
int Curl_ossl_set_engine_default(void);

/* Symbol: Curl_ossl_engines_list */
/* Demangled: Curl_ossl_engines_list */
int Curl_ossl_engines_list(void);

/* Symbol: Curl_ossl_close */
/* Demangled: Curl_ossl_close */
int Curl_ossl_close(void);

/* Symbol: Curl_ossl_shutdown */
/* Demangled: Curl_ossl_shutdown */
int Curl_ossl_shutdown(void);

/* Symbol: Curl_ossl_session_free */
/* Demangled: Curl_ossl_session_free */
int Curl_ossl_session_free(void);

/* Symbol: Curl_ossl_close_all */
/* Demangled: Curl_ossl_close_all */
int Curl_ossl_close_all(void);

/* Symbol: Curl_ossl_connect_nonblocking */
/* Demangled: Curl_ossl_connect_nonblocking */
int Curl_ossl_connect_nonblocking(void);

/* Symbol: Curl_ssl_sessionid_lock */
/* Demangled: Curl_ssl_sessionid_lock */
int Curl_ssl_sessionid_lock(void);

/* Symbol: Curl_ssl_getsessionid */
/* Demangled: Curl_ssl_getsessionid */
int Curl_ssl_getsessionid(void);

/* Symbol: Curl_ssl_sessionid_unlock */
/* Demangled: Curl_ssl_sessionid_unlock */
int Curl_ssl_sessionid_unlock(void);

/* Symbol: Curl_ssl_delsessionid */
/* Demangled: Curl_ssl_delsessionid */
int Curl_ssl_delsessionid(void);

/* Symbol: Curl_ssl_addsessionid */
/* Demangled: Curl_ssl_addsessionid */
int Curl_ssl_addsessionid(void);

/* Symbol: Curl_ssl_init_certinfo */
/* Demangled: Curl_ssl_init_certinfo */
int Curl_ssl_init_certinfo(void);

/* Symbol: Curl_ssl_push_certinfo_len */
/* Demangled: Curl_ssl_push_certinfo_len */
int Curl_ssl_push_certinfo_len(void);

/* Symbol: Curl_ssl_push_certinfo */
/* Demangled: Curl_ssl_push_certinfo */
int Curl_ssl_push_certinfo(void);

/* Symbol: Curl_pin_peer_pubkey */
/* Demangled: Curl_pin_peer_pubkey */
int Curl_pin_peer_pubkey(void);

/* Symbol: Curl_ossl_connect */
/* Demangled: Curl_ossl_connect */
int Curl_ossl_connect(void);

/* Symbol: Curl_ossl_data_pending */
/* Demangled: Curl_ossl_data_pending */
int Curl_ossl_data_pending(void);

/* Symbol: Curl_ossl_version */
/* Demangled: Curl_ossl_version */
int Curl_ossl_version(void);

/* Symbol: Curl_ossl_random */
/* Demangled: Curl_ossl_random */
int Curl_ossl_random(void);

/* Symbol: Curl_ossl_md5sum */
/* Demangled: Curl_ossl_md5sum */
int Curl_ossl_md5sum(void);

/* Symbol: Curl_ossl_sha256sum */
/* Demangled: Curl_ossl_sha256sum */
int Curl_ossl_sha256sum(void);

/* Symbol: Curl_ossl_cert_status_request */
/* Demangled: Curl_ossl_cert_status_request */
int Curl_ossl_cert_status_request(void);

/* Symbol: Curl_ssl_random */
/* Demangled: Curl_ssl_random */
int Curl_ssl_random(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: __divsi3 */
/* Demangled: __divsi3 */
int __divsi3(void);

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int __aeabi_idivmod(void);

/* Symbol: __aeabi_drsub */
/* Demangled: __aeabi_drsub */
int __aeabi_drsub(void);

/* Symbol: __subdf3 */
/* Demangled: __subdf3 */
int __subdf3(void);

/* Symbol: __aeabi_dsub */
/* Demangled: __aeabi_dsub */
int __aeabi_dsub(void);

/* Symbol: __adddf3 */
/* Demangled: __adddf3 */
int __adddf3(void);

/* Symbol: __aeabi_dadd */
/* Demangled: __aeabi_dadd */
int __aeabi_dadd(void);

/* Symbol: __floatunsidf */
/* Demangled: __floatunsidf */
int __floatunsidf(void);

/* Symbol: __aeabi_ui2d */
/* Demangled: __aeabi_ui2d */
int __aeabi_ui2d(void);

/* Symbol: __floatsidf */
/* Demangled: __floatsidf */
int __floatsidf(void);

/* Symbol: __aeabi_i2d */
/* Demangled: __aeabi_i2d */
int __aeabi_i2d(void);

/* Symbol: __extendsfdf2 */
/* Demangled: __extendsfdf2 */
int __extendsfdf2(void);

/* Symbol: __aeabi_f2d */
/* Demangled: __aeabi_f2d */
int __aeabi_f2d(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: __aeabi_dcmplt */
/* Demangled: __aeabi_dcmplt */
int __aeabi_dcmplt(void);

/* Symbol: __fixdfdi */
/* Demangled: __fixdfdi */
int __fixdfdi(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: __aeabi_dmul */
/* Demangled: __aeabi_dmul */
int __aeabi_dmul(void);

/* Symbol: __aeabi_d2uiz */
/* Demangled: __aeabi_d2uiz */
int __aeabi_d2uiz(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int __udivdi3(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D */
/* Demangled: __gnu_Unwind_Restore_VFP_D */
int __gnu_Unwind_Restore_VFP_D(void);

/* Symbol: __gnu_Unwind_Restore_VFP */
/* Demangled: __gnu_Unwind_Restore_VFP */
int __gnu_Unwind_Restore_VFP(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
int __gnu_Unwind_Restore_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Restore_WMMXD */
/* Demangled: __gnu_Unwind_Restore_WMMXD */
int __gnu_Unwind_Restore_WMMXD(void);

/* Symbol: __gnu_Unwind_Restore_WMMXC */
/* Demangled: __gnu_Unwind_Restore_WMMXC */
int __gnu_Unwind_Restore_WMMXC(void);

/* Symbol: restore_core_regs */
/* Demangled: restore_core_regs */
int restore_core_regs(void);

/* Symbol: _Unwind_GetCFA */
/* Demangled: _Unwind_GetCFA */
int _Unwind_GetCFA(void);

/* Symbol: __gnu_Unwind_RaiseException */
/* Demangled: __gnu_Unwind_RaiseException */
int __gnu_Unwind_RaiseException(void);

/* Symbol: __gnu_Unwind_ForcedUnwind */
/* Demangled: __gnu_Unwind_ForcedUnwind */
int __gnu_Unwind_ForcedUnwind(void);

/* Symbol: __gnu_Unwind_Resume */
/* Demangled: __gnu_Unwind_Resume */
int __gnu_Unwind_Resume(void);

/* Symbol: __gnu_Unwind_Resume_or_Rethrow */
/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
int __gnu_Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __gnu_Unwind_Backtrace */
/* Demangled: __gnu_Unwind_Backtrace */
int __gnu_Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_execute */
/* Demangled: __gnu_unwind_execute */
int __gnu_unwind_execute(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __gnu_Unwind_Save_VFP_D */
/* Demangled: __gnu_Unwind_Save_VFP_D */
int __gnu_Unwind_Save_VFP_D(void);

/* Symbol: __gnu_Unwind_Save_VFP */
/* Demangled: __gnu_Unwind_Save_VFP */
int __gnu_Unwind_Save_VFP(void);

/* Symbol: __gnu_Unwind_Save_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
int __gnu_Unwind_Save_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Save_WMMXD */
/* Demangled: __gnu_Unwind_Save_WMMXD */
int __gnu_Unwind_Save_WMMXD(void);

/* Symbol: __gnu_Unwind_Save_WMMXC */
/* Demangled: __gnu_Unwind_Save_WMMXC */
int __gnu_Unwind_Save_WMMXC(void);

/* Symbol: __restore_core_regs */
/* Demangled: __restore_core_regs */
int __restore_core_regs(void);

/* Symbol: ___Unwind_RaiseException */
/* Demangled: ___Unwind_RaiseException */
int ___Unwind_RaiseException(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: ___Unwind_Resume */
/* Demangled: ___Unwind_Resume */
int ___Unwind_Resume(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: ___Unwind_Resume_or_Rethrow */
/* Demangled: ___Unwind_Resume_or_Rethrow */
int ___Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Resume_or_Rethrow */
/* Demangled: _Unwind_Resume_or_Rethrow */
int _Unwind_Resume_or_Rethrow(void);

/* Symbol: ___Unwind_ForcedUnwind */
/* Demangled: ___Unwind_ForcedUnwind */
int ___Unwind_ForcedUnwind(void);

/* Symbol: _Unwind_ForcedUnwind */
/* Demangled: _Unwind_ForcedUnwind */
int _Unwind_ForcedUnwind(void);

/* Symbol: ___Unwind_Backtrace */
/* Demangled: ___Unwind_Backtrace */
int ___Unwind_Backtrace(void);

/* Symbol: _Unwind_Backtrace */
/* Demangled: _Unwind_Backtrace */
int _Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_GetDataRelBase */
/* Demangled: _Unwind_GetDataRelBase */
int _Unwind_GetDataRelBase(void);

/* Symbol: _Unwind_GetTextRelBase */
/* Demangled: _Unwind_GetTextRelBase */
int _Unwind_GetTextRelBase(void);

/* Symbol: __muldf3 */
/* Demangled: __muldf3 */
int __muldf3(void);

/* Symbol: __divdf3 */
/* Demangled: __divdf3 */
int __divdf3(void);

/* Symbol: __aeabi_ddiv */
/* Demangled: __aeabi_ddiv */
int __aeabi_ddiv(void);

/* Symbol: __gtdf2 */
/* Demangled: __gtdf2 */
int __gtdf2(void);

/* Symbol: __gedf2 */
/* Demangled: __gedf2 */
int __gedf2(void);

/* Symbol: __ltdf2 */
/* Demangled: __ltdf2 */
int __ltdf2(void);

/* Symbol: __ledf2 */
/* Demangled: __ledf2 */
int __ledf2(void);

/* Symbol: __cmpdf2 */
/* Demangled: __cmpdf2 */
int __cmpdf2(void);

/* Symbol: __nedf2 */
/* Demangled: __nedf2 */
int __nedf2(void);

/* Symbol: __eqdf2 */
/* Demangled: __eqdf2 */
int __eqdf2(void);

/* Symbol: __aeabi_cdrcmple */
/* Demangled: __aeabi_cdrcmple */
int __aeabi_cdrcmple(void);

/* Symbol: __aeabi_cdcmpeq */
/* Demangled: __aeabi_cdcmpeq */
int __aeabi_cdcmpeq(void);

/* Symbol: __aeabi_cdcmple */
/* Demangled: __aeabi_cdcmple */
int __aeabi_cdcmple(void);

/* Symbol: __aeabi_dcmpeq */
/* Demangled: __aeabi_dcmpeq */
int __aeabi_dcmpeq(void);

/* Symbol: __aeabi_dcmple */
/* Demangled: __aeabi_dcmple */
int __aeabi_dcmple(void);

/* Symbol: __aeabi_dcmpge */
/* Demangled: __aeabi_dcmpge */
int __aeabi_dcmpge(void);

/* Symbol: __aeabi_dcmpgt */
/* Demangled: __aeabi_dcmpgt */
int __aeabi_dcmpgt(void);

/* Symbol: __fixunsdfsi */
/* Demangled: __fixunsdfsi */
int __fixunsdfsi(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int __aeabi_llsl(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int __aeabi_llsr(void);

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int __lshrdi3(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int __ashldi3(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

__END_DECLS

#endif /* BEGONIA_RE_LIBCURL_MD_H */
