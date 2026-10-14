/*
 * Reverse-Engineered ABI Specification for: libwapi.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwapi.so
 */

#ifndef BEGONIA_RE_LIBWAPI_H
#define BEGONIA_RE_LIBWAPI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Unpack_AsueCert */
/* Demangled: Unpack_AsueCert */
int Unpack_AsueCert(void);

/* Symbol: Verify_Mac */
/* Demangled: Verify_Mac */
int Verify_Mac(void);

/* Symbol: octetstring_to_mint_c */
/* Demangled: octetstring_to_mint_c */
int octetstring_to_mint_c(void);

/* Symbol: SHA1_HMAC */
/* Demangled: SHA1_HMAC */
int SHA1_HMAC(void);

/* Symbol: GetPubkey_parameters_X509 */
/* Demangled: GetPubkey_parameters_X509 */
int GetPubkey_parameters_X509(void);

/* Symbol: iwn_rc2_enc_cbc */
/* Demangled: iwn_rc2_enc_cbc */
int iwn_rc2_enc_cbc(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: GetPubkey_Info_X509 */
/* Demangled: GetPubkey_Info_X509 */
int GetPubkey_Info_X509(void);

/* Symbol: byteorder_inv */
/* Demangled: byteorder_inv */
int byteorder_inv(void);

/* Symbol: iwn_rc2_enc */
/* Demangled: iwn_rc2_enc */
int iwn_rc2_enc(void);

/* Symbol: gen_random_number */
/* Demangled: gen_random_number */
int gen_random_number(void);

/* Symbol: SDF_ExternalSign_ECC */
/* Demangled: SDF_ExternalSign_ECC */
int SDF_ExternalSign_ECC(void);

/* Symbol: Der_Bit_String */
/* Demangled: Der_Bit_String */
int Der_Bit_String(void);

/* Symbol: iwn_rc2_dec */
/* Demangled: iwn_rc2_dec */
int iwn_rc2_dec(void);

/* Symbol: hash_rf */
/* Demangled: hash_rf */
int hash_rf(void);

/* Symbol: Get128_NthPower */
/* Demangled: Get128_NthPower */
int Get128_NthPower(void);

/* Symbol: iwn_get_buffer */
/* Demangled: iwn_get_buffer */
int iwn_get_buffer(void);

/* Symbol: mint_mod_sub */
/* Demangled: mint_mod_sub */
int mint_mod_sub(void);

/* Symbol: chart_to_int */
/* Demangled: chart_to_int */
int chart_to_int(void);

/* Symbol: IWN_ParseP12ToX509 */
/* Demangled: IWN_ParseP12ToX509 */
int IWN_ParseP12ToX509(void);

/* Symbol: wapi_set_debug_level */
/* Demangled: wapi_set_debug_level */
int wapi_set_debug_level(void);

/* Symbol: wapi_config_file_read */
/* Demangled: wapi_config_file_read */
int wapi_config_file_read(void);

/* Symbol: wapi_lib_init */
/* Demangled: wapi_lib_init */
int wapi_lib_init(void);

/* Symbol: mint_adjust_len */
/* Demangled: mint_adjust_len */
int mint_adjust_len(void);

/* Symbol: int_to_char */
/* Demangled: int_to_char */
int int_to_char(void);

/* Symbol: P8toP12_PriKey */
/* Demangled: P8toP12_PriKey */
int P8toP12_PriKey(void);

/* Symbol: GetPubkey_Der_Info_X509 */
/* Demangled: GetPubkey_Der_Info_X509 */
int GetPubkey_Der_Info_X509(void);

/* Symbol: WIFI_unicast_key_set */
/* Demangled: WIFI_unicast_key_set */
int WIFI_unicast_key_set(void);

/* Symbol: show_access_result */
/* Demangled: show_access_result */
int show_access_result(void);

/* Symbol: timer_set */
/* Demangled: timer_set */
int timer_set(void);

/* Symbol: wapi_lib_exit */
/* Demangled: wapi_lib_exit */
int wapi_lib_exit(void);

/* Symbol: gen_random */
/* Demangled: gen_random */
int gen_random(void);

/* Symbol: ext_rkey_sm4alg */
/* Demangled: ext_rkey_sm4alg */
int ext_rkey_sm4alg(void);

/* Symbol: Get8ShroudedKeyBagID_P12 */
/* Demangled: Get8ShroudedKeyBagID_P12 */
int Get8ShroudedKeyBagID_P12(void);

/* Symbol: Get_P8_PK_AlgorithmID */
/* Demangled: Get_P8_PK_AlgorithmID */
int Get_P8_PK_AlgorithmID(void);

/* Symbol: GetName_Sets_TypeAndValue_X509 */
/* Demangled: GetName_Sets_TypeAndValue_X509 */
int GetName_Sets_TypeAndValue_X509(void);

/* Symbol: timer_reset */
/* Demangled: timer_reset */
int timer_reset(void);

/* Symbol: mint_sqrt */
/* Demangled: mint_sqrt */
int mint_sqrt(void);

/* Symbol: GetFriendNameID_P12 */
/* Demangled: GetFriendNameID_P12 */
int GetFriendNameID_P12(void);

/* Symbol: Cert_Str_filter */
/* Demangled: Cert_Str_filter */
int Cert_Str_filter(void);

/* Symbol: wapi_get_debug_level */
/* Demangled: wapi_get_debug_level */
int wapi_get_debug_level(void);

/* Symbol: WIFI_group_key_set */
/* Demangled: WIFI_group_key_set */
int WIFI_group_key_set(void);

/* Symbol: timer_resend */
/* Demangled: timer_resend */
int timer_resend(void);

/* Symbol: mint_mod_reduce */
/* Demangled: mint_mod_reduce */
int mint_mod_reduce(void);

/* Symbol: Der_Put_Len */
/* Demangled: Der_Put_Len */
int Der_Put_Len(void);

/* Symbol: Get_X509_PK_Version */
/* Demangled: Get_X509_PK_Version */
int Get_X509_PK_Version(void);

/* Symbol: add_wapi_cert_compatible */
/* Demangled: add_wapi_cert_compatible */
int add_wapi_cert_compatible(void);

/* Symbol: mint_mul */
/* Demangled: mint_mul */
int mint_mul(void);

/* Symbol: mint_right_move */
/* Demangled: mint_right_move */
int mint_right_move(void);

/* Symbol: expank */
/* Demangled: expank */
int expank(void);

/* Symbol: End_P12 */
/* Demangled: End_P12 */
int End_P12(void);

/* Symbol: Check_P12_Data */
/* Demangled: Check_P12_Data */
int Check_P12_Data(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: free_cert_state_list */
/* Demangled: free_cert_state_list */
int free_cert_state_list(void);

/* Symbol: p12_rc2_cbc_decrypt */
/* Demangled: p12_rc2_cbc_decrypt */
int p12_rc2_cbc_decrypt(void);

/* Symbol: X509_Get_Pubkey */
/* Demangled: X509_Get_Pubkey */
int X509_Get_Pubkey(void);

/* Symbol: ecc_fix_point_mul */
/* Demangled: ecc_fix_point_mul */
int ecc_fix_point_mul(void);

/* Symbol: Der_Alg */
/* Demangled: Der_Alg */
int Der_Alg(void);

/* Symbol: Get_X509_Check_Sig_Info */
/* Demangled: Get_X509_Check_Sig_Info */
int Get_X509_Check_Sig_Info(void);

/* Symbol: Get_X509_PK_Reserve */
/* Demangled: Get_X509_PK_Reserve */
int Get_X509_PK_Reserve(void);

/* Symbol: UnPack_CHECK_X509 */
/* Demangled: UnPack_CHECK_X509 */
int UnPack_CHECK_X509(void);

/* Symbol: mint_bit_set */
/* Demangled: mint_bit_set */
int mint_bit_set(void);

/* Symbol: Gen_Mac_key */
/* Demangled: Gen_Mac_key */
int Gen_Mac_key(void);

/* Symbol: Get3DesAlg_P12 */
/* Demangled: Get3DesAlg_P12 */
int Get3DesAlg_P12(void);

/* Symbol: cal_value_md */
/* Demangled: cal_value_md */
int cal_value_md(void);

/* Symbol: div_2 */
/* Demangled: div_2 */
int div_2(void);

/* Symbol: IWN_ExternalEcdhKeyAgreement */
/* Demangled: IWN_ExternalEcdhKeyAgreement */
int IWN_ExternalEcdhKeyAgreement(void);

/* Symbol: ascii_to_unicode */
/* Demangled: ascii_to_unicode */
int ascii_to_unicode(void);

/* Symbol: GetRc2Salt_P12 */
/* Demangled: GetRc2Salt_P12 */
int GetRc2Salt_P12(void);

/* Symbol: UnPack_P12 */
/* Demangled: UnPack_P12 */
int UnPack_P12(void);

/* Symbol: init_wapi_cert */
/* Demangled: init_wapi_cert */
int init_wapi_cert(void);

/* Symbol: mint_exp */
/* Demangled: mint_exp */
int mint_exp(void);

/* Symbol: End_CHECK_X509 */
/* Demangled: End_CHECK_X509 */
int End_CHECK_X509(void);

/* Symbol: get_asue_cert_list */
/* Demangled: get_asue_cert_list */
int get_asue_cert_list(void);

/* Symbol: ecc_jac_point_double */
/* Demangled: ecc_jac_point_double */
int ecc_jac_point_double(void);

/* Symbol: get_mint_bit_len */
/* Demangled: get_mint_bit_len */
int get_mint_bit_len(void);

/* Symbol: DecodeBase64 */
/* Demangled: DecodeBase64 */
int DecodeBase64(void);

/* Symbol: mint_copy_c */
/* Demangled: mint_copy_c */
int mint_copy_c(void);

/* Symbol: GetSignature_parameters_X509 */
/* Demangled: GetSignature_parameters_X509 */
int GetSignature_parameters_X509(void);

/* Symbol: Is_Wapi_Cert */
/* Demangled: Is_Wapi_Cert */
int Is_Wapi_Cert(void);

/* Symbol: get_cert_identity */
/* Demangled: get_cert_identity */
int get_cert_identity(void);

/* Symbol: iwn_getshort */
/* Demangled: iwn_getshort */
int iwn_getshort(void);

/* Symbol: SDF_ExternalDecrypt_ECC */
/* Demangled: SDF_ExternalDecrypt_ECC */
int SDF_ExternalDecrypt_ECC(void);

/* Symbol: Get_P8_PK_Key */
/* Demangled: Get_P8_PK_Key */
int Get_P8_PK_Key(void);

/* Symbol: GetSignature_algorithm_X509 */
/* Demangled: GetSignature_algorithm_X509 */
int GetSignature_algorithm_X509(void);

/* Symbol: str_filter */
/* Demangled: str_filter */
int str_filter(void);

/* Symbol: save_cert_state_list */
/* Demangled: save_cert_state_list */
int save_cert_state_list(void);

/* Symbol: ecc_infinite_point */
/* Demangled: ecc_infinite_point */
int ecc_infinite_point(void);

/* Symbol: hash_mint_value */
/* Demangled: hash_mint_value */
int hash_mint_value(void);

/* Symbol: EcdhKeyAgreement */
/* Demangled: EcdhKeyAgreement */
int EcdhKeyAgreement(void);

/* Symbol: SDF_GetDeviceInfo */
/* Demangled: SDF_GetDeviceInfo */
int SDF_GetDeviceInfo(void);

/* Symbol: enc_sm4alg */
/* Demangled: enc_sm4alg */
int enc_sm4alg(void);

/* Symbol: mint_to_octetstring_c */
/* Demangled: mint_to_octetstring_c */
int mint_to_octetstring_c(void);

/* Symbol: mint_to_fixedlen_os */
/* Demangled: mint_to_fixedlen_os */
int mint_to_fixedlen_os(void);

/* Symbol: mac_mode_sm4 */
/* Demangled: mac_mode_sm4 */
int mac_mode_sm4(void);

/* Symbol: WIFI_get_rand_byte */
/* Demangled: WIFI_get_rand_byte */
int WIFI_get_rand_byte(void);

/* Symbol: SDF_CloseSession */
/* Demangled: SDF_CloseSession */
int SDF_CloseSession(void);

/* Symbol: unicode_gen_key */
/* Demangled: unicode_gen_key */
int unicode_gen_key(void);

/* Symbol: End_P8_PrivateKey */
/* Demangled: End_P8_PrivateKey */
int End_P8_PrivateKey(void);

/* Symbol: GetRc2Iter_P12 */
/* Demangled: GetRc2Iter_P12 */
int GetRc2Iter_P12(void);

/* Symbol: ecc_jac_point_add */
/* Demangled: ecc_jac_point_add */
int ecc_jac_point_add(void);

/* Symbol: mint_mod_left_move_n */
/* Demangled: mint_mod_left_move_n */
int mint_mod_left_move_n(void);

/* Symbol: wlan_deauth_for_otherc */
/* Demangled: wlan_deauth_for_otherc */
int wlan_deauth_for_otherc(void);

/* Symbol: free_asue_cert_data */
/* Demangled: free_asue_cert_data */
int free_asue_cert_data(void);

/* Symbol: cal_value */
/* Demangled: cal_value */
int cal_value(void);

/* Symbol: ECDSA_ExternalVerify_ECC */
/* Demangled: ECDSA_ExternalVerify_ECC */
int ECDSA_ExternalVerify_ECC(void);

/* Symbol: Get3DesIter_P12 */
/* Demangled: Get3DesIter_P12 */
int Get3DesIter_P12(void);

/* Symbol: End_X509_PrivateKey */
/* Demangled: End_X509_PrivateKey */
int End_X509_PrivateKey(void);

/* Symbol: GetAfterTime_X509 */
/* Demangled: GetAfterTime_X509 */
int GetAfterTime_X509(void);

/* Symbol: GetBeforeTime_X509 */
/* Demangled: GetBeforeTime_X509 */
int GetBeforeTime_X509(void);

/* Symbol: mint_mod */
/* Demangled: mint_mod */
int mint_mod(void);

/* Symbol: dec_sm4alg */
/* Demangled: dec_sm4alg */
int dec_sm4alg(void);

/* Symbol: wapi_printf */
/* Demangled: wapi_printf */
int wapi_printf(void);

/* Symbol: free_aliases */
/* Demangled: free_aliases */
int free_aliases(void);

/* Symbol: ecc_jacobin_affine */
/* Demangled: ecc_jacobin_affine */
int ecc_jacobin_affine(void);

/* Symbol: ecc_point_unpress */
/* Demangled: ecc_point_unpress */
int ecc_point_unpress(void);

/* Symbol: mint_add */
/* Demangled: mint_add */
int mint_add(void);

/* Symbol: IWN_ExternalVerifyHash_ECC */
/* Demangled: IWN_ExternalVerifyHash_ECC */
int IWN_ExternalVerifyHash_ECC(void);

/* Symbol: ChangeIdentifyToString_X509 */
/* Demangled: ChangeIdentifyToString_X509 */
int ChangeIdentifyToString_X509(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: iwn_setshort */
/* Demangled: iwn_setshort */
int iwn_setshort(void);

/* Symbol: alloc_asue_cert_data */
/* Demangled: alloc_asue_cert_data */
int alloc_asue_cert_data(void);

/* Symbol: hash_byte */
/* Demangled: hash_byte */
int hash_byte(void);

/* Symbol: SDF_ExternalEncrytp_ECC */
/* Demangled: SDF_ExternalEncrytp_ECC */
int SDF_ExternalEncrytp_ECC(void);

/* Symbol: cert_search */
/* Demangled: cert_search */
int cert_search(void);

/* Symbol: X509_Get_Cert_Info */
/* Demangled: X509_Get_Cert_Info */
int X509_Get_Cert_Info(void);

/* Symbol: Der_Integer */
/* Demangled: Der_Integer */
int Der_Integer(void);

/* Symbol: sha1_a */
/* Demangled: sha1_a */
int sha1_a(void);

/* Symbol: GetMacValue_P12 */
/* Demangled: GetMacValue_P12 */
int GetMacValue_P12(void);

/* Symbol: GetVersion_X509 */
/* Demangled: GetVersion_X509 */
int GetVersion_X509(void);

/* Symbol: get_match_wapi_cert */
/* Demangled: get_match_wapi_cert */
int get_match_wapi_cert(void);

/* Symbol: wapi_get_state */
/* Demangled: wapi_get_state */
int wapi_get_state(void);

/* Symbol: GetMacIter_P12 */
/* Demangled: GetMacIter_P12 */
int GetMacIter_P12(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: wpi_decrypt */
/* Demangled: wpi_decrypt */
int wpi_decrypt(void);

/* Symbol: GetVersion_P12 */
/* Demangled: GetVersion_P12 */
int GetVersion_P12(void);

/* Symbol: Get_P8_PK_Version */
/* Demangled: Get_P8_PK_Version */
int Get_P8_PK_Version(void);

/* Symbol: GetSerialnumber_X509 */
/* Demangled: GetSerialnumber_X509 */
int GetSerialnumber_X509(void);

/* Symbol: ecc_copy_point */
/* Demangled: ecc_copy_point */
int ecc_copy_point(void);

/* Symbol: ecc_test_point */
/* Demangled: ecc_test_point */
int ecc_test_point(void);

/* Symbol: IWN_ExternalSignHash_ECC */
/* Demangled: IWN_ExternalSignHash_ECC */
int IWN_ExternalSignHash_ECC(void);

/* Symbol: GetInfoLength */
/* Demangled: GetInfoLength */
int GetInfoLength(void);

/* Symbol: GetP7DataID_2_P12 */
/* Demangled: GetP7DataID_2_P12 */
int GetP7DataID_2_P12(void);

/* Symbol: My_Strstr */
/* Demangled: My_Strstr */
int My_Strstr(void);

/* Symbol: cal_value_m */
/* Demangled: cal_value_m */
int cal_value_m(void);

/* Symbol: ecc_affine_jacobin */
/* Demangled: ecc_affine_jacobin */
int ecc_affine_jacobin(void);

/* Symbol: IWN_KdHmacSha256 */
/* Demangled: IWN_KdHmacSha256 */
int IWN_KdHmacSha256(void);

/* Symbol: GetP7EnDataID_P12 */
/* Demangled: GetP7EnDataID_P12 */
int GetP7EnDataID_P12(void);

/* Symbol: GetsignatureAlgorithm_parameters_X509 */
/* Demangled: GetsignatureAlgorithm_parameters_X509 */
int GetsignatureAlgorithm_parameters_X509(void);

/* Symbol: Unpack_X509_PrivateKey */
/* Demangled: Unpack_X509_PrivateKey */
int Unpack_X509_PrivateKey(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: ecc_invert_point */
/* Demangled: ecc_invert_point */
int ecc_invert_point(void);

/* Symbol: mint_mod_left_move_1 */
/* Demangled: mint_mod_left_move_1 */
int mint_mod_left_move_1(void);

/* Symbol: mint_compare */
/* Demangled: mint_compare */
int mint_compare(void);

/* Symbol: p12_3des_cbc_decrypt */
/* Demangled: p12_3des_cbc_decrypt */
int p12_3des_cbc_decrypt(void);

/* Symbol: GetLocalKeyData_P12 */
/* Demangled: GetLocalKeyData_P12 */
int GetLocalKeyData_P12(void);

/* Symbol: Der_Put_Obj */
/* Demangled: Der_Put_Obj */
int Der_Put_Obj(void);

/* Symbol: mint_adjust_len_c */
/* Demangled: mint_adjust_len_c */
int mint_adjust_len_c(void);

/* Symbol: wapi_get_assoc_ie */
/* Demangled: wapi_get_assoc_ie */
int wapi_get_assoc_ie(void);

/* Symbol: mint_EEA_algo */
/* Demangled: mint_EEA_algo */
int mint_EEA_algo(void);

/* Symbol: hash_init */
/* Demangled: hash_init */
int hash_init(void);

/* Symbol: IWN_CloseSession */
/* Demangled: IWN_CloseSession */
int IWN_CloseSession(void);

/* Symbol: IWN_CurveParaCfg */
/* Demangled: IWN_CurveParaCfg */
int IWN_CurveParaCfg(void);

/* Symbol: SDF_OpenDevice */
/* Demangled: SDF_OpenDevice */
int SDF_OpenDevice(void);

/* Symbol: uintp_to_ucp */
/* Demangled: uintp_to_ucp */
int uintp_to_ucp(void);

/* Symbol: mint_sub */
/* Demangled: mint_sub */
int mint_sub(void);

/* Symbol: iwn_wpa_defrag */
/* Demangled: iwn_wpa_defrag */
int iwn_wpa_defrag(void);

/* Symbol: Der_Bytes */
/* Demangled: Der_Bytes */
int Der_Bytes(void);

/* Symbol: GetP7DataID_P12 */
/* Demangled: GetP7DataID_P12 */
int GetP7DataID_P12(void);

/* Symbol: GetExtension_Sets_TypeAndValue_X509 */
/* Demangled: GetExtension_Sets_TypeAndValue_X509 */
int GetExtension_Sets_TypeAndValue_X509(void);

/* Symbol: iwn_free_buffer */
/* Demangled: iwn_free_buffer */
int iwn_free_buffer(void);

/* Symbol: Der_Obj */
/* Demangled: Der_Obj */
int Der_Obj(void);

/* Symbol: End_AUTH_SAFE_BAG */
/* Demangled: End_AUTH_SAFE_BAG */
int End_AUTH_SAFE_BAG(void);

/* Symbol: GetName_Attr_TypeAndValue_P12 */
/* Demangled: GetName_Attr_TypeAndValue_P12 */
int GetName_Attr_TypeAndValue_P12(void);

/* Symbol: GetsignatureAlgorithm_algorithm_X509 */
/* Demangled: GetsignatureAlgorithm_algorithm_X509 */
int GetsignatureAlgorithm_algorithm_X509(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: octetstring_to_mint */
/* Demangled: octetstring_to_mint */
int octetstring_to_mint(void);

/* Symbol: get_AsuePrikey_from_cert */
/* Demangled: get_AsuePrikey_from_cert */
int get_AsuePrikey_from_cert(void);

/* Symbol: ecc_jac_point_add_1 */
/* Demangled: ecc_jac_point_add_1 */
int ecc_jac_point_add_1(void);

/* Symbol: ECDSA_ExternalSign_ECC */
/* Demangled: ECDSA_ExternalSign_ECC */
int ECDSA_ExternalSign_ECC(void);

/* Symbol: mint_add_c */
/* Demangled: mint_add_c */
int mint_add_c(void);

/* Symbol: Unpack_AsuePrikey */
/* Demangled: Unpack_AsuePrikey */
int Unpack_AsuePrikey(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: add_cert_items */
/* Demangled: add_cert_items */
int add_cert_items(void);

/* Symbol: mint_div */
/* Demangled: mint_div */
int mint_div(void);

/* Symbol: EncodeBase64 */
/* Demangled: EncodeBase64 */
int EncodeBase64(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: iwn_kdhmac_sha256 */
/* Demangled: iwn_kdhmac_sha256 */
int iwn_kdhmac_sha256(void);

/* Symbol: UnPack_X509 */
/* Demangled: UnPack_X509 */
int UnPack_X509(void);

/* Symbol: get_asue_cert_use_index */
/* Demangled: get_asue_cert_use_index */
int get_asue_cert_use_index(void);

/* Symbol: Get_Sets_Count_X509 */
/* Demangled: Get_Sets_Count_X509 */
int Get_Sets_Count_X509(void);

/* Symbol: mint_mul_3 */
/* Demangled: mint_mul_3 */
int mint_mul_3(void);

/* Symbol: com_xy_trsform */
/* Demangled: com_xy_trsform */
int com_xy_trsform(void);

/* Symbol: mint_mul_4 */
/* Demangled: mint_mul_4 */
int mint_mul_4(void);

/* Symbol: Unpack_P8_PrivateKey */
/* Demangled: Unpack_P8_PrivateKey */
int Unpack_P8_PrivateKey(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: com_xx_trsform */
/* Demangled: com_xx_trsform */
int com_xx_trsform(void);

/* Symbol: ecc_init */
/* Demangled: ecc_init */
int ecc_init(void);

/* Symbol: p12_rc2_cbc_encrypt */
/* Demangled: p12_rc2_cbc_encrypt */
int p12_rc2_cbc_encrypt(void);

/* Symbol: Get_X509_PK_PublicKey */
/* Demangled: Get_X509_PK_PublicKey */
int Get_X509_PK_PublicKey(void);

/* Symbol: ecc_new_key */
/* Demangled: ecc_new_key */
int ecc_new_key(void);

/* Symbol: iwn_hmac_sha256 */
/* Demangled: iwn_hmac_sha256 */
int iwn_hmac_sha256(void);

/* Symbol: wapi_set_msg */
/* Demangled: wapi_set_msg */
int wapi_set_msg(void);

/* Symbol: wapi_set_rx_wai */
/* Demangled: wapi_set_rx_wai */
int wapi_set_rx_wai(void);

/* Symbol: cr_nf */
/* Demangled: cr_nf */
int cr_nf(void);

/* Symbol: Get_P8_PK_AlgorithmPARAM */
/* Demangled: Get_P8_PK_AlgorithmPARAM */
int Get_P8_PK_AlgorithmPARAM(void);

/* Symbol: UnPack_AUTH_SAFE_BAG */
/* Demangled: UnPack_AUTH_SAFE_BAG */
int UnPack_AUTH_SAFE_BAG(void);

/* Symbol: ecc_exit */
/* Demangled: ecc_exit */
int ecc_exit(void);

/* Symbol: GetX509Info_ASN1 */
/* Demangled: GetX509Info_ASN1 */
int GetX509Info_ASN1(void);

/* Symbol: mint_mod_mul */
/* Demangled: mint_mod_mul */
int mint_mod_mul(void);

/* Symbol: sub_2 */
/* Demangled: sub_2 */
int sub_2(void);

/* Symbol: SDF_OpenSession */
/* Demangled: SDF_OpenSession */
int SDF_OpenSession(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: wapi_hexdump */
/* Demangled: wapi_hexdump */
int wapi_hexdump(void);

/* Symbol: X509_Get_Prikey */
/* Demangled: X509_Get_Prikey */
int X509_Get_Prikey(void);

/* Symbol: IWN_CurveVerify */
/* Demangled: IWN_CurveVerify */
int IWN_CurveVerify(void);

/* Symbol: GetFriendNameData_P12 */
/* Demangled: GetFriendNameData_P12 */
int GetFriendNameData_P12(void);

/* Symbol: wapi_set_user */
/* Demangled: wapi_set_user */
int wapi_set_user(void);

/* Symbol: iwn_wpa_ether_send */
/* Demangled: iwn_wpa_ether_send */
int iwn_wpa_ether_send(void);

/* Symbol: setWapiIncorrect */
/* Demangled: setWapiIncorrect */
int setWapiIncorrect(void);

/* Symbol: IWN_Sha256 */
/* Demangled: IWN_Sha256 */
int IWN_Sha256(void);

/* Symbol: GetRc2Alg_P12 */
/* Demangled: GetRc2Alg_P12 */
int GetRc2Alg_P12(void);

/* Symbol: free_asue_cert_list */
/* Demangled: free_asue_cert_list */
int free_asue_cert_list(void);

/* Symbol: add_2 */
/* Demangled: add_2 */
int add_2(void);

/* Symbol: SDF_ExternalVerify_ECC */
/* Demangled: SDF_ExternalVerify_ECC */
int SDF_ExternalVerify_ECC(void);

/* Symbol: SDF_GenerateRandom */
/* Demangled: SDF_GenerateRandom */
int SDF_GenerateRandom(void);

/* Symbol: iwn_mhash_sha256 */
/* Demangled: iwn_mhash_sha256 */
int iwn_mhash_sha256(void);

/* Symbol: get_mint_bit_len_c */
/* Demangled: get_mint_bit_len_c */
int get_mint_bit_len_c(void);

/* Symbol: GetCertData_P12 */
/* Demangled: GetCertData_P12 */
int GetCertData_P12(void);

/* Symbol: ecc_vrfy */
/* Demangled: ecc_vrfy */
int ecc_vrfy(void);

/* Symbol: iwn_wapi_sm_rx_wai */
/* Demangled: iwn_wapi_sm_rx_wai */
int iwn_wapi_sm_rx_wai(void);

/* Symbol: match_cert_state */
/* Demangled: match_cert_state */
int match_cert_state(void);

/* Symbol: SDF_GenerateKeyPair_ECC */
/* Demangled: SDF_GenerateKeyPair_ECC */
int SDF_GenerateKeyPair_ECC(void);

/* Symbol: Cert_BagInfo */
/* Demangled: Cert_BagInfo */
int Cert_BagInfo(void);

/* Symbol: Get3DesSalt_P12 */
/* Demangled: Get3DesSalt_P12 */
int Get3DesSalt_P12(void);

/* Symbol: get_asue_cert_use_alias */
/* Demangled: get_asue_cert_use_alias */
int get_asue_cert_use_alias(void);

/* Symbol: mint_to_octetstring */
/* Demangled: mint_to_octetstring */
int mint_to_octetstring(void);

/* Symbol: Get_X509_PK_AlgorithmID */
/* Demangled: Get_X509_PK_AlgorithmID */
int Get_X509_PK_AlgorithmID(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: add_cert_state */
/* Demangled: add_cert_state */
int add_cert_state(void);

/* Symbol: ECES_ExternalDecrypt_ECC */
/* Demangled: ECES_ExternalDecrypt_ECC */
int ECES_ExternalDecrypt_ECC(void);

/* Symbol: GetsignatureValue_X509 */
/* Demangled: GetsignatureValue_X509 */
int GetsignatureValue_X509(void);

/* Symbol: ecc_point_add */
/* Demangled: ecc_point_add */
int ecc_point_add(void);

/* Symbol: ecc_unknown_point_mul */
/* Demangled: ecc_unknown_point_mul */
int ecc_unknown_point_mul(void);

/* Symbol: mint_copy */
/* Demangled: mint_copy */
int mint_copy(void);

/* Symbol: mint_left_move */
/* Demangled: mint_left_move */
int mint_left_move(void);

/* Symbol: ecc_time */
/* Demangled: ecc_time */
int ecc_time(void);

/* Symbol: ofb_mode_endec_sm4 */
/* Demangled: ofb_mode_endec_sm4 */
int ofb_mode_endec_sm4(void);

/* Symbol: GetMacAlg_P12 */
/* Demangled: GetMacAlg_P12 */
int GetMacAlg_P12(void);

/* Symbol: Get_X509_PK_PrivateKey */
/* Demangled: Get_X509_PK_PrivateKey */
int Get_X509_PK_PrivateKey(void);

/* Symbol: GetMacSalt_P12 */
/* Demangled: GetMacSalt_P12 */
int GetMacSalt_P12(void);

/* Symbol: End_X509 */
/* Demangled: End_X509 */
int End_X509(void);

/* Symbol: ecc_ecdh_compute */
/* Demangled: ecc_ecdh_compute */
int ecc_ecdh_compute(void);

/* Symbol: cal_a */
/* Demangled: cal_a */
int cal_a(void);

/* Symbol: GetPubkey_algorithm_X509 */
/* Demangled: GetPubkey_algorithm_X509 */
int GetPubkey_algorithm_X509(void);

/* Symbol: Get_X509_Check_Info */
/* Demangled: Get_X509_Check_Info */
int Get_X509_Check_Info(void);

/* Symbol: ecc_point_double */
/* Demangled: ecc_point_double */
int ecc_point_double(void);

/* Symbol: mint_mod_add */
/* Demangled: mint_mod_add */
int mint_mod_add(void);

/* Symbol: cal_b */
/* Demangled: cal_b */
int cal_b(void);

/* Symbol: GetPrikeyData_P12 */
/* Demangled: GetPrikeyData_P12 */
int GetPrikeyData_P12(void);

/* Symbol: wapi_cert_state */
/* Demangled: wapi_cert_state */
extern void* wapi_cert_state;

/* Symbol: wpi_encrypt */
/* Demangled: wpi_encrypt */
int wpi_encrypt(void);

/* Symbol: get_cert_state_list */
/* Demangled: get_cert_state_list */
int get_cert_state_list(void);

/* Symbol: hash_final */
/* Demangled: hash_final */
int hash_final(void);

/* Symbol: sm4alg */
/* Demangled: sm4alg */
int sm4alg(void);

/* Symbol: cal_c */
/* Demangled: cal_c */
int cal_c(void);

/* Symbol: IWN_ParseP12ToX509_Mod */
/* Demangled: IWN_ParseP12ToX509_Mod */
int IWN_ParseP12ToX509_Mod(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: deinit_wapi_cert */
/* Demangled: deinit_wapi_cert */
int deinit_wapi_cert(void);

/* Symbol: show_wapi_pack */
/* Demangled: show_wapi_pack */
int show_wapi_pack(void);

/* Symbol: mul_2 */
/* Demangled: mul_2 */
int mul_2(void);

/* Symbol: IWN_OpenSession */
/* Demangled: IWN_OpenSession */
int IWN_OpenSession(void);

/* Symbol: cal_d */
/* Demangled: cal_d */
int cal_d(void);

/* Symbol: Get_Attr_Count_P12 */
/* Demangled: Get_Attr_Count_P12 */
int Get_Attr_Count_P12(void);

/* Symbol: add_wapi_cert */
/* Demangled: add_wapi_cert */
int add_wapi_cert(void);

/* Symbol: iwn_rc2_dec_cbc */
/* Demangled: iwn_rc2_dec_cbc */
int iwn_rc2_dec_cbc(void);

/* Symbol: GetLocalKeyID_P12 */
/* Demangled: GetLocalKeyID_P12 */
int GetLocalKeyID_P12(void);

/* Symbol: GetP7DataID_1_P12 */
/* Demangled: GetP7DataID_1_P12 */
int GetP7DataID_1_P12(void);

/* Symbol: get_random */
/* Demangled: get_random */
int get_random(void);

/* Symbol: Unpack_AsuCert */
/* Demangled: Unpack_AsuCert */
int Unpack_AsuCert(void);

/* Symbol: ecc_precomputation_point */
/* Demangled: ecc_precomputation_point */
int ecc_precomputation_point(void);

/* Symbol: ECES_ExternalEncrytp_ECC */
/* Demangled: ECES_ExternalEncrytp_ECC */
int ECES_ExternalEncrytp_ECC(void);

/* Symbol: SDF_CloseDevice */
/* Demangled: SDF_CloseDevice */
int SDF_CloseDevice(void);

/* Symbol: iwn_wai_frag */
/* Demangled: iwn_wai_frag */
int iwn_wai_frag(void);

/* Symbol: Der_Obj_Len */
/* Demangled: Der_Obj_Len */
int Der_Obj_Len(void);

/* Symbol: cl_nf */
/* Demangled: cl_nf */
int cl_nf(void);

/* Symbol: ucp_to_uintp */
/* Demangled: ucp_to_uintp */
int ucp_to_uintp(void);

/* Symbol: ecc_sign */
/* Demangled: ecc_sign */
int ecc_sign(void);

/* Symbol: IWN_HmacSha256 */
/* Demangled: IWN_HmacSha256 */
int IWN_HmacSha256(void);

/* Symbol: pass_gen_key */
/* Demangled: pass_gen_key */
int pass_gen_key(void);

/* Symbol: p12_3des_cbc_encrypt */
/* Demangled: p12_3des_cbc_encrypt */
int p12_3des_cbc_encrypt(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWAPI_H */
