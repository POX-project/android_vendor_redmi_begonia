/*
 * Reverse-Engineered ABI Specification for: libcrypto-ss.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcrypto-ss.so
 */

#ifndef BEGONIA_RE_LIBCRYPTO_SS_H
#define BEGONIA_RE_LIBCRYPTO_SS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: AES_cbc_encrypt */
/* Demangled: AES_cbc_encrypt */
int AES_cbc_encrypt(void);

/* Symbol: CRYPTO_cbc128_encrypt */
/* Demangled: CRYPTO_cbc128_encrypt */
int CRYPTO_cbc128_encrypt(void);

/* Symbol: CRYPTO_cbc128_decrypt */
/* Demangled: CRYPTO_cbc128_decrypt */
int CRYPTO_cbc128_decrypt(void);

/* Symbol: AES_encrypt */
/* Demangled: AES_encrypt */
int AES_encrypt(void);

/* Symbol: AES_decrypt */
/* Demangled: AES_decrypt */
int AES_decrypt(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: AES_cfb128_encrypt */
/* Demangled: AES_cfb128_encrypt */
int AES_cfb128_encrypt(void);

/* Symbol: CRYPTO_cfb128_encrypt */
/* Demangled: CRYPTO_cfb128_encrypt */
int CRYPTO_cfb128_encrypt(void);

/* Symbol: AES_cfb1_encrypt */
/* Demangled: AES_cfb1_encrypt */
int AES_cfb1_encrypt(void);

/* Symbol: CRYPTO_cfb128_1_encrypt */
/* Demangled: CRYPTO_cfb128_1_encrypt */
int CRYPTO_cfb128_1_encrypt(void);

/* Symbol: AES_cfb8_encrypt */
/* Demangled: AES_cfb8_encrypt */
int AES_cfb8_encrypt(void);

/* Symbol: CRYPTO_cfb128_8_encrypt */
/* Demangled: CRYPTO_cfb128_8_encrypt */
int CRYPTO_cfb128_8_encrypt(void);

/* Symbol: private_AES_set_encrypt_key */
/* Demangled: private_AES_set_encrypt_key */
int private_AES_set_encrypt_key(void);

/* Symbol: private_AES_set_decrypt_key */
/* Demangled: private_AES_set_decrypt_key */
int private_AES_set_decrypt_key(void);

/* Symbol: AES_ctr128_encrypt */
/* Demangled: AES_ctr128_encrypt */
int AES_ctr128_encrypt(void);

/* Symbol: CRYPTO_ctr128_encrypt */
/* Demangled: CRYPTO_ctr128_encrypt */
int CRYPTO_ctr128_encrypt(void);

/* Symbol: AES_ecb_encrypt */
/* Demangled: AES_ecb_encrypt */
int AES_ecb_encrypt(void);

/* Symbol: AES_options */
/* Demangled: AES_options */
int AES_options(void);

/* Symbol: AES_set_encrypt_key */
/* Demangled: AES_set_encrypt_key */
int AES_set_encrypt_key(void);

/* Symbol: AES_set_decrypt_key */
/* Demangled: AES_set_decrypt_key */
int AES_set_decrypt_key(void);

/* Symbol: AES_version */
/* Demangled: AES_version */
extern void* AES_version;

/* Symbol: AES_ofb128_encrypt */
/* Demangled: AES_ofb128_encrypt */
int AES_ofb128_encrypt(void);

/* Symbol: CRYPTO_ofb128_encrypt */
/* Demangled: CRYPTO_ofb128_encrypt */
int CRYPTO_ofb128_encrypt(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: AES_wrap_key */
/* Demangled: AES_wrap_key */
int AES_wrap_key(void);

/* Symbol: AES_unwrap_key */
/* Demangled: AES_unwrap_key */
int AES_unwrap_key(void);

/* Symbol: OPENSSL_cleanse */
/* Demangled: OPENSSL_cleanse */
int OPENSSL_cleanse(void);

/* Symbol: ASN1_BIT_STRING_set */
/* Demangled: ASN1_BIT_STRING_set */
int ASN1_BIT_STRING_set(void);

/* Symbol: ASN1_STRING_set */
/* Demangled: ASN1_STRING_set */
int ASN1_STRING_set(void);

/* Symbol: i2c_ASN1_BIT_STRING */
/* Demangled: i2c_ASN1_BIT_STRING */
int i2c_ASN1_BIT_STRING(void);

/* Symbol: c2i_ASN1_BIT_STRING */
/* Demangled: c2i_ASN1_BIT_STRING */
int c2i_ASN1_BIT_STRING(void);

/* Symbol: ASN1_STRING_type_new */
/* Demangled: ASN1_STRING_type_new */
int ASN1_STRING_type_new(void);

/* Symbol: CRYPTO_malloc */
/* Demangled: CRYPTO_malloc */
int CRYPTO_malloc(void);

/* Symbol: CRYPTO_free */
/* Demangled: CRYPTO_free */
int CRYPTO_free(void);

/* Symbol: ERR_put_error */
/* Demangled: ERR_put_error */
int ERR_put_error(void);

/* Symbol: ASN1_STRING_free */
/* Demangled: ASN1_STRING_free */
int ASN1_STRING_free(void);

/* Symbol: ASN1_BIT_STRING_set_bit */
/* Demangled: ASN1_BIT_STRING_set_bit */
int ASN1_BIT_STRING_set_bit(void);

/* Symbol: CRYPTO_realloc_clean */
/* Demangled: CRYPTO_realloc_clean */
int CRYPTO_realloc_clean(void);

/* Symbol: ASN1_BIT_STRING_get_bit */
/* Demangled: ASN1_BIT_STRING_get_bit */
int ASN1_BIT_STRING_get_bit(void);

/* Symbol: ASN1_BIT_STRING_check */
/* Demangled: ASN1_BIT_STRING_check */
int ASN1_BIT_STRING_check(void);

/* Symbol: i2d_ASN1_BOOLEAN */
/* Demangled: i2d_ASN1_BOOLEAN */
int i2d_ASN1_BOOLEAN(void);

/* Symbol: ASN1_object_size */
/* Demangled: ASN1_object_size */
int ASN1_object_size(void);

/* Symbol: ASN1_put_object */
/* Demangled: ASN1_put_object */
int ASN1_put_object(void);

/* Symbol: d2i_ASN1_BOOLEAN */
/* Demangled: d2i_ASN1_BOOLEAN */
int d2i_ASN1_BOOLEAN(void);

/* Symbol: ASN1_get_object */
/* Demangled: ASN1_get_object */
int ASN1_get_object(void);

/* Symbol: d2i_ASN1_type_bytes */
/* Demangled: d2i_ASN1_type_bytes */
int d2i_ASN1_type_bytes(void);

/* Symbol: ASN1_tag2bit */
/* Demangled: ASN1_tag2bit */
int ASN1_tag2bit(void);

/* Symbol: d2i_ASN1_BIT_STRING */
/* Demangled: d2i_ASN1_BIT_STRING */
int d2i_ASN1_BIT_STRING(void);

/* Symbol: ASN1_STRING_new */
/* Demangled: ASN1_STRING_new */
int ASN1_STRING_new(void);

/* Symbol: i2d_ASN1_bytes */
/* Demangled: i2d_ASN1_bytes */
int i2d_ASN1_bytes(void);

/* Symbol: i2d_ASN1_BIT_STRING */
/* Demangled: i2d_ASN1_BIT_STRING */
int i2d_ASN1_BIT_STRING(void);

/* Symbol: d2i_ASN1_bytes */
/* Demangled: d2i_ASN1_bytes */
int d2i_ASN1_bytes(void);

/* Symbol: ASN1_const_check_infinite_end */
/* Demangled: ASN1_const_check_infinite_end */
int ASN1_const_check_infinite_end(void);

/* Symbol: BUF_MEM_grow_clean */
/* Demangled: BUF_MEM_grow_clean */
int BUF_MEM_grow_clean(void);

/* Symbol: asn1_const_Finish */
/* Demangled: asn1_const_Finish */
int asn1_const_Finish(void);

/* Symbol: ASN1_d2i_fp */
/* Demangled: ASN1_d2i_fp */
int ASN1_d2i_fp(void);

/* Symbol: BIO_s_file */
/* Demangled: BIO_s_file */
int BIO_s_file(void);

/* Symbol: BIO_new */
/* Demangled: BIO_new */
int BIO_new(void);

/* Symbol: BIO_ctrl */
/* Demangled: BIO_ctrl */
int BIO_ctrl(void);

/* Symbol: ASN1_d2i_bio */
/* Demangled: ASN1_d2i_bio */
int ASN1_d2i_bio(void);

/* Symbol: BIO_free */
/* Demangled: BIO_free */
int BIO_free(void);

/* Symbol: BUF_MEM_free */
/* Demangled: BUF_MEM_free */
int BUF_MEM_free(void);

/* Symbol: BUF_MEM_new */
/* Demangled: BUF_MEM_new */
int BUF_MEM_new(void);

/* Symbol: ERR_clear_error */
/* Demangled: ERR_clear_error */
int ERR_clear_error(void);

/* Symbol: BIO_read */
/* Demangled: BIO_read */
int BIO_read(void);

/* Symbol: ERR_peek_error */
/* Demangled: ERR_peek_error */
int ERR_peek_error(void);

/* Symbol: ASN1_item_d2i_bio */
/* Demangled: ASN1_item_d2i_bio */
int ASN1_item_d2i_bio(void);

/* Symbol: ASN1_item_d2i */
/* Demangled: ASN1_item_d2i */
int ASN1_item_d2i(void);

/* Symbol: ASN1_item_d2i_fp */
/* Demangled: ASN1_item_d2i_fp */
int ASN1_item_d2i_fp(void);

/* Symbol: ASN1_digest */
/* Demangled: ASN1_digest */
int ASN1_digest(void);

/* Symbol: EVP_Digest */
/* Demangled: EVP_Digest */
int EVP_Digest(void);

/* Symbol: ASN1_item_digest */
/* Demangled: ASN1_item_digest */
int ASN1_item_digest(void);

/* Symbol: ASN1_item_i2d */
/* Demangled: ASN1_item_i2d */
int ASN1_item_i2d(void);

/* Symbol: ASN1_dup */
/* Demangled: ASN1_dup */
int ASN1_dup(void);

/* Symbol: ASN1_item_dup */
/* Demangled: ASN1_item_dup */
int ASN1_item_dup(void);

/* Symbol: ASN1_ENUMERATED_set */
/* Demangled: ASN1_ENUMERATED_set */
int ASN1_ENUMERATED_set(void);

/* Symbol: ASN1_ENUMERATED_get */
/* Demangled: ASN1_ENUMERATED_get */
int ASN1_ENUMERATED_get(void);

/* Symbol: BN_to_ASN1_ENUMERATED */
/* Demangled: BN_to_ASN1_ENUMERATED */
int BN_to_ASN1_ENUMERATED(void);

/* Symbol: BN_num_bits */
/* Demangled: BN_num_bits */
int BN_num_bits(void);

/* Symbol: CRYPTO_realloc */
/* Demangled: CRYPTO_realloc */
int CRYPTO_realloc(void);

/* Symbol: BN_bn2bin */
/* Demangled: BN_bn2bin */
int BN_bn2bin(void);

/* Symbol: ASN1_ENUMERATED_to_BN */
/* Demangled: ASN1_ENUMERATED_to_BN */
int ASN1_ENUMERATED_to_BN(void);

/* Symbol: BN_bin2bn */
/* Demangled: BN_bin2bn */
int BN_bin2bn(void);

/* Symbol: BN_set_negative */
/* Demangled: BN_set_negative */
int BN_set_negative(void);

/* Symbol: ASN1_GENERALIZEDTIME_check */
/* Demangled: ASN1_GENERALIZEDTIME_check */
int ASN1_GENERALIZEDTIME_check(void);

/* Symbol: ASN1_GENERALIZEDTIME_set_string */
/* Demangled: ASN1_GENERALIZEDTIME_set_string */
int ASN1_GENERALIZEDTIME_set_string(void);

/* Symbol: ASN1_GENERALIZEDTIME_set */
/* Demangled: ASN1_GENERALIZEDTIME_set */
int ASN1_GENERALIZEDTIME_set(void);

/* Symbol: ASN1_GENERALIZEDTIME_adj */
/* Demangled: ASN1_GENERALIZEDTIME_adj */
int ASN1_GENERALIZEDTIME_adj(void);

/* Symbol: OPENSSL_gmtime */
/* Demangled: OPENSSL_gmtime */
int OPENSSL_gmtime(void);

/* Symbol: OPENSSL_gmtime_adj */
/* Demangled: OPENSSL_gmtime_adj */
int OPENSSL_gmtime_adj(void);

/* Symbol: BIO_snprintf */
/* Demangled: BIO_snprintf */
int BIO_snprintf(void);

/* Symbol: ASN1_i2d_fp */
/* Demangled: ASN1_i2d_fp */
int ASN1_i2d_fp(void);

/* Symbol: ASN1_i2d_bio */
/* Demangled: ASN1_i2d_bio */
int ASN1_i2d_bio(void);

/* Symbol: BIO_write */
/* Demangled: BIO_write */
int BIO_write(void);

/* Symbol: ASN1_item_i2d_fp */
/* Demangled: ASN1_item_i2d_fp */
int ASN1_item_i2d_fp(void);

/* Symbol: ASN1_item_i2d_bio */
/* Demangled: ASN1_item_i2d_bio */
int ASN1_item_i2d_bio(void);

/* Symbol: ASN1_INTEGER_dup */
/* Demangled: ASN1_INTEGER_dup */
int ASN1_INTEGER_dup(void);

/* Symbol: ASN1_STRING_dup */
/* Demangled: ASN1_STRING_dup */
int ASN1_STRING_dup(void);

/* Symbol: ASN1_INTEGER_cmp */
/* Demangled: ASN1_INTEGER_cmp */
int ASN1_INTEGER_cmp(void);

/* Symbol: ASN1_STRING_cmp */
/* Demangled: ASN1_STRING_cmp */
int ASN1_STRING_cmp(void);

/* Symbol: i2c_ASN1_INTEGER */
/* Demangled: i2c_ASN1_INTEGER */
int i2c_ASN1_INTEGER(void);

/* Symbol: c2i_ASN1_INTEGER */
/* Demangled: c2i_ASN1_INTEGER */
int c2i_ASN1_INTEGER(void);

/* Symbol: d2i_ASN1_UINTEGER */
/* Demangled: d2i_ASN1_UINTEGER */
int d2i_ASN1_UINTEGER(void);

/* Symbol: ASN1_INTEGER_set */
/* Demangled: ASN1_INTEGER_set */
int ASN1_INTEGER_set(void);

/* Symbol: ASN1_INTEGER_get */
/* Demangled: ASN1_INTEGER_get */
int ASN1_INTEGER_get(void);

/* Symbol: BN_to_ASN1_INTEGER */
/* Demangled: BN_to_ASN1_INTEGER */
int BN_to_ASN1_INTEGER(void);

/* Symbol: ASN1_INTEGER_to_BN */
/* Demangled: ASN1_INTEGER_to_BN */
int ASN1_INTEGER_to_BN(void);

/* Symbol: ASN1_mbstring_copy */
/* Demangled: ASN1_mbstring_copy */
int ASN1_mbstring_copy(void);

/* Symbol: ASN1_mbstring_ncopy */
/* Demangled: ASN1_mbstring_ncopy */
int ASN1_mbstring_ncopy(void);

/* Symbol: UTF8_getc */
/* Demangled: UTF8_getc */
int UTF8_getc(void);

/* Symbol: ERR_add_error_data */
/* Demangled: ERR_add_error_data */
int ERR_add_error_data(void);

/* Symbol: UTF8_putc */
/* Demangled: UTF8_putc */
int UTF8_putc(void);

/* Symbol: i2d_ASN1_OBJECT */
/* Demangled: i2d_ASN1_OBJECT */
int i2d_ASN1_OBJECT(void);

/* Symbol: a2d_ASN1_OBJECT */
/* Demangled: a2d_ASN1_OBJECT */
int a2d_ASN1_OBJECT(void);

/* Symbol: BN_new */
/* Demangled: BN_new */
int BN_new(void);

/* Symbol: BN_set_word */
/* Demangled: BN_set_word */
int BN_set_word(void);

/* Symbol: BN_mul_word */
/* Demangled: BN_mul_word */
int BN_mul_word(void);

/* Symbol: BN_add_word */
/* Demangled: BN_add_word */
int BN_add_word(void);

/* Symbol: BN_div_word */
/* Demangled: BN_div_word */
int BN_div_word(void);

/* Symbol: BN_free */
/* Demangled: BN_free */
int BN_free(void);

/* Symbol: i2t_ASN1_OBJECT */
/* Demangled: i2t_ASN1_OBJECT */
int i2t_ASN1_OBJECT(void);

/* Symbol: OBJ_obj2txt */
/* Demangled: OBJ_obj2txt */
int OBJ_obj2txt(void);

/* Symbol: i2a_ASN1_OBJECT */
/* Demangled: i2a_ASN1_OBJECT */
int i2a_ASN1_OBJECT(void);

/* Symbol: d2i_ASN1_OBJECT */
/* Demangled: d2i_ASN1_OBJECT */
int d2i_ASN1_OBJECT(void);

/* Symbol: c2i_ASN1_OBJECT */
/* Demangled: c2i_ASN1_OBJECT */
int c2i_ASN1_OBJECT(void);

/* Symbol: ASN1_OBJECT_new */
/* Demangled: ASN1_OBJECT_new */
int ASN1_OBJECT_new(void);

/* Symbol: ASN1_OBJECT_free */
/* Demangled: ASN1_OBJECT_free */
int ASN1_OBJECT_free(void);

/* Symbol: ASN1_OBJECT_create */
/* Demangled: ASN1_OBJECT_create */
int ASN1_OBJECT_create(void);

/* Symbol: OBJ_dup */
/* Demangled: OBJ_dup */
int OBJ_dup(void);

/* Symbol: ASN1_OCTET_STRING_dup */
/* Demangled: ASN1_OCTET_STRING_dup */
int ASN1_OCTET_STRING_dup(void);

/* Symbol: ASN1_OCTET_STRING_cmp */
/* Demangled: ASN1_OCTET_STRING_cmp */
int ASN1_OCTET_STRING_cmp(void);

/* Symbol: ASN1_OCTET_STRING_set */
/* Demangled: ASN1_OCTET_STRING_set */
int ASN1_OCTET_STRING_set(void);

/* Symbol: ASN1_PRINTABLE_type */
/* Demangled: ASN1_PRINTABLE_type */
int ASN1_PRINTABLE_type(void);

/* Symbol: ASN1_UNIVERSALSTRING_to_string */
/* Demangled: ASN1_UNIVERSALSTRING_to_string */
int ASN1_UNIVERSALSTRING_to_string(void);

/* Symbol: i2d_ASN1_SET */
/* Demangled: i2d_ASN1_SET */
int i2d_ASN1_SET(void);

/* Symbol: sk_num */
/* Demangled: sk_num */
int sk_num(void);

/* Symbol: sk_value */
/* Demangled: sk_value */
int sk_value(void);

/* Symbol: d2i_ASN1_SET */
/* Demangled: d2i_ASN1_SET */
int d2i_ASN1_SET(void);

/* Symbol: sk_new_null */
/* Demangled: sk_new_null */
int sk_new_null(void);

/* Symbol: sk_pop_free */
/* Demangled: sk_pop_free */
int sk_pop_free(void);

/* Symbol: sk_free */
/* Demangled: sk_free */
int sk_free(void);

/* Symbol: sk_push */
/* Demangled: sk_push */
int sk_push(void);

/* Symbol: asn1_add_error */
/* Demangled: asn1_add_error */
int asn1_add_error(void);

/* Symbol: ASN1_sign */
/* Demangled: ASN1_sign */
int ASN1_sign(void);

/* Symbol: EVP_MD_CTX_init */
/* Demangled: EVP_MD_CTX_init */
int EVP_MD_CTX_init(void);

/* Symbol: ASN1_TYPE_free */
/* Demangled: ASN1_TYPE_free */
int ASN1_TYPE_free(void);

/* Symbol: ASN1_TYPE_new */
/* Demangled: ASN1_TYPE_new */
int ASN1_TYPE_new(void);

/* Symbol: OBJ_nid2obj */
/* Demangled: OBJ_nid2obj */
int OBJ_nid2obj(void);

/* Symbol: EVP_PKEY_size */
/* Demangled: EVP_PKEY_size */
int EVP_PKEY_size(void);

/* Symbol: EVP_DigestInit_ex */
/* Demangled: EVP_DigestInit_ex */
int EVP_DigestInit_ex(void);

/* Symbol: EVP_DigestUpdate */
/* Demangled: EVP_DigestUpdate */
int EVP_DigestUpdate(void);

/* Symbol: EVP_SignFinal */
/* Demangled: EVP_SignFinal */
int EVP_SignFinal(void);

/* Symbol: EVP_MD_CTX_cleanup */
/* Demangled: EVP_MD_CTX_cleanup */
int EVP_MD_CTX_cleanup(void);

/* Symbol: ASN1_item_sign */
/* Demangled: ASN1_item_sign */
int ASN1_item_sign(void);

/* Symbol: EVP_DigestSignInit */
/* Demangled: EVP_DigestSignInit */
int EVP_DigestSignInit(void);

/* Symbol: ASN1_item_sign_ctx */
/* Demangled: ASN1_item_sign_ctx */
int ASN1_item_sign_ctx(void);

/* Symbol: EVP_MD_CTX_md */
/* Demangled: EVP_MD_CTX_md */
int EVP_MD_CTX_md(void);

/* Symbol: EVP_PKEY_CTX_get0_pkey */
/* Demangled: EVP_PKEY_CTX_get0_pkey */
int EVP_PKEY_CTX_get0_pkey(void);

/* Symbol: EVP_MD_type */
/* Demangled: EVP_MD_type */
int EVP_MD_type(void);

/* Symbol: OBJ_find_sigid_by_algs */
/* Demangled: OBJ_find_sigid_by_algs */
int OBJ_find_sigid_by_algs(void);

/* Symbol: X509_ALGOR_set0 */
/* Demangled: X509_ALGOR_set0 */
int X509_ALGOR_set0(void);

/* Symbol: EVP_DigestSignFinal */
/* Demangled: EVP_DigestSignFinal */
int EVP_DigestSignFinal(void);

/* Symbol: X509_NAME_print_ex */
/* Demangled: X509_NAME_print_ex */
int X509_NAME_print_ex(void);

/* Symbol: X509_NAME_print */
/* Demangled: X509_NAME_print */
int X509_NAME_print(void);

/* Symbol: X509_NAME_entry_count */
/* Demangled: X509_NAME_entry_count */
int X509_NAME_entry_count(void);

/* Symbol: X509_NAME_get_entry */
/* Demangled: X509_NAME_get_entry */
int X509_NAME_get_entry(void);

/* Symbol: X509_NAME_ENTRY_get_object */
/* Demangled: X509_NAME_ENTRY_get_object */
int X509_NAME_ENTRY_get_object(void);

/* Symbol: X509_NAME_ENTRY_get_data */
/* Demangled: X509_NAME_ENTRY_get_data */
int X509_NAME_ENTRY_get_data(void);

/* Symbol: OBJ_obj2nid */
/* Demangled: OBJ_obj2nid */
int OBJ_obj2nid(void);

/* Symbol: OBJ_nid2sn */
/* Demangled: OBJ_nid2sn */
int OBJ_nid2sn(void);

/* Symbol: OBJ_nid2ln */
/* Demangled: OBJ_nid2ln */
int OBJ_nid2ln(void);

/* Symbol: X509_NAME_print_ex_fp */
/* Demangled: X509_NAME_print_ex_fp */
int X509_NAME_print_ex_fp(void);

/* Symbol: BIO_new_fp */
/* Demangled: BIO_new_fp */
int BIO_new_fp(void);

/* Symbol: ASN1_STRING_print_ex */
/* Demangled: ASN1_STRING_print_ex */
int ASN1_STRING_print_ex(void);

/* Symbol: ASN1_tag2str */
/* Demangled: ASN1_tag2str */
int ASN1_tag2str(void);

/* Symbol: i2d_ASN1_TYPE */
/* Demangled: i2d_ASN1_TYPE */
int i2d_ASN1_TYPE(void);

/* Symbol: ASN1_STRING_print_ex_fp */
/* Demangled: ASN1_STRING_print_ex_fp */
int ASN1_STRING_print_ex_fp(void);

/* Symbol: ASN1_STRING_to_UTF8 */
/* Demangled: ASN1_STRING_to_UTF8 */
int ASN1_STRING_to_UTF8(void);

/* Symbol: ASN1_STRING_set_default_mask */
/* Demangled: ASN1_STRING_set_default_mask */
int ASN1_STRING_set_default_mask(void);

/* Symbol: ASN1_STRING_get_default_mask */
/* Demangled: ASN1_STRING_get_default_mask */
int ASN1_STRING_get_default_mask(void);

/* Symbol: ASN1_STRING_set_default_mask_asc */
/* Demangled: ASN1_STRING_set_default_mask_asc */
int ASN1_STRING_set_default_mask_asc(void);

/* Symbol: ASN1_STRING_set_by_NID */
/* Demangled: ASN1_STRING_set_by_NID */
int ASN1_STRING_set_by_NID(void);

/* Symbol: ASN1_STRING_TABLE_get */
/* Demangled: ASN1_STRING_TABLE_get */
int ASN1_STRING_TABLE_get(void);

/* Symbol: OBJ_bsearch_ */
/* Demangled: OBJ_bsearch_ */
int OBJ_bsearch_(void);

/* Symbol: sk_find */
/* Demangled: sk_find */
int sk_find(void);

/* Symbol: ASN1_STRING_TABLE_add */
/* Demangled: ASN1_STRING_TABLE_add */
int ASN1_STRING_TABLE_add(void);

/* Symbol: sk_new */
/* Demangled: sk_new */
int sk_new(void);

/* Symbol: ASN1_STRING_TABLE_cleanup */
/* Demangled: ASN1_STRING_TABLE_cleanup */
int ASN1_STRING_TABLE_cleanup(void);

/* Symbol: d2i_ASN1_TIME */
/* Demangled: d2i_ASN1_TIME */
int d2i_ASN1_TIME(void);

/* Symbol: ASN1_TIME_it */
/* Demangled: ASN1_TIME_it */
extern void* ASN1_TIME_it;

/* Symbol: i2d_ASN1_TIME */
/* Demangled: i2d_ASN1_TIME */
int i2d_ASN1_TIME(void);

/* Symbol: ASN1_TIME_new */
/* Demangled: ASN1_TIME_new */
int ASN1_TIME_new(void);

/* Symbol: ASN1_item_new */
/* Demangled: ASN1_item_new */
int ASN1_item_new(void);

/* Symbol: ASN1_TIME_free */
/* Demangled: ASN1_TIME_free */
int ASN1_TIME_free(void);

/* Symbol: ASN1_item_free */
/* Demangled: ASN1_item_free */
int ASN1_item_free(void);

/* Symbol: ASN1_TIME_set */
/* Demangled: ASN1_TIME_set */
int ASN1_TIME_set(void);

/* Symbol: ASN1_TIME_adj */
/* Demangled: ASN1_TIME_adj */
int ASN1_TIME_adj(void);

/* Symbol: ASN1_UTCTIME_adj */
/* Demangled: ASN1_UTCTIME_adj */
int ASN1_UTCTIME_adj(void);

/* Symbol: ASN1_TIME_check */
/* Demangled: ASN1_TIME_check */
int ASN1_TIME_check(void);

/* Symbol: ASN1_UTCTIME_check */
/* Demangled: ASN1_UTCTIME_check */
int ASN1_UTCTIME_check(void);

/* Symbol: ASN1_TIME_to_generalizedtime */
/* Demangled: ASN1_TIME_to_generalizedtime */
int ASN1_TIME_to_generalizedtime(void);

/* Symbol: ASN1_GENERALIZEDTIME_new */
/* Demangled: ASN1_GENERALIZEDTIME_new */
int ASN1_GENERALIZEDTIME_new(void);

/* Symbol: BUF_strlcpy */
/* Demangled: BUF_strlcpy */
int BUF_strlcpy(void);

/* Symbol: BUF_strlcat */
/* Demangled: BUF_strlcat */
int BUF_strlcat(void);

/* Symbol: ASN1_TIME_set_string */
/* Demangled: ASN1_TIME_set_string */
int ASN1_TIME_set_string(void);

/* Symbol: ASN1_STRING_copy */
/* Demangled: ASN1_STRING_copy */
int ASN1_STRING_copy(void);

/* Symbol: ASN1_TYPE_get */
/* Demangled: ASN1_TYPE_get */
int ASN1_TYPE_get(void);

/* Symbol: ASN1_TYPE_set */
/* Demangled: ASN1_TYPE_set */
int ASN1_TYPE_set(void);

/* Symbol: ASN1_primitive_free */
/* Demangled: ASN1_primitive_free */
int ASN1_primitive_free(void);

/* Symbol: ASN1_TYPE_set1 */
/* Demangled: ASN1_TYPE_set1 */
int ASN1_TYPE_set1(void);

/* Symbol: ASN1_TYPE_cmp */
/* Demangled: ASN1_TYPE_cmp */
int ASN1_TYPE_cmp(void);

/* Symbol: OBJ_cmp */
/* Demangled: OBJ_cmp */
int OBJ_cmp(void);

/* Symbol: ASN1_UTCTIME_set_string */
/* Demangled: ASN1_UTCTIME_set_string */
int ASN1_UTCTIME_set_string(void);

/* Symbol: ASN1_UTCTIME_set */
/* Demangled: ASN1_UTCTIME_set */
int ASN1_UTCTIME_set(void);

/* Symbol: ASN1_UTCTIME_cmp_time_t */
/* Demangled: ASN1_UTCTIME_cmp_time_t */
int ASN1_UTCTIME_cmp_time_t(void);

/* Symbol: ASN1_verify */
/* Demangled: ASN1_verify */
int ASN1_verify(void);

/* Symbol: EVP_get_digestbyname */
/* Demangled: EVP_get_digestbyname */
int EVP_get_digestbyname(void);

/* Symbol: EVP_VerifyFinal */
/* Demangled: EVP_VerifyFinal */
int EVP_VerifyFinal(void);

/* Symbol: ASN1_item_verify */
/* Demangled: ASN1_item_verify */
int ASN1_item_verify(void);

/* Symbol: OBJ_find_sigid_algs */
/* Demangled: OBJ_find_sigid_algs */
int OBJ_find_sigid_algs(void);

/* Symbol: EVP_PKEY_type */
/* Demangled: EVP_PKEY_type */
int EVP_PKEY_type(void);

/* Symbol: EVP_DigestVerifyInit */
/* Demangled: EVP_DigestVerifyInit */
int EVP_DigestVerifyInit(void);

/* Symbol: EVP_DigestVerifyFinal */
/* Demangled: EVP_DigestVerifyFinal */
int EVP_DigestVerifyFinal(void);

/* Symbol: EVP_PKEY_asn1_get_count */
/* Demangled: EVP_PKEY_asn1_get_count */
int EVP_PKEY_asn1_get_count(void);

/* Symbol: EVP_PKEY_asn1_get0 */
/* Demangled: EVP_PKEY_asn1_get0 */
int EVP_PKEY_asn1_get0(void);

/* Symbol: EVP_PKEY_asn1_find */
/* Demangled: EVP_PKEY_asn1_find */
int EVP_PKEY_asn1_find(void);

/* Symbol: ENGINE_get_pkey_asn1_meth_engine */
/* Demangled: ENGINE_get_pkey_asn1_meth_engine */
int ENGINE_get_pkey_asn1_meth_engine(void);

/* Symbol: ENGINE_get_pkey_asn1_meth */
/* Demangled: ENGINE_get_pkey_asn1_meth */
int ENGINE_get_pkey_asn1_meth(void);

/* Symbol: EVP_PKEY_asn1_find_str */
/* Demangled: EVP_PKEY_asn1_find_str */
int EVP_PKEY_asn1_find_str(void);

/* Symbol: ENGINE_pkey_asn1_find_str */
/* Demangled: ENGINE_pkey_asn1_find_str */
int ENGINE_pkey_asn1_find_str(void);

/* Symbol: ENGINE_init */
/* Demangled: ENGINE_init */
int ENGINE_init(void);

/* Symbol: ENGINE_free */
/* Demangled: ENGINE_free */
int ENGINE_free(void);

/* Symbol: EVP_PKEY_asn1_add0 */
/* Demangled: EVP_PKEY_asn1_add0 */
int EVP_PKEY_asn1_add0(void);

/* Symbol: sk_sort */
/* Demangled: sk_sort */
int sk_sort(void);

/* Symbol: EVP_PKEY_asn1_add_alias */
/* Demangled: EVP_PKEY_asn1_add_alias */
int EVP_PKEY_asn1_add_alias(void);

/* Symbol: EVP_PKEY_asn1_new */
/* Demangled: EVP_PKEY_asn1_new */
int EVP_PKEY_asn1_new(void);

/* Symbol: EVP_PKEY_asn1_free */
/* Demangled: EVP_PKEY_asn1_free */
int EVP_PKEY_asn1_free(void);

/* Symbol: BUF_strdup */
/* Demangled: BUF_strdup */
int BUF_strdup(void);

/* Symbol: EVP_PKEY_asn1_get0_info */
/* Demangled: EVP_PKEY_asn1_get0_info */
int EVP_PKEY_asn1_get0_info(void);

/* Symbol: EVP_PKEY_get0_asn1 */
/* Demangled: EVP_PKEY_get0_asn1 */
int EVP_PKEY_get0_asn1(void);

/* Symbol: EVP_PKEY_asn1_copy */
/* Demangled: EVP_PKEY_asn1_copy */
int EVP_PKEY_asn1_copy(void);

/* Symbol: EVP_PKEY_asn1_set_public */
/* Demangled: EVP_PKEY_asn1_set_public */
int EVP_PKEY_asn1_set_public(void);

/* Symbol: EVP_PKEY_asn1_set_private */
/* Demangled: EVP_PKEY_asn1_set_private */
int EVP_PKEY_asn1_set_private(void);

/* Symbol: EVP_PKEY_asn1_set_param */
/* Demangled: EVP_PKEY_asn1_set_param */
int EVP_PKEY_asn1_set_param(void);

/* Symbol: EVP_PKEY_asn1_set_free */
/* Demangled: EVP_PKEY_asn1_set_free */
int EVP_PKEY_asn1_set_free(void);

/* Symbol: EVP_PKEY_asn1_set_ctrl */
/* Demangled: EVP_PKEY_asn1_set_ctrl */
int EVP_PKEY_asn1_set_ctrl(void);

/* Symbol: rsa_asn1_meths */
/* Demangled: rsa_asn1_meths */
extern void* rsa_asn1_meths;

/* Symbol: dh_asn1_meth */
/* Demangled: dh_asn1_meth */
extern void* dh_asn1_meth;

/* Symbol: dsa_asn1_meths */
/* Demangled: dsa_asn1_meths */
extern void* dsa_asn1_meths;

/* Symbol: eckey_asn1_meth */
/* Demangled: eckey_asn1_meth */
extern void* eckey_asn1_meth;

/* Symbol: hmac_asn1_meth */
/* Demangled: hmac_asn1_meth */
extern void* hmac_asn1_meth;

/* Symbol: cmac_asn1_meth */
/* Demangled: cmac_asn1_meth */
extern void* cmac_asn1_meth;

/* Symbol: ERR_load_ASN1_strings */
/* Demangled: ERR_load_ASN1_strings */
int ERR_load_ASN1_strings(void);

/* Symbol: ERR_func_error_string */
/* Demangled: ERR_func_error_string */
int ERR_func_error_string(void);

/* Symbol: ERR_load_strings */
/* Demangled: ERR_load_strings */
int ERR_load_strings(void);

/* Symbol: ASN1_generate_nconf */
/* Demangled: ASN1_generate_nconf */
int ASN1_generate_nconf(void);

/* Symbol: X509V3_set_nconf */
/* Demangled: X509V3_set_nconf */
int X509V3_set_nconf(void);

/* Symbol: ASN1_generate_v3 */
/* Demangled: ASN1_generate_v3 */
int ASN1_generate_v3(void);

/* Symbol: CONF_parse_list */
/* Demangled: CONF_parse_list */
int CONF_parse_list(void);

/* Symbol: X509V3_get_section */
/* Demangled: X509V3_get_section */
int X509V3_get_section(void);

/* Symbol: i2d_ASN1_SET_ANY */
/* Demangled: i2d_ASN1_SET_ANY */
int i2d_ASN1_SET_ANY(void);

/* Symbol: i2d_ASN1_SEQUENCE_ANY */
/* Demangled: i2d_ASN1_SEQUENCE_ANY */
int i2d_ASN1_SEQUENCE_ANY(void);

/* Symbol: X509V3_section_free */
/* Demangled: X509V3_section_free */
int X509V3_section_free(void);

/* Symbol: s2i_ASN1_INTEGER */
/* Demangled: s2i_ASN1_INTEGER */
int s2i_ASN1_INTEGER(void);

/* Symbol: string_to_hex */
/* Demangled: string_to_hex */
int string_to_hex(void);

/* Symbol: X509V3_get_value_bool */
/* Demangled: X509V3_get_value_bool */
int X509V3_get_value_bool(void);

/* Symbol: OBJ_txt2obj */
/* Demangled: OBJ_txt2obj */
int OBJ_txt2obj(void);

/* Symbol: d2i_ASN1_TYPE */
/* Demangled: d2i_ASN1_TYPE */
int d2i_ASN1_TYPE(void);

/* Symbol: ASN1_check_infinite_end */
/* Demangled: ASN1_check_infinite_end */
int ASN1_check_infinite_end(void);

/* Symbol: ASN1_put_eoc */
/* Demangled: ASN1_put_eoc */
int ASN1_put_eoc(void);

/* Symbol: asn1_Finish */
/* Demangled: asn1_Finish */
int asn1_Finish(void);

/* Symbol: asn1_GetSequence */
/* Demangled: asn1_GetSequence */
int asn1_GetSequence(void);

/* Symbol: ASN1_STRING_set0 */
/* Demangled: ASN1_STRING_set0 */
int ASN1_STRING_set0(void);

/* Symbol: ASN1_STRING_length */
/* Demangled: ASN1_STRING_length */
int ASN1_STRING_length(void);

/* Symbol: ASN1_STRING_length_set */
/* Demangled: ASN1_STRING_length_set */
int ASN1_STRING_length_set(void);

/* Symbol: ASN1_STRING_type */
/* Demangled: ASN1_STRING_type */
int ASN1_STRING_type(void);

/* Symbol: ASN1_STRING_data */
/* Demangled: ASN1_STRING_data */
int ASN1_STRING_data(void);

/* Symbol: ASN1_version */
/* Demangled: ASN1_version */
extern void* ASN1_version;

/* Symbol: ASN1_parse */
/* Demangled: ASN1_parse */
int ASN1_parse(void);

/* Symbol: BIO_printf */
/* Demangled: BIO_printf */
int BIO_printf(void);

/* Symbol: BIO_indent */
/* Demangled: BIO_indent */
int BIO_indent(void);

/* Symbol: d2i_ASN1_INTEGER */
/* Demangled: d2i_ASN1_INTEGER */
int d2i_ASN1_INTEGER(void);

/* Symbol: BIO_dump_indent */
/* Demangled: BIO_dump_indent */
int BIO_dump_indent(void);

/* Symbol: d2i_ASN1_OCTET_STRING */
/* Demangled: d2i_ASN1_OCTET_STRING */
int d2i_ASN1_OCTET_STRING(void);

/* Symbol: d2i_ASN1_ENUMERATED */
/* Demangled: d2i_ASN1_ENUMERATED */
int d2i_ASN1_ENUMERATED(void);

/* Symbol: ASN1_parse_dump */
/* Demangled: ASN1_parse_dump */
int ASN1_parse_dump(void);

/* Symbol: i2d_ASN1_bio_stream */
/* Demangled: i2d_ASN1_bio_stream */
int i2d_ASN1_bio_stream(void);

/* Symbol: BIO_new_NDEF */
/* Demangled: BIO_new_NDEF */
int BIO_new_NDEF(void);

/* Symbol: SMIME_crlf_copy */
/* Demangled: SMIME_crlf_copy */
int SMIME_crlf_copy(void);

/* Symbol: BIO_pop */
/* Demangled: BIO_pop */
int BIO_pop(void);

/* Symbol: BIO_f_buffer */
/* Demangled: BIO_f_buffer */
int BIO_f_buffer(void);

/* Symbol: BIO_push */
/* Demangled: BIO_push */
int BIO_push(void);

/* Symbol: BIO_gets */
/* Demangled: BIO_gets */
int BIO_gets(void);

/* Symbol: PEM_write_bio_ASN1_stream */
/* Demangled: PEM_write_bio_ASN1_stream */
int PEM_write_bio_ASN1_stream(void);

/* Symbol: BIO_f_base64 */
/* Demangled: BIO_f_base64 */
int BIO_f_base64(void);

/* Symbol: SMIME_write_ASN1 */
/* Demangled: SMIME_write_ASN1 */
int SMIME_write_ASN1(void);

/* Symbol: RAND_pseudo_bytes */
/* Demangled: RAND_pseudo_bytes */
int RAND_pseudo_bytes(void);

/* Symbol: BIO_puts */
/* Demangled: BIO_puts */
int BIO_puts(void);

/* Symbol: SMIME_read_ASN1 */
/* Demangled: SMIME_read_ASN1 */
int SMIME_read_ASN1(void);

/* Symbol: BIO_s_mem */
/* Demangled: BIO_s_mem */
int BIO_s_mem(void);

/* Symbol: BIO_vfree */
/* Demangled: BIO_vfree */
int BIO_vfree(void);

/* Symbol: SMIME_text */
/* Demangled: SMIME_text */
int SMIME_text(void);

/* Symbol: ASN1_add_oid_module */
/* Demangled: ASN1_add_oid_module */
int ASN1_add_oid_module(void);

/* Symbol: CONF_module_add */
/* Demangled: CONF_module_add */
int CONF_module_add(void);

/* Symbol: CONF_imodule_get_value */
/* Demangled: CONF_imodule_get_value */
int CONF_imodule_get_value(void);

/* Symbol: NCONF_get_section */
/* Demangled: NCONF_get_section */
int NCONF_get_section(void);

/* Symbol: OBJ_create */
/* Demangled: OBJ_create */
int OBJ_create(void);

/* Symbol: OBJ_cleanup */
/* Demangled: OBJ_cleanup */
int OBJ_cleanup(void);

/* Symbol: ASN1_seq_unpack */
/* Demangled: ASN1_seq_unpack */
int ASN1_seq_unpack(void);

/* Symbol: ASN1_seq_pack */
/* Demangled: ASN1_seq_pack */
int ASN1_seq_pack(void);

/* Symbol: ASN1_unpack_string */
/* Demangled: ASN1_unpack_string */
int ASN1_unpack_string(void);

/* Symbol: ASN1_pack_string */
/* Demangled: ASN1_pack_string */
int ASN1_pack_string(void);

/* Symbol: ASN1_item_pack */
/* Demangled: ASN1_item_pack */
int ASN1_item_pack(void);

/* Symbol: ASN1_item_unpack */
/* Demangled: ASN1_item_unpack */
int ASN1_item_unpack(void);

/* Symbol: BIO_f_asn1 */
/* Demangled: BIO_f_asn1 */
int BIO_f_asn1(void);

/* Symbol: BIO_asn1_set_prefix */
/* Demangled: BIO_asn1_set_prefix */
int BIO_asn1_set_prefix(void);

/* Symbol: BIO_asn1_get_prefix */
/* Demangled: BIO_asn1_get_prefix */
int BIO_asn1_get_prefix(void);

/* Symbol: BIO_asn1_set_suffix */
/* Demangled: BIO_asn1_set_suffix */
int BIO_asn1_set_suffix(void);

/* Symbol: BIO_asn1_get_suffix */
/* Demangled: BIO_asn1_get_suffix */
int BIO_asn1_get_suffix(void);

/* Symbol: OpenSSLDie */
/* Demangled: OpenSSLDie */
int OpenSSLDie(void);

/* Symbol: BIO_clear_flags */
/* Demangled: BIO_clear_flags */
int BIO_clear_flags(void);

/* Symbol: BIO_copy_next_retry */
/* Demangled: BIO_copy_next_retry */
int BIO_copy_next_retry(void);

/* Symbol: BIO_callback_ctrl */
/* Demangled: BIO_callback_ctrl */
int BIO_callback_ctrl(void);

/* Symbol: ASN1_item_ndef_i2d */
/* Demangled: ASN1_item_ndef_i2d */
int ASN1_item_ndef_i2d(void);

/* Symbol: d2i_PrivateKey */
/* Demangled: d2i_PrivateKey */
int d2i_PrivateKey(void);

/* Symbol: ENGINE_finish */
/* Demangled: ENGINE_finish */
int ENGINE_finish(void);

/* Symbol: EVP_PKEY_new */
/* Demangled: EVP_PKEY_new */
int EVP_PKEY_new(void);

/* Symbol: EVP_PKEY_set_type */
/* Demangled: EVP_PKEY_set_type */
int EVP_PKEY_set_type(void);

/* Symbol: d2i_PKCS8_PRIV_KEY_INFO */
/* Demangled: d2i_PKCS8_PRIV_KEY_INFO */
int d2i_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: EVP_PKEY_free */
/* Demangled: EVP_PKEY_free */
int EVP_PKEY_free(void);

/* Symbol: EVP_PKCS82PKEY */
/* Demangled: EVP_PKCS82PKEY */
int EVP_PKCS82PKEY(void);

/* Symbol: PKCS8_PRIV_KEY_INFO_free */
/* Demangled: PKCS8_PRIV_KEY_INFO_free */
int PKCS8_PRIV_KEY_INFO_free(void);

/* Symbol: d2i_AutoPrivateKey */
/* Demangled: d2i_AutoPrivateKey */
int d2i_AutoPrivateKey(void);

/* Symbol: d2i_ASN1_SEQUENCE_ANY */
/* Demangled: d2i_ASN1_SEQUENCE_ANY */
int d2i_ASN1_SEQUENCE_ANY(void);

/* Symbol: d2i_PublicKey */
/* Demangled: d2i_PublicKey */
int d2i_PublicKey(void);

/* Symbol: EVP_PKEY_id */
/* Demangled: EVP_PKEY_id */
int EVP_PKEY_id(void);

/* Symbol: d2i_RSAPublicKey */
/* Demangled: d2i_RSAPublicKey */
int d2i_RSAPublicKey(void);

/* Symbol: o2i_ECPublicKey */
/* Demangled: o2i_ECPublicKey */
int o2i_ECPublicKey(void);

/* Symbol: d2i_DSAPublicKey */
/* Demangled: d2i_DSAPublicKey */
int d2i_DSAPublicKey(void);

/* Symbol: ASN1_TYPE_set_octetstring */
/* Demangled: ASN1_TYPE_set_octetstring */
int ASN1_TYPE_set_octetstring(void);

/* Symbol: ASN1_TYPE_get_octetstring */
/* Demangled: ASN1_TYPE_get_octetstring */
int ASN1_TYPE_get_octetstring(void);

/* Symbol: ASN1_TYPE_set_int_octetstring */
/* Demangled: ASN1_TYPE_set_int_octetstring */
int ASN1_TYPE_set_int_octetstring(void);

/* Symbol: i2d_ASN1_INTEGER */
/* Demangled: i2d_ASN1_INTEGER */
int i2d_ASN1_INTEGER(void);

/* Symbol: ASN1_TYPE_get_int_octetstring */
/* Demangled: ASN1_TYPE_get_int_octetstring */
int ASN1_TYPE_get_int_octetstring(void);

/* Symbol: i2a_ASN1_ENUMERATED */
/* Demangled: i2a_ASN1_ENUMERATED */
int i2a_ASN1_ENUMERATED(void);

/* Symbol: a2i_ASN1_ENUMERATED */
/* Demangled: a2i_ASN1_ENUMERATED */
int a2i_ASN1_ENUMERATED(void);

/* Symbol: i2a_ASN1_INTEGER */
/* Demangled: i2a_ASN1_INTEGER */
int i2a_ASN1_INTEGER(void);

/* Symbol: a2i_ASN1_INTEGER */
/* Demangled: a2i_ASN1_INTEGER */
int a2i_ASN1_INTEGER(void);

/* Symbol: i2a_ASN1_STRING */
/* Demangled: i2a_ASN1_STRING */
int i2a_ASN1_STRING(void);

/* Symbol: a2i_ASN1_STRING */
/* Demangled: a2i_ASN1_STRING */
int a2i_ASN1_STRING(void);

/* Symbol: i2d_PrivateKey */
/* Demangled: i2d_PrivateKey */
int i2d_PrivateKey(void);

/* Symbol: EVP_PKEY2PKCS8 */
/* Demangled: EVP_PKEY2PKCS8 */
int EVP_PKEY2PKCS8(void);

/* Symbol: i2d_PKCS8_PRIV_KEY_INFO */
/* Demangled: i2d_PKCS8_PRIV_KEY_INFO */
int i2d_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: i2d_PublicKey */
/* Demangled: i2d_PublicKey */
int i2d_PublicKey(void);

/* Symbol: i2d_RSAPublicKey */
/* Demangled: i2d_RSAPublicKey */
int i2d_RSAPublicKey(void);

/* Symbol: i2o_ECPublicKey */
/* Demangled: i2o_ECPublicKey */
int i2o_ECPublicKey(void);

/* Symbol: i2d_DSAPublicKey */
/* Demangled: i2d_DSAPublicKey */
int i2d_DSAPublicKey(void);

/* Symbol: d2i_NETSCAPE_ENCRYPTED_PKEY */
/* Demangled: d2i_NETSCAPE_ENCRYPTED_PKEY */
int d2i_NETSCAPE_ENCRYPTED_PKEY(void);

/* Symbol: NETSCAPE_ENCRYPTED_PKEY_it */
/* Demangled: NETSCAPE_ENCRYPTED_PKEY_it */
extern void* NETSCAPE_ENCRYPTED_PKEY_it;

/* Symbol: i2d_NETSCAPE_ENCRYPTED_PKEY */
/* Demangled: i2d_NETSCAPE_ENCRYPTED_PKEY */
int i2d_NETSCAPE_ENCRYPTED_PKEY(void);

/* Symbol: NETSCAPE_ENCRYPTED_PKEY_new */
/* Demangled: NETSCAPE_ENCRYPTED_PKEY_new */
int NETSCAPE_ENCRYPTED_PKEY_new(void);

/* Symbol: NETSCAPE_ENCRYPTED_PKEY_free */
/* Demangled: NETSCAPE_ENCRYPTED_PKEY_free */
int NETSCAPE_ENCRYPTED_PKEY_free(void);

/* Symbol: d2i_NETSCAPE_PKEY */
/* Demangled: d2i_NETSCAPE_PKEY */
int d2i_NETSCAPE_PKEY(void);

/* Symbol: NETSCAPE_PKEY_it */
/* Demangled: NETSCAPE_PKEY_it */
extern void* NETSCAPE_PKEY_it;

/* Symbol: i2d_NETSCAPE_PKEY */
/* Demangled: i2d_NETSCAPE_PKEY */
int i2d_NETSCAPE_PKEY(void);

/* Symbol: NETSCAPE_PKEY_new */
/* Demangled: NETSCAPE_PKEY_new */
int NETSCAPE_PKEY_new(void);

/* Symbol: NETSCAPE_PKEY_free */
/* Demangled: NETSCAPE_PKEY_free */
int NETSCAPE_PKEY_free(void);

/* Symbol: i2d_Netscape_RSA */
/* Demangled: i2d_Netscape_RSA */
int i2d_Netscape_RSA(void);

/* Symbol: i2d_RSA_NET */
/* Demangled: i2d_RSA_NET */
int i2d_RSA_NET(void);

/* Symbol: EVP_CIPHER_CTX_init */
/* Demangled: EVP_CIPHER_CTX_init */
int EVP_CIPHER_CTX_init(void);

/* Symbol: i2d_RSAPrivateKey */
/* Demangled: i2d_RSAPrivateKey */
int i2d_RSAPrivateKey(void);

/* Symbol: EVP_CIPHER_CTX_cleanup */
/* Demangled: EVP_CIPHER_CTX_cleanup */
int EVP_CIPHER_CTX_cleanup(void);

/* Symbol: EVP_md5 */
/* Demangled: EVP_md5 */
int EVP_md5(void);

/* Symbol: EVP_rc4 */
/* Demangled: EVP_rc4 */
int EVP_rc4(void);

/* Symbol: EVP_BytesToKey */
/* Demangled: EVP_BytesToKey */
int EVP_BytesToKey(void);

/* Symbol: EVP_EncryptInit_ex */
/* Demangled: EVP_EncryptInit_ex */
int EVP_EncryptInit_ex(void);

/* Symbol: EVP_EncryptUpdate */
/* Demangled: EVP_EncryptUpdate */
int EVP_EncryptUpdate(void);

/* Symbol: EVP_EncryptFinal_ex */
/* Demangled: EVP_EncryptFinal_ex */
int EVP_EncryptFinal_ex(void);

/* Symbol: EVP_read_pw_string */
/* Demangled: EVP_read_pw_string */
int EVP_read_pw_string(void);

/* Symbol: d2i_Netscape_RSA */
/* Demangled: d2i_Netscape_RSA */
int d2i_Netscape_RSA(void);

/* Symbol: d2i_RSA_NET */
/* Demangled: d2i_RSA_NET */
int d2i_RSA_NET(void);

/* Symbol: EVP_DecryptInit_ex */
/* Demangled: EVP_DecryptInit_ex */
int EVP_DecryptInit_ex(void);

/* Symbol: EVP_DecryptUpdate */
/* Demangled: EVP_DecryptUpdate */
int EVP_DecryptUpdate(void);

/* Symbol: EVP_DecryptFinal_ex */
/* Demangled: EVP_DecryptFinal_ex */
int EVP_DecryptFinal_ex(void);

/* Symbol: d2i_RSAPrivateKey */
/* Demangled: d2i_RSAPrivateKey */
int d2i_RSAPrivateKey(void);

/* Symbol: ASN1_OCTET_STRING_it */
/* Demangled: ASN1_OCTET_STRING_it */
extern void* ASN1_OCTET_STRING_it;

/* Symbol: X509_SIG_it */
/* Demangled: X509_SIG_it */
extern void* X509_SIG_it;

/* Symbol: LONG_it */
/* Demangled: LONG_it */
extern void* LONG_it;

/* Symbol: X509_ALGOR_it */
/* Demangled: X509_ALGOR_it */
extern void* X509_ALGOR_it;

/* Symbol: d2i_NETSCAPE_CERT_SEQUENCE */
/* Demangled: d2i_NETSCAPE_CERT_SEQUENCE */
int d2i_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: NETSCAPE_CERT_SEQUENCE_it */
/* Demangled: NETSCAPE_CERT_SEQUENCE_it */
extern void* NETSCAPE_CERT_SEQUENCE_it;

/* Symbol: i2d_NETSCAPE_CERT_SEQUENCE */
/* Demangled: i2d_NETSCAPE_CERT_SEQUENCE */
int i2d_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: NETSCAPE_CERT_SEQUENCE_new */
/* Demangled: NETSCAPE_CERT_SEQUENCE_new */
int NETSCAPE_CERT_SEQUENCE_new(void);

/* Symbol: NETSCAPE_CERT_SEQUENCE_free */
/* Demangled: NETSCAPE_CERT_SEQUENCE_free */
int NETSCAPE_CERT_SEQUENCE_free(void);

/* Symbol: ASN1_OBJECT_it */
/* Demangled: ASN1_OBJECT_it */
extern void* ASN1_OBJECT_it;

/* Symbol: X509_it */
/* Demangled: X509_it */
extern void* X509_it;

/* Symbol: d2i_PBEPARAM */
/* Demangled: d2i_PBEPARAM */
int d2i_PBEPARAM(void);

/* Symbol: PBEPARAM_it */
/* Demangled: PBEPARAM_it */
extern void* PBEPARAM_it;

/* Symbol: i2d_PBEPARAM */
/* Demangled: i2d_PBEPARAM */
int i2d_PBEPARAM(void);

/* Symbol: PBEPARAM_new */
/* Demangled: PBEPARAM_new */
int PBEPARAM_new(void);

/* Symbol: PBEPARAM_free */
/* Demangled: PBEPARAM_free */
int PBEPARAM_free(void);

/* Symbol: PKCS5_pbe_set0_algor */
/* Demangled: PKCS5_pbe_set0_algor */
int PKCS5_pbe_set0_algor(void);

/* Symbol: PKCS5_pbe_set */
/* Demangled: PKCS5_pbe_set */
int PKCS5_pbe_set(void);

/* Symbol: X509_ALGOR_new */
/* Demangled: X509_ALGOR_new */
int X509_ALGOR_new(void);

/* Symbol: X509_ALGOR_free */
/* Demangled: X509_ALGOR_free */
int X509_ALGOR_free(void);

/* Symbol: ASN1_INTEGER_it */
/* Demangled: ASN1_INTEGER_it */
extern void* ASN1_INTEGER_it;

/* Symbol: d2i_PBE2PARAM */
/* Demangled: d2i_PBE2PARAM */
int d2i_PBE2PARAM(void);

/* Symbol: PBE2PARAM_it */
/* Demangled: PBE2PARAM_it */
extern void* PBE2PARAM_it;

/* Symbol: i2d_PBE2PARAM */
/* Demangled: i2d_PBE2PARAM */
int i2d_PBE2PARAM(void);

/* Symbol: PBE2PARAM_new */
/* Demangled: PBE2PARAM_new */
int PBE2PARAM_new(void);

/* Symbol: PBE2PARAM_free */
/* Demangled: PBE2PARAM_free */
int PBE2PARAM_free(void);

/* Symbol: d2i_PBKDF2PARAM */
/* Demangled: d2i_PBKDF2PARAM */
int d2i_PBKDF2PARAM(void);

/* Symbol: PBKDF2PARAM_it */
/* Demangled: PBKDF2PARAM_it */
extern void* PBKDF2PARAM_it;

/* Symbol: i2d_PBKDF2PARAM */
/* Demangled: i2d_PBKDF2PARAM */
int i2d_PBKDF2PARAM(void);

/* Symbol: PBKDF2PARAM_new */
/* Demangled: PBKDF2PARAM_new */
int PBKDF2PARAM_new(void);

/* Symbol: PBKDF2PARAM_free */
/* Demangled: PBKDF2PARAM_free */
int PBKDF2PARAM_free(void);

/* Symbol: PKCS5_pbe2_set_iv */
/* Demangled: PKCS5_pbe2_set_iv */
int PKCS5_pbe2_set_iv(void);

/* Symbol: EVP_CIPHER_type */
/* Demangled: EVP_CIPHER_type */
int EVP_CIPHER_type(void);

/* Symbol: EVP_CIPHER_iv_length */
/* Demangled: EVP_CIPHER_iv_length */
int EVP_CIPHER_iv_length(void);

/* Symbol: EVP_CipherInit_ex */
/* Demangled: EVP_CipherInit_ex */
int EVP_CipherInit_ex(void);

/* Symbol: EVP_CIPHER_param_to_asn1 */
/* Demangled: EVP_CIPHER_param_to_asn1 */
int EVP_CIPHER_param_to_asn1(void);

/* Symbol: EVP_CIPHER_CTX_ctrl */
/* Demangled: EVP_CIPHER_CTX_ctrl */
int EVP_CIPHER_CTX_ctrl(void);

/* Symbol: EVP_CIPHER_key_length */
/* Demangled: EVP_CIPHER_key_length */
int EVP_CIPHER_key_length(void);

/* Symbol: PKCS5_pbkdf2_set */
/* Demangled: PKCS5_pbkdf2_set */
int PKCS5_pbkdf2_set(void);

/* Symbol: PKCS5_pbe2_set */
/* Demangled: PKCS5_pbe2_set */
int PKCS5_pbe2_set(void);

/* Symbol: ASN1_ANY_it */
/* Demangled: ASN1_ANY_it */
extern void* ASN1_ANY_it;

/* Symbol: PKCS8_PRIV_KEY_INFO_it */
/* Demangled: PKCS8_PRIV_KEY_INFO_it */
extern void* PKCS8_PRIV_KEY_INFO_it;

/* Symbol: PKCS8_PRIV_KEY_INFO_new */
/* Demangled: PKCS8_PRIV_KEY_INFO_new */
int PKCS8_PRIV_KEY_INFO_new(void);

/* Symbol: PKCS8_pkey_set0 */
/* Demangled: PKCS8_pkey_set0 */
int PKCS8_pkey_set0(void);

/* Symbol: ASN1_OCTET_STRING_new */
/* Demangled: ASN1_OCTET_STRING_new */
int ASN1_OCTET_STRING_new(void);

/* Symbol: PKCS8_pkey_get0 */
/* Demangled: PKCS8_pkey_get0 */
int PKCS8_pkey_get0(void);

/* Symbol: X509_ATTRIBUTE_it */
/* Demangled: X509_ATTRIBUTE_it */
extern void* X509_ATTRIBUTE_it;

/* Symbol: ASN1_BIT_STRING_name_print */
/* Demangled: ASN1_BIT_STRING_name_print */
int ASN1_BIT_STRING_name_print(void);

/* Symbol: ASN1_BIT_STRING_set_asc */
/* Demangled: ASN1_BIT_STRING_set_asc */
int ASN1_BIT_STRING_set_asc(void);

/* Symbol: ASN1_BIT_STRING_num_asc */
/* Demangled: ASN1_BIT_STRING_num_asc */
int ASN1_BIT_STRING_num_asc(void);

/* Symbol: X509_CRL_print_fp */
/* Demangled: X509_CRL_print_fp */
int X509_CRL_print_fp(void);

/* Symbol: X509_CRL_print */
/* Demangled: X509_CRL_print */
int X509_CRL_print(void);

/* Symbol: X509_signature_print */
/* Demangled: X509_signature_print */
int X509_signature_print(void);

/* Symbol: X509_NAME_oneline */
/* Demangled: X509_NAME_oneline */
int X509_NAME_oneline(void);

/* Symbol: ASN1_TIME_print */
/* Demangled: ASN1_TIME_print */
int ASN1_TIME_print(void);

/* Symbol: X509V3_extensions_print */
/* Demangled: X509V3_extensions_print */
int X509V3_extensions_print(void);

/* Symbol: ASN1_bn_print */
/* Demangled: ASN1_bn_print */
int ASN1_bn_print(void);

/* Symbol: X509_REQ_print_fp */
/* Demangled: X509_REQ_print_fp */
int X509_REQ_print_fp(void);

/* Symbol: X509_REQ_print_ex */
/* Demangled: X509_REQ_print_ex */
int X509_REQ_print_ex(void);

/* Symbol: X509_REQ_print */
/* Demangled: X509_REQ_print */
int X509_REQ_print(void);

/* Symbol: X509_REQ_get_pubkey */
/* Demangled: X509_REQ_get_pubkey */
int X509_REQ_get_pubkey(void);

/* Symbol: EVP_PKEY_print_public */
/* Demangled: EVP_PKEY_print_public */
int EVP_PKEY_print_public(void);

/* Symbol: ERR_print_errors */
/* Demangled: ERR_print_errors */
int ERR_print_errors(void);

/* Symbol: X509_REQ_extension_nid */
/* Demangled: X509_REQ_extension_nid */
int X509_REQ_extension_nid(void);

/* Symbol: X509_REQ_get_extensions */
/* Demangled: X509_REQ_get_extensions */
int X509_REQ_get_extensions(void);

/* Symbol: X509_EXTENSION_get_object */
/* Demangled: X509_EXTENSION_get_object */
int X509_EXTENSION_get_object(void);

/* Symbol: X509_EXTENSION_get_critical */
/* Demangled: X509_EXTENSION_get_critical */
int X509_EXTENSION_get_critical(void);

/* Symbol: X509V3_EXT_print */
/* Demangled: X509V3_EXT_print */
int X509V3_EXT_print(void);

/* Symbol: ASN1_STRING_print */
/* Demangled: ASN1_STRING_print */
int ASN1_STRING_print(void);

/* Symbol: X509_EXTENSION_free */
/* Demangled: X509_EXTENSION_free */
int X509_EXTENSION_free(void);

/* Symbol: NETSCAPE_SPKI_print */
/* Demangled: NETSCAPE_SPKI_print */
int NETSCAPE_SPKI_print(void);

/* Symbol: X509_PUBKEY_get */
/* Demangled: X509_PUBKEY_get */
int X509_PUBKEY_get(void);

/* Symbol: X509_print_fp */
/* Demangled: X509_print_fp */
int X509_print_fp(void);

/* Symbol: X509_print_ex_fp */
/* Demangled: X509_print_ex_fp */
int X509_print_ex_fp(void);

/* Symbol: X509_print_ex */
/* Demangled: X509_print_ex */
int X509_print_ex(void);

/* Symbol: X509_get_serialNumber */
/* Demangled: X509_get_serialNumber */
int X509_get_serialNumber(void);

/* Symbol: X509_get_issuer_name */
/* Demangled: X509_get_issuer_name */
int X509_get_issuer_name(void);

/* Symbol: X509_get_subject_name */
/* Demangled: X509_get_subject_name */
int X509_get_subject_name(void);

/* Symbol: X509_get_pubkey */
/* Demangled: X509_get_pubkey */
int X509_get_pubkey(void);

/* Symbol: X509_CERT_AUX_print */
/* Demangled: X509_CERT_AUX_print */
int X509_CERT_AUX_print(void);

/* Symbol: X509_print */
/* Demangled: X509_print */
int X509_print(void);

/* Symbol: X509_signature_dump */
/* Demangled: X509_signature_dump */
int X509_signature_dump(void);

/* Symbol: ASN1_GENERALIZEDTIME_print */
/* Demangled: ASN1_GENERALIZEDTIME_print */
int ASN1_GENERALIZEDTIME_print(void);

/* Symbol: ASN1_UTCTIME_print */
/* Demangled: ASN1_UTCTIME_print */
int ASN1_UTCTIME_print(void);

/* Symbol: X509_ocspid_print */
/* Demangled: X509_ocspid_print */
int X509_ocspid_print(void);

/* Symbol: i2d_X509_NAME */
/* Demangled: i2d_X509_NAME */
int i2d_X509_NAME(void);

/* Symbol: EVP_sha1 */
/* Demangled: EVP_sha1 */
int EVP_sha1(void);

/* Symbol: ASN1_item_ex_d2i */
/* Demangled: ASN1_item_ex_d2i */
int ASN1_item_ex_d2i(void);

/* Symbol: ASN1_item_ex_new */
/* Demangled: ASN1_item_ex_new */
int ASN1_item_ex_new(void);

/* Symbol: asn1_get_field_ptr */
/* Demangled: asn1_get_field_ptr */
int asn1_get_field_ptr(void);

/* Symbol: ASN1_item_ex_free */
/* Demangled: ASN1_item_ex_free */
int ASN1_item_ex_free(void);

/* Symbol: asn1_set_choice_selector */
/* Demangled: asn1_set_choice_selector */
int asn1_set_choice_selector(void);

/* Symbol: asn1_do_adb */
/* Demangled: asn1_do_adb */
int asn1_do_adb(void);

/* Symbol: ASN1_template_free */
/* Demangled: ASN1_template_free */
int ASN1_template_free(void);

/* Symbol: asn1_enc_save */
/* Demangled: asn1_enc_save */
int asn1_enc_save(void);

/* Symbol: ASN1_template_d2i */
/* Demangled: ASN1_template_d2i */
int ASN1_template_d2i(void);

/* Symbol: asn1_ex_c2i */
/* Demangled: asn1_ex_c2i */
int asn1_ex_c2i(void);

/* Symbol: sk_pop */
/* Demangled: sk_pop */
int sk_pop(void);

/* Symbol: ASN1_item_ex_i2d */
/* Demangled: ASN1_item_ex_i2d */
int ASN1_item_ex_i2d(void);

/* Symbol: asn1_get_choice_selector */
/* Demangled: asn1_get_choice_selector */
int asn1_get_choice_selector(void);

/* Symbol: asn1_enc_restore */
/* Demangled: asn1_enc_restore */
int asn1_enc_restore(void);

/* Symbol: sk_set */
/* Demangled: sk_set */
int sk_set(void);

/* Symbol: asn1_ex_i2c */
/* Demangled: asn1_ex_i2c */
int asn1_ex_i2c(void);

/* Symbol: ASN1_template_i2d */
/* Demangled: ASN1_template_i2d */
int ASN1_template_i2d(void);

/* Symbol: asn1_do_lock */
/* Demangled: asn1_do_lock */
int asn1_do_lock(void);

/* Symbol: asn1_enc_free */
/* Demangled: asn1_enc_free */
int asn1_enc_free(void);

/* Symbol: asn1_enc_init */
/* Demangled: asn1_enc_init */
int asn1_enc_init(void);

/* Symbol: ASN1_template_new */
/* Demangled: ASN1_template_new */
int ASN1_template_new(void);

/* Symbol: ASN1_primitive_new */
/* Demangled: ASN1_primitive_new */
int ASN1_primitive_new(void);

/* Symbol: ASN1_PCTX_new */
/* Demangled: ASN1_PCTX_new */
int ASN1_PCTX_new(void);

/* Symbol: ASN1_PCTX_free */
/* Demangled: ASN1_PCTX_free */
int ASN1_PCTX_free(void);

/* Symbol: ASN1_PCTX_get_flags */
/* Demangled: ASN1_PCTX_get_flags */
int ASN1_PCTX_get_flags(void);

/* Symbol: ASN1_PCTX_set_flags */
/* Demangled: ASN1_PCTX_set_flags */
int ASN1_PCTX_set_flags(void);

/* Symbol: ASN1_PCTX_get_nm_flags */
/* Demangled: ASN1_PCTX_get_nm_flags */
int ASN1_PCTX_get_nm_flags(void);

/* Symbol: ASN1_PCTX_set_nm_flags */
/* Demangled: ASN1_PCTX_set_nm_flags */
int ASN1_PCTX_set_nm_flags(void);

/* Symbol: ASN1_PCTX_get_cert_flags */
/* Demangled: ASN1_PCTX_get_cert_flags */
int ASN1_PCTX_get_cert_flags(void);

/* Symbol: ASN1_PCTX_set_cert_flags */
/* Demangled: ASN1_PCTX_set_cert_flags */
int ASN1_PCTX_set_cert_flags(void);

/* Symbol: ASN1_PCTX_get_oid_flags */
/* Demangled: ASN1_PCTX_get_oid_flags */
int ASN1_PCTX_get_oid_flags(void);

/* Symbol: ASN1_PCTX_set_oid_flags */
/* Demangled: ASN1_PCTX_set_oid_flags */
int ASN1_PCTX_set_oid_flags(void);

/* Symbol: ASN1_PCTX_get_str_flags */
/* Demangled: ASN1_PCTX_get_str_flags */
int ASN1_PCTX_get_str_flags(void);

/* Symbol: ASN1_PCTX_set_str_flags */
/* Demangled: ASN1_PCTX_set_str_flags */
int ASN1_PCTX_set_str_flags(void);

/* Symbol: ASN1_item_print */
/* Demangled: ASN1_item_print */
int ASN1_item_print(void);

/* Symbol: default_pctx */
/* Demangled: default_pctx */
extern void* default_pctx;

/* Symbol: asn1_template_print_ctx */
/* Demangled: asn1_template_print_ctx */
int asn1_template_print_ctx(void);

/* Symbol: i2s_ASN1_INTEGER */
/* Demangled: i2s_ASN1_INTEGER */
int i2s_ASN1_INTEGER(void);

/* Symbol: ASN1_INTEGER_new */
/* Demangled: ASN1_INTEGER_new */
int ASN1_INTEGER_new(void);

/* Symbol: ASN1_INTEGER_free */
/* Demangled: ASN1_INTEGER_free */
int ASN1_INTEGER_free(void);

/* Symbol: ASN1_ENUMERATED_it */
/* Demangled: ASN1_ENUMERATED_it */
extern void* ASN1_ENUMERATED_it;

/* Symbol: i2d_ASN1_ENUMERATED */
/* Demangled: i2d_ASN1_ENUMERATED */
int i2d_ASN1_ENUMERATED(void);

/* Symbol: ASN1_ENUMERATED_new */
/* Demangled: ASN1_ENUMERATED_new */
int ASN1_ENUMERATED_new(void);

/* Symbol: ASN1_ENUMERATED_free */
/* Demangled: ASN1_ENUMERATED_free */
int ASN1_ENUMERATED_free(void);

/* Symbol: ASN1_BIT_STRING_it */
/* Demangled: ASN1_BIT_STRING_it */
extern void* ASN1_BIT_STRING_it;

/* Symbol: ASN1_BIT_STRING_new */
/* Demangled: ASN1_BIT_STRING_new */
int ASN1_BIT_STRING_new(void);

/* Symbol: ASN1_BIT_STRING_free */
/* Demangled: ASN1_BIT_STRING_free */
int ASN1_BIT_STRING_free(void);

/* Symbol: i2d_ASN1_OCTET_STRING */
/* Demangled: i2d_ASN1_OCTET_STRING */
int i2d_ASN1_OCTET_STRING(void);

/* Symbol: ASN1_OCTET_STRING_free */
/* Demangled: ASN1_OCTET_STRING_free */
int ASN1_OCTET_STRING_free(void);

/* Symbol: d2i_ASN1_NULL */
/* Demangled: d2i_ASN1_NULL */
int d2i_ASN1_NULL(void);

/* Symbol: ASN1_NULL_it */
/* Demangled: ASN1_NULL_it */
extern void* ASN1_NULL_it;

/* Symbol: i2d_ASN1_NULL */
/* Demangled: i2d_ASN1_NULL */
int i2d_ASN1_NULL(void);

/* Symbol: ASN1_NULL_new */
/* Demangled: ASN1_NULL_new */
int ASN1_NULL_new(void);

/* Symbol: ASN1_NULL_free */
/* Demangled: ASN1_NULL_free */
int ASN1_NULL_free(void);

/* Symbol: d2i_ASN1_UTF8STRING */
/* Demangled: d2i_ASN1_UTF8STRING */
int d2i_ASN1_UTF8STRING(void);

/* Symbol: ASN1_UTF8STRING_it */
/* Demangled: ASN1_UTF8STRING_it */
extern void* ASN1_UTF8STRING_it;

/* Symbol: i2d_ASN1_UTF8STRING */
/* Demangled: i2d_ASN1_UTF8STRING */
int i2d_ASN1_UTF8STRING(void);

/* Symbol: ASN1_UTF8STRING_new */
/* Demangled: ASN1_UTF8STRING_new */
int ASN1_UTF8STRING_new(void);

/* Symbol: ASN1_UTF8STRING_free */
/* Demangled: ASN1_UTF8STRING_free */
int ASN1_UTF8STRING_free(void);

/* Symbol: d2i_ASN1_PRINTABLESTRING */
/* Demangled: d2i_ASN1_PRINTABLESTRING */
int d2i_ASN1_PRINTABLESTRING(void);

/* Symbol: ASN1_PRINTABLESTRING_it */
/* Demangled: ASN1_PRINTABLESTRING_it */
extern void* ASN1_PRINTABLESTRING_it;

/* Symbol: i2d_ASN1_PRINTABLESTRING */
/* Demangled: i2d_ASN1_PRINTABLESTRING */
int i2d_ASN1_PRINTABLESTRING(void);

/* Symbol: ASN1_PRINTABLESTRING_new */
/* Demangled: ASN1_PRINTABLESTRING_new */
int ASN1_PRINTABLESTRING_new(void);

/* Symbol: ASN1_PRINTABLESTRING_free */
/* Demangled: ASN1_PRINTABLESTRING_free */
int ASN1_PRINTABLESTRING_free(void);

/* Symbol: d2i_ASN1_T61STRING */
/* Demangled: d2i_ASN1_T61STRING */
int d2i_ASN1_T61STRING(void);

/* Symbol: ASN1_T61STRING_it */
/* Demangled: ASN1_T61STRING_it */
extern void* ASN1_T61STRING_it;

/* Symbol: i2d_ASN1_T61STRING */
/* Demangled: i2d_ASN1_T61STRING */
int i2d_ASN1_T61STRING(void);

/* Symbol: ASN1_T61STRING_new */
/* Demangled: ASN1_T61STRING_new */
int ASN1_T61STRING_new(void);

/* Symbol: ASN1_T61STRING_free */
/* Demangled: ASN1_T61STRING_free */
int ASN1_T61STRING_free(void);

/* Symbol: d2i_ASN1_IA5STRING */
/* Demangled: d2i_ASN1_IA5STRING */
int d2i_ASN1_IA5STRING(void);

/* Symbol: ASN1_IA5STRING_it */
/* Demangled: ASN1_IA5STRING_it */
extern void* ASN1_IA5STRING_it;

/* Symbol: i2d_ASN1_IA5STRING */
/* Demangled: i2d_ASN1_IA5STRING */
int i2d_ASN1_IA5STRING(void);

/* Symbol: ASN1_IA5STRING_new */
/* Demangled: ASN1_IA5STRING_new */
int ASN1_IA5STRING_new(void);

/* Symbol: ASN1_IA5STRING_free */
/* Demangled: ASN1_IA5STRING_free */
int ASN1_IA5STRING_free(void);

/* Symbol: d2i_ASN1_GENERALSTRING */
/* Demangled: d2i_ASN1_GENERALSTRING */
int d2i_ASN1_GENERALSTRING(void);

/* Symbol: ASN1_GENERALSTRING_it */
/* Demangled: ASN1_GENERALSTRING_it */
extern void* ASN1_GENERALSTRING_it;

/* Symbol: i2d_ASN1_GENERALSTRING */
/* Demangled: i2d_ASN1_GENERALSTRING */
int i2d_ASN1_GENERALSTRING(void);

/* Symbol: ASN1_GENERALSTRING_new */
/* Demangled: ASN1_GENERALSTRING_new */
int ASN1_GENERALSTRING_new(void);

/* Symbol: ASN1_GENERALSTRING_free */
/* Demangled: ASN1_GENERALSTRING_free */
int ASN1_GENERALSTRING_free(void);

/* Symbol: d2i_ASN1_UTCTIME */
/* Demangled: d2i_ASN1_UTCTIME */
int d2i_ASN1_UTCTIME(void);

/* Symbol: ASN1_UTCTIME_it */
/* Demangled: ASN1_UTCTIME_it */
extern void* ASN1_UTCTIME_it;

/* Symbol: i2d_ASN1_UTCTIME */
/* Demangled: i2d_ASN1_UTCTIME */
int i2d_ASN1_UTCTIME(void);

/* Symbol: ASN1_UTCTIME_new */
/* Demangled: ASN1_UTCTIME_new */
int ASN1_UTCTIME_new(void);

/* Symbol: ASN1_UTCTIME_free */
/* Demangled: ASN1_UTCTIME_free */
int ASN1_UTCTIME_free(void);

/* Symbol: d2i_ASN1_GENERALIZEDTIME */
/* Demangled: d2i_ASN1_GENERALIZEDTIME */
int d2i_ASN1_GENERALIZEDTIME(void);

/* Symbol: ASN1_GENERALIZEDTIME_it */
/* Demangled: ASN1_GENERALIZEDTIME_it */
extern void* ASN1_GENERALIZEDTIME_it;

/* Symbol: i2d_ASN1_GENERALIZEDTIME */
/* Demangled: i2d_ASN1_GENERALIZEDTIME */
int i2d_ASN1_GENERALIZEDTIME(void);

/* Symbol: ASN1_GENERALIZEDTIME_free */
/* Demangled: ASN1_GENERALIZEDTIME_free */
int ASN1_GENERALIZEDTIME_free(void);

/* Symbol: d2i_ASN1_VISIBLESTRING */
/* Demangled: d2i_ASN1_VISIBLESTRING */
int d2i_ASN1_VISIBLESTRING(void);

/* Symbol: ASN1_VISIBLESTRING_it */
/* Demangled: ASN1_VISIBLESTRING_it */
extern void* ASN1_VISIBLESTRING_it;

/* Symbol: i2d_ASN1_VISIBLESTRING */
/* Demangled: i2d_ASN1_VISIBLESTRING */
int i2d_ASN1_VISIBLESTRING(void);

/* Symbol: ASN1_VISIBLESTRING_new */
/* Demangled: ASN1_VISIBLESTRING_new */
int ASN1_VISIBLESTRING_new(void);

/* Symbol: ASN1_VISIBLESTRING_free */
/* Demangled: ASN1_VISIBLESTRING_free */
int ASN1_VISIBLESTRING_free(void);

/* Symbol: d2i_ASN1_UNIVERSALSTRING */
/* Demangled: d2i_ASN1_UNIVERSALSTRING */
int d2i_ASN1_UNIVERSALSTRING(void);

/* Symbol: ASN1_UNIVERSALSTRING_it */
/* Demangled: ASN1_UNIVERSALSTRING_it */
extern void* ASN1_UNIVERSALSTRING_it;

/* Symbol: i2d_ASN1_UNIVERSALSTRING */
/* Demangled: i2d_ASN1_UNIVERSALSTRING */
int i2d_ASN1_UNIVERSALSTRING(void);

/* Symbol: ASN1_UNIVERSALSTRING_new */
/* Demangled: ASN1_UNIVERSALSTRING_new */
int ASN1_UNIVERSALSTRING_new(void);

/* Symbol: ASN1_UNIVERSALSTRING_free */
/* Demangled: ASN1_UNIVERSALSTRING_free */
int ASN1_UNIVERSALSTRING_free(void);

/* Symbol: d2i_ASN1_BMPSTRING */
/* Demangled: d2i_ASN1_BMPSTRING */
int d2i_ASN1_BMPSTRING(void);

/* Symbol: ASN1_BMPSTRING_it */
/* Demangled: ASN1_BMPSTRING_it */
extern void* ASN1_BMPSTRING_it;

/* Symbol: i2d_ASN1_BMPSTRING */
/* Demangled: i2d_ASN1_BMPSTRING */
int i2d_ASN1_BMPSTRING(void);

/* Symbol: ASN1_BMPSTRING_new */
/* Demangled: ASN1_BMPSTRING_new */
int ASN1_BMPSTRING_new(void);

/* Symbol: ASN1_BMPSTRING_free */
/* Demangled: ASN1_BMPSTRING_free */
int ASN1_BMPSTRING_free(void);

/* Symbol: d2i_ASN1_PRINTABLE */
/* Demangled: d2i_ASN1_PRINTABLE */
int d2i_ASN1_PRINTABLE(void);

/* Symbol: ASN1_PRINTABLE_it */
/* Demangled: ASN1_PRINTABLE_it */
extern void* ASN1_PRINTABLE_it;

/* Symbol: i2d_ASN1_PRINTABLE */
/* Demangled: i2d_ASN1_PRINTABLE */
int i2d_ASN1_PRINTABLE(void);

/* Symbol: ASN1_PRINTABLE_new */
/* Demangled: ASN1_PRINTABLE_new */
int ASN1_PRINTABLE_new(void);

/* Symbol: ASN1_PRINTABLE_free */
/* Demangled: ASN1_PRINTABLE_free */
int ASN1_PRINTABLE_free(void);

/* Symbol: d2i_DISPLAYTEXT */
/* Demangled: d2i_DISPLAYTEXT */
int d2i_DISPLAYTEXT(void);

/* Symbol: DISPLAYTEXT_it */
/* Demangled: DISPLAYTEXT_it */
extern void* DISPLAYTEXT_it;

/* Symbol: i2d_DISPLAYTEXT */
/* Demangled: i2d_DISPLAYTEXT */
int i2d_DISPLAYTEXT(void);

/* Symbol: DISPLAYTEXT_new */
/* Demangled: DISPLAYTEXT_new */
int DISPLAYTEXT_new(void);

/* Symbol: DISPLAYTEXT_free */
/* Demangled: DISPLAYTEXT_free */
int DISPLAYTEXT_free(void);

/* Symbol: d2i_DIRECTORYSTRING */
/* Demangled: d2i_DIRECTORYSTRING */
int d2i_DIRECTORYSTRING(void);

/* Symbol: DIRECTORYSTRING_it */
/* Demangled: DIRECTORYSTRING_it */
extern void* DIRECTORYSTRING_it;

/* Symbol: i2d_DIRECTORYSTRING */
/* Demangled: i2d_DIRECTORYSTRING */
int i2d_DIRECTORYSTRING(void);

/* Symbol: DIRECTORYSTRING_new */
/* Demangled: DIRECTORYSTRING_new */
int DIRECTORYSTRING_new(void);

/* Symbol: DIRECTORYSTRING_free */
/* Demangled: DIRECTORYSTRING_free */
int DIRECTORYSTRING_free(void);

/* Symbol: ASN1_SEQUENCE_ANY_it */
/* Demangled: ASN1_SEQUENCE_ANY_it */
extern void* ASN1_SEQUENCE_ANY_it;

/* Symbol: d2i_ASN1_SET_ANY */
/* Demangled: d2i_ASN1_SET_ANY */
int d2i_ASN1_SET_ANY(void);

/* Symbol: ASN1_SET_ANY_it */
/* Demangled: ASN1_SET_ANY_it */
extern void* ASN1_SET_ANY_it;

/* Symbol: ASN1_SEQUENCE_it */
/* Demangled: ASN1_SEQUENCE_it */
extern void* ASN1_SEQUENCE_it;

/* Symbol: ASN1_BOOLEAN_it */
/* Demangled: ASN1_BOOLEAN_it */
extern void* ASN1_BOOLEAN_it;

/* Symbol: ASN1_TBOOLEAN_it */
/* Demangled: ASN1_TBOOLEAN_it */
extern void* ASN1_TBOOLEAN_it;

/* Symbol: ASN1_FBOOLEAN_it */
/* Demangled: ASN1_FBOOLEAN_it */
extern void* ASN1_FBOOLEAN_it;

/* Symbol: ASN1_OCTET_STRING_NDEF_it */
/* Demangled: ASN1_OCTET_STRING_NDEF_it */
extern void* ASN1_OCTET_STRING_NDEF_it;

/* Symbol: CRYPTO_add_lock */
/* Demangled: CRYPTO_add_lock */
int CRYPTO_add_lock(void);

/* Symbol: d2i_X509_ALGOR */
/* Demangled: d2i_X509_ALGOR */
int d2i_X509_ALGOR(void);

/* Symbol: i2d_X509_ALGOR */
/* Demangled: i2d_X509_ALGOR */
int i2d_X509_ALGOR(void);

/* Symbol: d2i_X509_ALGORS */
/* Demangled: d2i_X509_ALGORS */
int d2i_X509_ALGORS(void);

/* Symbol: X509_ALGORS_it */
/* Demangled: X509_ALGORS_it */
extern void* X509_ALGORS_it;

/* Symbol: i2d_X509_ALGORS */
/* Demangled: i2d_X509_ALGORS */
int i2d_X509_ALGORS(void);

/* Symbol: X509_ALGOR_dup */
/* Demangled: X509_ALGOR_dup */
int X509_ALGOR_dup(void);

/* Symbol: X509_ALGOR_get0 */
/* Demangled: X509_ALGOR_get0 */
int X509_ALGOR_get0(void);

/* Symbol: X509_ALGOR_set_md */
/* Demangled: X509_ALGOR_set_md */
int X509_ALGOR_set_md(void);

/* Symbol: d2i_X509_ATTRIBUTE */
/* Demangled: d2i_X509_ATTRIBUTE */
int d2i_X509_ATTRIBUTE(void);

/* Symbol: i2d_X509_ATTRIBUTE */
/* Demangled: i2d_X509_ATTRIBUTE */
int i2d_X509_ATTRIBUTE(void);

/* Symbol: X509_ATTRIBUTE_new */
/* Demangled: X509_ATTRIBUTE_new */
int X509_ATTRIBUTE_new(void);

/* Symbol: X509_ATTRIBUTE_free */
/* Demangled: X509_ATTRIBUTE_free */
int X509_ATTRIBUTE_free(void);

/* Symbol: X509_ATTRIBUTE_dup */
/* Demangled: X509_ATTRIBUTE_dup */
int X509_ATTRIBUTE_dup(void);

/* Symbol: X509_ATTRIBUTE_create */
/* Demangled: X509_ATTRIBUTE_create */
int X509_ATTRIBUTE_create(void);

/* Symbol: X509_ATTRIBUTE_SET_it */
/* Demangled: X509_ATTRIBUTE_SET_it */
extern void* X509_ATTRIBUTE_SET_it;

/* Symbol: BN_clear_free */
/* Demangled: BN_clear_free */
int BN_clear_free(void);

/* Symbol: BIGNUM_it */
/* Demangled: BIGNUM_it */
extern void* BIGNUM_it;

/* Symbol: CBIGNUM_it */
/* Demangled: CBIGNUM_it */
extern void* CBIGNUM_it;

/* Symbol: d2i_X509_REVOKED */
/* Demangled: d2i_X509_REVOKED */
int d2i_X509_REVOKED(void);

/* Symbol: X509_REVOKED_it */
/* Demangled: X509_REVOKED_it */
extern void* X509_REVOKED_it;

/* Symbol: i2d_X509_REVOKED */
/* Demangled: i2d_X509_REVOKED */
int i2d_X509_REVOKED(void);

/* Symbol: X509_REVOKED_new */
/* Demangled: X509_REVOKED_new */
int X509_REVOKED_new(void);

/* Symbol: X509_REVOKED_free */
/* Demangled: X509_REVOKED_free */
int X509_REVOKED_free(void);

/* Symbol: d2i_X509_CRL_INFO */
/* Demangled: d2i_X509_CRL_INFO */
int d2i_X509_CRL_INFO(void);

/* Symbol: X509_CRL_INFO_it */
/* Demangled: X509_CRL_INFO_it */
extern void* X509_CRL_INFO_it;

/* Symbol: i2d_X509_CRL_INFO */
/* Demangled: i2d_X509_CRL_INFO */
int i2d_X509_CRL_INFO(void);

/* Symbol: X509_CRL_INFO_new */
/* Demangled: X509_CRL_INFO_new */
int X509_CRL_INFO_new(void);

/* Symbol: X509_CRL_INFO_free */
/* Demangled: X509_CRL_INFO_free */
int X509_CRL_INFO_free(void);

/* Symbol: d2i_X509_CRL */
/* Demangled: d2i_X509_CRL */
int d2i_X509_CRL(void);

/* Symbol: X509_CRL_it */
/* Demangled: X509_CRL_it */
extern void* X509_CRL_it;

/* Symbol: i2d_X509_CRL */
/* Demangled: i2d_X509_CRL */
int i2d_X509_CRL(void);

/* Symbol: X509_CRL_new */
/* Demangled: X509_CRL_new */
int X509_CRL_new(void);

/* Symbol: X509_CRL_free */
/* Demangled: X509_CRL_free */
int X509_CRL_free(void);

/* Symbol: X509_CRL_dup */
/* Demangled: X509_CRL_dup */
int X509_CRL_dup(void);

/* Symbol: X509_CRL_add0_revoked */
/* Demangled: X509_CRL_add0_revoked */
int X509_CRL_add0_revoked(void);

/* Symbol: X509_CRL_verify */
/* Demangled: X509_CRL_verify */
int X509_CRL_verify(void);

/* Symbol: X509_CRL_get0_by_serial */
/* Demangled: X509_CRL_get0_by_serial */
int X509_CRL_get0_by_serial(void);

/* Symbol: X509_CRL_get0_by_cert */
/* Demangled: X509_CRL_get0_by_cert */
int X509_CRL_get0_by_cert(void);

/* Symbol: X509_CRL_set_default_method */
/* Demangled: X509_CRL_set_default_method */
int X509_CRL_set_default_method(void);

/* Symbol: X509_CRL_METHOD_new */
/* Demangled: X509_CRL_METHOD_new */
int X509_CRL_METHOD_new(void);

/* Symbol: X509_CRL_METHOD_free */
/* Demangled: X509_CRL_METHOD_free */
int X509_CRL_METHOD_free(void);

/* Symbol: X509_CRL_set_meth_data */
/* Demangled: X509_CRL_set_meth_data */
int X509_CRL_set_meth_data(void);

/* Symbol: X509_CRL_get_meth_data */
/* Demangled: X509_CRL_get_meth_data */
int X509_CRL_get_meth_data(void);

/* Symbol: sk_set_cmp_func */
/* Demangled: sk_set_cmp_func */
int sk_set_cmp_func(void);

/* Symbol: X509_CRL_digest */
/* Demangled: X509_CRL_digest */
int X509_CRL_digest(void);

/* Symbol: X509_CRL_get_ext_d2i */
/* Demangled: X509_CRL_get_ext_d2i */
int X509_CRL_get_ext_d2i(void);

/* Symbol: AUTHORITY_KEYID_free */
/* Demangled: AUTHORITY_KEYID_free */
int AUTHORITY_KEYID_free(void);

/* Symbol: ISSUING_DIST_POINT_free */
/* Demangled: ISSUING_DIST_POINT_free */
int ISSUING_DIST_POINT_free(void);

/* Symbol: DIST_POINT_set_dpname */
/* Demangled: DIST_POINT_set_dpname */
int DIST_POINT_set_dpname(void);

/* Symbol: X509_REVOKED_get_ext_d2i */
/* Demangled: X509_REVOKED_get_ext_d2i */
int X509_REVOKED_get_ext_d2i(void);

/* Symbol: GENERAL_NAMES_free */
/* Demangled: GENERAL_NAMES_free */
int GENERAL_NAMES_free(void);

/* Symbol: sk_is_sorted */
/* Demangled: sk_is_sorted */
int sk_is_sorted(void);

/* Symbol: CRYPTO_lock */
/* Demangled: CRYPTO_lock */
int CRYPTO_lock(void);

/* Symbol: X509_NAME_cmp */
/* Demangled: X509_NAME_cmp */
int X509_NAME_cmp(void);

/* Symbol: X509_EXTENSION_it */
/* Demangled: X509_EXTENSION_it */
extern void* X509_EXTENSION_it;

/* Symbol: X509_NAME_it */
/* Demangled: X509_NAME_it */
extern void* X509_NAME_it;

/* Symbol: d2i_X509_EXTENSION */
/* Demangled: d2i_X509_EXTENSION */
int d2i_X509_EXTENSION(void);

/* Symbol: i2d_X509_EXTENSION */
/* Demangled: i2d_X509_EXTENSION */
int i2d_X509_EXTENSION(void);

/* Symbol: X509_EXTENSION_new */
/* Demangled: X509_EXTENSION_new */
int X509_EXTENSION_new(void);

/* Symbol: d2i_X509_EXTENSIONS */
/* Demangled: d2i_X509_EXTENSIONS */
int d2i_X509_EXTENSIONS(void);

/* Symbol: X509_EXTENSIONS_it */
/* Demangled: X509_EXTENSIONS_it */
extern void* X509_EXTENSIONS_it;

/* Symbol: i2d_X509_EXTENSIONS */
/* Demangled: i2d_X509_EXTENSIONS */
int i2d_X509_EXTENSIONS(void);

/* Symbol: X509_EXTENSION_dup */
/* Demangled: X509_EXTENSION_dup */
int X509_EXTENSION_dup(void);

/* Symbol: X509_INFO_new */
/* Demangled: X509_INFO_new */
int X509_INFO_new(void);

/* Symbol: X509_INFO_free */
/* Demangled: X509_INFO_free */
int X509_INFO_free(void);

/* Symbol: X509_free */
/* Demangled: X509_free */
int X509_free(void);

/* Symbol: X509_PKEY_free */
/* Demangled: X509_PKEY_free */
int X509_PKEY_free(void);

/* Symbol: BN_num_bits_word */
/* Demangled: BN_num_bits_word */
int BN_num_bits_word(void);

/* Symbol: ZLONG_it */
/* Demangled: ZLONG_it */
extern void* ZLONG_it;

/* Symbol: d2i_X509_NAME_ENTRY */
/* Demangled: d2i_X509_NAME_ENTRY */
int d2i_X509_NAME_ENTRY(void);

/* Symbol: X509_NAME_ENTRY_it */
/* Demangled: X509_NAME_ENTRY_it */
extern void* X509_NAME_ENTRY_it;

/* Symbol: i2d_X509_NAME_ENTRY */
/* Demangled: i2d_X509_NAME_ENTRY */
int i2d_X509_NAME_ENTRY(void);

/* Symbol: X509_NAME_ENTRY_new */
/* Demangled: X509_NAME_ENTRY_new */
int X509_NAME_ENTRY_new(void);

/* Symbol: X509_NAME_ENTRY_free */
/* Demangled: X509_NAME_ENTRY_free */
int X509_NAME_ENTRY_free(void);

/* Symbol: X509_NAME_ENTRY_dup */
/* Demangled: X509_NAME_ENTRY_dup */
int X509_NAME_ENTRY_dup(void);

/* Symbol: BUF_MEM_grow */
/* Demangled: BUF_MEM_grow */
int BUF_MEM_grow(void);

/* Symbol: X509_NAME_INTERNAL_it */
/* Demangled: X509_NAME_INTERNAL_it */
extern void* X509_NAME_INTERNAL_it;

/* Symbol: d2i_X509_NAME */
/* Demangled: d2i_X509_NAME */
int d2i_X509_NAME(void);

/* Symbol: X509_NAME_new */
/* Demangled: X509_NAME_new */
int X509_NAME_new(void);

/* Symbol: X509_NAME_free */
/* Demangled: X509_NAME_free */
int X509_NAME_free(void);

/* Symbol: X509_NAME_dup */
/* Demangled: X509_NAME_dup */
int X509_NAME_dup(void);

/* Symbol: X509_NAME_set */
/* Demangled: X509_NAME_set */
int X509_NAME_set(void);

/* Symbol: X509_NAME_ENTRIES_it */
/* Demangled: X509_NAME_ENTRIES_it */
extern void* X509_NAME_ENTRIES_it;

/* Symbol: x509_name_ff */
/* Demangled: x509_name_ff */
extern void* x509_name_ff;

/* Symbol: d2i_NETSCAPE_X509 */
/* Demangled: d2i_NETSCAPE_X509 */
int d2i_NETSCAPE_X509(void);

/* Symbol: NETSCAPE_X509_it */
/* Demangled: NETSCAPE_X509_it */
extern void* NETSCAPE_X509_it;

/* Symbol: i2d_NETSCAPE_X509 */
/* Demangled: i2d_NETSCAPE_X509 */
int i2d_NETSCAPE_X509(void);

/* Symbol: NETSCAPE_X509_new */
/* Demangled: NETSCAPE_X509_new */
int NETSCAPE_X509_new(void);

/* Symbol: NETSCAPE_X509_free */
/* Demangled: NETSCAPE_X509_free */
int NETSCAPE_X509_free(void);

/* Symbol: i2d_X509_PKEY */
/* Demangled: i2d_X509_PKEY */
int i2d_X509_PKEY(void);

/* Symbol: d2i_X509_PKEY */
/* Demangled: d2i_X509_PKEY */
int d2i_X509_PKEY(void);

/* Symbol: X509_PKEY_new */
/* Demangled: X509_PKEY_new */
int X509_PKEY_new(void);

/* Symbol: EVP_get_cipherbyname */
/* Demangled: EVP_get_cipherbyname */
int EVP_get_cipherbyname(void);

/* Symbol: d2i_X509_PUBKEY */
/* Demangled: d2i_X509_PUBKEY */
int d2i_X509_PUBKEY(void);

/* Symbol: X509_PUBKEY_it */
/* Demangled: X509_PUBKEY_it */
extern void* X509_PUBKEY_it;

/* Symbol: i2d_X509_PUBKEY */
/* Demangled: i2d_X509_PUBKEY */
int i2d_X509_PUBKEY(void);

/* Symbol: X509_PUBKEY_new */
/* Demangled: X509_PUBKEY_new */
int X509_PUBKEY_new(void);

/* Symbol: X509_PUBKEY_free */
/* Demangled: X509_PUBKEY_free */
int X509_PUBKEY_free(void);

/* Symbol: X509_PUBKEY_set */
/* Demangled: X509_PUBKEY_set */
int X509_PUBKEY_set(void);

/* Symbol: d2i_PUBKEY */
/* Demangled: d2i_PUBKEY */
int d2i_PUBKEY(void);

/* Symbol: i2d_PUBKEY */
/* Demangled: i2d_PUBKEY */
int i2d_PUBKEY(void);

/* Symbol: d2i_RSA_PUBKEY */
/* Demangled: d2i_RSA_PUBKEY */
int d2i_RSA_PUBKEY(void);

/* Symbol: EVP_PKEY_get1_RSA */
/* Demangled: EVP_PKEY_get1_RSA */
int EVP_PKEY_get1_RSA(void);

/* Symbol: RSA_free */
/* Demangled: RSA_free */
int RSA_free(void);

/* Symbol: i2d_RSA_PUBKEY */
/* Demangled: i2d_RSA_PUBKEY */
int i2d_RSA_PUBKEY(void);

/* Symbol: EVP_PKEY_set1_RSA */
/* Demangled: EVP_PKEY_set1_RSA */
int EVP_PKEY_set1_RSA(void);

/* Symbol: d2i_DSA_PUBKEY */
/* Demangled: d2i_DSA_PUBKEY */
int d2i_DSA_PUBKEY(void);

/* Symbol: EVP_PKEY_get1_DSA */
/* Demangled: EVP_PKEY_get1_DSA */
int EVP_PKEY_get1_DSA(void);

/* Symbol: DSA_free */
/* Demangled: DSA_free */
int DSA_free(void);

/* Symbol: i2d_DSA_PUBKEY */
/* Demangled: i2d_DSA_PUBKEY */
int i2d_DSA_PUBKEY(void);

/* Symbol: EVP_PKEY_set1_DSA */
/* Demangled: EVP_PKEY_set1_DSA */
int EVP_PKEY_set1_DSA(void);

/* Symbol: d2i_EC_PUBKEY */
/* Demangled: d2i_EC_PUBKEY */
int d2i_EC_PUBKEY(void);

/* Symbol: EVP_PKEY_get1_EC_KEY */
/* Demangled: EVP_PKEY_get1_EC_KEY */
int EVP_PKEY_get1_EC_KEY(void);

/* Symbol: EC_KEY_free */
/* Demangled: EC_KEY_free */
int EC_KEY_free(void);

/* Symbol: i2d_EC_PUBKEY */
/* Demangled: i2d_EC_PUBKEY */
int i2d_EC_PUBKEY(void);

/* Symbol: EVP_PKEY_set1_EC_KEY */
/* Demangled: EVP_PKEY_set1_EC_KEY */
int EVP_PKEY_set1_EC_KEY(void);

/* Symbol: X509_PUBKEY_set0_param */
/* Demangled: X509_PUBKEY_set0_param */
int X509_PUBKEY_set0_param(void);

/* Symbol: X509_PUBKEY_get0_param */
/* Demangled: X509_PUBKEY_get0_param */
int X509_PUBKEY_get0_param(void);

/* Symbol: d2i_X509_REQ_INFO */
/* Demangled: d2i_X509_REQ_INFO */
int d2i_X509_REQ_INFO(void);

/* Symbol: X509_REQ_INFO_it */
/* Demangled: X509_REQ_INFO_it */
extern void* X509_REQ_INFO_it;

/* Symbol: i2d_X509_REQ_INFO */
/* Demangled: i2d_X509_REQ_INFO */
int i2d_X509_REQ_INFO(void);

/* Symbol: X509_REQ_INFO_new */
/* Demangled: X509_REQ_INFO_new */
int X509_REQ_INFO_new(void);

/* Symbol: X509_REQ_INFO_free */
/* Demangled: X509_REQ_INFO_free */
int X509_REQ_INFO_free(void);

/* Symbol: d2i_X509_REQ */
/* Demangled: d2i_X509_REQ */
int d2i_X509_REQ(void);

/* Symbol: X509_REQ_it */
/* Demangled: X509_REQ_it */
extern void* X509_REQ_it;

/* Symbol: i2d_X509_REQ */
/* Demangled: i2d_X509_REQ */
int i2d_X509_REQ(void);

/* Symbol: X509_REQ_new */
/* Demangled: X509_REQ_new */
int X509_REQ_new(void);

/* Symbol: X509_REQ_free */
/* Demangled: X509_REQ_free */
int X509_REQ_free(void);

/* Symbol: X509_REQ_dup */
/* Demangled: X509_REQ_dup */
int X509_REQ_dup(void);

/* Symbol: d2i_X509_SIG */
/* Demangled: d2i_X509_SIG */
int d2i_X509_SIG(void);

/* Symbol: i2d_X509_SIG */
/* Demangled: i2d_X509_SIG */
int i2d_X509_SIG(void);

/* Symbol: X509_SIG_new */
/* Demangled: X509_SIG_new */
int X509_SIG_new(void);

/* Symbol: X509_SIG_free */
/* Demangled: X509_SIG_free */
int X509_SIG_free(void);

/* Symbol: d2i_NETSCAPE_SPKAC */
/* Demangled: d2i_NETSCAPE_SPKAC */
int d2i_NETSCAPE_SPKAC(void);

/* Symbol: NETSCAPE_SPKAC_it */
/* Demangled: NETSCAPE_SPKAC_it */
extern void* NETSCAPE_SPKAC_it;

/* Symbol: i2d_NETSCAPE_SPKAC */
/* Demangled: i2d_NETSCAPE_SPKAC */
int i2d_NETSCAPE_SPKAC(void);

/* Symbol: NETSCAPE_SPKAC_new */
/* Demangled: NETSCAPE_SPKAC_new */
int NETSCAPE_SPKAC_new(void);

/* Symbol: NETSCAPE_SPKAC_free */
/* Demangled: NETSCAPE_SPKAC_free */
int NETSCAPE_SPKAC_free(void);

/* Symbol: d2i_NETSCAPE_SPKI */
/* Demangled: d2i_NETSCAPE_SPKI */
int d2i_NETSCAPE_SPKI(void);

/* Symbol: NETSCAPE_SPKI_it */
/* Demangled: NETSCAPE_SPKI_it */
extern void* NETSCAPE_SPKI_it;

/* Symbol: i2d_NETSCAPE_SPKI */
/* Demangled: i2d_NETSCAPE_SPKI */
int i2d_NETSCAPE_SPKI(void);

/* Symbol: NETSCAPE_SPKI_new */
/* Demangled: NETSCAPE_SPKI_new */
int NETSCAPE_SPKI_new(void);

/* Symbol: NETSCAPE_SPKI_free */
/* Demangled: NETSCAPE_SPKI_free */
int NETSCAPE_SPKI_free(void);

/* Symbol: d2i_X509_VAL */
/* Demangled: d2i_X509_VAL */
int d2i_X509_VAL(void);

/* Symbol: X509_VAL_it */
/* Demangled: X509_VAL_it */
extern void* X509_VAL_it;

/* Symbol: i2d_X509_VAL */
/* Demangled: i2d_X509_VAL */
int i2d_X509_VAL(void);

/* Symbol: X509_VAL_new */
/* Demangled: X509_VAL_new */
int X509_VAL_new(void);

/* Symbol: X509_VAL_free */
/* Demangled: X509_VAL_free */
int X509_VAL_free(void);

/* Symbol: d2i_X509_CINF */
/* Demangled: d2i_X509_CINF */
int d2i_X509_CINF(void);

/* Symbol: X509_CINF_it */
/* Demangled: X509_CINF_it */
extern void* X509_CINF_it;

/* Symbol: i2d_X509_CINF */
/* Demangled: i2d_X509_CINF */
int i2d_X509_CINF(void);

/* Symbol: X509_CINF_new */
/* Demangled: X509_CINF_new */
int X509_CINF_new(void);

/* Symbol: X509_CINF_free */
/* Demangled: X509_CINF_free */
int X509_CINF_free(void);

/* Symbol: d2i_X509 */
/* Demangled: d2i_X509 */
int d2i_X509(void);

/* Symbol: i2d_X509 */
/* Demangled: i2d_X509 */
int i2d_X509(void);

/* Symbol: X509_new */
/* Demangled: X509_new */
int X509_new(void);

/* Symbol: X509_dup */
/* Demangled: X509_dup */
int X509_dup(void);

/* Symbol: X509_get_ex_new_index */
/* Demangled: X509_get_ex_new_index */
int X509_get_ex_new_index(void);

/* Symbol: CRYPTO_get_ex_new_index */
/* Demangled: CRYPTO_get_ex_new_index */
int CRYPTO_get_ex_new_index(void);

/* Symbol: X509_set_ex_data */
/* Demangled: X509_set_ex_data */
int X509_set_ex_data(void);

/* Symbol: CRYPTO_set_ex_data */
/* Demangled: CRYPTO_set_ex_data */
int CRYPTO_set_ex_data(void);

/* Symbol: X509_get_ex_data */
/* Demangled: X509_get_ex_data */
int X509_get_ex_data(void);

/* Symbol: CRYPTO_get_ex_data */
/* Demangled: CRYPTO_get_ex_data */
int CRYPTO_get_ex_data(void);

/* Symbol: d2i_X509_AUX */
/* Demangled: d2i_X509_AUX */
int d2i_X509_AUX(void);

/* Symbol: d2i_X509_CERT_AUX */
/* Demangled: d2i_X509_CERT_AUX */
int d2i_X509_CERT_AUX(void);

/* Symbol: i2d_X509_AUX */
/* Demangled: i2d_X509_AUX */
int i2d_X509_AUX(void);

/* Symbol: i2d_X509_CERT_AUX */
/* Demangled: i2d_X509_CERT_AUX */
int i2d_X509_CERT_AUX(void);

/* Symbol: CRYPTO_new_ex_data */
/* Demangled: CRYPTO_new_ex_data */
int CRYPTO_new_ex_data(void);

/* Symbol: CRYPTO_free_ex_data */
/* Demangled: CRYPTO_free_ex_data */
int CRYPTO_free_ex_data(void);

/* Symbol: X509_CERT_AUX_free */
/* Demangled: X509_CERT_AUX_free */
int X509_CERT_AUX_free(void);

/* Symbol: CRL_DIST_POINTS_free */
/* Demangled: CRL_DIST_POINTS_free */
int CRL_DIST_POINTS_free(void);

/* Symbol: policy_cache_free */
/* Demangled: policy_cache_free */
int policy_cache_free(void);

/* Symbol: NAME_CONSTRAINTS_free */
/* Demangled: NAME_CONSTRAINTS_free */
int NAME_CONSTRAINTS_free(void);

/* Symbol: X509_CERT_AUX_it */
/* Demangled: X509_CERT_AUX_it */
extern void* X509_CERT_AUX_it;

/* Symbol: X509_CERT_AUX_new */
/* Demangled: X509_CERT_AUX_new */
int X509_CERT_AUX_new(void);

/* Symbol: X509_alias_set1 */
/* Demangled: X509_alias_set1 */
int X509_alias_set1(void);

/* Symbol: X509_keyid_set1 */
/* Demangled: X509_keyid_set1 */
int X509_keyid_set1(void);

/* Symbol: X509_alias_get0 */
/* Demangled: X509_alias_get0 */
int X509_alias_get0(void);

/* Symbol: X509_keyid_get0 */
/* Demangled: X509_keyid_get0 */
int X509_keyid_get0(void);

/* Symbol: X509_add1_trust_object */
/* Demangled: X509_add1_trust_object */
int X509_add1_trust_object(void);

/* Symbol: X509_add1_reject_object */
/* Demangled: X509_add1_reject_object */
int X509_add1_reject_object(void);

/* Symbol: X509_trust_clear */
/* Demangled: X509_trust_clear */
int X509_trust_clear(void);

/* Symbol: X509_reject_clear */
/* Demangled: X509_reject_clear */
int X509_reject_clear(void);

/* Symbol: d2i_X509_CERT_PAIR */
/* Demangled: d2i_X509_CERT_PAIR */
int d2i_X509_CERT_PAIR(void);

/* Symbol: X509_CERT_PAIR_it */
/* Demangled: X509_CERT_PAIR_it */
extern void* X509_CERT_PAIR_it;

/* Symbol: i2d_X509_CERT_PAIR */
/* Demangled: i2d_X509_CERT_PAIR */
int i2d_X509_CERT_PAIR(void);

/* Symbol: X509_CERT_PAIR_new */
/* Demangled: X509_CERT_PAIR_new */
int X509_CERT_PAIR_new(void);

/* Symbol: X509_CERT_PAIR_free */
/* Demangled: X509_CERT_PAIR_free */
int X509_CERT_PAIR_free(void);

/* Symbol: BF_cfb64_encrypt */
/* Demangled: BF_cfb64_encrypt */
int BF_cfb64_encrypt(void);

/* Symbol: BF_encrypt */
/* Demangled: BF_encrypt */
int BF_encrypt(void);

/* Symbol: BF_options */
/* Demangled: BF_options */
int BF_options(void);

/* Symbol: BF_ecb_encrypt */
/* Demangled: BF_ecb_encrypt */
int BF_ecb_encrypt(void);

/* Symbol: BF_decrypt */
/* Demangled: BF_decrypt */
int BF_decrypt(void);

/* Symbol: BF_version */
/* Demangled: BF_version */
extern void* BF_version;

/* Symbol: BF_cbc_encrypt */
/* Demangled: BF_cbc_encrypt */
int BF_cbc_encrypt(void);

/* Symbol: BF_ofb64_encrypt */
/* Demangled: BF_ofb64_encrypt */
int BF_ofb64_encrypt(void);

/* Symbol: BF_set_key */
/* Demangled: BF_set_key */
int BF_set_key(void);

/* Symbol: BIO_dump_cb */
/* Demangled: BIO_dump_cb */
int BIO_dump_cb(void);

/* Symbol: BIO_dump_indent_cb */
/* Demangled: BIO_dump_indent_cb */
int BIO_dump_indent_cb(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int __aeabi_idiv(void);

/* Symbol: BIO_dump_fp */
/* Demangled: BIO_dump_fp */
int BIO_dump_fp(void);

/* Symbol: BIO_dump_indent_fp */
/* Demangled: BIO_dump_indent_fp */
int BIO_dump_indent_fp(void);

/* Symbol: BIO_dump */
/* Demangled: BIO_dump */
int BIO_dump(void);

/* Symbol: BIO_vprintf */
/* Demangled: BIO_vprintf */
int BIO_vprintf(void);

/* Symbol: CRYPTO_push_info_ */
/* Demangled: CRYPTO_push_info_ */
int CRYPTO_push_info_(void);

/* Symbol: CRYPTO_pop_info */
/* Demangled: CRYPTO_pop_info */
int CRYPTO_pop_info(void);

/* Symbol: BIO_vsnprintf */
/* Demangled: BIO_vsnprintf */
int BIO_vsnprintf(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: BIO_get_host_ip */
/* Demangled: BIO_get_host_ip */
int BIO_get_host_ip(void);

/* Symbol: BIO_sock_init */
/* Demangled: BIO_sock_init */
int BIO_sock_init(void);

/* Symbol: BIO_gethostbyname */
/* Demangled: BIO_gethostbyname */
int BIO_gethostbyname(void);

/* Symbol: BIO_get_port */
/* Demangled: BIO_get_port */
int BIO_get_port(void);

/* Symbol: BIO_sock_error */
/* Demangled: BIO_sock_error */
int BIO_sock_error(void);

/* Symbol: BIO_sock_cleanup */
/* Demangled: BIO_sock_cleanup */
int BIO_sock_cleanup(void);

/* Symbol: BIO_socket_ioctl */
/* Demangled: BIO_socket_ioctl */
int BIO_socket_ioctl(void);

/* Symbol: BIO_get_accept_socket */
/* Demangled: BIO_get_accept_socket */
int BIO_get_accept_socket(void);

/* Symbol: DSO_global_lookup */
/* Demangled: DSO_global_lookup */
int DSO_global_lookup(void);

/* Symbol: BIO_accept */
/* Demangled: BIO_accept */
int BIO_accept(void);

/* Symbol: BIO_sock_should_retry */
/* Demangled: BIO_sock_should_retry */
int BIO_sock_should_retry(void);

/* Symbol: BIO_set_tcp_ndelay */
/* Demangled: BIO_set_tcp_ndelay */
int BIO_set_tcp_ndelay(void);

/* Symbol: BIO_socket_nbio */
/* Demangled: BIO_socket_nbio */
int BIO_socket_nbio(void);

/* Symbol: BIO_int_ctrl */
/* Demangled: BIO_int_ctrl */
int BIO_int_ctrl(void);

/* Symbol: BIO_f_nbio_test */
/* Demangled: BIO_f_nbio_test */
int BIO_f_nbio_test(void);

/* Symbol: BIO_set_flags */
/* Demangled: BIO_set_flags */
int BIO_set_flags(void);

/* Symbol: BIO_f_null */
/* Demangled: BIO_f_null */
int BIO_f_null(void);

/* Symbol: BIO_debug_callback */
/* Demangled: BIO_debug_callback */
int BIO_debug_callback(void);

/* Symbol: ERR_load_BIO_strings */
/* Demangled: ERR_load_BIO_strings */
int ERR_load_BIO_strings(void);

/* Symbol: BIO_set */
/* Demangled: BIO_set */
int BIO_set(void);

/* Symbol: BIO_test_flags */
/* Demangled: BIO_test_flags */
int BIO_test_flags(void);

/* Symbol: BIO_get_callback */
/* Demangled: BIO_get_callback */
int BIO_get_callback(void);

/* Symbol: BIO_set_callback */
/* Demangled: BIO_set_callback */
int BIO_set_callback(void);

/* Symbol: BIO_set_callback_arg */
/* Demangled: BIO_set_callback_arg */
int BIO_set_callback_arg(void);

/* Symbol: BIO_get_callback_arg */
/* Demangled: BIO_get_callback_arg */
int BIO_get_callback_arg(void);

/* Symbol: BIO_method_name */
/* Demangled: BIO_method_name */
int BIO_method_name(void);

/* Symbol: BIO_method_type */
/* Demangled: BIO_method_type */
int BIO_method_type(void);

/* Symbol: BIO_ptr_ctrl */
/* Demangled: BIO_ptr_ctrl */
int BIO_ptr_ctrl(void);

/* Symbol: BIO_ctrl_pending */
/* Demangled: BIO_ctrl_pending */
int BIO_ctrl_pending(void);

/* Symbol: BIO_ctrl_wpending */
/* Demangled: BIO_ctrl_wpending */
int BIO_ctrl_wpending(void);

/* Symbol: BIO_get_retry_BIO */
/* Demangled: BIO_get_retry_BIO */
int BIO_get_retry_BIO(void);

/* Symbol: BIO_get_retry_reason */
/* Demangled: BIO_get_retry_reason */
int BIO_get_retry_reason(void);

/* Symbol: BIO_find_type */
/* Demangled: BIO_find_type */
int BIO_find_type(void);

/* Symbol: BIO_next */
/* Demangled: BIO_next */
int BIO_next(void);

/* Symbol: BIO_free_all */
/* Demangled: BIO_free_all */
int BIO_free_all(void);

/* Symbol: BIO_dup_chain */
/* Demangled: BIO_dup_chain */
int BIO_dup_chain(void);

/* Symbol: CRYPTO_dup_ex_data */
/* Demangled: CRYPTO_dup_ex_data */
int CRYPTO_dup_ex_data(void);

/* Symbol: BIO_get_ex_new_index */
/* Demangled: BIO_get_ex_new_index */
int BIO_get_ex_new_index(void);

/* Symbol: BIO_set_ex_data */
/* Demangled: BIO_set_ex_data */
int BIO_set_ex_data(void);

/* Symbol: BIO_get_ex_data */
/* Demangled: BIO_get_ex_data */
int BIO_get_ex_data(void);

/* Symbol: BIO_number_read */
/* Demangled: BIO_number_read */
int BIO_number_read(void);

/* Symbol: BIO_number_written */
/* Demangled: BIO_number_written */
int BIO_number_written(void);

/* Symbol: BIO_s_accept */
/* Demangled: BIO_s_accept */
int BIO_s_accept(void);

/* Symbol: BIO_new_accept */
/* Demangled: BIO_new_accept */
int BIO_new_accept(void);

/* Symbol: BIO_new_socket */
/* Demangled: BIO_new_socket */
int BIO_new_socket(void);

/* Symbol: BIO_s_bio */
/* Demangled: BIO_s_bio */
int BIO_s_bio(void);

/* Symbol: BIO_new_bio_pair */
/* Demangled: BIO_new_bio_pair */
int BIO_new_bio_pair(void);

/* Symbol: BIO_ctrl_get_write_guarantee */
/* Demangled: BIO_ctrl_get_write_guarantee */
int BIO_ctrl_get_write_guarantee(void);

/* Symbol: BIO_ctrl_get_read_request */
/* Demangled: BIO_ctrl_get_read_request */
int BIO_ctrl_get_read_request(void);

/* Symbol: BIO_ctrl_reset_read_request */
/* Demangled: BIO_ctrl_reset_read_request */
int BIO_ctrl_reset_read_request(void);

/* Symbol: BIO_nread0 */
/* Demangled: BIO_nread0 */
int BIO_nread0(void);

/* Symbol: BIO_nread */
/* Demangled: BIO_nread */
int BIO_nread(void);

/* Symbol: BIO_nwrite0 */
/* Demangled: BIO_nwrite0 */
int BIO_nwrite0(void);

/* Symbol: BIO_nwrite */
/* Demangled: BIO_nwrite */
int BIO_nwrite(void);

/* Symbol: BIO_CONNECT_new */
/* Demangled: BIO_CONNECT_new */
int BIO_CONNECT_new(void);

/* Symbol: BIO_CONNECT_free */
/* Demangled: BIO_CONNECT_free */
int BIO_CONNECT_free(void);

/* Symbol: BIO_s_connect */
/* Demangled: BIO_s_connect */
int BIO_s_connect(void);

/* Symbol: BIO_new_connect */
/* Demangled: BIO_new_connect */
int BIO_new_connect(void);

/* Symbol: BIO_s_datagram */
/* Demangled: BIO_s_datagram */
int BIO_s_datagram(void);

/* Symbol: BIO_new_dgram */
/* Demangled: BIO_new_dgram */
int BIO_new_dgram(void);

/* Symbol: BIO_dgram_non_fatal_error */
/* Demangled: BIO_dgram_non_fatal_error */
int BIO_dgram_non_fatal_error(void);

/* Symbol: BIO_s_fd */
/* Demangled: BIO_s_fd */
int BIO_s_fd(void);

/* Symbol: BIO_new_fd */
/* Demangled: BIO_new_fd */
int BIO_new_fd(void);

/* Symbol: BIO_fd_should_retry */
/* Demangled: BIO_fd_should_retry */
int BIO_fd_should_retry(void);

/* Symbol: BIO_fd_non_fatal_error */
/* Demangled: BIO_fd_non_fatal_error */
int BIO_fd_non_fatal_error(void);

/* Symbol: BIO_new_file */
/* Demangled: BIO_new_file */
int BIO_new_file(void);

/* Symbol: BIO_s_log */
/* Demangled: BIO_s_log */
int BIO_s_log(void);

/* Symbol: BIO_new_mem_buf */
/* Demangled: BIO_new_mem_buf */
int BIO_new_mem_buf(void);

/* Symbol: BIO_s_null */
/* Demangled: BIO_s_null */
int BIO_s_null(void);

/* Symbol: BIO_s_socket */
/* Demangled: BIO_s_socket */
int BIO_s_socket(void);

/* Symbol: BIO_sock_non_fatal_error */
/* Demangled: BIO_sock_non_fatal_error */
int BIO_sock_non_fatal_error(void);

/* Symbol: BN_add */
/* Demangled: BN_add */
int BN_add(void);

/* Symbol: BN_uadd */
/* Demangled: BN_uadd */
int BN_uadd(void);

/* Symbol: BN_ucmp */
/* Demangled: BN_ucmp */
int BN_ucmp(void);

/* Symbol: BN_usub */
/* Demangled: BN_usub */
int BN_usub(void);

/* Symbol: bn_expand2 */
/* Demangled: bn_expand2 */
int bn_expand2(void);

/* Symbol: bn_add_words */
/* Demangled: bn_add_words */
int bn_add_words(void);

/* Symbol: BN_sub */
/* Demangled: BN_sub */
int BN_sub(void);

/* Symbol: bn_mul_add_words */
/* Demangled: bn_mul_add_words */
int bn_mul_add_words(void);

/* Symbol: bn_mul_words */
/* Demangled: bn_mul_words */
int bn_mul_words(void);

/* Symbol: bn_sqr_words */
/* Demangled: bn_sqr_words */
int bn_sqr_words(void);

/* Symbol: bn_div_words */
/* Demangled: bn_div_words */
int bn_div_words(void);

/* Symbol: bn_sub_words */
/* Demangled: bn_sub_words */
int bn_sub_words(void);

/* Symbol: bn_mul_comba8 */
/* Demangled: bn_mul_comba8 */
int bn_mul_comba8(void);

/* Symbol: bn_mul_comba4 */
/* Demangled: bn_mul_comba4 */
int bn_mul_comba4(void);

/* Symbol: bn_sqr_comba8 */
/* Demangled: bn_sqr_comba8 */
int bn_sqr_comba8(void);

/* Symbol: bn_sqr_comba4 */
/* Demangled: bn_sqr_comba4 */
int bn_sqr_comba4(void);

/* Symbol: BN_BLINDING_new */
/* Demangled: BN_BLINDING_new */
int BN_BLINDING_new(void);

/* Symbol: BN_dup */
/* Demangled: BN_dup */
int BN_dup(void);

/* Symbol: CRYPTO_THREADID_current */
/* Demangled: CRYPTO_THREADID_current */
int CRYPTO_THREADID_current(void);

/* Symbol: BN_BLINDING_free */
/* Demangled: BN_BLINDING_free */
int BN_BLINDING_free(void);

/* Symbol: BN_BLINDING_update */
/* Demangled: BN_BLINDING_update */
int BN_BLINDING_update(void);

/* Symbol: BN_BLINDING_create_param */
/* Demangled: BN_BLINDING_create_param */
int BN_BLINDING_create_param(void);

/* Symbol: BN_mod_mul */
/* Demangled: BN_mod_mul */
int BN_mod_mul(void);

/* Symbol: BN_rand_range */
/* Demangled: BN_rand_range */
int BN_rand_range(void);

/* Symbol: BN_mod_inverse */
/* Demangled: BN_mod_inverse */
int BN_mod_inverse(void);

/* Symbol: ERR_peek_last_error */
/* Demangled: ERR_peek_last_error */
int ERR_peek_last_error(void);

/* Symbol: BN_mod_exp */
/* Demangled: BN_mod_exp */
int BN_mod_exp(void);

/* Symbol: BN_BLINDING_convert */
/* Demangled: BN_BLINDING_convert */
int BN_BLINDING_convert(void);

/* Symbol: BN_BLINDING_convert_ex */
/* Demangled: BN_BLINDING_convert_ex */
int BN_BLINDING_convert_ex(void);

/* Symbol: BN_copy */
/* Demangled: BN_copy */
int BN_copy(void);

/* Symbol: BN_BLINDING_invert */
/* Demangled: BN_BLINDING_invert */
int BN_BLINDING_invert(void);

/* Symbol: BN_BLINDING_invert_ex */
/* Demangled: BN_BLINDING_invert_ex */
int BN_BLINDING_invert_ex(void);

/* Symbol: BN_BLINDING_get_thread_id */
/* Demangled: BN_BLINDING_get_thread_id */
int BN_BLINDING_get_thread_id(void);

/* Symbol: BN_BLINDING_set_thread_id */
/* Demangled: BN_BLINDING_set_thread_id */
int BN_BLINDING_set_thread_id(void);

/* Symbol: BN_BLINDING_thread_id */
/* Demangled: BN_BLINDING_thread_id */
int BN_BLINDING_thread_id(void);

/* Symbol: BN_BLINDING_get_flags */
/* Demangled: BN_BLINDING_get_flags */
int BN_BLINDING_get_flags(void);

/* Symbol: BN_BLINDING_set_flags */
/* Demangled: BN_BLINDING_set_flags */
int BN_BLINDING_set_flags(void);

/* Symbol: get_rfc2409_prime_768 */
/* Demangled: get_rfc2409_prime_768 */
int get_rfc2409_prime_768(void);

/* Symbol: get_rfc2409_prime_1024 */
/* Demangled: get_rfc2409_prime_1024 */
int get_rfc2409_prime_1024(void);

/* Symbol: get_rfc3526_prime_1536 */
/* Demangled: get_rfc3526_prime_1536 */
int get_rfc3526_prime_1536(void);

/* Symbol: get_rfc3526_prime_2048 */
/* Demangled: get_rfc3526_prime_2048 */
int get_rfc3526_prime_2048(void);

/* Symbol: get_rfc3526_prime_3072 */
/* Demangled: get_rfc3526_prime_3072 */
int get_rfc3526_prime_3072(void);

/* Symbol: get_rfc3526_prime_4096 */
/* Demangled: get_rfc3526_prime_4096 */
int get_rfc3526_prime_4096(void);

/* Symbol: get_rfc3526_prime_6144 */
/* Demangled: get_rfc3526_prime_6144 */
int get_rfc3526_prime_6144(void);

/* Symbol: get_rfc3526_prime_8192 */
/* Demangled: get_rfc3526_prime_8192 */
int get_rfc3526_prime_8192(void);

/* Symbol: BN_CTX_init */
/* Demangled: BN_CTX_init */
int BN_CTX_init(void);

/* Symbol: BN_clear */
/* Demangled: BN_clear */
int BN_clear(void);

/* Symbol: BN_CTX_new */
/* Demangled: BN_CTX_new */
int BN_CTX_new(void);

/* Symbol: BN_CTX_free */
/* Demangled: BN_CTX_free */
int BN_CTX_free(void);

/* Symbol: BN_CTX_start */
/* Demangled: BN_CTX_start */
int BN_CTX_start(void);

/* Symbol: BN_CTX_end */
/* Demangled: BN_CTX_end */
int BN_CTX_end(void);

/* Symbol: BN_CTX_get */
/* Demangled: BN_CTX_get */
int BN_CTX_get(void);

/* Symbol: BN_init */
/* Demangled: BN_init */
int BN_init(void);

/* Symbol: BN_div */
/* Demangled: BN_div */
int BN_div(void);

/* Symbol: BN_lshift */
/* Demangled: BN_lshift */
int BN_lshift(void);

/* Symbol: BN_rshift */
/* Demangled: BN_rshift */
int BN_rshift(void);

/* Symbol: ERR_load_BN_strings */
/* Demangled: ERR_load_BN_strings */
int ERR_load_BN_strings(void);

/* Symbol: BN_exp */
/* Demangled: BN_exp */
int BN_exp(void);

/* Symbol: BN_sqr */
/* Demangled: BN_sqr */
int BN_sqr(void);

/* Symbol: BN_is_bit_set */
/* Demangled: BN_is_bit_set */
int BN_is_bit_set(void);

/* Symbol: BN_mul */
/* Demangled: BN_mul */
int BN_mul(void);

/* Symbol: BN_mod_exp_recp */
/* Demangled: BN_mod_exp_recp */
int BN_mod_exp_recp(void);

/* Symbol: BN_mod_exp_mont_word */
/* Demangled: BN_mod_exp_mont_word */
int BN_mod_exp_mont_word(void);

/* Symbol: BN_mod_exp_mont */
/* Demangled: BN_mod_exp_mont */
int BN_mod_exp_mont(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: BN_MONT_CTX_new */
/* Demangled: BN_MONT_CTX_new */
int BN_MONT_CTX_new(void);

/* Symbol: BN_MONT_CTX_set */
/* Demangled: BN_MONT_CTX_set */
int BN_MONT_CTX_set(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: BN_mod_mul_montgomery */
/* Demangled: BN_mod_mul_montgomery */
int BN_mod_mul_montgomery(void);

/* Symbol: BN_from_montgomery */
/* Demangled: BN_from_montgomery */
int BN_from_montgomery(void);

/* Symbol: BN_MONT_CTX_free */
/* Demangled: BN_MONT_CTX_free */
int BN_MONT_CTX_free(void);

/* Symbol: BN_mod_exp_mont_consttime */
/* Demangled: BN_mod_exp_mont_consttime */
int BN_mod_exp_mont_consttime(void);

/* Symbol: BN_nnmod */
/* Demangled: BN_nnmod */
int BN_nnmod(void);

/* Symbol: BN_value_one */
/* Demangled: BN_value_one */
int BN_value_one(void);

/* Symbol: BN_RECP_CTX_init */
/* Demangled: BN_RECP_CTX_init */
int BN_RECP_CTX_init(void);

/* Symbol: BN_RECP_CTX_set */
/* Demangled: BN_RECP_CTX_set */
int BN_RECP_CTX_set(void);

/* Symbol: BN_mod_mul_reciprocal */
/* Demangled: BN_mod_mul_reciprocal */
int BN_mod_mul_reciprocal(void);

/* Symbol: BN_RECP_CTX_free */
/* Demangled: BN_RECP_CTX_free */
int BN_RECP_CTX_free(void);

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int __aeabi_idivmod(void);

/* Symbol: BN_mod_exp_simple */
/* Demangled: BN_mod_exp_simple */
int BN_mod_exp_simple(void);

/* Symbol: BN_mod_exp2_mont */
/* Demangled: BN_mod_exp2_mont */
int BN_mod_exp2_mont(void);

/* Symbol: BN_gcd */
/* Demangled: BN_gcd */
int BN_gcd(void);

/* Symbol: BN_cmp */
/* Demangled: BN_cmp */
int BN_cmp(void);

/* Symbol: BN_rshift1 */
/* Demangled: BN_rshift1 */
int BN_rshift1(void);

/* Symbol: BN_lshift1 */
/* Demangled: BN_lshift1 */
int BN_lshift1(void);

/* Symbol: BN_GF2m_add */
/* Demangled: BN_GF2m_add */
int BN_GF2m_add(void);

/* Symbol: BN_GF2m_mod_arr */
/* Demangled: BN_GF2m_mod_arr */
int BN_GF2m_mod_arr(void);

/* Symbol: BN_GF2m_mod */
/* Demangled: BN_GF2m_mod */
int BN_GF2m_mod(void);

/* Symbol: BN_GF2m_poly2arr */
/* Demangled: BN_GF2m_poly2arr */
int BN_GF2m_poly2arr(void);

/* Symbol: BN_GF2m_mod_mul_arr */
/* Demangled: BN_GF2m_mod_mul_arr */
int BN_GF2m_mod_mul_arr(void);

/* Symbol: BN_GF2m_mod_sqr_arr */
/* Demangled: BN_GF2m_mod_sqr_arr */
int BN_GF2m_mod_sqr_arr(void);

/* Symbol: BN_GF2m_mod_mul */
/* Demangled: BN_GF2m_mod_mul */
int BN_GF2m_mod_mul(void);

/* Symbol: BN_GF2m_mod_sqr */
/* Demangled: BN_GF2m_mod_sqr */
int BN_GF2m_mod_sqr(void);

/* Symbol: BN_GF2m_mod_inv */
/* Demangled: BN_GF2m_mod_inv */
int BN_GF2m_mod_inv(void);

/* Symbol: BN_GF2m_mod_inv_arr */
/* Demangled: BN_GF2m_mod_inv_arr */
int BN_GF2m_mod_inv_arr(void);

/* Symbol: BN_GF2m_arr2poly */
/* Demangled: BN_GF2m_arr2poly */
int BN_GF2m_arr2poly(void);

/* Symbol: BN_set_bit */
/* Demangled: BN_set_bit */
int BN_set_bit(void);

/* Symbol: BN_GF2m_mod_div */
/* Demangled: BN_GF2m_mod_div */
int BN_GF2m_mod_div(void);

/* Symbol: BN_GF2m_mod_div_arr */
/* Demangled: BN_GF2m_mod_div_arr */
int BN_GF2m_mod_div_arr(void);

/* Symbol: BN_GF2m_mod_exp_arr */
/* Demangled: BN_GF2m_mod_exp_arr */
int BN_GF2m_mod_exp_arr(void);

/* Symbol: BN_GF2m_mod_exp */
/* Demangled: BN_GF2m_mod_exp */
int BN_GF2m_mod_exp(void);

/* Symbol: BN_GF2m_mod_sqrt_arr */
/* Demangled: BN_GF2m_mod_sqrt_arr */
int BN_GF2m_mod_sqrt_arr(void);

/* Symbol: BN_GF2m_mod_sqrt */
/* Demangled: BN_GF2m_mod_sqrt */
int BN_GF2m_mod_sqrt(void);

/* Symbol: BN_GF2m_mod_solve_quad_arr */
/* Demangled: BN_GF2m_mod_solve_quad_arr */
int BN_GF2m_mod_solve_quad_arr(void);

/* Symbol: BN_rand */
/* Demangled: BN_rand */
int BN_rand(void);

/* Symbol: BN_GF2m_mod_solve_quad */
/* Demangled: BN_GF2m_mod_solve_quad */
int BN_GF2m_mod_solve_quad(void);

/* Symbol: BN_kronecker */
/* Demangled: BN_kronecker */
int BN_kronecker(void);

/* Symbol: BN_set_params */
/* Demangled: BN_set_params */
int BN_set_params(void);

/* Symbol: BN_get_params */
/* Demangled: BN_get_params */
int BN_get_params(void);

/* Symbol: bn_dup_expand */
/* Demangled: bn_dup_expand */
int bn_dup_expand(void);

/* Symbol: BN_swap */
/* Demangled: BN_swap */
int BN_swap(void);

/* Symbol: BN_get_word */
/* Demangled: BN_get_word */
int BN_get_word(void);

/* Symbol: BN_clear_bit */
/* Demangled: BN_clear_bit */
int BN_clear_bit(void);

/* Symbol: BN_mask_bits */
/* Demangled: BN_mask_bits */
int BN_mask_bits(void);

/* Symbol: bn_cmp_words */
/* Demangled: bn_cmp_words */
int bn_cmp_words(void);

/* Symbol: bn_cmp_part_words */
/* Demangled: bn_cmp_part_words */
int bn_cmp_part_words(void);

/* Symbol: BN_consttime_swap */
/* Demangled: BN_consttime_swap */
int BN_consttime_swap(void);

/* Symbol: BN_version */
/* Demangled: BN_version */
extern void* BN_version;

/* Symbol: BN_mod_add */
/* Demangled: BN_mod_add */
int BN_mod_add(void);

/* Symbol: BN_mod_add_quick */
/* Demangled: BN_mod_add_quick */
int BN_mod_add_quick(void);

/* Symbol: BN_mod_sub */
/* Demangled: BN_mod_sub */
int BN_mod_sub(void);

/* Symbol: BN_mod_sub_quick */
/* Demangled: BN_mod_sub_quick */
int BN_mod_sub_quick(void);

/* Symbol: BN_mod_sqr */
/* Demangled: BN_mod_sqr */
int BN_mod_sqr(void);

/* Symbol: BN_mod_lshift1 */
/* Demangled: BN_mod_lshift1 */
int BN_mod_lshift1(void);

/* Symbol: BN_mod_lshift1_quick */
/* Demangled: BN_mod_lshift1_quick */
int BN_mod_lshift1_quick(void);

/* Symbol: BN_mod_lshift */
/* Demangled: BN_mod_lshift */
int BN_mod_lshift(void);

/* Symbol: BN_mod_lshift_quick */
/* Demangled: BN_mod_lshift_quick */
int BN_mod_lshift_quick(void);

/* Symbol: BN_MONT_CTX_init */
/* Demangled: BN_MONT_CTX_init */
int BN_MONT_CTX_init(void);

/* Symbol: BN_sub_word */
/* Demangled: BN_sub_word */
int BN_sub_word(void);

/* Symbol: BN_MONT_CTX_copy */
/* Demangled: BN_MONT_CTX_copy */
int BN_MONT_CTX_copy(void);

/* Symbol: BN_MONT_CTX_set_locked */
/* Demangled: BN_MONT_CTX_set_locked */
int BN_MONT_CTX_set_locked(void);

/* Symbol: BN_bn2mpi */
/* Demangled: BN_bn2mpi */
int BN_bn2mpi(void);

/* Symbol: BN_mpi2bn */
/* Demangled: BN_mpi2bn */
int BN_mpi2bn(void);

/* Symbol: bn_sub_part_words */
/* Demangled: bn_sub_part_words */
int bn_sub_part_words(void);

/* Symbol: bn_add_part_words */
/* Demangled: bn_add_part_words */
int bn_add_part_words(void);

/* Symbol: bn_mul_recursive */
/* Demangled: bn_mul_recursive */
int bn_mul_recursive(void);

/* Symbol: bn_mul_normal */
/* Demangled: bn_mul_normal */
int bn_mul_normal(void);

/* Symbol: bn_mul_part_recursive */
/* Demangled: bn_mul_part_recursive */
int bn_mul_part_recursive(void);

/* Symbol: bn_mul_low_recursive */
/* Demangled: bn_mul_low_recursive */
int bn_mul_low_recursive(void);

/* Symbol: bn_mul_low_normal */
/* Demangled: bn_mul_low_normal */
int bn_mul_low_normal(void);

/* Symbol: bn_mul_high */
/* Demangled: bn_mul_high */
int bn_mul_high(void);

/* Symbol: BN_get0_nist_prime_192 */
/* Demangled: BN_get0_nist_prime_192 */
int BN_get0_nist_prime_192(void);

/* Symbol: BN_get0_nist_prime_224 */
/* Demangled: BN_get0_nist_prime_224 */
int BN_get0_nist_prime_224(void);

/* Symbol: BN_get0_nist_prime_256 */
/* Demangled: BN_get0_nist_prime_256 */
int BN_get0_nist_prime_256(void);

/* Symbol: BN_get0_nist_prime_384 */
/* Demangled: BN_get0_nist_prime_384 */
int BN_get0_nist_prime_384(void);

/* Symbol: BN_get0_nist_prime_521 */
/* Demangled: BN_get0_nist_prime_521 */
int BN_get0_nist_prime_521(void);

/* Symbol: BN_nist_mod_192 */
/* Demangled: BN_nist_mod_192 */
int BN_nist_mod_192(void);

/* Symbol: BN_nist_mod_224 */
/* Demangled: BN_nist_mod_224 */
int BN_nist_mod_224(void);

/* Symbol: BN_nist_mod_256 */
/* Demangled: BN_nist_mod_256 */
int BN_nist_mod_256(void);

/* Symbol: BN_nist_mod_384 */
/* Demangled: BN_nist_mod_384 */
int BN_nist_mod_384(void);

/* Symbol: BN_nist_mod_521 */
/* Demangled: BN_nist_mod_521 */
int BN_nist_mod_521(void);

/* Symbol: BN_GENCB_call */
/* Demangled: BN_GENCB_call */
int BN_GENCB_call(void);

/* Symbol: BN_generate_prime_ex */
/* Demangled: BN_generate_prime_ex */
int BN_generate_prime_ex(void);

/* Symbol: BN_mod_word */
/* Demangled: BN_mod_word */
int BN_mod_word(void);

/* Symbol: BN_is_prime_fasttest_ex */
/* Demangled: BN_is_prime_fasttest_ex */
int BN_is_prime_fasttest_ex(void);

/* Symbol: BN_pseudo_rand_range */
/* Demangled: BN_pseudo_rand_range */
int BN_pseudo_rand_range(void);

/* Symbol: BN_is_prime_ex */
/* Demangled: BN_is_prime_ex */
int BN_is_prime_ex(void);

/* Symbol: BN_bn2hex */
/* Demangled: BN_bn2hex */
int BN_bn2hex(void);

/* Symbol: BN_bn2dec */
/* Demangled: BN_bn2dec */
int BN_bn2dec(void);

/* Symbol: BN_hex2bn */
/* Demangled: BN_hex2bn */
int BN_hex2bn(void);

/* Symbol: BN_dec2bn */
/* Demangled: BN_dec2bn */
int BN_dec2bn(void);

/* Symbol: BN_asc2bn */
/* Demangled: BN_asc2bn */
int BN_asc2bn(void);

/* Symbol: BN_print_fp */
/* Demangled: BN_print_fp */
int BN_print_fp(void);

/* Symbol: BN_print */
/* Demangled: BN_print */
int BN_print(void);

/* Symbol: BN_options */
/* Demangled: BN_options */
int BN_options(void);

/* Symbol: RAND_add */
/* Demangled: RAND_add */
int RAND_add(void);

/* Symbol: RAND_bytes */
/* Demangled: RAND_bytes */
int RAND_bytes(void);

/* Symbol: BN_pseudo_rand */
/* Demangled: BN_pseudo_rand */
int BN_pseudo_rand(void);

/* Symbol: BN_bntest_rand */
/* Demangled: BN_bntest_rand */
int BN_bntest_rand(void);

/* Symbol: BN_generate_dsa_nonce */
/* Demangled: BN_generate_dsa_nonce */
int BN_generate_dsa_nonce(void);

/* Symbol: SHA512_Init */
/* Demangled: SHA512_Init */
int SHA512_Init(void);

/* Symbol: SHA512_Update */
/* Demangled: SHA512_Update */
int SHA512_Update(void);

/* Symbol: SHA512_Final */
/* Demangled: SHA512_Final */
int SHA512_Final(void);

/* Symbol: BN_RECP_CTX_new */
/* Demangled: BN_RECP_CTX_new */
int BN_RECP_CTX_new(void);

/* Symbol: BN_div_recp */
/* Demangled: BN_div_recp */
int BN_div_recp(void);

/* Symbol: BN_reciprocal */
/* Demangled: BN_reciprocal */
int BN_reciprocal(void);

/* Symbol: bn_sqr_recursive */
/* Demangled: bn_sqr_recursive */
int bn_sqr_recursive(void);

/* Symbol: bn_sqr_normal */
/* Demangled: bn_sqr_normal */
int bn_sqr_normal(void);

/* Symbol: BN_mod_sqrt */
/* Demangled: BN_mod_sqrt */
int BN_mod_sqrt(void);

/* Symbol: ERR_load_BUF_strings */
/* Demangled: ERR_load_BUF_strings */
int ERR_load_BUF_strings(void);

/* Symbol: BUF_strndup */
/* Demangled: BUF_strndup */
int BUF_strndup(void);

/* Symbol: BUF_memdup */
/* Demangled: BUF_memdup */
int BUF_memdup(void);

/* Symbol: BUF_reverse */
/* Demangled: BUF_reverse */
int BUF_reverse(void);

/* Symbol: CMAC_CTX_free */
/* Demangled: CMAC_CTX_free */
int CMAC_CTX_free(void);

/* Symbol: CMAC_CTX_new */
/* Demangled: CMAC_CTX_new */
int CMAC_CTX_new(void);

/* Symbol: CMAC_CTX_copy */
/* Demangled: CMAC_CTX_copy */
int CMAC_CTX_copy(void);

/* Symbol: EVP_PKEY_assign */
/* Demangled: EVP_PKEY_assign */
int EVP_PKEY_assign(void);

/* Symbol: EVP_MD_CTX_set_flags */
/* Demangled: EVP_MD_CTX_set_flags */
int EVP_MD_CTX_set_flags(void);

/* Symbol: CMAC_Final */
/* Demangled: CMAC_Final */
int CMAC_Final(void);

/* Symbol: CMAC_Init */
/* Demangled: CMAC_Init */
int CMAC_Init(void);

/* Symbol: CMAC_Update */
/* Demangled: CMAC_Update */
int CMAC_Update(void);

/* Symbol: cmac_pkey_meth */
/* Demangled: cmac_pkey_meth */
extern void* cmac_pkey_meth;

/* Symbol: CMAC_CTX_cleanup */
/* Demangled: CMAC_CTX_cleanup */
int CMAC_CTX_cleanup(void);

/* Symbol: CMAC_CTX_get0_cipher_ctx */
/* Demangled: CMAC_CTX_get0_cipher_ctx */
int CMAC_CTX_get0_cipher_ctx(void);

/* Symbol: EVP_CIPHER_CTX_copy */
/* Demangled: EVP_CIPHER_CTX_copy */
int EVP_CIPHER_CTX_copy(void);

/* Symbol: EVP_CIPHER_CTX_block_size */
/* Demangled: EVP_CIPHER_CTX_block_size */
int EVP_CIPHER_CTX_block_size(void);

/* Symbol: EVP_CIPHER_CTX_cipher */
/* Demangled: EVP_CIPHER_CTX_cipher */
int EVP_CIPHER_CTX_cipher(void);

/* Symbol: EVP_CIPHER_CTX_set_key_length */
/* Demangled: EVP_CIPHER_CTX_set_key_length */
int EVP_CIPHER_CTX_set_key_length(void);

/* Symbol: EVP_Cipher */
/* Demangled: EVP_Cipher */
int EVP_Cipher(void);

/* Symbol: CMAC_resume */
/* Demangled: CMAC_resume */
int CMAC_resume(void);

/* Symbol: CMS_dataFinal */
/* Demangled: CMS_dataFinal */
int CMS_dataFinal(void);

/* Symbol: CMS_stream */
/* Demangled: CMS_stream */
int CMS_stream(void);

/* Symbol: CMS_dataInit */
/* Demangled: CMS_dataInit */
int CMS_dataInit(void);

/* Symbol: CMS_IssuerAndSerialNumber_it */
/* Demangled: CMS_IssuerAndSerialNumber_it */
extern void* CMS_IssuerAndSerialNumber_it;

/* Symbol: CMS_OtherCertificateFormat_it */
/* Demangled: CMS_OtherCertificateFormat_it */
extern void* CMS_OtherCertificateFormat_it;

/* Symbol: CMS_CertificateChoices_it */
/* Demangled: CMS_CertificateChoices_it */
extern void* CMS_CertificateChoices_it;

/* Symbol: CMS_SignerIdentifier_it */
/* Demangled: CMS_SignerIdentifier_it */
extern void* CMS_SignerIdentifier_it;

/* Symbol: CMS_EncapsulatedContentInfo_it */
/* Demangled: CMS_EncapsulatedContentInfo_it */
extern void* CMS_EncapsulatedContentInfo_it;

/* Symbol: CMS_SignerInfo_it */
/* Demangled: CMS_SignerInfo_it */
extern void* CMS_SignerInfo_it;

/* Symbol: CMS_OtherRevocationInfoFormat_it */
/* Demangled: CMS_OtherRevocationInfoFormat_it */
extern void* CMS_OtherRevocationInfoFormat_it;

/* Symbol: CMS_RevocationInfoChoice_it */
/* Demangled: CMS_RevocationInfoChoice_it */
extern void* CMS_RevocationInfoChoice_it;

/* Symbol: CMS_SignedData_it */
/* Demangled: CMS_SignedData_it */
extern void* CMS_SignedData_it;

/* Symbol: CMS_OriginatorInfo_it */
/* Demangled: CMS_OriginatorInfo_it */
extern void* CMS_OriginatorInfo_it;

/* Symbol: CMS_EncryptedContentInfo_it */
/* Demangled: CMS_EncryptedContentInfo_it */
extern void* CMS_EncryptedContentInfo_it;

/* Symbol: CMS_KeyTransRecipientInfo_it */
/* Demangled: CMS_KeyTransRecipientInfo_it */
extern void* CMS_KeyTransRecipientInfo_it;

/* Symbol: CMS_OtherKeyAttribute_it */
/* Demangled: CMS_OtherKeyAttribute_it */
extern void* CMS_OtherKeyAttribute_it;

/* Symbol: CMS_RecipientKeyIdentifier_it */
/* Demangled: CMS_RecipientKeyIdentifier_it */
extern void* CMS_RecipientKeyIdentifier_it;

/* Symbol: CMS_KeyAgreeRecipientIdentifier_it */
/* Demangled: CMS_KeyAgreeRecipientIdentifier_it */
extern void* CMS_KeyAgreeRecipientIdentifier_it;

/* Symbol: CMS_RecipientEncryptedKey_it */
/* Demangled: CMS_RecipientEncryptedKey_it */
extern void* CMS_RecipientEncryptedKey_it;

/* Symbol: CMS_OriginatorPublicKey_it */
/* Demangled: CMS_OriginatorPublicKey_it */
extern void* CMS_OriginatorPublicKey_it;

/* Symbol: CMS_OriginatorIdentifierOrKey_it */
/* Demangled: CMS_OriginatorIdentifierOrKey_it */
extern void* CMS_OriginatorIdentifierOrKey_it;

/* Symbol: CMS_KeyAgreeRecipientInfo_it */
/* Demangled: CMS_KeyAgreeRecipientInfo_it */
extern void* CMS_KeyAgreeRecipientInfo_it;

/* Symbol: CMS_KEKIdentifier_it */
/* Demangled: CMS_KEKIdentifier_it */
extern void* CMS_KEKIdentifier_it;

/* Symbol: CMS_KEKRecipientInfo_it */
/* Demangled: CMS_KEKRecipientInfo_it */
extern void* CMS_KEKRecipientInfo_it;

/* Symbol: CMS_PasswordRecipientInfo_it */
/* Demangled: CMS_PasswordRecipientInfo_it */
extern void* CMS_PasswordRecipientInfo_it;

/* Symbol: CMS_OtherRecipientInfo_it */
/* Demangled: CMS_OtherRecipientInfo_it */
extern void* CMS_OtherRecipientInfo_it;

/* Symbol: CMS_RecipientInfo_it */
/* Demangled: CMS_RecipientInfo_it */
extern void* CMS_RecipientInfo_it;

/* Symbol: CMS_EnvelopedData_it */
/* Demangled: CMS_EnvelopedData_it */
extern void* CMS_EnvelopedData_it;

/* Symbol: CMS_DigestedData_it */
/* Demangled: CMS_DigestedData_it */
extern void* CMS_DigestedData_it;

/* Symbol: CMS_EncryptedData_it */
/* Demangled: CMS_EncryptedData_it */
extern void* CMS_EncryptedData_it;

/* Symbol: CMS_AuthenticatedData_it */
/* Demangled: CMS_AuthenticatedData_it */
extern void* CMS_AuthenticatedData_it;

/* Symbol: CMS_CompressedData_it */
/* Demangled: CMS_CompressedData_it */
extern void* CMS_CompressedData_it;

/* Symbol: CMS_ContentInfo_it */
/* Demangled: CMS_ContentInfo_it */
extern void* CMS_ContentInfo_it;

/* Symbol: CMS_Attributes_Sign_it */
/* Demangled: CMS_Attributes_Sign_it */
extern void* CMS_Attributes_Sign_it;

/* Symbol: CMS_Attributes_Verify_it */
/* Demangled: CMS_Attributes_Verify_it */
extern void* CMS_Attributes_Verify_it;

/* Symbol: GENERAL_NAMES_it */
/* Demangled: GENERAL_NAMES_it */
extern void* GENERAL_NAMES_it;

/* Symbol: CMS_ReceiptsFrom_it */
/* Demangled: CMS_ReceiptsFrom_it */
extern void* CMS_ReceiptsFrom_it;

/* Symbol: CMS_ReceiptRequest_it */
/* Demangled: CMS_ReceiptRequest_it */
extern void* CMS_ReceiptRequest_it;

/* Symbol: CMS_Receipt_it */
/* Demangled: CMS_Receipt_it */
extern void* CMS_Receipt_it;

/* Symbol: CMS_signed_get_attr_count */
/* Demangled: CMS_signed_get_attr_count */
int CMS_signed_get_attr_count(void);

/* Symbol: X509at_get_attr_count */
/* Demangled: X509at_get_attr_count */
int X509at_get_attr_count(void);

/* Symbol: CMS_signed_get_attr_by_NID */
/* Demangled: CMS_signed_get_attr_by_NID */
int CMS_signed_get_attr_by_NID(void);

/* Symbol: X509at_get_attr_by_NID */
/* Demangled: X509at_get_attr_by_NID */
int X509at_get_attr_by_NID(void);

/* Symbol: CMS_signed_get_attr_by_OBJ */
/* Demangled: CMS_signed_get_attr_by_OBJ */
int CMS_signed_get_attr_by_OBJ(void);

/* Symbol: X509at_get_attr_by_OBJ */
/* Demangled: X509at_get_attr_by_OBJ */
int X509at_get_attr_by_OBJ(void);

/* Symbol: CMS_signed_get_attr */
/* Demangled: CMS_signed_get_attr */
int CMS_signed_get_attr(void);

/* Symbol: X509at_get_attr */
/* Demangled: X509at_get_attr */
int X509at_get_attr(void);

/* Symbol: CMS_signed_delete_attr */
/* Demangled: CMS_signed_delete_attr */
int CMS_signed_delete_attr(void);

/* Symbol: X509at_delete_attr */
/* Demangled: X509at_delete_attr */
int X509at_delete_attr(void);

/* Symbol: CMS_signed_add1_attr */
/* Demangled: CMS_signed_add1_attr */
int CMS_signed_add1_attr(void);

/* Symbol: X509at_add1_attr */
/* Demangled: X509at_add1_attr */
int X509at_add1_attr(void);

/* Symbol: CMS_signed_add1_attr_by_OBJ */
/* Demangled: CMS_signed_add1_attr_by_OBJ */
int CMS_signed_add1_attr_by_OBJ(void);

/* Symbol: X509at_add1_attr_by_OBJ */
/* Demangled: X509at_add1_attr_by_OBJ */
int X509at_add1_attr_by_OBJ(void);

/* Symbol: CMS_signed_add1_attr_by_NID */
/* Demangled: CMS_signed_add1_attr_by_NID */
int CMS_signed_add1_attr_by_NID(void);

/* Symbol: X509at_add1_attr_by_NID */
/* Demangled: X509at_add1_attr_by_NID */
int X509at_add1_attr_by_NID(void);

/* Symbol: CMS_signed_add1_attr_by_txt */
/* Demangled: CMS_signed_add1_attr_by_txt */
int CMS_signed_add1_attr_by_txt(void);

/* Symbol: X509at_add1_attr_by_txt */
/* Demangled: X509at_add1_attr_by_txt */
int X509at_add1_attr_by_txt(void);

/* Symbol: CMS_signed_get0_data_by_OBJ */
/* Demangled: CMS_signed_get0_data_by_OBJ */
int CMS_signed_get0_data_by_OBJ(void);

/* Symbol: X509at_get0_data_by_OBJ */
/* Demangled: X509at_get0_data_by_OBJ */
int X509at_get0_data_by_OBJ(void);

/* Symbol: CMS_unsigned_get_attr_count */
/* Demangled: CMS_unsigned_get_attr_count */
int CMS_unsigned_get_attr_count(void);

/* Symbol: CMS_unsigned_get_attr_by_NID */
/* Demangled: CMS_unsigned_get_attr_by_NID */
int CMS_unsigned_get_attr_by_NID(void);

/* Symbol: CMS_unsigned_get_attr_by_OBJ */
/* Demangled: CMS_unsigned_get_attr_by_OBJ */
int CMS_unsigned_get_attr_by_OBJ(void);

/* Symbol: CMS_unsigned_get_attr */
/* Demangled: CMS_unsigned_get_attr */
int CMS_unsigned_get_attr(void);

/* Symbol: CMS_unsigned_delete_attr */
/* Demangled: CMS_unsigned_delete_attr */
int CMS_unsigned_delete_attr(void);

/* Symbol: CMS_unsigned_add1_attr */
/* Demangled: CMS_unsigned_add1_attr */
int CMS_unsigned_add1_attr(void);

/* Symbol: CMS_unsigned_add1_attr_by_OBJ */
/* Demangled: CMS_unsigned_add1_attr_by_OBJ */
int CMS_unsigned_add1_attr_by_OBJ(void);

/* Symbol: CMS_unsigned_add1_attr_by_NID */
/* Demangled: CMS_unsigned_add1_attr_by_NID */
int CMS_unsigned_add1_attr_by_NID(void);

/* Symbol: CMS_unsigned_add1_attr_by_txt */
/* Demangled: CMS_unsigned_add1_attr_by_txt */
int CMS_unsigned_add1_attr_by_txt(void);

/* Symbol: CMS_unsigned_get0_data_by_OBJ */
/* Demangled: CMS_unsigned_get0_data_by_OBJ */
int CMS_unsigned_get0_data_by_OBJ(void);

/* Symbol: cms_DigestedData_create */
/* Demangled: cms_DigestedData_create */
int cms_DigestedData_create(void);

/* Symbol: CMS_ContentInfo_new */
/* Demangled: CMS_ContentInfo_new */
int CMS_ContentInfo_new(void);

/* Symbol: cms_DigestAlgorithm_set */
/* Demangled: cms_DigestAlgorithm_set */
int cms_DigestAlgorithm_set(void);

/* Symbol: CMS_ContentInfo_free */
/* Demangled: CMS_ContentInfo_free */
int CMS_ContentInfo_free(void);

/* Symbol: cms_DigestedData_init_bio */
/* Demangled: cms_DigestedData_init_bio */
int cms_DigestedData_init_bio(void);

/* Symbol: cms_DigestAlgorithm_init_bio */
/* Demangled: cms_DigestAlgorithm_init_bio */
int cms_DigestAlgorithm_init_bio(void);

/* Symbol: cms_DigestedData_do_final */
/* Demangled: cms_DigestedData_do_final */
int cms_DigestedData_do_final(void);

/* Symbol: cms_DigestAlgorithm_find_ctx */
/* Demangled: cms_DigestAlgorithm_find_ctx */
int cms_DigestAlgorithm_find_ctx(void);

/* Symbol: EVP_DigestFinal_ex */
/* Demangled: EVP_DigestFinal_ex */
int EVP_DigestFinal_ex(void);

/* Symbol: cms_EncryptedContent_init_bio */
/* Demangled: cms_EncryptedContent_init_bio */
int cms_EncryptedContent_init_bio(void);

/* Symbol: BIO_f_cipher */
/* Demangled: BIO_f_cipher */
int BIO_f_cipher(void);

/* Symbol: EVP_CIPHER_CTX_iv_length */
/* Demangled: EVP_CIPHER_CTX_iv_length */
int EVP_CIPHER_CTX_iv_length(void);

/* Symbol: EVP_CIPHER_asn1_to_param */
/* Demangled: EVP_CIPHER_asn1_to_param */
int EVP_CIPHER_asn1_to_param(void);

/* Symbol: EVP_CIPHER_CTX_key_length */
/* Demangled: EVP_CIPHER_CTX_key_length */
int EVP_CIPHER_CTX_key_length(void);

/* Symbol: EVP_CIPHER_CTX_rand_key */
/* Demangled: EVP_CIPHER_CTX_rand_key */
int EVP_CIPHER_CTX_rand_key(void);

/* Symbol: cms_EncryptedContent_init */
/* Demangled: cms_EncryptedContent_init */
int cms_EncryptedContent_init(void);

/* Symbol: CMS_EncryptedData_set1_key */
/* Demangled: CMS_EncryptedData_set1_key */
int CMS_EncryptedData_set1_key(void);

/* Symbol: cms_EncryptedData_init_bio */
/* Demangled: cms_EncryptedData_init_bio */
int cms_EncryptedData_init_bio(void);

/* Symbol: cms_get0_enveloped */
/* Demangled: cms_get0_enveloped */
int cms_get0_enveloped(void);

/* Symbol: CMS_get0_RecipientInfos */
/* Demangled: CMS_get0_RecipientInfos */
int CMS_get0_RecipientInfos(void);

/* Symbol: CMS_RecipientInfo_type */
/* Demangled: CMS_RecipientInfo_type */
int CMS_RecipientInfo_type(void);

/* Symbol: CMS_EnvelopedData_create */
/* Demangled: CMS_EnvelopedData_create */
int CMS_EnvelopedData_create(void);

/* Symbol: CMS_add1_recipient_cert */
/* Demangled: CMS_add1_recipient_cert */
int CMS_add1_recipient_cert(void);

/* Symbol: X509_check_purpose */
/* Demangled: X509_check_purpose */
int X509_check_purpose(void);

/* Symbol: cms_set1_SignerIdentifier */
/* Demangled: cms_set1_SignerIdentifier */
int cms_set1_SignerIdentifier(void);

/* Symbol: CMS_RecipientInfo_ktri_get0_algs */
/* Demangled: CMS_RecipientInfo_ktri_get0_algs */
int CMS_RecipientInfo_ktri_get0_algs(void);

/* Symbol: CMS_RecipientInfo_ktri_get0_signer_id */
/* Demangled: CMS_RecipientInfo_ktri_get0_signer_id */
int CMS_RecipientInfo_ktri_get0_signer_id(void);

/* Symbol: cms_SignerIdentifier_get0_signer_id */
/* Demangled: cms_SignerIdentifier_get0_signer_id */
int cms_SignerIdentifier_get0_signer_id(void);

/* Symbol: CMS_RecipientInfo_ktri_cert_cmp */
/* Demangled: CMS_RecipientInfo_ktri_cert_cmp */
int CMS_RecipientInfo_ktri_cert_cmp(void);

/* Symbol: cms_SignerIdentifier_cert_cmp */
/* Demangled: cms_SignerIdentifier_cert_cmp */
int cms_SignerIdentifier_cert_cmp(void);

/* Symbol: CMS_RecipientInfo_set0_pkey */
/* Demangled: CMS_RecipientInfo_set0_pkey */
int CMS_RecipientInfo_set0_pkey(void);

/* Symbol: CMS_RecipientInfo_kekri_id_cmp */
/* Demangled: CMS_RecipientInfo_kekri_id_cmp */
int CMS_RecipientInfo_kekri_id_cmp(void);

/* Symbol: CMS_add0_recipient_key */
/* Demangled: CMS_add0_recipient_key */
int CMS_add0_recipient_key(void);

/* Symbol: CMS_RecipientInfo_kekri_get0_id */
/* Demangled: CMS_RecipientInfo_kekri_get0_id */
int CMS_RecipientInfo_kekri_get0_id(void);

/* Symbol: CMS_RecipientInfo_set0_key */
/* Demangled: CMS_RecipientInfo_set0_key */
int CMS_RecipientInfo_set0_key(void);

/* Symbol: CMS_RecipientInfo_decrypt */
/* Demangled: CMS_RecipientInfo_decrypt */
int CMS_RecipientInfo_decrypt(void);

/* Symbol: EVP_PKEY_CTX_new */
/* Demangled: EVP_PKEY_CTX_new */
int EVP_PKEY_CTX_new(void);

/* Symbol: EVP_PKEY_decrypt_init */
/* Demangled: EVP_PKEY_decrypt_init */
int EVP_PKEY_decrypt_init(void);

/* Symbol: EVP_PKEY_CTX_ctrl */
/* Demangled: EVP_PKEY_CTX_ctrl */
int EVP_PKEY_CTX_ctrl(void);

/* Symbol: EVP_PKEY_decrypt */
/* Demangled: EVP_PKEY_decrypt */
int EVP_PKEY_decrypt(void);

/* Symbol: cms_RecipientInfo_pwri_crypt */
/* Demangled: cms_RecipientInfo_pwri_crypt */
int cms_RecipientInfo_pwri_crypt(void);

/* Symbol: EVP_PKEY_CTX_free */
/* Demangled: EVP_PKEY_CTX_free */
int EVP_PKEY_CTX_free(void);

/* Symbol: cms_EnvelopedData_init_bio */
/* Demangled: cms_EnvelopedData_init_bio */
int cms_EnvelopedData_init_bio(void);

/* Symbol: EVP_PKEY_encrypt_init */
/* Demangled: EVP_PKEY_encrypt_init */
int EVP_PKEY_encrypt_init(void);

/* Symbol: EVP_PKEY_encrypt */
/* Demangled: EVP_PKEY_encrypt */
int EVP_PKEY_encrypt(void);

/* Symbol: ERR_load_CMS_strings */
/* Demangled: ERR_load_CMS_strings */
int ERR_load_CMS_strings(void);

/* Symbol: d2i_CMS_ReceiptRequest */
/* Demangled: d2i_CMS_ReceiptRequest */
int d2i_CMS_ReceiptRequest(void);

/* Symbol: i2d_CMS_ReceiptRequest */
/* Demangled: i2d_CMS_ReceiptRequest */
int i2d_CMS_ReceiptRequest(void);

/* Symbol: CMS_ReceiptRequest_new */
/* Demangled: CMS_ReceiptRequest_new */
int CMS_ReceiptRequest_new(void);

/* Symbol: CMS_ReceiptRequest_free */
/* Demangled: CMS_ReceiptRequest_free */
int CMS_ReceiptRequest_free(void);

/* Symbol: CMS_get1_ReceiptRequest */
/* Demangled: CMS_get1_ReceiptRequest */
int CMS_get1_ReceiptRequest(void);

/* Symbol: CMS_ReceiptRequest_create0 */
/* Demangled: CMS_ReceiptRequest_create0 */
int CMS_ReceiptRequest_create0(void);

/* Symbol: CMS_add1_ReceiptRequest */
/* Demangled: CMS_add1_ReceiptRequest */
int CMS_add1_ReceiptRequest(void);

/* Symbol: CMS_ReceiptRequest_get0_values */
/* Demangled: CMS_ReceiptRequest_get0_values */
int CMS_ReceiptRequest_get0_values(void);

/* Symbol: cms_msgSigDigest_add1 */
/* Demangled: cms_msgSigDigest_add1 */
int cms_msgSigDigest_add1(void);

/* Symbol: cms_Receipt_verify */
/* Demangled: cms_Receipt_verify */
int cms_Receipt_verify(void);

/* Symbol: CMS_get0_SignerInfos */
/* Demangled: CMS_get0_SignerInfos */
int CMS_get0_SignerInfos(void);

/* Symbol: CMS_get0_eContentType */
/* Demangled: CMS_get0_eContentType */
int CMS_get0_eContentType(void);

/* Symbol: CMS_get0_content */
/* Demangled: CMS_get0_content */
int CMS_get0_content(void);

/* Symbol: cms_encode_Receipt */
/* Demangled: cms_encode_Receipt */
int cms_encode_Receipt(void);

/* Symbol: d2i_CMS_bio */
/* Demangled: d2i_CMS_bio */
int d2i_CMS_bio(void);

/* Symbol: i2d_CMS_bio */
/* Demangled: i2d_CMS_bio */
int i2d_CMS_bio(void);

/* Symbol: PEM_read_bio_CMS */
/* Demangled: PEM_read_bio_CMS */
int PEM_read_bio_CMS(void);

/* Symbol: PEM_ASN1_read_bio */
/* Demangled: PEM_ASN1_read_bio */
int PEM_ASN1_read_bio(void);

/* Symbol: d2i_CMS_ContentInfo */
/* Demangled: d2i_CMS_ContentInfo */
int d2i_CMS_ContentInfo(void);

/* Symbol: PEM_read_CMS */
/* Demangled: PEM_read_CMS */
int PEM_read_CMS(void);

/* Symbol: PEM_ASN1_read */
/* Demangled: PEM_ASN1_read */
int PEM_ASN1_read(void);

/* Symbol: PEM_write_bio_CMS */
/* Demangled: PEM_write_bio_CMS */
int PEM_write_bio_CMS(void);

/* Symbol: PEM_ASN1_write_bio */
/* Demangled: PEM_ASN1_write_bio */
int PEM_ASN1_write_bio(void);

/* Symbol: i2d_CMS_ContentInfo */
/* Demangled: i2d_CMS_ContentInfo */
int i2d_CMS_ContentInfo(void);

/* Symbol: PEM_write_CMS */
/* Demangled: PEM_write_CMS */
int PEM_write_CMS(void);

/* Symbol: PEM_ASN1_write */
/* Demangled: PEM_ASN1_write */
int PEM_ASN1_write(void);

/* Symbol: BIO_new_CMS */
/* Demangled: BIO_new_CMS */
int BIO_new_CMS(void);

/* Symbol: i2d_CMS_bio_stream */
/* Demangled: i2d_CMS_bio_stream */
int i2d_CMS_bio_stream(void);

/* Symbol: PEM_write_bio_CMS_stream */
/* Demangled: PEM_write_bio_CMS_stream */
int PEM_write_bio_CMS_stream(void);

/* Symbol: SMIME_write_CMS */
/* Demangled: SMIME_write_CMS */
int SMIME_write_CMS(void);

/* Symbol: SMIME_read_CMS */
/* Demangled: SMIME_read_CMS */
int SMIME_read_CMS(void);

/* Symbol: CMS_ContentInfo_print_ctx */
/* Demangled: CMS_ContentInfo_print_ctx */
int CMS_ContentInfo_print_ctx(void);

/* Symbol: CMS_get0_type */
/* Demangled: CMS_get0_type */
int CMS_get0_type(void);

/* Symbol: cms_Data_create */
/* Demangled: cms_Data_create */
int cms_Data_create(void);

/* Symbol: CMS_set_detached */
/* Demangled: CMS_set_detached */
int CMS_set_detached(void);

/* Symbol: cms_content_bio */
/* Demangled: cms_content_bio */
int cms_content_bio(void);

/* Symbol: cms_SignedData_init_bio */
/* Demangled: cms_SignedData_init_bio */
int cms_SignedData_init_bio(void);

/* Symbol: cms_SignedData_final */
/* Demangled: cms_SignedData_final */
int cms_SignedData_final(void);

/* Symbol: CMS_set1_eContentType */
/* Demangled: CMS_set1_eContentType */
int CMS_set1_eContentType(void);

/* Symbol: CMS_is_detached */
/* Demangled: CMS_is_detached */
int CMS_is_detached(void);

/* Symbol: BIO_f_md */
/* Demangled: BIO_f_md */
int BIO_f_md(void);

/* Symbol: EVP_MD_pkey_type */
/* Demangled: EVP_MD_pkey_type */
int EVP_MD_pkey_type(void);

/* Symbol: EVP_MD_CTX_copy_ex */
/* Demangled: EVP_MD_CTX_copy_ex */
int EVP_MD_CTX_copy_ex(void);

/* Symbol: CMS_add0_CertificateChoices */
/* Demangled: CMS_add0_CertificateChoices */
int CMS_add0_CertificateChoices(void);

/* Symbol: CMS_add0_cert */
/* Demangled: CMS_add0_cert */
int CMS_add0_cert(void);

/* Symbol: X509_cmp */
/* Demangled: X509_cmp */
int X509_cmp(void);

/* Symbol: CMS_add1_cert */
/* Demangled: CMS_add1_cert */
int CMS_add1_cert(void);

/* Symbol: CMS_add0_RevocationInfoChoice */
/* Demangled: CMS_add0_RevocationInfoChoice */
int CMS_add0_RevocationInfoChoice(void);

/* Symbol: CMS_add0_crl */
/* Demangled: CMS_add0_crl */
int CMS_add0_crl(void);

/* Symbol: CMS_add1_crl */
/* Demangled: CMS_add1_crl */
int CMS_add1_crl(void);

/* Symbol: CMS_get1_certs */
/* Demangled: CMS_get1_certs */
int CMS_get1_certs(void);

/* Symbol: CMS_get1_crls */
/* Demangled: CMS_get1_crls */
int CMS_get1_crls(void);

/* Symbol: CMS_RecipientInfo_set0_password */
/* Demangled: CMS_RecipientInfo_set0_password */
int CMS_RecipientInfo_set0_password(void);

/* Symbol: CMS_add0_recipient_password */
/* Demangled: CMS_add0_recipient_password */
int CMS_add0_recipient_password(void);

/* Symbol: EVP_CIPHER_CTX_set_padding */
/* Demangled: EVP_CIPHER_CTX_set_padding */
int EVP_CIPHER_CTX_set_padding(void);

/* Symbol: EVP_PBE_CipherInit */
/* Demangled: EVP_PBE_CipherInit */
int EVP_PBE_CipherInit(void);

/* Symbol: CMS_SignedData_init */
/* Demangled: CMS_SignedData_init */
int CMS_SignedData_init(void);

/* Symbol: CMS_add1_signer */
/* Demangled: CMS_add1_signer */
int CMS_add1_signer(void);

/* Symbol: X509_check_private_key */
/* Demangled: X509_check_private_key */
int X509_check_private_key(void);

/* Symbol: EVP_PKEY_get_default_digest_nid */
/* Demangled: EVP_PKEY_get_default_digest_nid */
int EVP_PKEY_get_default_digest_nid(void);

/* Symbol: CMS_add_standard_smimecap */
/* Demangled: CMS_add_standard_smimecap */
int CMS_add_standard_smimecap(void);

/* Symbol: CMS_add_smimecap */
/* Demangled: CMS_add_smimecap */
int CMS_add_smimecap(void);

/* Symbol: CMS_SignerInfo_sign */
/* Demangled: CMS_SignerInfo_sign */
int CMS_SignerInfo_sign(void);

/* Symbol: CMS_add_simple_smimecap */
/* Demangled: CMS_add_simple_smimecap */
int CMS_add_simple_smimecap(void);

/* Symbol: X509_gmtime_adj */
/* Demangled: X509_gmtime_adj */
int X509_gmtime_adj(void);

/* Symbol: CMS_get0_signers */
/* Demangled: CMS_get0_signers */
int CMS_get0_signers(void);

/* Symbol: CMS_SignerInfo_set1_signer_cert */
/* Demangled: CMS_SignerInfo_set1_signer_cert */
int CMS_SignerInfo_set1_signer_cert(void);

/* Symbol: CMS_SignerInfo_get0_signer_id */
/* Demangled: CMS_SignerInfo_get0_signer_id */
int CMS_SignerInfo_get0_signer_id(void);

/* Symbol: CMS_SignerInfo_cert_cmp */
/* Demangled: CMS_SignerInfo_cert_cmp */
int CMS_SignerInfo_cert_cmp(void);

/* Symbol: CMS_set1_signers_certs */
/* Demangled: CMS_set1_signers_certs */
int CMS_set1_signers_certs(void);

/* Symbol: CMS_SignerInfo_get0_algs */
/* Demangled: CMS_SignerInfo_get0_algs */
int CMS_SignerInfo_get0_algs(void);

/* Symbol: CMS_SignerInfo_verify */
/* Demangled: CMS_SignerInfo_verify */
int CMS_SignerInfo_verify(void);

/* Symbol: CMS_SignerInfo_verify_content */
/* Demangled: CMS_SignerInfo_verify_content */
int CMS_SignerInfo_verify_content(void);

/* Symbol: CMS_data */
/* Demangled: CMS_data */
int CMS_data(void);

/* Symbol: CMS_data_create */
/* Demangled: CMS_data_create */
int CMS_data_create(void);

/* Symbol: CMS_final */
/* Demangled: CMS_final */
int CMS_final(void);

/* Symbol: CMS_digest_verify */
/* Demangled: CMS_digest_verify */
int CMS_digest_verify(void);

/* Symbol: CMS_digest_create */
/* Demangled: CMS_digest_create */
int CMS_digest_create(void);

/* Symbol: CMS_EncryptedData_decrypt */
/* Demangled: CMS_EncryptedData_decrypt */
int CMS_EncryptedData_decrypt(void);

/* Symbol: CMS_EncryptedData_encrypt */
/* Demangled: CMS_EncryptedData_encrypt */
int CMS_EncryptedData_encrypt(void);

/* Symbol: CMS_verify */
/* Demangled: CMS_verify */
int CMS_verify(void);

/* Symbol: X509_STORE_CTX_init */
/* Demangled: X509_STORE_CTX_init */
int X509_STORE_CTX_init(void);

/* Symbol: X509_STORE_CTX_set_default */
/* Demangled: X509_STORE_CTX_set_default */
int X509_STORE_CTX_set_default(void);

/* Symbol: X509_STORE_CTX_set0_crls */
/* Demangled: X509_STORE_CTX_set0_crls */
int X509_STORE_CTX_set0_crls(void);

/* Symbol: X509_verify_cert */
/* Demangled: X509_verify_cert */
int X509_verify_cert(void);

/* Symbol: X509_STORE_CTX_cleanup */
/* Demangled: X509_STORE_CTX_cleanup */
int X509_STORE_CTX_cleanup(void);

/* Symbol: X509_STORE_CTX_get_error */
/* Demangled: X509_STORE_CTX_get_error */
int X509_STORE_CTX_get_error(void);

/* Symbol: X509_verify_cert_error_string */
/* Demangled: X509_verify_cert_error_string */
int X509_verify_cert_error_string(void);

/* Symbol: CMS_verify_receipt */
/* Demangled: CMS_verify_receipt */
int CMS_verify_receipt(void);

/* Symbol: CMS_sign */
/* Demangled: CMS_sign */
int CMS_sign(void);

/* Symbol: CMS_sign_receipt */
/* Demangled: CMS_sign_receipt */
int CMS_sign_receipt(void);

/* Symbol: CMS_encrypt */
/* Demangled: CMS_encrypt */
int CMS_encrypt(void);

/* Symbol: CMS_decrypt_set1_pkey */
/* Demangled: CMS_decrypt_set1_pkey */
int CMS_decrypt_set1_pkey(void);

/* Symbol: CMS_decrypt_set1_key */
/* Demangled: CMS_decrypt_set1_key */
int CMS_decrypt_set1_key(void);

/* Symbol: CMS_decrypt_set1_password */
/* Demangled: CMS_decrypt_set1_password */
int CMS_decrypt_set1_password(void);

/* Symbol: CMS_decrypt */
/* Demangled: CMS_decrypt */
int CMS_decrypt(void);

/* Symbol: CMS_uncompress */
/* Demangled: CMS_uncompress */
int CMS_uncompress(void);

/* Symbol: CMS_compress */
/* Demangled: CMS_compress */
int CMS_compress(void);

/* Symbol: COMP_rle */
/* Demangled: COMP_rle */
int COMP_rle(void);

/* Symbol: COMP_zlib */
/* Demangled: COMP_zlib */
int COMP_zlib(void);

/* Symbol: COMP_zlib_cleanup */
/* Demangled: COMP_zlib_cleanup */
int COMP_zlib_cleanup(void);

/* Symbol: ERR_load_COMP_strings */
/* Demangled: ERR_load_COMP_strings */
int ERR_load_COMP_strings(void);

/* Symbol: COMP_CTX_new */
/* Demangled: COMP_CTX_new */
int COMP_CTX_new(void);

/* Symbol: COMP_CTX_free */
/* Demangled: COMP_CTX_free */
int COMP_CTX_free(void);

/* Symbol: COMP_compress_block */
/* Demangled: COMP_compress_block */
int COMP_compress_block(void);

/* Symbol: COMP_expand_block */
/* Demangled: COMP_expand_block */
int COMP_expand_block(void);

/* Symbol: _CONF_get_section */
/* Demangled: _CONF_get_section */
int _CONF_get_section(void);

/* Symbol: lh_retrieve */
/* Demangled: lh_retrieve */
int lh_retrieve(void);

/* Symbol: _CONF_get_section_values */
/* Demangled: _CONF_get_section_values */
int _CONF_get_section_values(void);

/* Symbol: _CONF_add_string */
/* Demangled: _CONF_add_string */
int _CONF_add_string(void);

/* Symbol: lh_insert */
/* Demangled: lh_insert */
int lh_insert(void);

/* Symbol: sk_delete_ptr */
/* Demangled: sk_delete_ptr */
int sk_delete_ptr(void);

/* Symbol: _CONF_get_string */
/* Demangled: _CONF_get_string */
int _CONF_get_string(void);

/* Symbol: _CONF_new_data */
/* Demangled: _CONF_new_data */
int _CONF_new_data(void);

/* Symbol: lh_new */
/* Demangled: lh_new */
int lh_new(void);

/* Symbol: lh_strhash */
/* Demangled: lh_strhash */
int lh_strhash(void);

/* Symbol: _CONF_free_data */
/* Demangled: _CONF_free_data */
int _CONF_free_data(void);

/* Symbol: lh_doall_arg */
/* Demangled: lh_doall_arg */
int lh_doall_arg(void);

/* Symbol: lh_doall */
/* Demangled: lh_doall */
int lh_doall(void);

/* Symbol: lh_free */
/* Demangled: lh_free */
int lh_free(void);

/* Symbol: lh_delete */
/* Demangled: lh_delete */
int lh_delete(void);

/* Symbol: _CONF_new_section */
/* Demangled: _CONF_new_section */
int _CONF_new_section(void);

/* Symbol: NCONF_default */
/* Demangled: NCONF_default */
int NCONF_default(void);

/* Symbol: NCONF_WIN32 */
/* Demangled: NCONF_WIN32 */
int NCONF_WIN32(void);

/* Symbol: CONF_free */
/* Demangled: CONF_free */
int CONF_free(void);

/* Symbol: CONF_def_version */
/* Demangled: CONF_def_version */
extern void* CONF_def_version;

/* Symbol: ERR_load_CONF_strings */
/* Demangled: ERR_load_CONF_strings */
int ERR_load_CONF_strings(void);

/* Symbol: CONF_set_nconf */
/* Demangled: CONF_set_nconf */
int CONF_set_nconf(void);

/* Symbol: CONF_set_default_method */
/* Demangled: CONF_set_default_method */
int CONF_set_default_method(void);

/* Symbol: CONF_load */
/* Demangled: CONF_load */
int CONF_load(void);

/* Symbol: CONF_load_bio */
/* Demangled: CONF_load_bio */
int CONF_load_bio(void);

/* Symbol: CONF_load_fp */
/* Demangled: CONF_load_fp */
int CONF_load_fp(void);

/* Symbol: NCONF_load_bio */
/* Demangled: NCONF_load_bio */
int NCONF_load_bio(void);

/* Symbol: CONF_get_section */
/* Demangled: CONF_get_section */
int CONF_get_section(void);

/* Symbol: CONF_get_string */
/* Demangled: CONF_get_string */
int CONF_get_string(void);

/* Symbol: NCONF_get_string */
/* Demangled: NCONF_get_string */
int NCONF_get_string(void);

/* Symbol: CONF_get_number */
/* Demangled: CONF_get_number */
int CONF_get_number(void);

/* Symbol: NCONF_get_number_e */
/* Demangled: NCONF_get_number_e */
int NCONF_get_number_e(void);

/* Symbol: NCONF_free_data */
/* Demangled: NCONF_free_data */
int NCONF_free_data(void);

/* Symbol: CONF_dump_fp */
/* Demangled: CONF_dump_fp */
int CONF_dump_fp(void);

/* Symbol: CONF_dump_bio */
/* Demangled: CONF_dump_bio */
int CONF_dump_bio(void);

/* Symbol: NCONF_dump_bio */
/* Demangled: NCONF_dump_bio */
int NCONF_dump_bio(void);

/* Symbol: NCONF_new */
/* Demangled: NCONF_new */
int NCONF_new(void);

/* Symbol: NCONF_free */
/* Demangled: NCONF_free */
int NCONF_free(void);

/* Symbol: NCONF_load */
/* Demangled: NCONF_load */
int NCONF_load(void);

/* Symbol: NCONF_load_fp */
/* Demangled: NCONF_load_fp */
int NCONF_load_fp(void);

/* Symbol: NCONF_dump_fp */
/* Demangled: NCONF_dump_fp */
int NCONF_dump_fp(void);

/* Symbol: CONF_version */
/* Demangled: CONF_version */
extern void* CONF_version;

/* Symbol: OPENSSL_load_builtin_modules */
/* Demangled: OPENSSL_load_builtin_modules */
int OPENSSL_load_builtin_modules(void);

/* Symbol: ENGINE_add_conf_module */
/* Demangled: ENGINE_add_conf_module */
int ENGINE_add_conf_module(void);

/* Symbol: EVP_add_alg_module */
/* Demangled: EVP_add_alg_module */
int EVP_add_alg_module(void);

/* Symbol: CONF_modules_load */
/* Demangled: CONF_modules_load */
int CONF_modules_load(void);

/* Symbol: DSO_load */
/* Demangled: DSO_load */
int DSO_load(void);

/* Symbol: DSO_bind_func */
/* Demangled: DSO_bind_func */
int DSO_bind_func(void);

/* Symbol: DSO_free */
/* Demangled: DSO_free */
int DSO_free(void);

/* Symbol: CONF_modules_load_file */
/* Demangled: CONF_modules_load_file */
int CONF_modules_load_file(void);

/* Symbol: CONF_get1_default_config_file */
/* Demangled: CONF_get1_default_config_file */
int CONF_get1_default_config_file(void);

/* Symbol: X509_get_default_cert_area */
/* Demangled: X509_get_default_cert_area */
int X509_get_default_cert_area(void);

/* Symbol: CONF_modules_unload */
/* Demangled: CONF_modules_unload */
int CONF_modules_unload(void);

/* Symbol: CONF_modules_finish */
/* Demangled: CONF_modules_finish */
int CONF_modules_finish(void);

/* Symbol: sk_delete */
/* Demangled: sk_delete */
int sk_delete(void);

/* Symbol: CONF_modules_free */
/* Demangled: CONF_modules_free */
int CONF_modules_free(void);

/* Symbol: CONF_imodule_get_name */
/* Demangled: CONF_imodule_get_name */
int CONF_imodule_get_name(void);

/* Symbol: CONF_imodule_get_usr_data */
/* Demangled: CONF_imodule_get_usr_data */
int CONF_imodule_get_usr_data(void);

/* Symbol: CONF_imodule_set_usr_data */
/* Demangled: CONF_imodule_set_usr_data */
int CONF_imodule_set_usr_data(void);

/* Symbol: CONF_imodule_get_module */
/* Demangled: CONF_imodule_get_module */
int CONF_imodule_get_module(void);

/* Symbol: CONF_imodule_get_flags */
/* Demangled: CONF_imodule_get_flags */
int CONF_imodule_get_flags(void);

/* Symbol: CONF_imodule_set_flags */
/* Demangled: CONF_imodule_set_flags */
int CONF_imodule_set_flags(void);

/* Symbol: CONF_module_get_usr_data */
/* Demangled: CONF_module_get_usr_data */
int CONF_module_get_usr_data(void);

/* Symbol: CONF_module_set_usr_data */
/* Demangled: CONF_module_set_usr_data */
int CONF_module_set_usr_data(void);

/* Symbol: OPENSSL_config */
/* Demangled: OPENSSL_config */
int OPENSSL_config(void);

/* Symbol: ENGINE_load_builtin_engines */
/* Demangled: ENGINE_load_builtin_engines */
int ENGINE_load_builtin_engines(void);

/* Symbol: ERR_load_crypto_strings */
/* Demangled: ERR_load_crypto_strings */
int ERR_load_crypto_strings(void);

/* Symbol: OPENSSL_no_config */
/* Demangled: OPENSSL_no_config */
int OPENSSL_no_config(void);

/* Symbol: ERR_load_CRYPTO_strings */
/* Demangled: ERR_load_CRYPTO_strings */
int ERR_load_CRYPTO_strings(void);

/* Symbol: CRYPTO_get_new_lockid */
/* Demangled: CRYPTO_get_new_lockid */
int CRYPTO_get_new_lockid(void);

/* Symbol: CRYPTO_num_locks */
/* Demangled: CRYPTO_num_locks */
int CRYPTO_num_locks(void);

/* Symbol: CRYPTO_get_new_dynlockid */
/* Demangled: CRYPTO_get_new_dynlockid */
int CRYPTO_get_new_dynlockid(void);

/* Symbol: CRYPTO_get_dynlock_value */
/* Demangled: CRYPTO_get_dynlock_value */
int CRYPTO_get_dynlock_value(void);

/* Symbol: CRYPTO_destroy_dynlockid */
/* Demangled: CRYPTO_destroy_dynlockid */
int CRYPTO_destroy_dynlockid(void);

/* Symbol: CRYPTO_get_dynlock_create_callback */
/* Demangled: CRYPTO_get_dynlock_create_callback */
int CRYPTO_get_dynlock_create_callback(void);

/* Symbol: CRYPTO_get_dynlock_lock_callback */
/* Demangled: CRYPTO_get_dynlock_lock_callback */
int CRYPTO_get_dynlock_lock_callback(void);

/* Symbol: CRYPTO_get_dynlock_destroy_callback */
/* Demangled: CRYPTO_get_dynlock_destroy_callback */
int CRYPTO_get_dynlock_destroy_callback(void);

/* Symbol: CRYPTO_set_dynlock_create_callback */
/* Demangled: CRYPTO_set_dynlock_create_callback */
int CRYPTO_set_dynlock_create_callback(void);

/* Symbol: CRYPTO_set_dynlock_lock_callback */
/* Demangled: CRYPTO_set_dynlock_lock_callback */
int CRYPTO_set_dynlock_lock_callback(void);

/* Symbol: CRYPTO_set_dynlock_destroy_callback */
/* Demangled: CRYPTO_set_dynlock_destroy_callback */
int CRYPTO_set_dynlock_destroy_callback(void);

/* Symbol: CRYPTO_get_locking_callback */
/* Demangled: CRYPTO_get_locking_callback */
int CRYPTO_get_locking_callback(void);

/* Symbol: CRYPTO_get_add_lock_callback */
/* Demangled: CRYPTO_get_add_lock_callback */
int CRYPTO_get_add_lock_callback(void);

/* Symbol: CRYPTO_set_locking_callback */
/* Demangled: CRYPTO_set_locking_callback */
int CRYPTO_set_locking_callback(void);

/* Symbol: OPENSSL_init */
/* Demangled: OPENSSL_init */
int OPENSSL_init(void);

/* Symbol: CRYPTO_set_add_lock_callback */
/* Demangled: CRYPTO_set_add_lock_callback */
int CRYPTO_set_add_lock_callback(void);

/* Symbol: CRYPTO_THREADID_set_numeric */
/* Demangled: CRYPTO_THREADID_set_numeric */
int CRYPTO_THREADID_set_numeric(void);

/* Symbol: CRYPTO_THREADID_set_pointer */
/* Demangled: CRYPTO_THREADID_set_pointer */
int CRYPTO_THREADID_set_pointer(void);

/* Symbol: CRYPTO_THREADID_set_callback */
/* Demangled: CRYPTO_THREADID_set_callback */
int CRYPTO_THREADID_set_callback(void);

/* Symbol: CRYPTO_THREADID_get_callback */
/* Demangled: CRYPTO_THREADID_get_callback */
int CRYPTO_THREADID_get_callback(void);

/* Symbol: CRYPTO_THREADID_cmp */
/* Demangled: CRYPTO_THREADID_cmp */
int CRYPTO_THREADID_cmp(void);

/* Symbol: CRYPTO_THREADID_cpy */
/* Demangled: CRYPTO_THREADID_cpy */
int CRYPTO_THREADID_cpy(void);

/* Symbol: CRYPTO_THREADID_hash */
/* Demangled: CRYPTO_THREADID_hash */
int CRYPTO_THREADID_hash(void);

/* Symbol: CRYPTO_get_id_callback */
/* Demangled: CRYPTO_get_id_callback */
int CRYPTO_get_id_callback(void);

/* Symbol: CRYPTO_set_id_callback */
/* Demangled: CRYPTO_set_id_callback */
int CRYPTO_set_id_callback(void);

/* Symbol: CRYPTO_thread_id */
/* Demangled: CRYPTO_thread_id */
int CRYPTO_thread_id(void);

/* Symbol: OPENSSL_showfatal */
/* Demangled: OPENSSL_showfatal */
int OPENSSL_showfatal(void);

/* Symbol: CRYPTO_get_lock_name */
/* Demangled: CRYPTO_get_lock_name */
int CRYPTO_get_lock_name(void);

/* Symbol: OPENSSL_ia32cap_loc */
/* Demangled: OPENSSL_ia32cap_loc */
int OPENSSL_ia32cap_loc(void);

/* Symbol: OPENSSL_cpuid_setup */
/* Demangled: OPENSSL_cpuid_setup */
int OPENSSL_cpuid_setup(void);

/* Symbol: OPENSSL_isservice */
/* Demangled: OPENSSL_isservice */
int OPENSSL_isservice(void);

/* Symbol: OPENSSL_stderr */
/* Demangled: OPENSSL_stderr */
int OPENSSL_stderr(void);

/* Symbol: CRYPTO_memcmp */
/* Demangled: CRYPTO_memcmp */
int CRYPTO_memcmp(void);

/* Symbol: OPENSSL_NONPIC_relocated */
/* Demangled: OPENSSL_NONPIC_relocated */
extern void* OPENSSL_NONPIC_relocated;

/* Symbol: SSLeay_version */
/* Demangled: SSLeay_version */
int SSLeay_version(void);

/* Symbol: SSLeay */
/* Demangled: SSLeay */
int SSLeay(void);

/* Symbol: DES_cbc_cksum */
/* Demangled: DES_cbc_cksum */
int DES_cbc_cksum(void);

/* Symbol: DES_encrypt1 */
/* Demangled: DES_encrypt1 */
int DES_encrypt1(void);

/* Symbol: DES_cbc_encrypt */
/* Demangled: DES_cbc_encrypt */
int DES_cbc_encrypt(void);

/* Symbol: DES_ede3_cfb64_encrypt */
/* Demangled: DES_ede3_cfb64_encrypt */
int DES_ede3_cfb64_encrypt(void);

/* Symbol: DES_encrypt3 */
/* Demangled: DES_encrypt3 */
int DES_encrypt3(void);

/* Symbol: DES_ede3_cfb_encrypt */
/* Demangled: DES_ede3_cfb_encrypt */
int DES_ede3_cfb_encrypt(void);

/* Symbol: DES_cfb64_encrypt */
/* Demangled: DES_cfb64_encrypt */
int DES_cfb64_encrypt(void);

/* Symbol: DES_cfb_encrypt */
/* Demangled: DES_cfb_encrypt */
int DES_cfb_encrypt(void);

/* Symbol: DES_SPtrans */
/* Demangled: DES_SPtrans */
extern void* DES_SPtrans;

/* Symbol: DES_encrypt2 */
/* Demangled: DES_encrypt2 */
int DES_encrypt2(void);

/* Symbol: DES_decrypt3 */
/* Demangled: DES_decrypt3 */
int DES_decrypt3(void);

/* Symbol: DES_ncbc_encrypt */
/* Demangled: DES_ncbc_encrypt */
int DES_ncbc_encrypt(void);

/* Symbol: DES_ede3_cbc_encrypt */
/* Demangled: DES_ede3_cbc_encrypt */
int DES_ede3_cbc_encrypt(void);

/* Symbol: _ossl_old_des_options */
/* Demangled: _ossl_old_des_options */
int _ossl_old_des_options(void);

/* Symbol: DES_options */
/* Demangled: DES_options */
int DES_options(void);

/* Symbol: _ossl_old_des_ecb3_encrypt */
/* Demangled: _ossl_old_des_ecb3_encrypt */
int _ossl_old_des_ecb3_encrypt(void);

/* Symbol: DES_ecb3_encrypt */
/* Demangled: DES_ecb3_encrypt */
int DES_ecb3_encrypt(void);

/* Symbol: _ossl_old_des_cbc_cksum */
/* Demangled: _ossl_old_des_cbc_cksum */
int _ossl_old_des_cbc_cksum(void);

/* Symbol: _ossl_old_des_cbc_encrypt */
/* Demangled: _ossl_old_des_cbc_encrypt */
int _ossl_old_des_cbc_encrypt(void);

/* Symbol: _ossl_old_des_ncbc_encrypt */
/* Demangled: _ossl_old_des_ncbc_encrypt */
int _ossl_old_des_ncbc_encrypt(void);

/* Symbol: _ossl_old_des_xcbc_encrypt */
/* Demangled: _ossl_old_des_xcbc_encrypt */
int _ossl_old_des_xcbc_encrypt(void);

/* Symbol: DES_xcbc_encrypt */
/* Demangled: DES_xcbc_encrypt */
int DES_xcbc_encrypt(void);

/* Symbol: _ossl_old_des_cfb_encrypt */
/* Demangled: _ossl_old_des_cfb_encrypt */
int _ossl_old_des_cfb_encrypt(void);

/* Symbol: _ossl_old_des_ecb_encrypt */
/* Demangled: _ossl_old_des_ecb_encrypt */
int _ossl_old_des_ecb_encrypt(void);

/* Symbol: DES_ecb_encrypt */
/* Demangled: DES_ecb_encrypt */
int DES_ecb_encrypt(void);

/* Symbol: _ossl_old_des_encrypt */
/* Demangled: _ossl_old_des_encrypt */
int _ossl_old_des_encrypt(void);

/* Symbol: _ossl_old_des_encrypt2 */
/* Demangled: _ossl_old_des_encrypt2 */
int _ossl_old_des_encrypt2(void);

/* Symbol: _ossl_old_des_encrypt3 */
/* Demangled: _ossl_old_des_encrypt3 */
int _ossl_old_des_encrypt3(void);

/* Symbol: _ossl_old_des_decrypt3 */
/* Demangled: _ossl_old_des_decrypt3 */
int _ossl_old_des_decrypt3(void);

/* Symbol: _ossl_old_des_ede3_cbc_encrypt */
/* Demangled: _ossl_old_des_ede3_cbc_encrypt */
int _ossl_old_des_ede3_cbc_encrypt(void);

/* Symbol: _ossl_old_des_ede3_cfb64_encrypt */
/* Demangled: _ossl_old_des_ede3_cfb64_encrypt */
int _ossl_old_des_ede3_cfb64_encrypt(void);

/* Symbol: _ossl_old_des_ede3_ofb64_encrypt */
/* Demangled: _ossl_old_des_ede3_ofb64_encrypt */
int _ossl_old_des_ede3_ofb64_encrypt(void);

/* Symbol: DES_ede3_ofb64_encrypt */
/* Demangled: DES_ede3_ofb64_encrypt */
int DES_ede3_ofb64_encrypt(void);

/* Symbol: _ossl_old_des_enc_read */
/* Demangled: _ossl_old_des_enc_read */
int _ossl_old_des_enc_read(void);

/* Symbol: DES_enc_read */
/* Demangled: DES_enc_read */
int DES_enc_read(void);

/* Symbol: _ossl_old_des_enc_write */
/* Demangled: _ossl_old_des_enc_write */
int _ossl_old_des_enc_write(void);

/* Symbol: DES_enc_write */
/* Demangled: DES_enc_write */
int DES_enc_write(void);

/* Symbol: _ossl_old_des_fcrypt */
/* Demangled: _ossl_old_des_fcrypt */
int _ossl_old_des_fcrypt(void);

/* Symbol: DES_fcrypt */
/* Demangled: DES_fcrypt */
int DES_fcrypt(void);

/* Symbol: _ossl_old_des_crypt */
/* Demangled: _ossl_old_des_crypt */
int _ossl_old_des_crypt(void);

/* Symbol: DES_crypt */
/* Demangled: DES_crypt */
int DES_crypt(void);

/* Symbol: _ossl_old_crypt */
/* Demangled: _ossl_old_crypt */
int _ossl_old_crypt(void);

/* Symbol: _ossl_old_des_ofb_encrypt */
/* Demangled: _ossl_old_des_ofb_encrypt */
int _ossl_old_des_ofb_encrypt(void);

/* Symbol: DES_ofb_encrypt */
/* Demangled: DES_ofb_encrypt */
int DES_ofb_encrypt(void);

/* Symbol: _ossl_old_des_pcbc_encrypt */
/* Demangled: _ossl_old_des_pcbc_encrypt */
int _ossl_old_des_pcbc_encrypt(void);

/* Symbol: DES_pcbc_encrypt */
/* Demangled: DES_pcbc_encrypt */
int DES_pcbc_encrypt(void);

/* Symbol: _ossl_old_des_quad_cksum */
/* Demangled: _ossl_old_des_quad_cksum */
int _ossl_old_des_quad_cksum(void);

/* Symbol: DES_quad_cksum */
/* Demangled: DES_quad_cksum */
int DES_quad_cksum(void);

/* Symbol: _ossl_old_des_random_seed */
/* Demangled: _ossl_old_des_random_seed */
int _ossl_old_des_random_seed(void);

/* Symbol: RAND_seed */
/* Demangled: RAND_seed */
int RAND_seed(void);

/* Symbol: _ossl_old_des_random_key */
/* Demangled: _ossl_old_des_random_key */
int _ossl_old_des_random_key(void);

/* Symbol: DES_random_key */
/* Demangled: DES_random_key */
int DES_random_key(void);

/* Symbol: _ossl_old_des_read_password */
/* Demangled: _ossl_old_des_read_password */
int _ossl_old_des_read_password(void);

/* Symbol: DES_read_password */
/* Demangled: DES_read_password */
int DES_read_password(void);

/* Symbol: _ossl_old_des_read_2passwords */
/* Demangled: _ossl_old_des_read_2passwords */
int _ossl_old_des_read_2passwords(void);

/* Symbol: DES_read_2passwords */
/* Demangled: DES_read_2passwords */
int DES_read_2passwords(void);

/* Symbol: _ossl_old_des_set_odd_parity */
/* Demangled: _ossl_old_des_set_odd_parity */
int _ossl_old_des_set_odd_parity(void);

/* Symbol: DES_set_odd_parity */
/* Demangled: DES_set_odd_parity */
int DES_set_odd_parity(void);

/* Symbol: _ossl_old_des_is_weak_key */
/* Demangled: _ossl_old_des_is_weak_key */
int _ossl_old_des_is_weak_key(void);

/* Symbol: DES_is_weak_key */
/* Demangled: DES_is_weak_key */
int DES_is_weak_key(void);

/* Symbol: _ossl_old_des_set_key */
/* Demangled: _ossl_old_des_set_key */
int _ossl_old_des_set_key(void);

/* Symbol: DES_set_key */
/* Demangled: DES_set_key */
int DES_set_key(void);

/* Symbol: _ossl_old_des_key_sched */
/* Demangled: _ossl_old_des_key_sched */
int _ossl_old_des_key_sched(void);

/* Symbol: DES_key_sched */
/* Demangled: DES_key_sched */
int DES_key_sched(void);

/* Symbol: _ossl_old_des_string_to_key */
/* Demangled: _ossl_old_des_string_to_key */
int _ossl_old_des_string_to_key(void);

/* Symbol: DES_string_to_key */
/* Demangled: DES_string_to_key */
int DES_string_to_key(void);

/* Symbol: _ossl_old_des_string_to_2keys */
/* Demangled: _ossl_old_des_string_to_2keys */
int _ossl_old_des_string_to_2keys(void);

/* Symbol: DES_string_to_2keys */
/* Demangled: DES_string_to_2keys */
int DES_string_to_2keys(void);

/* Symbol: _ossl_old_des_cfb64_encrypt */
/* Demangled: _ossl_old_des_cfb64_encrypt */
int _ossl_old_des_cfb64_encrypt(void);

/* Symbol: _ossl_old_des_ofb64_encrypt */
/* Demangled: _ossl_old_des_ofb64_encrypt */
int _ossl_old_des_ofb64_encrypt(void);

/* Symbol: DES_ofb64_encrypt */
/* Demangled: DES_ofb64_encrypt */
int DES_ofb64_encrypt(void);

/* Symbol: _ossl_096_des_random_seed */
/* Demangled: _ossl_096_des_random_seed */
int _ossl_096_des_random_seed(void);

/* Symbol: OSSL_libdes_version */
/* Demangled: OSSL_libdes_version */
extern void* OSSL_libdes_version;

/* Symbol: OSSL_DES_version */
/* Demangled: OSSL_DES_version */
extern void* OSSL_DES_version;

/* Symbol: DES_ede3_cbcm_encrypt */
/* Demangled: DES_ede3_cbcm_encrypt */
int DES_ede3_cbcm_encrypt(void);

/* Symbol: _shadow_DES_rw_mode */
/* Demangled: _shadow_DES_rw_mode */
extern void* _shadow_DES_rw_mode;

/* Symbol: DES_set_key_unchecked */
/* Demangled: DES_set_key_unchecked */
int DES_set_key_unchecked(void);

/* Symbol: fcrypt_body */
/* Demangled: fcrypt_body */
int fcrypt_body(void);

/* Symbol: UI_UTIL_read_pw */
/* Demangled: UI_UTIL_read_pw */
int UI_UTIL_read_pw(void);

/* Symbol: _des_crypt */
/* Demangled: _des_crypt */
int _des_crypt(void);

/* Symbol: DES_check_key_parity */
/* Demangled: DES_check_key_parity */
int DES_check_key_parity(void);

/* Symbol: DES_set_key_checked */
/* Demangled: DES_set_key_checked */
int DES_set_key_checked(void);

/* Symbol: _shadow_DES_check_key */
/* Demangled: _shadow_DES_check_key */
extern void* _shadow_DES_check_key;

/* Symbol: DHparams_print */
/* Demangled: DHparams_print */
int DHparams_print(void);

/* Symbol: d2i_DHparams */
/* Demangled: d2i_DHparams */
int d2i_DHparams(void);

/* Symbol: DH_free */
/* Demangled: DH_free */
int DH_free(void);

/* Symbol: i2d_DHparams */
/* Demangled: i2d_DHparams */
int i2d_DHparams(void);

/* Symbol: DH_generate_key */
/* Demangled: DH_generate_key */
int DH_generate_key(void);

/* Symbol: DH_size */
/* Demangled: DH_size */
int DH_size(void);

/* Symbol: DHparams_it */
/* Demangled: DHparams_it */
extern void* DHparams_it;

/* Symbol: DHparams_dup */
/* Demangled: DHparams_dup */
int DHparams_dup(void);

/* Symbol: DH_new */
/* Demangled: DH_new */
int DH_new(void);

/* Symbol: DH_check */
/* Demangled: DH_check */
int DH_check(void);

/* Symbol: DH_check_pub_key */
/* Demangled: DH_check_pub_key */
int DH_check_pub_key(void);

/* Symbol: DH_generate_parameters */
/* Demangled: DH_generate_parameters */
int DH_generate_parameters(void);

/* Symbol: DH_generate_parameters_ex */
/* Demangled: DH_generate_parameters_ex */
int DH_generate_parameters_ex(void);

/* Symbol: ERR_load_DH_strings */
/* Demangled: ERR_load_DH_strings */
int ERR_load_DH_strings(void);

/* Symbol: DH_compute_key */
/* Demangled: DH_compute_key */
int DH_compute_key(void);

/* Symbol: DH_OpenSSL */
/* Demangled: DH_OpenSSL */
int DH_OpenSSL(void);

/* Symbol: DH_set_default_method */
/* Demangled: DH_set_default_method */
int DH_set_default_method(void);

/* Symbol: DH_get_default_method */
/* Demangled: DH_get_default_method */
int DH_get_default_method(void);

/* Symbol: DH_set_method */
/* Demangled: DH_set_method */
int DH_set_method(void);

/* Symbol: DH_new_method */
/* Demangled: DH_new_method */
int DH_new_method(void);

/* Symbol: ENGINE_get_default_DH */
/* Demangled: ENGINE_get_default_DH */
int ENGINE_get_default_DH(void);

/* Symbol: ENGINE_get_DH */
/* Demangled: ENGINE_get_DH */
int ENGINE_get_DH(void);

/* Symbol: DH_up_ref */
/* Demangled: DH_up_ref */
int DH_up_ref(void);

/* Symbol: DH_get_ex_new_index */
/* Demangled: DH_get_ex_new_index */
int DH_get_ex_new_index(void);

/* Symbol: DH_set_ex_data */
/* Demangled: DH_set_ex_data */
int DH_set_ex_data(void);

/* Symbol: DH_get_ex_data */
/* Demangled: DH_get_ex_data */
int DH_get_ex_data(void);

/* Symbol: DH_version */
/* Demangled: DH_version */
extern void* DH_version;

/* Symbol: evp_pkey_set_cb_translate */
/* Demangled: evp_pkey_set_cb_translate */
int evp_pkey_set_cb_translate(void);

/* Symbol: EVP_PKEY_copy_parameters */
/* Demangled: EVP_PKEY_copy_parameters */
int EVP_PKEY_copy_parameters(void);

/* Symbol: dh_pkey_meth */
/* Demangled: dh_pkey_meth */
extern void* dh_pkey_meth;

/* Symbol: d2i_DSAparams */
/* Demangled: d2i_DSAparams */
int d2i_DSAparams(void);

/* Symbol: DSA_new */
/* Demangled: DSA_new */
int DSA_new(void);

/* Symbol: i2d_DSAparams */
/* Demangled: i2d_DSAparams */
int i2d_DSAparams(void);

/* Symbol: DSA_size */
/* Demangled: DSA_size */
int DSA_size(void);

/* Symbol: d2i_DSA_SIG */
/* Demangled: d2i_DSA_SIG */
int d2i_DSA_SIG(void);

/* Symbol: DSA_SIG_free */
/* Demangled: DSA_SIG_free */
int DSA_SIG_free(void);

/* Symbol: PKCS7_SIGNER_INFO_get0_algs */
/* Demangled: PKCS7_SIGNER_INFO_get0_algs */
int PKCS7_SIGNER_INFO_get0_algs(void);

/* Symbol: d2i_DSAPrivateKey */
/* Demangled: d2i_DSAPrivateKey */
int d2i_DSAPrivateKey(void);

/* Symbol: i2d_DSAPrivateKey */
/* Demangled: i2d_DSAPrivateKey */
int i2d_DSAPrivateKey(void);

/* Symbol: DSA_SIG_it */
/* Demangled: DSA_SIG_it */
extern void* DSA_SIG_it;

/* Symbol: i2d_DSA_SIG */
/* Demangled: i2d_DSA_SIG */
int i2d_DSA_SIG(void);

/* Symbol: DSAPrivateKey_it */
/* Demangled: DSAPrivateKey_it */
extern void* DSAPrivateKey_it;

/* Symbol: DSAparams_it */
/* Demangled: DSAparams_it */
extern void* DSAparams_it;

/* Symbol: DSAPublicKey_it */
/* Demangled: DSAPublicKey_it */
extern void* DSAPublicKey_it;

/* Symbol: DSAparams_dup */
/* Demangled: DSAparams_dup */
int DSAparams_dup(void);

/* Symbol: DSA_sign */
/* Demangled: DSA_sign */
int DSA_sign(void);

/* Symbol: DSA_do_sign */
/* Demangled: DSA_do_sign */
int DSA_do_sign(void);

/* Symbol: DSA_verify */
/* Demangled: DSA_verify */
int DSA_verify(void);

/* Symbol: DSA_SIG_new */
/* Demangled: DSA_SIG_new */
int DSA_SIG_new(void);

/* Symbol: DSA_do_verify */
/* Demangled: DSA_do_verify */
int DSA_do_verify(void);

/* Symbol: dsa_pub_internal_it */
/* Demangled: dsa_pub_internal_it */
extern void* dsa_pub_internal_it;

/* Symbol: DSA_generate_parameters */
/* Demangled: DSA_generate_parameters */
int DSA_generate_parameters(void);

/* Symbol: DSA_generate_parameters_ex */
/* Demangled: DSA_generate_parameters_ex */
int DSA_generate_parameters_ex(void);

/* Symbol: ERR_load_DSA_strings */
/* Demangled: ERR_load_DSA_strings */
int ERR_load_DSA_strings(void);

/* Symbol: EVP_sha256 */
/* Demangled: EVP_sha256 */
int EVP_sha256(void);

/* Symbol: dsa_builtin_paramgen */
/* Demangled: dsa_builtin_paramgen */
int dsa_builtin_paramgen(void);

/* Symbol: DSA_generate_key */
/* Demangled: DSA_generate_key */
int DSA_generate_key(void);

/* Symbol: DSA_set_default_method */
/* Demangled: DSA_set_default_method */
int DSA_set_default_method(void);

/* Symbol: DSA_get_default_method */
/* Demangled: DSA_get_default_method */
int DSA_get_default_method(void);

/* Symbol: DSA_OpenSSL */
/* Demangled: DSA_OpenSSL */
int DSA_OpenSSL(void);

/* Symbol: DSA_new_method */
/* Demangled: DSA_new_method */
int DSA_new_method(void);

/* Symbol: ENGINE_get_default_DSA */
/* Demangled: ENGINE_get_default_DSA */
int ENGINE_get_default_DSA(void);

/* Symbol: ENGINE_get_DSA */
/* Demangled: ENGINE_get_DSA */
int ENGINE_get_DSA(void);

/* Symbol: DSA_set_method */
/* Demangled: DSA_set_method */
int DSA_set_method(void);

/* Symbol: DSA_up_ref */
/* Demangled: DSA_up_ref */
int DSA_up_ref(void);

/* Symbol: DSA_get_ex_new_index */
/* Demangled: DSA_get_ex_new_index */
int DSA_get_ex_new_index(void);

/* Symbol: DSA_set_ex_data */
/* Demangled: DSA_set_ex_data */
int DSA_set_ex_data(void);

/* Symbol: DSA_get_ex_data */
/* Demangled: DSA_get_ex_data */
int DSA_get_ex_data(void);

/* Symbol: DSA_dup_DH */
/* Demangled: DSA_dup_DH */
int DSA_dup_DH(void);

/* Symbol: DSA_version */
/* Demangled: DSA_version */
extern void* DSA_version;

/* Symbol: dsa_pkey_meth */
/* Demangled: dsa_pkey_meth */
extern void* dsa_pkey_meth;

/* Symbol: DSA_print_fp */
/* Demangled: DSA_print_fp */
int DSA_print_fp(void);

/* Symbol: DSA_print */
/* Demangled: DSA_print */
int DSA_print(void);

/* Symbol: EVP_PKEY_print_private */
/* Demangled: EVP_PKEY_print_private */
int EVP_PKEY_print_private(void);

/* Symbol: DSAparams_print_fp */
/* Demangled: DSAparams_print_fp */
int DSAparams_print_fp(void);

/* Symbol: DSAparams_print */
/* Demangled: DSAparams_print */
int DSAparams_print(void);

/* Symbol: EVP_PKEY_print_params */
/* Demangled: EVP_PKEY_print_params */
int EVP_PKEY_print_params(void);

/* Symbol: DSA_sign_setup */
/* Demangled: DSA_sign_setup */
int DSA_sign_setup(void);

/* Symbol: DSO_METHOD_dl */
/* Demangled: DSO_METHOD_dl */
int DSO_METHOD_dl(void);

/* Symbol: DSO_METHOD_dlfcn */
/* Demangled: DSO_METHOD_dlfcn */
int DSO_METHOD_dlfcn(void);

/* Symbol: ERR_load_DSO_strings */
/* Demangled: ERR_load_DSO_strings */
int ERR_load_DSO_strings(void);

/* Symbol: DSO_new */
/* Demangled: DSO_new */
int DSO_new(void);

/* Symbol: DSO_new_method */
/* Demangled: DSO_new_method */
int DSO_new_method(void);

/* Symbol: DSO_METHOD_openssl */
/* Demangled: DSO_METHOD_openssl */
int DSO_METHOD_openssl(void);

/* Symbol: DSO_set_default_method */
/* Demangled: DSO_set_default_method */
int DSO_set_default_method(void);

/* Symbol: DSO_get_default_method */
/* Demangled: DSO_get_default_method */
int DSO_get_default_method(void);

/* Symbol: DSO_get_method */
/* Demangled: DSO_get_method */
int DSO_get_method(void);

/* Symbol: DSO_set_method */
/* Demangled: DSO_set_method */
int DSO_set_method(void);

/* Symbol: DSO_flags */
/* Demangled: DSO_flags */
int DSO_flags(void);

/* Symbol: DSO_up_ref */
/* Demangled: DSO_up_ref */
int DSO_up_ref(void);

/* Symbol: DSO_set_filename */
/* Demangled: DSO_set_filename */
int DSO_set_filename(void);

/* Symbol: DSO_ctrl */
/* Demangled: DSO_ctrl */
int DSO_ctrl(void);

/* Symbol: DSO_bind_var */
/* Demangled: DSO_bind_var */
int DSO_bind_var(void);

/* Symbol: DSO_set_name_converter */
/* Demangled: DSO_set_name_converter */
int DSO_set_name_converter(void);

/* Symbol: DSO_get_filename */
/* Demangled: DSO_get_filename */
int DSO_get_filename(void);

/* Symbol: DSO_merge */
/* Demangled: DSO_merge */
int DSO_merge(void);

/* Symbol: DSO_convert_filename */
/* Demangled: DSO_convert_filename */
int DSO_convert_filename(void);

/* Symbol: DSO_get_loaded_filename */
/* Demangled: DSO_get_loaded_filename */
int DSO_get_loaded_filename(void);

/* Symbol: DSO_pathbyaddr */
/* Demangled: DSO_pathbyaddr */
int DSO_pathbyaddr(void);

/* Symbol: DSO_METHOD_null */
/* Demangled: DSO_METHOD_null */
int DSO_METHOD_null(void);

/* Symbol: ec_GF2m_simple_mul */
/* Demangled: ec_GF2m_simple_mul */
int ec_GF2m_simple_mul(void);

/* Symbol: EC_GROUP_have_precompute_mult */
/* Demangled: EC_GROUP_have_precompute_mult */
int EC_GROUP_have_precompute_mult(void);

/* Symbol: ec_wNAF_mul */
/* Demangled: ec_wNAF_mul */
int ec_wNAF_mul(void);

/* Symbol: EC_POINT_new */
/* Demangled: EC_POINT_new */
int EC_POINT_new(void);

/* Symbol: EC_POINT_set_to_infinity */
/* Demangled: EC_POINT_set_to_infinity */
int EC_POINT_set_to_infinity(void);

/* Symbol: EC_POINT_copy */
/* Demangled: EC_POINT_copy */
int EC_POINT_copy(void);

/* Symbol: EC_POINT_free */
/* Demangled: EC_POINT_free */
int EC_POINT_free(void);

/* Symbol: EC_POINT_is_at_infinity */
/* Demangled: EC_POINT_is_at_infinity */
int EC_POINT_is_at_infinity(void);

/* Symbol: ec_GF2m_precompute_mult */
/* Demangled: ec_GF2m_precompute_mult */
int ec_GF2m_precompute_mult(void);

/* Symbol: ec_wNAF_precompute_mult */
/* Demangled: ec_wNAF_precompute_mult */
int ec_wNAF_precompute_mult(void);

/* Symbol: ec_GF2m_have_precompute_mult */
/* Demangled: ec_GF2m_have_precompute_mult */
int ec_GF2m_have_precompute_mult(void);

/* Symbol: ec_wNAF_have_precompute_mult */
/* Demangled: ec_wNAF_have_precompute_mult */
int ec_wNAF_have_precompute_mult(void);

/* Symbol: ec_GF2m_simple_set_compressed_coordinates */
/* Demangled: ec_GF2m_simple_set_compressed_coordinates */
int ec_GF2m_simple_set_compressed_coordinates(void);

/* Symbol: EC_POINT_set_affine_coordinates_GF2m */
/* Demangled: EC_POINT_set_affine_coordinates_GF2m */
int EC_POINT_set_affine_coordinates_GF2m(void);

/* Symbol: ec_GF2m_simple_point2oct */
/* Demangled: ec_GF2m_simple_point2oct */
int ec_GF2m_simple_point2oct(void);

/* Symbol: EC_GROUP_get_degree */
/* Demangled: EC_GROUP_get_degree */
int EC_GROUP_get_degree(void);

/* Symbol: EC_POINT_get_affine_coordinates_GF2m */
/* Demangled: EC_POINT_get_affine_coordinates_GF2m */
int EC_POINT_get_affine_coordinates_GF2m(void);

/* Symbol: ec_GF2m_simple_oct2point */
/* Demangled: ec_GF2m_simple_oct2point */
int ec_GF2m_simple_oct2point(void);

/* Symbol: EC_POINT_set_compressed_coordinates_GF2m */
/* Demangled: EC_POINT_set_compressed_coordinates_GF2m */
int EC_POINT_set_compressed_coordinates_GF2m(void);

/* Symbol: EC_POINT_is_on_curve */
/* Demangled: EC_POINT_is_on_curve */
int EC_POINT_is_on_curve(void);

/* Symbol: EC_GF2m_simple_method */
/* Demangled: EC_GF2m_simple_method */
int EC_GF2m_simple_method(void);

/* Symbol: ec_GF2m_simple_group_init */
/* Demangled: ec_GF2m_simple_group_init */
int ec_GF2m_simple_group_init(void);

/* Symbol: ec_GF2m_simple_group_finish */
/* Demangled: ec_GF2m_simple_group_finish */
int ec_GF2m_simple_group_finish(void);

/* Symbol: ec_GF2m_simple_group_clear_finish */
/* Demangled: ec_GF2m_simple_group_clear_finish */
int ec_GF2m_simple_group_clear_finish(void);

/* Symbol: ec_GF2m_simple_group_copy */
/* Demangled: ec_GF2m_simple_group_copy */
int ec_GF2m_simple_group_copy(void);

/* Symbol: ec_GF2m_simple_group_set_curve */
/* Demangled: ec_GF2m_simple_group_set_curve */
int ec_GF2m_simple_group_set_curve(void);

/* Symbol: ec_GF2m_simple_group_get_curve */
/* Demangled: ec_GF2m_simple_group_get_curve */
int ec_GF2m_simple_group_get_curve(void);

/* Symbol: ec_GF2m_simple_group_get_degree */
/* Demangled: ec_GF2m_simple_group_get_degree */
int ec_GF2m_simple_group_get_degree(void);

/* Symbol: ec_GF2m_simple_group_check_discriminant */
/* Demangled: ec_GF2m_simple_group_check_discriminant */
int ec_GF2m_simple_group_check_discriminant(void);

/* Symbol: ec_GF2m_simple_point_init */
/* Demangled: ec_GF2m_simple_point_init */
int ec_GF2m_simple_point_init(void);

/* Symbol: ec_GF2m_simple_point_finish */
/* Demangled: ec_GF2m_simple_point_finish */
int ec_GF2m_simple_point_finish(void);

/* Symbol: ec_GF2m_simple_point_clear_finish */
/* Demangled: ec_GF2m_simple_point_clear_finish */
int ec_GF2m_simple_point_clear_finish(void);

/* Symbol: ec_GF2m_simple_point_copy */
/* Demangled: ec_GF2m_simple_point_copy */
int ec_GF2m_simple_point_copy(void);

/* Symbol: ec_GF2m_simple_point_set_to_infinity */
/* Demangled: ec_GF2m_simple_point_set_to_infinity */
int ec_GF2m_simple_point_set_to_infinity(void);

/* Symbol: ec_GF2m_simple_point_set_affine_coordinates */
/* Demangled: ec_GF2m_simple_point_set_affine_coordinates */
int ec_GF2m_simple_point_set_affine_coordinates(void);

/* Symbol: ec_GF2m_simple_point_get_affine_coordinates */
/* Demangled: ec_GF2m_simple_point_get_affine_coordinates */
int ec_GF2m_simple_point_get_affine_coordinates(void);

/* Symbol: ec_GF2m_simple_add */
/* Demangled: ec_GF2m_simple_add */
int ec_GF2m_simple_add(void);

/* Symbol: ec_GF2m_simple_dbl */
/* Demangled: ec_GF2m_simple_dbl */
int ec_GF2m_simple_dbl(void);

/* Symbol: ec_GF2m_simple_invert */
/* Demangled: ec_GF2m_simple_invert */
int ec_GF2m_simple_invert(void);

/* Symbol: EC_POINT_make_affine */
/* Demangled: EC_POINT_make_affine */
int EC_POINT_make_affine(void);

/* Symbol: ec_GF2m_simple_is_at_infinity */
/* Demangled: ec_GF2m_simple_is_at_infinity */
int ec_GF2m_simple_is_at_infinity(void);

/* Symbol: ec_GF2m_simple_is_on_curve */
/* Demangled: ec_GF2m_simple_is_on_curve */
int ec_GF2m_simple_is_on_curve(void);

/* Symbol: ec_GF2m_simple_cmp */
/* Demangled: ec_GF2m_simple_cmp */
int ec_GF2m_simple_cmp(void);

/* Symbol: ec_GF2m_simple_make_affine */
/* Demangled: ec_GF2m_simple_make_affine */
int ec_GF2m_simple_make_affine(void);

/* Symbol: ec_GF2m_simple_points_make_affine */
/* Demangled: ec_GF2m_simple_points_make_affine */
int ec_GF2m_simple_points_make_affine(void);

/* Symbol: ec_GF2m_simple_field_mul */
/* Demangled: ec_GF2m_simple_field_mul */
int ec_GF2m_simple_field_mul(void);

/* Symbol: ec_GF2m_simple_field_sqr */
/* Demangled: ec_GF2m_simple_field_sqr */
int ec_GF2m_simple_field_sqr(void);

/* Symbol: ec_GF2m_simple_field_div */
/* Demangled: ec_GF2m_simple_field_div */
int ec_GF2m_simple_field_div(void);

/* Symbol: EC_KEY_get0_group */
/* Demangled: EC_KEY_get0_group */
int EC_KEY_get0_group(void);

/* Symbol: EC_KEY_get0_public_key */
/* Demangled: EC_KEY_get0_public_key */
int EC_KEY_get0_public_key(void);

/* Symbol: EC_POINT_cmp */
/* Demangled: EC_POINT_cmp */
int EC_POINT_cmp(void);

/* Symbol: d2i_ECPrivateKey */
/* Demangled: d2i_ECPrivateKey */
int d2i_ECPrivateKey(void);

/* Symbol: EC_GROUP_get0_generator */
/* Demangled: EC_GROUP_get0_generator */
int EC_GROUP_get0_generator(void);

/* Symbol: EC_KEY_get0_private_key */
/* Demangled: EC_KEY_get0_private_key */
int EC_KEY_get0_private_key(void);

/* Symbol: EC_POINT_mul */
/* Demangled: EC_POINT_mul */
int EC_POINT_mul(void);

/* Symbol: EC_KEY_set_public_key */
/* Demangled: EC_KEY_set_public_key */
int EC_KEY_set_public_key(void);

/* Symbol: EC_KEY_get_enc_flags */
/* Demangled: EC_KEY_get_enc_flags */
int EC_KEY_get_enc_flags(void);

/* Symbol: EC_KEY_set_enc_flags */
/* Demangled: EC_KEY_set_enc_flags */
int EC_KEY_set_enc_flags(void);

/* Symbol: i2d_ECPrivateKey */
/* Demangled: i2d_ECPrivateKey */
int i2d_ECPrivateKey(void);

/* Symbol: ECDSA_size */
/* Demangled: ECDSA_size */
int ECDSA_size(void);

/* Symbol: EC_GROUP_get_order */
/* Demangled: EC_GROUP_get_order */
int EC_GROUP_get_order(void);

/* Symbol: d2i_ECParameters */
/* Demangled: d2i_ECParameters */
int d2i_ECParameters(void);

/* Symbol: i2d_ECParameters */
/* Demangled: i2d_ECParameters */
int i2d_ECParameters(void);

/* Symbol: EC_GROUP_dup */
/* Demangled: EC_GROUP_dup */
int EC_GROUP_dup(void);

/* Symbol: EC_KEY_set_group */
/* Demangled: EC_KEY_set_group */
int EC_KEY_set_group(void);

/* Symbol: EC_GROUP_free */
/* Demangled: EC_GROUP_free */
int EC_GROUP_free(void);

/* Symbol: EC_GROUP_cmp */
/* Demangled: EC_GROUP_cmp */
int EC_GROUP_cmp(void);

/* Symbol: EC_KEY_new */
/* Demangled: EC_KEY_new */
int EC_KEY_new(void);

/* Symbol: EC_GROUP_new_by_curve_name */
/* Demangled: EC_GROUP_new_by_curve_name */
int EC_GROUP_new_by_curve_name(void);

/* Symbol: EC_GROUP_set_asn1_flag */
/* Demangled: EC_GROUP_set_asn1_flag */
int EC_GROUP_set_asn1_flag(void);

/* Symbol: EC_GROUP_get_asn1_flag */
/* Demangled: EC_GROUP_get_asn1_flag */
int EC_GROUP_get_asn1_flag(void);

/* Symbol: EC_GROUP_get_curve_name */
/* Demangled: EC_GROUP_get_curve_name */
int EC_GROUP_get_curve_name(void);

/* Symbol: EC_KEY_get_conv_form */
/* Demangled: EC_KEY_get_conv_form */
int EC_KEY_get_conv_form(void);

/* Symbol: EC_POINT_point2bn */
/* Demangled: EC_POINT_point2bn */
int EC_POINT_point2bn(void);

/* Symbol: ECPKParameters_print */
/* Demangled: ECPKParameters_print */
int ECPKParameters_print(void);

/* Symbol: EC_GROUP_get_basis_type */
/* Demangled: EC_GROUP_get_basis_type */
int EC_GROUP_get_basis_type(void);

/* Symbol: EC_GROUP_method_of */
/* Demangled: EC_GROUP_method_of */
int EC_GROUP_method_of(void);

/* Symbol: EC_METHOD_get_field_type */
/* Demangled: EC_METHOD_get_field_type */
int EC_METHOD_get_field_type(void);

/* Symbol: EC_GROUP_get_trinomial_basis */
/* Demangled: EC_GROUP_get_trinomial_basis */
int EC_GROUP_get_trinomial_basis(void);

/* Symbol: EC_GROUP_get_pentanomial_basis */
/* Demangled: EC_GROUP_get_pentanomial_basis */
int EC_GROUP_get_pentanomial_basis(void);

/* Symbol: X9_62_PENTANOMIAL_new */
/* Demangled: X9_62_PENTANOMIAL_new */
int X9_62_PENTANOMIAL_new(void);

/* Symbol: X9_62_PENTANOMIAL_it */
/* Demangled: X9_62_PENTANOMIAL_it */
extern void* X9_62_PENTANOMIAL_it;

/* Symbol: X9_62_PENTANOMIAL_free */
/* Demangled: X9_62_PENTANOMIAL_free */
int X9_62_PENTANOMIAL_free(void);

/* Symbol: X9_62_CHARACTERISTIC_TWO_new */
/* Demangled: X9_62_CHARACTERISTIC_TWO_new */
int X9_62_CHARACTERISTIC_TWO_new(void);

/* Symbol: X9_62_CHARACTERISTIC_TWO_it */
/* Demangled: X9_62_CHARACTERISTIC_TWO_it */
extern void* X9_62_CHARACTERISTIC_TWO_it;

/* Symbol: X9_62_CHARACTERISTIC_TWO_free */
/* Demangled: X9_62_CHARACTERISTIC_TWO_free */
int X9_62_CHARACTERISTIC_TWO_free(void);

/* Symbol: ECPARAMETERS_new */
/* Demangled: ECPARAMETERS_new */
int ECPARAMETERS_new(void);

/* Symbol: ECPARAMETERS_it */
/* Demangled: ECPARAMETERS_it */
extern void* ECPARAMETERS_it;

/* Symbol: ECPARAMETERS_free */
/* Demangled: ECPARAMETERS_free */
int ECPARAMETERS_free(void);

/* Symbol: d2i_ECPKPARAMETERS */
/* Demangled: d2i_ECPKPARAMETERS */
int d2i_ECPKPARAMETERS(void);

/* Symbol: ECPKPARAMETERS_it */
/* Demangled: ECPKPARAMETERS_it */
extern void* ECPKPARAMETERS_it;

/* Symbol: i2d_ECPKPARAMETERS */
/* Demangled: i2d_ECPKPARAMETERS */
int i2d_ECPKPARAMETERS(void);

/* Symbol: ECPKPARAMETERS_new */
/* Demangled: ECPKPARAMETERS_new */
int ECPKPARAMETERS_new(void);

/* Symbol: ECPKPARAMETERS_free */
/* Demangled: ECPKPARAMETERS_free */
int ECPKPARAMETERS_free(void);

/* Symbol: d2i_EC_PRIVATEKEY */
/* Demangled: d2i_EC_PRIVATEKEY */
int d2i_EC_PRIVATEKEY(void);

/* Symbol: EC_PRIVATEKEY_it */
/* Demangled: EC_PRIVATEKEY_it */
extern void* EC_PRIVATEKEY_it;

/* Symbol: i2d_EC_PRIVATEKEY */
/* Demangled: i2d_EC_PRIVATEKEY */
int i2d_EC_PRIVATEKEY(void);

/* Symbol: EC_PRIVATEKEY_new */
/* Demangled: EC_PRIVATEKEY_new */
int EC_PRIVATEKEY_new(void);

/* Symbol: EC_PRIVATEKEY_free */
/* Demangled: EC_PRIVATEKEY_free */
int EC_PRIVATEKEY_free(void);

/* Symbol: d2i_ECPKParameters */
/* Demangled: d2i_ECPKParameters */
int d2i_ECPKParameters(void);

/* Symbol: EC_GROUP_clear_free */
/* Demangled: EC_GROUP_clear_free */
int EC_GROUP_clear_free(void);

/* Symbol: EC_GROUP_new_curve_GFp */
/* Demangled: EC_GROUP_new_curve_GFp */
int EC_GROUP_new_curve_GFp(void);

/* Symbol: EC_GROUP_set_point_conversion_form */
/* Demangled: EC_GROUP_set_point_conversion_form */
int EC_GROUP_set_point_conversion_form(void);

/* Symbol: EC_POINT_oct2point */
/* Demangled: EC_POINT_oct2point */
int EC_POINT_oct2point(void);

/* Symbol: EC_GROUP_new_curve_GF2m */
/* Demangled: EC_GROUP_new_curve_GF2m */
int EC_GROUP_new_curve_GF2m(void);

/* Symbol: EC_GROUP_set_generator */
/* Demangled: EC_GROUP_set_generator */
int EC_GROUP_set_generator(void);

/* Symbol: i2d_ECPKParameters */
/* Demangled: i2d_ECPKParameters */
int i2d_ECPKParameters(void);

/* Symbol: EC_GROUP_get_curve_GFp */
/* Demangled: EC_GROUP_get_curve_GFp */
int EC_GROUP_get_curve_GFp(void);

/* Symbol: EC_GROUP_get_curve_GF2m */
/* Demangled: EC_GROUP_get_curve_GF2m */
int EC_GROUP_get_curve_GF2m(void);

/* Symbol: EC_GROUP_get_point_conversion_form */
/* Demangled: EC_GROUP_get_point_conversion_form */
int EC_GROUP_get_point_conversion_form(void);

/* Symbol: EC_POINT_point2oct */
/* Demangled: EC_POINT_point2oct */
int EC_POINT_point2oct(void);

/* Symbol: EC_GROUP_get_cofactor */
/* Demangled: EC_GROUP_get_cofactor */
int EC_GROUP_get_cofactor(void);

/* Symbol: EC_POINT_clear_free */
/* Demangled: EC_POINT_clear_free */
int EC_POINT_clear_free(void);

/* Symbol: X9_62_FIELDID_it */
/* Demangled: X9_62_FIELDID_it */
extern void* X9_62_FIELDID_it;

/* Symbol: X9_62_CURVE_it */
/* Demangled: X9_62_CURVE_it */
extern void* X9_62_CURVE_it;

/* Symbol: EC_GROUP_check */
/* Demangled: EC_GROUP_check */
int EC_GROUP_check(void);

/* Symbol: EC_GROUP_check_discriminant */
/* Demangled: EC_GROUP_check_discriminant */
int EC_GROUP_check_discriminant(void);

/* Symbol: EC_GROUP_new */
/* Demangled: EC_GROUP_new */
int EC_GROUP_new(void);

/* Symbol: EC_POINT_set_affine_coordinates_GFp */
/* Demangled: EC_POINT_set_affine_coordinates_GFp */
int EC_POINT_set_affine_coordinates_GFp(void);

/* Symbol: EC_GROUP_set_seed */
/* Demangled: EC_GROUP_set_seed */
int EC_GROUP_set_seed(void);

/* Symbol: EC_GROUP_set_curve_name */
/* Demangled: EC_GROUP_set_curve_name */
int EC_GROUP_set_curve_name(void);

/* Symbol: EC_get_builtin_curves */
/* Demangled: EC_get_builtin_curves */
int EC_get_builtin_curves(void);

/* Symbol: EC_GFp_nist_method */
/* Demangled: EC_GFp_nist_method */
int EC_GFp_nist_method(void);

/* Symbol: EC_GROUP_set_curve_GFp */
/* Demangled: EC_GROUP_set_curve_GFp */
int EC_GROUP_set_curve_GFp(void);

/* Symbol: EC_GFp_mont_method */
/* Demangled: EC_GFp_mont_method */
int EC_GFp_mont_method(void);

/* Symbol: EC_GROUP_set_curve_GF2m */
/* Demangled: EC_GROUP_set_curve_GF2m */
int EC_GROUP_set_curve_GF2m(void);

/* Symbol: ERR_load_EC_strings */
/* Demangled: ERR_load_EC_strings */
int ERR_load_EC_strings(void);

/* Symbol: EC_KEY_new_by_curve_name */
/* Demangled: EC_KEY_new_by_curve_name */
int EC_KEY_new_by_curve_name(void);

/* Symbol: EC_EX_DATA_free_all_data */
/* Demangled: EC_EX_DATA_free_all_data */
int EC_EX_DATA_free_all_data(void);

/* Symbol: EC_KEY_copy */
/* Demangled: EC_KEY_copy */
int EC_KEY_copy(void);

/* Symbol: EC_GROUP_copy */
/* Demangled: EC_GROUP_copy */
int EC_GROUP_copy(void);

/* Symbol: EC_EX_DATA_set_data */
/* Demangled: EC_EX_DATA_set_data */
int EC_EX_DATA_set_data(void);

/* Symbol: EC_KEY_dup */
/* Demangled: EC_KEY_dup */
int EC_KEY_dup(void);

/* Symbol: EC_KEY_up_ref */
/* Demangled: EC_KEY_up_ref */
int EC_KEY_up_ref(void);

/* Symbol: EC_KEY_generate_key */
/* Demangled: EC_KEY_generate_key */
int EC_KEY_generate_key(void);

/* Symbol: EC_KEY_check_key */
/* Demangled: EC_KEY_check_key */
int EC_KEY_check_key(void);

/* Symbol: EC_KEY_set_public_key_affine_coordinates */
/* Demangled: EC_KEY_set_public_key_affine_coordinates */
int EC_KEY_set_public_key_affine_coordinates(void);

/* Symbol: EC_POINT_get_affine_coordinates_GFp */
/* Demangled: EC_POINT_get_affine_coordinates_GFp */
int EC_POINT_get_affine_coordinates_GFp(void);

/* Symbol: EC_POINT_dup */
/* Demangled: EC_POINT_dup */
int EC_POINT_dup(void);

/* Symbol: EC_KEY_set_private_key */
/* Demangled: EC_KEY_set_private_key */
int EC_KEY_set_private_key(void);

/* Symbol: EC_KEY_get_nonce_from_hash */
/* Demangled: EC_KEY_get_nonce_from_hash */
int EC_KEY_get_nonce_from_hash(void);

/* Symbol: EC_KEY_set_nonce_from_hash */
/* Demangled: EC_KEY_set_nonce_from_hash */
int EC_KEY_set_nonce_from_hash(void);

/* Symbol: EC_KEY_set_conv_form */
/* Demangled: EC_KEY_set_conv_form */
int EC_KEY_set_conv_form(void);

/* Symbol: EC_KEY_get_key_method_data */
/* Demangled: EC_KEY_get_key_method_data */
int EC_KEY_get_key_method_data(void);

/* Symbol: EC_EX_DATA_get_data */
/* Demangled: EC_EX_DATA_get_data */
int EC_EX_DATA_get_data(void);

/* Symbol: EC_KEY_insert_key_method_data */
/* Demangled: EC_KEY_insert_key_method_data */
int EC_KEY_insert_key_method_data(void);

/* Symbol: EC_KEY_set_asn1_flag */
/* Demangled: EC_KEY_set_asn1_flag */
int EC_KEY_set_asn1_flag(void);

/* Symbol: EC_KEY_precompute_mult */
/* Demangled: EC_KEY_precompute_mult */
int EC_KEY_precompute_mult(void);

/* Symbol: EC_GROUP_precompute_mult */
/* Demangled: EC_GROUP_precompute_mult */
int EC_GROUP_precompute_mult(void);

/* Symbol: EC_KEY_get_flags */
/* Demangled: EC_KEY_get_flags */
int EC_KEY_get_flags(void);

/* Symbol: EC_KEY_set_flags */
/* Demangled: EC_KEY_set_flags */
int EC_KEY_set_flags(void);

/* Symbol: EC_KEY_clear_flags */
/* Demangled: EC_KEY_clear_flags */
int EC_KEY_clear_flags(void);

/* Symbol: EC_EX_DATA_clear_free_all_data */
/* Demangled: EC_EX_DATA_clear_free_all_data */
int EC_EX_DATA_clear_free_all_data(void);

/* Symbol: EC_GROUP_get0_seed */
/* Demangled: EC_GROUP_get0_seed */
int EC_GROUP_get0_seed(void);

/* Symbol: EC_GROUP_get_seed_len */
/* Demangled: EC_GROUP_get_seed_len */
int EC_GROUP_get_seed_len(void);

/* Symbol: EC_EX_DATA_free_data */
/* Demangled: EC_EX_DATA_free_data */
int EC_EX_DATA_free_data(void);

/* Symbol: EC_EX_DATA_clear_free_data */
/* Demangled: EC_EX_DATA_clear_free_data */
int EC_EX_DATA_clear_free_data(void);

/* Symbol: EC_POINT_method_of */
/* Demangled: EC_POINT_method_of */
int EC_POINT_method_of(void);

/* Symbol: EC_POINT_set_Jprojective_coordinates_GFp */
/* Demangled: EC_POINT_set_Jprojective_coordinates_GFp */
int EC_POINT_set_Jprojective_coordinates_GFp(void);

/* Symbol: EC_POINT_get_Jprojective_coordinates_GFp */
/* Demangled: EC_POINT_get_Jprojective_coordinates_GFp */
int EC_POINT_get_Jprojective_coordinates_GFp(void);

/* Symbol: EC_POINT_add */
/* Demangled: EC_POINT_add */
int EC_POINT_add(void);

/* Symbol: EC_POINT_dbl */
/* Demangled: EC_POINT_dbl */
int EC_POINT_dbl(void);

/* Symbol: EC_POINT_invert */
/* Demangled: EC_POINT_invert */
int EC_POINT_invert(void);

/* Symbol: EC_POINTs_make_affine */
/* Demangled: EC_POINTs_make_affine */
int EC_POINTs_make_affine(void);

/* Symbol: EC_POINTs_mul */
/* Demangled: EC_POINTs_mul */
int EC_POINTs_mul(void);

/* Symbol: EC_POINT_set_compressed_coordinates_GFp */
/* Demangled: EC_POINT_set_compressed_coordinates_GFp */
int EC_POINT_set_compressed_coordinates_GFp(void);

/* Symbol: ec_GFp_simple_set_compressed_coordinates */
/* Demangled: ec_GFp_simple_set_compressed_coordinates */
int ec_GFp_simple_set_compressed_coordinates(void);

/* Symbol: ec_GFp_simple_point2oct */
/* Demangled: ec_GFp_simple_point2oct */
int ec_GFp_simple_point2oct(void);

/* Symbol: ec_GFp_simple_oct2point */
/* Demangled: ec_GFp_simple_oct2point */
int ec_GFp_simple_oct2point(void);

/* Symbol: ECDSA_sign */
/* Demangled: ECDSA_sign */
int ECDSA_sign(void);

/* Symbol: ECDSA_verify */
/* Demangled: ECDSA_verify */
int ECDSA_verify(void);

/* Symbol: ECDH_compute_key */
/* Demangled: ECDH_compute_key */
int ECDH_compute_key(void);

/* Symbol: OBJ_sn2nid */
/* Demangled: OBJ_sn2nid */
int OBJ_sn2nid(void);

/* Symbol: OBJ_ln2nid */
/* Demangled: OBJ_ln2nid */
int OBJ_ln2nid(void);

/* Symbol: ec_pkey_meth */
/* Demangled: ec_pkey_meth */
extern void* ec_pkey_meth;

/* Symbol: EC_POINT_bn2point */
/* Demangled: EC_POINT_bn2point */
int EC_POINT_bn2point(void);

/* Symbol: EC_POINT_point2hex */
/* Demangled: EC_POINT_point2hex */
int EC_POINT_point2hex(void);

/* Symbol: EC_POINT_hex2point */
/* Demangled: EC_POINT_hex2point */
int EC_POINT_hex2point(void);

/* Symbol: ECPKParameters_print_fp */
/* Demangled: ECPKParameters_print_fp */
int ECPKParameters_print_fp(void);

/* Symbol: EC_KEY_print_fp */
/* Demangled: EC_KEY_print_fp */
int EC_KEY_print_fp(void);

/* Symbol: EC_KEY_print */
/* Demangled: EC_KEY_print */
int EC_KEY_print(void);

/* Symbol: ECParameters_print_fp */
/* Demangled: ECParameters_print_fp */
int ECParameters_print_fp(void);

/* Symbol: ECParameters_print */
/* Demangled: ECParameters_print */
int ECParameters_print(void);

/* Symbol: ec_GFp_mont_group_init */
/* Demangled: ec_GFp_mont_group_init */
int ec_GFp_mont_group_init(void);

/* Symbol: ec_GFp_simple_group_init */
/* Demangled: ec_GFp_simple_group_init */
int ec_GFp_simple_group_init(void);

/* Symbol: ec_GFp_mont_group_finish */
/* Demangled: ec_GFp_mont_group_finish */
int ec_GFp_mont_group_finish(void);

/* Symbol: ec_GFp_simple_group_finish */
/* Demangled: ec_GFp_simple_group_finish */
int ec_GFp_simple_group_finish(void);

/* Symbol: ec_GFp_mont_group_clear_finish */
/* Demangled: ec_GFp_mont_group_clear_finish */
int ec_GFp_mont_group_clear_finish(void);

/* Symbol: ec_GFp_simple_group_clear_finish */
/* Demangled: ec_GFp_simple_group_clear_finish */
int ec_GFp_simple_group_clear_finish(void);

/* Symbol: ec_GFp_mont_group_copy */
/* Demangled: ec_GFp_mont_group_copy */
int ec_GFp_mont_group_copy(void);

/* Symbol: ec_GFp_simple_group_copy */
/* Demangled: ec_GFp_simple_group_copy */
int ec_GFp_simple_group_copy(void);

/* Symbol: ec_GFp_mont_group_set_curve */
/* Demangled: ec_GFp_mont_group_set_curve */
int ec_GFp_mont_group_set_curve(void);

/* Symbol: ec_GFp_simple_group_set_curve */
/* Demangled: ec_GFp_simple_group_set_curve */
int ec_GFp_simple_group_set_curve(void);

/* Symbol: ec_GFp_mont_field_mul */
/* Demangled: ec_GFp_mont_field_mul */
int ec_GFp_mont_field_mul(void);

/* Symbol: ec_GFp_mont_field_sqr */
/* Demangled: ec_GFp_mont_field_sqr */
int ec_GFp_mont_field_sqr(void);

/* Symbol: ec_GFp_mont_field_encode */
/* Demangled: ec_GFp_mont_field_encode */
int ec_GFp_mont_field_encode(void);

/* Symbol: ec_GFp_mont_field_decode */
/* Demangled: ec_GFp_mont_field_decode */
int ec_GFp_mont_field_decode(void);

/* Symbol: ec_GFp_mont_field_set_to_one */
/* Demangled: ec_GFp_mont_field_set_to_one */
int ec_GFp_mont_field_set_to_one(void);

/* Symbol: ec_GFp_simple_group_get_curve */
/* Demangled: ec_GFp_simple_group_get_curve */
int ec_GFp_simple_group_get_curve(void);

/* Symbol: ec_GFp_simple_group_get_degree */
/* Demangled: ec_GFp_simple_group_get_degree */
int ec_GFp_simple_group_get_degree(void);

/* Symbol: ec_GFp_simple_group_check_discriminant */
/* Demangled: ec_GFp_simple_group_check_discriminant */
int ec_GFp_simple_group_check_discriminant(void);

/* Symbol: ec_GFp_simple_point_init */
/* Demangled: ec_GFp_simple_point_init */
int ec_GFp_simple_point_init(void);

/* Symbol: ec_GFp_simple_point_finish */
/* Demangled: ec_GFp_simple_point_finish */
int ec_GFp_simple_point_finish(void);

/* Symbol: ec_GFp_simple_point_clear_finish */
/* Demangled: ec_GFp_simple_point_clear_finish */
int ec_GFp_simple_point_clear_finish(void);

/* Symbol: ec_GFp_simple_point_copy */
/* Demangled: ec_GFp_simple_point_copy */
int ec_GFp_simple_point_copy(void);

/* Symbol: ec_GFp_simple_point_set_to_infinity */
/* Demangled: ec_GFp_simple_point_set_to_infinity */
int ec_GFp_simple_point_set_to_infinity(void);

/* Symbol: ec_GFp_simple_set_Jprojective_coordinates_GFp */
/* Demangled: ec_GFp_simple_set_Jprojective_coordinates_GFp */
int ec_GFp_simple_set_Jprojective_coordinates_GFp(void);

/* Symbol: ec_GFp_simple_get_Jprojective_coordinates_GFp */
/* Demangled: ec_GFp_simple_get_Jprojective_coordinates_GFp */
int ec_GFp_simple_get_Jprojective_coordinates_GFp(void);

/* Symbol: ec_GFp_simple_point_set_affine_coordinates */
/* Demangled: ec_GFp_simple_point_set_affine_coordinates */
int ec_GFp_simple_point_set_affine_coordinates(void);

/* Symbol: ec_GFp_simple_point_get_affine_coordinates */
/* Demangled: ec_GFp_simple_point_get_affine_coordinates */
int ec_GFp_simple_point_get_affine_coordinates(void);

/* Symbol: ec_GFp_simple_add */
/* Demangled: ec_GFp_simple_add */
int ec_GFp_simple_add(void);

/* Symbol: ec_GFp_simple_dbl */
/* Demangled: ec_GFp_simple_dbl */
int ec_GFp_simple_dbl(void);

/* Symbol: ec_GFp_simple_invert */
/* Demangled: ec_GFp_simple_invert */
int ec_GFp_simple_invert(void);

/* Symbol: ec_GFp_simple_is_at_infinity */
/* Demangled: ec_GFp_simple_is_at_infinity */
int ec_GFp_simple_is_at_infinity(void);

/* Symbol: ec_GFp_simple_is_on_curve */
/* Demangled: ec_GFp_simple_is_on_curve */
int ec_GFp_simple_is_on_curve(void);

/* Symbol: ec_GFp_simple_cmp */
/* Demangled: ec_GFp_simple_cmp */
int ec_GFp_simple_cmp(void);

/* Symbol: ec_GFp_simple_make_affine */
/* Demangled: ec_GFp_simple_make_affine */
int ec_GFp_simple_make_affine(void);

/* Symbol: ec_GFp_simple_points_make_affine */
/* Demangled: ec_GFp_simple_points_make_affine */
int ec_GFp_simple_points_make_affine(void);

/* Symbol: ec_GFp_nist_group_copy */
/* Demangled: ec_GFp_nist_group_copy */
int ec_GFp_nist_group_copy(void);

/* Symbol: ec_GFp_nist_group_set_curve */
/* Demangled: ec_GFp_nist_group_set_curve */
int ec_GFp_nist_group_set_curve(void);

/* Symbol: ec_GFp_nist_field_mul */
/* Demangled: ec_GFp_nist_field_mul */
int ec_GFp_nist_field_mul(void);

/* Symbol: ec_GFp_nist_field_sqr */
/* Demangled: ec_GFp_nist_field_sqr */
int ec_GFp_nist_field_sqr(void);

/* Symbol: EC_GFp_simple_method */
/* Demangled: EC_GFp_simple_method */
int EC_GFp_simple_method(void);

/* Symbol: ec_GFp_simple_field_mul */
/* Demangled: ec_GFp_simple_field_mul */
int ec_GFp_simple_field_mul(void);

/* Symbol: ec_GFp_simple_field_sqr */
/* Demangled: ec_GFp_simple_field_sqr */
int ec_GFp_simple_field_sqr(void);

/* Symbol: ERR_load_ECDH_strings */
/* Demangled: ERR_load_ECDH_strings */
int ERR_load_ECDH_strings(void);

/* Symbol: ecdh_check */
/* Demangled: ecdh_check */
int ecdh_check(void);

/* Symbol: ECDH_set_default_method */
/* Demangled: ECDH_set_default_method */
int ECDH_set_default_method(void);

/* Symbol: ECDH_get_default_method */
/* Demangled: ECDH_get_default_method */
int ECDH_get_default_method(void);

/* Symbol: ECDH_OpenSSL */
/* Demangled: ECDH_OpenSSL */
int ECDH_OpenSSL(void);

/* Symbol: ECDH_set_method */
/* Demangled: ECDH_set_method */
int ECDH_set_method(void);

/* Symbol: ENGINE_get_default_ECDH */
/* Demangled: ENGINE_get_default_ECDH */
int ENGINE_get_default_ECDH(void);

/* Symbol: ENGINE_get_ECDH */
/* Demangled: ENGINE_get_ECDH */
int ENGINE_get_ECDH(void);

/* Symbol: ECDH_get_ex_new_index */
/* Demangled: ECDH_get_ex_new_index */
int ECDH_get_ex_new_index(void);

/* Symbol: ECDH_set_ex_data */
/* Demangled: ECDH_set_ex_data */
int ECDH_set_ex_data(void);

/* Symbol: ECDH_get_ex_data */
/* Demangled: ECDH_get_ex_data */
int ECDH_get_ex_data(void);

/* Symbol: ECDH_version */
/* Demangled: ECDH_version */
extern void* ECDH_version;

/* Symbol: d2i_ECDSA_SIG */
/* Demangled: d2i_ECDSA_SIG */
int d2i_ECDSA_SIG(void);

/* Symbol: ECDSA_SIG_it */
/* Demangled: ECDSA_SIG_it */
extern void* ECDSA_SIG_it;

/* Symbol: i2d_ECDSA_SIG */
/* Demangled: i2d_ECDSA_SIG */
int i2d_ECDSA_SIG(void);

/* Symbol: ECDSA_SIG_new */
/* Demangled: ECDSA_SIG_new */
int ECDSA_SIG_new(void);

/* Symbol: ECDSA_SIG_free */
/* Demangled: ECDSA_SIG_free */
int ECDSA_SIG_free(void);

/* Symbol: ERR_load_ECDSA_strings */
/* Demangled: ERR_load_ECDSA_strings */
int ERR_load_ECDSA_strings(void);

/* Symbol: ECDSA_set_default_method */
/* Demangled: ECDSA_set_default_method */
int ECDSA_set_default_method(void);

/* Symbol: ECDSA_get_default_method */
/* Demangled: ECDSA_get_default_method */
int ECDSA_get_default_method(void);

/* Symbol: ECDSA_OpenSSL */
/* Demangled: ECDSA_OpenSSL */
int ECDSA_OpenSSL(void);

/* Symbol: ECDSA_set_method */
/* Demangled: ECDSA_set_method */
int ECDSA_set_method(void);

/* Symbol: ecdsa_check */
/* Demangled: ecdsa_check */
int ecdsa_check(void);

/* Symbol: ENGINE_get_default_ECDSA */
/* Demangled: ENGINE_get_default_ECDSA */
int ENGINE_get_default_ECDSA(void);

/* Symbol: ENGINE_get_ECDSA */
/* Demangled: ENGINE_get_ECDSA */
int ENGINE_get_ECDSA(void);

/* Symbol: ECDSA_get_ex_new_index */
/* Demangled: ECDSA_get_ex_new_index */
int ECDSA_get_ex_new_index(void);

/* Symbol: ECDSA_set_ex_data */
/* Demangled: ECDSA_set_ex_data */
int ECDSA_set_ex_data(void);

/* Symbol: ECDSA_get_ex_data */
/* Demangled: ECDSA_get_ex_data */
int ECDSA_get_ex_data(void);

/* Symbol: ECDSA_version */
/* Demangled: ECDSA_version */
extern void* ECDSA_version;

/* Symbol: ECDSA_do_sign */
/* Demangled: ECDSA_do_sign */
int ECDSA_do_sign(void);

/* Symbol: ECDSA_do_sign_ex */
/* Demangled: ECDSA_do_sign_ex */
int ECDSA_do_sign_ex(void);

/* Symbol: ECDSA_sign_ex */
/* Demangled: ECDSA_sign_ex */
int ECDSA_sign_ex(void);

/* Symbol: ECDSA_sign_setup */
/* Demangled: ECDSA_sign_setup */
int ECDSA_sign_setup(void);

/* Symbol: ECDSA_do_verify */
/* Demangled: ECDSA_do_verify */
int ECDSA_do_verify(void);

/* Symbol: ENGINE_load_dynamic */
/* Demangled: ENGINE_load_dynamic */
int ENGINE_load_dynamic(void);

/* Symbol: ENGINE_register_all_complete */
/* Demangled: ENGINE_register_all_complete */
int ENGINE_register_all_complete(void);

/* Symbol: ENGINE_by_id */
/* Demangled: ENGINE_by_id */
int ENGINE_by_id(void);

/* Symbol: ENGINE_ctrl_cmd_string */
/* Demangled: ENGINE_ctrl_cmd_string */
int ENGINE_ctrl_cmd_string(void);

/* Symbol: ENGINE_set_default_string */
/* Demangled: ENGINE_set_default_string */
int ENGINE_set_default_string(void);

/* Symbol: ENGINE_ctrl */
/* Demangled: ENGINE_ctrl */
int ENGINE_ctrl(void);

/* Symbol: ENGINE_cmd_is_executable */
/* Demangled: ENGINE_cmd_is_executable */
int ENGINE_cmd_is_executable(void);

/* Symbol: ENGINE_ctrl_cmd */
/* Demangled: ENGINE_ctrl_cmd */
int ENGINE_ctrl_cmd(void);

/* Symbol: ENGINE_new */
/* Demangled: ENGINE_new */
int ENGINE_new(void);

/* Symbol: ENGINE_set_id */
/* Demangled: ENGINE_set_id */
int ENGINE_set_id(void);

/* Symbol: ENGINE_set_name */
/* Demangled: ENGINE_set_name */
int ENGINE_set_name(void);

/* Symbol: ENGINE_set_init_function */
/* Demangled: ENGINE_set_init_function */
int ENGINE_set_init_function(void);

/* Symbol: ENGINE_set_finish_function */
/* Demangled: ENGINE_set_finish_function */
int ENGINE_set_finish_function(void);

/* Symbol: ENGINE_set_ctrl_function */
/* Demangled: ENGINE_set_ctrl_function */
int ENGINE_set_ctrl_function(void);

/* Symbol: ENGINE_set_flags */
/* Demangled: ENGINE_set_flags */
int ENGINE_set_flags(void);

/* Symbol: ENGINE_set_cmd_defns */
/* Demangled: ENGINE_set_cmd_defns */
int ENGINE_set_cmd_defns(void);

/* Symbol: ENGINE_add */
/* Demangled: ENGINE_add */
int ENGINE_add(void);

/* Symbol: ENGINE_get_ex_new_index */
/* Demangled: ENGINE_get_ex_new_index */
int ENGINE_get_ex_new_index(void);

/* Symbol: ENGINE_get_ex_data */
/* Demangled: ENGINE_get_ex_data */
int ENGINE_get_ex_data(void);

/* Symbol: ENGINE_set_ex_data */
/* Demangled: ENGINE_set_ex_data */
int ENGINE_set_ex_data(void);

/* Symbol: sk_insert */
/* Demangled: sk_insert */
int sk_insert(void);

/* Symbol: ENGINE_get_static_state */
/* Demangled: ENGINE_get_static_state */
int ENGINE_get_static_state(void);

/* Symbol: ERR_get_implementation */
/* Demangled: ERR_get_implementation */
int ERR_get_implementation(void);

/* Symbol: CRYPTO_get_ex_data_implementation */
/* Demangled: CRYPTO_get_ex_data_implementation */
int CRYPTO_get_ex_data_implementation(void);

/* Symbol: CRYPTO_get_mem_functions */
/* Demangled: CRYPTO_get_mem_functions */
int CRYPTO_get_mem_functions(void);

/* Symbol: engine_set_all_null */
/* Demangled: engine_set_all_null */
int engine_set_all_null(void);

/* Symbol: ERR_load_ENGINE_strings */
/* Demangled: ERR_load_ENGINE_strings */
int ERR_load_ENGINE_strings(void);

/* Symbol: ENGINE_set_default */
/* Demangled: ENGINE_set_default */
int ENGINE_set_default(void);

/* Symbol: ENGINE_set_default_ciphers */
/* Demangled: ENGINE_set_default_ciphers */
int ENGINE_set_default_ciphers(void);

/* Symbol: ENGINE_set_default_digests */
/* Demangled: ENGINE_set_default_digests */
int ENGINE_set_default_digests(void);

/* Symbol: ENGINE_set_default_RSA */
/* Demangled: ENGINE_set_default_RSA */
int ENGINE_set_default_RSA(void);

/* Symbol: ENGINE_set_default_DSA */
/* Demangled: ENGINE_set_default_DSA */
int ENGINE_set_default_DSA(void);

/* Symbol: ENGINE_set_default_DH */
/* Demangled: ENGINE_set_default_DH */
int ENGINE_set_default_DH(void);

/* Symbol: ENGINE_set_default_ECDH */
/* Demangled: ENGINE_set_default_ECDH */
int ENGINE_set_default_ECDH(void);

/* Symbol: ENGINE_set_default_ECDSA */
/* Demangled: ENGINE_set_default_ECDSA */
int ENGINE_set_default_ECDSA(void);

/* Symbol: ENGINE_set_default_RAND */
/* Demangled: ENGINE_set_default_RAND */
int ENGINE_set_default_RAND(void);

/* Symbol: ENGINE_set_default_pkey_meths */
/* Demangled: ENGINE_set_default_pkey_meths */
int ENGINE_set_default_pkey_meths(void);

/* Symbol: ENGINE_set_default_pkey_asn1_meths */
/* Demangled: ENGINE_set_default_pkey_asn1_meths */
int ENGINE_set_default_pkey_asn1_meths(void);

/* Symbol: ENGINE_register_complete */
/* Demangled: ENGINE_register_complete */
int ENGINE_register_complete(void);

/* Symbol: ENGINE_register_ciphers */
/* Demangled: ENGINE_register_ciphers */
int ENGINE_register_ciphers(void);

/* Symbol: ENGINE_register_digests */
/* Demangled: ENGINE_register_digests */
int ENGINE_register_digests(void);

/* Symbol: ENGINE_register_RSA */
/* Demangled: ENGINE_register_RSA */
int ENGINE_register_RSA(void);

/* Symbol: ENGINE_register_DSA */
/* Demangled: ENGINE_register_DSA */
int ENGINE_register_DSA(void);

/* Symbol: ENGINE_register_DH */
/* Demangled: ENGINE_register_DH */
int ENGINE_register_DH(void);

/* Symbol: ENGINE_register_ECDH */
/* Demangled: ENGINE_register_ECDH */
int ENGINE_register_ECDH(void);

/* Symbol: ENGINE_register_ECDSA */
/* Demangled: ENGINE_register_ECDSA */
int ENGINE_register_ECDSA(void);

/* Symbol: ENGINE_register_RAND */
/* Demangled: ENGINE_register_RAND */
int ENGINE_register_RAND(void);

/* Symbol: ENGINE_register_pkey_meths */
/* Demangled: ENGINE_register_pkey_meths */
int ENGINE_register_pkey_meths(void);

/* Symbol: ENGINE_get_first */
/* Demangled: ENGINE_get_first */
int ENGINE_get_first(void);

/* Symbol: ENGINE_get_next */
/* Demangled: ENGINE_get_next */
int ENGINE_get_next(void);

/* Symbol: engine_unlocked_init */
/* Demangled: engine_unlocked_init */
int engine_unlocked_init(void);

/* Symbol: engine_unlocked_finish */
/* Demangled: engine_unlocked_finish */
int engine_unlocked_finish(void);

/* Symbol: engine_free_util */
/* Demangled: engine_free_util */
int engine_free_util(void);

/* Symbol: engine_pkey_meths_free */
/* Demangled: engine_pkey_meths_free */
int engine_pkey_meths_free(void);

/* Symbol: engine_pkey_asn1_meths_free */
/* Demangled: engine_pkey_asn1_meths_free */
int engine_pkey_asn1_meths_free(void);

/* Symbol: engine_cleanup_add_first */
/* Demangled: engine_cleanup_add_first */
int engine_cleanup_add_first(void);

/* Symbol: engine_cleanup_add_last */
/* Demangled: engine_cleanup_add_last */
int engine_cleanup_add_last(void);

/* Symbol: ENGINE_cleanup */
/* Demangled: ENGINE_cleanup */
int ENGINE_cleanup(void);

/* Symbol: RAND_set_rand_method */
/* Demangled: RAND_set_rand_method */
int RAND_set_rand_method(void);

/* Symbol: ENGINE_set_destroy_function */
/* Demangled: ENGINE_set_destroy_function */
int ENGINE_set_destroy_function(void);

/* Symbol: ENGINE_get_id */
/* Demangled: ENGINE_get_id */
int ENGINE_get_id(void);

/* Symbol: ENGINE_get_name */
/* Demangled: ENGINE_get_name */
int ENGINE_get_name(void);

/* Symbol: ENGINE_get_destroy_function */
/* Demangled: ENGINE_get_destroy_function */
int ENGINE_get_destroy_function(void);

/* Symbol: ENGINE_get_init_function */
/* Demangled: ENGINE_get_init_function */
int ENGINE_get_init_function(void);

/* Symbol: ENGINE_get_finish_function */
/* Demangled: ENGINE_get_finish_function */
int ENGINE_get_finish_function(void);

/* Symbol: ENGINE_get_ctrl_function */
/* Demangled: ENGINE_get_ctrl_function */
int ENGINE_get_ctrl_function(void);

/* Symbol: ENGINE_get_flags */
/* Demangled: ENGINE_get_flags */
int ENGINE_get_flags(void);

/* Symbol: ENGINE_get_cmd_defns */
/* Demangled: ENGINE_get_cmd_defns */
int ENGINE_get_cmd_defns(void);

/* Symbol: ENGINE_get_last */
/* Demangled: ENGINE_get_last */
int ENGINE_get_last(void);

/* Symbol: ENGINE_get_prev */
/* Demangled: ENGINE_get_prev */
int ENGINE_get_prev(void);

/* Symbol: ENGINE_remove */
/* Demangled: ENGINE_remove */
int ENGINE_remove(void);

/* Symbol: ENGINE_up_ref */
/* Demangled: ENGINE_up_ref */
int ENGINE_up_ref(void);

/* Symbol: ENGINE_set_load_privkey_function */
/* Demangled: ENGINE_set_load_privkey_function */
int ENGINE_set_load_privkey_function(void);

/* Symbol: ENGINE_set_load_pubkey_function */
/* Demangled: ENGINE_set_load_pubkey_function */
int ENGINE_set_load_pubkey_function(void);

/* Symbol: ENGINE_set_load_ssl_client_cert_function */
/* Demangled: ENGINE_set_load_ssl_client_cert_function */
int ENGINE_set_load_ssl_client_cert_function(void);

/* Symbol: ENGINE_get_load_privkey_function */
/* Demangled: ENGINE_get_load_privkey_function */
int ENGINE_get_load_privkey_function(void);

/* Symbol: ENGINE_get_load_pubkey_function */
/* Demangled: ENGINE_get_load_pubkey_function */
int ENGINE_get_load_pubkey_function(void);

/* Symbol: ENGINE_get_ssl_client_cert_function */
/* Demangled: ENGINE_get_ssl_client_cert_function */
int ENGINE_get_ssl_client_cert_function(void);

/* Symbol: ENGINE_load_private_key */
/* Demangled: ENGINE_load_private_key */
int ENGINE_load_private_key(void);

/* Symbol: ENGINE_load_public_key */
/* Demangled: ENGINE_load_public_key */
int ENGINE_load_public_key(void);

/* Symbol: ENGINE_load_ssl_client_cert */
/* Demangled: ENGINE_load_ssl_client_cert */
int ENGINE_load_ssl_client_cert(void);

/* Symbol: ENGINE_get_table_flags */
/* Demangled: ENGINE_get_table_flags */
int ENGINE_get_table_flags(void);

/* Symbol: ENGINE_set_table_flags */
/* Demangled: ENGINE_set_table_flags */
int ENGINE_set_table_flags(void);

/* Symbol: engine_table_register */
/* Demangled: engine_table_register */
int engine_table_register(void);

/* Symbol: engine_table_unregister */
/* Demangled: engine_table_unregister */
int engine_table_unregister(void);

/* Symbol: engine_table_cleanup */
/* Demangled: engine_table_cleanup */
int engine_table_cleanup(void);

/* Symbol: engine_table_select */
/* Demangled: engine_table_select */
int engine_table_select(void);

/* Symbol: ERR_set_mark */
/* Demangled: ERR_set_mark */
int ERR_set_mark(void);

/* Symbol: ERR_pop_to_mark */
/* Demangled: ERR_pop_to_mark */
int ERR_pop_to_mark(void);

/* Symbol: engine_table_doall */
/* Demangled: engine_table_doall */
int engine_table_doall(void);

/* Symbol: ENGINE_unregister_pkey_asn1_meths */
/* Demangled: ENGINE_unregister_pkey_asn1_meths */
int ENGINE_unregister_pkey_asn1_meths(void);

/* Symbol: ENGINE_register_pkey_asn1_meths */
/* Demangled: ENGINE_register_pkey_asn1_meths */
int ENGINE_register_pkey_asn1_meths(void);

/* Symbol: ENGINE_register_all_pkey_asn1_meths */
/* Demangled: ENGINE_register_all_pkey_asn1_meths */
int ENGINE_register_all_pkey_asn1_meths(void);

/* Symbol: ENGINE_get_pkey_asn1_meths */
/* Demangled: ENGINE_get_pkey_asn1_meths */
int ENGINE_get_pkey_asn1_meths(void);

/* Symbol: ENGINE_set_pkey_asn1_meths */
/* Demangled: ENGINE_set_pkey_asn1_meths */
int ENGINE_set_pkey_asn1_meths(void);

/* Symbol: ENGINE_get_pkey_asn1_meth_str */
/* Demangled: ENGINE_get_pkey_asn1_meth_str */
int ENGINE_get_pkey_asn1_meth_str(void);

/* Symbol: ENGINE_unregister_ciphers */
/* Demangled: ENGINE_unregister_ciphers */
int ENGINE_unregister_ciphers(void);

/* Symbol: ENGINE_register_all_ciphers */
/* Demangled: ENGINE_register_all_ciphers */
int ENGINE_register_all_ciphers(void);

/* Symbol: ENGINE_get_cipher_engine */
/* Demangled: ENGINE_get_cipher_engine */
int ENGINE_get_cipher_engine(void);

/* Symbol: ENGINE_get_cipher */
/* Demangled: ENGINE_get_cipher */
int ENGINE_get_cipher(void);

/* Symbol: ENGINE_get_ciphers */
/* Demangled: ENGINE_get_ciphers */
int ENGINE_get_ciphers(void);

/* Symbol: ENGINE_set_ciphers */
/* Demangled: ENGINE_set_ciphers */
int ENGINE_set_ciphers(void);

/* Symbol: ENGINE_unregister_DH */
/* Demangled: ENGINE_unregister_DH */
int ENGINE_unregister_DH(void);

/* Symbol: ENGINE_register_all_DH */
/* Demangled: ENGINE_register_all_DH */
int ENGINE_register_all_DH(void);

/* Symbol: ENGINE_set_DH */
/* Demangled: ENGINE_set_DH */
int ENGINE_set_DH(void);

/* Symbol: ENGINE_unregister_digests */
/* Demangled: ENGINE_unregister_digests */
int ENGINE_unregister_digests(void);

/* Symbol: ENGINE_register_all_digests */
/* Demangled: ENGINE_register_all_digests */
int ENGINE_register_all_digests(void);

/* Symbol: ENGINE_get_digest_engine */
/* Demangled: ENGINE_get_digest_engine */
int ENGINE_get_digest_engine(void);

/* Symbol: ENGINE_get_digest */
/* Demangled: ENGINE_get_digest */
int ENGINE_get_digest(void);

/* Symbol: ENGINE_get_digests */
/* Demangled: ENGINE_get_digests */
int ENGINE_get_digests(void);

/* Symbol: ENGINE_set_digests */
/* Demangled: ENGINE_set_digests */
int ENGINE_set_digests(void);

/* Symbol: ENGINE_unregister_DSA */
/* Demangled: ENGINE_unregister_DSA */
int ENGINE_unregister_DSA(void);

/* Symbol: ENGINE_register_all_DSA */
/* Demangled: ENGINE_register_all_DSA */
int ENGINE_register_all_DSA(void);

/* Symbol: ENGINE_set_DSA */
/* Demangled: ENGINE_set_DSA */
int ENGINE_set_DSA(void);

/* Symbol: ENGINE_unregister_ECDH */
/* Demangled: ENGINE_unregister_ECDH */
int ENGINE_unregister_ECDH(void);

/* Symbol: ENGINE_register_all_ECDH */
/* Demangled: ENGINE_register_all_ECDH */
int ENGINE_register_all_ECDH(void);

/* Symbol: ENGINE_set_ECDH */
/* Demangled: ENGINE_set_ECDH */
int ENGINE_set_ECDH(void);

/* Symbol: ENGINE_unregister_ECDSA */
/* Demangled: ENGINE_unregister_ECDSA */
int ENGINE_unregister_ECDSA(void);

/* Symbol: ENGINE_register_all_ECDSA */
/* Demangled: ENGINE_register_all_ECDSA */
int ENGINE_register_all_ECDSA(void);

/* Symbol: ENGINE_set_ECDSA */
/* Demangled: ENGINE_set_ECDSA */
int ENGINE_set_ECDSA(void);

/* Symbol: ENGINE_unregister_pkey_meths */
/* Demangled: ENGINE_unregister_pkey_meths */
int ENGINE_unregister_pkey_meths(void);

/* Symbol: ENGINE_register_all_pkey_meths */
/* Demangled: ENGINE_register_all_pkey_meths */
int ENGINE_register_all_pkey_meths(void);

/* Symbol: ENGINE_get_pkey_meth_engine */
/* Demangled: ENGINE_get_pkey_meth_engine */
int ENGINE_get_pkey_meth_engine(void);

/* Symbol: ENGINE_get_pkey_meth */
/* Demangled: ENGINE_get_pkey_meth */
int ENGINE_get_pkey_meth(void);

/* Symbol: ENGINE_get_pkey_meths */
/* Demangled: ENGINE_get_pkey_meths */
int ENGINE_get_pkey_meths(void);

/* Symbol: ENGINE_set_pkey_meths */
/* Demangled: ENGINE_set_pkey_meths */
int ENGINE_set_pkey_meths(void);

/* Symbol: EVP_PKEY_meth_free */
/* Demangled: EVP_PKEY_meth_free */
int EVP_PKEY_meth_free(void);

/* Symbol: ENGINE_unregister_RAND */
/* Demangled: ENGINE_unregister_RAND */
int ENGINE_unregister_RAND(void);

/* Symbol: ENGINE_register_all_RAND */
/* Demangled: ENGINE_register_all_RAND */
int ENGINE_register_all_RAND(void);

/* Symbol: ENGINE_get_default_RAND */
/* Demangled: ENGINE_get_default_RAND */
int ENGINE_get_default_RAND(void);

/* Symbol: ENGINE_get_RAND */
/* Demangled: ENGINE_get_RAND */
int ENGINE_get_RAND(void);

/* Symbol: ENGINE_set_RAND */
/* Demangled: ENGINE_set_RAND */
int ENGINE_set_RAND(void);

/* Symbol: ENGINE_unregister_RSA */
/* Demangled: ENGINE_unregister_RSA */
int ENGINE_unregister_RSA(void);

/* Symbol: ENGINE_register_all_RSA */
/* Demangled: ENGINE_register_all_RSA */
int ENGINE_register_all_RSA(void);

/* Symbol: ENGINE_get_default_RSA */
/* Demangled: ENGINE_get_default_RSA */
int ENGINE_get_default_RSA(void);

/* Symbol: ENGINE_get_RSA */
/* Demangled: ENGINE_get_RSA */
int ENGINE_get_RSA(void);

/* Symbol: ENGINE_set_RSA */
/* Demangled: ENGINE_set_RSA */
int ENGINE_set_RSA(void);

/* Symbol: ENGINE_unregister_STORE */
/* Demangled: ENGINE_unregister_STORE */
int ENGINE_unregister_STORE(void);

/* Symbol: ENGINE_register_STORE */
/* Demangled: ENGINE_register_STORE */
int ENGINE_register_STORE(void);

/* Symbol: ENGINE_register_all_STORE */
/* Demangled: ENGINE_register_all_STORE */
int ENGINE_register_all_STORE(void);

/* Symbol: ENGINE_get_STORE */
/* Demangled: ENGINE_get_STORE */
int ENGINE_get_STORE(void);

/* Symbol: ENGINE_set_STORE */
/* Demangled: ENGINE_set_STORE */
int ENGINE_set_STORE(void);

/* Symbol: ERR_set_implementation */
/* Demangled: ERR_set_implementation */
int ERR_set_implementation(void);

/* Symbol: ERR_load_ERR_strings */
/* Demangled: ERR_load_ERR_strings */
int ERR_load_ERR_strings(void);

/* Symbol: ERR_unload_strings */
/* Demangled: ERR_unload_strings */
int ERR_unload_strings(void);

/* Symbol: ERR_free_strings */
/* Demangled: ERR_free_strings */
int ERR_free_strings(void);

/* Symbol: ERR_get_state */
/* Demangled: ERR_get_state */
int ERR_get_state(void);

/* Symbol: ERR_get_error */
/* Demangled: ERR_get_error */
int ERR_get_error(void);

/* Symbol: ERR_get_error_line */
/* Demangled: ERR_get_error_line */
int ERR_get_error_line(void);

/* Symbol: ERR_get_error_line_data */
/* Demangled: ERR_get_error_line_data */
int ERR_get_error_line_data(void);

/* Symbol: ERR_peek_error_line */
/* Demangled: ERR_peek_error_line */
int ERR_peek_error_line(void);

/* Symbol: ERR_peek_error_line_data */
/* Demangled: ERR_peek_error_line_data */
int ERR_peek_error_line_data(void);

/* Symbol: ERR_peek_last_error_line */
/* Demangled: ERR_peek_last_error_line */
int ERR_peek_last_error_line(void);

/* Symbol: ERR_peek_last_error_line_data */
/* Demangled: ERR_peek_last_error_line_data */
int ERR_peek_last_error_line_data(void);

/* Symbol: ERR_error_string_n */
/* Demangled: ERR_error_string_n */
int ERR_error_string_n(void);

/* Symbol: ERR_lib_error_string */
/* Demangled: ERR_lib_error_string */
int ERR_lib_error_string(void);

/* Symbol: ERR_reason_error_string */
/* Demangled: ERR_reason_error_string */
int ERR_reason_error_string(void);

/* Symbol: ERR_error_string */
/* Demangled: ERR_error_string */
int ERR_error_string(void);

/* Symbol: ERR_get_string_table */
/* Demangled: ERR_get_string_table */
int ERR_get_string_table(void);

/* Symbol: ERR_get_err_state_table */
/* Demangled: ERR_get_err_state_table */
int ERR_get_err_state_table(void);

/* Symbol: ERR_release_err_state_table */
/* Demangled: ERR_release_err_state_table */
int ERR_release_err_state_table(void);

/* Symbol: ERR_remove_thread_state */
/* Demangled: ERR_remove_thread_state */
int ERR_remove_thread_state(void);

/* Symbol: ERR_remove_state */
/* Demangled: ERR_remove_state */
int ERR_remove_state(void);

/* Symbol: ERR_get_next_error_library */
/* Demangled: ERR_get_next_error_library */
int ERR_get_next_error_library(void);

/* Symbol: ERR_set_error_data */
/* Demangled: ERR_set_error_data */
int ERR_set_error_data(void);

/* Symbol: ERR_add_error_vdata */
/* Demangled: ERR_add_error_vdata */
int ERR_add_error_vdata(void);

/* Symbol: lh_num_items */
/* Demangled: lh_num_items */
int lh_num_items(void);

/* Symbol: ERR_load_RSA_strings */
/* Demangled: ERR_load_RSA_strings */
int ERR_load_RSA_strings(void);

/* Symbol: ERR_load_EVP_strings */
/* Demangled: ERR_load_EVP_strings */
int ERR_load_EVP_strings(void);

/* Symbol: ERR_load_OBJ_strings */
/* Demangled: ERR_load_OBJ_strings */
int ERR_load_OBJ_strings(void);

/* Symbol: ERR_load_PEM_strings */
/* Demangled: ERR_load_PEM_strings */
int ERR_load_PEM_strings(void);

/* Symbol: ERR_load_X509_strings */
/* Demangled: ERR_load_X509_strings */
int ERR_load_X509_strings(void);

/* Symbol: ERR_load_PKCS7_strings */
/* Demangled: ERR_load_PKCS7_strings */
int ERR_load_PKCS7_strings(void);

/* Symbol: ERR_load_X509V3_strings */
/* Demangled: ERR_load_X509V3_strings */
int ERR_load_X509V3_strings(void);

/* Symbol: ERR_load_PKCS12_strings */
/* Demangled: ERR_load_PKCS12_strings */
int ERR_load_PKCS12_strings(void);

/* Symbol: ERR_load_RAND_strings */
/* Demangled: ERR_load_RAND_strings */
int ERR_load_RAND_strings(void);

/* Symbol: ERR_load_TS_strings */
/* Demangled: ERR_load_TS_strings */
int ERR_load_TS_strings(void);

/* Symbol: ERR_load_OCSP_strings */
/* Demangled: ERR_load_OCSP_strings */
int ERR_load_OCSP_strings(void);

/* Symbol: ERR_load_UI_strings */
/* Demangled: ERR_load_UI_strings */
int ERR_load_UI_strings(void);

/* Symbol: ERR_print_errors_cb */
/* Demangled: ERR_print_errors_cb */
int ERR_print_errors_cb(void);

/* Symbol: ERR_print_errors_fp */
/* Demangled: ERR_print_errors_fp */
int ERR_print_errors_fp(void);

/* Symbol: EVP_EncodeInit */
/* Demangled: EVP_EncodeInit */
int EVP_EncodeInit(void);

/* Symbol: EVP_EncodeUpdate */
/* Demangled: EVP_EncodeUpdate */
int EVP_EncodeUpdate(void);

/* Symbol: EVP_EncodeBlock */
/* Demangled: EVP_EncodeBlock */
int EVP_EncodeBlock(void);

/* Symbol: EVP_DecodeInit */
/* Demangled: EVP_DecodeInit */
int EVP_DecodeInit(void);

/* Symbol: EVP_DecodeUpdate */
/* Demangled: EVP_DecodeUpdate */
int EVP_DecodeUpdate(void);

/* Symbol: EVP_DecodeBlock */
/* Demangled: EVP_DecodeBlock */
int EVP_DecodeBlock(void);

/* Symbol: EVP_EncodeFinal */
/* Demangled: EVP_EncodeFinal */
int EVP_EncodeFinal(void);

/* Symbol: BIO_set_cipher */
/* Demangled: BIO_set_cipher */
int BIO_set_cipher(void);

/* Symbol: EVP_CipherUpdate */
/* Demangled: EVP_CipherUpdate */
int EVP_CipherUpdate(void);

/* Symbol: EVP_CipherFinal_ex */
/* Demangled: EVP_CipherFinal_ex */
int EVP_CipherFinal_ex(void);

/* Symbol: EVP_MD_CTX_create */
/* Demangled: EVP_MD_CTX_create */
int EVP_MD_CTX_create(void);

/* Symbol: EVP_MD_CTX_destroy */
/* Demangled: EVP_MD_CTX_destroy */
int EVP_MD_CTX_destroy(void);

/* Symbol: BIO_f_reliable */
/* Demangled: BIO_f_reliable */
int BIO_f_reliable(void);

/* Symbol: OPENSSL_add_all_algorithms_noconf */
/* Demangled: OPENSSL_add_all_algorithms_noconf */
int OPENSSL_add_all_algorithms_noconf(void);

/* Symbol: OpenSSL_add_all_ciphers */
/* Demangled: OpenSSL_add_all_ciphers */
int OpenSSL_add_all_ciphers(void);

/* Symbol: OpenSSL_add_all_digests */
/* Demangled: OpenSSL_add_all_digests */
int OpenSSL_add_all_digests(void);

/* Symbol: EVP_des_cfb64 */
/* Demangled: EVP_des_cfb64 */
int EVP_des_cfb64(void);

/* Symbol: EVP_add_cipher */
/* Demangled: EVP_add_cipher */
int EVP_add_cipher(void);

/* Symbol: EVP_des_cfb1 */
/* Demangled: EVP_des_cfb1 */
int EVP_des_cfb1(void);

/* Symbol: EVP_des_cfb8 */
/* Demangled: EVP_des_cfb8 */
int EVP_des_cfb8(void);

/* Symbol: EVP_des_ede_cfb64 */
/* Demangled: EVP_des_ede_cfb64 */
int EVP_des_ede_cfb64(void);

/* Symbol: EVP_des_ede3_cfb64 */
/* Demangled: EVP_des_ede3_cfb64 */
int EVP_des_ede3_cfb64(void);

/* Symbol: EVP_des_ede3_cfb1 */
/* Demangled: EVP_des_ede3_cfb1 */
int EVP_des_ede3_cfb1(void);

/* Symbol: EVP_des_ede3_cfb8 */
/* Demangled: EVP_des_ede3_cfb8 */
int EVP_des_ede3_cfb8(void);

/* Symbol: EVP_des_ofb */
/* Demangled: EVP_des_ofb */
int EVP_des_ofb(void);

/* Symbol: EVP_des_ede_ofb */
/* Demangled: EVP_des_ede_ofb */
int EVP_des_ede_ofb(void);

/* Symbol: EVP_des_ede3_ofb */
/* Demangled: EVP_des_ede3_ofb */
int EVP_des_ede3_ofb(void);

/* Symbol: EVP_desx_cbc */
/* Demangled: EVP_desx_cbc */
int EVP_desx_cbc(void);

/* Symbol: OBJ_NAME_add */
/* Demangled: OBJ_NAME_add */
int OBJ_NAME_add(void);

/* Symbol: EVP_des_cbc */
/* Demangled: EVP_des_cbc */
int EVP_des_cbc(void);

/* Symbol: EVP_des_ede_cbc */
/* Demangled: EVP_des_ede_cbc */
int EVP_des_ede_cbc(void);

/* Symbol: EVP_des_ede3_cbc */
/* Demangled: EVP_des_ede3_cbc */
int EVP_des_ede3_cbc(void);

/* Symbol: EVP_des_ecb */
/* Demangled: EVP_des_ecb */
int EVP_des_ecb(void);

/* Symbol: EVP_des_ede */
/* Demangled: EVP_des_ede */
int EVP_des_ede(void);

/* Symbol: EVP_des_ede3 */
/* Demangled: EVP_des_ede3 */
int EVP_des_ede3(void);

/* Symbol: EVP_rc4_40 */
/* Demangled: EVP_rc4_40 */
int EVP_rc4_40(void);

/* Symbol: EVP_rc4_hmac_md5 */
/* Demangled: EVP_rc4_hmac_md5 */
int EVP_rc4_hmac_md5(void);

/* Symbol: EVP_rc2_ecb */
/* Demangled: EVP_rc2_ecb */
int EVP_rc2_ecb(void);

/* Symbol: EVP_rc2_cfb64 */
/* Demangled: EVP_rc2_cfb64 */
int EVP_rc2_cfb64(void);

/* Symbol: EVP_rc2_ofb */
/* Demangled: EVP_rc2_ofb */
int EVP_rc2_ofb(void);

/* Symbol: EVP_rc2_cbc */
/* Demangled: EVP_rc2_cbc */
int EVP_rc2_cbc(void);

/* Symbol: EVP_rc2_40_cbc */
/* Demangled: EVP_rc2_40_cbc */
int EVP_rc2_40_cbc(void);

/* Symbol: EVP_rc2_64_cbc */
/* Demangled: EVP_rc2_64_cbc */
int EVP_rc2_64_cbc(void);

/* Symbol: EVP_bf_ecb */
/* Demangled: EVP_bf_ecb */
int EVP_bf_ecb(void);

/* Symbol: EVP_bf_cfb64 */
/* Demangled: EVP_bf_cfb64 */
int EVP_bf_cfb64(void);

/* Symbol: EVP_bf_ofb */
/* Demangled: EVP_bf_ofb */
int EVP_bf_ofb(void);

/* Symbol: EVP_bf_cbc */
/* Demangled: EVP_bf_cbc */
int EVP_bf_cbc(void);

/* Symbol: EVP_aes_128_ecb */
/* Demangled: EVP_aes_128_ecb */
int EVP_aes_128_ecb(void);

/* Symbol: EVP_aes_128_cbc */
/* Demangled: EVP_aes_128_cbc */
int EVP_aes_128_cbc(void);

/* Symbol: EVP_aes_128_cfb128 */
/* Demangled: EVP_aes_128_cfb128 */
int EVP_aes_128_cfb128(void);

/* Symbol: EVP_aes_128_cfb1 */
/* Demangled: EVP_aes_128_cfb1 */
int EVP_aes_128_cfb1(void);

/* Symbol: EVP_aes_128_cfb8 */
/* Demangled: EVP_aes_128_cfb8 */
int EVP_aes_128_cfb8(void);

/* Symbol: EVP_aes_128_ofb */
/* Demangled: EVP_aes_128_ofb */
int EVP_aes_128_ofb(void);

/* Symbol: EVP_aes_128_ctr */
/* Demangled: EVP_aes_128_ctr */
int EVP_aes_128_ctr(void);

/* Symbol: EVP_aes_128_gcm */
/* Demangled: EVP_aes_128_gcm */
int EVP_aes_128_gcm(void);

/* Symbol: EVP_aes_128_xts */
/* Demangled: EVP_aes_128_xts */
int EVP_aes_128_xts(void);

/* Symbol: EVP_aes_192_ecb */
/* Demangled: EVP_aes_192_ecb */
int EVP_aes_192_ecb(void);

/* Symbol: EVP_aes_192_cbc */
/* Demangled: EVP_aes_192_cbc */
int EVP_aes_192_cbc(void);

/* Symbol: EVP_aes_192_cfb128 */
/* Demangled: EVP_aes_192_cfb128 */
int EVP_aes_192_cfb128(void);

/* Symbol: EVP_aes_192_cfb1 */
/* Demangled: EVP_aes_192_cfb1 */
int EVP_aes_192_cfb1(void);

/* Symbol: EVP_aes_192_cfb8 */
/* Demangled: EVP_aes_192_cfb8 */
int EVP_aes_192_cfb8(void);

/* Symbol: EVP_aes_192_ofb */
/* Demangled: EVP_aes_192_ofb */
int EVP_aes_192_ofb(void);

/* Symbol: EVP_aes_192_ctr */
/* Demangled: EVP_aes_192_ctr */
int EVP_aes_192_ctr(void);

/* Symbol: EVP_aes_192_gcm */
/* Demangled: EVP_aes_192_gcm */
int EVP_aes_192_gcm(void);

/* Symbol: EVP_aes_256_ecb */
/* Demangled: EVP_aes_256_ecb */
int EVP_aes_256_ecb(void);

/* Symbol: EVP_aes_256_cbc */
/* Demangled: EVP_aes_256_cbc */
int EVP_aes_256_cbc(void);

/* Symbol: EVP_aes_256_cfb128 */
/* Demangled: EVP_aes_256_cfb128 */
int EVP_aes_256_cfb128(void);

/* Symbol: EVP_aes_256_cfb1 */
/* Demangled: EVP_aes_256_cfb1 */
int EVP_aes_256_cfb1(void);

/* Symbol: EVP_aes_256_cfb8 */
/* Demangled: EVP_aes_256_cfb8 */
int EVP_aes_256_cfb8(void);

/* Symbol: EVP_aes_256_ofb */
/* Demangled: EVP_aes_256_ofb */
int EVP_aes_256_ofb(void);

/* Symbol: EVP_aes_256_ctr */
/* Demangled: EVP_aes_256_ctr */
int EVP_aes_256_ctr(void);

/* Symbol: EVP_aes_256_gcm */
/* Demangled: EVP_aes_256_gcm */
int EVP_aes_256_gcm(void);

/* Symbol: EVP_aes_256_xts */
/* Demangled: EVP_aes_256_xts */
int EVP_aes_256_xts(void);

/* Symbol: EVP_aes_128_cbc_hmac_sha1 */
/* Demangled: EVP_aes_128_cbc_hmac_sha1 */
int EVP_aes_128_cbc_hmac_sha1(void);

/* Symbol: EVP_aes_256_cbc_hmac_sha1 */
/* Demangled: EVP_aes_256_cbc_hmac_sha1 */
int EVP_aes_256_cbc_hmac_sha1(void);

/* Symbol: EVP_md4 */
/* Demangled: EVP_md4 */
int EVP_md4(void);

/* Symbol: EVP_add_digest */
/* Demangled: EVP_add_digest */
int EVP_add_digest(void);

/* Symbol: EVP_dss1 */
/* Demangled: EVP_dss1 */
int EVP_dss1(void);

/* Symbol: EVP_ecdsa */
/* Demangled: EVP_ecdsa */
int EVP_ecdsa(void);

/* Symbol: EVP_sha224 */
/* Demangled: EVP_sha224 */
int EVP_sha224(void);

/* Symbol: EVP_sha384 */
/* Demangled: EVP_sha384 */
int EVP_sha384(void);

/* Symbol: EVP_sha512 */
/* Demangled: EVP_sha512 */
int EVP_sha512(void);

/* Symbol: EVP_DigestInit */
/* Demangled: EVP_DigestInit */
int EVP_DigestInit(void);

/* Symbol: EVP_MD_CTX_clear_flags */
/* Demangled: EVP_MD_CTX_clear_flags */
int EVP_MD_CTX_clear_flags(void);

/* Symbol: EVP_DigestFinal */
/* Demangled: EVP_DigestFinal */
int EVP_DigestFinal(void);

/* Symbol: EVP_MD_CTX_test_flags */
/* Demangled: EVP_MD_CTX_test_flags */
int EVP_MD_CTX_test_flags(void);

/* Symbol: EVP_MD_CTX_copy */
/* Demangled: EVP_MD_CTX_copy */
int EVP_MD_CTX_copy(void);

/* Symbol: EVP_PKEY_CTX_dup */
/* Demangled: EVP_PKEY_CTX_dup */
int EVP_PKEY_CTX_dup(void);

/* Symbol: EVP_aes_128_ccm */
/* Demangled: EVP_aes_128_ccm */
int EVP_aes_128_ccm(void);

/* Symbol: EVP_aes_192_ccm */
/* Demangled: EVP_aes_192_ccm */
int EVP_aes_192_ccm(void);

/* Symbol: EVP_aes_256_ccm */
/* Demangled: EVP_aes_256_ccm */
int EVP_aes_256_ccm(void);

/* Symbol: CRYPTO_ctr128_encrypt_ctr32 */
/* Demangled: CRYPTO_ctr128_encrypt_ctr32 */
int CRYPTO_ctr128_encrypt_ctr32(void);

/* Symbol: CRYPTO_gcm128_init */
/* Demangled: CRYPTO_gcm128_init */
int CRYPTO_gcm128_init(void);

/* Symbol: CRYPTO_gcm128_setiv */
/* Demangled: CRYPTO_gcm128_setiv */
int CRYPTO_gcm128_setiv(void);

/* Symbol: CRYPTO_gcm128_aad */
/* Demangled: CRYPTO_gcm128_aad */
int CRYPTO_gcm128_aad(void);

/* Symbol: CRYPTO_gcm128_encrypt_ctr32 */
/* Demangled: CRYPTO_gcm128_encrypt_ctr32 */
int CRYPTO_gcm128_encrypt_ctr32(void);

/* Symbol: CRYPTO_gcm128_tag */
/* Demangled: CRYPTO_gcm128_tag */
int CRYPTO_gcm128_tag(void);

/* Symbol: CRYPTO_gcm128_decrypt_ctr32 */
/* Demangled: CRYPTO_gcm128_decrypt_ctr32 */
int CRYPTO_gcm128_decrypt_ctr32(void);

/* Symbol: CRYPTO_gcm128_finish */
/* Demangled: CRYPTO_gcm128_finish */
int CRYPTO_gcm128_finish(void);

/* Symbol: CRYPTO_gcm128_encrypt */
/* Demangled: CRYPTO_gcm128_encrypt */
int CRYPTO_gcm128_encrypt(void);

/* Symbol: CRYPTO_gcm128_decrypt */
/* Demangled: CRYPTO_gcm128_decrypt */
int CRYPTO_gcm128_decrypt(void);

/* Symbol: CRYPTO_xts128_encrypt */
/* Demangled: CRYPTO_xts128_encrypt */
int CRYPTO_xts128_encrypt(void);

/* Symbol: CRYPTO_ccm128_init */
/* Demangled: CRYPTO_ccm128_init */
int CRYPTO_ccm128_init(void);

/* Symbol: CRYPTO_ccm128_setiv */
/* Demangled: CRYPTO_ccm128_setiv */
int CRYPTO_ccm128_setiv(void);

/* Symbol: CRYPTO_ccm128_encrypt_ccm64 */
/* Demangled: CRYPTO_ccm128_encrypt_ccm64 */
int CRYPTO_ccm128_encrypt_ccm64(void);

/* Symbol: CRYPTO_ccm128_aad */
/* Demangled: CRYPTO_ccm128_aad */
int CRYPTO_ccm128_aad(void);

/* Symbol: CRYPTO_ccm128_decrypt_ccm64 */
/* Demangled: CRYPTO_ccm128_decrypt_ccm64 */
int CRYPTO_ccm128_decrypt_ccm64(void);

/* Symbol: CRYPTO_ccm128_encrypt */
/* Demangled: CRYPTO_ccm128_encrypt */
int CRYPTO_ccm128_encrypt(void);

/* Symbol: CRYPTO_ccm128_decrypt */
/* Demangled: CRYPTO_ccm128_decrypt */
int CRYPTO_ccm128_decrypt(void);

/* Symbol: CRYPTO_ccm128_tag */
/* Demangled: CRYPTO_ccm128_tag */
int CRYPTO_ccm128_tag(void);

/* Symbol: EVP_CIPHER_set_asn1_iv */
/* Demangled: EVP_CIPHER_set_asn1_iv */
int EVP_CIPHER_set_asn1_iv(void);

/* Symbol: EVP_CIPHER_get_asn1_iv */
/* Demangled: EVP_CIPHER_get_asn1_iv */
int EVP_CIPHER_get_asn1_iv(void);

/* Symbol: EVP_des_ede_ecb */
/* Demangled: EVP_des_ede_ecb */
int EVP_des_ede_ecb(void);

/* Symbol: EVP_des_ede3_ecb */
/* Demangled: EVP_des_ede3_ecb */
int EVP_des_ede3_ecb(void);

/* Symbol: EVP_enc_null */
/* Demangled: EVP_enc_null */
int EVP_enc_null(void);

/* Symbol: EVP_bf_cfb */
/* Demangled: EVP_bf_cfb */
int EVP_bf_cfb(void);

/* Symbol: EVP_des_cfb */
/* Demangled: EVP_des_cfb */
int EVP_des_cfb(void);

/* Symbol: EVP_des_ede3_cfb */
/* Demangled: EVP_des_ede3_cfb */
int EVP_des_ede3_cfb(void);

/* Symbol: EVP_des_ede_cfb */
/* Demangled: EVP_des_ede_cfb */
int EVP_des_ede_cfb(void);

/* Symbol: EVP_rc2_cfb */
/* Demangled: EVP_rc2_cfb */
int EVP_rc2_cfb(void);

/* Symbol: EVP_aes_128_cfb */
/* Demangled: EVP_aes_128_cfb */
int EVP_aes_128_cfb(void);

/* Symbol: EVP_aes_192_cfb */
/* Demangled: EVP_aes_192_cfb */
int EVP_aes_192_cfb(void);

/* Symbol: EVP_aes_256_cfb */
/* Demangled: EVP_aes_256_cfb */
int EVP_aes_256_cfb(void);

/* Symbol: RC2_set_key */
/* Demangled: RC2_set_key */
int RC2_set_key(void);

/* Symbol: RC2_cbc_encrypt */
/* Demangled: RC2_cbc_encrypt */
int RC2_cbc_encrypt(void);

/* Symbol: RC2_cfb64_encrypt */
/* Demangled: RC2_cfb64_encrypt */
int RC2_cfb64_encrypt(void);

/* Symbol: RC2_ofb64_encrypt */
/* Demangled: RC2_ofb64_encrypt */
int RC2_ofb64_encrypt(void);

/* Symbol: RC2_ecb_encrypt */
/* Demangled: RC2_ecb_encrypt */
int RC2_ecb_encrypt(void);

/* Symbol: RC4_set_key */
/* Demangled: RC4_set_key */
int RC4_set_key(void);

/* Symbol: RC4 */
/* Demangled: RC4 */
int RC4(void);

/* Symbol: MD5_Init */
/* Demangled: MD5_Init */
int MD5_Init(void);

/* Symbol: MD5_Update */
/* Demangled: MD5_Update */
int MD5_Update(void);

/* Symbol: MD5_Final */
/* Demangled: MD5_Final */
int MD5_Final(void);

/* Symbol: EVP_DecodeFinal */
/* Demangled: EVP_DecodeFinal */
int EVP_DecodeFinal(void);

/* Symbol: OPENSSL_add_all_algorithms_conf */
/* Demangled: OPENSSL_add_all_algorithms_conf */
int OPENSSL_add_all_algorithms_conf(void);

/* Symbol: EVP_CIPHER_CTX_new */
/* Demangled: EVP_CIPHER_CTX_new */
int EVP_CIPHER_CTX_new(void);

/* Symbol: EVP_CipherInit */
/* Demangled: EVP_CipherInit */
int EVP_CipherInit(void);

/* Symbol: EVP_CIPHER_CTX_flags */
/* Demangled: EVP_CIPHER_CTX_flags */
int EVP_CIPHER_CTX_flags(void);

/* Symbol: EVP_CipherFinal */
/* Demangled: EVP_CipherFinal */
int EVP_CipherFinal(void);

/* Symbol: EVP_EncryptFinal */
/* Demangled: EVP_EncryptFinal */
int EVP_EncryptFinal(void);

/* Symbol: EVP_DecryptFinal */
/* Demangled: EVP_DecryptFinal */
int EVP_DecryptFinal(void);

/* Symbol: EVP_EncryptInit */
/* Demangled: EVP_EncryptInit */
int EVP_EncryptInit(void);

/* Symbol: EVP_DecryptInit */
/* Demangled: EVP_DecryptInit */
int EVP_DecryptInit(void);

/* Symbol: EVP_CIPHER_CTX_free */
/* Demangled: EVP_CIPHER_CTX_free */
int EVP_CIPHER_CTX_free(void);

/* Symbol: EVP_version */
/* Demangled: EVP_version */
extern void* EVP_version;

/* Symbol: EVP_set_pw_prompt */
/* Demangled: EVP_set_pw_prompt */
int EVP_set_pw_prompt(void);

/* Symbol: EVP_get_pw_prompt */
/* Demangled: EVP_get_pw_prompt */
int EVP_get_pw_prompt(void);

/* Symbol: EVP_read_pw_string_min */
/* Demangled: EVP_read_pw_string_min */
int EVP_read_pw_string_min(void);

/* Symbol: UI_new */
/* Demangled: UI_new */
int UI_new(void);

/* Symbol: UI_add_input_string */
/* Demangled: UI_add_input_string */
int UI_add_input_string(void);

/* Symbol: UI_add_verify_string */
/* Demangled: UI_add_verify_string */
int UI_add_verify_string(void);

/* Symbol: UI_process */
/* Demangled: UI_process */
int UI_process(void);

/* Symbol: UI_free */
/* Demangled: UI_free */
int UI_free(void);

/* Symbol: EVP_CIPHER_nid */
/* Demangled: EVP_CIPHER_nid */
int EVP_CIPHER_nid(void);

/* Symbol: EVP_CIPHER_block_size */
/* Demangled: EVP_CIPHER_block_size */
int EVP_CIPHER_block_size(void);

/* Symbol: EVP_CIPHER_flags */
/* Demangled: EVP_CIPHER_flags */
int EVP_CIPHER_flags(void);

/* Symbol: EVP_CIPHER_CTX_get_app_data */
/* Demangled: EVP_CIPHER_CTX_get_app_data */
int EVP_CIPHER_CTX_get_app_data(void);

/* Symbol: EVP_CIPHER_CTX_set_app_data */
/* Demangled: EVP_CIPHER_CTX_set_app_data */
int EVP_CIPHER_CTX_set_app_data(void);

/* Symbol: EVP_CIPHER_CTX_nid */
/* Demangled: EVP_CIPHER_CTX_nid */
int EVP_CIPHER_CTX_nid(void);

/* Symbol: EVP_MD_block_size */
/* Demangled: EVP_MD_block_size */
int EVP_MD_block_size(void);

/* Symbol: EVP_MD_size */
/* Demangled: EVP_MD_size */
int EVP_MD_size(void);

/* Symbol: EVP_MD_flags */
/* Demangled: EVP_MD_flags */
int EVP_MD_flags(void);

/* Symbol: EVP_CIPHER_CTX_set_flags */
/* Demangled: EVP_CIPHER_CTX_set_flags */
int EVP_CIPHER_CTX_set_flags(void);

/* Symbol: EVP_CIPHER_CTX_clear_flags */
/* Demangled: EVP_CIPHER_CTX_clear_flags */
int EVP_CIPHER_CTX_clear_flags(void);

/* Symbol: EVP_CIPHER_CTX_test_flags */
/* Demangled: EVP_CIPHER_CTX_test_flags */
int EVP_CIPHER_CTX_test_flags(void);

/* Symbol: EVP_PBE_find */
/* Demangled: EVP_PBE_find */
int EVP_PBE_find(void);

/* Symbol: EVP_PBE_alg_add_type */
/* Demangled: EVP_PBE_alg_add_type */
int EVP_PBE_alg_add_type(void);

/* Symbol: EVP_PBE_alg_add */
/* Demangled: EVP_PBE_alg_add */
int EVP_PBE_alg_add(void);

/* Symbol: EVP_PBE_cleanup */
/* Demangled: EVP_PBE_cleanup */
int EVP_PBE_cleanup(void);

/* Symbol: PKCS5_PBE_keyivgen */
/* Demangled: PKCS5_PBE_keyivgen */
int PKCS5_PBE_keyivgen(void);

/* Symbol: PKCS5_v2_PBKDF2_keyivgen */
/* Demangled: PKCS5_v2_PBKDF2_keyivgen */
int PKCS5_v2_PBKDF2_keyivgen(void);

/* Symbol: PKCS12_PBE_keyivgen */
/* Demangled: PKCS12_PBE_keyivgen */
int PKCS12_PBE_keyivgen(void);

/* Symbol: PKCS5_v2_PBE_keyivgen */
/* Demangled: PKCS5_v2_PBE_keyivgen */
int PKCS5_v2_PBE_keyivgen(void);

/* Symbol: EVP_PKEY2PKCS8_broken */
/* Demangled: EVP_PKEY2PKCS8_broken */
int EVP_PKEY2PKCS8_broken(void);

/* Symbol: PKCS8_set_broken */
/* Demangled: PKCS8_set_broken */
int PKCS8_set_broken(void);

/* Symbol: EVP_PKEY_get_attr_count */
/* Demangled: EVP_PKEY_get_attr_count */
int EVP_PKEY_get_attr_count(void);

/* Symbol: EVP_PKEY_get_attr_by_NID */
/* Demangled: EVP_PKEY_get_attr_by_NID */
int EVP_PKEY_get_attr_by_NID(void);

/* Symbol: EVP_PKEY_get_attr_by_OBJ */
/* Demangled: EVP_PKEY_get_attr_by_OBJ */
int EVP_PKEY_get_attr_by_OBJ(void);

/* Symbol: EVP_PKEY_get_attr */
/* Demangled: EVP_PKEY_get_attr */
int EVP_PKEY_get_attr(void);

/* Symbol: EVP_PKEY_delete_attr */
/* Demangled: EVP_PKEY_delete_attr */
int EVP_PKEY_delete_attr(void);

/* Symbol: EVP_PKEY_add1_attr */
/* Demangled: EVP_PKEY_add1_attr */
int EVP_PKEY_add1_attr(void);

/* Symbol: EVP_PKEY_add1_attr_by_OBJ */
/* Demangled: EVP_PKEY_add1_attr_by_OBJ */
int EVP_PKEY_add1_attr_by_OBJ(void);

/* Symbol: EVP_PKEY_add1_attr_by_NID */
/* Demangled: EVP_PKEY_add1_attr_by_NID */
int EVP_PKEY_add1_attr_by_NID(void);

/* Symbol: EVP_PKEY_add1_attr_by_txt */
/* Demangled: EVP_PKEY_add1_attr_by_txt */
int EVP_PKEY_add1_attr_by_txt(void);

/* Symbol: EVP_dss */
/* Demangled: EVP_dss */
int EVP_dss(void);

/* Symbol: SHA1_Init */
/* Demangled: SHA1_Init */
int SHA1_Init(void);

/* Symbol: SHA1_Update */
/* Demangled: SHA1_Update */
int SHA1_Update(void);

/* Symbol: SHA1_Final */
/* Demangled: SHA1_Final */
int SHA1_Final(void);

/* Symbol: MD4_Init */
/* Demangled: MD4_Init */
int MD4_Init(void);

/* Symbol: MD4_Update */
/* Demangled: MD4_Update */
int MD4_Update(void);

/* Symbol: MD4_Final */
/* Demangled: MD4_Final */
int MD4_Final(void);

/* Symbol: RSA_sign */
/* Demangled: RSA_sign */
int RSA_sign(void);

/* Symbol: RSA_verify */
/* Demangled: RSA_verify */
int RSA_verify(void);

/* Symbol: EVP_md_null */
/* Demangled: EVP_md_null */
int EVP_md_null(void);

/* Symbol: SHA224_Init */
/* Demangled: SHA224_Init */
int SHA224_Init(void);

/* Symbol: SHA256_Update */
/* Demangled: SHA256_Update */
int SHA256_Update(void);

/* Symbol: SHA256_Final */
/* Demangled: SHA256_Final */
int SHA256_Final(void);

/* Symbol: SHA256_Init */
/* Demangled: SHA256_Init */
int SHA256_Init(void);

/* Symbol: SHA384_Init */
/* Demangled: SHA384_Init */
int SHA384_Init(void);

/* Symbol: EVP_PKEY_verify_init */
/* Demangled: EVP_PKEY_verify_init */
int EVP_PKEY_verify_init(void);

/* Symbol: EVP_PKEY_sign_init */
/* Demangled: EVP_PKEY_sign_init */
int EVP_PKEY_sign_init(void);

/* Symbol: EVP_PKEY_sign */
/* Demangled: EVP_PKEY_sign */
int EVP_PKEY_sign(void);

/* Symbol: EVP_PKEY_verify */
/* Demangled: EVP_PKEY_verify */
int EVP_PKEY_verify(void);

/* Symbol: check_defer */
/* Demangled: check_defer */
int check_defer(void);

/* Symbol: OBJ_NAME_get */
/* Demangled: OBJ_NAME_get */
int OBJ_NAME_get(void);

/* Symbol: EVP_cleanup */
/* Demangled: EVP_cleanup */
int EVP_cleanup(void);

/* Symbol: OBJ_NAME_cleanup */
/* Demangled: OBJ_NAME_cleanup */
int OBJ_NAME_cleanup(void);

/* Symbol: OBJ_sigid_free */
/* Demangled: OBJ_sigid_free */
int OBJ_sigid_free(void);

/* Symbol: obj_cleanup_defer */
/* Demangled: obj_cleanup_defer */
extern void* obj_cleanup_defer;

/* Symbol: EVP_CIPHER_do_all */
/* Demangled: EVP_CIPHER_do_all */
int EVP_CIPHER_do_all(void);

/* Symbol: OBJ_NAME_do_all */
/* Demangled: OBJ_NAME_do_all */
int OBJ_NAME_do_all(void);

/* Symbol: EVP_CIPHER_do_all_sorted */
/* Demangled: EVP_CIPHER_do_all_sorted */
int EVP_CIPHER_do_all_sorted(void);

/* Symbol: OBJ_NAME_do_all_sorted */
/* Demangled: OBJ_NAME_do_all_sorted */
int OBJ_NAME_do_all_sorted(void);

/* Symbol: EVP_MD_do_all */
/* Demangled: EVP_MD_do_all */
int EVP_MD_do_all(void);

/* Symbol: EVP_MD_do_all_sorted */
/* Demangled: EVP_MD_do_all_sorted */
int EVP_MD_do_all_sorted(void);

/* Symbol: PKCS5_PBE_add */
/* Demangled: PKCS5_PBE_add */
int PKCS5_PBE_add(void);

/* Symbol: PKCS5_PBKDF2_HMAC */
/* Demangled: PKCS5_PBKDF2_HMAC */
int PKCS5_PBKDF2_HMAC(void);

/* Symbol: HMAC_CTX_init */
/* Demangled: HMAC_CTX_init */
int HMAC_CTX_init(void);

/* Symbol: HMAC_Init_ex */
/* Demangled: HMAC_Init_ex */
int HMAC_Init_ex(void);

/* Symbol: HMAC_CTX_copy */
/* Demangled: HMAC_CTX_copy */
int HMAC_CTX_copy(void);

/* Symbol: HMAC_Update */
/* Demangled: HMAC_Update */
int HMAC_Update(void);

/* Symbol: HMAC_Final */
/* Demangled: HMAC_Final */
int HMAC_Final(void);

/* Symbol: HMAC_CTX_cleanup */
/* Demangled: HMAC_CTX_cleanup */
int HMAC_CTX_cleanup(void);

/* Symbol: PKCS5_PBKDF2_HMAC_SHA1 */
/* Demangled: PKCS5_PBKDF2_HMAC_SHA1 */
int PKCS5_PBKDF2_HMAC_SHA1(void);

/* Symbol: EVP_PKEY_decrypt_old */
/* Demangled: EVP_PKEY_decrypt_old */
int EVP_PKEY_decrypt_old(void);

/* Symbol: RSA_private_decrypt */
/* Demangled: RSA_private_decrypt */
int RSA_private_decrypt(void);

/* Symbol: EVP_PKEY_encrypt_old */
/* Demangled: EVP_PKEY_encrypt_old */
int EVP_PKEY_encrypt_old(void);

/* Symbol: RSA_public_encrypt */
/* Demangled: RSA_public_encrypt */
int RSA_public_encrypt(void);

/* Symbol: EVP_PKEY_bits */
/* Demangled: EVP_PKEY_bits */
int EVP_PKEY_bits(void);

/* Symbol: EVP_PKEY_save_parameters */
/* Demangled: EVP_PKEY_save_parameters */
int EVP_PKEY_save_parameters(void);

/* Symbol: EVP_PKEY_missing_parameters */
/* Demangled: EVP_PKEY_missing_parameters */
int EVP_PKEY_missing_parameters(void);

/* Symbol: EVP_PKEY_cmp_parameters */
/* Demangled: EVP_PKEY_cmp_parameters */
int EVP_PKEY_cmp_parameters(void);

/* Symbol: EVP_PKEY_cmp */
/* Demangled: EVP_PKEY_cmp */
int EVP_PKEY_cmp(void);

/* Symbol: EVP_PKEY_dup */
/* Demangled: EVP_PKEY_dup */
int EVP_PKEY_dup(void);

/* Symbol: EVP_PKEY_set_type_str */
/* Demangled: EVP_PKEY_set_type_str */
int EVP_PKEY_set_type_str(void);

/* Symbol: EVP_PKEY_get0 */
/* Demangled: EVP_PKEY_get0 */
int EVP_PKEY_get0(void);

/* Symbol: RSA_up_ref */
/* Demangled: RSA_up_ref */
int RSA_up_ref(void);

/* Symbol: EVP_PKEY_set1_DH */
/* Demangled: EVP_PKEY_set1_DH */
int EVP_PKEY_set1_DH(void);

/* Symbol: EVP_PKEY_get1_DH */
/* Demangled: EVP_PKEY_get1_DH */
int EVP_PKEY_get1_DH(void);

/* Symbol: EVP_PKEY_base_id */
/* Demangled: EVP_PKEY_base_id */
int EVP_PKEY_base_id(void);

/* Symbol: EVP_OpenInit */
/* Demangled: EVP_OpenInit */
int EVP_OpenInit(void);

/* Symbol: RSA_size */
/* Demangled: RSA_size */
int RSA_size(void);

/* Symbol: EVP_OpenFinal */
/* Demangled: EVP_OpenFinal */
int EVP_OpenFinal(void);

/* Symbol: EVP_SealInit */
/* Demangled: EVP_SealInit */
int EVP_SealInit(void);

/* Symbol: EVP_SealFinal */
/* Demangled: EVP_SealFinal */
int EVP_SealFinal(void);

/* Symbol: EVP_PKEY_verify_recover_init */
/* Demangled: EVP_PKEY_verify_recover_init */
int EVP_PKEY_verify_recover_init(void);

/* Symbol: EVP_PKEY_verify_recover */
/* Demangled: EVP_PKEY_verify_recover */
int EVP_PKEY_verify_recover(void);

/* Symbol: EVP_PKEY_derive_init */
/* Demangled: EVP_PKEY_derive_init */
int EVP_PKEY_derive_init(void);

/* Symbol: EVP_PKEY_derive_set_peer */
/* Demangled: EVP_PKEY_derive_set_peer */
int EVP_PKEY_derive_set_peer(void);

/* Symbol: EVP_PKEY_derive */
/* Demangled: EVP_PKEY_derive */
int EVP_PKEY_derive(void);

/* Symbol: EVP_PKEY_paramgen_init */
/* Demangled: EVP_PKEY_paramgen_init */
int EVP_PKEY_paramgen_init(void);

/* Symbol: EVP_PKEY_paramgen */
/* Demangled: EVP_PKEY_paramgen */
int EVP_PKEY_paramgen(void);

/* Symbol: EVP_PKEY_keygen_init */
/* Demangled: EVP_PKEY_keygen_init */
int EVP_PKEY_keygen_init(void);

/* Symbol: EVP_PKEY_keygen */
/* Demangled: EVP_PKEY_keygen */
int EVP_PKEY_keygen(void);

/* Symbol: EVP_PKEY_CTX_set_cb */
/* Demangled: EVP_PKEY_CTX_set_cb */
int EVP_PKEY_CTX_set_cb(void);

/* Symbol: EVP_PKEY_CTX_get_cb */
/* Demangled: EVP_PKEY_CTX_get_cb */
int EVP_PKEY_CTX_get_cb(void);

/* Symbol: EVP_PKEY_CTX_get_keygen_info */
/* Demangled: EVP_PKEY_CTX_get_keygen_info */
int EVP_PKEY_CTX_get_keygen_info(void);

/* Symbol: EVP_PKEY_new_mac_key */
/* Demangled: EVP_PKEY_new_mac_key */
int EVP_PKEY_new_mac_key(void);

/* Symbol: EVP_PKEY_CTX_new_id */
/* Demangled: EVP_PKEY_CTX_new_id */
int EVP_PKEY_CTX_new_id(void);

/* Symbol: EVP_PKEY_meth_find */
/* Demangled: EVP_PKEY_meth_find */
int EVP_PKEY_meth_find(void);

/* Symbol: app_pkey_methods */
/* Demangled: app_pkey_methods */
extern void* app_pkey_methods;

/* Symbol: EVP_PKEY_meth_new */
/* Demangled: EVP_PKEY_meth_new */
int EVP_PKEY_meth_new(void);

/* Symbol: EVP_PKEY_meth_get0_info */
/* Demangled: EVP_PKEY_meth_get0_info */
int EVP_PKEY_meth_get0_info(void);

/* Symbol: EVP_PKEY_meth_copy */
/* Demangled: EVP_PKEY_meth_copy */
int EVP_PKEY_meth_copy(void);

/* Symbol: EVP_PKEY_meth_add0 */
/* Demangled: EVP_PKEY_meth_add0 */
int EVP_PKEY_meth_add0(void);

/* Symbol: EVP_PKEY_CTX_ctrl_str */
/* Demangled: EVP_PKEY_CTX_ctrl_str */
int EVP_PKEY_CTX_ctrl_str(void);

/* Symbol: EVP_PKEY_CTX_get_operation */
/* Demangled: EVP_PKEY_CTX_get_operation */
int EVP_PKEY_CTX_get_operation(void);

/* Symbol: EVP_PKEY_CTX_set0_keygen_info */
/* Demangled: EVP_PKEY_CTX_set0_keygen_info */
int EVP_PKEY_CTX_set0_keygen_info(void);

/* Symbol: EVP_PKEY_CTX_set_data */
/* Demangled: EVP_PKEY_CTX_set_data */
int EVP_PKEY_CTX_set_data(void);

/* Symbol: EVP_PKEY_CTX_get_data */
/* Demangled: EVP_PKEY_CTX_get_data */
int EVP_PKEY_CTX_get_data(void);

/* Symbol: EVP_PKEY_CTX_get0_peerkey */
/* Demangled: EVP_PKEY_CTX_get0_peerkey */
int EVP_PKEY_CTX_get0_peerkey(void);

/* Symbol: EVP_PKEY_CTX_set_app_data */
/* Demangled: EVP_PKEY_CTX_set_app_data */
int EVP_PKEY_CTX_set_app_data(void);

/* Symbol: EVP_PKEY_CTX_get_app_data */
/* Demangled: EVP_PKEY_CTX_get_app_data */
int EVP_PKEY_CTX_get_app_data(void);

/* Symbol: EVP_PKEY_meth_set_init */
/* Demangled: EVP_PKEY_meth_set_init */
int EVP_PKEY_meth_set_init(void);

/* Symbol: EVP_PKEY_meth_set_copy */
/* Demangled: EVP_PKEY_meth_set_copy */
int EVP_PKEY_meth_set_copy(void);

/* Symbol: EVP_PKEY_meth_set_cleanup */
/* Demangled: EVP_PKEY_meth_set_cleanup */
int EVP_PKEY_meth_set_cleanup(void);

/* Symbol: EVP_PKEY_meth_set_paramgen */
/* Demangled: EVP_PKEY_meth_set_paramgen */
int EVP_PKEY_meth_set_paramgen(void);

/* Symbol: EVP_PKEY_meth_set_keygen */
/* Demangled: EVP_PKEY_meth_set_keygen */
int EVP_PKEY_meth_set_keygen(void);

/* Symbol: EVP_PKEY_meth_set_sign */
/* Demangled: EVP_PKEY_meth_set_sign */
int EVP_PKEY_meth_set_sign(void);

/* Symbol: EVP_PKEY_meth_set_verify */
/* Demangled: EVP_PKEY_meth_set_verify */
int EVP_PKEY_meth_set_verify(void);

/* Symbol: EVP_PKEY_meth_set_verify_recover */
/* Demangled: EVP_PKEY_meth_set_verify_recover */
int EVP_PKEY_meth_set_verify_recover(void);

/* Symbol: EVP_PKEY_meth_set_signctx */
/* Demangled: EVP_PKEY_meth_set_signctx */
int EVP_PKEY_meth_set_signctx(void);

/* Symbol: EVP_PKEY_meth_set_verifyctx */
/* Demangled: EVP_PKEY_meth_set_verifyctx */
int EVP_PKEY_meth_set_verifyctx(void);

/* Symbol: EVP_PKEY_meth_set_encrypt */
/* Demangled: EVP_PKEY_meth_set_encrypt */
int EVP_PKEY_meth_set_encrypt(void);

/* Symbol: EVP_PKEY_meth_set_decrypt */
/* Demangled: EVP_PKEY_meth_set_decrypt */
int EVP_PKEY_meth_set_decrypt(void);

/* Symbol: EVP_PKEY_meth_set_derive */
/* Demangled: EVP_PKEY_meth_set_derive */
int EVP_PKEY_meth_set_derive(void);

/* Symbol: EVP_PKEY_meth_set_ctrl */
/* Demangled: EVP_PKEY_meth_set_ctrl */
int EVP_PKEY_meth_set_ctrl(void);

/* Symbol: rsa_pkey_meth */
/* Demangled: rsa_pkey_meth */
extern void* rsa_pkey_meth;

/* Symbol: hmac_pkey_meth */
/* Demangled: hmac_pkey_meth */
extern void* hmac_pkey_meth;

/* Symbol: CRYPTO_set_ex_data_implementation */
/* Demangled: CRYPTO_set_ex_data_implementation */
int CRYPTO_set_ex_data_implementation(void);

/* Symbol: CRYPTO_ex_data_new_class */
/* Demangled: CRYPTO_ex_data_new_class */
int CRYPTO_ex_data_new_class(void);

/* Symbol: CRYPTO_cleanup_all_ex_data */
/* Demangled: CRYPTO_cleanup_all_ex_data */
int CRYPTO_cleanup_all_ex_data(void);

/* Symbol: HMAC_CTX_set_flags */
/* Demangled: HMAC_CTX_set_flags */
int HMAC_CTX_set_flags(void);

/* Symbol: HMAC_Init */
/* Demangled: HMAC_Init */
int HMAC_Init(void);

/* Symbol: HMAC */
/* Demangled: HMAC */
int HMAC(void);

/* Symbol: d2i_KRB5_ENCDATA */
/* Demangled: d2i_KRB5_ENCDATA */
int d2i_KRB5_ENCDATA(void);

/* Symbol: KRB5_ENCDATA_it */
/* Demangled: KRB5_ENCDATA_it */
extern void* KRB5_ENCDATA_it;

/* Symbol: i2d_KRB5_ENCDATA */
/* Demangled: i2d_KRB5_ENCDATA */
int i2d_KRB5_ENCDATA(void);

/* Symbol: KRB5_ENCDATA_new */
/* Demangled: KRB5_ENCDATA_new */
int KRB5_ENCDATA_new(void);

/* Symbol: KRB5_ENCDATA_free */
/* Demangled: KRB5_ENCDATA_free */
int KRB5_ENCDATA_free(void);

/* Symbol: d2i_KRB5_PRINCNAME */
/* Demangled: d2i_KRB5_PRINCNAME */
int d2i_KRB5_PRINCNAME(void);

/* Symbol: KRB5_PRINCNAME_it */
/* Demangled: KRB5_PRINCNAME_it */
extern void* KRB5_PRINCNAME_it;

/* Symbol: i2d_KRB5_PRINCNAME */
/* Demangled: i2d_KRB5_PRINCNAME */
int i2d_KRB5_PRINCNAME(void);

/* Symbol: KRB5_PRINCNAME_new */
/* Demangled: KRB5_PRINCNAME_new */
int KRB5_PRINCNAME_new(void);

/* Symbol: KRB5_PRINCNAME_free */
/* Demangled: KRB5_PRINCNAME_free */
int KRB5_PRINCNAME_free(void);

/* Symbol: d2i_KRB5_TKTBODY */
/* Demangled: d2i_KRB5_TKTBODY */
int d2i_KRB5_TKTBODY(void);

/* Symbol: KRB5_TKTBODY_it */
/* Demangled: KRB5_TKTBODY_it */
extern void* KRB5_TKTBODY_it;

/* Symbol: i2d_KRB5_TKTBODY */
/* Demangled: i2d_KRB5_TKTBODY */
int i2d_KRB5_TKTBODY(void);

/* Symbol: KRB5_TKTBODY_new */
/* Demangled: KRB5_TKTBODY_new */
int KRB5_TKTBODY_new(void);

/* Symbol: KRB5_TKTBODY_free */
/* Demangled: KRB5_TKTBODY_free */
int KRB5_TKTBODY_free(void);

/* Symbol: d2i_KRB5_TICKET */
/* Demangled: d2i_KRB5_TICKET */
int d2i_KRB5_TICKET(void);

/* Symbol: KRB5_TICKET_it */
/* Demangled: KRB5_TICKET_it */
extern void* KRB5_TICKET_it;

/* Symbol: i2d_KRB5_TICKET */
/* Demangled: i2d_KRB5_TICKET */
int i2d_KRB5_TICKET(void);

/* Symbol: KRB5_TICKET_new */
/* Demangled: KRB5_TICKET_new */
int KRB5_TICKET_new(void);

/* Symbol: KRB5_TICKET_free */
/* Demangled: KRB5_TICKET_free */
int KRB5_TICKET_free(void);

/* Symbol: d2i_KRB5_APREQBODY */
/* Demangled: d2i_KRB5_APREQBODY */
int d2i_KRB5_APREQBODY(void);

/* Symbol: KRB5_APREQBODY_it */
/* Demangled: KRB5_APREQBODY_it */
extern void* KRB5_APREQBODY_it;

/* Symbol: i2d_KRB5_APREQBODY */
/* Demangled: i2d_KRB5_APREQBODY */
int i2d_KRB5_APREQBODY(void);

/* Symbol: KRB5_APREQBODY_new */
/* Demangled: KRB5_APREQBODY_new */
int KRB5_APREQBODY_new(void);

/* Symbol: KRB5_APREQBODY_free */
/* Demangled: KRB5_APREQBODY_free */
int KRB5_APREQBODY_free(void);

/* Symbol: d2i_KRB5_APREQ */
/* Demangled: d2i_KRB5_APREQ */
int d2i_KRB5_APREQ(void);

/* Symbol: KRB5_APREQ_it */
/* Demangled: KRB5_APREQ_it */
extern void* KRB5_APREQ_it;

/* Symbol: i2d_KRB5_APREQ */
/* Demangled: i2d_KRB5_APREQ */
int i2d_KRB5_APREQ(void);

/* Symbol: KRB5_APREQ_new */
/* Demangled: KRB5_APREQ_new */
int KRB5_APREQ_new(void);

/* Symbol: KRB5_APREQ_free */
/* Demangled: KRB5_APREQ_free */
int KRB5_APREQ_free(void);

/* Symbol: d2i_KRB5_CHECKSUM */
/* Demangled: d2i_KRB5_CHECKSUM */
int d2i_KRB5_CHECKSUM(void);

/* Symbol: KRB5_CHECKSUM_it */
/* Demangled: KRB5_CHECKSUM_it */
extern void* KRB5_CHECKSUM_it;

/* Symbol: i2d_KRB5_CHECKSUM */
/* Demangled: i2d_KRB5_CHECKSUM */
int i2d_KRB5_CHECKSUM(void);

/* Symbol: KRB5_CHECKSUM_new */
/* Demangled: KRB5_CHECKSUM_new */
int KRB5_CHECKSUM_new(void);

/* Symbol: KRB5_CHECKSUM_free */
/* Demangled: KRB5_CHECKSUM_free */
int KRB5_CHECKSUM_free(void);

/* Symbol: d2i_KRB5_ENCKEY */
/* Demangled: d2i_KRB5_ENCKEY */
int d2i_KRB5_ENCKEY(void);

/* Symbol: KRB5_ENCKEY_it */
/* Demangled: KRB5_ENCKEY_it */
extern void* KRB5_ENCKEY_it;

/* Symbol: i2d_KRB5_ENCKEY */
/* Demangled: i2d_KRB5_ENCKEY */
int i2d_KRB5_ENCKEY(void);

/* Symbol: KRB5_ENCKEY_new */
/* Demangled: KRB5_ENCKEY_new */
int KRB5_ENCKEY_new(void);

/* Symbol: KRB5_ENCKEY_free */
/* Demangled: KRB5_ENCKEY_free */
int KRB5_ENCKEY_free(void);

/* Symbol: d2i_KRB5_AUTHDATA */
/* Demangled: d2i_KRB5_AUTHDATA */
int d2i_KRB5_AUTHDATA(void);

/* Symbol: KRB5_AUTHDATA_it */
/* Demangled: KRB5_AUTHDATA_it */
extern void* KRB5_AUTHDATA_it;

/* Symbol: i2d_KRB5_AUTHDATA */
/* Demangled: i2d_KRB5_AUTHDATA */
int i2d_KRB5_AUTHDATA(void);

/* Symbol: KRB5_AUTHDATA_new */
/* Demangled: KRB5_AUTHDATA_new */
int KRB5_AUTHDATA_new(void);

/* Symbol: KRB5_AUTHDATA_free */
/* Demangled: KRB5_AUTHDATA_free */
int KRB5_AUTHDATA_free(void);

/* Symbol: d2i_KRB5_AUTHENTBODY */
/* Demangled: d2i_KRB5_AUTHENTBODY */
int d2i_KRB5_AUTHENTBODY(void);

/* Symbol: KRB5_AUTHENTBODY_it */
/* Demangled: KRB5_AUTHENTBODY_it */
extern void* KRB5_AUTHENTBODY_it;

/* Symbol: i2d_KRB5_AUTHENTBODY */
/* Demangled: i2d_KRB5_AUTHENTBODY */
int i2d_KRB5_AUTHENTBODY(void);

/* Symbol: KRB5_AUTHENTBODY_new */
/* Demangled: KRB5_AUTHENTBODY_new */
int KRB5_AUTHENTBODY_new(void);

/* Symbol: KRB5_AUTHENTBODY_free */
/* Demangled: KRB5_AUTHENTBODY_free */
int KRB5_AUTHENTBODY_free(void);

/* Symbol: d2i_KRB5_AUTHENT */
/* Demangled: d2i_KRB5_AUTHENT */
int d2i_KRB5_AUTHENT(void);

/* Symbol: KRB5_AUTHENT_it */
/* Demangled: KRB5_AUTHENT_it */
extern void* KRB5_AUTHENT_it;

/* Symbol: i2d_KRB5_AUTHENT */
/* Demangled: i2d_KRB5_AUTHENT */
int i2d_KRB5_AUTHENT(void);

/* Symbol: KRB5_AUTHENT_new */
/* Demangled: KRB5_AUTHENT_new */
int KRB5_AUTHENT_new(void);

/* Symbol: KRB5_AUTHENT_free */
/* Demangled: KRB5_AUTHENT_free */
int KRB5_AUTHENT_free(void);

/* Symbol: lh_stats */
/* Demangled: lh_stats */
int lh_stats(void);

/* Symbol: lh_stats_bio */
/* Demangled: lh_stats_bio */
int lh_stats_bio(void);

/* Symbol: lh_node_stats */
/* Demangled: lh_node_stats */
int lh_node_stats(void);

/* Symbol: lh_node_stats_bio */
/* Demangled: lh_node_stats_bio */
int lh_node_stats_bio(void);

/* Symbol: lh_node_usage_stats */
/* Demangled: lh_node_usage_stats */
int lh_node_usage_stats(void);

/* Symbol: lh_node_usage_stats_bio */
/* Demangled: lh_node_usage_stats_bio */
int lh_node_usage_stats_bio(void);

/* Symbol: lh_version */
/* Demangled: lh_version */
extern void* lh_version;

/* Symbol: md4_block_data_order */
/* Demangled: md4_block_data_order */
int md4_block_data_order(void);

/* Symbol: MD4_Transform */
/* Demangled: MD4_Transform */
int MD4_Transform(void);

/* Symbol: MD4_version */
/* Demangled: MD4_version */
extern void* MD4_version;

/* Symbol: MD4 */
/* Demangled: MD4 */
int MD4(void);

/* Symbol: md5_block_data_order */
/* Demangled: md5_block_data_order */
int md5_block_data_order(void);

/* Symbol: MD5_Transform */
/* Demangled: MD5_Transform */
int MD5_Transform(void);

/* Symbol: MD5_version */
/* Demangled: MD5_version */
extern void* MD5_version;

/* Symbol: MD5 */
/* Demangled: MD5 */
int MD5(void);

/* Symbol: CRYPTO_set_mem_functions */
/* Demangled: CRYPTO_set_mem_functions */
int CRYPTO_set_mem_functions(void);

/* Symbol: CRYPTO_set_mem_ex_functions */
/* Demangled: CRYPTO_set_mem_ex_functions */
int CRYPTO_set_mem_ex_functions(void);

/* Symbol: CRYPTO_set_locked_mem_functions */
/* Demangled: CRYPTO_set_locked_mem_functions */
int CRYPTO_set_locked_mem_functions(void);

/* Symbol: CRYPTO_set_locked_mem_ex_functions */
/* Demangled: CRYPTO_set_locked_mem_ex_functions */
int CRYPTO_set_locked_mem_ex_functions(void);

/* Symbol: CRYPTO_set_mem_debug_functions */
/* Demangled: CRYPTO_set_mem_debug_functions */
int CRYPTO_set_mem_debug_functions(void);

/* Symbol: CRYPTO_get_mem_ex_functions */
/* Demangled: CRYPTO_get_mem_ex_functions */
int CRYPTO_get_mem_ex_functions(void);

/* Symbol: CRYPTO_get_locked_mem_functions */
/* Demangled: CRYPTO_get_locked_mem_functions */
int CRYPTO_get_locked_mem_functions(void);

/* Symbol: CRYPTO_get_locked_mem_ex_functions */
/* Demangled: CRYPTO_get_locked_mem_ex_functions */
int CRYPTO_get_locked_mem_ex_functions(void);

/* Symbol: CRYPTO_get_mem_debug_functions */
/* Demangled: CRYPTO_get_mem_debug_functions */
int CRYPTO_get_mem_debug_functions(void);

/* Symbol: CRYPTO_malloc_locked */
/* Demangled: CRYPTO_malloc_locked */
int CRYPTO_malloc_locked(void);

/* Symbol: cleanse_ctr */
/* Demangled: cleanse_ctr */
extern void* cleanse_ctr;

/* Symbol: CRYPTO_free_locked */
/* Demangled: CRYPTO_free_locked */
int CRYPTO_free_locked(void);

/* Symbol: CRYPTO_strdup */
/* Demangled: CRYPTO_strdup */
int CRYPTO_strdup(void);

/* Symbol: CRYPTO_remalloc */
/* Demangled: CRYPTO_remalloc */
int CRYPTO_remalloc(void);

/* Symbol: CRYPTO_set_mem_debug_options */
/* Demangled: CRYPTO_set_mem_debug_options */
int CRYPTO_set_mem_debug_options(void);

/* Symbol: CRYPTO_get_mem_debug_options */
/* Demangled: CRYPTO_get_mem_debug_options */
int CRYPTO_get_mem_debug_options(void);

/* Symbol: CRYPTO_mem_ctrl */
/* Demangled: CRYPTO_mem_ctrl */
int CRYPTO_mem_ctrl(void);

/* Symbol: CRYPTO_is_mem_check_on */
/* Demangled: CRYPTO_is_mem_check_on */
int CRYPTO_is_mem_check_on(void);

/* Symbol: CRYPTO_dbg_set_options */
/* Demangled: CRYPTO_dbg_set_options */
int CRYPTO_dbg_set_options(void);

/* Symbol: CRYPTO_dbg_get_options */
/* Demangled: CRYPTO_dbg_get_options */
int CRYPTO_dbg_get_options(void);

/* Symbol: CRYPTO_remove_all_info */
/* Demangled: CRYPTO_remove_all_info */
int CRYPTO_remove_all_info(void);

/* Symbol: CRYPTO_dbg_malloc */
/* Demangled: CRYPTO_dbg_malloc */
int CRYPTO_dbg_malloc(void);

/* Symbol: CRYPTO_dbg_free */
/* Demangled: CRYPTO_dbg_free */
int CRYPTO_dbg_free(void);

/* Symbol: CRYPTO_dbg_realloc */
/* Demangled: CRYPTO_dbg_realloc */
int CRYPTO_dbg_realloc(void);

/* Symbol: CRYPTO_mem_leaks */
/* Demangled: CRYPTO_mem_leaks */
int CRYPTO_mem_leaks(void);

/* Symbol: CRYPTO_mem_leaks_fp */
/* Demangled: CRYPTO_mem_leaks_fp */
int CRYPTO_mem_leaks_fp(void);

/* Symbol: CRYPTO_mem_leaks_cb */
/* Demangled: CRYPTO_mem_leaks_cb */
int CRYPTO_mem_leaks_cb(void);

/* Symbol: CRYPTO_gcm128_new */
/* Demangled: CRYPTO_gcm128_new */
int CRYPTO_gcm128_new(void);

/* Symbol: CRYPTO_gcm128_release */
/* Demangled: CRYPTO_gcm128_release */
int CRYPTO_gcm128_release(void);

/* Symbol: OPENSSL_DIR_read */
/* Demangled: OPENSSL_DIR_read */
int OPENSSL_DIR_read(void);

/* Symbol: OPENSSL_DIR_end */
/* Demangled: OPENSSL_DIR_end */
int OPENSSL_DIR_end(void);

/* Symbol: OPENSSL_strncasecmp */
/* Demangled: OPENSSL_strncasecmp */
int OPENSSL_strncasecmp(void);

/* Symbol: OPENSSL_strcasecmp */
/* Demangled: OPENSSL_strcasecmp */
int OPENSSL_strcasecmp(void);

/* Symbol: OPENSSL_memcmp */
/* Demangled: OPENSSL_memcmp */
int OPENSSL_memcmp(void);

/* Symbol: OBJ_NAME_init */
/* Demangled: OBJ_NAME_init */
int OBJ_NAME_init(void);

/* Symbol: OBJ_NAME_new_index */
/* Demangled: OBJ_NAME_new_index */
int OBJ_NAME_new_index(void);

/* Symbol: OBJ_NAME_remove */
/* Demangled: OBJ_NAME_remove */
int OBJ_NAME_remove(void);

/* Symbol: OBJ_new_nid */
/* Demangled: OBJ_new_nid */
int OBJ_new_nid(void);

/* Symbol: OBJ_add_object */
/* Demangled: OBJ_add_object */
int OBJ_add_object(void);

/* Symbol: OBJ_txt2nid */
/* Demangled: OBJ_txt2nid */
int OBJ_txt2nid(void);

/* Symbol: OBJ_bsearch_ex_ */
/* Demangled: OBJ_bsearch_ex_ */
int OBJ_bsearch_ex_(void);

/* Symbol: OBJ_create_objects */
/* Demangled: OBJ_create_objects */
int OBJ_create_objects(void);

/* Symbol: sig_app */
/* Demangled: sig_app */
extern void* sig_app;

/* Symbol: sigx_app */
/* Demangled: sigx_app */
extern void* sigx_app;

/* Symbol: OBJ_add_sigid */
/* Demangled: OBJ_add_sigid */
int OBJ_add_sigid(void);

/* Symbol: d2i_OCSP_SIGNATURE */
/* Demangled: d2i_OCSP_SIGNATURE */
int d2i_OCSP_SIGNATURE(void);

/* Symbol: OCSP_SIGNATURE_it */
/* Demangled: OCSP_SIGNATURE_it */
extern void* OCSP_SIGNATURE_it;

/* Symbol: i2d_OCSP_SIGNATURE */
/* Demangled: i2d_OCSP_SIGNATURE */
int i2d_OCSP_SIGNATURE(void);

/* Symbol: OCSP_SIGNATURE_new */
/* Demangled: OCSP_SIGNATURE_new */
int OCSP_SIGNATURE_new(void);

/* Symbol: OCSP_SIGNATURE_free */
/* Demangled: OCSP_SIGNATURE_free */
int OCSP_SIGNATURE_free(void);

/* Symbol: d2i_OCSP_CERTID */
/* Demangled: d2i_OCSP_CERTID */
int d2i_OCSP_CERTID(void);

/* Symbol: OCSP_CERTID_it */
/* Demangled: OCSP_CERTID_it */
extern void* OCSP_CERTID_it;

/* Symbol: i2d_OCSP_CERTID */
/* Demangled: i2d_OCSP_CERTID */
int i2d_OCSP_CERTID(void);

/* Symbol: OCSP_CERTID_new */
/* Demangled: OCSP_CERTID_new */
int OCSP_CERTID_new(void);

/* Symbol: OCSP_CERTID_free */
/* Demangled: OCSP_CERTID_free */
int OCSP_CERTID_free(void);

/* Symbol: d2i_OCSP_ONEREQ */
/* Demangled: d2i_OCSP_ONEREQ */
int d2i_OCSP_ONEREQ(void);

/* Symbol: OCSP_ONEREQ_it */
/* Demangled: OCSP_ONEREQ_it */
extern void* OCSP_ONEREQ_it;

/* Symbol: i2d_OCSP_ONEREQ */
/* Demangled: i2d_OCSP_ONEREQ */
int i2d_OCSP_ONEREQ(void);

/* Symbol: OCSP_ONEREQ_new */
/* Demangled: OCSP_ONEREQ_new */
int OCSP_ONEREQ_new(void);

/* Symbol: OCSP_ONEREQ_free */
/* Demangled: OCSP_ONEREQ_free */
int OCSP_ONEREQ_free(void);

/* Symbol: d2i_OCSP_REQINFO */
/* Demangled: d2i_OCSP_REQINFO */
int d2i_OCSP_REQINFO(void);

/* Symbol: OCSP_REQINFO_it */
/* Demangled: OCSP_REQINFO_it */
extern void* OCSP_REQINFO_it;

/* Symbol: i2d_OCSP_REQINFO */
/* Demangled: i2d_OCSP_REQINFO */
int i2d_OCSP_REQINFO(void);

/* Symbol: OCSP_REQINFO_new */
/* Demangled: OCSP_REQINFO_new */
int OCSP_REQINFO_new(void);

/* Symbol: OCSP_REQINFO_free */
/* Demangled: OCSP_REQINFO_free */
int OCSP_REQINFO_free(void);

/* Symbol: d2i_OCSP_REQUEST */
/* Demangled: d2i_OCSP_REQUEST */
int d2i_OCSP_REQUEST(void);

/* Symbol: OCSP_REQUEST_it */
/* Demangled: OCSP_REQUEST_it */
extern void* OCSP_REQUEST_it;

/* Symbol: i2d_OCSP_REQUEST */
/* Demangled: i2d_OCSP_REQUEST */
int i2d_OCSP_REQUEST(void);

/* Symbol: OCSP_REQUEST_new */
/* Demangled: OCSP_REQUEST_new */
int OCSP_REQUEST_new(void);

/* Symbol: OCSP_REQUEST_free */
/* Demangled: OCSP_REQUEST_free */
int OCSP_REQUEST_free(void);

/* Symbol: d2i_OCSP_RESPBYTES */
/* Demangled: d2i_OCSP_RESPBYTES */
int d2i_OCSP_RESPBYTES(void);

/* Symbol: OCSP_RESPBYTES_it */
/* Demangled: OCSP_RESPBYTES_it */
extern void* OCSP_RESPBYTES_it;

/* Symbol: i2d_OCSP_RESPBYTES */
/* Demangled: i2d_OCSP_RESPBYTES */
int i2d_OCSP_RESPBYTES(void);

/* Symbol: OCSP_RESPBYTES_new */
/* Demangled: OCSP_RESPBYTES_new */
int OCSP_RESPBYTES_new(void);

/* Symbol: OCSP_RESPBYTES_free */
/* Demangled: OCSP_RESPBYTES_free */
int OCSP_RESPBYTES_free(void);

/* Symbol: d2i_OCSP_RESPONSE */
/* Demangled: d2i_OCSP_RESPONSE */
int d2i_OCSP_RESPONSE(void);

/* Symbol: OCSP_RESPONSE_it */
/* Demangled: OCSP_RESPONSE_it */
extern void* OCSP_RESPONSE_it;

/* Symbol: i2d_OCSP_RESPONSE */
/* Demangled: i2d_OCSP_RESPONSE */
int i2d_OCSP_RESPONSE(void);

/* Symbol: OCSP_RESPONSE_new */
/* Demangled: OCSP_RESPONSE_new */
int OCSP_RESPONSE_new(void);

/* Symbol: OCSP_RESPONSE_free */
/* Demangled: OCSP_RESPONSE_free */
int OCSP_RESPONSE_free(void);

/* Symbol: d2i_OCSP_RESPID */
/* Demangled: d2i_OCSP_RESPID */
int d2i_OCSP_RESPID(void);

/* Symbol: OCSP_RESPID_it */
/* Demangled: OCSP_RESPID_it */
extern void* OCSP_RESPID_it;

/* Symbol: i2d_OCSP_RESPID */
/* Demangled: i2d_OCSP_RESPID */
int i2d_OCSP_RESPID(void);

/* Symbol: OCSP_RESPID_new */
/* Demangled: OCSP_RESPID_new */
int OCSP_RESPID_new(void);

/* Symbol: OCSP_RESPID_free */
/* Demangled: OCSP_RESPID_free */
int OCSP_RESPID_free(void);

/* Symbol: d2i_OCSP_REVOKEDINFO */
/* Demangled: d2i_OCSP_REVOKEDINFO */
int d2i_OCSP_REVOKEDINFO(void);

/* Symbol: OCSP_REVOKEDINFO_it */
/* Demangled: OCSP_REVOKEDINFO_it */
extern void* OCSP_REVOKEDINFO_it;

/* Symbol: i2d_OCSP_REVOKEDINFO */
/* Demangled: i2d_OCSP_REVOKEDINFO */
int i2d_OCSP_REVOKEDINFO(void);

/* Symbol: OCSP_REVOKEDINFO_new */
/* Demangled: OCSP_REVOKEDINFO_new */
int OCSP_REVOKEDINFO_new(void);

/* Symbol: OCSP_REVOKEDINFO_free */
/* Demangled: OCSP_REVOKEDINFO_free */
int OCSP_REVOKEDINFO_free(void);

/* Symbol: d2i_OCSP_CERTSTATUS */
/* Demangled: d2i_OCSP_CERTSTATUS */
int d2i_OCSP_CERTSTATUS(void);

/* Symbol: OCSP_CERTSTATUS_it */
/* Demangled: OCSP_CERTSTATUS_it */
extern void* OCSP_CERTSTATUS_it;

/* Symbol: i2d_OCSP_CERTSTATUS */
/* Demangled: i2d_OCSP_CERTSTATUS */
int i2d_OCSP_CERTSTATUS(void);

/* Symbol: OCSP_CERTSTATUS_new */
/* Demangled: OCSP_CERTSTATUS_new */
int OCSP_CERTSTATUS_new(void);

/* Symbol: OCSP_CERTSTATUS_free */
/* Demangled: OCSP_CERTSTATUS_free */
int OCSP_CERTSTATUS_free(void);

/* Symbol: d2i_OCSP_SINGLERESP */
/* Demangled: d2i_OCSP_SINGLERESP */
int d2i_OCSP_SINGLERESP(void);

/* Symbol: OCSP_SINGLERESP_it */
/* Demangled: OCSP_SINGLERESP_it */
extern void* OCSP_SINGLERESP_it;

/* Symbol: i2d_OCSP_SINGLERESP */
/* Demangled: i2d_OCSP_SINGLERESP */
int i2d_OCSP_SINGLERESP(void);

/* Symbol: OCSP_SINGLERESP_new */
/* Demangled: OCSP_SINGLERESP_new */
int OCSP_SINGLERESP_new(void);

/* Symbol: OCSP_SINGLERESP_free */
/* Demangled: OCSP_SINGLERESP_free */
int OCSP_SINGLERESP_free(void);

/* Symbol: d2i_OCSP_RESPDATA */
/* Demangled: d2i_OCSP_RESPDATA */
int d2i_OCSP_RESPDATA(void);

/* Symbol: OCSP_RESPDATA_it */
/* Demangled: OCSP_RESPDATA_it */
extern void* OCSP_RESPDATA_it;

/* Symbol: i2d_OCSP_RESPDATA */
/* Demangled: i2d_OCSP_RESPDATA */
int i2d_OCSP_RESPDATA(void);

/* Symbol: OCSP_RESPDATA_new */
/* Demangled: OCSP_RESPDATA_new */
int OCSP_RESPDATA_new(void);

/* Symbol: OCSP_RESPDATA_free */
/* Demangled: OCSP_RESPDATA_free */
int OCSP_RESPDATA_free(void);

/* Symbol: d2i_OCSP_BASICRESP */
/* Demangled: d2i_OCSP_BASICRESP */
int d2i_OCSP_BASICRESP(void);

/* Symbol: OCSP_BASICRESP_it */
/* Demangled: OCSP_BASICRESP_it */
extern void* OCSP_BASICRESP_it;

/* Symbol: i2d_OCSP_BASICRESP */
/* Demangled: i2d_OCSP_BASICRESP */
int i2d_OCSP_BASICRESP(void);

/* Symbol: OCSP_BASICRESP_new */
/* Demangled: OCSP_BASICRESP_new */
int OCSP_BASICRESP_new(void);

/* Symbol: OCSP_BASICRESP_free */
/* Demangled: OCSP_BASICRESP_free */
int OCSP_BASICRESP_free(void);

/* Symbol: d2i_OCSP_CRLID */
/* Demangled: d2i_OCSP_CRLID */
int d2i_OCSP_CRLID(void);

/* Symbol: OCSP_CRLID_it */
/* Demangled: OCSP_CRLID_it */
extern void* OCSP_CRLID_it;

/* Symbol: i2d_OCSP_CRLID */
/* Demangled: i2d_OCSP_CRLID */
int i2d_OCSP_CRLID(void);

/* Symbol: OCSP_CRLID_new */
/* Demangled: OCSP_CRLID_new */
int OCSP_CRLID_new(void);

/* Symbol: OCSP_CRLID_free */
/* Demangled: OCSP_CRLID_free */
int OCSP_CRLID_free(void);

/* Symbol: d2i_OCSP_SERVICELOC */
/* Demangled: d2i_OCSP_SERVICELOC */
int d2i_OCSP_SERVICELOC(void);

/* Symbol: OCSP_SERVICELOC_it */
/* Demangled: OCSP_SERVICELOC_it */
extern void* OCSP_SERVICELOC_it;

/* Symbol: i2d_OCSP_SERVICELOC */
/* Demangled: i2d_OCSP_SERVICELOC */
int i2d_OCSP_SERVICELOC(void);

/* Symbol: OCSP_SERVICELOC_new */
/* Demangled: OCSP_SERVICELOC_new */
int OCSP_SERVICELOC_new(void);

/* Symbol: OCSP_SERVICELOC_free */
/* Demangled: OCSP_SERVICELOC_free */
int OCSP_SERVICELOC_free(void);

/* Symbol: GENERAL_NAME_it */
/* Demangled: GENERAL_NAME_it */
extern void* GENERAL_NAME_it;

/* Symbol: ACCESS_DESCRIPTION_it */
/* Demangled: ACCESS_DESCRIPTION_it */
extern void* ACCESS_DESCRIPTION_it;

/* Symbol: OCSP_request_add0_id */
/* Demangled: OCSP_request_add0_id */
int OCSP_request_add0_id(void);

/* Symbol: OCSP_request_set1_name */
/* Demangled: OCSP_request_set1_name */
int OCSP_request_set1_name(void);

/* Symbol: GENERAL_NAME_new */
/* Demangled: GENERAL_NAME_new */
int GENERAL_NAME_new(void);

/* Symbol: GENERAL_NAME_free */
/* Demangled: GENERAL_NAME_free */
int GENERAL_NAME_free(void);

/* Symbol: OCSP_request_add1_cert */
/* Demangled: OCSP_request_add1_cert */
int OCSP_request_add1_cert(void);

/* Symbol: OCSP_request_sign */
/* Demangled: OCSP_request_sign */
int OCSP_request_sign(void);

/* Symbol: OCSP_response_status */
/* Demangled: OCSP_response_status */
int OCSP_response_status(void);

/* Symbol: OCSP_response_get1_basic */
/* Demangled: OCSP_response_get1_basic */
int OCSP_response_get1_basic(void);

/* Symbol: OCSP_resp_count */
/* Demangled: OCSP_resp_count */
int OCSP_resp_count(void);

/* Symbol: OCSP_resp_get0 */
/* Demangled: OCSP_resp_get0 */
int OCSP_resp_get0(void);

/* Symbol: OCSP_resp_find */
/* Demangled: OCSP_resp_find */
int OCSP_resp_find(void);

/* Symbol: OCSP_id_cmp */
/* Demangled: OCSP_id_cmp */
int OCSP_id_cmp(void);

/* Symbol: OCSP_single_get0_status */
/* Demangled: OCSP_single_get0_status */
int OCSP_single_get0_status(void);

/* Symbol: OCSP_resp_find_status */
/* Demangled: OCSP_resp_find_status */
int OCSP_resp_find_status(void);

/* Symbol: OCSP_check_validity */
/* Demangled: OCSP_check_validity */
int OCSP_check_validity(void);

/* Symbol: X509_cmp_time */
/* Demangled: X509_cmp_time */
int X509_cmp_time(void);

/* Symbol: OCSP_REQUEST_get_ext_count */
/* Demangled: OCSP_REQUEST_get_ext_count */
int OCSP_REQUEST_get_ext_count(void);

/* Symbol: X509v3_get_ext_count */
/* Demangled: X509v3_get_ext_count */
int X509v3_get_ext_count(void);

/* Symbol: OCSP_REQUEST_get_ext_by_NID */
/* Demangled: OCSP_REQUEST_get_ext_by_NID */
int OCSP_REQUEST_get_ext_by_NID(void);

/* Symbol: X509v3_get_ext_by_NID */
/* Demangled: X509v3_get_ext_by_NID */
int X509v3_get_ext_by_NID(void);

/* Symbol: OCSP_REQUEST_get_ext_by_OBJ */
/* Demangled: OCSP_REQUEST_get_ext_by_OBJ */
int OCSP_REQUEST_get_ext_by_OBJ(void);

/* Symbol: X509v3_get_ext_by_OBJ */
/* Demangled: X509v3_get_ext_by_OBJ */
int X509v3_get_ext_by_OBJ(void);

/* Symbol: OCSP_REQUEST_get_ext_by_critical */
/* Demangled: OCSP_REQUEST_get_ext_by_critical */
int OCSP_REQUEST_get_ext_by_critical(void);

/* Symbol: X509v3_get_ext_by_critical */
/* Demangled: X509v3_get_ext_by_critical */
int X509v3_get_ext_by_critical(void);

/* Symbol: OCSP_REQUEST_get_ext */
/* Demangled: OCSP_REQUEST_get_ext */
int OCSP_REQUEST_get_ext(void);

/* Symbol: X509v3_get_ext */
/* Demangled: X509v3_get_ext */
int X509v3_get_ext(void);

/* Symbol: OCSP_REQUEST_delete_ext */
/* Demangled: OCSP_REQUEST_delete_ext */
int OCSP_REQUEST_delete_ext(void);

/* Symbol: X509v3_delete_ext */
/* Demangled: X509v3_delete_ext */
int X509v3_delete_ext(void);

/* Symbol: OCSP_REQUEST_get1_ext_d2i */
/* Demangled: OCSP_REQUEST_get1_ext_d2i */
int OCSP_REQUEST_get1_ext_d2i(void);

/* Symbol: X509V3_get_d2i */
/* Demangled: X509V3_get_d2i */
int X509V3_get_d2i(void);

/* Symbol: OCSP_REQUEST_add1_ext_i2d */
/* Demangled: OCSP_REQUEST_add1_ext_i2d */
int OCSP_REQUEST_add1_ext_i2d(void);

/* Symbol: X509V3_add1_i2d */
/* Demangled: X509V3_add1_i2d */
int X509V3_add1_i2d(void);

/* Symbol: OCSP_REQUEST_add_ext */
/* Demangled: OCSP_REQUEST_add_ext */
int OCSP_REQUEST_add_ext(void);

/* Symbol: X509v3_add_ext */
/* Demangled: X509v3_add_ext */
int X509v3_add_ext(void);

/* Symbol: OCSP_ONEREQ_get_ext_count */
/* Demangled: OCSP_ONEREQ_get_ext_count */
int OCSP_ONEREQ_get_ext_count(void);

/* Symbol: OCSP_ONEREQ_get_ext_by_NID */
/* Demangled: OCSP_ONEREQ_get_ext_by_NID */
int OCSP_ONEREQ_get_ext_by_NID(void);

/* Symbol: OCSP_ONEREQ_get_ext_by_OBJ */
/* Demangled: OCSP_ONEREQ_get_ext_by_OBJ */
int OCSP_ONEREQ_get_ext_by_OBJ(void);

/* Symbol: OCSP_ONEREQ_get_ext_by_critical */
/* Demangled: OCSP_ONEREQ_get_ext_by_critical */
int OCSP_ONEREQ_get_ext_by_critical(void);

/* Symbol: OCSP_ONEREQ_get_ext */
/* Demangled: OCSP_ONEREQ_get_ext */
int OCSP_ONEREQ_get_ext(void);

/* Symbol: OCSP_ONEREQ_delete_ext */
/* Demangled: OCSP_ONEREQ_delete_ext */
int OCSP_ONEREQ_delete_ext(void);

/* Symbol: OCSP_ONEREQ_get1_ext_d2i */
/* Demangled: OCSP_ONEREQ_get1_ext_d2i */
int OCSP_ONEREQ_get1_ext_d2i(void);

/* Symbol: OCSP_ONEREQ_add1_ext_i2d */
/* Demangled: OCSP_ONEREQ_add1_ext_i2d */
int OCSP_ONEREQ_add1_ext_i2d(void);

/* Symbol: OCSP_ONEREQ_add_ext */
/* Demangled: OCSP_ONEREQ_add_ext */
int OCSP_ONEREQ_add_ext(void);

/* Symbol: OCSP_BASICRESP_get_ext_count */
/* Demangled: OCSP_BASICRESP_get_ext_count */
int OCSP_BASICRESP_get_ext_count(void);

/* Symbol: OCSP_BASICRESP_get_ext_by_NID */
/* Demangled: OCSP_BASICRESP_get_ext_by_NID */
int OCSP_BASICRESP_get_ext_by_NID(void);

/* Symbol: OCSP_BASICRESP_get_ext_by_OBJ */
/* Demangled: OCSP_BASICRESP_get_ext_by_OBJ */
int OCSP_BASICRESP_get_ext_by_OBJ(void);

/* Symbol: OCSP_BASICRESP_get_ext_by_critical */
/* Demangled: OCSP_BASICRESP_get_ext_by_critical */
int OCSP_BASICRESP_get_ext_by_critical(void);

/* Symbol: OCSP_BASICRESP_get_ext */
/* Demangled: OCSP_BASICRESP_get_ext */
int OCSP_BASICRESP_get_ext(void);

/* Symbol: OCSP_BASICRESP_delete_ext */
/* Demangled: OCSP_BASICRESP_delete_ext */
int OCSP_BASICRESP_delete_ext(void);

/* Symbol: OCSP_BASICRESP_get1_ext_d2i */
/* Demangled: OCSP_BASICRESP_get1_ext_d2i */
int OCSP_BASICRESP_get1_ext_d2i(void);

/* Symbol: OCSP_BASICRESP_add1_ext_i2d */
/* Demangled: OCSP_BASICRESP_add1_ext_i2d */
int OCSP_BASICRESP_add1_ext_i2d(void);

/* Symbol: OCSP_BASICRESP_add_ext */
/* Demangled: OCSP_BASICRESP_add_ext */
int OCSP_BASICRESP_add_ext(void);

/* Symbol: OCSP_SINGLERESP_get_ext_count */
/* Demangled: OCSP_SINGLERESP_get_ext_count */
int OCSP_SINGLERESP_get_ext_count(void);

/* Symbol: OCSP_SINGLERESP_get_ext_by_NID */
/* Demangled: OCSP_SINGLERESP_get_ext_by_NID */
int OCSP_SINGLERESP_get_ext_by_NID(void);

/* Symbol: OCSP_SINGLERESP_get_ext_by_OBJ */
/* Demangled: OCSP_SINGLERESP_get_ext_by_OBJ */
int OCSP_SINGLERESP_get_ext_by_OBJ(void);

/* Symbol: OCSP_SINGLERESP_get_ext_by_critical */
/* Demangled: OCSP_SINGLERESP_get_ext_by_critical */
int OCSP_SINGLERESP_get_ext_by_critical(void);

/* Symbol: OCSP_SINGLERESP_get_ext */
/* Demangled: OCSP_SINGLERESP_get_ext */
int OCSP_SINGLERESP_get_ext(void);

/* Symbol: OCSP_SINGLERESP_delete_ext */
/* Demangled: OCSP_SINGLERESP_delete_ext */
int OCSP_SINGLERESP_delete_ext(void);

/* Symbol: OCSP_SINGLERESP_get1_ext_d2i */
/* Demangled: OCSP_SINGLERESP_get1_ext_d2i */
int OCSP_SINGLERESP_get1_ext_d2i(void);

/* Symbol: OCSP_SINGLERESP_add1_ext_i2d */
/* Demangled: OCSP_SINGLERESP_add1_ext_i2d */
int OCSP_SINGLERESP_add1_ext_i2d(void);

/* Symbol: OCSP_SINGLERESP_add_ext */
/* Demangled: OCSP_SINGLERESP_add_ext */
int OCSP_SINGLERESP_add_ext(void);

/* Symbol: OCSP_request_add1_nonce */
/* Demangled: OCSP_request_add1_nonce */
int OCSP_request_add1_nonce(void);

/* Symbol: OCSP_basic_add1_nonce */
/* Demangled: OCSP_basic_add1_nonce */
int OCSP_basic_add1_nonce(void);

/* Symbol: OCSP_check_nonce */
/* Demangled: OCSP_check_nonce */
int OCSP_check_nonce(void);

/* Symbol: OCSP_copy_nonce */
/* Demangled: OCSP_copy_nonce */
int OCSP_copy_nonce(void);

/* Symbol: OCSP_crlID_new */
/* Demangled: OCSP_crlID_new */
int OCSP_crlID_new(void);

/* Symbol: X509V3_EXT_i2d */
/* Demangled: X509V3_EXT_i2d */
int X509V3_EXT_i2d(void);

/* Symbol: OCSP_accept_responses_new */
/* Demangled: OCSP_accept_responses_new */
int OCSP_accept_responses_new(void);

/* Symbol: OCSP_archive_cutoff_new */
/* Demangled: OCSP_archive_cutoff_new */
int OCSP_archive_cutoff_new(void);

/* Symbol: OCSP_url_svcloc_new */
/* Demangled: OCSP_url_svcloc_new */
int OCSP_url_svcloc_new(void);

/* Symbol: ACCESS_DESCRIPTION_new */
/* Demangled: ACCESS_DESCRIPTION_new */
int ACCESS_DESCRIPTION_new(void);

/* Symbol: OCSP_REQ_CTX_free */
/* Demangled: OCSP_REQ_CTX_free */
int OCSP_REQ_CTX_free(void);

/* Symbol: OCSP_REQ_CTX_set1_req */
/* Demangled: OCSP_REQ_CTX_set1_req */
int OCSP_REQ_CTX_set1_req(void);

/* Symbol: OCSP_REQ_CTX_add1_header */
/* Demangled: OCSP_REQ_CTX_add1_header */
int OCSP_REQ_CTX_add1_header(void);

/* Symbol: OCSP_sendreq_new */
/* Demangled: OCSP_sendreq_new */
int OCSP_sendreq_new(void);

/* Symbol: OCSP_sendreq_nbio */
/* Demangled: OCSP_sendreq_nbio */
int OCSP_sendreq_nbio(void);

/* Symbol: OCSP_sendreq_bio */
/* Demangled: OCSP_sendreq_bio */
int OCSP_sendreq_bio(void);

/* Symbol: OCSP_cert_to_id */
/* Demangled: OCSP_cert_to_id */
int OCSP_cert_to_id(void);

/* Symbol: X509_get0_pubkey_bitstr */
/* Demangled: X509_get0_pubkey_bitstr */
int X509_get0_pubkey_bitstr(void);

/* Symbol: OCSP_cert_id_new */
/* Demangled: OCSP_cert_id_new */
int OCSP_cert_id_new(void);

/* Symbol: X509_NAME_digest */
/* Demangled: X509_NAME_digest */
int X509_NAME_digest(void);

/* Symbol: OCSP_id_issuer_cmp */
/* Demangled: OCSP_id_issuer_cmp */
int OCSP_id_issuer_cmp(void);

/* Symbol: OCSP_parse_url */
/* Demangled: OCSP_parse_url */
int OCSP_parse_url(void);

/* Symbol: OCSP_CERTID_dup */
/* Demangled: OCSP_CERTID_dup */
int OCSP_CERTID_dup(void);

/* Symbol: OCSP_response_status_str */
/* Demangled: OCSP_response_status_str */
int OCSP_response_status_str(void);

/* Symbol: OCSP_cert_status_str */
/* Demangled: OCSP_cert_status_str */
int OCSP_cert_status_str(void);

/* Symbol: OCSP_crl_reason_str */
/* Demangled: OCSP_crl_reason_str */
int OCSP_crl_reason_str(void);

/* Symbol: OCSP_REQUEST_print */
/* Demangled: OCSP_REQUEST_print */
int OCSP_REQUEST_print(void);

/* Symbol: GENERAL_NAME_print */
/* Demangled: GENERAL_NAME_print */
int GENERAL_NAME_print(void);

/* Symbol: PEM_write_bio_X509 */
/* Demangled: PEM_write_bio_X509 */
int PEM_write_bio_X509(void);

/* Symbol: OCSP_RESPONSE_print */
/* Demangled: OCSP_RESPONSE_print */
int OCSP_RESPONSE_print(void);

/* Symbol: OCSP_request_onereq_count */
/* Demangled: OCSP_request_onereq_count */
int OCSP_request_onereq_count(void);

/* Symbol: OCSP_request_onereq_get0 */
/* Demangled: OCSP_request_onereq_get0 */
int OCSP_request_onereq_get0(void);

/* Symbol: OCSP_onereq_get0_id */
/* Demangled: OCSP_onereq_get0_id */
int OCSP_onereq_get0_id(void);

/* Symbol: OCSP_id_get0_info */
/* Demangled: OCSP_id_get0_info */
int OCSP_id_get0_info(void);

/* Symbol: OCSP_request_is_signed */
/* Demangled: OCSP_request_is_signed */
int OCSP_request_is_signed(void);

/* Symbol: OCSP_response_create */
/* Demangled: OCSP_response_create */
int OCSP_response_create(void);

/* Symbol: OCSP_basic_add1_status */
/* Demangled: OCSP_basic_add1_status */
int OCSP_basic_add1_status(void);

/* Symbol: OCSP_basic_add1_cert */
/* Demangled: OCSP_basic_add1_cert */
int OCSP_basic_add1_cert(void);

/* Symbol: OCSP_basic_sign */
/* Demangled: OCSP_basic_sign */
int OCSP_basic_sign(void);

/* Symbol: X509_pubkey_digest */
/* Demangled: X509_pubkey_digest */
int X509_pubkey_digest(void);

/* Symbol: OCSP_basic_verify */
/* Demangled: OCSP_basic_verify */
int OCSP_basic_verify(void);

/* Symbol: X509_STORE_CTX_set_purpose */
/* Demangled: X509_STORE_CTX_set_purpose */
int X509_STORE_CTX_set_purpose(void);

/* Symbol: X509_STORE_CTX_get1_chain */
/* Demangled: X509_STORE_CTX_get1_chain */
int X509_STORE_CTX_get1_chain(void);

/* Symbol: X509_check_trust */
/* Demangled: X509_check_trust */
int X509_check_trust(void);

/* Symbol: OCSP_request_verify */
/* Demangled: OCSP_request_verify */
int OCSP_request_verify(void);

/* Symbol: X509_find_by_subject */
/* Demangled: X509_find_by_subject */
int X509_find_by_subject(void);

/* Symbol: X509_STORE_CTX_set_trust */
/* Demangled: X509_STORE_CTX_set_trust */
int X509_STORE_CTX_set_trust(void);

/* Symbol: PEM_read_bio_X509_REQ */
/* Demangled: PEM_read_bio_X509_REQ */
int PEM_read_bio_X509_REQ(void);

/* Symbol: PEM_read_X509_REQ */
/* Demangled: PEM_read_X509_REQ */
int PEM_read_X509_REQ(void);

/* Symbol: PEM_write_bio_X509_REQ */
/* Demangled: PEM_write_bio_X509_REQ */
int PEM_write_bio_X509_REQ(void);

/* Symbol: PEM_write_X509_REQ */
/* Demangled: PEM_write_X509_REQ */
int PEM_write_X509_REQ(void);

/* Symbol: PEM_write_bio_X509_REQ_NEW */
/* Demangled: PEM_write_bio_X509_REQ_NEW */
int PEM_write_bio_X509_REQ_NEW(void);

/* Symbol: PEM_write_X509_REQ_NEW */
/* Demangled: PEM_write_X509_REQ_NEW */
int PEM_write_X509_REQ_NEW(void);

/* Symbol: PEM_read_bio_X509_CRL */
/* Demangled: PEM_read_bio_X509_CRL */
int PEM_read_bio_X509_CRL(void);

/* Symbol: PEM_read_X509_CRL */
/* Demangled: PEM_read_X509_CRL */
int PEM_read_X509_CRL(void);

/* Symbol: PEM_write_bio_X509_CRL */
/* Demangled: PEM_write_bio_X509_CRL */
int PEM_write_bio_X509_CRL(void);

/* Symbol: PEM_write_X509_CRL */
/* Demangled: PEM_write_X509_CRL */
int PEM_write_X509_CRL(void);

/* Symbol: PEM_read_bio_PKCS7 */
/* Demangled: PEM_read_bio_PKCS7 */
int PEM_read_bio_PKCS7(void);

/* Symbol: d2i_PKCS7 */
/* Demangled: d2i_PKCS7 */
int d2i_PKCS7(void);

/* Symbol: PEM_read_PKCS7 */
/* Demangled: PEM_read_PKCS7 */
int PEM_read_PKCS7(void);

/* Symbol: PEM_write_bio_PKCS7 */
/* Demangled: PEM_write_bio_PKCS7 */
int PEM_write_bio_PKCS7(void);

/* Symbol: i2d_PKCS7 */
/* Demangled: i2d_PKCS7 */
int i2d_PKCS7(void);

/* Symbol: PEM_write_PKCS7 */
/* Demangled: PEM_write_PKCS7 */
int PEM_write_PKCS7(void);

/* Symbol: PEM_read_bio_NETSCAPE_CERT_SEQUENCE */
/* Demangled: PEM_read_bio_NETSCAPE_CERT_SEQUENCE */
int PEM_read_bio_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: PEM_read_NETSCAPE_CERT_SEQUENCE */
/* Demangled: PEM_read_NETSCAPE_CERT_SEQUENCE */
int PEM_read_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: PEM_write_bio_NETSCAPE_CERT_SEQUENCE */
/* Demangled: PEM_write_bio_NETSCAPE_CERT_SEQUENCE */
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: PEM_write_NETSCAPE_CERT_SEQUENCE */
/* Demangled: PEM_write_NETSCAPE_CERT_SEQUENCE */
int PEM_write_NETSCAPE_CERT_SEQUENCE(void);

/* Symbol: PEM_read_bio_RSAPrivateKey */
/* Demangled: PEM_read_bio_RSAPrivateKey */
int PEM_read_bio_RSAPrivateKey(void);

/* Symbol: PEM_read_bio_PrivateKey */
/* Demangled: PEM_read_bio_PrivateKey */
int PEM_read_bio_PrivateKey(void);

/* Symbol: PEM_read_RSAPrivateKey */
/* Demangled: PEM_read_RSAPrivateKey */
int PEM_read_RSAPrivateKey(void);

/* Symbol: PEM_read_PrivateKey */
/* Demangled: PEM_read_PrivateKey */
int PEM_read_PrivateKey(void);

/* Symbol: PEM_write_bio_RSAPrivateKey */
/* Demangled: PEM_write_bio_RSAPrivateKey */
int PEM_write_bio_RSAPrivateKey(void);

/* Symbol: PEM_write_RSAPrivateKey */
/* Demangled: PEM_write_RSAPrivateKey */
int PEM_write_RSAPrivateKey(void);

/* Symbol: PEM_read_bio_RSAPublicKey */
/* Demangled: PEM_read_bio_RSAPublicKey */
int PEM_read_bio_RSAPublicKey(void);

/* Symbol: PEM_read_RSAPublicKey */
/* Demangled: PEM_read_RSAPublicKey */
int PEM_read_RSAPublicKey(void);

/* Symbol: PEM_write_bio_RSAPublicKey */
/* Demangled: PEM_write_bio_RSAPublicKey */
int PEM_write_bio_RSAPublicKey(void);

/* Symbol: PEM_write_RSAPublicKey */
/* Demangled: PEM_write_RSAPublicKey */
int PEM_write_RSAPublicKey(void);

/* Symbol: PEM_read_bio_RSA_PUBKEY */
/* Demangled: PEM_read_bio_RSA_PUBKEY */
int PEM_read_bio_RSA_PUBKEY(void);

/* Symbol: PEM_read_RSA_PUBKEY */
/* Demangled: PEM_read_RSA_PUBKEY */
int PEM_read_RSA_PUBKEY(void);

/* Symbol: PEM_write_bio_RSA_PUBKEY */
/* Demangled: PEM_write_bio_RSA_PUBKEY */
int PEM_write_bio_RSA_PUBKEY(void);

/* Symbol: PEM_write_RSA_PUBKEY */
/* Demangled: PEM_write_RSA_PUBKEY */
int PEM_write_RSA_PUBKEY(void);

/* Symbol: PEM_read_bio_DSAPrivateKey */
/* Demangled: PEM_read_bio_DSAPrivateKey */
int PEM_read_bio_DSAPrivateKey(void);

/* Symbol: PEM_write_bio_DSAPrivateKey */
/* Demangled: PEM_write_bio_DSAPrivateKey */
int PEM_write_bio_DSAPrivateKey(void);

/* Symbol: PEM_write_DSAPrivateKey */
/* Demangled: PEM_write_DSAPrivateKey */
int PEM_write_DSAPrivateKey(void);

/* Symbol: PEM_read_bio_DSA_PUBKEY */
/* Demangled: PEM_read_bio_DSA_PUBKEY */
int PEM_read_bio_DSA_PUBKEY(void);

/* Symbol: PEM_read_DSA_PUBKEY */
/* Demangled: PEM_read_DSA_PUBKEY */
int PEM_read_DSA_PUBKEY(void);

/* Symbol: PEM_write_bio_DSA_PUBKEY */
/* Demangled: PEM_write_bio_DSA_PUBKEY */
int PEM_write_bio_DSA_PUBKEY(void);

/* Symbol: PEM_write_DSA_PUBKEY */
/* Demangled: PEM_write_DSA_PUBKEY */
int PEM_write_DSA_PUBKEY(void);

/* Symbol: PEM_read_DSAPrivateKey */
/* Demangled: PEM_read_DSAPrivateKey */
int PEM_read_DSAPrivateKey(void);

/* Symbol: PEM_read_bio_DSAparams */
/* Demangled: PEM_read_bio_DSAparams */
int PEM_read_bio_DSAparams(void);

/* Symbol: PEM_read_DSAparams */
/* Demangled: PEM_read_DSAparams */
int PEM_read_DSAparams(void);

/* Symbol: PEM_write_bio_DSAparams */
/* Demangled: PEM_write_bio_DSAparams */
int PEM_write_bio_DSAparams(void);

/* Symbol: PEM_write_DSAparams */
/* Demangled: PEM_write_DSAparams */
int PEM_write_DSAparams(void);

/* Symbol: PEM_read_bio_ECPrivateKey */
/* Demangled: PEM_read_bio_ECPrivateKey */
int PEM_read_bio_ECPrivateKey(void);

/* Symbol: PEM_read_bio_ECPKParameters */
/* Demangled: PEM_read_bio_ECPKParameters */
int PEM_read_bio_ECPKParameters(void);

/* Symbol: PEM_read_ECPKParameters */
/* Demangled: PEM_read_ECPKParameters */
int PEM_read_ECPKParameters(void);

/* Symbol: PEM_write_bio_ECPKParameters */
/* Demangled: PEM_write_bio_ECPKParameters */
int PEM_write_bio_ECPKParameters(void);

/* Symbol: PEM_write_ECPKParameters */
/* Demangled: PEM_write_ECPKParameters */
int PEM_write_ECPKParameters(void);

/* Symbol: PEM_write_bio_ECPrivateKey */
/* Demangled: PEM_write_bio_ECPrivateKey */
int PEM_write_bio_ECPrivateKey(void);

/* Symbol: PEM_write_ECPrivateKey */
/* Demangled: PEM_write_ECPrivateKey */
int PEM_write_ECPrivateKey(void);

/* Symbol: PEM_read_bio_EC_PUBKEY */
/* Demangled: PEM_read_bio_EC_PUBKEY */
int PEM_read_bio_EC_PUBKEY(void);

/* Symbol: PEM_read_EC_PUBKEY */
/* Demangled: PEM_read_EC_PUBKEY */
int PEM_read_EC_PUBKEY(void);

/* Symbol: PEM_write_bio_EC_PUBKEY */
/* Demangled: PEM_write_bio_EC_PUBKEY */
int PEM_write_bio_EC_PUBKEY(void);

/* Symbol: PEM_write_EC_PUBKEY */
/* Demangled: PEM_write_EC_PUBKEY */
int PEM_write_EC_PUBKEY(void);

/* Symbol: PEM_read_ECPrivateKey */
/* Demangled: PEM_read_ECPrivateKey */
int PEM_read_ECPrivateKey(void);

/* Symbol: PEM_read_bio_DHparams */
/* Demangled: PEM_read_bio_DHparams */
int PEM_read_bio_DHparams(void);

/* Symbol: PEM_read_DHparams */
/* Demangled: PEM_read_DHparams */
int PEM_read_DHparams(void);

/* Symbol: PEM_write_bio_DHparams */
/* Demangled: PEM_write_bio_DHparams */
int PEM_write_bio_DHparams(void);

/* Symbol: PEM_write_DHparams */
/* Demangled: PEM_write_DHparams */
int PEM_write_DHparams(void);

/* Symbol: PEM_read_bio_PUBKEY */
/* Demangled: PEM_read_bio_PUBKEY */
int PEM_read_bio_PUBKEY(void);

/* Symbol: PEM_read_PUBKEY */
/* Demangled: PEM_read_PUBKEY */
int PEM_read_PUBKEY(void);

/* Symbol: PEM_write_bio_PUBKEY */
/* Demangled: PEM_write_bio_PUBKEY */
int PEM_write_bio_PUBKEY(void);

/* Symbol: PEM_write_PUBKEY */
/* Demangled: PEM_write_PUBKEY */
int PEM_write_PUBKEY(void);

/* Symbol: PEM_X509_INFO_read */
/* Demangled: PEM_X509_INFO_read */
int PEM_X509_INFO_read(void);

/* Symbol: PEM_X509_INFO_read_bio */
/* Demangled: PEM_X509_INFO_read_bio */
int PEM_X509_INFO_read_bio(void);

/* Symbol: PEM_read_bio */
/* Demangled: PEM_read_bio */
int PEM_read_bio(void);

/* Symbol: PEM_get_EVP_CIPHER_INFO */
/* Demangled: PEM_get_EVP_CIPHER_INFO */
int PEM_get_EVP_CIPHER_INFO(void);

/* Symbol: PEM_do_header */
/* Demangled: PEM_do_header */
int PEM_do_header(void);

/* Symbol: PEM_X509_INFO_write_bio */
/* Demangled: PEM_X509_INFO_write_bio */
int PEM_X509_INFO_write_bio(void);

/* Symbol: PEM_proc_type */
/* Demangled: PEM_proc_type */
int PEM_proc_type(void);

/* Symbol: PEM_dek_info */
/* Demangled: PEM_dek_info */
int PEM_dek_info(void);

/* Symbol: PEM_write_bio */
/* Demangled: PEM_write_bio */
int PEM_write_bio(void);

/* Symbol: PEM_def_callback */
/* Demangled: PEM_def_callback */
int PEM_def_callback(void);

/* Symbol: PEM_bytes_read_bio */
/* Demangled: PEM_bytes_read_bio */
int PEM_bytes_read_bio(void);

/* Symbol: pem_check_suffix */
/* Demangled: pem_check_suffix */
int pem_check_suffix(void);

/* Symbol: PEM_write */
/* Demangled: PEM_write */
int PEM_write(void);

/* Symbol: PEM_read */
/* Demangled: PEM_read */
int PEM_read(void);

/* Symbol: PEM_version */
/* Demangled: PEM_version */
extern void* PEM_version;

/* Symbol: PEM_write_bio_PKCS8PrivateKey_nid */
/* Demangled: PEM_write_bio_PKCS8PrivateKey_nid */
int PEM_write_bio_PKCS8PrivateKey_nid(void);

/* Symbol: PKCS8_encrypt */
/* Demangled: PKCS8_encrypt */
int PKCS8_encrypt(void);

/* Symbol: i2d_PKCS8_PRIV_KEY_INFO_bio */
/* Demangled: i2d_PKCS8_PRIV_KEY_INFO_bio */
int i2d_PKCS8_PRIV_KEY_INFO_bio(void);

/* Symbol: i2d_PKCS8_bio */
/* Demangled: i2d_PKCS8_bio */
int i2d_PKCS8_bio(void);

/* Symbol: PEM_write_bio_PKCS8PrivateKey */
/* Demangled: PEM_write_bio_PKCS8PrivateKey */
int PEM_write_bio_PKCS8PrivateKey(void);

/* Symbol: i2d_PKCS8PrivateKey_bio */
/* Demangled: i2d_PKCS8PrivateKey_bio */
int i2d_PKCS8PrivateKey_bio(void);

/* Symbol: i2d_PKCS8PrivateKey_nid_bio */
/* Demangled: i2d_PKCS8PrivateKey_nid_bio */
int i2d_PKCS8PrivateKey_nid_bio(void);

/* Symbol: d2i_PKCS8PrivateKey_bio */
/* Demangled: d2i_PKCS8PrivateKey_bio */
int d2i_PKCS8PrivateKey_bio(void);

/* Symbol: d2i_PKCS8_bio */
/* Demangled: d2i_PKCS8_bio */
int d2i_PKCS8_bio(void);

/* Symbol: PKCS8_decrypt */
/* Demangled: PKCS8_decrypt */
int PKCS8_decrypt(void);

/* Symbol: i2d_PKCS8PrivateKey_fp */
/* Demangled: i2d_PKCS8PrivateKey_fp */
int i2d_PKCS8PrivateKey_fp(void);

/* Symbol: i2d_PKCS8PrivateKey_nid_fp */
/* Demangled: i2d_PKCS8PrivateKey_nid_fp */
int i2d_PKCS8PrivateKey_nid_fp(void);

/* Symbol: PEM_write_PKCS8PrivateKey_nid */
/* Demangled: PEM_write_PKCS8PrivateKey_nid */
int PEM_write_PKCS8PrivateKey_nid(void);

/* Symbol: PEM_write_PKCS8PrivateKey */
/* Demangled: PEM_write_PKCS8PrivateKey */
int PEM_write_PKCS8PrivateKey(void);

/* Symbol: d2i_PKCS8PrivateKey_fp */
/* Demangled: d2i_PKCS8PrivateKey_fp */
int d2i_PKCS8PrivateKey_fp(void);

/* Symbol: PEM_read_bio_PKCS8 */
/* Demangled: PEM_read_bio_PKCS8 */
int PEM_read_bio_PKCS8(void);

/* Symbol: PEM_read_PKCS8 */
/* Demangled: PEM_read_PKCS8 */
int PEM_read_PKCS8(void);

/* Symbol: PEM_write_bio_PKCS8 */
/* Demangled: PEM_write_bio_PKCS8 */
int PEM_write_bio_PKCS8(void);

/* Symbol: PEM_write_PKCS8 */
/* Demangled: PEM_write_PKCS8 */
int PEM_write_PKCS8(void);

/* Symbol: PEM_read_bio_PKCS8_PRIV_KEY_INFO */
/* Demangled: PEM_read_bio_PKCS8_PRIV_KEY_INFO */
int PEM_read_bio_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: PEM_read_PKCS8_PRIV_KEY_INFO */
/* Demangled: PEM_read_PKCS8_PRIV_KEY_INFO */
int PEM_read_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: PEM_write_bio_PKCS8_PRIV_KEY_INFO */
/* Demangled: PEM_write_bio_PKCS8_PRIV_KEY_INFO */
int PEM_write_bio_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: PEM_write_PKCS8_PRIV_KEY_INFO */
/* Demangled: PEM_write_PKCS8_PRIV_KEY_INFO */
int PEM_write_PKCS8_PRIV_KEY_INFO(void);

/* Symbol: PEM_write_bio_PrivateKey */
/* Demangled: PEM_write_bio_PrivateKey */
int PEM_write_bio_PrivateKey(void);

/* Symbol: PEM_read_bio_Parameters */
/* Demangled: PEM_read_bio_Parameters */
int PEM_read_bio_Parameters(void);

/* Symbol: PEM_write_bio_Parameters */
/* Demangled: PEM_write_bio_Parameters */
int PEM_write_bio_Parameters(void);

/* Symbol: PEM_write_PrivateKey */
/* Demangled: PEM_write_PrivateKey */
int PEM_write_PrivateKey(void);

/* Symbol: PEM_SealInit */
/* Demangled: PEM_SealInit */
int PEM_SealInit(void);

/* Symbol: PEM_SealUpdate */
/* Demangled: PEM_SealUpdate */
int PEM_SealUpdate(void);

/* Symbol: PEM_SealFinal */
/* Demangled: PEM_SealFinal */
int PEM_SealFinal(void);

/* Symbol: PEM_SignInit */
/* Demangled: PEM_SignInit */
int PEM_SignInit(void);

/* Symbol: PEM_SignUpdate */
/* Demangled: PEM_SignUpdate */
int PEM_SignUpdate(void);

/* Symbol: PEM_SignFinal */
/* Demangled: PEM_SignFinal */
int PEM_SignFinal(void);

/* Symbol: PEM_read_bio_X509 */
/* Demangled: PEM_read_bio_X509 */
int PEM_read_bio_X509(void);

/* Symbol: PEM_read_X509 */
/* Demangled: PEM_read_X509 */
int PEM_read_X509(void);

/* Symbol: PEM_write_X509 */
/* Demangled: PEM_write_X509 */
int PEM_write_X509(void);

/* Symbol: PEM_read_bio_X509_AUX */
/* Demangled: PEM_read_bio_X509_AUX */
int PEM_read_bio_X509_AUX(void);

/* Symbol: PEM_read_X509_AUX */
/* Demangled: PEM_read_X509_AUX */
int PEM_read_X509_AUX(void);

/* Symbol: PEM_write_bio_X509_AUX */
/* Demangled: PEM_write_bio_X509_AUX */
int PEM_write_bio_X509_AUX(void);

/* Symbol: PEM_write_X509_AUX */
/* Demangled: PEM_write_X509_AUX */
int PEM_write_X509_AUX(void);

/* Symbol: PEM_read_bio_X509_CERT_PAIR */
/* Demangled: PEM_read_bio_X509_CERT_PAIR */
int PEM_read_bio_X509_CERT_PAIR(void);

/* Symbol: PEM_read_X509_CERT_PAIR */
/* Demangled: PEM_read_X509_CERT_PAIR */
int PEM_read_X509_CERT_PAIR(void);

/* Symbol: PEM_write_bio_X509_CERT_PAIR */
/* Demangled: PEM_write_bio_X509_CERT_PAIR */
int PEM_write_bio_X509_CERT_PAIR(void);

/* Symbol: PEM_write_X509_CERT_PAIR */
/* Demangled: PEM_write_X509_CERT_PAIR */
int PEM_write_X509_CERT_PAIR(void);

/* Symbol: b2i_PrivateKey */
/* Demangled: b2i_PrivateKey */
int b2i_PrivateKey(void);

/* Symbol: b2i_PublicKey */
/* Demangled: b2i_PublicKey */
int b2i_PublicKey(void);

/* Symbol: b2i_PrivateKey_bio */
/* Demangled: b2i_PrivateKey_bio */
int b2i_PrivateKey_bio(void);

/* Symbol: b2i_PublicKey_bio */
/* Demangled: b2i_PublicKey_bio */
int b2i_PublicKey_bio(void);

/* Symbol: i2b_PrivateKey_bio */
/* Demangled: i2b_PrivateKey_bio */
int i2b_PrivateKey_bio(void);

/* Symbol: i2b_PublicKey_bio */
/* Demangled: i2b_PublicKey_bio */
int i2b_PublicKey_bio(void);

/* Symbol: b2i_PVK_bio */
/* Demangled: b2i_PVK_bio */
int b2i_PVK_bio(void);

/* Symbol: i2b_PVK_bio */
/* Demangled: i2b_PVK_bio */
int i2b_PVK_bio(void);

/* Symbol: RSA_new */
/* Demangled: RSA_new */
int RSA_new(void);

/* Symbol: PKCS12_item_pack_safebag */
/* Demangled: PKCS12_item_pack_safebag */
int PKCS12_item_pack_safebag(void);

/* Symbol: PKCS12_BAGS_new */
/* Demangled: PKCS12_BAGS_new */
int PKCS12_BAGS_new(void);

/* Symbol: PKCS12_SAFEBAG_new */
/* Demangled: PKCS12_SAFEBAG_new */
int PKCS12_SAFEBAG_new(void);

/* Symbol: PKCS12_MAKE_KEYBAG */
/* Demangled: PKCS12_MAKE_KEYBAG */
int PKCS12_MAKE_KEYBAG(void);

/* Symbol: PKCS12_MAKE_SHKEYBAG */
/* Demangled: PKCS12_MAKE_SHKEYBAG */
int PKCS12_MAKE_SHKEYBAG(void);

/* Symbol: PKCS12_pack_p7data */
/* Demangled: PKCS12_pack_p7data */
int PKCS12_pack_p7data(void);

/* Symbol: PKCS7_new */
/* Demangled: PKCS7_new */
int PKCS7_new(void);

/* Symbol: PKCS12_SAFEBAGS_it */
/* Demangled: PKCS12_SAFEBAGS_it */
extern void* PKCS12_SAFEBAGS_it;

/* Symbol: PKCS12_unpack_p7data */
/* Demangled: PKCS12_unpack_p7data */
int PKCS12_unpack_p7data(void);

/* Symbol: PKCS12_pack_p7encdata */
/* Demangled: PKCS12_pack_p7encdata */
int PKCS12_pack_p7encdata(void);

/* Symbol: PKCS7_set_type */
/* Demangled: PKCS7_set_type */
int PKCS7_set_type(void);

/* Symbol: PKCS12_item_i2d_encrypt */
/* Demangled: PKCS12_item_i2d_encrypt */
int PKCS12_item_i2d_encrypt(void);

/* Symbol: PKCS12_unpack_p7encdata */
/* Demangled: PKCS12_unpack_p7encdata */
int PKCS12_unpack_p7encdata(void);

/* Symbol: PKCS12_item_decrypt_d2i */
/* Demangled: PKCS12_item_decrypt_d2i */
int PKCS12_item_decrypt_d2i(void);

/* Symbol: PKCS12_decrypt_skey */
/* Demangled: PKCS12_decrypt_skey */
int PKCS12_decrypt_skey(void);

/* Symbol: PKCS12_pack_authsafes */
/* Demangled: PKCS12_pack_authsafes */
int PKCS12_pack_authsafes(void);

/* Symbol: PKCS12_AUTHSAFES_it */
/* Demangled: PKCS12_AUTHSAFES_it */
extern void* PKCS12_AUTHSAFES_it;

/* Symbol: PKCS12_unpack_authsafes */
/* Demangled: PKCS12_unpack_authsafes */
int PKCS12_unpack_authsafes(void);

/* Symbol: d2i_PKCS12 */
/* Demangled: d2i_PKCS12 */
int d2i_PKCS12(void);

/* Symbol: PKCS12_it */
/* Demangled: PKCS12_it */
extern void* PKCS12_it;

/* Symbol: i2d_PKCS12 */
/* Demangled: i2d_PKCS12 */
int i2d_PKCS12(void);

/* Symbol: PKCS12_new */
/* Demangled: PKCS12_new */
int PKCS12_new(void);

/* Symbol: PKCS12_free */
/* Demangled: PKCS12_free */
int PKCS12_free(void);

/* Symbol: d2i_PKCS12_MAC_DATA */
/* Demangled: d2i_PKCS12_MAC_DATA */
int d2i_PKCS12_MAC_DATA(void);

/* Symbol: PKCS12_MAC_DATA_it */
/* Demangled: PKCS12_MAC_DATA_it */
extern void* PKCS12_MAC_DATA_it;

/* Symbol: i2d_PKCS12_MAC_DATA */
/* Demangled: i2d_PKCS12_MAC_DATA */
int i2d_PKCS12_MAC_DATA(void);

/* Symbol: PKCS12_MAC_DATA_new */
/* Demangled: PKCS12_MAC_DATA_new */
int PKCS12_MAC_DATA_new(void);

/* Symbol: PKCS12_MAC_DATA_free */
/* Demangled: PKCS12_MAC_DATA_free */
int PKCS12_MAC_DATA_free(void);

/* Symbol: d2i_PKCS12_BAGS */
/* Demangled: d2i_PKCS12_BAGS */
int d2i_PKCS12_BAGS(void);

/* Symbol: PKCS12_BAGS_it */
/* Demangled: PKCS12_BAGS_it */
extern void* PKCS12_BAGS_it;

/* Symbol: i2d_PKCS12_BAGS */
/* Demangled: i2d_PKCS12_BAGS */
int i2d_PKCS12_BAGS(void);

/* Symbol: PKCS12_BAGS_free */
/* Demangled: PKCS12_BAGS_free */
int PKCS12_BAGS_free(void);

/* Symbol: d2i_PKCS12_SAFEBAG */
/* Demangled: d2i_PKCS12_SAFEBAG */
int d2i_PKCS12_SAFEBAG(void);

/* Symbol: PKCS12_SAFEBAG_it */
/* Demangled: PKCS12_SAFEBAG_it */
extern void* PKCS12_SAFEBAG_it;

/* Symbol: i2d_PKCS12_SAFEBAG */
/* Demangled: i2d_PKCS12_SAFEBAG */
int i2d_PKCS12_SAFEBAG(void);

/* Symbol: PKCS12_SAFEBAG_free */
/* Demangled: PKCS12_SAFEBAG_free */
int PKCS12_SAFEBAG_free(void);

/* Symbol: PKCS7_it */
/* Demangled: PKCS7_it */
extern void* PKCS7_it;

/* Symbol: PKCS12_add_localkeyid */
/* Demangled: PKCS12_add_localkeyid */
int PKCS12_add_localkeyid(void);

/* Symbol: PKCS8_add_keyusage */
/* Demangled: PKCS8_add_keyusage */
int PKCS8_add_keyusage(void);

/* Symbol: PKCS12_add_friendlyname_asc */
/* Demangled: PKCS12_add_friendlyname_asc */
int PKCS12_add_friendlyname_asc(void);

/* Symbol: PKCS12_add_friendlyname_uni */
/* Demangled: PKCS12_add_friendlyname_uni */
int PKCS12_add_friendlyname_uni(void);

/* Symbol: PKCS12_add_CSPName_asc */
/* Demangled: PKCS12_add_CSPName_asc */
int PKCS12_add_CSPName_asc(void);

/* Symbol: PKCS12_get_attr_gen */
/* Demangled: PKCS12_get_attr_gen */
int PKCS12_get_attr_gen(void);

/* Symbol: PKCS12_get_friendlyname */
/* Demangled: PKCS12_get_friendlyname */
int PKCS12_get_friendlyname(void);

/* Symbol: OPENSSL_uni2asc */
/* Demangled: OPENSSL_uni2asc */
int OPENSSL_uni2asc(void);

/* Symbol: PKCS12_PBE_add */
/* Demangled: PKCS12_PBE_add */
int PKCS12_PBE_add(void);

/* Symbol: PKCS12_key_gen_asc */
/* Demangled: PKCS12_key_gen_asc */
int PKCS12_key_gen_asc(void);

/* Symbol: PKCS12_create */
/* Demangled: PKCS12_create */
int PKCS12_create(void);

/* Symbol: X509_digest */
/* Demangled: X509_digest */
int X509_digest(void);

/* Symbol: PKCS12_add_cert */
/* Demangled: PKCS12_add_cert */
int PKCS12_add_cert(void);

/* Symbol: PKCS12_add_safe */
/* Demangled: PKCS12_add_safe */
int PKCS12_add_safe(void);

/* Symbol: PKCS12_add_key */
/* Demangled: PKCS12_add_key */
int PKCS12_add_key(void);

/* Symbol: PKCS12_add_safes */
/* Demangled: PKCS12_add_safes */
int PKCS12_add_safes(void);

/* Symbol: PKCS12_set_mac */
/* Demangled: PKCS12_set_mac */
int PKCS12_set_mac(void);

/* Symbol: PKCS7_free */
/* Demangled: PKCS7_free */
int PKCS7_free(void);

/* Symbol: PKCS12_x5092certbag */
/* Demangled: PKCS12_x5092certbag */
int PKCS12_x5092certbag(void);

/* Symbol: PKCS12_init */
/* Demangled: PKCS12_init */
int PKCS12_init(void);

/* Symbol: PKCS12_pbe_crypt */
/* Demangled: PKCS12_pbe_crypt */
int PKCS12_pbe_crypt(void);

/* Symbol: OPENSSL_asc2uni */
/* Demangled: OPENSSL_asc2uni */
int OPENSSL_asc2uni(void);

/* Symbol: PKCS12_key_gen_uni */
/* Demangled: PKCS12_key_gen_uni */
int PKCS12_key_gen_uni(void);

/* Symbol: PKCS12_parse */
/* Demangled: PKCS12_parse */
int PKCS12_parse(void);

/* Symbol: PKCS12_verify_mac */
/* Demangled: PKCS12_verify_mac */
int PKCS12_verify_mac(void);

/* Symbol: PKCS12_certbag2x509 */
/* Demangled: PKCS12_certbag2x509 */
int PKCS12_certbag2x509(void);

/* Symbol: PKCS12_gen_mac */
/* Demangled: PKCS12_gen_mac */
int PKCS12_gen_mac(void);

/* Symbol: PKCS12_setup_mac */
/* Demangled: PKCS12_setup_mac */
int PKCS12_setup_mac(void);

/* Symbol: PKCS12_newpass */
/* Demangled: PKCS12_newpass */
int PKCS12_newpass(void);

/* Symbol: i2d_PKCS12_bio */
/* Demangled: i2d_PKCS12_bio */
int i2d_PKCS12_bio(void);

/* Symbol: i2d_PKCS12_fp */
/* Demangled: i2d_PKCS12_fp */
int i2d_PKCS12_fp(void);

/* Symbol: d2i_PKCS12_bio */
/* Demangled: d2i_PKCS12_bio */
int d2i_PKCS12_bio(void);

/* Symbol: d2i_PKCS12_fp */
/* Demangled: d2i_PKCS12_fp */
int d2i_PKCS12_fp(void);

/* Symbol: PKCS12_x509crl2certbag */
/* Demangled: PKCS12_x509crl2certbag */
int PKCS12_x509crl2certbag(void);

/* Symbol: PKCS12_certbag2x509crl */
/* Demangled: PKCS12_certbag2x509crl */
int PKCS12_certbag2x509crl(void);

/* Symbol: i2d_PKCS7_NDEF */
/* Demangled: i2d_PKCS7_NDEF */
int i2d_PKCS7_NDEF(void);

/* Symbol: PKCS7_dup */
/* Demangled: PKCS7_dup */
int PKCS7_dup(void);

/* Symbol: d2i_PKCS7_SIGNED */
/* Demangled: d2i_PKCS7_SIGNED */
int d2i_PKCS7_SIGNED(void);

/* Symbol: PKCS7_SIGNED_it */
/* Demangled: PKCS7_SIGNED_it */
extern void* PKCS7_SIGNED_it;

/* Symbol: i2d_PKCS7_SIGNED */
/* Demangled: i2d_PKCS7_SIGNED */
int i2d_PKCS7_SIGNED(void);

/* Symbol: PKCS7_SIGNED_new */
/* Demangled: PKCS7_SIGNED_new */
int PKCS7_SIGNED_new(void);

/* Symbol: PKCS7_SIGNED_free */
/* Demangled: PKCS7_SIGNED_free */
int PKCS7_SIGNED_free(void);

/* Symbol: d2i_PKCS7_SIGNER_INFO */
/* Demangled: d2i_PKCS7_SIGNER_INFO */
int d2i_PKCS7_SIGNER_INFO(void);

/* Symbol: PKCS7_SIGNER_INFO_it */
/* Demangled: PKCS7_SIGNER_INFO_it */
extern void* PKCS7_SIGNER_INFO_it;

/* Symbol: i2d_PKCS7_SIGNER_INFO */
/* Demangled: i2d_PKCS7_SIGNER_INFO */
int i2d_PKCS7_SIGNER_INFO(void);

/* Symbol: PKCS7_SIGNER_INFO_new */
/* Demangled: PKCS7_SIGNER_INFO_new */
int PKCS7_SIGNER_INFO_new(void);

/* Symbol: PKCS7_SIGNER_INFO_free */
/* Demangled: PKCS7_SIGNER_INFO_free */
int PKCS7_SIGNER_INFO_free(void);

/* Symbol: d2i_PKCS7_ISSUER_AND_SERIAL */
/* Demangled: d2i_PKCS7_ISSUER_AND_SERIAL */
int d2i_PKCS7_ISSUER_AND_SERIAL(void);

/* Symbol: PKCS7_ISSUER_AND_SERIAL_it */
/* Demangled: PKCS7_ISSUER_AND_SERIAL_it */
extern void* PKCS7_ISSUER_AND_SERIAL_it;

/* Symbol: i2d_PKCS7_ISSUER_AND_SERIAL */
/* Demangled: i2d_PKCS7_ISSUER_AND_SERIAL */
int i2d_PKCS7_ISSUER_AND_SERIAL(void);

/* Symbol: PKCS7_ISSUER_AND_SERIAL_new */
/* Demangled: PKCS7_ISSUER_AND_SERIAL_new */
int PKCS7_ISSUER_AND_SERIAL_new(void);

/* Symbol: PKCS7_ISSUER_AND_SERIAL_free */
/* Demangled: PKCS7_ISSUER_AND_SERIAL_free */
int PKCS7_ISSUER_AND_SERIAL_free(void);

/* Symbol: d2i_PKCS7_ENVELOPE */
/* Demangled: d2i_PKCS7_ENVELOPE */
int d2i_PKCS7_ENVELOPE(void);

/* Symbol: PKCS7_ENVELOPE_it */
/* Demangled: PKCS7_ENVELOPE_it */
extern void* PKCS7_ENVELOPE_it;

/* Symbol: i2d_PKCS7_ENVELOPE */
/* Demangled: i2d_PKCS7_ENVELOPE */
int i2d_PKCS7_ENVELOPE(void);

/* Symbol: PKCS7_ENVELOPE_new */
/* Demangled: PKCS7_ENVELOPE_new */
int PKCS7_ENVELOPE_new(void);

/* Symbol: PKCS7_ENVELOPE_free */
/* Demangled: PKCS7_ENVELOPE_free */
int PKCS7_ENVELOPE_free(void);

/* Symbol: d2i_PKCS7_RECIP_INFO */
/* Demangled: d2i_PKCS7_RECIP_INFO */
int d2i_PKCS7_RECIP_INFO(void);

/* Symbol: PKCS7_RECIP_INFO_it */
/* Demangled: PKCS7_RECIP_INFO_it */
extern void* PKCS7_RECIP_INFO_it;

/* Symbol: i2d_PKCS7_RECIP_INFO */
/* Demangled: i2d_PKCS7_RECIP_INFO */
int i2d_PKCS7_RECIP_INFO(void);

/* Symbol: PKCS7_RECIP_INFO_new */
/* Demangled: PKCS7_RECIP_INFO_new */
int PKCS7_RECIP_INFO_new(void);

/* Symbol: PKCS7_RECIP_INFO_free */
/* Demangled: PKCS7_RECIP_INFO_free */
int PKCS7_RECIP_INFO_free(void);

/* Symbol: d2i_PKCS7_ENC_CONTENT */
/* Demangled: d2i_PKCS7_ENC_CONTENT */
int d2i_PKCS7_ENC_CONTENT(void);

/* Symbol: PKCS7_ENC_CONTENT_it */
/* Demangled: PKCS7_ENC_CONTENT_it */
extern void* PKCS7_ENC_CONTENT_it;

/* Symbol: i2d_PKCS7_ENC_CONTENT */
/* Demangled: i2d_PKCS7_ENC_CONTENT */
int i2d_PKCS7_ENC_CONTENT(void);

/* Symbol: PKCS7_ENC_CONTENT_new */
/* Demangled: PKCS7_ENC_CONTENT_new */
int PKCS7_ENC_CONTENT_new(void);

/* Symbol: PKCS7_ENC_CONTENT_free */
/* Demangled: PKCS7_ENC_CONTENT_free */
int PKCS7_ENC_CONTENT_free(void);

/* Symbol: d2i_PKCS7_SIGN_ENVELOPE */
/* Demangled: d2i_PKCS7_SIGN_ENVELOPE */
int d2i_PKCS7_SIGN_ENVELOPE(void);

/* Symbol: PKCS7_SIGN_ENVELOPE_it */
/* Demangled: PKCS7_SIGN_ENVELOPE_it */
extern void* PKCS7_SIGN_ENVELOPE_it;

/* Symbol: i2d_PKCS7_SIGN_ENVELOPE */
/* Demangled: i2d_PKCS7_SIGN_ENVELOPE */
int i2d_PKCS7_SIGN_ENVELOPE(void);

/* Symbol: PKCS7_SIGN_ENVELOPE_new */
/* Demangled: PKCS7_SIGN_ENVELOPE_new */
int PKCS7_SIGN_ENVELOPE_new(void);

/* Symbol: PKCS7_SIGN_ENVELOPE_free */
/* Demangled: PKCS7_SIGN_ENVELOPE_free */
int PKCS7_SIGN_ENVELOPE_free(void);

/* Symbol: d2i_PKCS7_ENCRYPT */
/* Demangled: d2i_PKCS7_ENCRYPT */
int d2i_PKCS7_ENCRYPT(void);

/* Symbol: PKCS7_ENCRYPT_it */
/* Demangled: PKCS7_ENCRYPT_it */
extern void* PKCS7_ENCRYPT_it;

/* Symbol: i2d_PKCS7_ENCRYPT */
/* Demangled: i2d_PKCS7_ENCRYPT */
int i2d_PKCS7_ENCRYPT(void);

/* Symbol: PKCS7_ENCRYPT_new */
/* Demangled: PKCS7_ENCRYPT_new */
int PKCS7_ENCRYPT_new(void);

/* Symbol: PKCS7_ENCRYPT_free */
/* Demangled: PKCS7_ENCRYPT_free */
int PKCS7_ENCRYPT_free(void);

/* Symbol: d2i_PKCS7_DIGEST */
/* Demangled: d2i_PKCS7_DIGEST */
int d2i_PKCS7_DIGEST(void);

/* Symbol: PKCS7_DIGEST_it */
/* Demangled: PKCS7_DIGEST_it */
extern void* PKCS7_DIGEST_it;

/* Symbol: i2d_PKCS7_DIGEST */
/* Demangled: i2d_PKCS7_DIGEST */
int i2d_PKCS7_DIGEST(void);

/* Symbol: PKCS7_DIGEST_new */
/* Demangled: PKCS7_DIGEST_new */
int PKCS7_DIGEST_new(void);

/* Symbol: PKCS7_DIGEST_free */
/* Demangled: PKCS7_DIGEST_free */
int PKCS7_DIGEST_free(void);

/* Symbol: PKCS7_print_ctx */
/* Demangled: PKCS7_print_ctx */
int PKCS7_print_ctx(void);

/* Symbol: PKCS7_dataFinal */
/* Demangled: PKCS7_dataFinal */
int PKCS7_dataFinal(void);

/* Symbol: PKCS7_stream */
/* Demangled: PKCS7_stream */
int PKCS7_stream(void);

/* Symbol: PKCS7_dataInit */
/* Demangled: PKCS7_dataInit */
int PKCS7_dataInit(void);

/* Symbol: PKCS7_ATTR_SIGN_it */
/* Demangled: PKCS7_ATTR_SIGN_it */
extern void* PKCS7_ATTR_SIGN_it;

/* Symbol: PKCS7_ATTR_VERIFY_it */
/* Demangled: PKCS7_ATTR_VERIFY_it */
extern void* PKCS7_ATTR_VERIFY_it;

/* Symbol: PKCS7_add_attrib_smimecap */
/* Demangled: PKCS7_add_attrib_smimecap */
int PKCS7_add_attrib_smimecap(void);

/* Symbol: PKCS7_add_signed_attribute */
/* Demangled: PKCS7_add_signed_attribute */
int PKCS7_add_signed_attribute(void);

/* Symbol: PKCS7_get_smimecap */
/* Demangled: PKCS7_get_smimecap */
int PKCS7_get_smimecap(void);

/* Symbol: PKCS7_get_signed_attribute */
/* Demangled: PKCS7_get_signed_attribute */
int PKCS7_get_signed_attribute(void);

/* Symbol: PKCS7_simple_smimecap */
/* Demangled: PKCS7_simple_smimecap */
int PKCS7_simple_smimecap(void);

/* Symbol: PKCS7_add_attrib_content_type */
/* Demangled: PKCS7_add_attrib_content_type */
int PKCS7_add_attrib_content_type(void);

/* Symbol: PKCS7_add0_attrib_signing_time */
/* Demangled: PKCS7_add0_attrib_signing_time */
int PKCS7_add0_attrib_signing_time(void);

/* Symbol: PKCS7_add1_attrib_digest */
/* Demangled: PKCS7_add1_attrib_digest */
int PKCS7_add1_attrib_digest(void);

/* Symbol: PKCS7_ctrl */
/* Demangled: PKCS7_ctrl */
int PKCS7_ctrl(void);

/* Symbol: PKCS7_dataDecode */
/* Demangled: PKCS7_dataDecode */
int PKCS7_dataDecode(void);

/* Symbol: PKCS7_SIGNER_INFO_sign */
/* Demangled: PKCS7_SIGNER_INFO_sign */
int PKCS7_SIGNER_INFO_sign(void);

/* Symbol: PKCS7_dataVerify */
/* Demangled: PKCS7_dataVerify */
int PKCS7_dataVerify(void);

/* Symbol: X509_find_by_issuer_and_serial */
/* Demangled: X509_find_by_issuer_and_serial */
int X509_find_by_issuer_and_serial(void);

/* Symbol: PKCS7_signatureVerify */
/* Demangled: PKCS7_signatureVerify */
int PKCS7_signatureVerify(void);

/* Symbol: PKCS7_digest_from_attributes */
/* Demangled: PKCS7_digest_from_attributes */
int PKCS7_digest_from_attributes(void);

/* Symbol: PKCS7_get_issuer_and_serial */
/* Demangled: PKCS7_get_issuer_and_serial */
int PKCS7_get_issuer_and_serial(void);

/* Symbol: PKCS7_get_attribute */
/* Demangled: PKCS7_get_attribute */
int PKCS7_get_attribute(void);

/* Symbol: PKCS7_set_signed_attributes */
/* Demangled: PKCS7_set_signed_attributes */
int PKCS7_set_signed_attributes(void);

/* Symbol: sk_dup */
/* Demangled: sk_dup */
int sk_dup(void);

/* Symbol: PKCS7_set_attributes */
/* Demangled: PKCS7_set_attributes */
int PKCS7_set_attributes(void);

/* Symbol: PKCS7_add_attribute */
/* Demangled: PKCS7_add_attribute */
int PKCS7_add_attribute(void);

/* Symbol: PKCS7_content_new */
/* Demangled: PKCS7_content_new */
int PKCS7_content_new(void);

/* Symbol: PKCS7_set_content */
/* Demangled: PKCS7_set_content */
int PKCS7_set_content(void);

/* Symbol: PKCS7_set0_type_other */
/* Demangled: PKCS7_set0_type_other */
int PKCS7_set0_type_other(void);

/* Symbol: PKCS7_add_signer */
/* Demangled: PKCS7_add_signer */
int PKCS7_add_signer(void);

/* Symbol: PKCS7_add_certificate */
/* Demangled: PKCS7_add_certificate */
int PKCS7_add_certificate(void);

/* Symbol: PKCS7_add_crl */
/* Demangled: PKCS7_add_crl */
int PKCS7_add_crl(void);

/* Symbol: PKCS7_SIGNER_INFO_set */
/* Demangled: PKCS7_SIGNER_INFO_set */
int PKCS7_SIGNER_INFO_set(void);

/* Symbol: PKCS7_add_signature */
/* Demangled: PKCS7_add_signature */
int PKCS7_add_signature(void);

/* Symbol: PKCS7_set_digest */
/* Demangled: PKCS7_set_digest */
int PKCS7_set_digest(void);

/* Symbol: PKCS7_get_signer_info */
/* Demangled: PKCS7_get_signer_info */
int PKCS7_get_signer_info(void);

/* Symbol: PKCS7_RECIP_INFO_get0_alg */
/* Demangled: PKCS7_RECIP_INFO_get0_alg */
int PKCS7_RECIP_INFO_get0_alg(void);

/* Symbol: PKCS7_add_recipient */
/* Demangled: PKCS7_add_recipient */
int PKCS7_add_recipient(void);

/* Symbol: PKCS7_RECIP_INFO_set */
/* Demangled: PKCS7_RECIP_INFO_set */
int PKCS7_RECIP_INFO_set(void);

/* Symbol: PKCS7_add_recipient_info */
/* Demangled: PKCS7_add_recipient_info */
int PKCS7_add_recipient_info(void);

/* Symbol: PKCS7_cert_from_signer_info */
/* Demangled: PKCS7_cert_from_signer_info */
int PKCS7_cert_from_signer_info(void);

/* Symbol: PKCS7_set_cipher */
/* Demangled: PKCS7_set_cipher */
int PKCS7_set_cipher(void);

/* Symbol: i2d_PKCS7_bio_stream */
/* Demangled: i2d_PKCS7_bio_stream */
int i2d_PKCS7_bio_stream(void);

/* Symbol: PEM_write_bio_PKCS7_stream */
/* Demangled: PEM_write_bio_PKCS7_stream */
int PEM_write_bio_PKCS7_stream(void);

/* Symbol: SMIME_write_PKCS7 */
/* Demangled: SMIME_write_PKCS7 */
int SMIME_write_PKCS7(void);

/* Symbol: SMIME_read_PKCS7 */
/* Demangled: SMIME_read_PKCS7 */
int SMIME_read_PKCS7(void);

/* Symbol: PKCS7_sign */
/* Demangled: PKCS7_sign */
int PKCS7_sign(void);

/* Symbol: PKCS7_sign_add_signer */
/* Demangled: PKCS7_sign_add_signer */
int PKCS7_sign_add_signer(void);

/* Symbol: PKCS7_final */
/* Demangled: PKCS7_final */
int PKCS7_final(void);

/* Symbol: PKCS7_verify */
/* Demangled: PKCS7_verify */
int PKCS7_verify(void);

/* Symbol: PKCS7_get0_signers */
/* Demangled: PKCS7_get0_signers */
int PKCS7_get0_signers(void);

/* Symbol: PKCS7_encrypt */
/* Demangled: PKCS7_encrypt */
int PKCS7_encrypt(void);

/* Symbol: PKCS7_decrypt */
/* Demangled: PKCS7_decrypt */
int PKCS7_decrypt(void);

/* Symbol: pitem_new */
/* Demangled: pitem_new */
int pitem_new(void);

/* Symbol: pitem_free */
/* Demangled: pitem_free */
int pitem_free(void);

/* Symbol: pqueue_new */
/* Demangled: pqueue_new */
int pqueue_new(void);

/* Symbol: pqueue_free */
/* Demangled: pqueue_free */
int pqueue_free(void);

/* Symbol: pqueue_insert */
/* Demangled: pqueue_insert */
int pqueue_insert(void);

/* Symbol: pqueue_peek */
/* Demangled: pqueue_peek */
int pqueue_peek(void);

/* Symbol: pqueue_pop */
/* Demangled: pqueue_pop */
int pqueue_pop(void);

/* Symbol: pqueue_find */
/* Demangled: pqueue_find */
int pqueue_find(void);

/* Symbol: pqueue_print */
/* Demangled: pqueue_print */
int pqueue_print(void);

/* Symbol: pqueue_iterator */
/* Demangled: pqueue_iterator */
int pqueue_iterator(void);

/* Symbol: pqueue_next */
/* Demangled: pqueue_next */
int pqueue_next(void);

/* Symbol: pqueue_size */
/* Demangled: pqueue_size */
int pqueue_size(void);

/* Symbol: ssleay_rand_bytes */
/* Demangled: ssleay_rand_bytes */
int ssleay_rand_bytes(void);

/* Symbol: RAND_poll */
/* Demangled: RAND_poll */
int RAND_poll(void);

/* Symbol: RAND_SSLeay */
/* Demangled: RAND_SSLeay */
int RAND_SSLeay(void);

/* Symbol: rand_ssleay_meth */
/* Demangled: rand_ssleay_meth */
extern void* rand_ssleay_meth;

/* Symbol: RAND_version */
/* Demangled: RAND_version */
extern void* RAND_version;

/* Symbol: RAND_query_egd_bytes */
/* Demangled: RAND_query_egd_bytes */
int RAND_query_egd_bytes(void);

/* Symbol: RAND_egd_bytes */
/* Demangled: RAND_egd_bytes */
int RAND_egd_bytes(void);

/* Symbol: RAND_status */
/* Demangled: RAND_status */
int RAND_status(void);

/* Symbol: RAND_egd */
/* Demangled: RAND_egd */
int RAND_egd(void);

/* Symbol: RAND_get_rand_method */
/* Demangled: RAND_get_rand_method */
int RAND_get_rand_method(void);

/* Symbol: RAND_set_rand_engine */
/* Demangled: RAND_set_rand_engine */
int RAND_set_rand_engine(void);

/* Symbol: RAND_cleanup */
/* Demangled: RAND_cleanup */
int RAND_cleanup(void);

/* Symbol: RAND_load_file */
/* Demangled: RAND_load_file */
int RAND_load_file(void);

/* Symbol: RAND_write_file */
/* Demangled: RAND_write_file */
int RAND_write_file(void);

/* Symbol: RAND_file_name */
/* Demangled: RAND_file_name */
int RAND_file_name(void);

/* Symbol: OPENSSL_issetugid */
/* Demangled: OPENSSL_issetugid */
int OPENSSL_issetugid(void);

/* Symbol: RC2_encrypt */
/* Demangled: RC2_encrypt */
int RC2_encrypt(void);

/* Symbol: RC2_decrypt */
/* Demangled: RC2_decrypt */
int RC2_decrypt(void);

/* Symbol: RC2_version */
/* Demangled: RC2_version */
extern void* RC2_version;

/* Symbol: RC4_options */
/* Demangled: RC4_options */
int RC4_options(void);

/* Symbol: private_RC4_set_key */
/* Demangled: private_RC4_set_key */
int private_RC4_set_key(void);

/* Symbol: RC4_version */
/* Demangled: RC4_version */
extern void* RC4_version;

/* Symbol: RSA_PSS_PARAMS_free */
/* Demangled: RSA_PSS_PARAMS_free */
int RSA_PSS_PARAMS_free(void);

/* Symbol: RSA_PSS_PARAMS_new */
/* Demangled: RSA_PSS_PARAMS_new */
int RSA_PSS_PARAMS_new(void);

/* Symbol: RSA_PSS_PARAMS_it */
/* Demangled: RSA_PSS_PARAMS_it */
extern void* RSA_PSS_PARAMS_it;

/* Symbol: d2i_RSA_PSS_PARAMS */
/* Demangled: d2i_RSA_PSS_PARAMS */
int d2i_RSA_PSS_PARAMS(void);

/* Symbol: i2d_RSA_PSS_PARAMS */
/* Demangled: i2d_RSA_PSS_PARAMS */
int i2d_RSA_PSS_PARAMS(void);

/* Symbol: RSAPrivateKey_it */
/* Demangled: RSAPrivateKey_it */
extern void* RSAPrivateKey_it;

/* Symbol: RSAPublicKey_it */
/* Demangled: RSAPublicKey_it */
extern void* RSAPublicKey_it;

/* Symbol: RSAPublicKey_dup */
/* Demangled: RSAPublicKey_dup */
int RSAPublicKey_dup(void);

/* Symbol: RSAPrivateKey_dup */
/* Demangled: RSAPrivateKey_dup */
int RSAPrivateKey_dup(void);

/* Symbol: RSA_check_key */
/* Demangled: RSA_check_key */
int RSA_check_key(void);

/* Symbol: RSA_private_encrypt */
/* Demangled: RSA_private_encrypt */
int RSA_private_encrypt(void);

/* Symbol: RSA_public_decrypt */
/* Demangled: RSA_public_decrypt */
int RSA_public_decrypt(void);

/* Symbol: RSA_flags */
/* Demangled: RSA_flags */
int RSA_flags(void);

/* Symbol: RSA_blinding_off */
/* Demangled: RSA_blinding_off */
int RSA_blinding_off(void);

/* Symbol: RSA_blinding_on */
/* Demangled: RSA_blinding_on */
int RSA_blinding_on(void);

/* Symbol: RSA_setup_blinding */
/* Demangled: RSA_setup_blinding */
int RSA_setup_blinding(void);

/* Symbol: RSA_PKCS1_SSLeay */
/* Demangled: RSA_PKCS1_SSLeay */
int RSA_PKCS1_SSLeay(void);

/* Symbol: RSA_padding_add_PKCS1_type_2 */
/* Demangled: RSA_padding_add_PKCS1_type_2 */
int RSA_padding_add_PKCS1_type_2(void);

/* Symbol: RSA_padding_add_SSLv23 */
/* Demangled: RSA_padding_add_SSLv23 */
int RSA_padding_add_SSLv23(void);

/* Symbol: RSA_padding_add_none */
/* Demangled: RSA_padding_add_none */
int RSA_padding_add_none(void);

/* Symbol: RSA_padding_add_PKCS1_OAEP */
/* Demangled: RSA_padding_add_PKCS1_OAEP */
int RSA_padding_add_PKCS1_OAEP(void);

/* Symbol: RSA_padding_check_X931 */
/* Demangled: RSA_padding_check_X931 */
int RSA_padding_check_X931(void);

/* Symbol: RSA_padding_check_PKCS1_type_1 */
/* Demangled: RSA_padding_check_PKCS1_type_1 */
int RSA_padding_check_PKCS1_type_1(void);

/* Symbol: RSA_padding_check_none */
/* Demangled: RSA_padding_check_none */
int RSA_padding_check_none(void);

/* Symbol: RSA_padding_add_PKCS1_type_1 */
/* Demangled: RSA_padding_add_PKCS1_type_1 */
int RSA_padding_add_PKCS1_type_1(void);

/* Symbol: RSA_padding_add_X931 */
/* Demangled: RSA_padding_add_X931 */
int RSA_padding_add_X931(void);

/* Symbol: RSA_padding_check_PKCS1_type_2 */
/* Demangled: RSA_padding_check_PKCS1_type_2 */
int RSA_padding_check_PKCS1_type_2(void);

/* Symbol: RSA_padding_check_SSLv23 */
/* Demangled: RSA_padding_check_SSLv23 */
int RSA_padding_check_SSLv23(void);

/* Symbol: RSA_padding_check_PKCS1_OAEP */
/* Demangled: RSA_padding_check_PKCS1_OAEP */
int RSA_padding_check_PKCS1_OAEP(void);

/* Symbol: RSA_generate_key_ex */
/* Demangled: RSA_generate_key_ex */
int RSA_generate_key_ex(void);

/* Symbol: RSA_new_method */
/* Demangled: RSA_new_method */
int RSA_new_method(void);

/* Symbol: RSA_set_default_method */
/* Demangled: RSA_set_default_method */
int RSA_set_default_method(void);

/* Symbol: RSA_get_default_method */
/* Demangled: RSA_get_default_method */
int RSA_get_default_method(void);

/* Symbol: RSA_get_method */
/* Demangled: RSA_get_method */
int RSA_get_method(void);

/* Symbol: RSA_set_method */
/* Demangled: RSA_set_method */
int RSA_set_method(void);

/* Symbol: RSA_get_ex_new_index */
/* Demangled: RSA_get_ex_new_index */
int RSA_get_ex_new_index(void);

/* Symbol: RSA_set_ex_data */
/* Demangled: RSA_set_ex_data */
int RSA_set_ex_data(void);

/* Symbol: RSA_get_ex_data */
/* Demangled: RSA_get_ex_data */
int RSA_get_ex_data(void);

/* Symbol: RSA_memory_lock */
/* Demangled: RSA_memory_lock */
int RSA_memory_lock(void);

/* Symbol: RSA_version */
/* Demangled: RSA_version */
extern void* RSA_version;

/* Symbol: RSA_null_method */
/* Demangled: RSA_null_method */
int RSA_null_method(void);

/* Symbol: PKCS1_MGF1 */
/* Demangled: PKCS1_MGF1 */
int PKCS1_MGF1(void);

/* Symbol: RSA_sign_ASN1_OCTET_STRING */
/* Demangled: RSA_sign_ASN1_OCTET_STRING */
int RSA_sign_ASN1_OCTET_STRING(void);

/* Symbol: RSA_X931_hash_id */
/* Demangled: RSA_X931_hash_id */
int RSA_X931_hash_id(void);

/* Symbol: RSA_padding_add_PKCS1_PSS_mgf1 */
/* Demangled: RSA_padding_add_PKCS1_PSS_mgf1 */
int RSA_padding_add_PKCS1_PSS_mgf1(void);

/* Symbol: RSA_verify_PKCS1_PSS_mgf1 */
/* Demangled: RSA_verify_PKCS1_PSS_mgf1 */
int RSA_verify_PKCS1_PSS_mgf1(void);

/* Symbol: int_rsa_verify */
/* Demangled: int_rsa_verify */
int int_rsa_verify(void);

/* Symbol: RSA_print_fp */
/* Demangled: RSA_print_fp */
int RSA_print_fp(void);

/* Symbol: RSA_print */
/* Demangled: RSA_print */
int RSA_print(void);

/* Symbol: RSA_verify_PKCS1_PSS */
/* Demangled: RSA_verify_PKCS1_PSS */
int RSA_verify_PKCS1_PSS(void);

/* Symbol: RSA_padding_add_PKCS1_PSS */
/* Demangled: RSA_padding_add_PKCS1_PSS */
int RSA_padding_add_PKCS1_PSS(void);

/* Symbol: RSA_verify_ASN1_OCTET_STRING */
/* Demangled: RSA_verify_ASN1_OCTET_STRING */
int RSA_verify_ASN1_OCTET_STRING(void);

/* Symbol: SHA1 */
/* Demangled: SHA1 */
int SHA1(void);

/* Symbol: SHA1_Transform */
/* Demangled: SHA1_Transform */
int SHA1_Transform(void);

/* Symbol: SHA1_version */
/* Demangled: SHA1_version */
extern void* SHA1_version;

/* Symbol: SHA224 */
/* Demangled: SHA224 */
int SHA224(void);

/* Symbol: SHA256 */
/* Demangled: SHA256 */
int SHA256(void);

/* Symbol: SHA224_Update */
/* Demangled: SHA224_Update */
int SHA224_Update(void);

/* Symbol: SHA224_Final */
/* Demangled: SHA224_Final */
int SHA224_Final(void);

/* Symbol: SHA256_Transform */
/* Demangled: SHA256_Transform */
int SHA256_Transform(void);

/* Symbol: SHA256_version */
/* Demangled: SHA256_version */
extern void* SHA256_version;

/* Symbol: SHA384_Final */
/* Demangled: SHA384_Final */
int SHA384_Final(void);

/* Symbol: SHA384_Update */
/* Demangled: SHA384_Update */
int SHA384_Update(void);

/* Symbol: SHA512_Transform */
/* Demangled: SHA512_Transform */
int SHA512_Transform(void);

/* Symbol: SHA384 */
/* Demangled: SHA384 */
int SHA384(void);

/* Symbol: SHA512 */
/* Demangled: SHA512 */
int SHA512(void);

/* Symbol: SHA512_version */
/* Demangled: SHA512_version */
extern void* SHA512_version;

/* Symbol: SRP_Calc_u */
/* Demangled: SRP_Calc_u */
int SRP_Calc_u(void);

/* Symbol: SRP_Calc_server_key */
/* Demangled: SRP_Calc_server_key */
int SRP_Calc_server_key(void);

/* Symbol: SRP_Calc_B */
/* Demangled: SRP_Calc_B */
int SRP_Calc_B(void);

/* Symbol: SRP_Calc_x */
/* Demangled: SRP_Calc_x */
int SRP_Calc_x(void);

/* Symbol: SRP_Calc_A */
/* Demangled: SRP_Calc_A */
int SRP_Calc_A(void);

/* Symbol: SRP_Calc_client_key */
/* Demangled: SRP_Calc_client_key */
int SRP_Calc_client_key(void);

/* Symbol: SRP_Verify_B_mod_N */
/* Demangled: SRP_Verify_B_mod_N */
int SRP_Verify_B_mod_N(void);

/* Symbol: SRP_Verify_A_mod_N */
/* Demangled: SRP_Verify_A_mod_N */
int SRP_Verify_A_mod_N(void);

/* Symbol: SRP_check_known_gN_param */
/* Demangled: SRP_check_known_gN_param */
int SRP_check_known_gN_param(void);

/* Symbol: SRP_get_default_gN */
/* Demangled: SRP_get_default_gN */
int SRP_get_default_gN(void);

/* Symbol: SRP_VBASE_new */
/* Demangled: SRP_VBASE_new */
int SRP_VBASE_new(void);

/* Symbol: SRP_VBASE_free */
/* Demangled: SRP_VBASE_free */
int SRP_VBASE_free(void);

/* Symbol: SRP_VBASE_init */
/* Demangled: SRP_VBASE_init */
int SRP_VBASE_init(void);

/* Symbol: TXT_DB_read */
/* Demangled: TXT_DB_read */
int TXT_DB_read(void);

/* Symbol: TXT_DB_free */
/* Demangled: TXT_DB_free */
int TXT_DB_free(void);

/* Symbol: SRP_VBASE_get_by_user */
/* Demangled: SRP_VBASE_get_by_user */
int SRP_VBASE_get_by_user(void);

/* Symbol: SRP_create_verifier */
/* Demangled: SRP_create_verifier */
int SRP_create_verifier(void);

/* Symbol: SRP_create_verifier_BN */
/* Demangled: SRP_create_verifier_BN */
int SRP_create_verifier_BN(void);

/* Symbol: sk_find_ex */
/* Demangled: sk_find_ex */
int sk_find_ex(void);

/* Symbol: sk_unshift */
/* Demangled: sk_unshift */
int sk_unshift(void);

/* Symbol: sk_shift */
/* Demangled: sk_shift */
int sk_shift(void);

/* Symbol: sk_zero */
/* Demangled: sk_zero */
int sk_zero(void);

/* Symbol: STACK_version */
/* Demangled: STACK_version */
extern void* STACK_version;

/* Symbol: TXT_DB_get_by_index */
/* Demangled: TXT_DB_get_by_index */
int TXT_DB_get_by_index(void);

/* Symbol: TXT_DB_create_index */
/* Demangled: TXT_DB_create_index */
int TXT_DB_create_index(void);

/* Symbol: TXT_DB_write */
/* Demangled: TXT_DB_write */
int TXT_DB_write(void);

/* Symbol: TXT_DB_insert */
/* Demangled: TXT_DB_insert */
int TXT_DB_insert(void);

/* Symbol: TXT_DB_version */
/* Demangled: TXT_DB_version */
extern void* TXT_DB_version;

/* Symbol: _ossl_old_des_read_pw_string */
/* Demangled: _ossl_old_des_read_pw_string */
int _ossl_old_des_read_pw_string(void);

/* Symbol: UI_UTIL_read_pw_string */
/* Demangled: UI_UTIL_read_pw_string */
int UI_UTIL_read_pw_string(void);

/* Symbol: _ossl_old_des_read_pw */
/* Demangled: _ossl_old_des_read_pw */
int _ossl_old_des_read_pw(void);

/* Symbol: UI_new_method */
/* Demangled: UI_new_method */
int UI_new_method(void);

/* Symbol: UI_OpenSSL */
/* Demangled: UI_OpenSSL */
int UI_OpenSSL(void);

/* Symbol: UI_get_default_method */
/* Demangled: UI_get_default_method */
int UI_get_default_method(void);

/* Symbol: UI_dup_input_string */
/* Demangled: UI_dup_input_string */
int UI_dup_input_string(void);

/* Symbol: UI_dup_verify_string */
/* Demangled: UI_dup_verify_string */
int UI_dup_verify_string(void);

/* Symbol: UI_add_input_boolean */
/* Demangled: UI_add_input_boolean */
int UI_add_input_boolean(void);

/* Symbol: UI_dup_input_boolean */
/* Demangled: UI_dup_input_boolean */
int UI_dup_input_boolean(void);

/* Symbol: UI_add_info_string */
/* Demangled: UI_add_info_string */
int UI_add_info_string(void);

/* Symbol: UI_dup_info_string */
/* Demangled: UI_dup_info_string */
int UI_dup_info_string(void);

/* Symbol: UI_add_error_string */
/* Demangled: UI_add_error_string */
int UI_add_error_string(void);

/* Symbol: UI_dup_error_string */
/* Demangled: UI_dup_error_string */
int UI_dup_error_string(void);

/* Symbol: UI_construct_prompt */
/* Demangled: UI_construct_prompt */
int UI_construct_prompt(void);

/* Symbol: UI_add_user_data */
/* Demangled: UI_add_user_data */
int UI_add_user_data(void);

/* Symbol: UI_get0_user_data */
/* Demangled: UI_get0_user_data */
int UI_get0_user_data(void);

/* Symbol: UI_get0_result */
/* Demangled: UI_get0_result */
int UI_get0_result(void);

/* Symbol: UI_get0_result_string */
/* Demangled: UI_get0_result_string */
int UI_get0_result_string(void);

/* Symbol: UI_ctrl */
/* Demangled: UI_ctrl */
int UI_ctrl(void);

/* Symbol: UI_get_ex_new_index */
/* Demangled: UI_get_ex_new_index */
int UI_get_ex_new_index(void);

/* Symbol: UI_set_ex_data */
/* Demangled: UI_set_ex_data */
int UI_set_ex_data(void);

/* Symbol: UI_get_ex_data */
/* Demangled: UI_get_ex_data */
int UI_get_ex_data(void);

/* Symbol: UI_set_default_method */
/* Demangled: UI_set_default_method */
int UI_set_default_method(void);

/* Symbol: UI_get_method */
/* Demangled: UI_get_method */
int UI_get_method(void);

/* Symbol: UI_set_method */
/* Demangled: UI_set_method */
int UI_set_method(void);

/* Symbol: UI_create_method */
/* Demangled: UI_create_method */
int UI_create_method(void);

/* Symbol: UI_destroy_method */
/* Demangled: UI_destroy_method */
int UI_destroy_method(void);

/* Symbol: UI_method_set_opener */
/* Demangled: UI_method_set_opener */
int UI_method_set_opener(void);

/* Symbol: UI_method_set_writer */
/* Demangled: UI_method_set_writer */
int UI_method_set_writer(void);

/* Symbol: UI_method_set_flusher */
/* Demangled: UI_method_set_flusher */
int UI_method_set_flusher(void);

/* Symbol: UI_method_set_reader */
/* Demangled: UI_method_set_reader */
int UI_method_set_reader(void);

/* Symbol: UI_method_set_closer */
/* Demangled: UI_method_set_closer */
int UI_method_set_closer(void);

/* Symbol: UI_method_set_prompt_constructor */
/* Demangled: UI_method_set_prompt_constructor */
int UI_method_set_prompt_constructor(void);

/* Symbol: UI_method_get_opener */
/* Demangled: UI_method_get_opener */
int UI_method_get_opener(void);

/* Symbol: UI_method_get_writer */
/* Demangled: UI_method_get_writer */
int UI_method_get_writer(void);

/* Symbol: UI_method_get_flusher */
/* Demangled: UI_method_get_flusher */
int UI_method_get_flusher(void);

/* Symbol: UI_method_get_reader */
/* Demangled: UI_method_get_reader */
int UI_method_get_reader(void);

/* Symbol: UI_method_get_closer */
/* Demangled: UI_method_get_closer */
int UI_method_get_closer(void);

/* Symbol: UI_method_get_prompt_constructor */
/* Demangled: UI_method_get_prompt_constructor */
int UI_method_get_prompt_constructor(void);

/* Symbol: UI_get_string_type */
/* Demangled: UI_get_string_type */
int UI_get_string_type(void);

/* Symbol: UI_get_input_flags */
/* Demangled: UI_get_input_flags */
int UI_get_input_flags(void);

/* Symbol: UI_get0_output_string */
/* Demangled: UI_get0_output_string */
int UI_get0_output_string(void);

/* Symbol: UI_get0_action_string */
/* Demangled: UI_get0_action_string */
int UI_get0_action_string(void);

/* Symbol: UI_get0_test_string */
/* Demangled: UI_get0_test_string */
int UI_get0_test_string(void);

/* Symbol: UI_get_result_minsize */
/* Demangled: UI_get_result_minsize */
int UI_get_result_minsize(void);

/* Symbol: UI_get_result_maxsize */
/* Demangled: UI_get_result_maxsize */
int UI_get_result_maxsize(void);

/* Symbol: UI_set_result */
/* Demangled: UI_set_result */
int UI_set_result(void);

/* Symbol: X509_get_default_cert_dir_env */
/* Demangled: X509_get_default_cert_dir_env */
int X509_get_default_cert_dir_env(void);

/* Symbol: X509_get_default_cert_dir */
/* Demangled: X509_get_default_cert_dir */
int X509_get_default_cert_dir(void);

/* Symbol: X509_NAME_hash */
/* Demangled: X509_NAME_hash */
int X509_NAME_hash(void);

/* Symbol: X509_load_cert_file */
/* Demangled: X509_load_cert_file */
int X509_load_cert_file(void);

/* Symbol: X509_load_crl_file */
/* Demangled: X509_load_crl_file */
int X509_load_crl_file(void);

/* Symbol: X509_LOOKUP_hash_dir */
/* Demangled: X509_LOOKUP_hash_dir */
int X509_LOOKUP_hash_dir(void);

/* Symbol: x509_dir_lookup */
/* Demangled: x509_dir_lookup */
extern void* x509_dir_lookup;

/* Symbol: X509_get_default_cert_file_env */
/* Demangled: X509_get_default_cert_file_env */
int X509_get_default_cert_file_env(void);

/* Symbol: X509_get_default_cert_file */
/* Demangled: X509_get_default_cert_file */
int X509_get_default_cert_file(void);

/* Symbol: X509_load_cert_crl_file */
/* Demangled: X509_load_cert_crl_file */
int X509_load_cert_crl_file(void);

/* Symbol: X509_LOOKUP_file */
/* Demangled: X509_LOOKUP_file */
int X509_LOOKUP_file(void);

/* Symbol: x509_file_lookup */
/* Demangled: x509_file_lookup */
extern void* x509_file_lookup;

/* Symbol: X509_STORE_add_cert */
/* Demangled: X509_STORE_add_cert */
int X509_STORE_add_cert(void);

/* Symbol: d2i_X509_bio */
/* Demangled: d2i_X509_bio */
int d2i_X509_bio(void);

/* Symbol: X509_STORE_add_crl */
/* Demangled: X509_STORE_add_crl */
int X509_STORE_add_crl(void);

/* Symbol: d2i_X509_CRL_bio */
/* Demangled: d2i_X509_CRL_bio */
int d2i_X509_CRL_bio(void);

/* Symbol: X509_ATTRIBUTE_create_by_OBJ */
/* Demangled: X509_ATTRIBUTE_create_by_OBJ */
int X509_ATTRIBUTE_create_by_OBJ(void);

/* Symbol: X509_ATTRIBUTE_set1_object */
/* Demangled: X509_ATTRIBUTE_set1_object */
int X509_ATTRIBUTE_set1_object(void);

/* Symbol: X509_ATTRIBUTE_set1_data */
/* Demangled: X509_ATTRIBUTE_set1_data */
int X509_ATTRIBUTE_set1_data(void);

/* Symbol: X509_ATTRIBUTE_create_by_NID */
/* Demangled: X509_ATTRIBUTE_create_by_NID */
int X509_ATTRIBUTE_create_by_NID(void);

/* Symbol: X509_ATTRIBUTE_create_by_txt */
/* Demangled: X509_ATTRIBUTE_create_by_txt */
int X509_ATTRIBUTE_create_by_txt(void);

/* Symbol: X509_ATTRIBUTE_get0_data */
/* Demangled: X509_ATTRIBUTE_get0_data */
int X509_ATTRIBUTE_get0_data(void);

/* Symbol: X509_ATTRIBUTE_count */
/* Demangled: X509_ATTRIBUTE_count */
int X509_ATTRIBUTE_count(void);

/* Symbol: X509_ATTRIBUTE_get0_type */
/* Demangled: X509_ATTRIBUTE_get0_type */
int X509_ATTRIBUTE_get0_type(void);

/* Symbol: X509_ATTRIBUTE_get0_object */
/* Demangled: X509_ATTRIBUTE_get0_object */
int X509_ATTRIBUTE_get0_object(void);

/* Symbol: X509_issuer_and_serial_cmp */
/* Demangled: X509_issuer_and_serial_cmp */
int X509_issuer_and_serial_cmp(void);

/* Symbol: X509_issuer_and_serial_hash */
/* Demangled: X509_issuer_and_serial_hash */
int X509_issuer_and_serial_hash(void);

/* Symbol: X509_issuer_name_cmp */
/* Demangled: X509_issuer_name_cmp */
int X509_issuer_name_cmp(void);

/* Symbol: X509_subject_name_cmp */
/* Demangled: X509_subject_name_cmp */
int X509_subject_name_cmp(void);

/* Symbol: X509_CRL_cmp */
/* Demangled: X509_CRL_cmp */
int X509_CRL_cmp(void);

/* Symbol: X509_CRL_match */
/* Demangled: X509_CRL_match */
int X509_CRL_match(void);

/* Symbol: X509_issuer_name_hash */
/* Demangled: X509_issuer_name_hash */
int X509_issuer_name_hash(void);

/* Symbol: X509_issuer_name_hash_old */
/* Demangled: X509_issuer_name_hash_old */
int X509_issuer_name_hash_old(void);

/* Symbol: X509_NAME_hash_old */
/* Demangled: X509_NAME_hash_old */
int X509_NAME_hash_old(void);

/* Symbol: X509_subject_name_hash */
/* Demangled: X509_subject_name_hash */
int X509_subject_name_hash(void);

/* Symbol: X509_subject_name_hash_old */
/* Demangled: X509_subject_name_hash_old */
int X509_subject_name_hash_old(void);

/* Symbol: X509_STORE_set_default_paths */
/* Demangled: X509_STORE_set_default_paths */
int X509_STORE_set_default_paths(void);

/* Symbol: X509_STORE_add_lookup */
/* Demangled: X509_STORE_add_lookup */
int X509_STORE_add_lookup(void);

/* Symbol: X509_LOOKUP_ctrl */
/* Demangled: X509_LOOKUP_ctrl */
int X509_LOOKUP_ctrl(void);

/* Symbol: X509_STORE_load_locations */
/* Demangled: X509_STORE_load_locations */
int X509_STORE_load_locations(void);

/* Symbol: X509_get_default_private_dir */
/* Demangled: X509_get_default_private_dir */
int X509_get_default_private_dir(void);

/* Symbol: X509_CRL_get_ext_count */
/* Demangled: X509_CRL_get_ext_count */
int X509_CRL_get_ext_count(void);

/* Symbol: X509_CRL_get_ext_by_NID */
/* Demangled: X509_CRL_get_ext_by_NID */
int X509_CRL_get_ext_by_NID(void);

/* Symbol: X509_CRL_get_ext_by_OBJ */
/* Demangled: X509_CRL_get_ext_by_OBJ */
int X509_CRL_get_ext_by_OBJ(void);

/* Symbol: X509_CRL_get_ext_by_critical */
/* Demangled: X509_CRL_get_ext_by_critical */
int X509_CRL_get_ext_by_critical(void);

/* Symbol: X509_CRL_get_ext */
/* Demangled: X509_CRL_get_ext */
int X509_CRL_get_ext(void);

/* Symbol: X509_CRL_delete_ext */
/* Demangled: X509_CRL_delete_ext */
int X509_CRL_delete_ext(void);

/* Symbol: X509_CRL_add1_ext_i2d */
/* Demangled: X509_CRL_add1_ext_i2d */
int X509_CRL_add1_ext_i2d(void);

/* Symbol: X509_CRL_add_ext */
/* Demangled: X509_CRL_add_ext */
int X509_CRL_add_ext(void);

/* Symbol: X509_get_ext_count */
/* Demangled: X509_get_ext_count */
int X509_get_ext_count(void);

/* Symbol: X509_get_ext_by_NID */
/* Demangled: X509_get_ext_by_NID */
int X509_get_ext_by_NID(void);

/* Symbol: X509_get_ext_by_OBJ */
/* Demangled: X509_get_ext_by_OBJ */
int X509_get_ext_by_OBJ(void);

/* Symbol: X509_get_ext_by_critical */
/* Demangled: X509_get_ext_by_critical */
int X509_get_ext_by_critical(void);

/* Symbol: X509_get_ext */
/* Demangled: X509_get_ext */
int X509_get_ext(void);

/* Symbol: X509_delete_ext */
/* Demangled: X509_delete_ext */
int X509_delete_ext(void);

/* Symbol: X509_add_ext */
/* Demangled: X509_add_ext */
int X509_add_ext(void);

/* Symbol: X509_get_ext_d2i */
/* Demangled: X509_get_ext_d2i */
int X509_get_ext_d2i(void);

/* Symbol: X509_add1_ext_i2d */
/* Demangled: X509_add1_ext_i2d */
int X509_add1_ext_i2d(void);

/* Symbol: X509_REVOKED_get_ext_count */
/* Demangled: X509_REVOKED_get_ext_count */
int X509_REVOKED_get_ext_count(void);

/* Symbol: X509_REVOKED_get_ext_by_NID */
/* Demangled: X509_REVOKED_get_ext_by_NID */
int X509_REVOKED_get_ext_by_NID(void);

/* Symbol: X509_REVOKED_get_ext_by_OBJ */
/* Demangled: X509_REVOKED_get_ext_by_OBJ */
int X509_REVOKED_get_ext_by_OBJ(void);

/* Symbol: X509_REVOKED_get_ext_by_critical */
/* Demangled: X509_REVOKED_get_ext_by_critical */
int X509_REVOKED_get_ext_by_critical(void);

/* Symbol: X509_REVOKED_get_ext */
/* Demangled: X509_REVOKED_get_ext */
int X509_REVOKED_get_ext(void);

/* Symbol: X509_REVOKED_delete_ext */
/* Demangled: X509_REVOKED_delete_ext */
int X509_REVOKED_delete_ext(void);

/* Symbol: X509_REVOKED_add_ext */
/* Demangled: X509_REVOKED_add_ext */
int X509_REVOKED_add_ext(void);

/* Symbol: X509_REVOKED_add1_ext_i2d */
/* Demangled: X509_REVOKED_add1_ext_i2d */
int X509_REVOKED_add1_ext_i2d(void);

/* Symbol: X509_LOOKUP_new */
/* Demangled: X509_LOOKUP_new */
int X509_LOOKUP_new(void);

/* Symbol: X509_LOOKUP_free */
/* Demangled: X509_LOOKUP_free */
int X509_LOOKUP_free(void);

/* Symbol: X509_LOOKUP_init */
/* Demangled: X509_LOOKUP_init */
int X509_LOOKUP_init(void);

/* Symbol: X509_LOOKUP_shutdown */
/* Demangled: X509_LOOKUP_shutdown */
int X509_LOOKUP_shutdown(void);

/* Symbol: X509_LOOKUP_by_subject */
/* Demangled: X509_LOOKUP_by_subject */
int X509_LOOKUP_by_subject(void);

/* Symbol: X509_LOOKUP_by_issuer_serial */
/* Demangled: X509_LOOKUP_by_issuer_serial */
int X509_LOOKUP_by_issuer_serial(void);

/* Symbol: X509_LOOKUP_by_fingerprint */
/* Demangled: X509_LOOKUP_by_fingerprint */
int X509_LOOKUP_by_fingerprint(void);

/* Symbol: X509_LOOKUP_by_alias */
/* Demangled: X509_LOOKUP_by_alias */
int X509_LOOKUP_by_alias(void);

/* Symbol: X509_STORE_new */
/* Demangled: X509_STORE_new */
int X509_STORE_new(void);

/* Symbol: X509_VERIFY_PARAM_new */
/* Demangled: X509_VERIFY_PARAM_new */
int X509_VERIFY_PARAM_new(void);

/* Symbol: X509_STORE_free */
/* Demangled: X509_STORE_free */
int X509_STORE_free(void);

/* Symbol: X509_VERIFY_PARAM_free */
/* Demangled: X509_VERIFY_PARAM_free */
int X509_VERIFY_PARAM_free(void);

/* Symbol: X509_STORE_get_by_subject */
/* Demangled: X509_STORE_get_by_subject */
int X509_STORE_get_by_subject(void);

/* Symbol: X509_OBJECT_retrieve_by_subject */
/* Demangled: X509_OBJECT_retrieve_by_subject */
int X509_OBJECT_retrieve_by_subject(void);

/* Symbol: X509_OBJECT_up_ref_count */
/* Demangled: X509_OBJECT_up_ref_count */
int X509_OBJECT_up_ref_count(void);

/* Symbol: X509_OBJECT_retrieve_match */
/* Demangled: X509_OBJECT_retrieve_match */
int X509_OBJECT_retrieve_match(void);

/* Symbol: X509_OBJECT_free_contents */
/* Demangled: X509_OBJECT_free_contents */
int X509_OBJECT_free_contents(void);

/* Symbol: X509_OBJECT_idx_by_subject */
/* Demangled: X509_OBJECT_idx_by_subject */
int X509_OBJECT_idx_by_subject(void);

/* Symbol: X509_STORE_get1_certs */
/* Demangled: X509_STORE_get1_certs */
int X509_STORE_get1_certs(void);

/* Symbol: X509_STORE_get1_crls */
/* Demangled: X509_STORE_get1_crls */
int X509_STORE_get1_crls(void);

/* Symbol: X509_STORE_CTX_get1_issuer */
/* Demangled: X509_STORE_CTX_get1_issuer */
int X509_STORE_CTX_get1_issuer(void);

/* Symbol: X509_STORE_set_flags */
/* Demangled: X509_STORE_set_flags */
int X509_STORE_set_flags(void);

/* Symbol: X509_VERIFY_PARAM_set_flags */
/* Demangled: X509_VERIFY_PARAM_set_flags */
int X509_VERIFY_PARAM_set_flags(void);

/* Symbol: X509_STORE_set_depth */
/* Demangled: X509_STORE_set_depth */
int X509_STORE_set_depth(void);

/* Symbol: X509_VERIFY_PARAM_set_depth */
/* Demangled: X509_VERIFY_PARAM_set_depth */
int X509_VERIFY_PARAM_set_depth(void);

/* Symbol: X509_STORE_set_purpose */
/* Demangled: X509_STORE_set_purpose */
int X509_STORE_set_purpose(void);

/* Symbol: X509_VERIFY_PARAM_set_purpose */
/* Demangled: X509_VERIFY_PARAM_set_purpose */
int X509_VERIFY_PARAM_set_purpose(void);

/* Symbol: X509_STORE_set_trust */
/* Demangled: X509_STORE_set_trust */
int X509_STORE_set_trust(void);

/* Symbol: X509_VERIFY_PARAM_set_trust */
/* Demangled: X509_VERIFY_PARAM_set_trust */
int X509_VERIFY_PARAM_set_trust(void);

/* Symbol: X509_STORE_set1_param */
/* Demangled: X509_STORE_set1_param */
int X509_STORE_set1_param(void);

/* Symbol: X509_VERIFY_PARAM_set1 */
/* Demangled: X509_VERIFY_PARAM_set1 */
int X509_VERIFY_PARAM_set1(void);

/* Symbol: X509_STORE_set_verify_cb */
/* Demangled: X509_STORE_set_verify_cb */
int X509_STORE_set_verify_cb(void);

/* Symbol: X509_REQ_to_X509 */
/* Demangled: X509_REQ_to_X509 */
int X509_REQ_to_X509(void);

/* Symbol: X509_set_subject_name */
/* Demangled: X509_set_subject_name */
int X509_set_subject_name(void);

/* Symbol: X509_set_issuer_name */
/* Demangled: X509_set_issuer_name */
int X509_set_issuer_name(void);

/* Symbol: X509_set_pubkey */
/* Demangled: X509_set_pubkey */
int X509_set_pubkey(void);

/* Symbol: X509_sign */
/* Demangled: X509_sign */
int X509_sign(void);

/* Symbol: X509_to_X509_REQ */
/* Demangled: X509_to_X509_REQ */
int X509_to_X509_REQ(void);

/* Symbol: X509_REQ_set_subject_name */
/* Demangled: X509_REQ_set_subject_name */
int X509_REQ_set_subject_name(void);

/* Symbol: X509_REQ_set_pubkey */
/* Demangled: X509_REQ_set_pubkey */
int X509_REQ_set_pubkey(void);

/* Symbol: X509_REQ_sign */
/* Demangled: X509_REQ_sign */
int X509_REQ_sign(void);

/* Symbol: X509_REQ_check_private_key */
/* Demangled: X509_REQ_check_private_key */
int X509_REQ_check_private_key(void);

/* Symbol: X509_REQ_get_extension_nids */
/* Demangled: X509_REQ_get_extension_nids */
int X509_REQ_get_extension_nids(void);

/* Symbol: X509_REQ_set_extension_nids */
/* Demangled: X509_REQ_set_extension_nids */
int X509_REQ_set_extension_nids(void);

/* Symbol: X509_REQ_get_attr_by_NID */
/* Demangled: X509_REQ_get_attr_by_NID */
int X509_REQ_get_attr_by_NID(void);

/* Symbol: X509_REQ_get_attr */
/* Demangled: X509_REQ_get_attr */
int X509_REQ_get_attr(void);

/* Symbol: X509_REQ_add_extensions_nid */
/* Demangled: X509_REQ_add_extensions_nid */
int X509_REQ_add_extensions_nid(void);

/* Symbol: X509_REQ_add_extensions */
/* Demangled: X509_REQ_add_extensions */
int X509_REQ_add_extensions(void);

/* Symbol: X509_REQ_get_attr_count */
/* Demangled: X509_REQ_get_attr_count */
int X509_REQ_get_attr_count(void);

/* Symbol: X509_REQ_get_attr_by_OBJ */
/* Demangled: X509_REQ_get_attr_by_OBJ */
int X509_REQ_get_attr_by_OBJ(void);

/* Symbol: X509_REQ_delete_attr */
/* Demangled: X509_REQ_delete_attr */
int X509_REQ_delete_attr(void);

/* Symbol: X509_REQ_add1_attr */
/* Demangled: X509_REQ_add1_attr */
int X509_REQ_add1_attr(void);

/* Symbol: X509_REQ_add1_attr_by_OBJ */
/* Demangled: X509_REQ_add1_attr_by_OBJ */
int X509_REQ_add1_attr_by_OBJ(void);

/* Symbol: X509_REQ_add1_attr_by_NID */
/* Demangled: X509_REQ_add1_attr_by_NID */
int X509_REQ_add1_attr_by_NID(void);

/* Symbol: X509_REQ_add1_attr_by_txt */
/* Demangled: X509_REQ_add1_attr_by_txt */
int X509_REQ_add1_attr_by_txt(void);

/* Symbol: X509_set_version */
/* Demangled: X509_set_version */
int X509_set_version(void);

/* Symbol: X509_set_serialNumber */
/* Demangled: X509_set_serialNumber */
int X509_set_serialNumber(void);

/* Symbol: X509_set_notBefore */
/* Demangled: X509_set_notBefore */
int X509_set_notBefore(void);

/* Symbol: X509_set_notAfter */
/* Demangled: X509_set_notAfter */
int X509_set_notAfter(void);

/* Symbol: X509_TRUST_set_default */
/* Demangled: X509_TRUST_set_default */
int X509_TRUST_set_default(void);

/* Symbol: X509_TRUST_get_by_id */
/* Demangled: X509_TRUST_get_by_id */
int X509_TRUST_get_by_id(void);

/* Symbol: X509_TRUST_get0 */
/* Demangled: X509_TRUST_get0 */
int X509_TRUST_get0(void);

/* Symbol: X509_TRUST_get_count */
/* Demangled: X509_TRUST_get_count */
int X509_TRUST_get_count(void);

/* Symbol: X509_TRUST_set */
/* Demangled: X509_TRUST_set */
int X509_TRUST_set(void);

/* Symbol: X509_TRUST_add */
/* Demangled: X509_TRUST_add */
int X509_TRUST_add(void);

/* Symbol: X509_TRUST_cleanup */
/* Demangled: X509_TRUST_cleanup */
int X509_TRUST_cleanup(void);

/* Symbol: X509_TRUST_get_flags */
/* Demangled: X509_TRUST_get_flags */
int X509_TRUST_get_flags(void);

/* Symbol: X509_TRUST_get0_name */
/* Demangled: X509_TRUST_get0_name */
int X509_TRUST_get0_name(void);

/* Symbol: X509_TRUST_get_trust */
/* Demangled: X509_TRUST_get_trust */
int X509_TRUST_get_trust(void);

/* Symbol: X509_EXTENSION_create_by_NID */
/* Demangled: X509_EXTENSION_create_by_NID */
int X509_EXTENSION_create_by_NID(void);

/* Symbol: X509_EXTENSION_create_by_OBJ */
/* Demangled: X509_EXTENSION_create_by_OBJ */
int X509_EXTENSION_create_by_OBJ(void);

/* Symbol: X509_EXTENSION_set_object */
/* Demangled: X509_EXTENSION_set_object */
int X509_EXTENSION_set_object(void);

/* Symbol: X509_EXTENSION_set_critical */
/* Demangled: X509_EXTENSION_set_critical */
int X509_EXTENSION_set_critical(void);

/* Symbol: X509_EXTENSION_set_data */
/* Demangled: X509_EXTENSION_set_data */
int X509_EXTENSION_set_data(void);

/* Symbol: X509_EXTENSION_get_data */
/* Demangled: X509_EXTENSION_get_data */
int X509_EXTENSION_get_data(void);

/* Symbol: X509_check_ca */
/* Demangled: X509_check_ca */
int X509_check_ca(void);

/* Symbol: NAME_CONSTRAINTS_check */
/* Demangled: NAME_CONSTRAINTS_check */
int NAME_CONSTRAINTS_check(void);

/* Symbol: X509_get_pubkey_parameters */
/* Demangled: X509_get_pubkey_parameters */
int X509_get_pubkey_parameters(void);

/* Symbol: X509_verify */
/* Demangled: X509_verify */
int X509_verify(void);

/* Symbol: X509_cmp_current_time */
/* Demangled: X509_cmp_current_time */
int X509_cmp_current_time(void);

/* Symbol: X509_time_adj_ex */
/* Demangled: X509_time_adj_ex */
int X509_time_adj_ex(void);

/* Symbol: X509_time_adj */
/* Demangled: X509_time_adj */
int X509_time_adj(void);

/* Symbol: X509_STORE_CTX_get_ex_new_index */
/* Demangled: X509_STORE_CTX_get_ex_new_index */
int X509_STORE_CTX_get_ex_new_index(void);

/* Symbol: X509_STORE_CTX_set_ex_data */
/* Demangled: X509_STORE_CTX_set_ex_data */
int X509_STORE_CTX_set_ex_data(void);

/* Symbol: X509_STORE_CTX_get_ex_data */
/* Demangled: X509_STORE_CTX_get_ex_data */
int X509_STORE_CTX_get_ex_data(void);

/* Symbol: X509_STORE_CTX_set_error */
/* Demangled: X509_STORE_CTX_set_error */
int X509_STORE_CTX_set_error(void);

/* Symbol: X509_STORE_CTX_get_error_depth */
/* Demangled: X509_STORE_CTX_get_error_depth */
int X509_STORE_CTX_get_error_depth(void);

/* Symbol: X509_STORE_CTX_get_current_cert */
/* Demangled: X509_STORE_CTX_get_current_cert */
int X509_STORE_CTX_get_current_cert(void);

/* Symbol: X509_STORE_CTX_get_chain */
/* Demangled: X509_STORE_CTX_get_chain */
int X509_STORE_CTX_get_chain(void);

/* Symbol: X509_STORE_CTX_get0_current_issuer */
/* Demangled: X509_STORE_CTX_get0_current_issuer */
int X509_STORE_CTX_get0_current_issuer(void);

/* Symbol: X509_STORE_CTX_get0_current_crl */
/* Demangled: X509_STORE_CTX_get0_current_crl */
int X509_STORE_CTX_get0_current_crl(void);

/* Symbol: X509_STORE_CTX_get0_parent_ctx */
/* Demangled: X509_STORE_CTX_get0_parent_ctx */
int X509_STORE_CTX_get0_parent_ctx(void);

/* Symbol: X509_STORE_CTX_set_cert */
/* Demangled: X509_STORE_CTX_set_cert */
int X509_STORE_CTX_set_cert(void);

/* Symbol: X509_STORE_CTX_set_chain */
/* Demangled: X509_STORE_CTX_set_chain */
int X509_STORE_CTX_set_chain(void);

/* Symbol: X509_STORE_CTX_purpose_inherit */
/* Demangled: X509_STORE_CTX_purpose_inherit */
int X509_STORE_CTX_purpose_inherit(void);

/* Symbol: X509_PURPOSE_get_by_id */
/* Demangled: X509_PURPOSE_get_by_id */
int X509_PURPOSE_get_by_id(void);

/* Symbol: X509_PURPOSE_get0 */
/* Demangled: X509_PURPOSE_get0 */
int X509_PURPOSE_get0(void);

/* Symbol: X509_STORE_CTX_new */
/* Demangled: X509_STORE_CTX_new */
int X509_STORE_CTX_new(void);

/* Symbol: X509_STORE_CTX_free */
/* Demangled: X509_STORE_CTX_free */
int X509_STORE_CTX_free(void);

/* Symbol: X509_policy_tree_free */
/* Demangled: X509_policy_tree_free */
int X509_policy_tree_free(void);

/* Symbol: X509_VERIFY_PARAM_inherit */
/* Demangled: X509_VERIFY_PARAM_inherit */
int X509_VERIFY_PARAM_inherit(void);

/* Symbol: X509_VERIFY_PARAM_lookup */
/* Demangled: X509_VERIFY_PARAM_lookup */
int X509_VERIFY_PARAM_lookup(void);

/* Symbol: X509_check_issued */
/* Demangled: X509_check_issued */
int X509_check_issued(void);

/* Symbol: X509_policy_check */
/* Demangled: X509_policy_check */
int X509_policy_check(void);

/* Symbol: X509_STORE_CTX_trusted_stack */
/* Demangled: X509_STORE_CTX_trusted_stack */
int X509_STORE_CTX_trusted_stack(void);

/* Symbol: X509_STORE_CTX_set_depth */
/* Demangled: X509_STORE_CTX_set_depth */
int X509_STORE_CTX_set_depth(void);

/* Symbol: X509_STORE_CTX_set_flags */
/* Demangled: X509_STORE_CTX_set_flags */
int X509_STORE_CTX_set_flags(void);

/* Symbol: X509_STORE_CTX_set_time */
/* Demangled: X509_STORE_CTX_set_time */
int X509_STORE_CTX_set_time(void);

/* Symbol: X509_VERIFY_PARAM_set_time */
/* Demangled: X509_VERIFY_PARAM_set_time */
int X509_VERIFY_PARAM_set_time(void);

/* Symbol: X509_STORE_CTX_set_verify_cb */
/* Demangled: X509_STORE_CTX_set_verify_cb */
int X509_STORE_CTX_set_verify_cb(void);

/* Symbol: X509_STORE_CTX_get0_policy_tree */
/* Demangled: X509_STORE_CTX_get0_policy_tree */
int X509_STORE_CTX_get0_policy_tree(void);

/* Symbol: X509_STORE_CTX_get_explicit_policy */
/* Demangled: X509_STORE_CTX_get_explicit_policy */
int X509_STORE_CTX_get_explicit_policy(void);

/* Symbol: X509_STORE_CTX_get0_param */
/* Demangled: X509_STORE_CTX_get0_param */
int X509_STORE_CTX_get0_param(void);

/* Symbol: X509_STORE_CTX_set0_param */
/* Demangled: X509_STORE_CTX_set0_param */
int X509_STORE_CTX_set0_param(void);

/* Symbol: X509_check_akid */
/* Demangled: X509_check_akid */
int X509_check_akid(void);

/* Symbol: GENERAL_NAME_cmp */
/* Demangled: GENERAL_NAME_cmp */
int GENERAL_NAME_cmp(void);

/* Symbol: X509_version */
/* Demangled: X509_version */
extern void* X509_version;

/* Symbol: X509_VERIFY_PARAM_set1_policies */
/* Demangled: X509_VERIFY_PARAM_set1_policies */
int X509_VERIFY_PARAM_set1_policies(void);

/* Symbol: X509_VERIFY_PARAM_set1_name */
/* Demangled: X509_VERIFY_PARAM_set1_name */
int X509_VERIFY_PARAM_set1_name(void);

/* Symbol: X509_VERIFY_PARAM_clear_flags */
/* Demangled: X509_VERIFY_PARAM_clear_flags */
int X509_VERIFY_PARAM_clear_flags(void);

/* Symbol: X509_VERIFY_PARAM_get_flags */
/* Demangled: X509_VERIFY_PARAM_get_flags */
int X509_VERIFY_PARAM_get_flags(void);

/* Symbol: X509_PURPOSE_set */
/* Demangled: X509_PURPOSE_set */
int X509_PURPOSE_set(void);

/* Symbol: X509_VERIFY_PARAM_add0_policy */
/* Demangled: X509_VERIFY_PARAM_add0_policy */
int X509_VERIFY_PARAM_add0_policy(void);

/* Symbol: X509_VERIFY_PARAM_get_depth */
/* Demangled: X509_VERIFY_PARAM_get_depth */
int X509_VERIFY_PARAM_get_depth(void);

/* Symbol: X509_VERIFY_PARAM_add0_table */
/* Demangled: X509_VERIFY_PARAM_add0_table */
int X509_VERIFY_PARAM_add0_table(void);

/* Symbol: X509_VERIFY_PARAM_table_cleanup */
/* Demangled: X509_VERIFY_PARAM_table_cleanup */
int X509_VERIFY_PARAM_table_cleanup(void);

/* Symbol: X509_CRL_set_version */
/* Demangled: X509_CRL_set_version */
int X509_CRL_set_version(void);

/* Symbol: X509_CRL_set_issuer_name */
/* Demangled: X509_CRL_set_issuer_name */
int X509_CRL_set_issuer_name(void);

/* Symbol: X509_CRL_set_lastUpdate */
/* Demangled: X509_CRL_set_lastUpdate */
int X509_CRL_set_lastUpdate(void);

/* Symbol: X509_CRL_set_nextUpdate */
/* Demangled: X509_CRL_set_nextUpdate */
int X509_CRL_set_nextUpdate(void);

/* Symbol: X509_CRL_sort */
/* Demangled: X509_CRL_sort */
int X509_CRL_sort(void);

/* Symbol: X509_REVOKED_set_revocationDate */
/* Demangled: X509_REVOKED_set_revocationDate */
int X509_REVOKED_set_revocationDate(void);

/* Symbol: X509_REVOKED_set_serialNumber */
/* Demangled: X509_REVOKED_set_serialNumber */
int X509_REVOKED_set_serialNumber(void);

/* Symbol: X509_NAME_get_text_by_NID */
/* Demangled: X509_NAME_get_text_by_NID */
int X509_NAME_get_text_by_NID(void);

/* Symbol: X509_NAME_get_text_by_OBJ */
/* Demangled: X509_NAME_get_text_by_OBJ */
int X509_NAME_get_text_by_OBJ(void);

/* Symbol: X509_NAME_get_index_by_OBJ */
/* Demangled: X509_NAME_get_index_by_OBJ */
int X509_NAME_get_index_by_OBJ(void);

/* Symbol: X509_NAME_get_index_by_NID */
/* Demangled: X509_NAME_get_index_by_NID */
int X509_NAME_get_index_by_NID(void);

/* Symbol: X509_NAME_delete_entry */
/* Demangled: X509_NAME_delete_entry */
int X509_NAME_delete_entry(void);

/* Symbol: X509_NAME_add_entry_by_OBJ */
/* Demangled: X509_NAME_add_entry_by_OBJ */
int X509_NAME_add_entry_by_OBJ(void);

/* Symbol: X509_NAME_ENTRY_create_by_OBJ */
/* Demangled: X509_NAME_ENTRY_create_by_OBJ */
int X509_NAME_ENTRY_create_by_OBJ(void);

/* Symbol: X509_NAME_add_entry */
/* Demangled: X509_NAME_add_entry */
int X509_NAME_add_entry(void);

/* Symbol: X509_NAME_ENTRY_set_object */
/* Demangled: X509_NAME_ENTRY_set_object */
int X509_NAME_ENTRY_set_object(void);

/* Symbol: X509_NAME_ENTRY_set_data */
/* Demangled: X509_NAME_ENTRY_set_data */
int X509_NAME_ENTRY_set_data(void);

/* Symbol: X509_NAME_add_entry_by_NID */
/* Demangled: X509_NAME_add_entry_by_NID */
int X509_NAME_add_entry_by_NID(void);

/* Symbol: X509_NAME_ENTRY_create_by_NID */
/* Demangled: X509_NAME_ENTRY_create_by_NID */
int X509_NAME_ENTRY_create_by_NID(void);

/* Symbol: X509_NAME_add_entry_by_txt */
/* Demangled: X509_NAME_add_entry_by_txt */
int X509_NAME_add_entry_by_txt(void);

/* Symbol: X509_NAME_ENTRY_create_by_txt */
/* Demangled: X509_NAME_ENTRY_create_by_txt */
int X509_NAME_ENTRY_create_by_txt(void);

/* Symbol: X509_REQ_set_version */
/* Demangled: X509_REQ_set_version */
int X509_REQ_set_version(void);

/* Symbol: NETSCAPE_SPKI_set_pubkey */
/* Demangled: NETSCAPE_SPKI_set_pubkey */
int NETSCAPE_SPKI_set_pubkey(void);

/* Symbol: NETSCAPE_SPKI_get_pubkey */
/* Demangled: NETSCAPE_SPKI_get_pubkey */
int NETSCAPE_SPKI_get_pubkey(void);

/* Symbol: NETSCAPE_SPKI_b64_decode */
/* Demangled: NETSCAPE_SPKI_b64_decode */
int NETSCAPE_SPKI_b64_decode(void);

/* Symbol: NETSCAPE_SPKI_b64_encode */
/* Demangled: NETSCAPE_SPKI_b64_encode */
int NETSCAPE_SPKI_b64_encode(void);

/* Symbol: X509_certificate_type */
/* Demangled: X509_certificate_type */
int X509_certificate_type(void);

/* Symbol: X509_REQ_verify */
/* Demangled: X509_REQ_verify */
int X509_REQ_verify(void);

/* Symbol: NETSCAPE_SPKI_verify */
/* Demangled: NETSCAPE_SPKI_verify */
int NETSCAPE_SPKI_verify(void);

/* Symbol: X509_sign_ctx */
/* Demangled: X509_sign_ctx */
int X509_sign_ctx(void);

/* Symbol: X509_REQ_sign_ctx */
/* Demangled: X509_REQ_sign_ctx */
int X509_REQ_sign_ctx(void);

/* Symbol: X509_CRL_sign */
/* Demangled: X509_CRL_sign */
int X509_CRL_sign(void);

/* Symbol: X509_CRL_sign_ctx */
/* Demangled: X509_CRL_sign_ctx */
int X509_CRL_sign_ctx(void);

/* Symbol: NETSCAPE_SPKI_sign */
/* Demangled: NETSCAPE_SPKI_sign */
int NETSCAPE_SPKI_sign(void);

/* Symbol: d2i_X509_fp */
/* Demangled: d2i_X509_fp */
int d2i_X509_fp(void);

/* Symbol: i2d_X509_fp */
/* Demangled: i2d_X509_fp */
int i2d_X509_fp(void);

/* Symbol: i2d_X509_bio */
/* Demangled: i2d_X509_bio */
int i2d_X509_bio(void);

/* Symbol: d2i_X509_CRL_fp */
/* Demangled: d2i_X509_CRL_fp */
int d2i_X509_CRL_fp(void);

/* Symbol: i2d_X509_CRL_fp */
/* Demangled: i2d_X509_CRL_fp */
int i2d_X509_CRL_fp(void);

/* Symbol: i2d_X509_CRL_bio */
/* Demangled: i2d_X509_CRL_bio */
int i2d_X509_CRL_bio(void);

/* Symbol: d2i_PKCS7_fp */
/* Demangled: d2i_PKCS7_fp */
int d2i_PKCS7_fp(void);

/* Symbol: i2d_PKCS7_fp */
/* Demangled: i2d_PKCS7_fp */
int i2d_PKCS7_fp(void);

/* Symbol: d2i_PKCS7_bio */
/* Demangled: d2i_PKCS7_bio */
int d2i_PKCS7_bio(void);

/* Symbol: i2d_PKCS7_bio */
/* Demangled: i2d_PKCS7_bio */
int i2d_PKCS7_bio(void);

/* Symbol: d2i_X509_REQ_fp */
/* Demangled: d2i_X509_REQ_fp */
int d2i_X509_REQ_fp(void);

/* Symbol: i2d_X509_REQ_fp */
/* Demangled: i2d_X509_REQ_fp */
int i2d_X509_REQ_fp(void);

/* Symbol: d2i_X509_REQ_bio */
/* Demangled: d2i_X509_REQ_bio */
int d2i_X509_REQ_bio(void);

/* Symbol: i2d_X509_REQ_bio */
/* Demangled: i2d_X509_REQ_bio */
int i2d_X509_REQ_bio(void);

/* Symbol: d2i_RSAPrivateKey_fp */
/* Demangled: d2i_RSAPrivateKey_fp */
int d2i_RSAPrivateKey_fp(void);

/* Symbol: i2d_RSAPrivateKey_fp */
/* Demangled: i2d_RSAPrivateKey_fp */
int i2d_RSAPrivateKey_fp(void);

/* Symbol: d2i_RSAPublicKey_fp */
/* Demangled: d2i_RSAPublicKey_fp */
int d2i_RSAPublicKey_fp(void);

/* Symbol: d2i_RSA_PUBKEY_fp */
/* Demangled: d2i_RSA_PUBKEY_fp */
int d2i_RSA_PUBKEY_fp(void);

/* Symbol: i2d_RSAPublicKey_fp */
/* Demangled: i2d_RSAPublicKey_fp */
int i2d_RSAPublicKey_fp(void);

/* Symbol: i2d_RSA_PUBKEY_fp */
/* Demangled: i2d_RSA_PUBKEY_fp */
int i2d_RSA_PUBKEY_fp(void);

/* Symbol: d2i_RSAPrivateKey_bio */
/* Demangled: d2i_RSAPrivateKey_bio */
int d2i_RSAPrivateKey_bio(void);

/* Symbol: i2d_RSAPrivateKey_bio */
/* Demangled: i2d_RSAPrivateKey_bio */
int i2d_RSAPrivateKey_bio(void);

/* Symbol: d2i_RSAPublicKey_bio */
/* Demangled: d2i_RSAPublicKey_bio */
int d2i_RSAPublicKey_bio(void);

/* Symbol: d2i_RSA_PUBKEY_bio */
/* Demangled: d2i_RSA_PUBKEY_bio */
int d2i_RSA_PUBKEY_bio(void);

/* Symbol: i2d_RSAPublicKey_bio */
/* Demangled: i2d_RSAPublicKey_bio */
int i2d_RSAPublicKey_bio(void);

/* Symbol: i2d_RSA_PUBKEY_bio */
/* Demangled: i2d_RSA_PUBKEY_bio */
int i2d_RSA_PUBKEY_bio(void);

/* Symbol: d2i_DSAPrivateKey_fp */
/* Demangled: d2i_DSAPrivateKey_fp */
int d2i_DSAPrivateKey_fp(void);

/* Symbol: i2d_DSAPrivateKey_fp */
/* Demangled: i2d_DSAPrivateKey_fp */
int i2d_DSAPrivateKey_fp(void);

/* Symbol: d2i_DSA_PUBKEY_fp */
/* Demangled: d2i_DSA_PUBKEY_fp */
int d2i_DSA_PUBKEY_fp(void);

/* Symbol: i2d_DSA_PUBKEY_fp */
/* Demangled: i2d_DSA_PUBKEY_fp */
int i2d_DSA_PUBKEY_fp(void);

/* Symbol: d2i_DSAPrivateKey_bio */
/* Demangled: d2i_DSAPrivateKey_bio */
int d2i_DSAPrivateKey_bio(void);

/* Symbol: i2d_DSAPrivateKey_bio */
/* Demangled: i2d_DSAPrivateKey_bio */
int i2d_DSAPrivateKey_bio(void);

/* Symbol: d2i_DSA_PUBKEY_bio */
/* Demangled: d2i_DSA_PUBKEY_bio */
int d2i_DSA_PUBKEY_bio(void);

/* Symbol: i2d_DSA_PUBKEY_bio */
/* Demangled: i2d_DSA_PUBKEY_bio */
int i2d_DSA_PUBKEY_bio(void);

/* Symbol: d2i_EC_PUBKEY_fp */
/* Demangled: d2i_EC_PUBKEY_fp */
int d2i_EC_PUBKEY_fp(void);

/* Symbol: i2d_EC_PUBKEY_fp */
/* Demangled: i2d_EC_PUBKEY_fp */
int i2d_EC_PUBKEY_fp(void);

/* Symbol: d2i_ECPrivateKey_fp */
/* Demangled: d2i_ECPrivateKey_fp */
int d2i_ECPrivateKey_fp(void);

/* Symbol: i2d_ECPrivateKey_fp */
/* Demangled: i2d_ECPrivateKey_fp */
int i2d_ECPrivateKey_fp(void);

/* Symbol: d2i_EC_PUBKEY_bio */
/* Demangled: d2i_EC_PUBKEY_bio */
int d2i_EC_PUBKEY_bio(void);

/* Symbol: i2d_EC_PUBKEY_bio */
/* Demangled: i2d_EC_PUBKEY_bio */
int i2d_EC_PUBKEY_bio(void);

/* Symbol: d2i_ECPrivateKey_bio */
/* Demangled: d2i_ECPrivateKey_bio */
int d2i_ECPrivateKey_bio(void);

/* Symbol: i2d_ECPrivateKey_bio */
/* Demangled: i2d_ECPrivateKey_bio */
int i2d_ECPrivateKey_bio(void);

/* Symbol: X509_REQ_digest */
/* Demangled: X509_REQ_digest */
int X509_REQ_digest(void);

/* Symbol: PKCS7_ISSUER_AND_SERIAL_digest */
/* Demangled: PKCS7_ISSUER_AND_SERIAL_digest */
int PKCS7_ISSUER_AND_SERIAL_digest(void);

/* Symbol: d2i_PKCS8_fp */
/* Demangled: d2i_PKCS8_fp */
int d2i_PKCS8_fp(void);

/* Symbol: i2d_PKCS8_fp */
/* Demangled: i2d_PKCS8_fp */
int i2d_PKCS8_fp(void);

/* Symbol: d2i_PKCS8_PRIV_KEY_INFO_fp */
/* Demangled: d2i_PKCS8_PRIV_KEY_INFO_fp */
int d2i_PKCS8_PRIV_KEY_INFO_fp(void);

/* Symbol: i2d_PKCS8_PRIV_KEY_INFO_fp */
/* Demangled: i2d_PKCS8_PRIV_KEY_INFO_fp */
int i2d_PKCS8_PRIV_KEY_INFO_fp(void);

/* Symbol: i2d_PKCS8PrivateKeyInfo_fp */
/* Demangled: i2d_PKCS8PrivateKeyInfo_fp */
int i2d_PKCS8PrivateKeyInfo_fp(void);

/* Symbol: i2d_PrivateKey_fp */
/* Demangled: i2d_PrivateKey_fp */
int i2d_PrivateKey_fp(void);

/* Symbol: d2i_PrivateKey_fp */
/* Demangled: d2i_PrivateKey_fp */
int d2i_PrivateKey_fp(void);

/* Symbol: i2d_PUBKEY_fp */
/* Demangled: i2d_PUBKEY_fp */
int i2d_PUBKEY_fp(void);

/* Symbol: d2i_PUBKEY_fp */
/* Demangled: d2i_PUBKEY_fp */
int d2i_PUBKEY_fp(void);

/* Symbol: d2i_PKCS8_PRIV_KEY_INFO_bio */
/* Demangled: d2i_PKCS8_PRIV_KEY_INFO_bio */
int d2i_PKCS8_PRIV_KEY_INFO_bio(void);

/* Symbol: i2d_PKCS8PrivateKeyInfo_bio */
/* Demangled: i2d_PKCS8PrivateKeyInfo_bio */
int i2d_PKCS8PrivateKeyInfo_bio(void);

/* Symbol: i2d_PrivateKey_bio */
/* Demangled: i2d_PrivateKey_bio */
int i2d_PrivateKey_bio(void);

/* Symbol: d2i_PrivateKey_bio */
/* Demangled: d2i_PrivateKey_bio */
int d2i_PrivateKey_bio(void);

/* Symbol: i2d_PUBKEY_bio */
/* Demangled: i2d_PUBKEY_bio */
int i2d_PUBKEY_bio(void);

/* Symbol: d2i_PUBKEY_bio */
/* Demangled: d2i_PUBKEY_bio */
int d2i_PUBKEY_bio(void);

/* Symbol: policy_data_free */
/* Demangled: policy_data_free */
int policy_data_free(void);

/* Symbol: policy_cache_set */
/* Demangled: policy_cache_set */
int policy_cache_set(void);

/* Symbol: policy_data_new */
/* Demangled: policy_data_new */
int policy_data_new(void);

/* Symbol: policy_cache_set_mapping */
/* Demangled: policy_cache_set_mapping */
int policy_cache_set_mapping(void);

/* Symbol: POLICY_CONSTRAINTS_free */
/* Demangled: POLICY_CONSTRAINTS_free */
int POLICY_CONSTRAINTS_free(void);

/* Symbol: POLICYINFO_free */
/* Demangled: POLICYINFO_free */
int POLICYINFO_free(void);

/* Symbol: policy_cache_find_data */
/* Demangled: policy_cache_find_data */
int policy_cache_find_data(void);

/* Symbol: POLICYQUALINFO_free */
/* Demangled: POLICYQUALINFO_free */
int POLICYQUALINFO_free(void);

/* Symbol: X509_policy_tree_level_count */
/* Demangled: X509_policy_tree_level_count */
int X509_policy_tree_level_count(void);

/* Symbol: X509_policy_tree_get0_level */
/* Demangled: X509_policy_tree_get0_level */
int X509_policy_tree_get0_level(void);

/* Symbol: X509_policy_tree_get0_policies */
/* Demangled: X509_policy_tree_get0_policies */
int X509_policy_tree_get0_policies(void);

/* Symbol: X509_policy_tree_get0_user_policies */
/* Demangled: X509_policy_tree_get0_user_policies */
int X509_policy_tree_get0_user_policies(void);

/* Symbol: X509_policy_level_node_count */
/* Demangled: X509_policy_level_node_count */
int X509_policy_level_node_count(void);

/* Symbol: X509_policy_level_get0_node */
/* Demangled: X509_policy_level_get0_node */
int X509_policy_level_get0_node(void);

/* Symbol: X509_policy_node_get0_policy */
/* Demangled: X509_policy_node_get0_policy */
int X509_policy_node_get0_policy(void);

/* Symbol: X509_policy_node_get0_qualifiers */
/* Demangled: X509_policy_node_get0_qualifiers */
int X509_policy_node_get0_qualifiers(void);

/* Symbol: X509_policy_node_get0_parent */
/* Demangled: X509_policy_node_get0_parent */
int X509_policy_node_get0_parent(void);

/* Symbol: POLICY_MAPPING_free */
/* Demangled: POLICY_MAPPING_free */
int POLICY_MAPPING_free(void);

/* Symbol: policy_node_cmp_new */
/* Demangled: policy_node_cmp_new */
int policy_node_cmp_new(void);

/* Symbol: tree_find_sk */
/* Demangled: tree_find_sk */
int tree_find_sk(void);

/* Symbol: level_find_node */
/* Demangled: level_find_node */
int level_find_node(void);

/* Symbol: level_add_node */
/* Demangled: level_add_node */
int level_add_node(void);

/* Symbol: policy_node_free */
/* Demangled: policy_node_free */
int policy_node_free(void);

/* Symbol: policy_node_match */
/* Demangled: policy_node_match */
int policy_node_match(void);

/* Symbol: hex_to_string */
/* Demangled: hex_to_string */
int hex_to_string(void);

/* Symbol: X509V3_add_value */
/* Demangled: X509V3_add_value */
int X509V3_add_value(void);

/* Symbol: i2v_GENERAL_NAMES */
/* Demangled: i2v_GENERAL_NAMES */
int i2v_GENERAL_NAMES(void);

/* Symbol: X509V3_EXT_d2i */
/* Demangled: X509V3_EXT_d2i */
int X509V3_EXT_d2i(void);

/* Symbol: AUTHORITY_KEYID_new */
/* Demangled: AUTHORITY_KEYID_new */
int AUTHORITY_KEYID_new(void);

/* Symbol: v3_akey_id */
/* Demangled: v3_akey_id */
extern void* v3_akey_id;

/* Symbol: AUTHORITY_KEYID_it */
/* Demangled: AUTHORITY_KEYID_it */
extern void* AUTHORITY_KEYID_it;

/* Symbol: d2i_AUTHORITY_KEYID */
/* Demangled: d2i_AUTHORITY_KEYID */
int d2i_AUTHORITY_KEYID(void);

/* Symbol: i2d_AUTHORITY_KEYID */
/* Demangled: i2d_AUTHORITY_KEYID */
int i2d_AUTHORITY_KEYID(void);

/* Symbol: i2v_GENERAL_NAME */
/* Demangled: i2v_GENERAL_NAME */
int i2v_GENERAL_NAME(void);

/* Symbol: name_cmp */
/* Demangled: name_cmp */
int name_cmp(void);

/* Symbol: v2i_GENERAL_NAME_ex */
/* Demangled: v2i_GENERAL_NAME_ex */
int v2i_GENERAL_NAME_ex(void);

/* Symbol: X509V3_add_value_uchar */
/* Demangled: X509V3_add_value_uchar */
int X509V3_add_value_uchar(void);

/* Symbol: v2i_GENERAL_NAMES */
/* Demangled: v2i_GENERAL_NAMES */
int v2i_GENERAL_NAMES(void);

/* Symbol: v2i_GENERAL_NAME */
/* Demangled: v2i_GENERAL_NAME */
int v2i_GENERAL_NAME(void);

/* Symbol: a2i_GENERAL_NAME */
/* Demangled: a2i_GENERAL_NAME */
int a2i_GENERAL_NAME(void);

/* Symbol: OTHERNAME_new */
/* Demangled: OTHERNAME_new */
int OTHERNAME_new(void);

/* Symbol: X509V3_NAME_from_section */
/* Demangled: X509V3_NAME_from_section */
int X509V3_NAME_from_section(void);

/* Symbol: a2i_IPADDRESS_NC */
/* Demangled: a2i_IPADDRESS_NC */
int a2i_IPADDRESS_NC(void);

/* Symbol: a2i_IPADDRESS */
/* Demangled: a2i_IPADDRESS */
int a2i_IPADDRESS(void);

/* Symbol: v3_alt */
/* Demangled: v3_alt */
extern void* v3_alt;

/* Symbol: X509V3_add_value_bool */
/* Demangled: X509V3_add_value_bool */
int X509V3_add_value_bool(void);

/* Symbol: X509V3_add_value_int */
/* Demangled: X509V3_add_value_int */
int X509V3_add_value_int(void);

/* Symbol: X509V3_get_value_int */
/* Demangled: X509V3_get_value_int */
int X509V3_get_value_int(void);

/* Symbol: BASIC_CONSTRAINTS_it */
/* Demangled: BASIC_CONSTRAINTS_it */
extern void* BASIC_CONSTRAINTS_it;

/* Symbol: d2i_BASIC_CONSTRAINTS */
/* Demangled: d2i_BASIC_CONSTRAINTS */
int d2i_BASIC_CONSTRAINTS(void);

/* Symbol: i2d_BASIC_CONSTRAINTS */
/* Demangled: i2d_BASIC_CONSTRAINTS */
int i2d_BASIC_CONSTRAINTS(void);

/* Symbol: BASIC_CONSTRAINTS_new */
/* Demangled: BASIC_CONSTRAINTS_new */
int BASIC_CONSTRAINTS_new(void);

/* Symbol: BASIC_CONSTRAINTS_free */
/* Demangled: BASIC_CONSTRAINTS_free */
int BASIC_CONSTRAINTS_free(void);

/* Symbol: v3_bcons */
/* Demangled: v3_bcons */
extern void* v3_bcons;

/* Symbol: i2v_ASN1_BIT_STRING */
/* Demangled: i2v_ASN1_BIT_STRING */
int i2v_ASN1_BIT_STRING(void);

/* Symbol: v2i_ASN1_BIT_STRING */
/* Demangled: v2i_ASN1_BIT_STRING */
int v2i_ASN1_BIT_STRING(void);

/* Symbol: v3_nscert */
/* Demangled: v3_nscert */
extern void* v3_nscert;

/* Symbol: v3_key_usage */
/* Demangled: v3_key_usage */
extern void* v3_key_usage;

/* Symbol: X509V3_EXT_nconf */
/* Demangled: X509V3_EXT_nconf */
int X509V3_EXT_nconf(void);

/* Symbol: X509V3_EXT_get_nid */
/* Demangled: X509V3_EXT_get_nid */
int X509V3_EXT_get_nid(void);

/* Symbol: X509V3_parse_list */
/* Demangled: X509V3_parse_list */
int X509V3_parse_list(void);

/* Symbol: X509V3_conf_free */
/* Demangled: X509V3_conf_free */
int X509V3_conf_free(void);

/* Symbol: X509V3_EXT_nconf_nid */
/* Demangled: X509V3_EXT_nconf_nid */
int X509V3_EXT_nconf_nid(void);

/* Symbol: X509V3_EXT_add_nconf_sk */
/* Demangled: X509V3_EXT_add_nconf_sk */
int X509V3_EXT_add_nconf_sk(void);

/* Symbol: X509V3_EXT_add_nconf */
/* Demangled: X509V3_EXT_add_nconf */
int X509V3_EXT_add_nconf(void);

/* Symbol: X509V3_EXT_CRL_add_nconf */
/* Demangled: X509V3_EXT_CRL_add_nconf */
int X509V3_EXT_CRL_add_nconf(void);

/* Symbol: X509V3_EXT_REQ_add_nconf */
/* Demangled: X509V3_EXT_REQ_add_nconf */
int X509V3_EXT_REQ_add_nconf(void);

/* Symbol: X509V3_get_string */
/* Demangled: X509V3_get_string */
int X509V3_get_string(void);

/* Symbol: X509V3_string_free */
/* Demangled: X509V3_string_free */
int X509V3_string_free(void);

/* Symbol: X509V3_set_ctx */
/* Demangled: X509V3_set_ctx */
int X509V3_set_ctx(void);

/* Symbol: X509V3_EXT_conf */
/* Demangled: X509V3_EXT_conf */
int X509V3_EXT_conf(void);

/* Symbol: X509V3_EXT_conf_nid */
/* Demangled: X509V3_EXT_conf_nid */
int X509V3_EXT_conf_nid(void);

/* Symbol: X509V3_set_conf_lhash */
/* Demangled: X509V3_set_conf_lhash */
int X509V3_set_conf_lhash(void);

/* Symbol: X509V3_EXT_add_conf */
/* Demangled: X509V3_EXT_add_conf */
int X509V3_EXT_add_conf(void);

/* Symbol: X509V3_EXT_CRL_add_conf */
/* Demangled: X509V3_EXT_CRL_add_conf */
int X509V3_EXT_CRL_add_conf(void);

/* Symbol: X509V3_EXT_REQ_add_conf */
/* Demangled: X509V3_EXT_REQ_add_conf */
int X509V3_EXT_REQ_add_conf(void);

/* Symbol: POLICYINFO_it */
/* Demangled: POLICYINFO_it */
extern void* POLICYINFO_it;

/* Symbol: POLICYQUALINFO_it */
/* Demangled: POLICYQUALINFO_it */
extern void* POLICYQUALINFO_it;

/* Symbol: USERNOTICE_it */
/* Demangled: USERNOTICE_it */
extern void* USERNOTICE_it;

/* Symbol: NOTICEREF_it */
/* Demangled: NOTICEREF_it */
extern void* NOTICEREF_it;

/* Symbol: d2i_CERTIFICATEPOLICIES */
/* Demangled: d2i_CERTIFICATEPOLICIES */
int d2i_CERTIFICATEPOLICIES(void);

/* Symbol: CERTIFICATEPOLICIES_it */
/* Demangled: CERTIFICATEPOLICIES_it */
extern void* CERTIFICATEPOLICIES_it;

/* Symbol: i2d_CERTIFICATEPOLICIES */
/* Demangled: i2d_CERTIFICATEPOLICIES */
int i2d_CERTIFICATEPOLICIES(void);

/* Symbol: CERTIFICATEPOLICIES_new */
/* Demangled: CERTIFICATEPOLICIES_new */
int CERTIFICATEPOLICIES_new(void);

/* Symbol: CERTIFICATEPOLICIES_free */
/* Demangled: CERTIFICATEPOLICIES_free */
int CERTIFICATEPOLICIES_free(void);

/* Symbol: d2i_POLICYINFO */
/* Demangled: d2i_POLICYINFO */
int d2i_POLICYINFO(void);

/* Symbol: i2d_POLICYINFO */
/* Demangled: i2d_POLICYINFO */
int i2d_POLICYINFO(void);

/* Symbol: POLICYINFO_new */
/* Demangled: POLICYINFO_new */
int POLICYINFO_new(void);

/* Symbol: d2i_POLICYQUALINFO */
/* Demangled: d2i_POLICYQUALINFO */
int d2i_POLICYQUALINFO(void);

/* Symbol: i2d_POLICYQUALINFO */
/* Demangled: i2d_POLICYQUALINFO */
int i2d_POLICYQUALINFO(void);

/* Symbol: POLICYQUALINFO_new */
/* Demangled: POLICYQUALINFO_new */
int POLICYQUALINFO_new(void);

/* Symbol: d2i_USERNOTICE */
/* Demangled: d2i_USERNOTICE */
int d2i_USERNOTICE(void);

/* Symbol: i2d_USERNOTICE */
/* Demangled: i2d_USERNOTICE */
int i2d_USERNOTICE(void);

/* Symbol: USERNOTICE_new */
/* Demangled: USERNOTICE_new */
int USERNOTICE_new(void);

/* Symbol: USERNOTICE_free */
/* Demangled: USERNOTICE_free */
int USERNOTICE_free(void);

/* Symbol: d2i_NOTICEREF */
/* Demangled: d2i_NOTICEREF */
int d2i_NOTICEREF(void);

/* Symbol: i2d_NOTICEREF */
/* Demangled: i2d_NOTICEREF */
int i2d_NOTICEREF(void);

/* Symbol: NOTICEREF_new */
/* Demangled: NOTICEREF_new */
int NOTICEREF_new(void);

/* Symbol: NOTICEREF_free */
/* Demangled: NOTICEREF_free */
int NOTICEREF_free(void);

/* Symbol: X509_POLICY_NODE_print */
/* Demangled: X509_POLICY_NODE_print */
int X509_POLICY_NODE_print(void);

/* Symbol: v3_cpols */
/* Demangled: v3_cpols */
extern void* v3_cpols;

/* Symbol: GENERAL_NAMES_new */
/* Demangled: GENERAL_NAMES_new */
int GENERAL_NAMES_new(void);

/* Symbol: DIST_POINT_it */
/* Demangled: DIST_POINT_it */
extern void* DIST_POINT_it;

/* Symbol: DIST_POINT_NAME_it */
/* Demangled: DIST_POINT_NAME_it */
extern void* DIST_POINT_NAME_it;

/* Symbol: DIST_POINT_free */
/* Demangled: DIST_POINT_free */
int DIST_POINT_free(void);

/* Symbol: d2i_DIST_POINT_NAME */
/* Demangled: d2i_DIST_POINT_NAME */
int d2i_DIST_POINT_NAME(void);

/* Symbol: i2d_DIST_POINT_NAME */
/* Demangled: i2d_DIST_POINT_NAME */
int i2d_DIST_POINT_NAME(void);

/* Symbol: DIST_POINT_NAME_new */
/* Demangled: DIST_POINT_NAME_new */
int DIST_POINT_NAME_new(void);

/* Symbol: DIST_POINT_NAME_free */
/* Demangled: DIST_POINT_NAME_free */
int DIST_POINT_NAME_free(void);

/* Symbol: d2i_DIST_POINT */
/* Demangled: d2i_DIST_POINT */
int d2i_DIST_POINT(void);

/* Symbol: i2d_DIST_POINT */
/* Demangled: i2d_DIST_POINT */
int i2d_DIST_POINT(void);

/* Symbol: DIST_POINT_new */
/* Demangled: DIST_POINT_new */
int DIST_POINT_new(void);

/* Symbol: d2i_CRL_DIST_POINTS */
/* Demangled: d2i_CRL_DIST_POINTS */
int d2i_CRL_DIST_POINTS(void);

/* Symbol: CRL_DIST_POINTS_it */
/* Demangled: CRL_DIST_POINTS_it */
extern void* CRL_DIST_POINTS_it;

/* Symbol: i2d_CRL_DIST_POINTS */
/* Demangled: i2d_CRL_DIST_POINTS */
int i2d_CRL_DIST_POINTS(void);

/* Symbol: CRL_DIST_POINTS_new */
/* Demangled: CRL_DIST_POINTS_new */
int CRL_DIST_POINTS_new(void);

/* Symbol: d2i_ISSUING_DIST_POINT */
/* Demangled: d2i_ISSUING_DIST_POINT */
int d2i_ISSUING_DIST_POINT(void);

/* Symbol: ISSUING_DIST_POINT_it */
/* Demangled: ISSUING_DIST_POINT_it */
extern void* ISSUING_DIST_POINT_it;

/* Symbol: i2d_ISSUING_DIST_POINT */
/* Demangled: i2d_ISSUING_DIST_POINT */
int i2d_ISSUING_DIST_POINT(void);

/* Symbol: ISSUING_DIST_POINT_new */
/* Demangled: ISSUING_DIST_POINT_new */
int ISSUING_DIST_POINT_new(void);

/* Symbol: v3_crld */
/* Demangled: v3_crld */
extern void* v3_crld;

/* Symbol: v3_freshest_crl */
/* Demangled: v3_freshest_crl */
extern void* v3_freshest_crl;

/* Symbol: v3_idp */
/* Demangled: v3_idp */
extern void* v3_idp;

/* Symbol: i2s_ASN1_ENUMERATED_TABLE */
/* Demangled: i2s_ASN1_ENUMERATED_TABLE */
int i2s_ASN1_ENUMERATED_TABLE(void);

/* Symbol: i2s_ASN1_ENUMERATED */
/* Demangled: i2s_ASN1_ENUMERATED */
int i2s_ASN1_ENUMERATED(void);

/* Symbol: v3_crl_reason */
/* Demangled: v3_crl_reason */
extern void* v3_crl_reason;

/* Symbol: d2i_EXTENDED_KEY_USAGE */
/* Demangled: d2i_EXTENDED_KEY_USAGE */
int d2i_EXTENDED_KEY_USAGE(void);

/* Symbol: EXTENDED_KEY_USAGE_it */
/* Demangled: EXTENDED_KEY_USAGE_it */
extern void* EXTENDED_KEY_USAGE_it;

/* Symbol: i2d_EXTENDED_KEY_USAGE */
/* Demangled: i2d_EXTENDED_KEY_USAGE */
int i2d_EXTENDED_KEY_USAGE(void);

/* Symbol: EXTENDED_KEY_USAGE_new */
/* Demangled: EXTENDED_KEY_USAGE_new */
int EXTENDED_KEY_USAGE_new(void);

/* Symbol: EXTENDED_KEY_USAGE_free */
/* Demangled: EXTENDED_KEY_USAGE_free */
int EXTENDED_KEY_USAGE_free(void);

/* Symbol: v3_ext_ku */
/* Demangled: v3_ext_ku */
extern void* v3_ext_ku;

/* Symbol: v3_ocsp_accresp */
/* Demangled: v3_ocsp_accresp */
extern void* v3_ocsp_accresp;

/* Symbol: d2i_OTHERNAME */
/* Demangled: d2i_OTHERNAME */
int d2i_OTHERNAME(void);

/* Symbol: OTHERNAME_it */
/* Demangled: OTHERNAME_it */
extern void* OTHERNAME_it;

/* Symbol: i2d_OTHERNAME */
/* Demangled: i2d_OTHERNAME */
int i2d_OTHERNAME(void);

/* Symbol: OTHERNAME_free */
/* Demangled: OTHERNAME_free */
int OTHERNAME_free(void);

/* Symbol: d2i_EDIPARTYNAME */
/* Demangled: d2i_EDIPARTYNAME */
int d2i_EDIPARTYNAME(void);

/* Symbol: EDIPARTYNAME_it */
/* Demangled: EDIPARTYNAME_it */
extern void* EDIPARTYNAME_it;

/* Symbol: i2d_EDIPARTYNAME */
/* Demangled: i2d_EDIPARTYNAME */
int i2d_EDIPARTYNAME(void);

/* Symbol: EDIPARTYNAME_new */
/* Demangled: EDIPARTYNAME_new */
int EDIPARTYNAME_new(void);

/* Symbol: EDIPARTYNAME_free */
/* Demangled: EDIPARTYNAME_free */
int EDIPARTYNAME_free(void);

/* Symbol: d2i_GENERAL_NAME */
/* Demangled: d2i_GENERAL_NAME */
int d2i_GENERAL_NAME(void);

/* Symbol: i2d_GENERAL_NAME */
/* Demangled: i2d_GENERAL_NAME */
int i2d_GENERAL_NAME(void);

/* Symbol: d2i_GENERAL_NAMES */
/* Demangled: d2i_GENERAL_NAMES */
int d2i_GENERAL_NAMES(void);

/* Symbol: i2d_GENERAL_NAMES */
/* Demangled: i2d_GENERAL_NAMES */
int i2d_GENERAL_NAMES(void);

/* Symbol: GENERAL_NAME_dup */
/* Demangled: GENERAL_NAME_dup */
int GENERAL_NAME_dup(void);

/* Symbol: OTHERNAME_cmp */
/* Demangled: OTHERNAME_cmp */
int OTHERNAME_cmp(void);

/* Symbol: GENERAL_NAME_set0_value */
/* Demangled: GENERAL_NAME_set0_value */
int GENERAL_NAME_set0_value(void);

/* Symbol: GENERAL_NAME_get0_value */
/* Demangled: GENERAL_NAME_get0_value */
int GENERAL_NAME_get0_value(void);

/* Symbol: GENERAL_NAME_set0_othername */
/* Demangled: GENERAL_NAME_set0_othername */
int GENERAL_NAME_set0_othername(void);

/* Symbol: GENERAL_NAME_get0_otherName */
/* Demangled: GENERAL_NAME_get0_otherName */
int GENERAL_NAME_get0_otherName(void);

/* Symbol: v3_ns_ia5_list */
/* Demangled: v3_ns_ia5_list */
extern void* v3_ns_ia5_list;

/* Symbol: ACCESS_DESCRIPTION_free */
/* Demangled: ACCESS_DESCRIPTION_free */
int ACCESS_DESCRIPTION_free(void);

/* Symbol: d2i_ACCESS_DESCRIPTION */
/* Demangled: d2i_ACCESS_DESCRIPTION */
int d2i_ACCESS_DESCRIPTION(void);

/* Symbol: i2d_ACCESS_DESCRIPTION */
/* Demangled: i2d_ACCESS_DESCRIPTION */
int i2d_ACCESS_DESCRIPTION(void);

/* Symbol: d2i_AUTHORITY_INFO_ACCESS */
/* Demangled: d2i_AUTHORITY_INFO_ACCESS */
int d2i_AUTHORITY_INFO_ACCESS(void);

/* Symbol: AUTHORITY_INFO_ACCESS_it */
/* Demangled: AUTHORITY_INFO_ACCESS_it */
extern void* AUTHORITY_INFO_ACCESS_it;

/* Symbol: i2d_AUTHORITY_INFO_ACCESS */
/* Demangled: i2d_AUTHORITY_INFO_ACCESS */
int i2d_AUTHORITY_INFO_ACCESS(void);

/* Symbol: AUTHORITY_INFO_ACCESS_new */
/* Demangled: AUTHORITY_INFO_ACCESS_new */
int AUTHORITY_INFO_ACCESS_new(void);

/* Symbol: AUTHORITY_INFO_ACCESS_free */
/* Demangled: AUTHORITY_INFO_ACCESS_free */
int AUTHORITY_INFO_ACCESS_free(void);

/* Symbol: i2a_ACCESS_DESCRIPTION */
/* Demangled: i2a_ACCESS_DESCRIPTION */
int i2a_ACCESS_DESCRIPTION(void);

/* Symbol: v3_info */
/* Demangled: v3_info */
extern void* v3_info;

/* Symbol: v3_sinfo */
/* Demangled: v3_sinfo */
extern void* v3_sinfo;

/* Symbol: v3_crl_num */
/* Demangled: v3_crl_num */
extern void* v3_crl_num;

/* Symbol: v3_delta_crl */
/* Demangled: v3_delta_crl */
extern void* v3_delta_crl;

/* Symbol: v3_inhibit_anyp */
/* Demangled: v3_inhibit_anyp */
extern void* v3_inhibit_anyp;

/* Symbol: X509V3_EXT_add */
/* Demangled: X509V3_EXT_add */
int X509V3_EXT_add(void);

/* Symbol: X509V3_EXT_get */
/* Demangled: X509V3_EXT_get */
int X509V3_EXT_get(void);

/* Symbol: X509V3_EXT_add_list */
/* Demangled: X509V3_EXT_add_list */
int X509V3_EXT_add_list(void);

/* Symbol: X509V3_EXT_add_alias */
/* Demangled: X509V3_EXT_add_alias */
int X509V3_EXT_add_alias(void);

/* Symbol: X509V3_EXT_cleanup */
/* Demangled: X509V3_EXT_cleanup */
int X509V3_EXT_cleanup(void);

/* Symbol: X509V3_add_standard_extensions */
/* Demangled: X509V3_add_standard_extensions */
int X509V3_add_standard_extensions(void);

/* Symbol: v3_skey_id */
/* Demangled: v3_skey_id */
extern void* v3_skey_id;

/* Symbol: v3_pkey_usage_period */
/* Demangled: v3_pkey_usage_period */
extern void* v3_pkey_usage_period;

/* Symbol: v3_crl_invdate */
/* Demangled: v3_crl_invdate */
extern void* v3_crl_invdate;

/* Symbol: v3_sxnet */
/* Demangled: v3_sxnet */
extern void* v3_sxnet;

/* Symbol: v3_ocsp_nonce */
/* Demangled: v3_ocsp_nonce */
extern void* v3_ocsp_nonce;

/* Symbol: v3_ocsp_crlid */
/* Demangled: v3_ocsp_crlid */
extern void* v3_ocsp_crlid;

/* Symbol: v3_ocsp_nocheck */
/* Demangled: v3_ocsp_nocheck */
extern void* v3_ocsp_nocheck;

/* Symbol: v3_ocsp_acutoff */
/* Demangled: v3_ocsp_acutoff */
extern void* v3_ocsp_acutoff;

/* Symbol: v3_ocsp_serviceloc */
/* Demangled: v3_ocsp_serviceloc */
extern void* v3_ocsp_serviceloc;

/* Symbol: v3_policy_constraints */
/* Demangled: v3_policy_constraints */
extern void* v3_policy_constraints;

/* Symbol: v3_crl_hold */
/* Demangled: v3_crl_hold */
extern void* v3_crl_hold;

/* Symbol: v3_pci */
/* Demangled: v3_pci */
extern void* v3_pci;

/* Symbol: v3_name_constraints */
/* Demangled: v3_name_constraints */
extern void* v3_name_constraints;

/* Symbol: v3_policy_mappings */
/* Demangled: v3_policy_mappings */
extern void* v3_policy_mappings;

/* Symbol: NAME_CONSTRAINTS_it */
/* Demangled: NAME_CONSTRAINTS_it */
extern void* NAME_CONSTRAINTS_it;

/* Symbol: GENERAL_SUBTREE_it */
/* Demangled: GENERAL_SUBTREE_it */
extern void* GENERAL_SUBTREE_it;

/* Symbol: GENERAL_SUBTREE_new */
/* Demangled: GENERAL_SUBTREE_new */
int GENERAL_SUBTREE_new(void);

/* Symbol: GENERAL_SUBTREE_free */
/* Demangled: GENERAL_SUBTREE_free */
int GENERAL_SUBTREE_free(void);

/* Symbol: NAME_CONSTRAINTS_new */
/* Demangled: NAME_CONSTRAINTS_new */
int NAME_CONSTRAINTS_new(void);

/* Symbol: PROXY_CERT_INFO_EXTENSION_new */
/* Demangled: PROXY_CERT_INFO_EXTENSION_new */
int PROXY_CERT_INFO_EXTENSION_new(void);

/* Symbol: PROXY_CERT_INFO_EXTENSION_it */
/* Demangled: PROXY_CERT_INFO_EXTENSION_it */
extern void* PROXY_CERT_INFO_EXTENSION_it;

/* Symbol: d2i_PROXY_POLICY */
/* Demangled: d2i_PROXY_POLICY */
int d2i_PROXY_POLICY(void);

/* Symbol: PROXY_POLICY_it */
/* Demangled: PROXY_POLICY_it */
extern void* PROXY_POLICY_it;

/* Symbol: i2d_PROXY_POLICY */
/* Demangled: i2d_PROXY_POLICY */
int i2d_PROXY_POLICY(void);

/* Symbol: PROXY_POLICY_new */
/* Demangled: PROXY_POLICY_new */
int PROXY_POLICY_new(void);

/* Symbol: PROXY_POLICY_free */
/* Demangled: PROXY_POLICY_free */
int PROXY_POLICY_free(void);

/* Symbol: d2i_PROXY_CERT_INFO_EXTENSION */
/* Demangled: d2i_PROXY_CERT_INFO_EXTENSION */
int d2i_PROXY_CERT_INFO_EXTENSION(void);

/* Symbol: i2d_PROXY_CERT_INFO_EXTENSION */
/* Demangled: i2d_PROXY_CERT_INFO_EXTENSION */
int i2d_PROXY_CERT_INFO_EXTENSION(void);

/* Symbol: PROXY_CERT_INFO_EXTENSION_free */
/* Demangled: PROXY_CERT_INFO_EXTENSION_free */
int PROXY_CERT_INFO_EXTENSION_free(void);

/* Symbol: POLICY_CONSTRAINTS_it */
/* Demangled: POLICY_CONSTRAINTS_it */
extern void* POLICY_CONSTRAINTS_it;

/* Symbol: POLICY_CONSTRAINTS_new */
/* Demangled: POLICY_CONSTRAINTS_new */
int POLICY_CONSTRAINTS_new(void);

/* Symbol: d2i_PKEY_USAGE_PERIOD */
/* Demangled: d2i_PKEY_USAGE_PERIOD */
int d2i_PKEY_USAGE_PERIOD(void);

/* Symbol: PKEY_USAGE_PERIOD_it */
/* Demangled: PKEY_USAGE_PERIOD_it */
extern void* PKEY_USAGE_PERIOD_it;

/* Symbol: i2d_PKEY_USAGE_PERIOD */
/* Demangled: i2d_PKEY_USAGE_PERIOD */
int i2d_PKEY_USAGE_PERIOD(void);

/* Symbol: PKEY_USAGE_PERIOD_new */
/* Demangled: PKEY_USAGE_PERIOD_new */
int PKEY_USAGE_PERIOD_new(void);

/* Symbol: PKEY_USAGE_PERIOD_free */
/* Demangled: PKEY_USAGE_PERIOD_free */
int PKEY_USAGE_PERIOD_free(void);

/* Symbol: POLICY_MAPPING_it */
/* Demangled: POLICY_MAPPING_it */
extern void* POLICY_MAPPING_it;

/* Symbol: POLICY_MAPPING_new */
/* Demangled: POLICY_MAPPING_new */
int POLICY_MAPPING_new(void);

/* Symbol: POLICY_MAPPINGS_it */
/* Demangled: POLICY_MAPPINGS_it */
extern void* POLICY_MAPPINGS_it;

/* Symbol: X509V3_EXT_val_prn */
/* Demangled: X509V3_EXT_val_prn */
int X509V3_EXT_val_prn(void);

/* Symbol: X509V3_EXT_print_fp */
/* Demangled: X509V3_EXT_print_fp */
int X509V3_EXT_print_fp(void);

/* Symbol: X509_supported_extension */
/* Demangled: X509_supported_extension */
int X509_supported_extension(void);

/* Symbol: X509_PURPOSE_get_count */
/* Demangled: X509_PURPOSE_get_count */
int X509_PURPOSE_get_count(void);

/* Symbol: X509_PURPOSE_get_by_sname */
/* Demangled: X509_PURPOSE_get_by_sname */
int X509_PURPOSE_get_by_sname(void);

/* Symbol: X509_PURPOSE_add */
/* Demangled: X509_PURPOSE_add */
int X509_PURPOSE_add(void);

/* Symbol: X509_PURPOSE_cleanup */
/* Demangled: X509_PURPOSE_cleanup */
int X509_PURPOSE_cleanup(void);

/* Symbol: X509_PURPOSE_get_id */
/* Demangled: X509_PURPOSE_get_id */
int X509_PURPOSE_get_id(void);

/* Symbol: X509_PURPOSE_get0_name */
/* Demangled: X509_PURPOSE_get0_name */
int X509_PURPOSE_get0_name(void);

/* Symbol: X509_PURPOSE_get0_sname */
/* Demangled: X509_PURPOSE_get0_sname */
int X509_PURPOSE_get0_sname(void);

/* Symbol: X509_PURPOSE_get_trust */
/* Demangled: X509_PURPOSE_get_trust */
int X509_PURPOSE_get_trust(void);

/* Symbol: i2s_ASN1_OCTET_STRING */
/* Demangled: i2s_ASN1_OCTET_STRING */
int i2s_ASN1_OCTET_STRING(void);

/* Symbol: s2i_ASN1_OCTET_STRING */
/* Demangled: s2i_ASN1_OCTET_STRING */
int s2i_ASN1_OCTET_STRING(void);

/* Symbol: SXNET_add_id_asc */
/* Demangled: SXNET_add_id_asc */
int SXNET_add_id_asc(void);

/* Symbol: d2i_SXNETID */
/* Demangled: d2i_SXNETID */
int d2i_SXNETID(void);

/* Symbol: SXNETID_it */
/* Demangled: SXNETID_it */
extern void* SXNETID_it;

/* Symbol: i2d_SXNETID */
/* Demangled: i2d_SXNETID */
int i2d_SXNETID(void);

/* Symbol: SXNETID_new */
/* Demangled: SXNETID_new */
int SXNETID_new(void);

/* Symbol: SXNETID_free */
/* Demangled: SXNETID_free */
int SXNETID_free(void);

/* Symbol: d2i_SXNET */
/* Demangled: d2i_SXNET */
int d2i_SXNET(void);

/* Symbol: SXNET_it */
/* Demangled: SXNET_it */
extern void* SXNET_it;

/* Symbol: i2d_SXNET */
/* Demangled: i2d_SXNET */
int i2d_SXNET(void);

/* Symbol: SXNET_new */
/* Demangled: SXNET_new */
int SXNET_new(void);

/* Symbol: SXNET_free */
/* Demangled: SXNET_free */
int SXNET_free(void);

/* Symbol: SXNET_add_id_INTEGER */
/* Demangled: SXNET_add_id_INTEGER */
int SXNET_add_id_INTEGER(void);

/* Symbol: SXNET_get_id_INTEGER */
/* Demangled: SXNET_get_id_INTEGER */
int SXNET_get_id_INTEGER(void);

/* Symbol: SXNET_add_id_ulong */
/* Demangled: SXNET_add_id_ulong */
int SXNET_add_id_ulong(void);

/* Symbol: SXNET_get_id_asc */
/* Demangled: SXNET_get_id_asc */
int SXNET_get_id_asc(void);

/* Symbol: SXNET_get_id_ulong */
/* Demangled: SXNET_get_id_ulong */
int SXNET_get_id_ulong(void);

/* Symbol: X509V3_add_value_bool_nf */
/* Demangled: X509V3_add_value_bool_nf */
int X509V3_add_value_bool_nf(void);

/* Symbol: X509_get1_email */
/* Demangled: X509_get1_email */
int X509_get1_email(void);

/* Symbol: X509_get1_ocsp */
/* Demangled: X509_get1_ocsp */
int X509_get1_ocsp(void);

/* Symbol: X509_REQ_get1_email */
/* Demangled: X509_REQ_get1_email */
int X509_REQ_get1_email(void);

/* Symbol: X509_email_free */
/* Demangled: X509_email_free */
int X509_email_free(void);

/* Symbol: a2i_ipadd */
/* Demangled: a2i_ipadd */
int a2i_ipadd(void);

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

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

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

#endif /* BEGONIA_RE_LIBCRYPTO_SS_H */
