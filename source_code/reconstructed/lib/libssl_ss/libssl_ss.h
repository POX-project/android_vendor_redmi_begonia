/*
 * Reverse-Engineered ABI Specification for: libssl-ss.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libssl-ss.so
 */

#ifndef BEGONIA_RE_LIBSSL_SS_H
#define BEGONIA_RE_LIBSSL_SS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: BIO_f_ssl */
/* Demangled: BIO_f_ssl */
int BIO_f_ssl(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: BIO_new_buffer_ssl_connect */
/* Demangled: BIO_new_buffer_ssl_connect */
int BIO_new_buffer_ssl_connect(void);

/* Symbol: BIO_new_ssl_connect */
/* Demangled: BIO_new_ssl_connect */
int BIO_new_ssl_connect(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: BIO_new_ssl */
/* Demangled: BIO_new_ssl */
int BIO_new_ssl(void);

/* Symbol: SSL_new */
/* Demangled: SSL_new */
int SSL_new(void);

/* Symbol: SSL_set_connect_state */
/* Demangled: SSL_set_connect_state */
int SSL_set_connect_state(void);

/* Symbol: SSL_set_accept_state */
/* Demangled: SSL_set_accept_state */
int SSL_set_accept_state(void);

/* Symbol: BIO_ssl_copy_session_id */
/* Demangled: BIO_ssl_copy_session_id */
int BIO_ssl_copy_session_id(void);

/* Symbol: SSL_copy_session_id */
/* Demangled: SSL_copy_session_id */
int SSL_copy_session_id(void);

/* Symbol: BIO_ssl_shutdown */
/* Demangled: BIO_ssl_shutdown */
int BIO_ssl_shutdown(void);

/* Symbol: SSL_shutdown */
/* Demangled: SSL_shutdown */
int SSL_shutdown(void);

/* Symbol: SSL_write */
/* Demangled: SSL_write */
int SSL_write(void);

/* Symbol: SSL_get_error */
/* Demangled: SSL_get_error */
int SSL_get_error(void);

/* Symbol: SSL_renegotiate */
/* Demangled: SSL_renegotiate */
int SSL_renegotiate(void);

/* Symbol: SSL_read */
/* Demangled: SSL_read */
int SSL_read(void);

/* Symbol: SSL_do_handshake */
/* Demangled: SSL_do_handshake */
int SSL_do_handshake(void);

/* Symbol: SSL_set_bio */
/* Demangled: SSL_set_bio */
int SSL_set_bio(void);

/* Symbol: SSL_pending */
/* Demangled: SSL_pending */
int SSL_pending(void);

/* Symbol: SSL_free */
/* Demangled: SSL_free */
int SSL_free(void);

/* Symbol: SSL_dup */
/* Demangled: SSL_dup */
int SSL_dup(void);

/* Symbol: SSL_get_info_callback */
/* Demangled: SSL_get_info_callback */
int SSL_get_info_callback(void);

/* Symbol: SSL_get_rbio */
/* Demangled: SSL_get_rbio */
int SSL_get_rbio(void);

/* Symbol: SSL_clear */
/* Demangled: SSL_clear */
int SSL_clear(void);

/* Symbol: SSL_set_info_callback */
/* Demangled: SSL_set_info_callback */
int SSL_set_info_callback(void);

/* Symbol: dtls1_do_write */
/* Demangled: dtls1_do_write */
int dtls1_do_write(void);

/* Symbol: SSL_ctrl */
/* Demangled: SSL_ctrl */
int SSL_ctrl(void);

/* Symbol: SSL_get_wbio */
/* Demangled: SSL_get_wbio */
int SSL_get_wbio(void);

/* Symbol: dtls1_write_bytes */
/* Demangled: dtls1_write_bytes */
int dtls1_write_bytes(void);

/* Symbol: ssl3_finish_mac */
/* Demangled: ssl3_finish_mac */
int ssl3_finish_mac(void);

/* Symbol: dtls1_min_mtu */
/* Demangled: dtls1_min_mtu */
int dtls1_min_mtu(void);

/* Symbol: dtls1_get_message */
/* Demangled: dtls1_get_message */
int dtls1_get_message(void);

/* Symbol: dtls1_get_message_header */
/* Demangled: dtls1_get_message_header */
int dtls1_get_message_header(void);

/* Symbol: ssl3_send_alert */
/* Demangled: ssl3_send_alert */
int ssl3_send_alert(void);

/* Symbol: dtls1_send_finished */
/* Demangled: dtls1_send_finished */
int dtls1_send_finished(void);

/* Symbol: dtls1_buffer_message */
/* Demangled: dtls1_buffer_message */
int dtls1_buffer_message(void);

/* Symbol: dtls1_set_message_header */
/* Demangled: dtls1_set_message_header */
int dtls1_set_message_header(void);

/* Symbol: dtls1_send_change_cipher_spec */
/* Demangled: dtls1_send_change_cipher_spec */
int dtls1_send_change_cipher_spec(void);

/* Symbol: dtls1_output_cert_chain */
/* Demangled: dtls1_output_cert_chain */
int dtls1_output_cert_chain(void);

/* Symbol: dtls1_read_failed */
/* Demangled: dtls1_read_failed */
int dtls1_read_failed(void);

/* Symbol: dtls1_is_timer_expired */
/* Demangled: dtls1_is_timer_expired */
int dtls1_is_timer_expired(void);

/* Symbol: SSL_state */
/* Demangled: SSL_state */
int SSL_state(void);

/* Symbol: SSL_cutthrough_complete */
/* Demangled: SSL_cutthrough_complete */
int SSL_cutthrough_complete(void);

/* Symbol: dtls1_handle_timeout */
/* Demangled: dtls1_handle_timeout */
int dtls1_handle_timeout(void);

/* Symbol: dtls1_get_queue_priority */
/* Demangled: dtls1_get_queue_priority */
int dtls1_get_queue_priority(void);

/* Symbol: dtls1_retransmit_buffered_messages */
/* Demangled: dtls1_retransmit_buffered_messages */
int dtls1_retransmit_buffered_messages(void);

/* Symbol: dtls1_retransmit_message */
/* Demangled: dtls1_retransmit_message */
int dtls1_retransmit_message(void);

/* Symbol: dtls1_clear_record_buffer */
/* Demangled: dtls1_clear_record_buffer */
int dtls1_clear_record_buffer(void);

/* Symbol: dtls1_get_ccs_header */
/* Demangled: dtls1_get_ccs_header */
int dtls1_get_ccs_header(void);

/* Symbol: dtls1_shutdown */
/* Demangled: dtls1_shutdown */
int dtls1_shutdown(void);

/* Symbol: ssl3_shutdown */
/* Demangled: ssl3_shutdown */
int ssl3_shutdown(void);

/* Symbol: dtls1_enc */
/* Demangled: dtls1_enc */
int dtls1_enc(void);

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int __aeabi_idivmod(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: tls1_cbc_remove_padding */
/* Demangled: tls1_cbc_remove_padding */
int tls1_cbc_remove_padding(void);

/* Symbol: dtls1_default_timeout */
/* Demangled: dtls1_default_timeout */
int dtls1_default_timeout(void);

/* Symbol: dtls1_new */
/* Demangled: dtls1_new */
int dtls1_new(void);

/* Symbol: ssl3_new */
/* Demangled: ssl3_new */
int ssl3_new(void);

/* Symbol: dtls1_free */
/* Demangled: dtls1_free */
int dtls1_free(void);

/* Symbol: ssl3_free */
/* Demangled: ssl3_free */
int ssl3_free(void);

/* Symbol: dtls1_clear */
/* Demangled: dtls1_clear */
int dtls1_clear(void);

/* Symbol: ssl3_clear */
/* Demangled: ssl3_clear */
int ssl3_clear(void);

/* Symbol: dtls1_ctrl */
/* Demangled: dtls1_ctrl */
int dtls1_ctrl(void);

/* Symbol: ssl3_ctrl */
/* Demangled: ssl3_ctrl */
int ssl3_ctrl(void);

/* Symbol: dtls1_listen */
/* Demangled: dtls1_listen */
int dtls1_listen(void);

/* Symbol: dtls1_get_timeout */
/* Demangled: dtls1_get_timeout */
int dtls1_get_timeout(void);

/* Symbol: dtls1_start_timer */
/* Demangled: dtls1_start_timer */
int dtls1_start_timer(void);

/* Symbol: dtls1_check_timeout_num */
/* Demangled: dtls1_check_timeout_num */
int dtls1_check_timeout_num(void);

/* Symbol: SSL_accept */
/* Demangled: SSL_accept */
int SSL_accept(void);

/* Symbol: dtls1_get_cipher */
/* Demangled: dtls1_get_cipher */
int dtls1_get_cipher(void);

/* Symbol: ssl3_get_cipher */
/* Demangled: ssl3_get_cipher */
int ssl3_get_cipher(void);

/* Symbol: dtls1_double_timeout */
/* Demangled: dtls1_double_timeout */
int dtls1_double_timeout(void);

/* Symbol: dtls1_stop_timer */
/* Demangled: dtls1_stop_timer */
int dtls1_stop_timer(void);

/* Symbol: dtls1_version_str */
/* Demangled: dtls1_version_str */
extern void* dtls1_version_str;

/* Symbol: DTLSv1_enc_data */
/* Demangled: DTLSv1_enc_data */
extern void* DTLSv1_enc_data;

/* Symbol: tls1_mac */
/* Demangled: tls1_mac */
int tls1_mac(void);

/* Symbol: tls1_setup_key_block */
/* Demangled: tls1_setup_key_block */
int tls1_setup_key_block(void);

/* Symbol: tls1_generate_master_secret */
/* Demangled: tls1_generate_master_secret */
int tls1_generate_master_secret(void);

/* Symbol: tls1_change_cipher_state */
/* Demangled: tls1_change_cipher_state */
int tls1_change_cipher_state(void);

/* Symbol: tls1_final_finish_mac */
/* Demangled: tls1_final_finish_mac */
int tls1_final_finish_mac(void);

/* Symbol: tls1_cert_verify_mac */
/* Demangled: tls1_cert_verify_mac */
int tls1_cert_verify_mac(void);

/* Symbol: tls1_alert_code */
/* Demangled: tls1_alert_code */
int tls1_alert_code(void);

/* Symbol: tls1_export_keying_material */
/* Demangled: tls1_export_keying_material */
int tls1_export_keying_material(void);

/* Symbol: dtls1_get_record */
/* Demangled: dtls1_get_record */
int dtls1_get_record(void);

/* Symbol: ssl3_read_n */
/* Demangled: ssl3_read_n */
int ssl3_read_n(void);

/* Symbol: ssl3_setup_buffers */
/* Demangled: ssl3_setup_buffers */
int ssl3_setup_buffers(void);

/* Symbol: ssl3_cbc_copy_mac */
/* Demangled: ssl3_cbc_copy_mac */
int ssl3_cbc_copy_mac(void);

/* Symbol: ssl3_do_uncompress */
/* Demangled: ssl3_do_uncompress */
int ssl3_do_uncompress(void);

/* Symbol: dtls1_read_bytes */
/* Demangled: dtls1_read_bytes */
int dtls1_read_bytes(void);

/* Symbol: ssl3_renegotiate */
/* Demangled: ssl3_renegotiate */
int ssl3_renegotiate(void);

/* Symbol: ssl3_renegotiate_check */
/* Demangled: ssl3_renegotiate_check */
int ssl3_renegotiate_check(void);

/* Symbol: ssl3_do_change_cipher_spec */
/* Demangled: ssl3_do_change_cipher_spec */
int ssl3_do_change_cipher_spec(void);

/* Symbol: SSL_CTX_remove_session */
/* Demangled: SSL_CTX_remove_session */
int SSL_CTX_remove_session(void);

/* Symbol: dtls1_reset_seq_numbers */
/* Demangled: dtls1_reset_seq_numbers */
int dtls1_reset_seq_numbers(void);

/* Symbol: dtls1_write_app_data_bytes */
/* Demangled: dtls1_write_app_data_bytes */
int dtls1_write_app_data_bytes(void);

/* Symbol: ssl3_write_pending */
/* Demangled: ssl3_write_pending */
int ssl3_write_pending(void);

/* Symbol: ssl3_do_compress */
/* Demangled: ssl3_do_compress */
int ssl3_do_compress(void);

/* Symbol: ssl3_record_sequence_update */
/* Demangled: ssl3_record_sequence_update */
int ssl3_record_sequence_update(void);

/* Symbol: dtls1_dispatch_alert */
/* Demangled: dtls1_dispatch_alert */
int dtls1_dispatch_alert(void);

/* Symbol: SSL_CTX_set_tlsext_use_srtp */
/* Demangled: SSL_CTX_set_tlsext_use_srtp */
int SSL_CTX_set_tlsext_use_srtp(void);

/* Symbol: SSL_set_tlsext_use_srtp */
/* Demangled: SSL_set_tlsext_use_srtp */
int SSL_set_tlsext_use_srtp(void);

/* Symbol: SSL_get_srtp_profiles */
/* Demangled: SSL_get_srtp_profiles */
int SSL_get_srtp_profiles(void);

/* Symbol: SSL_get_selected_srtp_profile */
/* Demangled: SSL_get_selected_srtp_profile */
int SSL_get_selected_srtp_profile(void);

/* Symbol: ssl_add_clienthello_use_srtp_ext */
/* Demangled: ssl_add_clienthello_use_srtp_ext */
int ssl_add_clienthello_use_srtp_ext(void);

/* Symbol: ssl_parse_clienthello_use_srtp_ext */
/* Demangled: ssl_parse_clienthello_use_srtp_ext */
int ssl_parse_clienthello_use_srtp_ext(void);

/* Symbol: ssl_add_serverhello_use_srtp_ext */
/* Demangled: ssl_add_serverhello_use_srtp_ext */
int ssl_add_serverhello_use_srtp_ext(void);

/* Symbol: ssl_parse_serverhello_use_srtp_ext */
/* Demangled: ssl_parse_serverhello_use_srtp_ext */
int ssl_parse_serverhello_use_srtp_ext(void);

/* Symbol: SSLv23_client_method */
/* Demangled: SSLv23_client_method */
int SSLv23_client_method(void);

/* Symbol: ssl23_connect */
/* Demangled: ssl23_connect */
int ssl23_connect(void);

/* Symbol: ssl3_init_finished_mac */
/* Demangled: ssl3_init_finished_mac */
int ssl3_init_finished_mac(void);

/* Symbol: SSL_get_ciphers */
/* Demangled: SSL_get_ciphers */
int SSL_get_ciphers(void);

/* Symbol: ssl_fill_hello_random */
/* Demangled: ssl_fill_hello_random */
int ssl_fill_hello_random(void);

/* Symbol: ssl_cipher_list_to_bytes */
/* Demangled: ssl_cipher_list_to_bytes */
int ssl_cipher_list_to_bytes(void);

/* Symbol: ssl_prepare_clienthello_tlsext */
/* Demangled: ssl_prepare_clienthello_tlsext */
int ssl_prepare_clienthello_tlsext(void);

/* Symbol: ssl_add_clienthello_tlsext */
/* Demangled: ssl_add_clienthello_tlsext */
int ssl_add_clienthello_tlsext(void);

/* Symbol: ssl23_write_bytes */
/* Demangled: ssl23_write_bytes */
int ssl23_write_bytes(void);

/* Symbol: ssl23_read_bytes */
/* Demangled: ssl23_read_bytes */
int ssl23_read_bytes(void);

/* Symbol: ssl2_clear */
/* Demangled: ssl2_clear */
int ssl2_clear(void);

/* Symbol: SSLv3_client_method */
/* Demangled: SSLv3_client_method */
int SSLv3_client_method(void);

/* Symbol: TLSv1_1_client_method */
/* Demangled: TLSv1_1_client_method */
int TLSv1_1_client_method(void);

/* Symbol: TLSv1_client_method */
/* Demangled: TLSv1_client_method */
int TLSv1_client_method(void);

/* Symbol: TLSv1_2_client_method */
/* Demangled: TLSv1_2_client_method */
int TLSv1_2_client_method(void);

/* Symbol: ssl_init_wbio_buffer */
/* Demangled: ssl_init_wbio_buffer */
int ssl_init_wbio_buffer(void);

/* Symbol: ssl3_setup_read_buffer */
/* Demangled: ssl3_setup_read_buffer */
int ssl3_setup_read_buffer(void);

/* Symbol: ssl2_new */
/* Demangled: ssl2_new */
int ssl2_new(void);

/* Symbol: SSLv2_client_method */
/* Demangled: SSLv2_client_method */
int SSLv2_client_method(void);

/* Symbol: ssl_get_new_session */
/* Demangled: ssl_get_new_session */
int ssl_get_new_session(void);

/* Symbol: SSL_connect */
/* Demangled: SSL_connect */
int SSL_connect(void);

/* Symbol: ssl3_put_cipher_by_char */
/* Demangled: ssl3_put_cipher_by_char */
int ssl3_put_cipher_by_char(void);

/* Symbol: tls1_new */
/* Demangled: tls1_new */
int tls1_new(void);

/* Symbol: tls1_clear */
/* Demangled: tls1_clear */
int tls1_clear(void);

/* Symbol: tls1_free */
/* Demangled: tls1_free */
int tls1_free(void);

/* Symbol: ssl_undefined_function */
/* Demangled: ssl_undefined_function */
int ssl_undefined_function(void);

/* Symbol: ssl23_read */
/* Demangled: ssl23_read */
int ssl23_read(void);

/* Symbol: ssl23_peek */
/* Demangled: ssl23_peek */
int ssl23_peek(void);

/* Symbol: ssl23_write */
/* Demangled: ssl23_write */
int ssl23_write(void);

/* Symbol: ssl_ok */
/* Demangled: ssl_ok */
int ssl_ok(void);

/* Symbol: ssl3_get_message */
/* Demangled: ssl3_get_message */
int ssl3_get_message(void);

/* Symbol: ssl3_read_bytes */
/* Demangled: ssl3_read_bytes */
int ssl3_read_bytes(void);

/* Symbol: ssl3_write_bytes */
/* Demangled: ssl3_write_bytes */
int ssl3_write_bytes(void);

/* Symbol: ssl3_dispatch_alert */
/* Demangled: ssl3_dispatch_alert */
int ssl3_dispatch_alert(void);

/* Symbol: ssl3_ctx_ctrl */
/* Demangled: ssl3_ctx_ctrl */
int ssl3_ctx_ctrl(void);

/* Symbol: ssl23_get_cipher_by_char */
/* Demangled: ssl23_get_cipher_by_char */
int ssl23_get_cipher_by_char(void);

/* Symbol: ssl23_put_cipher_by_char */
/* Demangled: ssl23_put_cipher_by_char */
int ssl23_put_cipher_by_char(void);

/* Symbol: ssl_undefined_const_function */
/* Demangled: ssl_undefined_const_function */
int ssl_undefined_const_function(void);

/* Symbol: ssl23_num_ciphers */
/* Demangled: ssl23_num_ciphers */
int ssl23_num_ciphers(void);

/* Symbol: ssl23_get_cipher */
/* Demangled: ssl23_get_cipher */
int ssl23_get_cipher(void);

/* Symbol: ssl23_default_timeout */
/* Demangled: ssl23_default_timeout */
int ssl23_default_timeout(void);

/* Symbol: ssl3_undef_enc_method */
/* Demangled: ssl3_undef_enc_method */
extern void* ssl3_undef_enc_method;

/* Symbol: ssl_undefined_void_function */
/* Demangled: ssl_undefined_void_function */
int ssl_undefined_void_function(void);

/* Symbol: ssl3_callback_ctrl */
/* Demangled: ssl3_callback_ctrl */
int ssl3_callback_ctrl(void);

/* Symbol: ssl3_ctx_callback_ctrl */
/* Demangled: ssl3_ctx_callback_ctrl */
int ssl3_ctx_callback_ctrl(void);

/* Symbol: ssl3_num_ciphers */
/* Demangled: ssl3_num_ciphers */
int ssl3_num_ciphers(void);

/* Symbol: ssl2_num_ciphers */
/* Demangled: ssl2_num_ciphers */
int ssl2_num_ciphers(void);

/* Symbol: ssl2_get_cipher */
/* Demangled: ssl2_get_cipher */
int ssl2_get_cipher(void);

/* Symbol: ssl3_get_cipher_by_char */
/* Demangled: ssl3_get_cipher_by_char */
int ssl3_get_cipher_by_char(void);

/* Symbol: ssl2_get_cipher_by_char */
/* Demangled: ssl2_get_cipher_by_char */
int ssl2_get_cipher_by_char(void);

/* Symbol: SSL_peek */
/* Demangled: SSL_peek */
int SSL_peek(void);

/* Symbol: SSLv23_method */
/* Demangled: SSLv23_method */
int SSLv23_method(void);

/* Symbol: SSLv3_method */
/* Demangled: SSLv3_method */
int SSLv3_method(void);

/* Symbol: SSLv2_method */
/* Demangled: SSLv2_method */
int SSLv2_method(void);

/* Symbol: TLSv1_method */
/* Demangled: TLSv1_method */
int TLSv1_method(void);

/* Symbol: TLSv1_1_method */
/* Demangled: TLSv1_1_method */
int TLSv1_1_method(void);

/* Symbol: TLSv1_2_method */
/* Demangled: TLSv1_2_method */
int TLSv1_2_method(void);

/* Symbol: ssl23_accept */
/* Demangled: ssl23_accept */
int ssl23_accept(void);

/* Symbol: SSLv23_server_method */
/* Demangled: SSLv23_server_method */
int SSLv23_server_method(void);

/* Symbol: ssl23_get_client_hello */
/* Demangled: ssl23_get_client_hello */
int ssl23_get_client_hello(void);

/* Symbol: SSLv3_server_method */
/* Demangled: SSLv3_server_method */
int SSLv3_server_method(void);

/* Symbol: SSLv2_server_method */
/* Demangled: SSLv2_server_method */
int SSLv2_server_method(void);

/* Symbol: TLSv1_server_method */
/* Demangled: TLSv1_server_method */
int TLSv1_server_method(void);

/* Symbol: TLSv1_1_server_method */
/* Demangled: TLSv1_1_server_method */
int TLSv1_1_server_method(void);

/* Symbol: TLSv1_2_server_method */
/* Demangled: TLSv1_2_server_method */
int TLSv1_2_server_method(void);

/* Symbol: ssl2_connect */
/* Demangled: ssl2_connect */
int ssl2_connect(void);

/* Symbol: ssl2_read */
/* Demangled: ssl2_read */
int ssl2_read(void);

/* Symbol: ssl2_part_read */
/* Demangled: ssl2_part_read */
int ssl2_part_read(void);

/* Symbol: ssl_cipher_get_evp */
/* Demangled: ssl_cipher_get_evp */
int ssl_cipher_get_evp(void);

/* Symbol: ssl2_enc_init */
/* Demangled: ssl2_enc_init */
int ssl2_enc_init(void);

/* Symbol: ssl2_do_write */
/* Demangled: ssl2_do_write */
int ssl2_do_write(void);

/* Symbol: ssl2_return_error */
/* Demangled: ssl2_return_error */
int ssl2_return_error(void);

/* Symbol: SSL_use_certificate */
/* Demangled: SSL_use_certificate */
int SSL_use_certificate(void);

/* Symbol: SSL_use_PrivateKey */
/* Demangled: SSL_use_PrivateKey */
int SSL_use_PrivateKey(void);

/* Symbol: ssl2_set_certificate */
/* Demangled: ssl2_set_certificate */
int ssl2_set_certificate(void);

/* Symbol: ssl_bytes_to_cipher_list */
/* Demangled: ssl_bytes_to_cipher_list */
int ssl_bytes_to_cipher_list(void);

/* Symbol: ssl_update_cache */
/* Demangled: ssl_update_cache */
int ssl_update_cache(void);

/* Symbol: ssl_cipher_ptr_id_cmp */
/* Demangled: ssl_cipher_ptr_id_cmp */
int ssl_cipher_ptr_id_cmp(void);

/* Symbol: ssl_verify_cert_chain */
/* Demangled: ssl_verify_cert_chain */
int ssl_verify_cert_chain(void);

/* Symbol: ssl_sess_cert_new */
/* Demangled: ssl_sess_cert_new */
int ssl_sess_cert_new(void);

/* Symbol: ssl_sess_cert_free */
/* Demangled: ssl_sess_cert_free */
int ssl_sess_cert_free(void);

/* Symbol: ssl_set_peer_cert_type */
/* Demangled: ssl_set_peer_cert_type */
int ssl_set_peer_cert_type(void);

/* Symbol: ssl2_free */
/* Demangled: ssl2_free */
int ssl2_free(void);

/* Symbol: ssl2_peek */
/* Demangled: ssl2_peek */
int ssl2_peek(void);

/* Symbol: ssl2_write */
/* Demangled: ssl2_write */
int ssl2_write(void);

/* Symbol: ssl2_shutdown */
/* Demangled: ssl2_shutdown */
int ssl2_shutdown(void);

/* Symbol: ssl2_ctrl */
/* Demangled: ssl2_ctrl */
int ssl2_ctrl(void);

/* Symbol: ssl2_ctx_ctrl */
/* Demangled: ssl2_ctx_ctrl */
int ssl2_ctx_ctrl(void);

/* Symbol: ssl2_put_cipher_by_char */
/* Demangled: ssl2_put_cipher_by_char */
int ssl2_put_cipher_by_char(void);

/* Symbol: ssl2_pending */
/* Demangled: ssl2_pending */
int ssl2_pending(void);

/* Symbol: ssl2_default_timeout */
/* Demangled: ssl2_default_timeout */
int ssl2_default_timeout(void);

/* Symbol: ssl2_callback_ctrl */
/* Demangled: ssl2_callback_ctrl */
int ssl2_callback_ctrl(void);

/* Symbol: ssl2_ctx_callback_ctrl */
/* Demangled: ssl2_ctx_callback_ctrl */
int ssl2_ctx_callback_ctrl(void);

/* Symbol: ssl_replace_hash */
/* Demangled: ssl_replace_hash */
int ssl_replace_hash(void);

/* Symbol: ssl2_generate_key_material */
/* Demangled: ssl2_generate_key_material */
int ssl2_generate_key_material(void);

/* Symbol: ssl2_enc */
/* Demangled: ssl2_enc */
int ssl2_enc(void);

/* Symbol: ssl2_mac */
/* Demangled: ssl2_mac */
int ssl2_mac(void);

/* Symbol: ssl2_ciphers */
/* Demangled: ssl2_ciphers */
extern void* ssl2_ciphers;

/* Symbol: OBJ_bsearch_ssl_cipher_id */
/* Demangled: OBJ_bsearch_ssl_cipher_id */
int OBJ_bsearch_ssl_cipher_id(void);

/* Symbol: ssl2_write_error */
/* Demangled: ssl2_write_error */
int ssl2_write_error(void);

/* Symbol: ssl2_version_str */
/* Demangled: ssl2_version_str */
extern void* ssl2_version_str;

/* Symbol: ssl2_accept */
/* Demangled: ssl2_accept */
int ssl2_accept(void);

/* Symbol: ssl_get_prev_session */
/* Demangled: ssl_get_prev_session */
int ssl_get_prev_session(void);

/* Symbol: ssl_free_wbio_buffer */
/* Demangled: ssl_free_wbio_buffer */
int ssl_free_wbio_buffer(void);

/* Symbol: ssl3_do_write */
/* Demangled: ssl3_do_write */
int ssl3_do_write(void);

/* Symbol: ssl3_send_finished */
/* Demangled: ssl3_send_finished */
int ssl3_send_finished(void);

/* Symbol: ssl3_get_finished */
/* Demangled: ssl3_get_finished */
int ssl3_get_finished(void);

/* Symbol: ssl3_send_change_cipher_spec */
/* Demangled: ssl3_send_change_cipher_spec */
int ssl3_send_change_cipher_spec(void);

/* Symbol: ssl3_output_cert_chain */
/* Demangled: ssl3_output_cert_chain */
int ssl3_output_cert_chain(void);

/* Symbol: SSL_get_certificate_chain */
/* Demangled: SSL_get_certificate_chain */
int SSL_get_certificate_chain(void);

/* Symbol: ssl_cert_type */
/* Demangled: ssl_cert_type */
int ssl_cert_type(void);

/* Symbol: ssl_verify_alarm_type */
/* Demangled: ssl_verify_alarm_type */
int ssl_verify_alarm_type(void);

/* Symbol: SSL_version */
/* Demangled: SSL_version */
int SSL_version(void);

/* Symbol: ssl3_setup_write_buffer */
/* Demangled: ssl3_setup_write_buffer */
int ssl3_setup_write_buffer(void);

/* Symbol: ssl3_release_write_buffer */
/* Demangled: ssl3_release_write_buffer */
int ssl3_release_write_buffer(void);

/* Symbol: ssl3_release_read_buffer */
/* Demangled: ssl3_release_read_buffer */
int ssl3_release_read_buffer(void);

/* Symbol: ssl3_cbc_remove_padding */
/* Demangled: ssl3_cbc_remove_padding */
int ssl3_cbc_remove_padding(void);

/* Symbol: ssl3_cbc_record_digest_supported */
/* Demangled: ssl3_cbc_record_digest_supported */
int ssl3_cbc_record_digest_supported(void);

/* Symbol: ssl3_cbc_digest_record */
/* Demangled: ssl3_cbc_digest_record */
int ssl3_cbc_digest_record(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: ssl3_connect */
/* Demangled: ssl3_connect */
int ssl3_connect(void);

/* Symbol: ssl3_send_next_proto */
/* Demangled: ssl3_send_next_proto */
int ssl3_send_next_proto(void);

/* Symbol: ssl3_get_server_done */
/* Demangled: ssl3_get_server_done */
int ssl3_get_server_done(void);

/* Symbol: SRP_Calc_A_param */
/* Demangled: SRP_Calc_A_param */
int SRP_Calc_A_param(void);

/* Symbol: ssl3_send_channel_id */
/* Demangled: ssl3_send_channel_id */
int ssl3_send_channel_id(void);

/* Symbol: ssl3_send_client_certificate */
/* Demangled: ssl3_send_client_certificate */
int ssl3_send_client_certificate(void);

/* Symbol: ssl3_send_client_verify */
/* Demangled: ssl3_send_client_verify */
int ssl3_send_client_verify(void);

/* Symbol: ssl3_check_finished */
/* Demangled: ssl3_check_finished */
int ssl3_check_finished(void);

/* Symbol: ssl3_get_new_session_ticket */
/* Demangled: ssl3_get_new_session_ticket */
int ssl3_get_new_session_ticket(void);

/* Symbol: ssl3_get_cert_status */
/* Demangled: ssl3_get_cert_status */
int ssl3_get_cert_status(void);

/* Symbol: ssl3_get_key_exchange */
/* Demangled: ssl3_get_key_exchange */
int ssl3_get_key_exchange(void);

/* Symbol: ssl3_check_cert_and_algorithm */
/* Demangled: ssl3_check_cert_and_algorithm */
int ssl3_check_cert_and_algorithm(void);

/* Symbol: ssl3_get_certificate_request */
/* Demangled: ssl3_get_certificate_request */
int ssl3_get_certificate_request(void);

/* Symbol: ssl3_send_client_key_exchange */
/* Demangled: ssl3_send_client_key_exchange */
int ssl3_send_client_key_exchange(void);

/* Symbol: ssl3_client_hello */
/* Demangled: ssl3_client_hello */
int ssl3_client_hello(void);

/* Symbol: ssl3_get_server_hello */
/* Demangled: ssl3_get_server_hello */
int ssl3_get_server_hello(void);

/* Symbol: tls1_record_handshake_hashes_for_channel_id */
/* Demangled: tls1_record_handshake_hashes_for_channel_id */
int tls1_record_handshake_hashes_for_channel_id(void);

/* Symbol: ssl3_can_cutthrough */
/* Demangled: ssl3_can_cutthrough */
int ssl3_can_cutthrough(void);

/* Symbol: ssl3_get_server_certificate */
/* Demangled: ssl3_get_server_certificate */
int ssl3_get_server_certificate(void);

/* Symbol: ssl3_cleanup_key_block */
/* Demangled: ssl3_cleanup_key_block */
int ssl3_cleanup_key_block(void);

/* Symbol: ssl_get_ciphers_by_id */
/* Demangled: ssl_get_ciphers_by_id */
int ssl_get_ciphers_by_id(void);

/* Symbol: ssl3_digest_cached_records */
/* Demangled: ssl3_digest_cached_records */
int ssl3_digest_cached_records(void);

/* Symbol: ssl3_comp_find */
/* Demangled: ssl3_comp_find */
int ssl3_comp_find(void);

/* Symbol: ssl_parse_serverhello_tlsext */
/* Demangled: ssl_parse_serverhello_tlsext */
int ssl_parse_serverhello_tlsext(void);

/* Symbol: ssl_check_serverhello_tlsext */
/* Demangled: ssl_check_serverhello_tlsext */
int ssl_check_serverhello_tlsext(void);

/* Symbol: tls1_ec_curve_id2nid */
/* Demangled: tls1_ec_curve_id2nid */
int tls1_ec_curve_id2nid(void);

/* Symbol: srp_verify_server_param */
/* Demangled: srp_verify_server_param */
int srp_verify_server_param(void);

/* Symbol: tls12_get_sigid */
/* Demangled: tls12_get_sigid */
int tls12_get_sigid(void);

/* Symbol: tls12_get_hash */
/* Demangled: tls12_get_hash */
int tls12_get_hash(void);

/* Symbol: ssl_check_srvr_ecc_cert_and_alg */
/* Demangled: ssl_check_srvr_ecc_cert_and_alg */
int ssl_check_srvr_ecc_cert_and_alg(void);

/* Symbol: tls1_process_sigalgs */
/* Demangled: tls1_process_sigalgs */
int tls1_process_sigalgs(void);

/* Symbol: ssl_do_client_cert_cb */
/* Demangled: ssl_do_client_cert_cb */
int ssl_do_client_cert_cb(void);

/* Symbol: SRP_generate_client_master_secret */
/* Demangled: SRP_generate_client_master_secret */
int SRP_generate_client_master_secret(void);

/* Symbol: tls12_get_sigandhash */
/* Demangled: tls12_get_sigandhash */
int tls12_get_sigandhash(void);

/* Symbol: tls1_channel_id_hash */
/* Demangled: tls1_channel_id_hash */
int tls1_channel_id_hash(void);

/* Symbol: SSL_get_client_CA_list */
/* Demangled: SSL_get_client_CA_list */
int SSL_get_client_CA_list(void);

/* Symbol: ssl3_read */
/* Demangled: ssl3_read */
int ssl3_read(void);

/* Symbol: ssl3_peek */
/* Demangled: ssl3_peek */
int ssl3_peek(void);

/* Symbol: ssl3_write */
/* Demangled: ssl3_write */
int ssl3_write(void);

/* Symbol: ssl3_pending */
/* Demangled: ssl3_pending */
int ssl3_pending(void);

/* Symbol: ssl3_default_timeout */
/* Demangled: ssl3_default_timeout */
int ssl3_default_timeout(void);

/* Symbol: SSLv3_enc_data */
/* Demangled: SSLv3_enc_data */
extern void* SSLv3_enc_data;

/* Symbol: ssl3_change_cipher_state */
/* Demangled: ssl3_change_cipher_state */
int ssl3_change_cipher_state(void);

/* Symbol: ssl3_setup_key_block */
/* Demangled: ssl3_setup_key_block */
int ssl3_setup_key_block(void);

/* Symbol: ssl3_enc */
/* Demangled: ssl3_enc */
int ssl3_enc(void);

/* Symbol: ssl3_free_digest_list */
/* Demangled: ssl3_free_digest_list */
int ssl3_free_digest_list(void);

/* Symbol: ssl_get_handshake_digest */
/* Demangled: ssl_get_handshake_digest */
int ssl_get_handshake_digest(void);

/* Symbol: ssl_get_algorithm2 */
/* Demangled: ssl_get_algorithm2 */
int ssl_get_algorithm2(void);

/* Symbol: ssl3_cert_verify_mac */
/* Demangled: ssl3_cert_verify_mac */
int ssl3_cert_verify_mac(void);

/* Symbol: ssl3_final_finish_mac */
/* Demangled: ssl3_final_finish_mac */
int ssl3_final_finish_mac(void);

/* Symbol: n_ssl3_mac */
/* Demangled: n_ssl3_mac */
int n_ssl3_mac(void);

/* Symbol: ssl3_generate_master_secret */
/* Demangled: ssl3_generate_master_secret */
int ssl3_generate_master_secret(void);

/* Symbol: ssl3_alert_code */
/* Demangled: ssl3_alert_code */
int ssl3_alert_code(void);

/* Symbol: ssl3_ciphers */
/* Demangled: ssl3_ciphers */
extern void* ssl3_ciphers;

/* Symbol: SSL_SRP_CTX_init */
/* Demangled: SSL_SRP_CTX_init */
int SSL_SRP_CTX_init(void);

/* Symbol: SSL_SRP_CTX_free */
/* Demangled: SSL_SRP_CTX_free */
int SSL_SRP_CTX_free(void);

/* Symbol: ssl_cert_inst */
/* Demangled: ssl_cert_inst */
int ssl_cert_inst(void);

/* Symbol: ssl3_choose_cipher */
/* Demangled: ssl3_choose_cipher */
int ssl3_choose_cipher(void);

/* Symbol: ssl_set_cert_masks */
/* Demangled: ssl_set_cert_masks */
int ssl_set_cert_masks(void);

/* Symbol: tls1_ec_nid2curve_id */
/* Demangled: tls1_ec_nid2curve_id */
int tls1_ec_nid2curve_id(void);

/* Symbol: ssl3_get_req_cert_type */
/* Demangled: ssl3_get_req_cert_type */
int ssl3_get_req_cert_type(void);

/* Symbol: ssl3_version_str */
/* Demangled: ssl3_version_str */
extern void* ssl3_version_str;

/* Symbol: ssl3_accept */
/* Demangled: ssl3_accept */
int ssl3_accept(void);

/* Symbol: ssl3_get_next_proto */
/* Demangled: ssl3_get_next_proto */
int ssl3_get_next_proto(void);

/* Symbol: ssl3_check_client_hello */
/* Demangled: ssl3_check_client_hello */
int ssl3_check_client_hello(void);

/* Symbol: ssl3_get_cert_verify */
/* Demangled: ssl3_get_cert_verify */
int ssl3_get_cert_verify(void);

/* Symbol: ssl3_send_server_hello */
/* Demangled: ssl3_send_server_hello */
int ssl3_send_server_hello(void);

/* Symbol: ssl3_get_channel_id */
/* Demangled: ssl3_get_channel_id */
int ssl3_get_channel_id(void);

/* Symbol: ssl3_get_client_hello */
/* Demangled: ssl3_get_client_hello */
int ssl3_get_client_hello(void);

/* Symbol: SSL_srp_server_param_with_username */
/* Demangled: SSL_srp_server_param_with_username */
int SSL_srp_server_param_with_username(void);

/* Symbol: ssl3_send_newsession_ticket */
/* Demangled: ssl3_send_newsession_ticket */
int ssl3_send_newsession_ticket(void);

/* Symbol: ssl3_send_cert_status */
/* Demangled: ssl3_send_cert_status */
int ssl3_send_cert_status(void);

/* Symbol: ssl3_send_server_done */
/* Demangled: ssl3_send_server_done */
int ssl3_send_server_done(void);

/* Symbol: ssl3_get_client_key_exchange */
/* Demangled: ssl3_get_client_key_exchange */
int ssl3_get_client_key_exchange(void);

/* Symbol: ssl3_send_hello_request */
/* Demangled: ssl3_send_hello_request */
int ssl3_send_hello_request(void);

/* Symbol: ssl3_get_client_certificate */
/* Demangled: ssl3_get_client_certificate */
int ssl3_get_client_certificate(void);

/* Symbol: ssl3_send_server_certificate */
/* Demangled: ssl3_send_server_certificate */
int ssl3_send_server_certificate(void);

/* Symbol: ssl3_send_server_key_exchange */
/* Demangled: ssl3_send_server_key_exchange */
int ssl3_send_server_key_exchange(void);

/* Symbol: ssl3_send_certificate_request */
/* Demangled: ssl3_send_certificate_request */
int ssl3_send_certificate_request(void);

/* Symbol: ssl_parse_clienthello_tlsext */
/* Demangled: ssl_parse_clienthello_tlsext */
int ssl_parse_clienthello_tlsext(void);

/* Symbol: ssl_check_clienthello_tlsext_early */
/* Demangled: ssl_check_clienthello_tlsext_early */
int ssl_check_clienthello_tlsext_early(void);

/* Symbol: ssl_check_clienthello_tlsext_late */
/* Demangled: ssl_check_clienthello_tlsext_late */
int ssl_check_clienthello_tlsext_late(void);

/* Symbol: ssl_prepare_serverhello_tlsext */
/* Demangled: ssl_prepare_serverhello_tlsext */
int ssl_prepare_serverhello_tlsext(void);

/* Symbol: ssl_add_serverhello_tlsext */
/* Demangled: ssl_add_serverhello_tlsext */
int ssl_add_serverhello_tlsext(void);

/* Symbol: ssl_get_server_send_cert */
/* Demangled: ssl_get_server_send_cert */
int ssl_get_server_send_cert(void);

/* Symbol: ssl_get_sign_pkey */
/* Demangled: ssl_get_sign_pkey */
int ssl_get_sign_pkey(void);

/* Symbol: tls12_get_req_sig_algs */
/* Demangled: tls12_get_req_sig_algs */
int tls12_get_req_sig_algs(void);

/* Symbol: SRP_generate_server_master_secret */
/* Demangled: SRP_generate_server_master_secret */
int SRP_generate_server_master_secret(void);

/* Symbol: i2d_SSL_SESSION */
/* Demangled: i2d_SSL_SESSION */
int i2d_SSL_SESSION(void);

/* Symbol: d2i_SSL_SESSION */
/* Demangled: d2i_SSL_SESSION */
int d2i_SSL_SESSION(void);

/* Symbol: SSL_SESSION_free */
/* Demangled: SSL_SESSION_free */
int SSL_SESSION_free(void);

/* Symbol: SSL_library_init */
/* Demangled: SSL_library_init */
int SSL_library_init(void);

/* Symbol: SSL_COMP_get_compression_methods */
/* Demangled: SSL_COMP_get_compression_methods */
int SSL_COMP_get_compression_methods(void);

/* Symbol: ssl_load_ciphers */
/* Demangled: ssl_load_ciphers */
int ssl_load_ciphers(void);

/* Symbol: SSL_SESSION_new */
/* Demangled: SSL_SESSION_new */
int SSL_SESSION_new(void);

/* Symbol: SSL_get_ex_data_X509_STORE_CTX_idx */
/* Demangled: SSL_get_ex_data_X509_STORE_CTX_idx */
int SSL_get_ex_data_X509_STORE_CTX_idx(void);

/* Symbol: ssl_cert_new */
/* Demangled: ssl_cert_new */
int ssl_cert_new(void);

/* Symbol: ssl_cert_dup */
/* Demangled: ssl_cert_dup */
int ssl_cert_dup(void);

/* Symbol: ssl_cert_free */
/* Demangled: ssl_cert_free */
int ssl_cert_free(void);

/* Symbol: SSL_dup_CA_list */
/* Demangled: SSL_dup_CA_list */
int SSL_dup_CA_list(void);

/* Symbol: SSL_set_client_CA_list */
/* Demangled: SSL_set_client_CA_list */
int SSL_set_client_CA_list(void);

/* Symbol: SSL_CTX_set_client_CA_list */
/* Demangled: SSL_CTX_set_client_CA_list */
int SSL_CTX_set_client_CA_list(void);

/* Symbol: SSL_CTX_get_client_CA_list */
/* Demangled: SSL_CTX_get_client_CA_list */
int SSL_CTX_get_client_CA_list(void);

/* Symbol: SSL_add_client_CA */
/* Demangled: SSL_add_client_CA */
int SSL_add_client_CA(void);

/* Symbol: SSL_CTX_add_client_CA */
/* Demangled: SSL_CTX_add_client_CA */
int SSL_CTX_add_client_CA(void);

/* Symbol: SSL_load_client_CA_file */
/* Demangled: SSL_load_client_CA_file */
int SSL_load_client_CA_file(void);

/* Symbol: SSL_add_file_cert_subjects_to_stack */
/* Demangled: SSL_add_file_cert_subjects_to_stack */
int SSL_add_file_cert_subjects_to_stack(void);

/* Symbol: SSL_add_dir_cert_subjects_to_stack */
/* Demangled: SSL_add_dir_cert_subjects_to_stack */
int SSL_add_dir_cert_subjects_to_stack(void);

/* Symbol: ssl_create_cipher_list */
/* Demangled: ssl_create_cipher_list */
int ssl_create_cipher_list(void);

/* Symbol: SSL_CIPHER_description */
/* Demangled: SSL_CIPHER_description */
int SSL_CIPHER_description(void);

/* Symbol: SSL_CIPHER_get_version */
/* Demangled: SSL_CIPHER_get_version */
int SSL_CIPHER_get_version(void);

/* Symbol: SSL_CIPHER_get_name */
/* Demangled: SSL_CIPHER_get_name */
int SSL_CIPHER_get_name(void);

/* Symbol: SSL_CIPHER_get_bits */
/* Demangled: SSL_CIPHER_get_bits */
int SSL_CIPHER_get_bits(void);

/* Symbol: SSL_CIPHER_get_id */
/* Demangled: SSL_CIPHER_get_id */
int SSL_CIPHER_get_id(void);

/* Symbol: SSL_CIPHER_authentication_method */
/* Demangled: SSL_CIPHER_authentication_method */
int SSL_CIPHER_authentication_method(void);

/* Symbol: SSL_COMP_add_compression_method */
/* Demangled: SSL_COMP_add_compression_method */
int SSL_COMP_add_compression_method(void);

/* Symbol: SSL_COMP_get_name */
/* Demangled: SSL_COMP_get_name */
int SSL_COMP_get_name(void);

/* Symbol: ERR_load_SSL_strings */
/* Demangled: ERR_load_SSL_strings */
int ERR_load_SSL_strings(void);

/* Symbol: SSL_load_error_strings */
/* Demangled: SSL_load_error_strings */
int SSL_load_error_strings(void);

/* Symbol: ssl_clear_bad_session */
/* Demangled: ssl_clear_bad_session */
int ssl_clear_bad_session(void);

/* Symbol: ssl_clear_cipher_ctx */
/* Demangled: ssl_clear_cipher_ctx */
int ssl_clear_cipher_ctx(void);

/* Symbol: ssl_clear_hash_ctx */
/* Demangled: ssl_clear_hash_ctx */
int ssl_clear_hash_ctx(void);

/* Symbol: SSL_CTX_set_ssl_version */
/* Demangled: SSL_CTX_set_ssl_version */
int SSL_CTX_set_ssl_version(void);

/* Symbol: SSL_CTX_free */
/* Demangled: SSL_CTX_free */
int SSL_CTX_free(void);

/* Symbol: SSL_CTX_flush_sessions */
/* Demangled: SSL_CTX_flush_sessions */
int SSL_CTX_flush_sessions(void);

/* Symbol: SSL_CTX_SRP_CTX_free */
/* Demangled: SSL_CTX_SRP_CTX_free */
int SSL_CTX_SRP_CTX_free(void);

/* Symbol: SSL_CTX_set_session_id_context */
/* Demangled: SSL_CTX_set_session_id_context */
int SSL_CTX_set_session_id_context(void);

/* Symbol: SSL_set_session_id_context */
/* Demangled: SSL_set_session_id_context */
int SSL_set_session_id_context(void);

/* Symbol: SSL_CTX_set_generate_session_id */
/* Demangled: SSL_CTX_set_generate_session_id */
int SSL_CTX_set_generate_session_id(void);

/* Symbol: SSL_set_generate_session_id */
/* Demangled: SSL_set_generate_session_id */
int SSL_set_generate_session_id(void);

/* Symbol: SSL_has_matching_session_id */
/* Demangled: SSL_has_matching_session_id */
int SSL_has_matching_session_id(void);

/* Symbol: SSL_CTX_set_purpose */
/* Demangled: SSL_CTX_set_purpose */
int SSL_CTX_set_purpose(void);

/* Symbol: SSL_set_purpose */
/* Demangled: SSL_set_purpose */
int SSL_set_purpose(void);

/* Symbol: SSL_CTX_set_trust */
/* Demangled: SSL_CTX_set_trust */
int SSL_CTX_set_trust(void);

/* Symbol: SSL_set_trust */
/* Demangled: SSL_set_trust */
int SSL_set_trust(void);

/* Symbol: SSL_CTX_set1_param */
/* Demangled: SSL_CTX_set1_param */
int SSL_CTX_set1_param(void);

/* Symbol: SSL_set1_param */
/* Demangled: SSL_set1_param */
int SSL_set1_param(void);

/* Symbol: SSL_get_fd */
/* Demangled: SSL_get_fd */
int SSL_get_fd(void);

/* Symbol: SSL_get_rfd */
/* Demangled: SSL_get_rfd */
int SSL_get_rfd(void);

/* Symbol: SSL_get_wfd */
/* Demangled: SSL_get_wfd */
int SSL_get_wfd(void);

/* Symbol: SSL_set_fd */
/* Demangled: SSL_set_fd */
int SSL_set_fd(void);

/* Symbol: SSL_set_wfd */
/* Demangled: SSL_set_wfd */
int SSL_set_wfd(void);

/* Symbol: SSL_set_rfd */
/* Demangled: SSL_set_rfd */
int SSL_set_rfd(void);

/* Symbol: SSL_get_finished */
/* Demangled: SSL_get_finished */
int SSL_get_finished(void);

/* Symbol: SSL_get_peer_finished */
/* Demangled: SSL_get_peer_finished */
int SSL_get_peer_finished(void);

/* Symbol: SSL_get_verify_mode */
/* Demangled: SSL_get_verify_mode */
int SSL_get_verify_mode(void);

/* Symbol: SSL_get_verify_depth */
/* Demangled: SSL_get_verify_depth */
int SSL_get_verify_depth(void);

/* Symbol: SSL_get_verify_callback */
/* Demangled: SSL_get_verify_callback */
int SSL_get_verify_callback(void);

/* Symbol: SSL_CTX_get_verify_mode */
/* Demangled: SSL_CTX_get_verify_mode */
int SSL_CTX_get_verify_mode(void);

/* Symbol: SSL_CTX_get_verify_depth */
/* Demangled: SSL_CTX_get_verify_depth */
int SSL_CTX_get_verify_depth(void);

/* Symbol: SSL_CTX_get_verify_callback */
/* Demangled: SSL_CTX_get_verify_callback */
int SSL_CTX_get_verify_callback(void);

/* Symbol: SSL_set_verify */
/* Demangled: SSL_set_verify */
int SSL_set_verify(void);

/* Symbol: SSL_set_verify_depth */
/* Demangled: SSL_set_verify_depth */
int SSL_set_verify_depth(void);

/* Symbol: SSL_set_read_ahead */
/* Demangled: SSL_set_read_ahead */
int SSL_set_read_ahead(void);

/* Symbol: SSL_get_read_ahead */
/* Demangled: SSL_get_read_ahead */
int SSL_get_read_ahead(void);

/* Symbol: SSL_get_peer_certificate */
/* Demangled: SSL_get_peer_certificate */
int SSL_get_peer_certificate(void);

/* Symbol: SSL_get_peer_cert_chain */
/* Demangled: SSL_get_peer_cert_chain */
int SSL_get_peer_cert_chain(void);

/* Symbol: SSL_get_session */
/* Demangled: SSL_get_session */
int SSL_get_session(void);

/* Symbol: SSL_set_session */
/* Demangled: SSL_set_session */
int SSL_set_session(void);

/* Symbol: SSL_CTX_check_private_key */
/* Demangled: SSL_CTX_check_private_key */
int SSL_CTX_check_private_key(void);

/* Symbol: SSL_check_private_key */
/* Demangled: SSL_check_private_key */
int SSL_check_private_key(void);

/* Symbol: SSL_get_default_timeout */
/* Demangled: SSL_get_default_timeout */
int SSL_get_default_timeout(void);

/* Symbol: SSL_renegotiate_abbreviated */
/* Demangled: SSL_renegotiate_abbreviated */
int SSL_renegotiate_abbreviated(void);

/* Symbol: SSL_renegotiate_pending */
/* Demangled: SSL_renegotiate_pending */
int SSL_renegotiate_pending(void);

/* Symbol: SSL_callback_ctrl */
/* Demangled: SSL_callback_ctrl */
int SSL_callback_ctrl(void);

/* Symbol: SSL_CTX_sessions */
/* Demangled: SSL_CTX_sessions */
int SSL_CTX_sessions(void);

/* Symbol: SSL_CTX_ctrl */
/* Demangled: SSL_CTX_ctrl */
int SSL_CTX_ctrl(void);

/* Symbol: SSL_CTX_callback_ctrl */
/* Demangled: SSL_CTX_callback_ctrl */
int SSL_CTX_callback_ctrl(void);

/* Symbol: ssl_cipher_id_cmp */
/* Demangled: ssl_cipher_id_cmp */
int ssl_cipher_id_cmp(void);

/* Symbol: SSL_get_cipher_list */
/* Demangled: SSL_get_cipher_list */
int SSL_get_cipher_list(void);

/* Symbol: SSL_CTX_set_cipher_list */
/* Demangled: SSL_CTX_set_cipher_list */
int SSL_CTX_set_cipher_list(void);

/* Symbol: SSL_set_cipher_list */
/* Demangled: SSL_set_cipher_list */
int SSL_set_cipher_list(void);

/* Symbol: SSL_set_cipher_lists */
/* Demangled: SSL_set_cipher_lists */
int SSL_set_cipher_lists(void);

/* Symbol: SSL_get_shared_ciphers */
/* Demangled: SSL_get_shared_ciphers */
int SSL_get_shared_ciphers(void);

/* Symbol: SSL_get_servername */
/* Demangled: SSL_get_servername */
int SSL_get_servername(void);

/* Symbol: SSL_get_servername_type */
/* Demangled: SSL_get_servername_type */
int SSL_get_servername_type(void);

/* Symbol: SSL_select_next_proto */
/* Demangled: SSL_select_next_proto */
int SSL_select_next_proto(void);

/* Symbol: SSL_get0_next_proto_negotiated */
/* Demangled: SSL_get0_next_proto_negotiated */
int SSL_get0_next_proto_negotiated(void);

/* Symbol: SSL_CTX_set_next_protos_advertised_cb */
/* Demangled: SSL_CTX_set_next_protos_advertised_cb */
int SSL_CTX_set_next_protos_advertised_cb(void);

/* Symbol: SSL_CTX_set_next_proto_select_cb */
/* Demangled: SSL_CTX_set_next_proto_select_cb */
int SSL_CTX_set_next_proto_select_cb(void);

/* Symbol: SSL_CTX_set_alpn_protos */
/* Demangled: SSL_CTX_set_alpn_protos */
int SSL_CTX_set_alpn_protos(void);

/* Symbol: SSL_set_alpn_protos */
/* Demangled: SSL_set_alpn_protos */
int SSL_set_alpn_protos(void);

/* Symbol: SSL_CTX_set_alpn_select_cb */
/* Demangled: SSL_CTX_set_alpn_select_cb */
int SSL_CTX_set_alpn_select_cb(void);

/* Symbol: SSL_get0_alpn_selected */
/* Demangled: SSL_get0_alpn_selected */
int SSL_get0_alpn_selected(void);

/* Symbol: SSL_export_keying_material */
/* Demangled: SSL_export_keying_material */
int SSL_export_keying_material(void);

/* Symbol: SSL_CTX_new */
/* Demangled: SSL_CTX_new */
int SSL_CTX_new(void);

/* Symbol: SSL_CTX_SRP_CTX_init */
/* Demangled: SSL_CTX_SRP_CTX_init */
int SSL_CTX_SRP_CTX_init(void);

/* Symbol: SSL_CTX_set_default_passwd_cb */
/* Demangled: SSL_CTX_set_default_passwd_cb */
int SSL_CTX_set_default_passwd_cb(void);

/* Symbol: SSL_CTX_set_default_passwd_cb_userdata */
/* Demangled: SSL_CTX_set_default_passwd_cb_userdata */
int SSL_CTX_set_default_passwd_cb_userdata(void);

/* Symbol: SSL_CTX_set_cert_verify_callback */
/* Demangled: SSL_CTX_set_cert_verify_callback */
int SSL_CTX_set_cert_verify_callback(void);

/* Symbol: SSL_CTX_set_verify */
/* Demangled: SSL_CTX_set_verify */
int SSL_CTX_set_verify(void);

/* Symbol: SSL_CTX_set_verify_depth */
/* Demangled: SSL_CTX_set_verify_depth */
int SSL_CTX_set_verify_depth(void);

/* Symbol: ssl_get_server_send_pkey */
/* Demangled: ssl_get_server_send_pkey */
int ssl_get_server_send_pkey(void);

/* Symbol: SSL_CTX_add_session */
/* Demangled: SSL_CTX_add_session */
int SSL_CTX_add_session(void);

/* Symbol: SSL_get_ssl_method */
/* Demangled: SSL_get_ssl_method */
int SSL_get_ssl_method(void);

/* Symbol: SSL_set_ssl_method */
/* Demangled: SSL_set_ssl_method */
int SSL_set_ssl_method(void);

/* Symbol: SSL_want */
/* Demangled: SSL_want */
int SSL_want(void);

/* Symbol: ssl_bad_method */
/* Demangled: ssl_bad_method */
int ssl_bad_method(void);

/* Symbol: SSL_get_version */
/* Demangled: SSL_get_version */
int SSL_get_version(void);

/* Symbol: SSL_SESSION_get_version */
/* Demangled: SSL_SESSION_get_version */
int SSL_SESSION_get_version(void);

/* Symbol: SSL_authentication_method */
/* Demangled: SSL_authentication_method */
int SSL_authentication_method(void);

/* Symbol: SSL_get_SSL_CTX */
/* Demangled: SSL_get_SSL_CTX */
int SSL_get_SSL_CTX(void);

/* Symbol: SSL_get_certificate */
/* Demangled: SSL_get_certificate */
int SSL_get_certificate(void);

/* Symbol: SSL_get_privatekey */
/* Demangled: SSL_get_privatekey */
int SSL_get_privatekey(void);

/* Symbol: SSL_get_current_cipher */
/* Demangled: SSL_get_current_cipher */
int SSL_get_current_cipher(void);

/* Symbol: SSL_get_current_compression */
/* Demangled: SSL_get_current_compression */
int SSL_get_current_compression(void);

/* Symbol: SSL_get_current_expansion */
/* Demangled: SSL_get_current_expansion */
int SSL_get_current_expansion(void);

/* Symbol: SSL_CTX_set_quiet_shutdown */
/* Demangled: SSL_CTX_set_quiet_shutdown */
int SSL_CTX_set_quiet_shutdown(void);

/* Symbol: SSL_CTX_get_quiet_shutdown */
/* Demangled: SSL_CTX_get_quiet_shutdown */
int SSL_CTX_get_quiet_shutdown(void);

/* Symbol: SSL_set_quiet_shutdown */
/* Demangled: SSL_set_quiet_shutdown */
int SSL_set_quiet_shutdown(void);

/* Symbol: SSL_get_quiet_shutdown */
/* Demangled: SSL_get_quiet_shutdown */
int SSL_get_quiet_shutdown(void);

/* Symbol: SSL_set_shutdown */
/* Demangled: SSL_set_shutdown */
int SSL_set_shutdown(void);

/* Symbol: SSL_get_shutdown */
/* Demangled: SSL_get_shutdown */
int SSL_get_shutdown(void);

/* Symbol: SSL_set_SSL_CTX */
/* Demangled: SSL_set_SSL_CTX */
int SSL_set_SSL_CTX(void);

/* Symbol: SSL_CTX_set_default_verify_paths */
/* Demangled: SSL_CTX_set_default_verify_paths */
int SSL_CTX_set_default_verify_paths(void);

/* Symbol: SSL_CTX_load_verify_locations */
/* Demangled: SSL_CTX_load_verify_locations */
int SSL_CTX_load_verify_locations(void);

/* Symbol: SSL_set_state */
/* Demangled: SSL_set_state */
int SSL_set_state(void);

/* Symbol: SSL_set_verify_result */
/* Demangled: SSL_set_verify_result */
int SSL_set_verify_result(void);

/* Symbol: SSL_get_verify_result */
/* Demangled: SSL_get_verify_result */
int SSL_get_verify_result(void);

/* Symbol: SSL_get_ex_new_index */
/* Demangled: SSL_get_ex_new_index */
int SSL_get_ex_new_index(void);

/* Symbol: SSL_set_ex_data */
/* Demangled: SSL_set_ex_data */
int SSL_set_ex_data(void);

/* Symbol: SSL_get_ex_data */
/* Demangled: SSL_get_ex_data */
int SSL_get_ex_data(void);

/* Symbol: SSL_CTX_get_ex_new_index */
/* Demangled: SSL_CTX_get_ex_new_index */
int SSL_CTX_get_ex_new_index(void);

/* Symbol: SSL_CTX_set_ex_data */
/* Demangled: SSL_CTX_set_ex_data */
int SSL_CTX_set_ex_data(void);

/* Symbol: SSL_CTX_get_ex_data */
/* Demangled: SSL_CTX_get_ex_data */
int SSL_CTX_get_ex_data(void);

/* Symbol: SSL_CTX_get_cert_store */
/* Demangled: SSL_CTX_get_cert_store */
int SSL_CTX_get_cert_store(void);

/* Symbol: SSL_CTX_set_cert_store */
/* Demangled: SSL_CTX_set_cert_store */
int SSL_CTX_set_cert_store(void);

/* Symbol: SSL_CTX_set_tmp_rsa_callback */
/* Demangled: SSL_CTX_set_tmp_rsa_callback */
int SSL_CTX_set_tmp_rsa_callback(void);

/* Symbol: SSL_set_tmp_rsa_callback */
/* Demangled: SSL_set_tmp_rsa_callback */
int SSL_set_tmp_rsa_callback(void);

/* Symbol: SSL_CTX_set_tmp_dh_callback */
/* Demangled: SSL_CTX_set_tmp_dh_callback */
int SSL_CTX_set_tmp_dh_callback(void);

/* Symbol: SSL_set_tmp_dh_callback */
/* Demangled: SSL_set_tmp_dh_callback */
int SSL_set_tmp_dh_callback(void);

/* Symbol: SSL_CTX_set_tmp_ecdh_callback */
/* Demangled: SSL_CTX_set_tmp_ecdh_callback */
int SSL_CTX_set_tmp_ecdh_callback(void);

/* Symbol: SSL_set_tmp_ecdh_callback */
/* Demangled: SSL_set_tmp_ecdh_callback */
int SSL_set_tmp_ecdh_callback(void);

/* Symbol: SSL_CTX_use_psk_identity_hint */
/* Demangled: SSL_CTX_use_psk_identity_hint */
int SSL_CTX_use_psk_identity_hint(void);

/* Symbol: SSL_use_psk_identity_hint */
/* Demangled: SSL_use_psk_identity_hint */
int SSL_use_psk_identity_hint(void);

/* Symbol: SSL_get_psk_identity_hint */
/* Demangled: SSL_get_psk_identity_hint */
int SSL_get_psk_identity_hint(void);

/* Symbol: SSL_get_psk_identity */
/* Demangled: SSL_get_psk_identity */
int SSL_get_psk_identity(void);

/* Symbol: SSL_set_psk_client_callback */
/* Demangled: SSL_set_psk_client_callback */
int SSL_set_psk_client_callback(void);

/* Symbol: SSL_CTX_set_psk_client_callback */
/* Demangled: SSL_CTX_set_psk_client_callback */
int SSL_CTX_set_psk_client_callback(void);

/* Symbol: SSL_set_psk_server_callback */
/* Demangled: SSL_set_psk_server_callback */
int SSL_set_psk_server_callback(void);

/* Symbol: SSL_CTX_set_psk_server_callback */
/* Demangled: SSL_CTX_set_psk_server_callback */
int SSL_CTX_set_psk_server_callback(void);

/* Symbol: SSL_CTX_set_msg_callback */
/* Demangled: SSL_CTX_set_msg_callback */
int SSL_CTX_set_msg_callback(void);

/* Symbol: SSL_set_msg_callback */
/* Demangled: SSL_set_msg_callback */
int SSL_set_msg_callback(void);

/* Symbol: SSL_set_debug */
/* Demangled: SSL_set_debug */
int SSL_set_debug(void);

/* Symbol: SSL_cache_hit */
/* Demangled: SSL_cache_hit */
int SSL_cache_hit(void);

/* Symbol: SSL_version_str */
/* Demangled: SSL_version_str */
extern void* SSL_version_str;

/* Symbol: SSL_use_certificate_file */
/* Demangled: SSL_use_certificate_file */
int SSL_use_certificate_file(void);

/* Symbol: SSL_use_certificate_ASN1 */
/* Demangled: SSL_use_certificate_ASN1 */
int SSL_use_certificate_ASN1(void);

/* Symbol: SSL_use_RSAPrivateKey */
/* Demangled: SSL_use_RSAPrivateKey */
int SSL_use_RSAPrivateKey(void);

/* Symbol: SSL_use_RSAPrivateKey_file */
/* Demangled: SSL_use_RSAPrivateKey_file */
int SSL_use_RSAPrivateKey_file(void);

/* Symbol: SSL_use_RSAPrivateKey_ASN1 */
/* Demangled: SSL_use_RSAPrivateKey_ASN1 */
int SSL_use_RSAPrivateKey_ASN1(void);

/* Symbol: SSL_use_PrivateKey_file */
/* Demangled: SSL_use_PrivateKey_file */
int SSL_use_PrivateKey_file(void);

/* Symbol: SSL_use_PrivateKey_ASN1 */
/* Demangled: SSL_use_PrivateKey_ASN1 */
int SSL_use_PrivateKey_ASN1(void);

/* Symbol: SSL_CTX_use_certificate */
/* Demangled: SSL_CTX_use_certificate */
int SSL_CTX_use_certificate(void);

/* Symbol: SSL_CTX_use_certificate_file */
/* Demangled: SSL_CTX_use_certificate_file */
int SSL_CTX_use_certificate_file(void);

/* Symbol: SSL_CTX_use_certificate_ASN1 */
/* Demangled: SSL_CTX_use_certificate_ASN1 */
int SSL_CTX_use_certificate_ASN1(void);

/* Symbol: SSL_CTX_use_RSAPrivateKey */
/* Demangled: SSL_CTX_use_RSAPrivateKey */
int SSL_CTX_use_RSAPrivateKey(void);

/* Symbol: SSL_CTX_use_RSAPrivateKey_file */
/* Demangled: SSL_CTX_use_RSAPrivateKey_file */
int SSL_CTX_use_RSAPrivateKey_file(void);

/* Symbol: SSL_CTX_use_RSAPrivateKey_ASN1 */
/* Demangled: SSL_CTX_use_RSAPrivateKey_ASN1 */
int SSL_CTX_use_RSAPrivateKey_ASN1(void);

/* Symbol: SSL_CTX_use_PrivateKey */
/* Demangled: SSL_CTX_use_PrivateKey */
int SSL_CTX_use_PrivateKey(void);

/* Symbol: SSL_CTX_use_PrivateKey_file */
/* Demangled: SSL_CTX_use_PrivateKey_file */
int SSL_CTX_use_PrivateKey_file(void);

/* Symbol: SSL_CTX_use_PrivateKey_ASN1 */
/* Demangled: SSL_CTX_use_PrivateKey_ASN1 */
int SSL_CTX_use_PrivateKey_ASN1(void);

/* Symbol: SSL_use_certificate_chain */
/* Demangled: SSL_use_certificate_chain */
int SSL_use_certificate_chain(void);

/* Symbol: SSL_CTX_use_certificate_chain_file */
/* Demangled: SSL_CTX_use_certificate_chain_file */
int SSL_CTX_use_certificate_chain_file(void);

/* Symbol: SSL_get1_session */
/* Demangled: SSL_get1_session */
int SSL_get1_session(void);

/* Symbol: SSL_SESSION_get_ex_new_index */
/* Demangled: SSL_SESSION_get_ex_new_index */
int SSL_SESSION_get_ex_new_index(void);

/* Symbol: SSL_SESSION_set_ex_data */
/* Demangled: SSL_SESSION_set_ex_data */
int SSL_SESSION_set_ex_data(void);

/* Symbol: SSL_SESSION_get_ex_data */
/* Demangled: SSL_SESSION_get_ex_data */
int SSL_SESSION_get_ex_data(void);

/* Symbol: SSL_SESSION_get_id */
/* Demangled: SSL_SESSION_get_id */
int SSL_SESSION_get_id(void);

/* Symbol: SSL_SESSION_get_compress_id */
/* Demangled: SSL_SESSION_get_compress_id */
int SSL_SESSION_get_compress_id(void);

/* Symbol: SSL_set_session_creation_enabled */
/* Demangled: SSL_set_session_creation_enabled */
int SSL_set_session_creation_enabled(void);

/* Symbol: tls1_process_ticket */
/* Demangled: tls1_process_ticket */
int tls1_process_ticket(void);

/* Symbol: SSL_SESSION_set_timeout */
/* Demangled: SSL_SESSION_set_timeout */
int SSL_SESSION_set_timeout(void);

/* Symbol: SSL_SESSION_get_timeout */
/* Demangled: SSL_SESSION_get_timeout */
int SSL_SESSION_get_timeout(void);

/* Symbol: SSL_SESSION_get_time */
/* Demangled: SSL_SESSION_get_time */
int SSL_SESSION_get_time(void);

/* Symbol: SSL_SESSION_set_time */
/* Demangled: SSL_SESSION_set_time */
int SSL_SESSION_set_time(void);

/* Symbol: SSL_SESSION_get0_peer */
/* Demangled: SSL_SESSION_get0_peer */
int SSL_SESSION_get0_peer(void);

/* Symbol: SSL_SESSION_set1_id_context */
/* Demangled: SSL_SESSION_set1_id_context */
int SSL_SESSION_set1_id_context(void);

/* Symbol: SSL_CTX_set_timeout */
/* Demangled: SSL_CTX_set_timeout */
int SSL_CTX_set_timeout(void);

/* Symbol: SSL_CTX_get_timeout */
/* Demangled: SSL_CTX_get_timeout */
int SSL_CTX_get_timeout(void);

/* Symbol: SSL_set_session_secret_cb */
/* Demangled: SSL_set_session_secret_cb */
int SSL_set_session_secret_cb(void);

/* Symbol: SSL_set_session_ticket_ext_cb */
/* Demangled: SSL_set_session_ticket_ext_cb */
int SSL_set_session_ticket_ext_cb(void);

/* Symbol: SSL_set_session_ticket_ext */
/* Demangled: SSL_set_session_ticket_ext */
int SSL_set_session_ticket_ext(void);

/* Symbol: SSL_CTX_sess_set_new_cb */
/* Demangled: SSL_CTX_sess_set_new_cb */
int SSL_CTX_sess_set_new_cb(void);

/* Symbol: SSL_CTX_sess_get_new_cb */
/* Demangled: SSL_CTX_sess_get_new_cb */
int SSL_CTX_sess_get_new_cb(void);

/* Symbol: SSL_CTX_sess_set_remove_cb */
/* Demangled: SSL_CTX_sess_set_remove_cb */
int SSL_CTX_sess_set_remove_cb(void);

/* Symbol: SSL_CTX_sess_get_remove_cb */
/* Demangled: SSL_CTX_sess_get_remove_cb */
int SSL_CTX_sess_get_remove_cb(void);

/* Symbol: SSL_CTX_sess_set_get_cb */
/* Demangled: SSL_CTX_sess_set_get_cb */
int SSL_CTX_sess_set_get_cb(void);

/* Symbol: SSL_CTX_sess_get_get_cb */
/* Demangled: SSL_CTX_sess_get_get_cb */
int SSL_CTX_sess_get_get_cb(void);

/* Symbol: SSL_CTX_set_info_callback */
/* Demangled: SSL_CTX_set_info_callback */
int SSL_CTX_set_info_callback(void);

/* Symbol: SSL_CTX_get_info_callback */
/* Demangled: SSL_CTX_get_info_callback */
int SSL_CTX_get_info_callback(void);

/* Symbol: SSL_CTX_set_client_cert_cb */
/* Demangled: SSL_CTX_set_client_cert_cb */
int SSL_CTX_set_client_cert_cb(void);

/* Symbol: SSL_CTX_get_client_cert_cb */
/* Demangled: SSL_CTX_get_client_cert_cb */
int SSL_CTX_get_client_cert_cb(void);

/* Symbol: SSL_CTX_set_channel_id_cb */
/* Demangled: SSL_CTX_set_channel_id_cb */
int SSL_CTX_set_channel_id_cb(void);

/* Symbol: SSL_CTX_get_channel_id_cb */
/* Demangled: SSL_CTX_get_channel_id_cb */
int SSL_CTX_get_channel_id_cb(void);

/* Symbol: SSL_CTX_set_client_cert_engine */
/* Demangled: SSL_CTX_set_client_cert_engine */
int SSL_CTX_set_client_cert_engine(void);

/* Symbol: SSL_CTX_set_cookie_generate_cb */
/* Demangled: SSL_CTX_set_cookie_generate_cb */
int SSL_CTX_set_cookie_generate_cb(void);

/* Symbol: SSL_CTX_set_cookie_verify_cb */
/* Demangled: SSL_CTX_set_cookie_verify_cb */
int SSL_CTX_set_cookie_verify_cb(void);

/* Symbol: PEM_read_bio_SSL_SESSION */
/* Demangled: PEM_read_bio_SSL_SESSION */
int PEM_read_bio_SSL_SESSION(void);

/* Symbol: PEM_read_SSL_SESSION */
/* Demangled: PEM_read_SSL_SESSION */
int PEM_read_SSL_SESSION(void);

/* Symbol: PEM_write_bio_SSL_SESSION */
/* Demangled: PEM_write_bio_SSL_SESSION */
int PEM_write_bio_SSL_SESSION(void);

/* Symbol: PEM_write_SSL_SESSION */
/* Demangled: PEM_write_SSL_SESSION */
int PEM_write_SSL_SESSION(void);

/* Symbol: SSL_state_string_long */
/* Demangled: SSL_state_string_long */
int SSL_state_string_long(void);

/* Symbol: SSL_rstate_string_long */
/* Demangled: SSL_rstate_string_long */
int SSL_rstate_string_long(void);

/* Symbol: SSL_state_string */
/* Demangled: SSL_state_string */
int SSL_state_string(void);

/* Symbol: SSL_alert_type_string_long */
/* Demangled: SSL_alert_type_string_long */
int SSL_alert_type_string_long(void);

/* Symbol: SSL_alert_type_string */
/* Demangled: SSL_alert_type_string */
int SSL_alert_type_string(void);

/* Symbol: SSL_alert_desc_string */
/* Demangled: SSL_alert_desc_string */
int SSL_alert_desc_string(void);

/* Symbol: SSL_alert_desc_string_long */
/* Demangled: SSL_alert_desc_string_long */
int SSL_alert_desc_string_long(void);

/* Symbol: SSL_rstate_string */
/* Demangled: SSL_rstate_string */
int SSL_rstate_string(void);

/* Symbol: SSL_SESSION_print_fp */
/* Demangled: SSL_SESSION_print_fp */
int SSL_SESSION_print_fp(void);

/* Symbol: SSL_SESSION_print */
/* Demangled: SSL_SESSION_print */
int SSL_SESSION_print(void);

/* Symbol: tls1_default_timeout */
/* Demangled: tls1_default_timeout */
int tls1_default_timeout(void);

/* Symbol: TLSv1_enc_data */
/* Demangled: TLSv1_enc_data */
extern void* TLSv1_enc_data;

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int __aeabi_idiv(void);

/* Symbol: tls1_enc */
/* Demangled: tls1_enc */
int tls1_enc(void);

/* Symbol: tls1_handshake_digest */
/* Demangled: tls1_handshake_digest */
int tls1_handshake_digest(void);

/* Symbol: ssl_add_clienthello_renegotiate_ext */
/* Demangled: ssl_add_clienthello_renegotiate_ext */
int ssl_add_clienthello_renegotiate_ext(void);

/* Symbol: ssl_add_serverhello_renegotiate_ext */
/* Demangled: ssl_add_serverhello_renegotiate_ext */
int ssl_add_serverhello_renegotiate_ext(void);

/* Symbol: ssl_parse_clienthello_renegotiate_ext */
/* Demangled: ssl_parse_clienthello_renegotiate_ext */
int ssl_parse_clienthello_renegotiate_ext(void);

/* Symbol: ssl_parse_serverhello_renegotiate_ext */
/* Demangled: ssl_parse_serverhello_renegotiate_ext */
int ssl_parse_serverhello_renegotiate_ext(void);

/* Symbol: tls1_version_str */
/* Demangled: tls1_version_str */
extern void* tls1_version_str;

/* Symbol: SSL_set_srp_server_param_pw */
/* Demangled: SSL_set_srp_server_param_pw */
int SSL_set_srp_server_param_pw(void);

/* Symbol: SSL_set_srp_server_param */
/* Demangled: SSL_set_srp_server_param */
int SSL_set_srp_server_param(void);

/* Symbol: SSL_get_srp_g */
/* Demangled: SSL_get_srp_g */
int SSL_get_srp_g(void);

/* Symbol: SSL_get_srp_N */
/* Demangled: SSL_get_srp_N */
int SSL_get_srp_N(void);

/* Symbol: SSL_get_srp_username */
/* Demangled: SSL_get_srp_username */
int SSL_get_srp_username(void);

/* Symbol: SSL_get_srp_userinfo */
/* Demangled: SSL_get_srp_userinfo */
int SSL_get_srp_userinfo(void);

/* Symbol: SSL_CTX_set_srp_username */
/* Demangled: SSL_CTX_set_srp_username */
int SSL_CTX_set_srp_username(void);

/* Symbol: SSL_CTX_set_srp_password */
/* Demangled: SSL_CTX_set_srp_password */
int SSL_CTX_set_srp_password(void);

/* Symbol: SSL_CTX_set_srp_strength */
/* Demangled: SSL_CTX_set_srp_strength */
int SSL_CTX_set_srp_strength(void);

/* Symbol: SSL_CTX_set_srp_verify_param_callback */
/* Demangled: SSL_CTX_set_srp_verify_param_callback */
int SSL_CTX_set_srp_verify_param_callback(void);

/* Symbol: SSL_CTX_set_srp_cb_arg */
/* Demangled: SSL_CTX_set_srp_cb_arg */
int SSL_CTX_set_srp_cb_arg(void);

/* Symbol: SSL_CTX_set_srp_username_callback */
/* Demangled: SSL_CTX_set_srp_username_callback */
int SSL_CTX_set_srp_username_callback(void);

/* Symbol: SSL_CTX_set_srp_client_pwd_callback */
/* Demangled: SSL_CTX_set_srp_client_pwd_callback */
int SSL_CTX_set_srp_client_pwd_callback(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: __divsi3 */
/* Demangled: __divsi3 */
int __divsi3(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

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

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBSSL_SS_H */
