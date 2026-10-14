/*
 * Reverse-Engineered ABI Specification for: libcharon-ss.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcharon-ss.so
 */

#ifndef BEGONIA_RE_LIBCHARON_SS_H
#define BEGONIA_RE_LIBCHARON_SS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: bus_create */
/* Demangled: bus_create */
int bus_create(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: file_logger_create */
/* Demangled: file_logger_create */
int file_logger_create(void);

/* Symbol: charon */
/* Demangled: charon */
extern void* charon;

/* Symbol: sys_logger_create */
/* Demangled: sys_logger_create */
int sys_logger_create(void);

/* Symbol: backend_manager_create */
/* Demangled: backend_manager_create */
int backend_manager_create(void);

/* Symbol: ike_version_names */
/* Demangled: ike_version_names */
extern void* ike_version_names;

/* Symbol: child_cfg_create */
/* Demangled: child_cfg_create */
int child_cfg_create(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: action_names */
/* Demangled: action_names */
extern void* action_names;

/* Symbol: ike_cfg_get_family */
/* Demangled: ike_cfg_get_family */
int ike_cfg_get_family(void);

/* Symbol: ike_cfg_create */
/* Demangled: ike_cfg_create */
int ike_cfg_create(void);

/* Symbol: peer_cfg_create */
/* Demangled: peer_cfg_create */
int peer_cfg_create(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: cert_policy_names */
/* Demangled: cert_policy_names */
extern void* cert_policy_names;

/* Symbol: unique_policy_names */
/* Demangled: unique_policy_names */
extern void* unique_policy_names;

/* Symbol: proposal_printf_hook */
/* Demangled: proposal_printf_hook */
int proposal_printf_hook(void);

/* Symbol: protocol_id_names */
/* Demangled: protocol_id_names */
extern void* protocol_id_names;

/* Symbol: proposal_create */
/* Demangled: proposal_create */
int proposal_create(void);

/* Symbol: proposal_create_default */
/* Demangled: proposal_create_default */
int proposal_create_default(void);

/* Symbol: proposal_create_from_string */
/* Demangled: proposal_create_from_string */
int proposal_create_from_string(void);

/* Symbol: controller_cb_empty */
/* Demangled: controller_cb_empty */
int controller_cb_empty(void);

/* Symbol: controller_create */
/* Demangled: controller_create */
int controller_create(void);

/* Symbol: daemon_create */
/* Demangled: daemon_create */
int daemon_create(void);

/* Symbol: eap_manager_create */
/* Demangled: eap_manager_create */
int eap_manager_create(void);

/* Symbol: xauth_manager_create */
/* Demangled: xauth_manager_create */
int xauth_manager_create(void);

/* Symbol: socket_manager_create */
/* Demangled: socket_manager_create */
int socket_manager_create(void);

/* Symbol: trap_manager_create */
/* Demangled: trap_manager_create */
int trap_manager_create(void);

/* Symbol: shunt_manager_create */
/* Demangled: shunt_manager_create */
int shunt_manager_create(void);

/* Symbol: kernel_handler_create */
/* Demangled: kernel_handler_create */
int kernel_handler_create(void);

/* Symbol: libcharon_deinit */
/* Demangled: libcharon_deinit */
int libcharon_deinit(void);

/* Symbol: libcharon_init */
/* Demangled: libcharon_init */
int libcharon_init(void);

/* Symbol: ike_sa_manager_create */
/* Demangled: ike_sa_manager_create */
int ike_sa_manager_create(void);

/* Symbol: start_action_job_create */
/* Demangled: start_action_job_create */
int start_action_job_create(void);

/* Symbol: receiver_create */
/* Demangled: receiver_create */
int receiver_create(void);

/* Symbol: sender_create */
/* Demangled: sender_create */
int sender_create(void);

/* Symbol: generator_create */
/* Demangled: generator_create */
int generator_create(void);

/* Symbol: generator_create_no_dbg */
/* Demangled: generator_create_no_dbg */
int generator_create_no_dbg(void);

/* Symbol: payload_type_names */
/* Demangled: payload_type_names */
extern void* payload_type_names;

/* Symbol: encoding_type_names */
/* Demangled: encoding_type_names */
extern void* encoding_type_names;

/* Symbol: message_create_from_packet */
/* Demangled: message_create_from_packet */
int message_create_from_packet(void);

/* Symbol: parser_create */
/* Demangled: parser_create */
int parser_create(void);

/* Symbol: message_create */
/* Demangled: message_create */
int message_create(void);

/* Symbol: message_create_defrag */
/* Demangled: message_create_defrag */
int message_create_defrag(void);

/* Symbol: notify_payload_create */
/* Demangled: notify_payload_create */
int notify_payload_create(void);

/* Symbol: ike_sa_id_create */
/* Demangled: ike_sa_id_create */
int ike_sa_id_create(void);

/* Symbol: payload_get_field */
/* Demangled: payload_get_field */
int payload_get_field(void);

/* Symbol: exchange_type_names */
/* Demangled: exchange_type_names */
extern void* exchange_type_names;

/* Symbol: payload_type_short_names */
/* Demangled: payload_type_short_names */
extern void* payload_type_short_names;

/* Symbol: notify_type_short_names */
/* Demangled: notify_type_short_names */
extern void* notify_type_short_names;

/* Symbol: hash_payload_create */
/* Demangled: hash_payload_create */
int hash_payload_create(void);

/* Symbol: encrypted_payload_create */
/* Demangled: encrypted_payload_create */
int encrypted_payload_create(void);

/* Symbol: ike_header_create_version */
/* Demangled: ike_header_create_version */
int ike_header_create_version(void);

/* Symbol: encrypted_fragment_payload_create_from_data */
/* Demangled: encrypted_fragment_payload_create_from_data */
int encrypted_fragment_payload_create_from_data(void);

/* Symbol: fragment_payload_create_from_data */
/* Demangled: fragment_payload_create_from_data */
int fragment_payload_create_from_data(void);

/* Symbol: encrypted_payload_create_from_plain */
/* Demangled: encrypted_payload_create_from_plain */
int encrypted_payload_create_from_plain(void);

/* Symbol: payload_is_known */
/* Demangled: payload_is_known */
int payload_is_known(void);

/* Symbol: payload_create */
/* Demangled: payload_create */
int payload_create(void);

/* Symbol: unknown_payload_create */
/* Demangled: unknown_payload_create */
int unknown_payload_create(void);

/* Symbol: auth_payload_create */
/* Demangled: auth_payload_create */
int auth_payload_create(void);

/* Symbol: cert_payload_create */
/* Demangled: cert_payload_create */
int cert_payload_create(void);

/* Symbol: cert_payload_create_from_cert */
/* Demangled: cert_payload_create_from_cert */
int cert_payload_create_from_cert(void);

/* Symbol: cert_payload_create_from_hash_and_url */
/* Demangled: cert_payload_create_from_hash_and_url */
int cert_payload_create_from_hash_and_url(void);

/* Symbol: cert_payload_create_custom */
/* Demangled: cert_payload_create_custom */
int cert_payload_create_custom(void);

/* Symbol: cert_encoding_names */
/* Demangled: cert_encoding_names */
extern void* cert_encoding_names;

/* Symbol: certreq_payload_create */
/* Demangled: certreq_payload_create */
int certreq_payload_create(void);

/* Symbol: certreq_payload_create_type */
/* Demangled: certreq_payload_create_type */
int certreq_payload_create_type(void);

/* Symbol: certreq_payload_create_dn */
/* Demangled: certreq_payload_create_dn */
int certreq_payload_create_dn(void);

/* Symbol: configuration_attribute_create */
/* Demangled: configuration_attribute_create */
int configuration_attribute_create(void);

/* Symbol: configuration_attribute_create_chunk */
/* Demangled: configuration_attribute_create_chunk */
int configuration_attribute_create_chunk(void);

/* Symbol: configuration_attribute_create_value */
/* Demangled: configuration_attribute_create_value */
int configuration_attribute_create_value(void);

/* Symbol: cp_payload_create_type */
/* Demangled: cp_payload_create_type */
int cp_payload_create_type(void);

/* Symbol: cp_payload_create */
/* Demangled: cp_payload_create */
int cp_payload_create(void);

/* Symbol: config_type_names */
/* Demangled: config_type_names */
extern void* config_type_names;

/* Symbol: delete_payload_create */
/* Demangled: delete_payload_create */
int delete_payload_create(void);

/* Symbol: eap_payload_create */
/* Demangled: eap_payload_create */
int eap_payload_create(void);

/* Symbol: eap_payload_create_data */
/* Demangled: eap_payload_create_data */
int eap_payload_create_data(void);

/* Symbol: eap_payload_create_data_own */
/* Demangled: eap_payload_create_data_own */
int eap_payload_create_data_own(void);

/* Symbol: eap_payload_create_code */
/* Demangled: eap_payload_create_code */
int eap_payload_create_code(void);

/* Symbol: eap_payload_create_nak */
/* Demangled: eap_payload_create_nak */
int eap_payload_create_nak(void);

/* Symbol: encrypted_fragment_payload_create */
/* Demangled: encrypted_fragment_payload_create */
int encrypted_fragment_payload_create(void);

/* Symbol: id_payload_create */
/* Demangled: id_payload_create */
int id_payload_create(void);

/* Symbol: id_payload_create_from_identification */
/* Demangled: id_payload_create_from_identification */
int id_payload_create_from_identification(void);

/* Symbol: id_payload_create_from_ts */
/* Demangled: id_payload_create_from_ts */
int id_payload_create_from_ts(void);

/* Symbol: ike_header_create */
/* Demangled: ike_header_create */
int ike_header_create(void);

/* Symbol: ke_payload_create */
/* Demangled: ke_payload_create */
int ke_payload_create(void);

/* Symbol: ke_payload_create_from_diffie_hellman */
/* Demangled: ke_payload_create_from_diffie_hellman */
int ke_payload_create_from_diffie_hellman(void);

/* Symbol: nonce_payload_create */
/* Demangled: nonce_payload_create */
int nonce_payload_create(void);

/* Symbol: notify_payload_create_from_protocol_and_type */
/* Demangled: notify_payload_create_from_protocol_and_type */
int notify_payload_create_from_protocol_and_type(void);

/* Symbol: is_error_notify */
/* Demangled: is_error_notify */
int is_error_notify(void);

/* Symbol: is_status_notify */
/* Demangled: is_status_notify */
int is_status_notify(void);

/* Symbol: notify_type_names */
/* Demangled: notify_type_names */
extern void* notify_type_names;

/* Symbol: sa_payload_create */
/* Demangled: sa_payload_create */
int sa_payload_create(void);

/* Symbol: vendor_id_payload_create */
/* Demangled: vendor_id_payload_create */
int vendor_id_payload_create(void);

/* Symbol: proposal_substructure_create */
/* Demangled: proposal_substructure_create */
int proposal_substructure_create(void);

/* Symbol: transform_substructure_create */
/* Demangled: transform_substructure_create */
int transform_substructure_create(void);

/* Symbol: transform_attribute_create */
/* Demangled: transform_attribute_create */
int transform_attribute_create(void);

/* Symbol: ts_payload_create */
/* Demangled: ts_payload_create */
int ts_payload_create(void);

/* Symbol: fragment_payload_create */
/* Demangled: fragment_payload_create */
int fragment_payload_create(void);

/* Symbol: traffic_selector_substructure_create */
/* Demangled: traffic_selector_substructure_create */
int traffic_selector_substructure_create(void);

/* Symbol: proposal_substructure_create_from_proposal_v2 */
/* Demangled: proposal_substructure_create_from_proposal_v2 */
int proposal_substructure_create_from_proposal_v2(void);

/* Symbol: transform_substructure_create_type */
/* Demangled: transform_substructure_create_type */
int transform_substructure_create_type(void);

/* Symbol: transform_attribute_create_value */
/* Demangled: transform_attribute_create_value */
int transform_attribute_create_value(void);

/* Symbol: proposal_substructure_create_from_proposal_v1 */
/* Demangled: proposal_substructure_create_from_proposal_v1 */
int proposal_substructure_create_from_proposal_v1(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: proposal_substructure_create_from_proposals_v1 */
/* Demangled: proposal_substructure_create_from_proposals_v1 */
int proposal_substructure_create_from_proposals_v1(void);

/* Symbol: proposal_substructure_create_for_ipcomp_v1 */
/* Demangled: proposal_substructure_create_for_ipcomp_v1 */
int proposal_substructure_create_for_ipcomp_v1(void);

/* Symbol: sa_payload_create_from_proposals_v2 */
/* Demangled: sa_payload_create_from_proposals_v2 */
int sa_payload_create_from_proposals_v2(void);

/* Symbol: sa_payload_create_from_proposal_v2 */
/* Demangled: sa_payload_create_from_proposal_v2 */
int sa_payload_create_from_proposal_v2(void);

/* Symbol: sa_payload_create_from_proposals_v1 */
/* Demangled: sa_payload_create_from_proposals_v1 */
int sa_payload_create_from_proposals_v1(void);

/* Symbol: sa_payload_create_from_proposal_v1 */
/* Demangled: sa_payload_create_from_proposal_v1 */
int sa_payload_create_from_proposal_v1(void);

/* Symbol: traffic_selector_substructure_create_from_traffic_selector */
/* Demangled: traffic_selector_substructure_create_from_traffic_selector */
int traffic_selector_substructure_create_from_traffic_selector(void);

/* Symbol: tattr_ph1_names */
/* Demangled: tattr_ph1_names */
extern void* tattr_ph1_names;

/* Symbol: tattr_ph2_names */
/* Demangled: tattr_ph2_names */
extern void* tattr_ph2_names;

/* Symbol: tattr_ikev2_names */
/* Demangled: tattr_ikev2_names */
extern void* tattr_ikev2_names;

/* Symbol: ts_payload_create_from_traffic_selectors */
/* Demangled: ts_payload_create_from_traffic_selectors */
int ts_payload_create_from_traffic_selectors(void);

/* Symbol: unknown_payload_create_data */
/* Demangled: unknown_payload_create_data */
int unknown_payload_create_data(void);

/* Symbol: vendor_id_payload_create_data */
/* Demangled: vendor_id_payload_create_data */
int vendor_id_payload_create_data(void);

/* Symbol: acquire_job_create */
/* Demangled: acquire_job_create */
int acquire_job_create(void);

/* Symbol: delete_child_sa_job_create */
/* Demangled: delete_child_sa_job_create */
int delete_child_sa_job_create(void);

/* Symbol: rekey_child_sa_job_create */
/* Demangled: rekey_child_sa_job_create */
int rekey_child_sa_job_create(void);

/* Symbol: update_sa_job_create */
/* Demangled: update_sa_job_create */
int update_sa_job_create(void);

/* Symbol: migrate_job_create */
/* Demangled: migrate_job_create */
int migrate_job_create(void);

/* Symbol: roam_job_create */
/* Demangled: roam_job_create */
int roam_job_create(void);

/* Symbol: process_message_job_create */
/* Demangled: process_message_job_create */
int process_message_job_create(void);

/* Symbol: socket_register */
/* Demangled: socket_register */
int socket_register(void);

/* Symbol: notify_wod */
/* Demangled: notify_wod */
int notify_wod(void);

/* Symbol: notify_wod_attach_failed */
/* Demangled: notify_wod_attach_failed */
int notify_wod_attach_failed(void);

/* Symbol: atcmd_txrx */
/* Demangled: atcmd_txrx */
int atcmd_txrx(void);

/* Symbol: notify_wod_ikeesp */
/* Demangled: notify_wod_ikeesp */
int notify_wod_ikeesp(void);

/* Symbol: notify_wod_fast_reauth */
/* Demangled: notify_wod_fast_reauth */
int notify_wod_fast_reauth(void);

/* Symbol: delete_ike_sa_job_create */
/* Demangled: delete_ike_sa_job_create */
int delete_ike_sa_job_create(void);

/* Symbol: rekey_ike_sa_job_create */
/* Demangled: rekey_ike_sa_job_create */
int rekey_ike_sa_job_create(void);

/* Symbol: retransmit_job_create */
/* Demangled: retransmit_job_create */
int retransmit_job_create(void);

/* Symbol: retry_initiate_job_create */
/* Demangled: retry_initiate_job_create */
int retry_initiate_job_create(void);

/* Symbol: send_dpd_job_create */
/* Demangled: send_dpd_job_create */
int send_dpd_job_create(void);

/* Symbol: send_keepalive_job_create */
/* Demangled: send_keepalive_job_create */
int send_keepalive_job_create(void);

/* Symbol: inactivity_job_create */
/* Demangled: inactivity_job_create */
int inactivity_job_create(void);

/* Symbol: oos_timeout_job_create */
/* Demangled: oos_timeout_job_create */
int oos_timeout_job_create(void);

/* Symbol: detach_timeout_job_create */
/* Demangled: detach_timeout_job_create */
int detach_timeout_job_create(void);

/* Symbol: eap_method_register */
/* Demangled: eap_method_register */
int eap_method_register(void);

/* Symbol: eap_role_names */
/* Demangled: eap_role_names */
extern void* eap_role_names;

/* Symbol: xauth_method_register */
/* Demangled: xauth_method_register */
int xauth_method_register(void);

/* Symbol: xauth_role_names */
/* Demangled: xauth_role_names */
extern void* xauth_role_names;

/* Symbol: authenticator_create_builder */
/* Demangled: authenticator_create_builder */
int authenticator_create_builder(void);

/* Symbol: eap_authenticator_create_builder */
/* Demangled: eap_authenticator_create_builder */
int eap_authenticator_create_builder(void);

/* Symbol: pubkey_authenticator_create_builder */
/* Demangled: pubkey_authenticator_create_builder */
int pubkey_authenticator_create_builder(void);

/* Symbol: psk_authenticator_create_builder */
/* Demangled: psk_authenticator_create_builder */
int psk_authenticator_create_builder(void);

/* Symbol: authenticator_create_verifier */
/* Demangled: authenticator_create_verifier */
int authenticator_create_verifier(void);

/* Symbol: pubkey_authenticator_create_verifier */
/* Demangled: pubkey_authenticator_create_verifier */
int pubkey_authenticator_create_verifier(void);

/* Symbol: eap_authenticator_create_verifier */
/* Demangled: eap_authenticator_create_verifier */
int eap_authenticator_create_verifier(void);

/* Symbol: psk_authenticator_create_verifier */
/* Demangled: psk_authenticator_create_verifier */
int psk_authenticator_create_verifier(void);

/* Symbol: authenticator_create_v1 */
/* Demangled: authenticator_create_v1 */
int authenticator_create_v1(void);

/* Symbol: hybrid_authenticator_create */
/* Demangled: hybrid_authenticator_create */
int hybrid_authenticator_create(void);

/* Symbol: psk_v1_authenticator_create */
/* Demangled: psk_v1_authenticator_create */
int psk_v1_authenticator_create(void);

/* Symbol: pubkey_v1_authenticator_create */
/* Demangled: pubkey_v1_authenticator_create */
int pubkey_v1_authenticator_create(void);

/* Symbol: auth_method_names */
/* Demangled: auth_method_names */
extern void* auth_method_names;

/* Symbol: child_sa_create */
/* Demangled: child_sa_create */
int child_sa_create(void);

/* Symbol: child_sa_state_names */
/* Demangled: child_sa_state_names */
extern void* child_sa_state_names;

/* Symbol: ike_sa_create */
/* Demangled: ike_sa_create */
int ike_sa_create(void);

/* Symbol: keymat_create */
/* Demangled: keymat_create */
int keymat_create(void);

/* Symbol: task_manager_create */
/* Demangled: task_manager_create */
int task_manager_create(void);

/* Symbol: ike_sa_state_names */
/* Demangled: ike_sa_state_names */
extern void* ike_sa_state_names;

/* Symbol: ike_reauth_complete_create */
/* Demangled: ike_reauth_complete_create */
int ike_reauth_complete_create(void);

/* Symbol: ike_auth_lifetime_create */
/* Demangled: ike_auth_lifetime_create */
int ike_auth_lifetime_create(void);

/* Symbol: keymat_v1_create */
/* Demangled: keymat_v1_create */
int keymat_v1_create(void);

/* Symbol: keymat_v2_create */
/* Demangled: keymat_v2_create */
int keymat_v2_create(void);

/* Symbol: keymat_get_keylen_encr */
/* Demangled: keymat_get_keylen_encr */
int keymat_get_keylen_encr(void);

/* Symbol: keymat_get_keylen_integ */
/* Demangled: keymat_get_keylen_integ */
int keymat_get_keylen_integ(void);

/* Symbol: keymat_register_constructor */
/* Demangled: keymat_register_constructor */
int keymat_register_constructor(void);

/* Symbol: task_manager_v1_create */
/* Demangled: task_manager_v1_create */
int task_manager_v1_create(void);

/* Symbol: task_manager_v2_create */
/* Demangled: task_manager_v2_create */
int task_manager_v2_create(void);

/* Symbol: redirect_manager_create */
/* Demangled: redirect_manager_create */
int redirect_manager_create(void);

/* Symbol: redirect_data_create */
/* Demangled: redirect_data_create */
int redirect_data_create(void);

/* Symbol: redirect_data_parse */
/* Demangled: redirect_data_parse */
int redirect_data_parse(void);

/* Symbol: task_type_names */
/* Demangled: task_type_names */
extern void* task_type_names;

/* Symbol: ike_vendor_create */
/* Demangled: ike_vendor_create */
int ike_vendor_create(void);

/* Symbol: ike_init_create */
/* Demangled: ike_init_create */
int ike_init_create(void);

/* Symbol: ike_natd_create */
/* Demangled: ike_natd_create */
int ike_natd_create(void);

/* Symbol: ike_cert_pre_create */
/* Demangled: ike_cert_pre_create */
int ike_cert_pre_create(void);

/* Symbol: ike_auth_create */
/* Demangled: ike_auth_create */
int ike_auth_create(void);

/* Symbol: ike_cert_post_create */
/* Demangled: ike_cert_post_create */
int ike_cert_post_create(void);

/* Symbol: ike_config_create */
/* Demangled: ike_config_create */
int ike_config_create(void);

/* Symbol: child_create_create */
/* Demangled: child_create_create */
int child_create_create(void);

/* Symbol: ike_mobike_create */
/* Demangled: ike_mobike_create */
int ike_mobike_create(void);

/* Symbol: ike_redirect_create */
/* Demangled: ike_redirect_create */
int ike_redirect_create(void);

/* Symbol: child_config_update_create */
/* Demangled: child_config_update_create */
int child_config_update_create(void);

/* Symbol: child_delete_create */
/* Demangled: child_delete_create */
int child_delete_create(void);

/* Symbol: ike_nbifom_generic_container_create */
/* Demangled: ike_nbifom_generic_container_create */
int ike_nbifom_generic_container_create(void);

/* Symbol: ike_delete_create */
/* Demangled: ike_delete_create */
int ike_delete_create(void);

/* Symbol: ike_query_device_identity_create */
/* Demangled: ike_query_device_identity_create */
int ike_query_device_identity_create(void);

/* Symbol: ike_dpd_create */
/* Demangled: ike_dpd_create */
int ike_dpd_create(void);

/* Symbol: child_rekey_create */
/* Demangled: child_rekey_create */
int child_rekey_create(void);

/* Symbol: ike_rekey_create */
/* Demangled: ike_rekey_create */
int ike_rekey_create(void);

/* Symbol: ike_reauth_create */
/* Demangled: ike_reauth_create */
int ike_reauth_create(void);

/* Symbol: ike_verify_peer_cert_create */
/* Demangled: ike_verify_peer_cert_create */
int ike_verify_peer_cert_create(void);

/* Symbol: check_previous_redirect_state */
/* Demangled: check_previous_redirect_state */
int check_previous_redirect_state(void);

/* Symbol: set_previous_redirect_state */
/* Demangled: set_previous_redirect_state */
int set_previous_redirect_state(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: isakmp_vendor_create */
/* Demangled: isakmp_vendor_create */
int isakmp_vendor_create(void);

/* Symbol: isakmp_cert_pre_create */
/* Demangled: isakmp_cert_pre_create */
int isakmp_cert_pre_create(void);

/* Symbol: main_mode_create */
/* Demangled: main_mode_create */
int main_mode_create(void);

/* Symbol: aggressive_mode_create */
/* Demangled: aggressive_mode_create */
int aggressive_mode_create(void);

/* Symbol: isakmp_cert_post_create */
/* Demangled: isakmp_cert_post_create */
int isakmp_cert_post_create(void);

/* Symbol: isakmp_natd_create */
/* Demangled: isakmp_natd_create */
int isakmp_natd_create(void);

/* Symbol: isakmp_dpd_create */
/* Demangled: isakmp_dpd_create */
int isakmp_dpd_create(void);

/* Symbol: xauth_create */
/* Demangled: xauth_create */
int xauth_create(void);

/* Symbol: quick_mode_create */
/* Demangled: quick_mode_create */
int quick_mode_create(void);

/* Symbol: informational_create */
/* Demangled: informational_create */
int informational_create(void);

/* Symbol: mode_config_create */
/* Demangled: mode_config_create */
int mode_config_create(void);

/* Symbol: quick_delete_create */
/* Demangled: quick_delete_create */
int quick_delete_create(void);

/* Symbol: isakmp_delete_create */
/* Demangled: isakmp_delete_create */
int isakmp_delete_create(void);

/* Symbol: dpd_timeout_job_create */
/* Demangled: dpd_timeout_job_create */
int dpd_timeout_job_create(void);

/* Symbol: phase1_create */
/* Demangled: phase1_create */
int phase1_create(void);

/* Symbol: adopt_children_job_create */
/* Demangled: adopt_children_job_create */
int adopt_children_job_create(void);

/* Symbol: android_log_logger_create */
/* Demangled: android_log_logger_create */
int android_log_logger_create(void);

/* Symbol: android_log_plugin_create */
/* Demangled: android_log_plugin_create */
int android_log_plugin_create(void);

/* Symbol: eap_aka_peer_create */
/* Demangled: eap_aka_peer_create */
int eap_aka_peer_create(void);

/* Symbol: eap_aka_plugin_create */
/* Demangled: eap_aka_plugin_create */
int eap_aka_plugin_create(void);

/* Symbol: eap_aka_server_create */
/* Demangled: eap_aka_server_create */
int eap_aka_server_create(void);

/* Symbol: updown_handler_create */
/* Demangled: updown_handler_create */
int updown_handler_create(void);

/* Symbol: updown_listener_create */
/* Demangled: updown_listener_create */
int updown_listener_create(void);

/* Symbol: updown_plugin_create */
/* Demangled: updown_plugin_create */
int updown_plugin_create(void);

/* Symbol: eap_gtc_create_server */
/* Demangled: eap_gtc_create_server */
int eap_gtc_create_server(void);

/* Symbol: eap_gtc_create_peer */
/* Demangled: eap_gtc_create_peer */
int eap_gtc_create_peer(void);

/* Symbol: eap_gtc_plugin_create */
/* Demangled: eap_gtc_plugin_create */
int eap_gtc_plugin_create(void);

/* Symbol: eap_identity_create_peer */
/* Demangled: eap_identity_create_peer */
int eap_identity_create_peer(void);

/* Symbol: eap_identity_create_server */
/* Demangled: eap_identity_create_server */
int eap_identity_create_server(void);

/* Symbol: eap_identity_plugin_create */
/* Demangled: eap_identity_plugin_create */
int eap_identity_plugin_create(void);

/* Symbol: eap_md5_create_server */
/* Demangled: eap_md5_create_server */
int eap_md5_create_server(void);

/* Symbol: eap_md5_create_peer */
/* Demangled: eap_md5_create_peer */
int eap_md5_create_peer(void);

/* Symbol: eap_md5_plugin_create */
/* Demangled: eap_md5_plugin_create */
int eap_md5_plugin_create(void);

/* Symbol: eap_mschapv2_create_server */
/* Demangled: eap_mschapv2_create_server */
int eap_mschapv2_create_server(void);

/* Symbol: eap_mschapv2_create_peer */
/* Demangled: eap_mschapv2_create_peer */
int eap_mschapv2_create_peer(void);

/* Symbol: mschapv2_opcode_names */
/* Demangled: mschapv2_opcode_names */
extern void* mschapv2_opcode_names;

/* Symbol: mschapv2_error_names */
/* Demangled: mschapv2_error_names */
extern void* mschapv2_error_names;

/* Symbol: eap_mschapv2_plugin_create */
/* Demangled: eap_mschapv2_plugin_create */
int eap_mschapv2_plugin_create(void);

/* Symbol: eap_sim_peer_create */
/* Demangled: eap_sim_peer_create */
int eap_sim_peer_create(void);

/* Symbol: eap_sim_plugin_create */
/* Demangled: eap_sim_plugin_create */
int eap_sim_plugin_create(void);

/* Symbol: eap_sim_server_create */
/* Demangled: eap_sim_server_create */
int eap_sim_server_create(void);

/* Symbol: eap_simaka_reauth_card_create */
/* Demangled: eap_simaka_reauth_card_create */
int eap_simaka_reauth_card_create(void);

/* Symbol: mtk_auts */
/* Demangled: mtk_auts */
extern void* mtk_auts;

/* Symbol: mtk_rand */
/* Demangled: mtk_rand */
extern void* mtk_rand;

/* Symbol: eap_simaka_reauth_plugin_create */
/* Demangled: eap_simaka_reauth_plugin_create */
int eap_simaka_reauth_plugin_create(void);

/* Symbol: eap_simaka_reauth_provider_create */
/* Demangled: eap_simaka_reauth_provider_create */
int eap_simaka_reauth_provider_create(void);

/* Symbol: socket_default_plugin_create */
/* Demangled: socket_default_plugin_create */
int socket_default_plugin_create(void);

/* Symbol: socket_default_socket_create */
/* Demangled: socket_default_socket_create */
int socket_default_socket_create(void);

/* Symbol: stroke_attribute_create */
/* Demangled: stroke_attribute_create */
int stroke_attribute_create(void);

/* Symbol: stroke_ca_create */
/* Demangled: stroke_ca_create */
int stroke_ca_create(void);

/* Symbol: stroke_config_create */
/* Demangled: stroke_config_create */
int stroke_config_create(void);

/* Symbol: stroke_control_create */
/* Demangled: stroke_control_create */
int stroke_control_create(void);

/* Symbol: stroke_counter_create */
/* Demangled: stroke_counter_create */
int stroke_counter_create(void);

/* Symbol: stroke_counter_type_names */
/* Demangled: stroke_counter_type_names */
extern void* stroke_counter_type_names;

/* Symbol: stroke_cred_create */
/* Demangled: stroke_cred_create */
int stroke_cred_create(void);

/* Symbol: stroke_handler_create */
/* Demangled: stroke_handler_create */
int stroke_handler_create(void);

/* Symbol: stroke_list_create */
/* Demangled: stroke_list_create */
int stroke_list_create(void);

/* Symbol: stroke_plugin_create */
/* Demangled: stroke_plugin_create */
int stroke_plugin_create(void);

/* Symbol: stroke_socket_create */
/* Demangled: stroke_socket_create */
int stroke_socket_create(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

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

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: __aeabi_dmul */
/* Demangled: __aeabi_dmul */
int __aeabi_dmul(void);

/* Symbol: __aeabi_d2uiz */
/* Demangled: __aeabi_d2uiz */
int __aeabi_d2uiz(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

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

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBCHARON_SS_H */
