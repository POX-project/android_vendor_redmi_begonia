/*
 * Reverse-Engineered ABI Specification for: libstrongswan.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstrongswan.so
 */

#ifndef BEGONIA_RE_LIBSTRONGSWAN_H
#define BEGONIA_RE_LIBSTRONGSWAN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: library_deinit */
/* Demangled: library_deinit */
int library_deinit(void);

/* Symbol: ref_put */
/* Demangled: ref_put */
int ref_put(void);

/* Symbol: arrays_deinit */
/* Demangled: arrays_deinit */
int arrays_deinit(void);

/* Symbol: threads_deinit */
/* Demangled: threads_deinit */
int threads_deinit(void);

/* Symbol: backtrace_deinit */
/* Demangled: backtrace_deinit */
int backtrace_deinit(void);

/* Symbol: lib */
/* Demangled: lib */
extern void* lib;

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: library_init */
/* Demangled: library_init */
int library_init(void);

/* Symbol: ref_get */
/* Demangled: ref_get */
int ref_get(void);

/* Symbol: backtrace_init */
/* Demangled: backtrace_init */
int backtrace_init(void);

/* Symbol: threads_init */
/* Demangled: threads_init */
int threads_init(void);

/* Symbol: arrays_init */
/* Demangled: arrays_init */
int arrays_init(void);

/* Symbol: printf_hook_create */
/* Demangled: printf_hook_create */
int printf_hook_create(void);

/* Symbol: hashtable_create */
/* Demangled: hashtable_create */
int hashtable_create(void);

/* Symbol: settings_create */
/* Demangled: settings_create */
int settings_create(void);

/* Symbol: host_resolver_create */
/* Demangled: host_resolver_create */
int host_resolver_create(void);

/* Symbol: proposal_keywords_create */
/* Demangled: proposal_keywords_create */
int proposal_keywords_create(void);

/* Symbol: capabilities_create */
/* Demangled: capabilities_create */
int capabilities_create(void);

/* Symbol: crypto_factory_create */
/* Demangled: crypto_factory_create */
int crypto_factory_create(void);

/* Symbol: credential_factory_create */
/* Demangled: credential_factory_create */
int credential_factory_create(void);

/* Symbol: credential_manager_create */
/* Demangled: credential_manager_create */
int credential_manager_create(void);

/* Symbol: cred_encoding_create */
/* Demangled: cred_encoding_create */
int cred_encoding_create(void);

/* Symbol: fetcher_manager_create */
/* Demangled: fetcher_manager_create */
int fetcher_manager_create(void);

/* Symbol: resolver_manager_create */
/* Demangled: resolver_manager_create */
int resolver_manager_create(void);

/* Symbol: database_factory_create */
/* Demangled: database_factory_create */
int database_factory_create(void);

/* Symbol: processor_create */
/* Demangled: processor_create */
int processor_create(void);

/* Symbol: scheduler_create */
/* Demangled: scheduler_create */
int scheduler_create(void);

/* Symbol: watcher_create */
/* Demangled: watcher_create */
int watcher_create(void);

/* Symbol: stream_manager_create */
/* Demangled: stream_manager_create */
int stream_manager_create(void);

/* Symbol: plugin_loader_create */
/* Demangled: plugin_loader_create */
int plugin_loader_create(void);

/* Symbol: mem_printf_hook */
/* Demangled: mem_printf_hook */
int mem_printf_hook(void);

/* Symbol: chunk_printf_hook */
/* Demangled: chunk_printf_hook */
int chunk_printf_hook(void);

/* Symbol: host_printf_hook */
/* Demangled: host_printf_hook */
int host_printf_hook(void);

/* Symbol: enum_printf_hook */
/* Demangled: enum_printf_hook */
int enum_printf_hook(void);

/* Symbol: time_printf_hook */
/* Demangled: time_printf_hook */
int time_printf_hook(void);

/* Symbol: time_delta_printf_hook */
/* Demangled: time_delta_printf_hook */
int time_delta_printf_hook(void);

/* Symbol: identification_printf_hook */
/* Demangled: identification_printf_hook */
int identification_printf_hook(void);

/* Symbol: traffic_selector_printf_hook */
/* Demangled: traffic_selector_printf_hook */
int traffic_selector_printf_hook(void);

/* Symbol: dbg */
/* Demangled: dbg */
extern void* dbg;

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: chunk_hash */
/* Demangled: chunk_hash */
int chunk_hash(void);

/* Symbol: memwipe_noinline */
/* Demangled: memwipe_noinline */
int memwipe_noinline(void);

/* Symbol: asn1_algorithmIdentifier */
/* Demangled: asn1_algorithmIdentifier */
int asn1_algorithmIdentifier(void);

/* Symbol: asn1_wrap */
/* Demangled: asn1_wrap */
int asn1_wrap(void);

/* Symbol: chunk_empty */
/* Demangled: chunk_empty */
extern void* chunk_empty;

/* Symbol: oid_names */
/* Demangled: oid_names */
extern void* oid_names;

/* Symbol: asn1_simple_object */
/* Demangled: asn1_simple_object */
int asn1_simple_object(void);

/* Symbol: asn1_build_known_oid */
/* Demangled: asn1_build_known_oid */
int asn1_build_known_oid(void);

/* Symbol: asn1_known_oid */
/* Demangled: asn1_known_oid */
int asn1_known_oid(void);

/* Symbol: asn1_oid_from_string */
/* Demangled: asn1_oid_from_string */
int asn1_oid_from_string(void);

/* Symbol: enumerator_create_token */
/* Demangled: enumerator_create_token */
int enumerator_create_token(void);

/* Symbol: chunk_create_clone */
/* Demangled: chunk_create_clone */
int chunk_create_clone(void);

/* Symbol: asn1_oid_to_string */
/* Demangled: asn1_oid_to_string */
int asn1_oid_to_string(void);

/* Symbol: builtin_snprintf */
/* Demangled: builtin_snprintf */
int builtin_snprintf(void);

/* Symbol: asn1_length */
/* Demangled: asn1_length */
int asn1_length(void);

/* Symbol: asn1_unwrap */
/* Demangled: asn1_unwrap */
int asn1_unwrap(void);

/* Symbol: asn1_to_time */
/* Demangled: asn1_to_time */
int asn1_to_time(void);

/* Symbol: asn1_from_time */
/* Demangled: asn1_from_time */
int asn1_from_time(void);

