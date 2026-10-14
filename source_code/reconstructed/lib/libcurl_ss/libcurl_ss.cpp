/*
 * Reverse-Engineered Source for: libcurl-ss.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcurl_ss"

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
#include "libcurl_ss.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: curlx_tvnow */
extern "C" __attribute__((visibility("default"))) int curlx_tvnow(void) {
    ALOGD("curlx_tvnow() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: curlx_tvdiff */
extern "C" __attribute__((visibility("default"))) int curlx_tvdiff(void) {
    ALOGD("curlx_tvdiff() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: curlx_tvdiff_secs */
extern "C" __attribute__((visibility("default"))) int curlx_tvdiff_secs(void) {
    ALOGD("curlx_tvdiff_secs() called");
    return 0;
}

/* Demangled: Curl_tvlong */
extern "C" __attribute__((visibility("default"))) int Curl_tvlong(void) {
    ALOGD("Curl_tvlong() called");
    return 0;
}

/* Demangled: Curl_base64_decode */
extern "C" __attribute__((visibility("default"))) int Curl_base64_decode(void) {
    ALOGD("Curl_base64_decode() called");
    return 0;
}

/* Demangled: curlx_ultouc */
extern "C" __attribute__((visibility("default"))) int curlx_ultouc(void) {
    ALOGD("curlx_ultouc() called");
    return 0;
}

/* Exported Object: Curl_cmalloc */
extern "C" __attribute__((visibility("default"))) void* Curl_cmalloc = NULL;

/* Exported Object: Curl_cfree */
extern "C" __attribute__((visibility("default"))) void* Curl_cfree = NULL;

/* Demangled: Curl_base64_encode */
extern "C" __attribute__((visibility("default"))) int Curl_base64_encode(void) {
    ALOGD("Curl_base64_encode() called");
    return 0;
}

/* Demangled: curl_msnprintf */
extern "C" __attribute__((visibility("default"))) int curl_msnprintf(void) {
    ALOGD("curl_msnprintf() called");
    return 0;
}

/* Demangled: Curl_global_host_cache_init */
extern "C" __attribute__((visibility("default"))) int Curl_global_host_cache_init(void) {
    ALOGD("Curl_global_host_cache_init() called");
    return 0;
}

/* Demangled: Curl_hash_init */
extern "C" __attribute__((visibility("default"))) int Curl_hash_init(void) {
    ALOGD("Curl_hash_init() called");
    return 0;
}

/* Demangled: Curl_str_key_compare */
extern "C" __attribute__((visibility("default"))) int Curl_str_key_compare(void) {
    ALOGD("Curl_str_key_compare() called");
    return 0;
}

/* Demangled: Curl_hash_str */
extern "C" __attribute__((visibility("default"))) int Curl_hash_str(void) {
    ALOGD("Curl_hash_str() called");
    return 0;
}

/* Demangled: Curl_freeaddrinfo */
extern "C" __attribute__((visibility("default"))) int Curl_freeaddrinfo(void) {
    ALOGD("Curl_freeaddrinfo() called");
    return 0;
}

/* Demangled: Curl_global_host_cache_dtor */
extern "C" __attribute__((visibility("default"))) int Curl_global_host_cache_dtor(void) {
    ALOGD("Curl_global_host_cache_dtor() called");
    return 0;
}

/* Demangled: Curl_hash_clean_with_criterium */
extern "C" __attribute__((visibility("default"))) int Curl_hash_clean_with_criterium(void) {
    ALOGD("Curl_hash_clean_with_criterium() called");
    return 0;
}

/* Demangled: Curl_hash_clean */
extern "C" __attribute__((visibility("default"))) int Curl_hash_clean(void) {
    ALOGD("Curl_hash_clean() called");
    return 0;
}

/* Demangled: Curl_hostcache_clean */
extern "C" __attribute__((visibility("default"))) int Curl_hostcache_clean(void) {
    ALOGD("Curl_hostcache_clean() called");
    return 0;
}

/* Demangled: Curl_num_addresses */
extern "C" __attribute__((visibility("default"))) int Curl_num_addresses(void) {
    ALOGD("Curl_num_addresses() called");
    return 0;
}

/* Demangled: Curl_printable_address */
extern "C" __attribute__((visibility("default"))) int Curl_printable_address(void) {
    ALOGD("Curl_printable_address() called");
    return 0;
}

/* Demangled: Curl_hostcache_prune */
extern "C" __attribute__((visibility("default"))) int Curl_hostcache_prune(void) {
    ALOGD("Curl_hostcache_prune() called");
    return 0;
}

/* Demangled: Curl_share_lock */
extern "C" __attribute__((visibility("default"))) int Curl_share_lock(void) {
    ALOGD("Curl_share_lock() called");
    return 0;
}

/* Demangled: Curl_share_unlock */
extern "C" __attribute__((visibility("default"))) int Curl_share_unlock(void) {
    ALOGD("Curl_share_unlock() called");
    return 0;
}

/* Demangled: Curl_cache_addr */
extern "C" __attribute__((visibility("default"))) int Curl_cache_addr(void) {
    ALOGD("Curl_cache_addr() called");
    return 0;
}

/* Demangled: Curl_hash_add */
extern "C" __attribute__((visibility("default"))) int Curl_hash_add(void) {
    ALOGD("Curl_hash_add() called");
    return 0;
}

/* Exported Object: Curl_ccalloc */
extern "C" __attribute__((visibility("default"))) void* Curl_ccalloc = NULL;

/* Demangled: curl_maprintf */
extern "C" __attribute__((visibility("default"))) int curl_maprintf(void) {
    ALOGD("curl_maprintf() called");
    return 0;
}

/* Demangled: Curl_resolv */
extern "C" __attribute__((visibility("default"))) int Curl_resolv(void) {
    ALOGD("Curl_resolv() called");
    return 0;
}

/* Demangled: Curl_hash_pick */
extern "C" __attribute__((visibility("default"))) int Curl_hash_pick(void) {
    ALOGD("Curl_hash_pick() called");
    return 0;
}

/* Demangled: Curl_infof */
extern "C" __attribute__((visibility("default"))) int Curl_infof(void) {
    ALOGD("Curl_infof() called");
    return 0;
}

/* Demangled: Curl_ipvalid */
extern "C" __attribute__((visibility("default"))) int Curl_ipvalid(void) {
    ALOGD("Curl_ipvalid() called");
    return 0;
}

/* Demangled: Curl_getaddrinfo */
extern "C" __attribute__((visibility("default"))) int Curl_getaddrinfo(void) {
    ALOGD("Curl_getaddrinfo() called");
    return 0;
}

/* Demangled: Curl_resolv_timeout */
extern "C" __attribute__((visibility("default"))) int Curl_resolv_timeout(void) {
    ALOGD("Curl_resolv_timeout() called");
    return 0;
}

/* Demangled: curlx_sltoui */
extern "C" __attribute__((visibility("default"))) int curlx_sltoui(void) {
    ALOGD("curlx_sltoui() called");
    return 0;
}

/* Demangled: Curl_failf */
extern "C" __attribute__((visibility("default"))) int Curl_failf(void) {
    ALOGD("Curl_failf() called");
    return 0;
}

/* Exported Object: curl_jmpenv */
extern "C" __attribute__((visibility("default"))) void* curl_jmpenv = NULL;

/* Demangled: Curl_resolv_unlock */
extern "C" __attribute__((visibility("default"))) int Curl_resolv_unlock(void) {
    ALOGD("Curl_resolv_unlock() called");
    return 0;
}

/* Demangled: Curl_mk_dnscache */
extern "C" __attribute__((visibility("default"))) int Curl_mk_dnscache(void) {
    ALOGD("Curl_mk_dnscache() called");
    return 0;
}

/* Demangled: Curl_hash_alloc */
extern "C" __attribute__((visibility("default"))) int Curl_hash_alloc(void) {
    ALOGD("Curl_hash_alloc() called");
    return 0;
}

/* Demangled: Curl_loadhostpairs */
extern "C" __attribute__((visibility("default"))) int Curl_loadhostpairs(void) {
    ALOGD("Curl_loadhostpairs() called");
    return 0;
}

/* Demangled: Curl_str2addr */
extern "C" __attribute__((visibility("default"))) int Curl_str2addr(void) {
    ALOGD("Curl_str2addr() called");
    return 0;
}

/* Demangled: Curl_pgrsDone */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsDone(void) {
    ALOGD("Curl_pgrsDone() called");
    return 0;
}

/* Demangled: Curl_pgrsUpdate */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsUpdate(void) {
    ALOGD("Curl_pgrsUpdate() called");
    return 0;
}

/* Demangled: curl_mfprintf */
extern "C" __attribute__((visibility("default"))) int curl_mfprintf(void) {
    ALOGD("curl_mfprintf() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: Curl_pgrsResetTimesSizes */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsResetTimesSizes(void) {
    ALOGD("Curl_pgrsResetTimesSizes() called");
    return 0;
}

/* Demangled: Curl_pgrsSetDownloadSize */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsSetDownloadSize(void) {
    ALOGD("Curl_pgrsSetDownloadSize() called");
    return 0;
}

/* Demangled: Curl_pgrsSetUploadSize */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsSetUploadSize(void) {
    ALOGD("Curl_pgrsSetUploadSize() called");
    return 0;
}

/* Demangled: Curl_pgrsTime */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsTime(void) {
    ALOGD("Curl_pgrsTime() called");
    return 0;
}

/* Demangled: Curl_pgrsStartNow */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsStartNow(void) {
    ALOGD("Curl_pgrsStartNow() called");
    return 0;
}

/* Demangled: Curl_pgrsSetDownloadCounter */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsSetDownloadCounter(void) {
    ALOGD("Curl_pgrsSetDownloadCounter() called");
    return 0;
}

/* Demangled: Curl_pgrsSetUploadCounter */
extern "C" __attribute__((visibility("default"))) int Curl_pgrsSetUploadCounter(void) {
    ALOGD("Curl_pgrsSetUploadCounter() called");
    return 0;
}

/* Demangled: curl_formadd */
extern "C" __attribute__((visibility("default"))) int curl_formadd(void) {
    ALOGD("curl_formadd() called");
    return 0;
}

/* Demangled: curl_strequal */
extern "C" __attribute__((visibility("default"))) int curl_strequal(void) {
    ALOGD("curl_strequal() called");
    return 0;
}

/* Exported Object: Curl_cstrdup */
extern "C" __attribute__((visibility("default"))) void* Curl_cstrdup = NULL;

/* Demangled: Curl_formclean */
extern "C" __attribute__((visibility("default"))) int Curl_formclean(void) {
    ALOGD("Curl_formclean() called");
    return 0;
}

/* Demangled: curl_formget */
extern "C" __attribute__((visibility("default"))) int curl_formget(void) {
    ALOGD("curl_formget() called");
    return 0;
}

/* Demangled: Curl_getformdata */
extern "C" __attribute__((visibility("default"))) int Curl_getformdata(void) {
    ALOGD("Curl_getformdata() called");
    return 0;
}

/* Demangled: Curl_rand */
extern "C" __attribute__((visibility("default"))) int Curl_rand(void) {
    ALOGD("Curl_rand() called");
    return 0;
}

/* Demangled: Curl_FormInit */
extern "C" __attribute__((visibility("default"))) int Curl_FormInit(void) {
    ALOGD("Curl_FormInit() called");
    return 0;
}

/* Demangled: curl_formfree */
extern "C" __attribute__((visibility("default"))) int curl_formfree(void) {
    ALOGD("curl_formfree() called");
    return 0;
}

/* Demangled: curl_mvsnprintf */
extern "C" __attribute__((visibility("default"))) int curl_mvsnprintf(void) {
    ALOGD("curl_mvsnprintf() called");
    return 0;
}

/* Demangled: Curl_FormReader */
extern "C" __attribute__((visibility("default"))) int Curl_FormReader(void) {
    ALOGD("Curl_FormReader() called");
    return 0;
}

/* Demangled: Curl_formpostheader */
extern "C" __attribute__((visibility("default"))) int Curl_formpostheader(void) {
    ALOGD("Curl_formpostheader() called");
    return 0;
}

/* Demangled: Curl_http_setup_conn */
extern "C" __attribute__((visibility("default"))) int Curl_http_setup_conn(void) {
    ALOGD("Curl_http_setup_conn() called");
    return 0;
}

/* Demangled: Curl_http */
extern "C" __attribute__((visibility("default"))) int Curl_http(void) {
    ALOGD("Curl_http() called");
    return 0;
}

/* Demangled: Curl_checkheaders */
extern "C" __attribute__((visibility("default"))) int Curl_checkheaders(void) {
    ALOGD("Curl_checkheaders() called");
    return 0;
}

/* Demangled: Curl_http_output_auth */
extern "C" __attribute__((visibility("default"))) int Curl_http_output_auth(void) {
    ALOGD("Curl_http_output_auth() called");
    return 0;
}

/* Demangled: Curl_compareheader */
extern "C" __attribute__((visibility("default"))) int Curl_compareheader(void) {
    ALOGD("Curl_compareheader() called");
    return 0;
}

/* Demangled: Curl_raw_equal */
extern "C" __attribute__((visibility("default"))) int Curl_raw_equal(void) {
    ALOGD("Curl_raw_equal() called");
    return 0;
}

/* Demangled: Curl_raw_nequal */
extern "C" __attribute__((visibility("default"))) int Curl_raw_nequal(void) {
    ALOGD("Curl_raw_nequal() called");
    return 0;
}

/* Demangled: Curl_raw_toupper */
extern "C" __attribute__((visibility("default"))) int Curl_raw_toupper(void) {
    ALOGD("Curl_raw_toupper() called");
    return 0;
}

/* Demangled: curlx_sotouz */
extern "C" __attribute__((visibility("default"))) int curlx_sotouz(void) {
    ALOGD("curlx_sotouz() called");
    return 0;
}

/* Demangled: Curl_add_bufferf */
extern "C" __attribute__((visibility("default"))) int Curl_add_bufferf(void) {
    ALOGD("Curl_add_bufferf() called");
    return 0;
}

/* Demangled: Curl_add_buffer */
extern "C" __attribute__((visibility("default"))) int Curl_add_buffer(void) {
    ALOGD("Curl_add_buffer() called");
    return 0;
}

/* Demangled: Curl_checkProxyheaders */
extern "C" __attribute__((visibility("default"))) int Curl_checkProxyheaders(void) {
    ALOGD("Curl_checkProxyheaders() called");
    return 0;
}

/* Demangled: Curl_add_timecondition */
extern "C" __attribute__((visibility("default"))) int Curl_add_timecondition(void) {
    ALOGD("Curl_add_timecondition() called");
    return 0;
}

/* Demangled: Curl_add_custom_headers */
extern "C" __attribute__((visibility("default"))) int Curl_add_custom_headers(void) {
    ALOGD("Curl_add_custom_headers() called");
    return 0;
}

/* Demangled: Curl_add_buffer_send */
extern "C" __attribute__((visibility("default"))) int Curl_add_buffer_send(void) {
    ALOGD("Curl_add_buffer_send() called");
    return 0;
}

/* Demangled: Curl_setup_transfer */
extern "C" __attribute__((visibility("default"))) int Curl_setup_transfer(void) {
    ALOGD("Curl_setup_transfer() called");
    return 0;
}

/* Demangled: Curl_http_done */
extern "C" __attribute__((visibility("default"))) int Curl_http_done(void) {
    ALOGD("Curl_http_done() called");
    return 0;
}

/* Demangled: Curl_unencode_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_unencode_cleanup(void) {
    ALOGD("Curl_unencode_cleanup() called");
    return 0;
}

/* Demangled: Curl_http_connect */
extern "C" __attribute__((visibility("default"))) int Curl_http_connect(void) {
    ALOGD("Curl_http_connect() called");
    return 0;
}

/* Demangled: Curl_proxy_connect */
extern "C" __attribute__((visibility("default"))) int Curl_proxy_connect(void) {
    ALOGD("Curl_proxy_connect() called");
    return 0;
}

/* Demangled: Curl_ssl_connect_nonblocking */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_connect_nonblocking(void) {
    ALOGD("Curl_ssl_connect_nonblocking() called");
    return 0;
}

/* Demangled: Curl_copy_header_value */
extern "C" __attribute__((visibility("default"))) int Curl_copy_header_value(void) {
    ALOGD("Curl_copy_header_value() called");
    return 0;
}

/* Demangled: Curl_http_auth_act */
extern "C" __attribute__((visibility("default"))) int Curl_http_auth_act(void) {
    ALOGD("Curl_http_auth_act() called");
    return 0;
}

/* Demangled: Curl_readrewind */
extern "C" __attribute__((visibility("default"))) int Curl_readrewind(void) {
    ALOGD("Curl_readrewind() called");
    return 0;
}

/* Demangled: Curl_output_ntlm */
extern "C" __attribute__((visibility("default"))) int Curl_output_ntlm(void) {
    ALOGD("Curl_output_ntlm() called");
    return 0;
}

/* Demangled: Curl_output_digest */
extern "C" __attribute__((visibility("default"))) int Curl_output_digest(void) {
    ALOGD("Curl_output_digest() called");
    return 0;
}

/* Demangled: Curl_http_input_auth */
extern "C" __attribute__((visibility("default"))) int Curl_http_input_auth(void) {
    ALOGD("Curl_http_input_auth() called");
    return 0;
}

/* Demangled: Curl_input_ntlm */
extern "C" __attribute__((visibility("default"))) int Curl_input_ntlm(void) {
    ALOGD("Curl_input_ntlm() called");
    return 0;
}

/* Demangled: Curl_input_digest */
extern "C" __attribute__((visibility("default"))) int Curl_input_digest(void) {
    ALOGD("Curl_input_digest() called");
    return 0;
}

/* Demangled: Curl_add_buffer_init */
extern "C" __attribute__((visibility("default"))) int Curl_add_buffer_init(void) {
    ALOGD("Curl_add_buffer_init() called");
    return 0;
}

/* Demangled: Curl_write */
extern "C" __attribute__((visibility("default"))) int Curl_write(void) {
    ALOGD("Curl_write() called");
    return 0;
}

/* Demangled: Curl_debug */
extern "C" __attribute__((visibility("default"))) int Curl_debug(void) {
    ALOGD("Curl_debug() called");
    return 0;
}

/* Demangled: curl_mvaprintf */
extern "C" __attribute__((visibility("default"))) int curl_mvaprintf(void) {
    ALOGD("curl_mvaprintf() called");
    return 0;
}

/* Exported Object: Curl_crealloc */
extern "C" __attribute__((visibility("default"))) void* Curl_crealloc = NULL;

/* Demangled: Curl_gmtime */
extern "C" __attribute__((visibility("default"))) int Curl_gmtime(void) {
    ALOGD("Curl_gmtime() called");
    return 0;
}

/* Exported Object: Curl_month */
extern "C" __attribute__((visibility("default"))) void* Curl_month = NULL;

/* Exported Object: Curl_wkday */
extern "C" __attribute__((visibility("default"))) void* Curl_wkday = NULL;

/* Demangled: Curl_http_readwrite_headers */
extern "C" __attribute__((visibility("default"))) int Curl_http_readwrite_headers(void) {
    ALOGD("Curl_http_readwrite_headers() called");
    return 0;
}

/* Demangled: Curl_client_write */
extern "C" __attribute__((visibility("default"))) int Curl_client_write(void) {
    ALOGD("Curl_client_write() called");
    return 0;
}

/* Demangled: Curl_pipeline_site_blacklisted */
extern "C" __attribute__((visibility("default"))) int Curl_pipeline_site_blacklisted(void) {
    ALOGD("Curl_pipeline_site_blacklisted() called");
    return 0;
}

/* Demangled: Curl_pipeline_server_blacklisted */
extern "C" __attribute__((visibility("default"))) int Curl_pipeline_server_blacklisted(void) {
    ALOGD("Curl_pipeline_server_blacklisted() called");
    return 0;
}

/* Demangled: Curl_httpchunk_init */
extern "C" __attribute__((visibility("default"))) int Curl_httpchunk_init(void) {
    ALOGD("Curl_httpchunk_init() called");
    return 0;
}

/* Demangled: curl_getdate */
extern "C" __attribute__((visibility("default"))) int curl_getdate(void) {
    ALOGD("curl_getdate() called");
    return 0;
}

/* Exported Object: Curl_handler_http */
extern "C" __attribute__((visibility("default"))) void* Curl_handler_http = NULL;

/* Exported Object: Curl_handler_https */
extern "C" __attribute__((visibility("default"))) void* Curl_handler_https = NULL;

/* Demangled: Curl_sendf */
extern "C" __attribute__((visibility("default"))) int Curl_sendf(void) {
    ALOGD("Curl_sendf() called");
    return 0;
}

/* Demangled: Curl_send_plain */
extern "C" __attribute__((visibility("default"))) int Curl_send_plain(void) {
    ALOGD("Curl_send_plain() called");
    return 0;
}

/* Demangled: Curl_strerror */
extern "C" __attribute__((visibility("default"))) int Curl_strerror(void) {
    ALOGD("Curl_strerror() called");
    return 0;
}

/* Demangled: Curl_write_plain */
extern "C" __attribute__((visibility("default"))) int Curl_write_plain(void) {
    ALOGD("Curl_write_plain() called");
    return 0;
}

/* Demangled: Curl_recv_plain */
extern "C" __attribute__((visibility("default"))) int Curl_recv_plain(void) {
    ALOGD("Curl_recv_plain() called");
    return 0;
}

/* Demangled: Curl_read_plain */
extern "C" __attribute__((visibility("default"))) int Curl_read_plain(void) {
    ALOGD("Curl_read_plain() called");
    return 0;
}

/* Demangled: Curl_read */
extern "C" __attribute__((visibility("default"))) int Curl_read(void) {
    ALOGD("Curl_read() called");
    return 0;
}

/* Demangled: Curl_multi_pipeline_enabled */
extern "C" __attribute__((visibility("default"))) int Curl_multi_pipeline_enabled(void) {
    ALOGD("Curl_multi_pipeline_enabled() called");
    return 0;
}

/* Demangled: Curl_freeset */
extern "C" __attribute__((visibility("default"))) int Curl_freeset(void) {
    ALOGD("Curl_freeset() called");
    return 0;
}

/* Demangled: Curl_dupset */
extern "C" __attribute__((visibility("default"))) int Curl_dupset(void) {
    ALOGD("Curl_dupset() called");
    return 0;
}

/* Demangled: Curl_close */
extern "C" __attribute__((visibility("default"))) int Curl_close(void) {
    ALOGD("Curl_close() called");
    return 0;
}

/* Demangled: Curl_expire */
extern "C" __attribute__((visibility("default"))) int Curl_expire(void) {
    ALOGD("Curl_expire() called");
    return 0;
}

/* Demangled: curl_multi_remove_handle */
extern "C" __attribute__((visibility("default"))) int curl_multi_remove_handle(void) {
    ALOGD("curl_multi_remove_handle() called");
    return 0;
}

/* Demangled: curl_multi_cleanup */
extern "C" __attribute__((visibility("default"))) int curl_multi_cleanup(void) {
    ALOGD("curl_multi_cleanup() called");
    return 0;
}

/* Demangled: Curl_llist_destroy */
extern "C" __attribute__((visibility("default"))) int Curl_llist_destroy(void) {
    ALOGD("Curl_llist_destroy() called");
    return 0;
}

/* Demangled: Curl_ssl_close_all */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_close_all(void) {
    ALOGD("Curl_ssl_close_all() called");
    return 0;
}

/* Demangled: Curl_ssl_free_certinfo */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_free_certinfo(void) {
    ALOGD("Curl_ssl_free_certinfo() called");
    return 0;
}

/* Demangled: Curl_digest_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_digest_cleanup(void) {
    ALOGD("Curl_digest_cleanup() called");
    return 0;
}

/* Demangled: Curl_free_request_state */
extern "C" __attribute__((visibility("default"))) int Curl_free_request_state(void) {
    ALOGD("Curl_free_request_state() called");
    return 0;
}

/* Demangled: Curl_init_userdefined */
extern "C" __attribute__((visibility("default"))) int Curl_init_userdefined(void) {
    ALOGD("Curl_init_userdefined() called");
    return 0;
}

/* Demangled: Curl_open */
extern "C" __attribute__((visibility("default"))) int Curl_open(void) {
    ALOGD("Curl_open() called");
    return 0;
}

/* Demangled: Curl_setopt */
extern "C" __attribute__((visibility("default"))) int Curl_setopt(void) {
    ALOGD("Curl_setopt() called");
    return 0;
}

/* Demangled: Curl_ssl_set_engine */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_set_engine(void) {
    ALOGD("Curl_ssl_set_engine() called");
    return 0;
}

/* Demangled: Curl_set_dns_servers */
extern "C" __attribute__((visibility("default"))) int Curl_set_dns_servers(void) {
    ALOGD("Curl_set_dns_servers() called");
    return 0;
}

/* Demangled: Curl_set_dns_interface */
extern "C" __attribute__((visibility("default"))) int Curl_set_dns_interface(void) {
    ALOGD("Curl_set_dns_interface() called");
    return 0;
}

/* Demangled: Curl_set_dns_local_ip4 */
extern "C" __attribute__((visibility("default"))) int Curl_set_dns_local_ip4(void) {
    ALOGD("Curl_set_dns_local_ip4() called");
    return 0;
}

/* Demangled: Curl_set_dns_local_ip6 */
extern "C" __attribute__((visibility("default"))) int Curl_set_dns_local_ip6(void) {
    ALOGD("Curl_set_dns_local_ip6() called");
    return 0;
}

/* Demangled: Curl_ssl_set_engine_default */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_set_engine_default(void) {
    ALOGD("Curl_ssl_set_engine_default() called");
    return 0;
}

/* Demangled: curlx_sltous */
extern "C" __attribute__((visibility("default"))) int curlx_sltous(void) {
    ALOGD("curlx_sltous() called");
    return 0;
}

/* Demangled: curlx_sltosi */
extern "C" __attribute__((visibility("default"))) int curlx_sltosi(void) {
    ALOGD("curlx_sltosi() called");
    return 0;
}

/* Demangled: Curl_disconnect */
extern "C" __attribute__((visibility("default"))) int Curl_disconnect(void) {
    ALOGD("Curl_disconnect() called");
    return 0;
}

/* Demangled: Curl_http_ntlm_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_http_ntlm_cleanup(void) {
    ALOGD("Curl_http_ntlm_cleanup() called");
    return 0;
}

/* Demangled: Curl_conncache_remove_conn */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_remove_conn(void) {
    ALOGD("Curl_conncache_remove_conn() called");
    return 0;
}

/* Demangled: Curl_ssl_close */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_close(void) {
    ALOGD("Curl_ssl_close() called");
    return 0;
}

/* Demangled: Curl_speedinit */
extern "C" __attribute__((visibility("default"))) int Curl_speedinit(void) {
    ALOGD("Curl_speedinit() called");
    return 0;
}

/* Demangled: Curl_multi_handlePipeBreak */
extern "C" __attribute__((visibility("default"))) int Curl_multi_handlePipeBreak(void) {
    ALOGD("Curl_multi_handlePipeBreak() called");
    return 0;
}

/* Demangled: Curl_llist_remove */
extern "C" __attribute__((visibility("default"))) int Curl_llist_remove(void) {
    ALOGD("Curl_llist_remove() called");
    return 0;
}

/* Demangled: Curl_closesocket */
extern "C" __attribute__((visibility("default"))) int Curl_closesocket(void) {
    ALOGD("Curl_closesocket() called");
    return 0;
}

/* Demangled: Curl_free_ssl_config */
extern "C" __attribute__((visibility("default"))) int Curl_free_ssl_config(void) {
    ALOGD("Curl_free_ssl_config() called");
    return 0;
}

/* Demangled: Curl_isPipeliningEnabled */
extern "C" __attribute__((visibility("default"))) int Curl_isPipeliningEnabled(void) {
    ALOGD("Curl_isPipeliningEnabled() called");
    return 0;
}

/* Demangled: Curl_addHandleToPipeline */
extern "C" __attribute__((visibility("default"))) int Curl_addHandleToPipeline(void) {
    ALOGD("Curl_addHandleToPipeline() called");
    return 0;
}

/* Demangled: Curl_llist_insert_next */
extern "C" __attribute__((visibility("default"))) int Curl_llist_insert_next(void) {
    ALOGD("Curl_llist_insert_next() called");
    return 0;
}

/* Demangled: Curl_removeHandleFromPipeline */
extern "C" __attribute__((visibility("default"))) int Curl_removeHandleFromPipeline(void) {
    ALOGD("Curl_removeHandleFromPipeline() called");
    return 0;
}

/* Demangled: Curl_getoff_all_pipelines */
extern "C" __attribute__((visibility("default"))) int Curl_getoff_all_pipelines(void) {
    ALOGD("Curl_getoff_all_pipelines() called");
    return 0;
}

/* Demangled: Curl_connected_proxy */
extern "C" __attribute__((visibility("default"))) int Curl_connected_proxy(void) {
    ALOGD("Curl_connected_proxy() called");
    return 0;
}

/* Demangled: Curl_SOCKS5 */
extern "C" __attribute__((visibility("default"))) int Curl_SOCKS5(void) {
    ALOGD("Curl_SOCKS5() called");
    return 0;
}

/* Demangled: Curl_SOCKS4 */
extern "C" __attribute__((visibility("default"))) int Curl_SOCKS4(void) {
    ALOGD("Curl_SOCKS4() called");
    return 0;
}

/* Demangled: Curl_verboseconnect */
extern "C" __attribute__((visibility("default"))) int Curl_verboseconnect(void) {
    ALOGD("Curl_verboseconnect() called");
    return 0;
}

/* Demangled: Curl_protocol_getsock */
extern "C" __attribute__((visibility("default"))) int Curl_protocol_getsock(void) {
    ALOGD("Curl_protocol_getsock() called");
    return 0;
}

/* Demangled: Curl_doing_getsock */
extern "C" __attribute__((visibility("default"))) int Curl_doing_getsock(void) {
    ALOGD("Curl_doing_getsock() called");
    return 0;
}

/* Demangled: Curl_protocol_connecting */
extern "C" __attribute__((visibility("default"))) int Curl_protocol_connecting(void) {
    ALOGD("Curl_protocol_connecting() called");
    return 0;
}

/* Demangled: Curl_protocol_doing */
extern "C" __attribute__((visibility("default"))) int Curl_protocol_doing(void) {
    ALOGD("Curl_protocol_doing() called");
    return 0;
}

/* Demangled: Curl_protocol_connect */
extern "C" __attribute__((visibility("default"))) int Curl_protocol_connect(void) {
    ALOGD("Curl_protocol_connect() called");
    return 0;
}

/* Demangled: Curl_setup_conn */
extern "C" __attribute__((visibility("default"))) int Curl_setup_conn(void) {
    ALOGD("Curl_setup_conn() called");
    return 0;
}

/* Demangled: Curl_updateconninfo */
extern "C" __attribute__((visibility("default"))) int Curl_updateconninfo(void) {
    ALOGD("Curl_updateconninfo() called");
    return 0;
}

/* Demangled: Curl_connecthost */
extern "C" __attribute__((visibility("default"))) int Curl_connecthost(void) {
    ALOGD("Curl_connecthost() called");
    return 0;
}

/* Demangled: Curl_connect */
extern "C" __attribute__((visibility("default"))) int Curl_connect(void) {
    ALOGD("Curl_connect() called");
    return 0;
}

/* Demangled: Curl_multi_max_host_connections */
extern "C" __attribute__((visibility("default"))) int Curl_multi_max_host_connections(void) {
    ALOGD("Curl_multi_max_host_connections() called");
    return 0;
}

/* Demangled: Curl_multi_max_total_connections */
extern "C" __attribute__((visibility("default"))) int Curl_multi_max_total_connections(void) {
    ALOGD("Curl_multi_max_total_connections() called");
    return 0;
}

/* Demangled: Curl_llist_alloc */
extern "C" __attribute__((visibility("default"))) int Curl_llist_alloc(void) {
    ALOGD("Curl_llist_alloc() called");
    return 0;
}

/* Demangled: Curl_dedotdotify */
extern "C" __attribute__((visibility("default"))) int Curl_dedotdotify(void) {
    ALOGD("Curl_dedotdotify() called");
    return 0;
}

/* Demangled: curl_easy_unescape */
extern "C" __attribute__((visibility("default"))) int curl_easy_unescape(void) {
    ALOGD("curl_easy_unescape() called");
    return 0;
}

/* Demangled: curl_getenv */
extern "C" __attribute__((visibility("default"))) int curl_getenv(void) {
    ALOGD("curl_getenv() called");
    return 0;
}

/* Demangled: Curl_strntoupper */
extern "C" __attribute__((visibility("default"))) int Curl_strntoupper(void) {
    ALOGD("Curl_strntoupper() called");
    return 0;
}

/* Demangled: curlx_ultous */
extern "C" __attribute__((visibility("default"))) int curlx_ultous(void) {
    ALOGD("curlx_ultous() called");
    return 0;
}

/* Demangled: Curl_parsenetrc */
extern "C" __attribute__((visibility("default"))) int Curl_parsenetrc(void) {
    ALOGD("Curl_parsenetrc() called");
    return 0;
}

/* Demangled: Curl_clone_ssl_config */
extern "C" __attribute__((visibility("default"))) int Curl_clone_ssl_config(void) {
    ALOGD("Curl_clone_ssl_config() called");
    return 0;
}

/* Demangled: Curl_conncache_find_bundle */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_find_bundle(void) {
    ALOGD("Curl_conncache_find_bundle() called");
    return 0;
}

/* Demangled: Curl_multi_max_pipeline_length */
extern "C" __attribute__((visibility("default"))) int Curl_multi_max_pipeline_length(void) {
    ALOGD("Curl_multi_max_pipeline_length() called");
    return 0;
}

/* Demangled: Curl_socket_check */
extern "C" __attribute__((visibility("default"))) int Curl_socket_check(void) {
    ALOGD("Curl_socket_check() called");
    return 0;
}

/* Demangled: Curl_ssl_config_matches */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_config_matches(void) {
    ALOGD("Curl_ssl_config_matches() called");
    return 0;
}

/* Demangled: Curl_pipeline_penalized */
extern "C" __attribute__((visibility("default"))) int Curl_pipeline_penalized(void) {
    ALOGD("Curl_pipeline_penalized() called");
    return 0;
}

/* Demangled: Curl_conncache_add_conn */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_add_conn(void) {
    ALOGD("Curl_conncache_add_conn() called");
    return 0;
}

/* Demangled: Curl_persistconninfo */
extern "C" __attribute__((visibility("default"))) int Curl_persistconninfo(void) {
    ALOGD("Curl_persistconninfo() called");
    return 0;
}

/* Demangled: Curl_timeleft */
extern "C" __attribute__((visibility("default"))) int Curl_timeleft(void) {
    ALOGD("Curl_timeleft() called");
    return 0;
}

/* Demangled: Curl_done */
extern "C" __attribute__((visibility("default"))) int Curl_done(void) {
    ALOGD("Curl_done() called");
    return 0;
}

/* Demangled: Curl_do */
extern "C" __attribute__((visibility("default"))) int Curl_do(void) {
    ALOGD("Curl_do() called");
    return 0;
}

/* Demangled: Curl_reconnect_request */
extern "C" __attribute__((visibility("default"))) int Curl_reconnect_request(void) {
    ALOGD("Curl_reconnect_request() called");
    return 0;
}

/* Demangled: Curl_do_more */
extern "C" __attribute__((visibility("default"))) int Curl_do_more(void) {
    ALOGD("Curl_do_more() called");
    return 0;
}

/* Demangled: Curl_hash_start_iterate */
extern "C" __attribute__((visibility("default"))) int Curl_hash_start_iterate(void) {
    ALOGD("Curl_hash_start_iterate() called");
    return 0;
}

/* Demangled: Curl_hash_next_element */
extern "C" __attribute__((visibility("default"))) int Curl_hash_next_element(void) {
    ALOGD("Curl_hash_next_element() called");
    return 0;
}

/* Demangled: Curl_if_is_interface_name */
extern "C" __attribute__((visibility("default"))) int Curl_if_is_interface_name(void) {
    ALOGD("Curl_if_is_interface_name() called");
    return 0;
}

/* Demangled: Curl_if2ip */
extern "C" __attribute__((visibility("default"))) int Curl_if2ip(void) {
    ALOGD("Curl_if2ip() called");
    return 0;
}

/* Demangled: Curl_speedcheck */
extern "C" __attribute__((visibility("default"))) int Curl_speedcheck(void) {
    ALOGD("Curl_speedcheck() called");
    return 0;
}

/* Demangled: curl_version */
extern "C" __attribute__((visibility("default"))) int curl_version(void) {
    ALOGD("curl_version() called");
    return 0;
}

/* Demangled: Curl_ssl_version */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_version(void) {
    ALOGD("Curl_ssl_version() called");
    return 0;
}

/* Demangled: curl_version_info */
extern "C" __attribute__((visibility("default"))) int curl_version_info(void) {
    ALOGD("curl_version_info() called");
    return 0;
}

/* Demangled: curl_escape */
extern "C" __attribute__((visibility("default"))) int curl_escape(void) {
    ALOGD("curl_escape() called");
    return 0;
}

/* Demangled: curl_easy_escape */
extern "C" __attribute__((visibility("default"))) int curl_easy_escape(void) {
    ALOGD("curl_easy_escape() called");
    return 0;
}

/* Demangled: curl_unescape */
extern "C" __attribute__((visibility("default"))) int curl_unescape(void) {
    ALOGD("curl_unescape() called");
    return 0;
}

/* Demangled: Curl_urldecode */
extern "C" __attribute__((visibility("default"))) int Curl_urldecode(void) {
    ALOGD("Curl_urldecode() called");
    return 0;
}

/* Demangled: curlx_uztosi */
extern "C" __attribute__((visibility("default"))) int curlx_uztosi(void) {
    ALOGD("curlx_uztosi() called");
    return 0;
}

/* Demangled: curl_free */
extern "C" __attribute__((visibility("default"))) int curl_free(void) {
    ALOGD("curl_free() called");
    return 0;
}

/* Demangled: curl_msprintf */
extern "C" __attribute__((visibility("default"))) int curl_msprintf(void) {
    ALOGD("curl_msprintf() called");
    return 0;
}

/* Demangled: curl_mprintf */
extern "C" __attribute__((visibility("default"))) int curl_mprintf(void) {
    ALOGD("curl_mprintf() called");
    return 0;
}

/* Demangled: curl_mvsprintf */
extern "C" __attribute__((visibility("default"))) int curl_mvsprintf(void) {
    ALOGD("curl_mvsprintf() called");
    return 0;
}

/* Demangled: curl_mvprintf */
extern "C" __attribute__((visibility("default"))) int curl_mvprintf(void) {
    ALOGD("curl_mvprintf() called");
    return 0;
}

/* Demangled: curl_mvfprintf */
extern "C" __attribute__((visibility("default"))) int curl_mvfprintf(void) {
    ALOGD("curl_mvfprintf() called");
    return 0;
}

/* Demangled: Curl_initinfo */
extern "C" __attribute__((visibility("default"))) int Curl_initinfo(void) {
    ALOGD("Curl_initinfo() called");
    return 0;
}

/* Demangled: Curl_getinfo */
extern "C" __attribute__((visibility("default"))) int Curl_getinfo(void) {
    ALOGD("Curl_getinfo() called");
    return 0;
}

/* Demangled: Curl_ssl_engines_list */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_engines_list(void) {
    ALOGD("Curl_ssl_engines_list() called");
    return 0;
}

/* Demangled: Curl_getconnectinfo */
extern "C" __attribute__((visibility("default"))) int Curl_getconnectinfo(void) {
    ALOGD("Curl_getconnectinfo() called");
    return 0;
}

/* Demangled: Curl_fillreadbuffer */
extern "C" __attribute__((visibility("default"))) int Curl_fillreadbuffer(void) {
    ALOGD("Curl_fillreadbuffer() called");
    return 0;
}

/* Demangled: Curl_meets_timecondition */
extern "C" __attribute__((visibility("default"))) int Curl_meets_timecondition(void) {
    ALOGD("Curl_meets_timecondition() called");
    return 0;
}

/* Demangled: Curl_readwrite */
extern "C" __attribute__((visibility("default"))) int Curl_readwrite(void) {
    ALOGD("Curl_readwrite() called");
    return 0;
}

/* Demangled: Curl_httpchunk_read */
extern "C" __attribute__((visibility("default"))) int Curl_httpchunk_read(void) {
    ALOGD("Curl_httpchunk_read() called");
    return 0;
}

/* Demangled: Curl_unencode_gzip_write */
extern "C" __attribute__((visibility("default"))) int Curl_unencode_gzip_write(void) {
    ALOGD("Curl_unencode_gzip_write() called");
    return 0;
}

/* Demangled: Curl_ssl_data_pending */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_data_pending(void) {
    ALOGD("Curl_ssl_data_pending() called");
    return 0;
}

/* Demangled: Curl_unencode_deflate_write */
extern "C" __attribute__((visibility("default"))) int Curl_unencode_deflate_write(void) {
    ALOGD("Curl_unencode_deflate_write() called");
    return 0;
}

/* Demangled: Curl_chunked_strerror */
extern "C" __attribute__((visibility("default"))) int Curl_chunked_strerror(void) {
    ALOGD("Curl_chunked_strerror() called");
    return 0;
}

/* Demangled: Curl_single_getsock */
extern "C" __attribute__((visibility("default"))) int Curl_single_getsock(void) {
    ALOGD("Curl_single_getsock() called");
    return 0;
}

/* Demangled: Curl_sleep_time */
extern "C" __attribute__((visibility("default"))) int Curl_sleep_time(void) {
    ALOGD("Curl_sleep_time() called");
    return 0;
}

/* Demangled: Curl_pretransfer */
extern "C" __attribute__((visibility("default"))) int Curl_pretransfer(void) {
    ALOGD("Curl_pretransfer() called");
    return 0;
}

/* Demangled: Curl_ssl_initsessions */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_initsessions(void) {
    ALOGD("Curl_ssl_initsessions() called");
    return 0;
}

/* Demangled: Curl_posttransfer */
extern "C" __attribute__((visibility("default"))) int Curl_posttransfer(void) {
    ALOGD("Curl_posttransfer() called");
    return 0;
}

/* Demangled: Curl_follow */
extern "C" __attribute__((visibility("default"))) int Curl_follow(void) {
    ALOGD("Curl_follow() called");
    return 0;
}

/* Demangled: Curl_retry_request */
extern "C" __attribute__((visibility("default"))) int Curl_retry_request(void) {
    ALOGD("Curl_retry_request() called");
    return 0;
}

/* Demangled: curl_strnequal */
extern "C" __attribute__((visibility("default"))) int curl_strnequal(void) {
    ALOGD("curl_strnequal() called");
    return 0;
}

/* Demangled: curl_global_init */
extern "C" __attribute__((visibility("default"))) int curl_global_init(void) {
    ALOGD("curl_global_init() called");
    return 0;
}

/* Demangled: Curl_ssl_init */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_init(void) {
    ALOGD("Curl_ssl_init() called");
    return 0;
}

/* Exported Object: Curl_ack_eintr */
extern "C" __attribute__((visibility("default"))) void* Curl_ack_eintr = NULL;

/* Demangled: curl_global_init_mem */
extern "C" __attribute__((visibility("default"))) int curl_global_init_mem(void) {
    ALOGD("curl_global_init_mem() called");
    return 0;
}

/* Demangled: curl_global_cleanup */
extern "C" __attribute__((visibility("default"))) int curl_global_cleanup(void) {
    ALOGD("curl_global_cleanup() called");
    return 0;
}

/* Demangled: Curl_ssl_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_cleanup(void) {
    ALOGD("Curl_ssl_cleanup() called");
    return 0;
}

/* Demangled: curl_easy_init */
extern "C" __attribute__((visibility("default"))) int curl_easy_init(void) {
    ALOGD("curl_easy_init() called");
    return 0;
}

/* Demangled: curl_easy_setopt */
extern "C" __attribute__((visibility("default"))) int curl_easy_setopt(void) {
    ALOGD("curl_easy_setopt() called");
    return 0;
}

/* Demangled: curl_easy_perform */
extern "C" __attribute__((visibility("default"))) int curl_easy_perform(void) {
    ALOGD("curl_easy_perform() called");
    return 0;
}

/* Demangled: Curl_multi_handle */
extern "C" __attribute__((visibility("default"))) int Curl_multi_handle(void) {
    ALOGD("Curl_multi_handle() called");
    return 0;
}

/* Demangled: curl_multi_setopt */
extern "C" __attribute__((visibility("default"))) int curl_multi_setopt(void) {
    ALOGD("curl_multi_setopt() called");
    return 0;
}

/* Demangled: curl_multi_add_handle */
extern "C" __attribute__((visibility("default"))) int curl_multi_add_handle(void) {
    ALOGD("curl_multi_add_handle() called");
    return 0;
}

/* Demangled: curl_multi_wait */
extern "C" __attribute__((visibility("default"))) int curl_multi_wait(void) {
    ALOGD("curl_multi_wait() called");
    return 0;
}

/* Demangled: Curl_wait_ms */
extern "C" __attribute__((visibility("default"))) int Curl_wait_ms(void) {
    ALOGD("Curl_wait_ms() called");
    return 0;
}

/* Demangled: curl_multi_perform */
extern "C" __attribute__((visibility("default"))) int curl_multi_perform(void) {
    ALOGD("curl_multi_perform() called");
    return 0;
}

/* Demangled: curl_multi_info_read */
extern "C" __attribute__((visibility("default"))) int curl_multi_info_read(void) {
    ALOGD("curl_multi_info_read() called");
    return 0;
}

/* Demangled: curl_easy_cleanup */
extern "C" __attribute__((visibility("default"))) int curl_easy_cleanup(void) {
    ALOGD("curl_easy_cleanup() called");
    return 0;
}

/* Demangled: curl_easy_getinfo */
extern "C" __attribute__((visibility("default"))) int curl_easy_getinfo(void) {
    ALOGD("curl_easy_getinfo() called");
    return 0;
}

/* Demangled: curl_easy_duphandle */
extern "C" __attribute__((visibility("default"))) int curl_easy_duphandle(void) {
    ALOGD("curl_easy_duphandle() called");
    return 0;
}

/* Demangled: curl_slist_free_all */
extern "C" __attribute__((visibility("default"))) int curl_slist_free_all(void) {
    ALOGD("curl_slist_free_all() called");
    return 0;
}

/* Demangled: Curl_slist_duplicate */
extern "C" __attribute__((visibility("default"))) int Curl_slist_duplicate(void) {
    ALOGD("Curl_slist_duplicate() called");
    return 0;
}

/* Demangled: curl_easy_reset */
extern "C" __attribute__((visibility("default"))) int curl_easy_reset(void) {
    ALOGD("curl_easy_reset() called");
    return 0;
}

/* Demangled: curl_easy_pause */
extern "C" __attribute__((visibility("default"))) int curl_easy_pause(void) {
    ALOGD("curl_easy_pause() called");
    return 0;
}

/* Demangled: curl_easy_recv */
extern "C" __attribute__((visibility("default"))) int curl_easy_recv(void) {
    ALOGD("curl_easy_recv() called");
    return 0;
}

/* Demangled: curl_easy_send */
extern "C" __attribute__((visibility("default"))) int curl_easy_send(void) {
    ALOGD("curl_easy_send() called");
    return 0;
}

/* Demangled: Curl_fnmatch */
extern "C" __attribute__((visibility("default"))) int Curl_fnmatch(void) {
    ALOGD("Curl_fnmatch() called");
    return 0;
}

/* Demangled: Curl_fileinfo_alloc */
extern "C" __attribute__((visibility("default"))) int Curl_fileinfo_alloc(void) {
    ALOGD("Curl_fileinfo_alloc() called");
    return 0;
}

/* Demangled: Curl_fileinfo_dtor */
extern "C" __attribute__((visibility("default"))) int Curl_fileinfo_dtor(void) {
    ALOGD("Curl_fileinfo_dtor() called");
    return 0;
}

/* Demangled: Curl_wildcard_init */
extern "C" __attribute__((visibility("default"))) int Curl_wildcard_init(void) {
    ALOGD("Curl_wildcard_init() called");
    return 0;
}

/* Demangled: Curl_wildcard_dtor */
extern "C" __attribute__((visibility("default"))) int Curl_wildcard_dtor(void) {
    ALOGD("Curl_wildcard_dtor() called");
    return 0;
}

/* Demangled: Curl_is_connected */
extern "C" __attribute__((visibility("default"))) int Curl_is_connected(void) {
    ALOGD("Curl_is_connected() called");
    return 0;
}

/* Demangled: Curl_multi_closed */
extern "C" __attribute__((visibility("default"))) int Curl_multi_closed(void) {
    ALOGD("Curl_multi_closed() called");
    return 0;
}

/* Demangled: Curl_socket */
extern "C" __attribute__((visibility("default"))) int Curl_socket(void) {
    ALOGD("Curl_socket() called");
    return 0;
}

/* Demangled: curlx_nonblock */
extern "C" __attribute__((visibility("default"))) int curlx_nonblock(void) {
    ALOGD("curlx_nonblock() called");
    return 0;
}

/* Demangled: Curl_conncache_foreach */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_foreach(void) {
    ALOGD("Curl_conncache_foreach() called");
    return 0;
}

/* Demangled: Curl_ssl_check_cxn */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_check_cxn(void) {
    ALOGD("Curl_ssl_check_cxn() called");
    return 0;
}

/* Demangled: Curl_llist_count */
extern "C" __attribute__((visibility("default"))) int Curl_llist_count(void) {
    ALOGD("Curl_llist_count() called");
    return 0;
}

/* Demangled: Curl_llist_move */
extern "C" __attribute__((visibility("default"))) int Curl_llist_move(void) {
    ALOGD("Curl_llist_move() called");
    return 0;
}

/* Demangled: Curl_hash_delete */
extern "C" __attribute__((visibility("default"))) int Curl_hash_delete(void) {
    ALOGD("Curl_hash_delete() called");
    return 0;
}

/* Demangled: Curl_hash_destroy */
extern "C" __attribute__((visibility("default"))) int Curl_hash_destroy(void) {
    ALOGD("Curl_hash_destroy() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: Curl_conncache_init */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_init(void) {
    ALOGD("Curl_conncache_init() called");
    return 0;
}

/* Demangled: Curl_conncache_destroy */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_destroy(void) {
    ALOGD("Curl_conncache_destroy() called");
    return 0;
}

/* Demangled: curl_multi_init */
extern "C" __attribute__((visibility("default"))) int curl_multi_init(void) {
    ALOGD("curl_multi_init() called");
    return 0;
}

/* Demangled: Curl_splayremovebyaddr */
extern "C" __attribute__((visibility("default"))) int Curl_splayremovebyaddr(void) {
    ALOGD("Curl_splayremovebyaddr() called");
    return 0;
}

/* Demangled: Curl_splayinsert */
extern "C" __attribute__((visibility("default"))) int Curl_splayinsert(void) {
    ALOGD("Curl_splayinsert() called");
    return 0;
}

/* Demangled: curl_multi_fdset */
extern "C" __attribute__((visibility("default"))) int curl_multi_fdset(void) {
    ALOGD("curl_multi_fdset() called");
    return 0;
}

/* Demangled: Curl_poll */
extern "C" __attribute__((visibility("default"))) int Curl_poll(void) {
    ALOGD("Curl_poll() called");
    return 0;
}

/* Demangled: Curl_splay */
extern "C" __attribute__((visibility("default"))) int Curl_splay(void) {
    ALOGD("Curl_splay() called");
    return 0;
}

/* Demangled: Curl_splaygetbest */
extern "C" __attribute__((visibility("default"))) int Curl_splaygetbest(void) {
    ALOGD("Curl_splaygetbest() called");
    return 0;
}

/* Demangled: Curl_move_handle_from_send_to_recv_pipe */
extern "C" __attribute__((visibility("default"))) int Curl_move_handle_from_send_to_recv_pipe(void) {
    ALOGD("Curl_move_handle_from_send_to_recv_pipe() called");
    return 0;
}

/* Demangled: Curl_multi_process_pending_handles */
extern "C" __attribute__((visibility("default"))) int Curl_multi_process_pending_handles(void) {
    ALOGD("Curl_multi_process_pending_handles() called");
    return 0;
}

/* Demangled: Curl_add_handle_to_pipeline */
extern "C" __attribute__((visibility("default"))) int Curl_add_handle_to_pipeline(void) {
    ALOGD("Curl_add_handle_to_pipeline() called");
    return 0;
}

/* Demangled: Curl_conncache_find_first_connection */
extern "C" __attribute__((visibility("default"))) int Curl_conncache_find_first_connection(void) {
    ALOGD("Curl_conncache_find_first_connection() called");
    return 0;
}

/* Demangled: Curl_pipeline_set_site_blacklist */
extern "C" __attribute__((visibility("default"))) int Curl_pipeline_set_site_blacklist(void) {
    ALOGD("Curl_pipeline_set_site_blacklist() called");
    return 0;
}

/* Demangled: Curl_pipeline_set_server_blacklist */
extern "C" __attribute__((visibility("default"))) int Curl_pipeline_set_server_blacklist(void) {
    ALOGD("Curl_pipeline_set_server_blacklist() called");
    return 0;
}

/* Demangled: curl_multi_socket */
extern "C" __attribute__((visibility("default"))) int curl_multi_socket(void) {
    ALOGD("curl_multi_socket() called");
    return 0;
}

/* Demangled: curl_multi_socket_action */
extern "C" __attribute__((visibility("default"))) int curl_multi_socket_action(void) {
    ALOGD("curl_multi_socket_action() called");
    return 0;
}

/* Demangled: curl_multi_socket_all */
extern "C" __attribute__((visibility("default"))) int curl_multi_socket_all(void) {
    ALOGD("curl_multi_socket_all() called");
    return 0;
}

/* Demangled: curl_multi_timeout */
extern "C" __attribute__((visibility("default"))) int curl_multi_timeout(void) {
    ALOGD("curl_multi_timeout() called");
    return 0;
}

/* Demangled: Curl_multi_set_easy_connection */
extern "C" __attribute__((visibility("default"))) int Curl_multi_set_easy_connection(void) {
    ALOGD("Curl_multi_set_easy_connection() called");
    return 0;
}

/* Demangled: curl_multi_assign */
extern "C" __attribute__((visibility("default"))) int curl_multi_assign(void) {
    ALOGD("curl_multi_assign() called");
    return 0;
}

/* Demangled: Curl_multi_content_length_penalty_size */
extern "C" __attribute__((visibility("default"))) int Curl_multi_content_length_penalty_size(void) {
    ALOGD("Curl_multi_content_length_penalty_size() called");
    return 0;
}

/* Demangled: Curl_multi_chunk_length_penalty_size */
extern "C" __attribute__((visibility("default"))) int Curl_multi_chunk_length_penalty_size(void) {
    ALOGD("Curl_multi_chunk_length_penalty_size() called");
    return 0;
}

/* Demangled: Curl_multi_pipelining_site_bl */
extern "C" __attribute__((visibility("default"))) int Curl_multi_pipelining_site_bl(void) {
    ALOGD("Curl_multi_pipelining_site_bl() called");
    return 0;
}

/* Demangled: Curl_multi_pipelining_server_bl */
extern "C" __attribute__((visibility("default"))) int Curl_multi_pipelining_server_bl(void) {
    ALOGD("Curl_multi_pipelining_server_bl() called");
    return 0;
}

/* Demangled: __aeabi_idivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_idivmod(void) {
    ALOGD("__aeabi_idivmod() called");
    return 0;
}

/* Demangled: curl_share_init */
extern "C" __attribute__((visibility("default"))) int curl_share_init(void) {
    ALOGD("curl_share_init() called");
    return 0;
}

/* Demangled: curl_share_setopt */
extern "C" __attribute__((visibility("default"))) int curl_share_setopt(void) {
    ALOGD("curl_share_setopt() called");
    return 0;
}

/* Demangled: curl_share_cleanup */
extern "C" __attribute__((visibility("default"))) int curl_share_cleanup(void) {
    ALOGD("curl_share_cleanup() called");
    return 0;
}

/* Demangled: Curl_ssl_kill_session */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_kill_session(void) {
    ALOGD("Curl_ssl_kill_session() called");
    return 0;
}

/* Demangled: Curl_md5it */
extern "C" __attribute__((visibility("default"))) int Curl_md5it(void) {
    ALOGD("Curl_md5it() called");
    return 0;
}

/* Demangled: curlx_uztoui */
extern "C" __attribute__((visibility("default"))) int curlx_uztoui(void) {
    ALOGD("curlx_uztoui() called");
    return 0;
}

/* Demangled: Curl_MD5_init */
extern "C" __attribute__((visibility("default"))) int Curl_MD5_init(void) {
    ALOGD("Curl_MD5_init() called");
    return 0;
}

/* Demangled: Curl_MD5_update */
extern "C" __attribute__((visibility("default"))) int Curl_MD5_update(void) {
    ALOGD("Curl_MD5_update() called");
    return 0;
}

/* Demangled: Curl_MD5_final */
extern "C" __attribute__((visibility("default"))) int Curl_MD5_final(void) {
    ALOGD("Curl_MD5_final() called");
    return 0;
}

/* Exported Object: Curl_HMAC_MD5 */
extern "C" __attribute__((visibility("default"))) void* Curl_HMAC_MD5 = NULL;

/* Exported Object: Curl_DIGEST_MD5 */
extern "C" __attribute__((visibility("default"))) void* Curl_DIGEST_MD5 = NULL;

/* Demangled: curl_easy_strerror */
extern "C" __attribute__((visibility("default"))) int curl_easy_strerror(void) {
    ALOGD("curl_easy_strerror() called");
    return 0;
}

/* Demangled: curl_multi_strerror */
extern "C" __attribute__((visibility("default"))) int curl_multi_strerror(void) {
    ALOGD("curl_multi_strerror() called");
    return 0;
}

/* Demangled: curl_share_strerror */
extern "C" __attribute__((visibility("default"))) int curl_share_strerror(void) {
    ALOGD("curl_share_strerror() called");
    return 0;
}

/* Demangled: Curl_ipv6works */
extern "C" __attribute__((visibility("default"))) int Curl_ipv6works(void) {
    ALOGD("Curl_ipv6works() called");
    return 0;
}

/* Demangled: Curl_getaddrinfo_ex */
extern "C" __attribute__((visibility("default"))) int Curl_getaddrinfo_ex(void) {
    ALOGD("Curl_getaddrinfo_ex() called");
    return 0;
}

/* Demangled: Curl_blockread_all */
extern "C" __attribute__((visibility("default"))) int Curl_blockread_all(void) {
    ALOGD("Curl_blockread_all() called");
    return 0;
}

/* Demangled: Curl_he2ai */
extern "C" __attribute__((visibility("default"))) int Curl_he2ai(void) {
    ALOGD("Curl_he2ai() called");
    return 0;
}

/* Demangled: Curl_ip2addr */
extern "C" __attribute__((visibility("default"))) int Curl_ip2addr(void) {
    ALOGD("Curl_ip2addr() called");
    return 0;
}

/* Demangled: Curl_slist_append_nodup */
extern "C" __attribute__((visibility("default"))) int Curl_slist_append_nodup(void) {
    ALOGD("Curl_slist_append_nodup() called");
    return 0;
}

/* Demangled: curl_slist_append */
extern "C" __attribute__((visibility("default"))) int curl_slist_append(void) {
    ALOGD("curl_slist_append() called");
    return 0;
}

/* Demangled: curlx_ultosi */
extern "C" __attribute__((visibility("default"))) int curlx_ultosi(void) {
    ALOGD("curlx_ultosi() called");
    return 0;
}

/* Demangled: curlx_uztoso */
extern "C" __attribute__((visibility("default"))) int curlx_uztoso(void) {
    ALOGD("curlx_uztoso() called");
    return 0;
}

/* Demangled: curlx_uztoul */
extern "C" __attribute__((visibility("default"))) int curlx_uztoul(void) {
    ALOGD("curlx_uztoul() called");
    return 0;
}

/* Demangled: curlx_uztosz */
extern "C" __attribute__((visibility("default"))) int curlx_uztosz(void) {
    ALOGD("curlx_uztosz() called");
    return 0;
}

/* Demangled: curlx_sztosi */
extern "C" __attribute__((visibility("default"))) int curlx_sztosi(void) {
    ALOGD("curlx_sztosi() called");
    return 0;
}

/* Demangled: curlx_sitouz */
extern "C" __attribute__((visibility("default"))) int curlx_sitouz(void) {
    ALOGD("curlx_sitouz() called");
    return 0;
}

/* Demangled: Curl_HMAC_init */
extern "C" __attribute__((visibility("default"))) int Curl_HMAC_init(void) {
    ALOGD("Curl_HMAC_init() called");
    return 0;
}

/* Demangled: Curl_HMAC_update */
extern "C" __attribute__((visibility("default"))) int Curl_HMAC_update(void) {
    ALOGD("Curl_HMAC_update() called");
    return 0;
}

/* Demangled: Curl_HMAC_final */
extern "C" __attribute__((visibility("default"))) int Curl_HMAC_final(void) {
    ALOGD("Curl_HMAC_final() called");
    return 0;
}

/* Demangled: Curl_gethostname */
extern "C" __attribute__((visibility("default"))) int Curl_gethostname(void) {
    ALOGD("Curl_gethostname() called");
    return 0;
}

/* Demangled: Curl_proxyCONNECT */
extern "C" __attribute__((visibility("default"))) int Curl_proxyCONNECT(void) {
    ALOGD("Curl_proxyCONNECT() called");
    return 0;
}

/* Demangled: Curl_ntlm_decode_type2_message */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_decode_type2_message(void) {
    ALOGD("Curl_ntlm_decode_type2_message() called");
    return 0;
}

/* Demangled: Curl_ntlm_create_type3_message */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_create_type3_message(void) {
    ALOGD("Curl_ntlm_create_type3_message() called");
    return 0;
}

/* Demangled: Curl_ntlm_create_type1_message */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_create_type1_message(void) {
    ALOGD("Curl_ntlm_create_type1_message() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_lm_resp */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_lm_resp(void) {
    ALOGD("Curl_ntlm_core_lm_resp() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_mk_lm_hash */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_mk_lm_hash(void) {
    ALOGD("Curl_ntlm_core_mk_lm_hash() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_mk_nt_hash */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_mk_nt_hash(void) {
    ALOGD("Curl_ntlm_core_mk_nt_hash() called");
    return 0;
}

/* Demangled: Curl_hmac_md5 */
extern "C" __attribute__((visibility("default"))) int Curl_hmac_md5(void) {
    ALOGD("Curl_hmac_md5() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_mk_ntlmv2_hash */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_mk_ntlmv2_hash(void) {
    ALOGD("Curl_ntlm_core_mk_ntlmv2_hash() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_mk_ntlmv2_resp */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_mk_ntlmv2_resp(void) {
    ALOGD("Curl_ntlm_core_mk_ntlmv2_resp() called");
    return 0;
}

/* Demangled: Curl_ntlm_core_mk_lmv2_resp */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_core_mk_lmv2_resp(void) {
    ALOGD("Curl_ntlm_core_mk_lmv2_resp() called");
    return 0;
}

/* Demangled: Curl_ntlm_decode_type2_target */
extern "C" __attribute__((visibility("default"))) int Curl_ntlm_decode_type2_target(void) {
    ALOGD("Curl_ntlm_decode_type2_target() called");
    return 0;
}

/* Demangled: Curl_ssl_md5sum */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_md5sum(void) {
    ALOGD("Curl_ssl_md5sum() called");
    return 0;
}

/* Demangled: Curl_sasl_create_plain_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_plain_message(void) {
    ALOGD("Curl_sasl_create_plain_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_login_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_login_message(void) {
    ALOGD("Curl_sasl_create_login_message() called");
    return 0;
}

/* Demangled: Curl_sasl_decode_cram_md5_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_decode_cram_md5_message(void) {
    ALOGD("Curl_sasl_decode_cram_md5_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_cram_md5_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_cram_md5_message(void) {
    ALOGD("Curl_sasl_create_cram_md5_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_digest_md5_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_digest_md5_message(void) {
    ALOGD("Curl_sasl_create_digest_md5_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_ntlm_type1_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_ntlm_type1_message(void) {
    ALOGD("Curl_sasl_create_ntlm_type1_message() called");
    return 0;
}

/* Demangled: Curl_sasl_decode_ntlm_type2_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_decode_ntlm_type2_message(void) {
    ALOGD("Curl_sasl_decode_ntlm_type2_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_ntlm_type3_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_ntlm_type3_message(void) {
    ALOGD("Curl_sasl_create_ntlm_type3_message() called");
    return 0;
}

/* Demangled: Curl_sasl_create_xoauth2_message */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_create_xoauth2_message(void) {
    ALOGD("Curl_sasl_create_xoauth2_message() called");
    return 0;
}

/* Demangled: Curl_sasl_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_sasl_cleanup(void) {
    ALOGD("Curl_sasl_cleanup() called");
    return 0;
}

/* Demangled: Curl_cert_hostcheck */
extern "C" __attribute__((visibility("default"))) int Curl_cert_hostcheck(void) {
    ALOGD("Curl_cert_hostcheck() called");
    return 0;
}

/* Demangled: Curl_bundle_create */
extern "C" __attribute__((visibility("default"))) int Curl_bundle_create(void) {
    ALOGD("Curl_bundle_create() called");
    return 0;
}

/* Demangled: Curl_bundle_destroy */
extern "C" __attribute__((visibility("default"))) int Curl_bundle_destroy(void) {
    ALOGD("Curl_bundle_destroy() called");
    return 0;
}

/* Demangled: Curl_bundle_add_conn */
extern "C" __attribute__((visibility("default"))) int Curl_bundle_add_conn(void) {
    ALOGD("Curl_bundle_add_conn() called");
    return 0;
}

/* Demangled: Curl_bundle_remove_conn */
extern "C" __attribute__((visibility("default"))) int Curl_bundle_remove_conn(void) {
    ALOGD("Curl_bundle_remove_conn() called");
    return 0;
}

/* Demangled: Curl_ossl_seed */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_seed(void) {
    ALOGD("Curl_ossl_seed() called");
    return 0;
}

/* Demangled: Curl_ossl_init */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_init(void) {
    ALOGD("Curl_ossl_init() called");
    return 0;
}

/* Demangled: Curl_ossl_cleanup */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_cleanup(void) {
    ALOGD("Curl_ossl_cleanup() called");
    return 0;
}

/* Demangled: Curl_ossl_check_cxn */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_check_cxn(void) {
    ALOGD("Curl_ossl_check_cxn() called");
    return 0;
}

/* Demangled: Curl_ossl_set_engine */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_set_engine(void) {
    ALOGD("Curl_ossl_set_engine() called");
    return 0;
}

/* Demangled: Curl_ossl_set_engine_default */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_set_engine_default(void) {
    ALOGD("Curl_ossl_set_engine_default() called");
    return 0;
}

/* Demangled: Curl_ossl_engines_list */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_engines_list(void) {
    ALOGD("Curl_ossl_engines_list() called");
    return 0;
}

/* Demangled: Curl_ossl_close */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_close(void) {
    ALOGD("Curl_ossl_close() called");
    return 0;
}

/* Demangled: Curl_ossl_shutdown */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_shutdown(void) {
    ALOGD("Curl_ossl_shutdown() called");
    return 0;
}

/* Demangled: Curl_ossl_session_free */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_session_free(void) {
    ALOGD("Curl_ossl_session_free() called");
    return 0;
}

/* Demangled: Curl_ossl_close_all */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_close_all(void) {
    ALOGD("Curl_ossl_close_all() called");
    return 0;
}

/* Demangled: Curl_ossl_connect_nonblocking */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_connect_nonblocking(void) {
    ALOGD("Curl_ossl_connect_nonblocking() called");
    return 0;
}

/* Demangled: Curl_ssl_getsessionid */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_getsessionid(void) {
    ALOGD("Curl_ssl_getsessionid() called");
    return 0;
}

/* Demangled: Curl_ssl_delsessionid */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_delsessionid(void) {
    ALOGD("Curl_ssl_delsessionid() called");
    return 0;
}

/* Demangled: Curl_ssl_addsessionid */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_addsessionid(void) {
    ALOGD("Curl_ssl_addsessionid() called");
    return 0;
}

/* Demangled: Curl_ossl_connect */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_connect(void) {
    ALOGD("Curl_ossl_connect() called");
    return 0;
}

/* Demangled: Curl_ossl_data_pending */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_data_pending(void) {
    ALOGD("Curl_ossl_data_pending() called");
    return 0;
}

/* Demangled: Curl_ossl_version */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_version(void) {
    ALOGD("Curl_ossl_version() called");
    return 0;
}

/* Demangled: Curl_ossl_random */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_random(void) {
    ALOGD("Curl_ossl_random() called");
    return 0;
}

/* Demangled: Curl_ossl_md5sum */
extern "C" __attribute__((visibility("default"))) int Curl_ossl_md5sum(void) {
    ALOGD("Curl_ossl_md5sum() called");
    return 0;
}

/* Demangled: Curl_ssl_init_certinfo */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_init_certinfo(void) {
    ALOGD("Curl_ssl_init_certinfo() called");
    return 0;
}

/* Demangled: Curl_ssl_push_certinfo */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_push_certinfo(void) {
    ALOGD("Curl_ssl_push_certinfo() called");
    return 0;
}

/* Demangled: Curl_ssl_push_certinfo_len */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_push_certinfo_len(void) {
    ALOGD("Curl_ssl_push_certinfo_len() called");
    return 0;
}

/* Demangled: Curl_ssl_connect */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_connect(void) {
    ALOGD("Curl_ssl_connect() called");
    return 0;
}

/* Demangled: Curl_ssl_shutdown */
extern "C" __attribute__((visibility("default"))) int Curl_ssl_shutdown(void) {
    ALOGD("Curl_ssl_shutdown() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: __divsi3 */
extern "C" __attribute__((visibility("default"))) int __divsi3(void) {
    ALOGD("__divsi3() called");
    return 0;
}

/* Demangled: __aeabi_idiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv(void) {
    ALOGD("__aeabi_idiv() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: __aeabi_dcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmplt(void) {
    ALOGD("__aeabi_dcmplt() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: __aeabi_dmul */
extern "C" __attribute__((visibility("default"))) int __aeabi_dmul(void) {
    ALOGD("__aeabi_dmul() called");
    return 0;
}

/* Demangled: __aeabi_d2uiz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2uiz(void) {
    ALOGD("__aeabi_d2uiz() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP_D */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP_D(void) {
    ALOGD("__gnu_Unwind_Restore_VFP_D() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP(void) {
    ALOGD("__gnu_Unwind_Restore_VFP() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP_D_16_to_31(void) {
    ALOGD("__gnu_Unwind_Restore_VFP_D_16_to_31() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_WMMXD */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_WMMXD(void) {
    ALOGD("__gnu_Unwind_Restore_WMMXD() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_WMMXC */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_WMMXC(void) {
    ALOGD("__gnu_Unwind_Restore_WMMXC() called");
    return 0;
}

/* Demangled: restore_core_regs */
extern "C" __attribute__((visibility("default"))) int restore_core_regs(void) {
    ALOGD("restore_core_regs() called");
    return 0;
}

/* Demangled: _Unwind_GetCFA */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetCFA(void) {
    ALOGD("_Unwind_GetCFA() called");
    return 0;
}

/* Demangled: __gnu_Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_RaiseException(void) {
    ALOGD("__gnu_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: __gnu_Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_ForcedUnwind(void) {
    ALOGD("__gnu_Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Resume(void) {
    ALOGD("__gnu_Unwind_Resume() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Resume_or_Rethrow(void) {
    ALOGD("__gnu_Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Backtrace(void) {
    ALOGD("__gnu_Unwind_Backtrace() called");
    return 0;
}

/* Demangled: __gnu_unwind_execute */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_execute(void) {
    ALOGD("__gnu_unwind_execute() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP_D */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP_D(void) {
    ALOGD("__gnu_Unwind_Save_VFP_D() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP(void) {
    ALOGD("__gnu_Unwind_Save_VFP() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP_D_16_to_31(void) {
    ALOGD("__gnu_Unwind_Save_VFP_D_16_to_31() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_WMMXD */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_WMMXD(void) {
    ALOGD("__gnu_Unwind_Save_WMMXD() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_WMMXC */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_WMMXC(void) {
    ALOGD("__gnu_Unwind_Save_WMMXC() called");
    return 0;
}

/* Demangled: __restore_core_regs */
extern "C" __attribute__((visibility("default"))) int __restore_core_regs(void) {
    ALOGD("__restore_core_regs() called");
    return 0;
}

/* Demangled: ___Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int ___Unwind_RaiseException(void) {
    ALOGD("___Unwind_RaiseException() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: ___Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Resume(void) {
    ALOGD("___Unwind_Resume() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: ___Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Resume_or_Rethrow(void) {
    ALOGD("___Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: _Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume_or_Rethrow(void) {
    ALOGD("_Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: ___Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int ___Unwind_ForcedUnwind(void) {
    ALOGD("___Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: _Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int _Unwind_ForcedUnwind(void) {
    ALOGD("_Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: ___Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Backtrace(void) {
    ALOGD("___Unwind_Backtrace() called");
    return 0;
}

/* Demangled: _Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int _Unwind_Backtrace(void) {
    ALOGD("_Unwind_Backtrace() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: _Unwind_GetDataRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetDataRelBase(void) {
    ALOGD("_Unwind_GetDataRelBase() called");
    return 0;
}

/* Demangled: _Unwind_GetTextRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetTextRelBase(void) {
    ALOGD("_Unwind_GetTextRelBase() called");
    return 0;
}

/* Demangled: __muldf3 */
extern "C" __attribute__((visibility("default"))) int __muldf3(void) {
    ALOGD("__muldf3() called");
    return 0;
}

/* Demangled: __divdf3 */
extern "C" __attribute__((visibility("default"))) int __divdf3(void) {
    ALOGD("__divdf3() called");
    return 0;
}

/* Demangled: __aeabi_ddiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_ddiv(void) {
    ALOGD("__aeabi_ddiv() called");
    return 0;
}

/* Demangled: __gtdf2 */
extern "C" __attribute__((visibility("default"))) int __gtdf2(void) {
    ALOGD("__gtdf2() called");
    return 0;
}

/* Demangled: __gedf2 */
extern "C" __attribute__((visibility("default"))) int __gedf2(void) {
    ALOGD("__gedf2() called");
    return 0;
}

/* Demangled: __ltdf2 */
extern "C" __attribute__((visibility("default"))) int __ltdf2(void) {
    ALOGD("__ltdf2() called");
    return 0;
}

/* Demangled: __ledf2 */
extern "C" __attribute__((visibility("default"))) int __ledf2(void) {
    ALOGD("__ledf2() called");
    return 0;
}

/* Demangled: __cmpdf2 */
extern "C" __attribute__((visibility("default"))) int __cmpdf2(void) {
    ALOGD("__cmpdf2() called");
    return 0;
}

/* Demangled: __nedf2 */
extern "C" __attribute__((visibility("default"))) int __nedf2(void) {
    ALOGD("__nedf2() called");
    return 0;
}

/* Demangled: __eqdf2 */
extern "C" __attribute__((visibility("default"))) int __eqdf2(void) {
    ALOGD("__eqdf2() called");
    return 0;
}

/* Demangled: __aeabi_cdrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdrcmple(void) {
    ALOGD("__aeabi_cdrcmple() called");
    return 0;
}

/* Demangled: __aeabi_cdcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmpeq(void) {
    ALOGD("__aeabi_cdcmpeq() called");
    return 0;
}

/* Demangled: __aeabi_cdcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmple(void) {
    ALOGD("__aeabi_cdcmple() called");
    return 0;
}

/* Demangled: __aeabi_dcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpeq(void) {
    ALOGD("__aeabi_dcmpeq() called");
    return 0;
}

/* Demangled: __aeabi_dcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmple(void) {
    ALOGD("__aeabi_dcmple() called");
    return 0;
}

/* Demangled: __aeabi_dcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpge(void) {
    ALOGD("__aeabi_dcmpge() called");
    return 0;
}

/* Demangled: __aeabi_dcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpgt(void) {
    ALOGD("__aeabi_dcmpgt() called");
    return 0;
}

/* Demangled: __fixunsdfsi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfsi(void) {
    ALOGD("__fixunsdfsi() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