/* Symbol: asn1_debug_simple_object */
/* Demangled: asn1_debug_simple_object */
int asn1_debug_simple_object(void);

/* Symbol: asn1_parse_simple_object */
/* Demangled: asn1_parse_simple_object */
int asn1_parse_simple_object(void);

/* Symbol: asn1_parse_integer_uint64 */
/* Demangled: asn1_parse_integer_uint64 */
int asn1_parse_integer_uint64(void);

/* Symbol: asn1_parse_algorithmIdentifier */
/* Demangled: asn1_parse_algorithmIdentifier */
int asn1_parse_algorithmIdentifier(void);

/* Symbol: asn1_parser_create */
/* Demangled: asn1_parser_create */
int asn1_parser_create(void);

/* Symbol: is_asn1 */
/* Demangled: is_asn1 */
int is_asn1(void);

/* Symbol: asn1_is_printablestring */
/* Demangled: asn1_is_printablestring */
int asn1_is_printablestring(void);

/* Symbol: asn1_build_object */
/* Demangled: asn1_build_object */
int asn1_build_object(void);

/* Symbol: asn1_bitstring */
/* Demangled: asn1_bitstring */
int asn1_bitstring(void);

/* Symbol: asn1_integer */
/* Demangled: asn1_integer */
int asn1_integer(void);

/* Symbol: asn1_parse_time */
/* Demangled: asn1_parse_time */
int asn1_parse_time(void);

/* Symbol: ASN1_INTEGER_0 */
/* Demangled: ASN1_INTEGER_0 */
extern void* ASN1_INTEGER_0;

/* Symbol: ASN1_INTEGER_1 */
/* Demangled: ASN1_INTEGER_1 */
extern void* ASN1_INTEGER_1;

/* Symbol: ASN1_INTEGER_2 */
/* Demangled: ASN1_INTEGER_2 */
extern void* ASN1_INTEGER_2;

/* Symbol: bio_reader_create */
/* Demangled: bio_reader_create */
int bio_reader_create(void);

/* Symbol: bio_reader_create_own */
/* Demangled: bio_reader_create_own */
int bio_reader_create_own(void);

/* Symbol: bio_writer_create */
/* Demangled: bio_writer_create */
int bio_writer_create(void);

/* Symbol: blocking_queue_create */
/* Demangled: blocking_queue_create */
int blocking_queue_create(void);

/* Symbol: linked_list_create */
/* Demangled: linked_list_create */
int linked_list_create(void);

/* Symbol: mutex_create */
/* Demangled: mutex_create */
int mutex_create(void);

/* Symbol: condvar_create */
/* Demangled: condvar_create */
int condvar_create(void);

/* Symbol: thread_cleanup_push */
/* Demangled: thread_cleanup_push */
int thread_cleanup_push(void);

/* Symbol: thread_cancellation_point */
/* Demangled: thread_cancellation_point */
int thread_cancellation_point(void);

/* Symbol: thread_cancelability */
/* Demangled: thread_cancelability */
int thread_cancelability(void);

/* Symbol: thread_cleanup_pop */
/* Demangled: thread_cleanup_pop */
int thread_cleanup_pop(void);

/* Symbol: enumerator_create_empty */
/* Demangled: enumerator_create_empty */
int enumerator_create_empty(void);

/* Symbol: enumerator_create_directory */
/* Demangled: enumerator_create_directory */
int enumerator_create_directory(void);

/* Symbol: strerror_safe */
/* Demangled: strerror_safe */
int strerror_safe(void);

/* Symbol: enumerator_create_nested */
/* Demangled: enumerator_create_nested */
int enumerator_create_nested(void);

/* Symbol: enumerator_create_filter */
/* Demangled: enumerator_create_filter */
int enumerator_create_filter(void);

/* Symbol: enumerator_create_cleaner */
/* Demangled: enumerator_create_cleaner */
int enumerator_create_cleaner(void);

/* Symbol: enumerator_create_single */
/* Demangled: enumerator_create_single */
int enumerator_create_single(void);

/* Symbol: hashtable_hash_ptr */
/* Demangled: hashtable_hash_ptr */
int hashtable_hash_ptr(void);

/* Symbol: hashtable_hash_str */
/* Demangled: hashtable_hash_str */
int hashtable_hash_str(void);

/* Symbol: hashtable_equals_ptr */
/* Demangled: hashtable_equals_ptr */
int hashtable_equals_ptr(void);

/* Symbol: hashtable_equals_str */
/* Demangled: hashtable_equals_str */
int hashtable_equals_str(void);

/* Symbol: array_create */
/* Demangled: array_create */
int array_create(void);

/* Symbol: array_count */
/* Demangled: array_count */
int array_count(void);

/* Symbol: array_compress */
/* Demangled: array_compress */
int array_compress(void);

/* Symbol: array_create_enumerator */
/* Demangled: array_create_enumerator */
int array_create_enumerator(void);

/* Symbol: array_remove_at */
/* Demangled: array_remove_at */
int array_remove_at(void);

/* Symbol: array_remove */
/* Demangled: array_remove */
int array_remove(void);

/* Symbol: array_insert_create */
/* Demangled: array_insert_create */
int array_insert_create(void);

/* Symbol: array_insert */
/* Demangled: array_insert */
int array_insert(void);

/* Symbol: array_insert_enumerator */
/* Demangled: array_insert_enumerator */
int array_insert_enumerator(void);

/* Symbol: array_get */
/* Demangled: array_get */
int array_get(void);

/* Symbol: array_sort */
/* Demangled: array_sort */
int array_sort(void);

/* Symbol: array_bsearch */
/* Demangled: array_bsearch */
int array_bsearch(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: array_invoke */
/* Demangled: array_invoke */
int array_invoke(void);

/* Symbol: array_invoke_offset */
/* Demangled: array_invoke_offset */
int array_invoke_offset(void);

/* Symbol: array_destroy */
/* Demangled: array_destroy */
int array_destroy(void);

/* Symbol: array_destroy_function */
/* Demangled: array_destroy_function */
int array_destroy_function(void);

/* Symbol: array_destroy_offset */
/* Demangled: array_destroy_offset */
int array_destroy_offset(void);

/* Symbol: thread_value_create */
/* Demangled: thread_value_create */
int thread_value_create(void);

/* Symbol: element_create */
/* Demangled: element_create */
int element_create(void);

/* Symbol: linked_list_create_from_enumerator */
/* Demangled: linked_list_create_from_enumerator */
int linked_list_create_from_enumerator(void);

/* Symbol: linked_list_create_with_items */
/* Demangled: linked_list_create_with_items */
int linked_list_create_with_items(void);

/* Symbol: encryption_algorithm_from_oid */
/* Demangled: encryption_algorithm_from_oid */
int encryption_algorithm_from_oid(void);

/* Symbol: encryption_algorithm_to_oid */
/* Demangled: encryption_algorithm_to_oid */
int encryption_algorithm_to_oid(void);

/* Symbol: encryption_algorithm_is_aead */
/* Demangled: encryption_algorithm_is_aead */
int encryption_algorithm_is_aead(void);

/* Symbol: encryption_algorithm_names */
/* Demangled: encryption_algorithm_names */
extern void* encryption_algorithm_names;

/* Symbol: ikev2_encryption_algorithm_names */
/* Demangled: ikev2_encryption_algorithm_names */
extern void* ikev2_encryption_algorithm_names;

/* Symbol: hasher_algorithm_from_oid */
/* Demangled: hasher_algorithm_from_oid */
int hasher_algorithm_from_oid(void);

/* Symbol: hasher_algorithm_from_prf */
/* Demangled: hasher_algorithm_from_prf */
int hasher_algorithm_from_prf(void);

/* Symbol: hasher_algorithm_from_integrity */
/* Demangled: hasher_algorithm_from_integrity */
int hasher_algorithm_from_integrity(void);

/* Symbol: hasher_algorithm_to_integrity */
/* Demangled: hasher_algorithm_to_integrity */
int hasher_algorithm_to_integrity(void);

/* Symbol: hasher_algorithm_to_oid */
/* Demangled: hasher_algorithm_to_oid */
int hasher_algorithm_to_oid(void);

/* Symbol: hasher_signature_algorithm_to_oid */
/* Demangled: hasher_signature_algorithm_to_oid */
int hasher_signature_algorithm_to_oid(void);

/* Symbol: hash_algorithm_names */
/* Demangled: hash_algorithm_names */
extern void* hash_algorithm_names;

/* Symbol: hash_algorithm_short_names */
/* Demangled: hash_algorithm_short_names */
extern void* hash_algorithm_short_names;

/* Symbol: rwlock_create */
/* Demangled: rwlock_create */
int rwlock_create(void);

/* Symbol: proposal_get_token_static */
/* Demangled: proposal_get_token_static */
int proposal_get_token_static(void);

/* Symbol: pseudo_random_function_names */
/* Demangled: pseudo_random_function_names */
extern void* pseudo_random_function_names;

/* Symbol: mac_prf_create */
/* Demangled: mac_prf_create */
int mac_prf_create(void);

/* Symbol: pkcs5_from_algorithmIdentifier */
/* Demangled: pkcs5_from_algorithmIdentifier */
int pkcs5_from_algorithmIdentifier(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: pkcs12_derive_key */
/* Demangled: pkcs12_derive_key */
int pkcs12_derive_key(void);

/* Symbol: chunk_length */
/* Demangled: chunk_length */
int chunk_length(void);

/* Symbol: chunk_create_cat */
/* Demangled: chunk_create_cat */
int chunk_create_cat(void);

/* Symbol: memxor */
/* Demangled: memxor */
int memxor(void);

/* Symbol: rng_get_bytes_not_zero */
/* Demangled: rng_get_bytes_not_zero */
int rng_get_bytes_not_zero(void);

/* Symbol: rng_allocate_bytes_not_zero */
/* Demangled: rng_allocate_bytes_not_zero */
int rng_allocate_bytes_not_zero(void);

/* Symbol: rng_quality_names */
/* Demangled: rng_quality_names */
extern void* rng_quality_names;

/* Symbol: prf_plus_create */
/* Demangled: prf_plus_create */
int prf_plus_create(void);

/* Symbol: integrity_algorithm_names */
/* Demangled: integrity_algorithm_names */
extern void* integrity_algorithm_names;

/* Symbol: ikev2_integrity_algorithm_names */
/* Demangled: ikev2_integrity_algorithm_names */
extern void* ikev2_integrity_algorithm_names;

/* Symbol: mac_signer_create */
/* Demangled: mac_signer_create */
int mac_signer_create(void);

/* Symbol: builtin_printf */
/* Demangled: builtin_printf */
int builtin_printf(void);

/* Symbol: crypto_tester_create */
/* Demangled: crypto_tester_create */
int crypto_tester_create(void);

/* Symbol: default_plugin_name */
/* Demangled: default_plugin_name */
extern void* default_plugin_name;

/* Symbol: transform_type_names */
/* Demangled: transform_type_names */
extern void* transform_type_names;

/* Symbol: diffie_hellman_get_params */
/* Demangled: diffie_hellman_get_params */
int diffie_hellman_get_params(void);

/* Symbol: diffie_hellman_group_is_ec */
/* Demangled: diffie_hellman_group_is_ec */
int diffie_hellman_group_is_ec(void);

/* Symbol: diffie_hellman_group_names */
/* Demangled: diffie_hellman_group_names */
extern void* diffie_hellman_group_names;

/* Symbol: aead_create */
/* Demangled: aead_create */
int aead_create(void);

/* Symbol: iv_gen_rand_create */
/* Demangled: iv_gen_rand_create */
int iv_gen_rand_create(void);

/* Symbol: chunk_split */
/* Demangled: chunk_split */
int chunk_split(void);

/* Symbol: extended_sequence_numbers_names */
/* Demangled: extended_sequence_numbers_names */
extern void* extended_sequence_numbers_names;

/* Symbol: iv_gen_seq_create */
/* Demangled: iv_gen_seq_create */
int iv_gen_seq_create(void);

/* Symbol: key_type_names */
/* Demangled: key_type_names */
extern void* key_type_names;

/* Symbol: credential_type_names */
/* Demangled: credential_type_names */
extern void* credential_type_names;

/* Symbol: container_type_names */
/* Demangled: container_type_names */
extern void* container_type_names;

/* Symbol: certificate_type_names */
/* Demangled: certificate_type_names */
extern void* certificate_type_names;

/* Symbol: builder_part_names */
/* Demangled: builder_part_names */
extern void* builder_part_names;

/* Symbol: cred_encoding_args */
/* Demangled: cred_encoding_args */
int cred_encoding_args(void);

/* Symbol: private_key_equals */
/* Demangled: private_key_equals */
int private_key_equals(void);

/* Symbol: private_key_belongs_to */
/* Demangled: private_key_belongs_to */
int private_key_belongs_to(void);

/* Symbol: private_key_has_fingerprint */
/* Demangled: private_key_has_fingerprint */
int private_key_has_fingerprint(void);

/* Symbol: public_key_equals */
/* Demangled: public_key_equals */
int public_key_equals(void);

/* Symbol: public_key_has_fingerprint */
/* Demangled: public_key_has_fingerprint */
int public_key_has_fingerprint(void);

/* Symbol: signature_scheme_from_oid */
/* Demangled: signature_scheme_from_oid */
int signature_scheme_from_oid(void);

/* Symbol: signature_scheme_names */
/* Demangled: signature_scheme_names */
extern void* signature_scheme_names;

/* Symbol: encryption_scheme_names */
/* Demangled: encryption_scheme_names */
extern void* encryption_scheme_names;

/* Symbol: shared_key_create */
/* Demangled: shared_key_create */
int shared_key_create(void);

/* Symbol: shared_key_type_names */
/* Demangled: shared_key_type_names */
extern void* shared_key_type_names;

/* Symbol: certificate_is_newer */
/* Demangled: certificate_is_newer */
int certificate_is_newer(void);

/* Symbol: cert_validation_names */
/* Demangled: cert_validation_names */
extern void* cert_validation_names;

/* Symbol: crl_is_newer */
/* Demangled: crl_is_newer */
int crl_is_newer(void);

/* Symbol: chunk_compare */
/* Demangled: chunk_compare */
int chunk_compare(void);

/* Symbol: crl_reason_names */
/* Demangled: crl_reason_names */
extern void* crl_reason_names;

/* Symbol: ocsp_status_names */
/* Demangled: ocsp_status_names */
extern void* ocsp_status_names;

/* Symbol: ietf_attributes_create_from_string */
/* Demangled: ietf_attributes_create_from_string */
int ietf_attributes_create_from_string(void);

/* Symbol: eat_whitespace */
/* Demangled: eat_whitespace */
int eat_whitespace(void);

/* Symbol: extract_token */
/* Demangled: extract_token */
int extract_token(void);

/* Symbol: ietf_attributes_create_from_encoding */
/* Demangled: ietf_attributes_create_from_encoding */
int ietf_attributes_create_from_encoding(void);

/* Symbol: cert_cache_create */
/* Demangled: cert_cache_create */
int cert_cache_create(void);

/* Symbol: identification_create_from_encoding */
/* Demangled: identification_create_from_encoding */
int identification_create_from_encoding(void);

/* Symbol: auth_cfg_create */
/* Demangled: auth_cfg_create */
int auth_cfg_create(void);

/* Symbol: auth_cfg_wrapper_create */
/* Demangled: auth_cfg_wrapper_create */
int auth_cfg_wrapper_create(void);

/* Symbol: nop */
/* Demangled: nop */
int nop(void);

/* Symbol: return_null */
/* Demangled: return_null */
int return_null(void);

/* Symbol: ocsp_response_wrapper_create */
/* Demangled: ocsp_response_wrapper_create */
int ocsp_response_wrapper_create(void);

/* Symbol: mem_cred_create */
/* Demangled: mem_cred_create */
int mem_cred_create(void);

/* Symbol: callback_cred_create_shared */
/* Demangled: callback_cred_create_shared */
int callback_cred_create_shared(void);

/* Symbol: eap_type_names */
/* Demangled: eap_type_names */
extern void* eap_type_names;

/* Symbol: auth_class_names */
/* Demangled: auth_class_names */
extern void* auth_class_names;

/* Symbol: auth_rule_names */
/* Demangled: auth_rule_names */
extern void* auth_rule_names;

/* Symbol: db_driver_names */
/* Demangled: db_driver_names */
extern void* db_driver_names;

/* Symbol: fetcher_default_callback */
/* Demangled: fetcher_default_callback */
int fetcher_default_callback(void);

/* Symbol: eap_type_from_string */
/* Demangled: eap_type_from_string */
int eap_type_from_string(void);

/* Symbol: eap_vendor_type_from_string */
/* Demangled: eap_vendor_type_from_string */
int eap_vendor_type_from_string(void);

/* Symbol: eap_code_names */
/* Demangled: eap_code_names */
extern void* eap_code_names;

/* Symbol: eap_code_short_names */
/* Demangled: eap_code_short_names */
extern void* eap_code_short_names;

/* Symbol: eap_type_short_names */
/* Demangled: eap_type_short_names */
extern void* eap_type_short_names;

/* Symbol: mark_from_string */
/* Demangled: mark_from_string */
int mark_from_string(void);

/* Symbol: ipsec_mode_names */
/* Demangled: ipsec_mode_names */
extern void* ipsec_mode_names;

/* Symbol: policy_dir_names */
/* Demangled: policy_dir_names */
extern void* policy_dir_names;

/* Symbol: ipcomp_transform_names */
/* Demangled: ipcomp_transform_names */
extern void* ipcomp_transform_names;

/* Symbol: print_in_hook */
/* Demangled: print_in_hook */
int print_in_hook(void);

/* Symbol: host_create_from_string_and_family */
/* Demangled: host_create_from_string_and_family */
int host_create_from_string_and_family(void);

/* Symbol: host_create_from_sockaddr */
/* Demangled: host_create_from_sockaddr */
int host_create_from_sockaddr(void);

/* Symbol: host_create_from_string */
/* Demangled: host_create_from_string */
int host_create_from_string(void);

/* Symbol: host_create_from_dns */
/* Demangled: host_create_from_dns */
int host_create_from_dns(void);

/* Symbol: host_create_from_chunk */
/* Demangled: host_create_from_chunk */
int host_create_from_chunk(void);

/* Symbol: host_create_from_chunk_with_prefix */
/* Demangled: host_create_from_chunk_with_prefix */
int host_create_from_chunk_with_prefix(void);

/* Symbol: host_create_from_range */
/* Demangled: host_create_from_range */
int host_create_from_range(void);

/* Symbol: host_create_from_subnet */
/* Demangled: host_create_from_subnet */
int host_create_from_subnet(void);

/* Symbol: host_create_netmask */
/* Demangled: host_create_netmask */
int host_create_netmask(void);

/* Symbol: host_create_any */
/* Demangled: host_create_any */
int host_create_any(void);

/* Symbol: chunk_hash_inc */
/* Demangled: chunk_hash_inc */
int chunk_hash_inc(void);

/* Symbol: thread_create */
/* Demangled: thread_create */
int thread_create(void);

/* Symbol: thread_current */
/* Demangled: thread_current */
int thread_current(void);

/* Symbol: packet_create_from_data */
/* Demangled: packet_create_from_data */
int packet_create_from_data(void);

/* Symbol: packet_create */
/* Demangled: packet_create */
int packet_create(void);

/* Symbol: tun_device_create */
/* Demangled: tun_device_create */
int tun_device_create(void);

/* Symbol: stream_create_from_fd */
/* Demangled: stream_create_from_fd */
int stream_create_from_fd(void);

/* Symbol: stream_parse_uri_unix */
/* Demangled: stream_parse_uri_unix */
int stream_parse_uri_unix(void);

/* Symbol: stream_create_unix */
/* Demangled: stream_create_unix */
int stream_create_unix(void);

/* Symbol: stream_parse_uri_tcp */
/* Demangled: stream_parse_uri_tcp */
int stream_parse_uri_tcp(void);

/* Symbol: stream_create_tcp */
/* Demangled: stream_create_tcp */
int stream_create_tcp(void);

/* Symbol: stream_service_create_from_fd */
/* Demangled: stream_service_create_from_fd */
int stream_service_create_from_fd(void);

/* Symbol: stream_service_create_unix */
/* Demangled: stream_service_create_unix */
int stream_service_create_unix(void);

/* Symbol: stream_service_create_tcp */
/* Demangled: stream_service_create_tcp */
int stream_service_create_tcp(void);

/* Symbol: callback_job_create_with_prio */
/* Demangled: callback_job_create_with_prio */
int callback_job_create_with_prio(void);

/* Symbol: return_false */
/* Demangled: return_false */
int return_false(void);

/* Symbol: pen_names */
/* Demangled: pen_names */
extern void* pen_names;

/* Symbol: plugin_feature_hash */
/* Demangled: plugin_feature_hash */
int plugin_feature_hash(void);

/* Symbol: plugin_feature_equals */
/* Demangled: plugin_feature_equals */
int plugin_feature_equals(void);

/* Symbol: plugin_loader_add_plugindirs */
/* Demangled: plugin_loader_add_plugindirs */
int plugin_loader_add_plugindirs(void);

/* Symbol: translate */
/* Demangled: translate */
int translate(void);

/* Symbol: builtin_asprintf */
/* Demangled: builtin_asprintf */
int builtin_asprintf(void);

/* Symbol: plugin_feature_get_string */
/* Demangled: plugin_feature_get_string */
int plugin_feature_get_string(void);

/* Symbol: plugin_feature_load */
/* Demangled: plugin_feature_load */
int plugin_feature_load(void);

/* Symbol: plugin_feature_matches */
/* Demangled: plugin_feature_matches */
int plugin_feature_matches(void);

/* Symbol: plugin_feature_unload */
/* Demangled: plugin_feature_unload */
int plugin_feature_unload(void);

/* Symbol: plugin_feature_names */
/* Demangled: plugin_feature_names */
extern void* plugin_feature_names;

/* Symbol: job_priority_names */
/* Demangled: job_priority_names */
extern void* job_priority_names;

/* Symbol: callback_job_create */
/* Demangled: callback_job_create */
int callback_job_create(void);

/* Symbol: thread_current_id */
/* Demangled: thread_current_id */
int thread_current_id(void);

/* Symbol: alarmsleep */
/* Demangled: alarmsleep */
int alarmsleep(void);

/* Symbol: acquire_alarm_timer_wake_lock */
/* Demangled: acquire_alarm_timer_wake_lock */
int acquire_alarm_timer_wake_lock(void);

/* Symbol: is_handle_wake_lock */
/* Demangled: is_handle_wake_lock */
int is_handle_wake_lock(void);

/* Symbol: transfer_boot_time_to_monotonic_time */
/* Demangled: transfer_boot_time_to_monotonic_time */
int transfer_boot_time_to_monotonic_time(void);

/* Symbol: time_monotonic */
/* Demangled: time_monotonic */
int time_monotonic(void);

/* Symbol: rr_set_create */
/* Demangled: rr_set_create */
int rr_set_create(void);

/* Symbol: traffic_selector_cmp */
/* Demangled: traffic_selector_cmp */
int traffic_selector_cmp(void);

/* Symbol: traffic_selector_create_from_bytes */
/* Demangled: traffic_selector_create_from_bytes */
int traffic_selector_create_from_bytes(void);

/* Symbol: traffic_selector_create_from_rfc3779_format */
/* Demangled: traffic_selector_create_from_rfc3779_format */
int traffic_selector_create_from_rfc3779_format(void);

/* Symbol: traffic_selector_create_from_subnet */
/* Demangled: traffic_selector_create_from_subnet */
int traffic_selector_create_from_subnet(void);

/* Symbol: traffic_selector_create_from_string */
/* Demangled: traffic_selector_create_from_string */
int traffic_selector_create_from_string(void);

/* Symbol: traffic_selector_create_from_cidr */
/* Demangled: traffic_selector_create_from_cidr */
int traffic_selector_create_from_cidr(void);

/* Symbol: traffic_selector_create_dynamic */
/* Demangled: traffic_selector_create_dynamic */
int traffic_selector_create_dynamic(void);

/* Symbol: ts_type_name */
/* Demangled: ts_type_name */
extern void* ts_type_name;

/* Symbol: thread_exit */
/* Demangled: thread_exit */
int thread_exit(void);

/* Symbol: semaphore_create */
/* Demangled: semaphore_create */
int semaphore_create(void);

/* Symbol: rwlock_condvar_create */
/* Demangled: rwlock_condvar_create */
int rwlock_condvar_create(void);

/* Symbol: spinlock_create */
/* Demangled: spinlock_create */
int spinlock_create(void);

/* Symbol: memstr */
/* Demangled: memstr */
int memstr(void);

/* Symbol: utils_memrchr */
/* Demangled: utils_memrchr */
int utils_memrchr(void);

/* Symbol: strreplace */
/* Demangled: strreplace */
int strreplace(void);

/* Symbol: path_dirname */
/* Demangled: path_dirname */
int path_dirname(void);

/* Symbol: path_basename */
/* Demangled: path_basename */
int path_basename(void);

/* Symbol: mkdir_p */
/* Demangled: mkdir_p */
int mkdir_p(void);

/* Symbol: tty_escape_get */
/* Demangled: tty_escape_get */
int tty_escape_get(void);

/* Symbol: enum_to_name */
/* Demangled: enum_to_name */
int enum_to_name(void);

/* Symbol: tty_color_names */
/* Demangled: tty_color_names */
extern void* tty_color_names;

/* Symbol: closefrom */
/* Demangled: closefrom */
int closefrom(void);

/* Symbol: return_true */
/* Demangled: return_true */
int return_true(void);

/* Symbol: return_failed */
/* Demangled: return_failed */
int return_failed(void);

/* Symbol: return_success */
/* Demangled: return_success */
int return_success(void);

/* Symbol: cas_bool */
/* Demangled: cas_bool */
int cas_bool(void);

/* Symbol: cas_ptr */
/* Demangled: cas_ptr */
int cas_ptr(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: status_names */
/* Demangled: status_names */
extern void* status_names;

/* Symbol: chunk_write */
/* Demangled: chunk_write */
int chunk_write(void);

/* Symbol: chunk_from_fd */
/* Demangled: chunk_from_fd */
int chunk_from_fd(void);

/* Symbol: chunk_map */
/* Demangled: chunk_map */
int chunk_map(void);

/* Symbol: chunk_unmap */
/* Demangled: chunk_unmap */
int chunk_unmap(void);

/* Symbol: chunk_to_hex */
/* Demangled: chunk_to_hex */
int chunk_to_hex(void);

/* Symbol: chunk_from_hex */
/* Demangled: chunk_from_hex */
int chunk_from_hex(void);

/* Symbol: chunk_to_base64 */
/* Demangled: chunk_to_base64 */
int chunk_to_base64(void);

/* Symbol: chunk_from_base64 */
/* Demangled: chunk_from_base64 */
int chunk_from_base64(void);

/* Symbol: chunk_to_base32 */
/* Demangled: chunk_to_base32 */
int chunk_to_base32(void);

/* Symbol: chunk_increment */
/* Demangled: chunk_increment */
int chunk_increment(void);

/* Symbol: chunk_printable */
/* Demangled: chunk_printable */
int chunk_printable(void);

/* Symbol: chunk_mac */
/* Demangled: chunk_mac */
int chunk_mac(void);

/* Symbol: chunk_hash_static_inc */
/* Demangled: chunk_hash_static_inc */
int chunk_hash_static_inc(void);

/* Symbol: chunk_hash_static */
/* Demangled: chunk_hash_static */
int chunk_hash_static(void);

/* Symbol: is_ap_load_type */
/* Demangled: is_ap_load_type */
int is_ap_load_type(void);

/* Symbol: empty_char_array */
/* Demangled: empty_char_array */
int empty_char_array(void);

/* Symbol: dbg_default */
/* Demangled: dbg_default */
int dbg_default(void);

/* Symbol: builtin_vfprintf */
/* Demangled: builtin_vfprintf */
int builtin_vfprintf(void);

/* Symbol: builtin_fprintf */
/* Demangled: builtin_fprintf */
int builtin_fprintf(void);

/* Symbol: dbg_default_set_level */
/* Demangled: dbg_default_set_level */
int dbg_default_set_level(void);

/* Symbol: dbg_default_set_stream */
/* Demangled: dbg_default_set_stream */
int dbg_default_set_stream(void);

/* Symbol: get_log_file */
/* Demangled: get_log_file */
int get_log_file(void);

/* Symbol: builtin_sprintf */
/* Demangled: builtin_sprintf */
int builtin_sprintf(void);

/* Symbol: join_path */
/* Demangled: join_path */
int join_path(void);

/* Symbol: get_str_with_current_time_suffix */
/* Demangled: get_str_with_current_time_suffix */
int get_str_with_current_time_suffix(void);

/* Symbol: debug_names */
/* Demangled: debug_names */
extern void* debug_names;

/* Symbol: debug_lower_names */
/* Demangled: debug_lower_names */
extern void* debug_lower_names;

/* Symbol: enum_from_name */
/* Demangled: enum_from_name */
int enum_from_name(void);

/* Symbol: identification_create_from_string */
/* Demangled: identification_create_from_string */
int identification_create_from_string(void);

/* Symbol: identification_create_from_data */
/* Demangled: identification_create_from_data */
int identification_create_from_data(void);

/* Symbol: identification_create_from_sockaddr */
/* Demangled: identification_create_from_sockaddr */
int identification_create_from_sockaddr(void);

/* Symbol: id_match_names */
/* Demangled: id_match_names */
extern void* id_match_names;

/* Symbol: id_type_names */
/* Demangled: id_type_names */
extern void* id_type_names;

/* Symbol: match */
/* Demangled: match */
int match(void);

/* Symbol: extract_token_str */
/* Demangled: extract_token_str */
int extract_token_str(void);

/* Symbol: fetchline */
/* Demangled: fetchline */
int fetchline(void);

/* Symbol: extract_value */
/* Demangled: extract_value */
int extract_value(void);

/* Symbol: extract_parameter_value */
/* Demangled: extract_parameter_value */
int extract_parameter_value(void);

/* Symbol: options_create */
/* Demangled: options_create */
int options_create(void);

/* Symbol: backtrace_create */
/* Demangled: backtrace_create */
int backtrace_create(void);

/* Symbol: backtrace_dump */
/* Demangled: backtrace_dump */
int backtrace_dump(void);

/* Symbol: builtin_vsnprintf */
/* Demangled: builtin_vsnprintf */
int builtin_vsnprintf(void);

/* Symbol: get_cust_setting */
/* Demangled: get_cust_setting */
int get_cust_setting(void);

/* Symbol: get_cust_setting_bool */
/* Demangled: get_cust_setting_bool */
int get_cust_setting_bool(void);

/* Symbol: get_cust_setting_int */
/* Demangled: get_cust_setting_int */
int get_cust_setting_int(void);

/* Symbol: set_cust_setting */
/* Demangled: set_cust_setting */
int set_cust_setting(void);

/* Symbol: set_cust_setting_bool */
/* Demangled: set_cust_setting_bool */
int set_cust_setting_bool(void);

/* Symbol: set_cust_setting_int */
/* Demangled: set_cust_setting_int */
int set_cust_setting_int(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int __aeabi_idiv(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: builtin_vprintf */
/* Demangled: builtin_vprintf */
int builtin_vprintf(void);

/* Symbol: builtin_vasprintf */
/* Demangled: builtin_vasprintf */
int builtin_vasprintf(void);

/* Symbol: builtin_vsprintf */
/* Demangled: builtin_vsprintf */
int builtin_vsprintf(void);

/* Symbol: settings_value_as_bool */
/* Demangled: settings_value_as_bool */
int settings_value_as_bool(void);

/* Symbol: settings_value_as_int */
/* Demangled: settings_value_as_int */
int settings_value_as_int(void);

/* Symbol: settings_value_as_double */
/* Demangled: settings_value_as_double */
int settings_value_as_double(void);

/* Symbol: settings_value_as_time */
/* Demangled: settings_value_as_time */
int settings_value_as_time(void);

/* Symbol: testable_function_register */
/* Demangled: testable_function_register */
int testable_function_register(void);

/* Symbol: testable_functions */
/* Demangled: testable_functions */
extern void* testable_functions;

/* Symbol: curl_fetcher_create */
/* Demangled: curl_fetcher_create */
int curl_fetcher_create(void);

/* Symbol: curl_plugin_create */
/* Demangled: curl_plugin_create */
int curl_plugin_create(void);

/* Symbol: fips_prf_create */
/* Demangled: fips_prf_create */
int fips_prf_create(void);

/* Symbol: fips_prf_plugin_create */
/* Demangled: fips_prf_plugin_create */
int fips_prf_plugin_create(void);

/* Symbol: hmac_prf_create */
/* Demangled: hmac_prf_create */
int hmac_prf_create(void);

/* Symbol: hmac_signer_create */
/* Demangled: hmac_signer_create */
int hmac_signer_create(void);

/* Symbol: hmac_plugin_create */
/* Demangled: hmac_plugin_create */
int hmac_plugin_create(void);

/* Symbol: nonce_nonceg_create */
/* Demangled: nonce_nonceg_create */
int nonce_nonceg_create(void);

/* Symbol: nonce_plugin_create */
/* Demangled: nonce_plugin_create */
int nonce_plugin_create(void);

/* Symbol: openssl_crl_load */
/* Demangled: openssl_crl_load */
int openssl_crl_load(void);

/* Symbol: openssl_asn1_obj2chunk */
/* Demangled: openssl_asn1_obj2chunk */
int openssl_asn1_obj2chunk(void);

/* Symbol: openssl_asn1_known_oid */
/* Demangled: openssl_asn1_known_oid */
int openssl_asn1_known_oid(void);

/* Symbol: openssl_x509_name2id */
/* Demangled: openssl_x509_name2id */
int openssl_x509_name2id(void);

/* Symbol: openssl_asn1_to_time */
/* Demangled: openssl_asn1_to_time */
int openssl_asn1_to_time(void);

/* Symbol: openssl_asn1_str2chunk */
/* Demangled: openssl_asn1_str2chunk */
int openssl_asn1_str2chunk(void);

/* Symbol: openssl_crypter_create */
/* Demangled: openssl_crypter_create */
int openssl_crypter_create(void);

/* Symbol: openssl_diffie_hellman_create */
/* Demangled: openssl_diffie_hellman_create */
int openssl_diffie_hellman_create(void);

/* Symbol: ec_group_new_brainpool */
/* Demangled: ec_group_new_brainpool */
int ec_group_new_brainpool(void);

/* Symbol: openssl_ec_diffie_hellman_create */
/* Demangled: openssl_ec_diffie_hellman_create */
int openssl_ec_diffie_hellman_create(void);

/* Symbol: openssl_bn_split */
/* Demangled: openssl_bn_split */
int openssl_bn_split(void);

/* Symbol: openssl_bn_cat */
/* Demangled: openssl_bn_cat */
int openssl_bn_cat(void);

/* Symbol: openssl_ec_private_key_gen */
/* Demangled: openssl_ec_private_key_gen */
int openssl_ec_private_key_gen(void);

/* Symbol: openssl_ec_private_key_load */
/* Demangled: openssl_ec_private_key_load */
int openssl_ec_private_key_load(void);

/* Symbol: openssl_hash_chunk */
/* Demangled: openssl_hash_chunk */
int openssl_hash_chunk(void);

/* Symbol: openssl_ec_fingerprint */
/* Demangled: openssl_ec_fingerprint */
int openssl_ec_fingerprint(void);

/* Symbol: openssl_ec_public_key_load */
/* Demangled: openssl_ec_public_key_load */
int openssl_ec_public_key_load(void);

/* Symbol: openssl_gcm_create */
/* Demangled: openssl_gcm_create */
int openssl_gcm_create(void);

/* Symbol: openssl_hasher_create */
/* Demangled: openssl_hasher_create */
int openssl_hasher_create(void);

/* Symbol: openssl_hmac_prf_create */
/* Demangled: openssl_hmac_prf_create */
int openssl_hmac_prf_create(void);

/* Symbol: openssl_hmac_signer_create */
/* Demangled: openssl_hmac_signer_create */
int openssl_hmac_signer_create(void);

/* Symbol: openssl_pkcs12_load */
/* Demangled: openssl_pkcs12_load */
int openssl_pkcs12_load(void);

/* Symbol: openssl_pkcs7_load */
/* Demangled: openssl_pkcs7_load */
int openssl_pkcs7_load(void);

/* Symbol: openssl_plugin_create */
/* Demangled: openssl_plugin_create */
int openssl_plugin_create(void);

/* Symbol: openssl_sha1_prf_create */
/* Demangled: openssl_sha1_prf_create */
int openssl_sha1_prf_create(void);

/* Symbol: openssl_rsa_private_key_load */
/* Demangled: openssl_rsa_private_key_load */
int openssl_rsa_private_key_load(void);

/* Symbol: openssl_rsa_private_key_connect */
/* Demangled: openssl_rsa_private_key_connect */
int openssl_rsa_private_key_connect(void);

/* Symbol: openssl_rsa_private_key_gen */
/* Demangled: openssl_rsa_private_key_gen */
int openssl_rsa_private_key_gen(void);

/* Symbol: openssl_rsa_public_key_load */
/* Demangled: openssl_rsa_public_key_load */
int openssl_rsa_public_key_load(void);

/* Symbol: openssl_x509_load */
/* Demangled: openssl_x509_load */
int openssl_x509_load(void);

/* Symbol: openssl_rng_create */
/* Demangled: openssl_rng_create */
int openssl_rng_create(void);

/* Symbol: openssl_rsa_fingerprint */
/* Demangled: openssl_rsa_fingerprint */
int openssl_rsa_fingerprint(void);

/* Symbol: openssl_bn2chunk */
/* Demangled: openssl_bn2chunk */
int openssl_bn2chunk(void);

/* Symbol: pem_private_key_load */
/* Demangled: pem_private_key_load */
int pem_private_key_load(void);

/* Symbol: pem_public_key_load */
/* Demangled: pem_public_key_load */
int pem_public_key_load(void);

/* Symbol: pem_certificate_load */
/* Demangled: pem_certificate_load */
int pem_certificate_load(void);

/* Symbol: pem_container_load */
/* Demangled: pem_container_load */
int pem_container_load(void);

/* Symbol: pem_encoder_encode */
/* Demangled: pem_encoder_encode */
int pem_encoder_encode(void);

/* Symbol: pem_plugin_create */
/* Demangled: pem_plugin_create */
int pem_plugin_create(void);

/* Symbol: pkcs1_public_key_load */
/* Demangled: pkcs1_public_key_load */
int pkcs1_public_key_load(void);

/* Symbol: pkcs1_private_key_load */
/* Demangled: pkcs1_private_key_load */
int pkcs1_private_key_load(void);

/* Symbol: pkcs1_encoder_encode */
/* Demangled: pkcs1_encoder_encode */
int pkcs1_encoder_encode(void);

/* Symbol: pkcs1_plugin_create */
/* Demangled: pkcs1_plugin_create */
int pkcs1_plugin_create(void);

/* Symbol: pkcs8_private_key_load */
/* Demangled: pkcs8_private_key_load */
int pkcs8_private_key_load(void);

/* Symbol: pkcs8_plugin_create */
/* Demangled: pkcs8_plugin_create */
int pkcs8_plugin_create(void);

/* Symbol: pubkey_cert_wrap */
/* Demangled: pubkey_cert_wrap */
int pubkey_cert_wrap(void);

/* Symbol: pubkey_plugin_create */
/* Demangled: pubkey_plugin_create */
int pubkey_plugin_create(void);

/* Symbol: random_plugin_get_dev_random */
/* Demangled: random_plugin_get_dev_random */
int random_plugin_get_dev_random(void);

/* Symbol: random_plugin_get_dev_urandom */
/* Demangled: random_plugin_get_dev_urandom */
int random_plugin_get_dev_urandom(void);

/* Symbol: random_plugin_get_strong_equals_true */
/* Demangled: random_plugin_get_strong_equals_true */
int random_plugin_get_strong_equals_true(void);

/* Symbol: random_plugin_create */
/* Demangled: random_plugin_create */
int random_plugin_create(void);

/* Symbol: random_rng_create */
/* Demangled: random_rng_create */
int random_rng_create(void);

/* Symbol: x509_ac_load */
/* Demangled: x509_ac_load */
int x509_ac_load(void);

/* Symbol: x509_parse_authorityKeyIdentifier */
/* Demangled: x509_parse_authorityKeyIdentifier */
int x509_parse_authorityKeyIdentifier(void);

/* Symbol: x509_ac_gen */
/* Demangled: x509_ac_gen */
int x509_ac_gen(void);

/* Symbol: x509_parse_generalNames */
/* Demangled: x509_parse_generalNames */
int x509_parse_generalNames(void);

/* Symbol: x509_parse_crlDistributionPoints */
/* Demangled: x509_parse_crlDistributionPoints */
int x509_parse_crlDistributionPoints(void);

/* Symbol: build_generalName */
/* Demangled: build_generalName */
int build_generalName(void);

/* Symbol: x509_build_subjectAltNames */
/* Demangled: x509_build_subjectAltNames */
int x509_build_subjectAltNames(void);

/* Symbol: x509_build_crlDistributionPoints */
/* Demangled: x509_build_crlDistributionPoints */
int x509_build_crlDistributionPoints(void);

/* Symbol: x509_cert_load */
/* Demangled: x509_cert_load */
int x509_cert_load(void);

/* Symbol: x509_cert_gen */
/* Demangled: x509_cert_gen */
int x509_cert_gen(void);

/* Symbol: x509_crl_load */
/* Demangled: x509_crl_load */
int x509_crl_load(void);

/* Symbol: x509_crl_gen */
/* Demangled: x509_crl_gen */
int x509_crl_gen(void);

/* Symbol: x509_ocsp_request_gen */
/* Demangled: x509_ocsp_request_gen */
int x509_ocsp_request_gen(void);

/* Symbol: x509_ocsp_response_load */
/* Demangled: x509_ocsp_response_load */
int x509_ocsp_response_load(void);

/* Symbol: x509_pkcs10_load */
/* Demangled: x509_pkcs10_load */
int x509_pkcs10_load(void);

/* Symbol: x509_pkcs10_gen */
/* Demangled: x509_pkcs10_gen */
int x509_pkcs10_gen(void);

/* Symbol: x509_plugin_create */
/* Demangled: x509_plugin_create */
int x509_plugin_create(void);

/* Symbol: xcbc_prf_create */
/* Demangled: xcbc_prf_create */
int xcbc_prf_create(void);

/* Symbol: xcbc_signer_create */
/* Demangled: xcbc_signer_create */
int xcbc_signer_create(void);

/* Symbol: xcbc_plugin_create */
/* Demangled: xcbc_plugin_create */
int xcbc_plugin_create(void);

/* Symbol: ctr_ipsec_crypter_create */
/* Demangled: ctr_ipsec_crypter_create */
int ctr_ipsec_crypter_create(void);

/* Symbol: ctr_plugin_create */
/* Demangled: ctr_plugin_create */
int ctr_plugin_create(void);

/* Symbol: revocation_plugin_create */
/* Demangled: revocation_plugin_create */
int revocation_plugin_create(void);

/* Symbol: revocation_validator_create */
/* Demangled: revocation_validator_create */
int revocation_validator_create(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

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

#endif /* BEGONIA_RE_LIBSTRONGSWAN_H */
