/*
 * Reverse-Engineered ABI Specification for: libkeymaster_portable.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libkeymaster_portable.so
 */

#ifndef BEGONIA_RE_LIBKEYMASTER_PORTABLE_H
#define BEGONIA_RE_LIBKEYMASTER_PORTABLE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::BeginOperationRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster14AccessCountMap14KeyAccessCountEmPj */
/* Demangled: keymaster::AccessCountMap::KeyAccessCount(unsigned long, unsigned int*) const */
int _ZNK9keymaster14AccessCountMap14KeyAccessCountEmPj(void);

/* Symbol: _ZN9keymaster13TAG_ALL_USERSE */
/* Demangled: keymaster::TAG_ALL_USERS */
extern void* _ZN9keymaster13TAG_ALL_USERSE;

/* Symbol: _ZN9keymaster13HmacOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::HmacOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster13HmacOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::BeginOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HmacSharingParametersArray::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster18UpgradeKeyResponseE */
/* Demangled: vtable for keymaster::UpgradeKeyResponse */
extern void* _ZTVN9keymaster18UpgradeKeyResponseE;

/* Symbol: _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm */
/* Demangled: keymaster::AuthorizationSet::Reinitialize(keymaster_key_param_t const*, unsigned long) */
int _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm(void);

/* Symbol: _ZN9keymaster6Logger7WarningEPKcz */
/* Demangled: keymaster::Logger::Warning(char const*, ...) */
int _ZN9keymaster6Logger7WarningEPKcz(void);

/* Symbol: _ZN9keymaster6Logger9instance_E */
/* Demangled: keymaster::Logger::instance_ */
extern void* _ZN9keymaster6Logger9instance_E;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation9HandleAadERKNS_16AuthorizationSetERKNS_6BufferEP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpOperation::HandleAad(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster_error_t*) */
int _ZN9keymaster23BlockCipherEvpOperation9HandleAadERKNS_16AuthorizationSetERKNS_6BufferEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster12ec_get_groupE20keymaster_ec_curve_t */
/* Demangled: keymaster::ec_get_group(keymaster_ec_curve_t) */
int _ZN9keymaster12ec_get_groupE20keymaster_ec_curve_t(void);

/* Symbol: _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::BeginOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ImportKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster23is_public_key_algorithmERKNS_9AuthProxyE */
/* Demangled: keymaster::is_public_key_algorithm(keymaster::AuthProxy const&) */
int _ZN9keymaster23is_public_key_algorithmERKNS_9AuthProxyE(void);

/* Symbol: _ZN9keymaster21RsaDigestingOperation17GetOpensslPaddingEP17keymaster_error_t */
/* Demangled: keymaster::RsaDigestingOperation::GetOpensslPadding(keymaster_error_t*) */
int _ZN9keymaster21RsaDigestingOperation17GetOpensslPaddingEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster31KM_WRAPPED_KEY_DESCRIPTION_freeEPNS_26km_wrapped_key_descriptionE */
/* Demangled: keymaster::KM_WRAPPED_KEY_DESCRIPTION_free(keymaster::km_wrapped_key_description*) */
int _ZN9keymaster31KM_WRAPPED_KEY_DESCRIPTION_freeEPNS_26km_wrapped_key_descriptionE(void);

/* Symbol: _ZNK9keymaster6Buffer14SerializedSizeEv */
/* Demangled: keymaster::Buffer::SerializedSize() const */
int _ZNK9keymaster6Buffer14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueEnum(keymaster_tag_t, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj(void);

/* Symbol: _ZTVN9keymaster24ImportWrappedKeyResponseE */
/* Demangled: vtable for keymaster::ImportWrappedKeyResponse */
extern void* _ZTVN9keymaster24ImportWrappedKeyResponseE;

/* Symbol: _ZN9keymaster14GenerateRandomEPhm */
/* Demangled: keymaster::GenerateRandom(unsigned char*, unsigned long) */
int _ZN9keymaster14GenerateRandomEPhm(void);

/* Symbol: _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE */
/* Demangled: keymaster::TAG_USAGE_EXPIRE_DATETIME */
extern void* _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE;

/* Symbol: _ZNK9keymaster14HmacKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE */
/* Demangled: keymaster::HmacKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
int _ZNK9keymaster14HmacKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void);

/* Symbol: _ZTVN9keymaster6RsaKeyE */
/* Demangled: vtable for keymaster::RsaKey */
extern void* _ZTVN9keymaster6RsaKeyE;

/* Symbol: _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t */
/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_t) */
int _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t(void);

/* Symbol: _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv */
/* Demangled: keymaster::AuthorizationSet::CopyIndirectData() */
int _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv(void);

/* Symbol: _ZN9keymaster21KM_ROOT_OF_TRUST_freeEPNS_16km_root_of_trustE */
/* Demangled: keymaster::KM_ROOT_OF_TRUST_free(keymaster::km_root_of_trust*) */
int _ZN9keymaster21KM_ROOT_OF_TRUST_freeEPNS_16km_root_of_trustE(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation23ProcessBufferedAadBlockEP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpOperation::ProcessBufferedAadBlock(keymaster_error_t*) */
int _ZN9keymaster23BlockCipherEvpOperation23ProcessBufferedAadBlockEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv */
/* Demangled: keymaster::HmacSharingParameters::SerializedSize() const */
int _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster17VerificationToken14SerializedSizeEv */
/* Demangled: keymaster::VerificationToken::SerializedSize() const */
int _ZNK9keymaster17VerificationToken14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::UpgradeKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation20FillBufferedAadBlockEP16keymaster_blob_t */
/* Demangled: keymaster::BlockCipherEvpOperation::FillBufferedAadBlock(keymaster_blob_t*) */
int _ZN9keymaster23BlockCipherEvpOperation20FillBufferedAadBlockEP16keymaster_blob_t(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation22BufferCandidateTagDataEPKhm */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::BufferCandidateTagData(unsigned char const*, unsigned long) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation22BufferCandidateTagDataEPKhm(void);

/* Symbol: _ZN9keymaster12EcKeyFactory11ChooseGroupE20keymaster_ec_curve_t */
/* Demangled: keymaster::EcKeyFactory::ChooseGroup(keymaster_ec_curve_t) */
int _ZN9keymaster12EcKeyFactory11ChooseGroupE20keymaster_ec_curve_t(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster14BeginOperationERKNS_21BeginOperationRequestEPNS_22BeginOperationResponseE */
/* Demangled: keymaster::AndroidKeymaster::BeginOperation(keymaster::BeginOperationRequest const&, keymaster::BeginOperationResponse*) */
int _ZN9keymaster16AndroidKeymaster14BeginOperationERKNS_21BeginOperationRequestEPNS_22BeginOperationResponseE(void);

/* Symbol: _ZN9keymaster6Buffer12ReinitializeEPKvm */
/* Demangled: keymaster::Buffer::Reinitialize(void const*, unsigned long) */
int _ZN9keymaster6Buffer12ReinitializeEPKvm(void);

/* Symbol: _ZNK9keymaster20AsymmetricKeyFactory22SupportedImportFormatsEPm */
/* Demangled: keymaster::AsymmetricKeyFactory::SupportedImportFormats(unsigned long*) const */
int _ZNK9keymaster20AsymmetricKeyFactory22SupportedImportFormatsEPm(void);

/* Symbol: _ZN9keymaster18KM_WRAPPED_KEY_newEv */
/* Demangled: keymaster::KM_WRAPPED_KEY_new() */
int _ZN9keymaster18KM_WRAPPED_KEY_newEv(void);

/* Symbol: _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::DeleteKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HardwareAuthToken::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster21RsaDigestingOperationC2EONS_16AuthorizationSetES2_19keymaster_purpose_t18keymaster_digest_t19keymaster_padding_tP11evp_pkey_st */
/* Demangled: keymaster::RsaDigestingOperation::RsaDigestingOperation(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster_purpose_t, keymaster_digest_t, keymaster_padding_t, evp_pkey_st*) */
int _ZN9keymaster21RsaDigestingOperationC2EONS_16AuthorizationSetES2_19keymaster_purpose_t18keymaster_digest_t19keymaster_padding_tP11evp_pkey_st(void);

/* Symbol: _ZNK9keymaster19TripleDesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::TripleDesKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster19TripleDesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZN9keymaster17RsaCryptOperation23SetOaepDigestIfRequiredEP15evp_pkey_ctx_st */
/* Demangled: keymaster::RsaCryptOperation::SetOaepDigestIfRequired(evp_pkey_ctx_st*) */
int _ZN9keymaster17RsaCryptOperation23SetOaepDigestIfRequiredEP15evp_pkey_ctx_st(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster13DeleteAllKeysERKNS_20DeleteAllKeysRequestEPNS_21DeleteAllKeysResponseE */
/* Demangled: keymaster::AndroidKeymaster::DeleteAllKeys(keymaster::DeleteAllKeysRequest const&, keymaster::DeleteAllKeysResponse*) */
int _ZN9keymaster16AndroidKeymaster13DeleteAllKeysERKNS_20DeleteAllKeysRequestEPNS_21DeleteAllKeysResponseE(void);

/* Symbol: _ZTVN9keymaster17AddEntropyRequestE */
/* Demangled: vtable for keymaster::AddEntropyRequest */
extern void* _ZTVN9keymaster17AddEntropyRequestE;

/* Symbol: _ZN9keymaster13OcbEncryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferEPS5_PS8_ */
/* Demangled: keymaster::OcbEncryptKey(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::Buffer*) */
int _ZN9keymaster13OcbEncryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferEPS5_PS8_(void);

/* Symbol: _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster25ParseOcbAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_ */
/* Demangled: keymaster::ParseOcbAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster25ParseOcbAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_(void);

/* Symbol: _ZN9keymaster22KM_KEY_DESCRIPTION_newEv */
/* Demangled: keymaster::KM_KEY_DESCRIPTION_new() */
int _ZN9keymaster22KM_KEY_DESCRIPTION_newEv(void);

/* Symbol: _ZN9keymaster19GenerateKeyResponseD0Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD0Ev(void);

/* Symbol: _ZTVN9keymaster19GenerateKeyResponseE */
/* Demangled: vtable for keymaster::GenerateKeyResponse */
extern void* _ZTVN9keymaster19GenerateKeyResponseE;

/* Symbol: _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MANUFACTURER */
extern void* _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE;

/* Symbol: _ZN9keymaster16Rfc5869Sha256Kdf11GenerateKeyEPKhmPhm */
/* Demangled: keymaster::Rfc5869Sha256Kdf::GenerateKey(unsigned char const*, unsigned long, unsigned char*, unsigned long) */
int _ZN9keymaster16Rfc5869Sha256Kdf11GenerateKeyEPKhmPhm(void);

/* Symbol: _ZTVN9keymaster18RsaVerifyOperationE */
/* Demangled: vtable for keymaster::RsaVerifyOperation */
extern void* _ZTVN9keymaster18RsaVerifyOperationE;

/* Symbol: _ZN9keymaster16AuthorizationSetD2Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD2Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11DeduplicateEv */
/* Demangled: keymaster::AuthorizationSet::Deduplicate() */
int _ZN9keymaster16AuthorizationSet11DeduplicateEv(void);

/* Symbol: _ZTVN9keymaster14EcdsaOperationE */
/* Demangled: vtable for keymaster::EcdsaOperation */
extern void* _ZTVN9keymaster14EcdsaOperationE;

/* Symbol: _ZNK9keymaster13RsaKeyFactory19GetOperationFactoryE19keymaster_purpose_t */
/* Demangled: keymaster::RsaKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
int _ZNK9keymaster13RsaKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void);

/* Symbol: _ZNK9keymaster27RsaCryptingOperationFactory21SupportedPaddingModesEPm */
/* Demangled: keymaster::RsaCryptingOperationFactory::SupportedPaddingModes(unsigned long*) const */
int _ZNK9keymaster27RsaCryptingOperationFactory21SupportedPaddingModesEPm(void);

/* Symbol: _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ExportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_tb */
/* Demangled: keymaster::OperationFactory::GetAndValidateDigest(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_digest_t*, keymaster_error_t*, bool) const */
int _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_tb(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster19SupportedBlockModesERKNS_26SupportedBlockModesRequestEPNS_27SupportedBlockModesResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedBlockModes(keymaster::SupportedBlockModesRequest const&, keymaster::SupportedBlockModesResponse*) */
int _ZN9keymaster16AndroidKeymaster19SupportedBlockModesERKNS_26SupportedBlockModesRequestEPNS_27SupportedBlockModesResponseE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueIntRep(keymaster_tag_t, unsigned long, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj(void);

/* Symbol: _ZNK9keymaster12EcKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE */
/* Demangled: keymaster::EcKeyFactory::CreateEmptyKey(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::AsymmetricKey, keymaster::DefaultDelete<keymaster::AsymmetricKey> >*) const */
int _ZNK9keymaster12EcKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE(void);

/* Symbol: _ZN9keymaster3Kdf4InitE18keymaster_digest_tPKhmS3_m */
/* Demangled: keymaster::Kdf::Init(keymaster_digest_t, unsigned char const*, unsigned long, unsigned char const*, unsigned long) */
int _ZN9keymaster3Kdf4InitE18keymaster_digest_tPKhmS3_m(void);

/* Symbol: _ZN9keymaster13HmacOperationD2Ev */
/* Demangled: keymaster::HmacOperation::~HmacOperation() */
int _ZN9keymaster13HmacOperationD2Ev(void);

/* Symbol: _ZNK9keymaster13RsaKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_PmPj */
/* Demangled: keymaster::RsaKeyFactory::UpdateImportKeyDescription(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, unsigned long*, unsigned int*) const */
int _ZNK9keymaster13RsaKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_PmPj(void);

/* Symbol: _ZN9keymaster13HmacOperationC1EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm */
/* Demangled: keymaster::HmacOperation::HmacOperation(keymaster::Key&&, keymaster_purpose_t, keymaster_digest_t, unsigned long, unsigned long) */
int _ZN9keymaster13HmacOperationC1EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm(void);

/* Symbol: _ZN9keymaster11TAG_INVALIDE */
/* Demangled: keymaster::TAG_INVALID */
extern void* _ZN9keymaster11TAG_INVALIDE;

/* Symbol: _ZN9keymaster21TAG_MAX_USES_PER_BOOTE */
/* Demangled: keymaster::TAG_MAX_USES_PER_BOOT */
extern void* _ZN9keymaster21TAG_MAX_USES_PER_BOOTE;

/* Symbol: _ZN9keymaster18RsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::RsaVerifyOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster18RsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZTVN9keymaster16ExportKeyRequestE */
/* Demangled: vtable for keymaster::ExportKeyRequest */
extern void* _ZTVN9keymaster16ExportKeyRequestE;

/* Symbol: _ZN9keymaster6Logger5ErrorEPKcz */
/* Demangled: keymaster::Logger::Error(char const*, ...) */
int _ZN9keymaster6Logger5ErrorEPKcz(void);

/* Symbol: _ZN9keymaster6Buffer4readEPhm */
/* Demangled: keymaster::Buffer::read(unsigned char*, unsigned long) */
int _ZN9keymaster6Buffer4readEPhm(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpEncryptOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::BlockCipherEvpEncryptOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster30BlockCipherEvpEncryptOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::FinishOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD2Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD2Ev(void);

/* Symbol: _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv */
/* Demangled: keymaster::HardwareAuthToken::SerializedSize() const */
int _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster16Rfc5869Sha256KdfE */
/* Demangled: vtable for keymaster::Rfc5869Sha256Kdf */
extern void* _ZTVN9keymaster16Rfc5869Sha256KdfE;

/* Symbol: _ZTVN9keymaster25TripleDesOperationFactoryE */
/* Demangled: vtable for keymaster::TripleDesOperationFactory */
extern void* _ZTVN9keymaster25TripleDesOperationFactoryE;

/* Symbol: _ZN9keymaster18ec_group_size_bitsEP9ec_key_st */
/* Demangled: keymaster::ec_group_size_bits(ec_key_st*) */
int _ZN9keymaster18ec_group_size_bitsEP9ec_key_st(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster9ImportKeyERKNS_16ImportKeyRequestEPNS_17ImportKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::ImportKey(keymaster::ImportKeyRequest const&, keymaster::ImportKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster9ImportKeyERKNS_16ImportKeyRequestEPNS_17ImportKeyResponseE(void);

/* Symbol: _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyERKNS_6BufferEPS1_ */
/* Demangled: keymaster::NistCurveKeyExchange::CalculateSharedKey(keymaster::Buffer const&, keymaster::Buffer*) const */
int _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyERKNS_6BufferEPS1_(void);

/* Symbol: _ZN9keymaster12RsaOperation25SetRsaPaddingInEvpContextEP15evp_pkey_ctx_stb */
/* Demangled: keymaster::RsaOperation::SetRsaPaddingInEvpContext(evp_pkey_ctx_st*, bool) */
int _ZN9keymaster12RsaOperation25SetRsaPaddingInEvpContextEP15evp_pkey_ctx_stb(void);

/* Symbol: _ZN9keymaster18TAG_MIN_MAC_LENGTHE */
/* Demangled: keymaster::TAG_MIN_MAC_LENGTH */
extern void* _ZN9keymaster18TAG_MIN_MAC_LENGTHE;

/* Symbol: _ZNK9keymaster23BlockCipherEvpOperation7need_ivEv */
/* Demangled: keymaster::BlockCipherEvpOperation::need_iv() const */
int _ZNK9keymaster23BlockCipherEvpOperation7need_ivEv(void);

/* Symbol: _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster20KeymasterEnforcement16AuthTokenMatchesERKNS_9AuthProxyERKNS_16AuthorizationSetEmiimb */
/* Demangled: keymaster::KeymasterEnforcement::AuthTokenMatches(keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long, int, int, unsigned long, bool) const */
int _ZNK9keymaster20KeymasterEnforcement16AuthTokenMatchesERKNS_9AuthProxyERKNS_16AuthorizationSetEmiimb(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation14InternalUpdateEPKhmPNS_6BufferEP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpOperation::InternalUpdate(unsigned char const*, unsigned long, keymaster::Buffer*, keymaster_error_t*) */
int _ZN9keymaster23BlockCipherEvpOperation14InternalUpdateEPKhmPNS_6BufferEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation5AbortEv */
/* Demangled: keymaster::BlockCipherEvpOperation::Abort() */
int _ZN9keymaster23BlockCipherEvpOperation5AbortEv(void);

/* Symbol: _ZN9keymaster12EcKeyFactory15GetCurveAndSizeERKNS_16AuthorizationSetEP20keymaster_ec_curve_tPj */
/* Demangled: keymaster::EcKeyFactory::GetCurveAndSize(keymaster::AuthorizationSet const&, keymaster_ec_curve_t*, unsigned int*) */
int _ZN9keymaster12EcKeyFactory15GetCurveAndSizeERKNS_16AuthorizationSetEP20keymaster_ec_curve_tPj(void);

/* Symbol: _ZNK9keymaster10HmacSha2566VerifyEPKhmS2_m */
/* Demangled: keymaster::HmacSha256::Verify(unsigned char const*, unsigned long, unsigned char const*, unsigned long) const */
int _ZNK9keymaster10HmacSha2566VerifyEPKhmS2_m(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster21GetKeyCharacteristicsERKNS_28GetKeyCharacteristicsRequestEPNS_29GetKeyCharacteristicsResponseE */
/* Demangled: keymaster::AndroidKeymaster::GetKeyCharacteristics(keymaster::GetKeyCharacteristicsRequest const&, keymaster::GetKeyCharacteristicsResponse*) */
int _ZN9keymaster16AndroidKeymaster21GetKeyCharacteristicsERKNS_28GetKeyCharacteristicsRequestEPNS_29GetKeyCharacteristicsResponseE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t */
/* Demangled: keymaster::AuthorizationSet::GetTagValueBlob(keymaster_tag_t, keymaster_blob_t*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t(void);

/* Symbol: _ZN9keymaster20TAG_NO_AUTH_REQUIREDE */
/* Demangled: keymaster::TAG_NO_AUTH_REQUIRED */
extern void* _ZN9keymaster20TAG_NO_AUTH_REQUIREDE;

/* Symbol: _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE */
/* Demangled: keymaster::TAG_DEVICE_UNIQUE_ATTESTATION */
extern void* _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE;

/* Symbol: _ZNK9keymaster23AesEvpCipherDescription19SupportedBlockModesEPm */
/* Demangled: keymaster::AesEvpCipherDescription::SupportedBlockModes(unsigned long*) const */
int _ZNK9keymaster23AesEvpCipherDescription19SupportedBlockModesEPm(void);

/* Symbol: _ZN9keymaster14OperationTable6DeleteEm */
/* Demangled: keymaster::OperationTable::Delete(unsigned long) */
int _ZN9keymaster14OperationTable6DeleteEm(void);

/* Symbol: _ZTVN9keymaster17UpgradeKeyRequestE */
/* Demangled: vtable for keymaster::UpgradeKeyRequest */
extern void* _ZTVN9keymaster17UpgradeKeyRequestE;

/* Symbol: _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE */
/* Demangled: keymaster::TAG_INCLUDE_UNIQUE_ID */
extern void* _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE;

/* Symbol: _ZNK9keymaster16OperationFactory9supportedE22keymaster_block_mode_t */
/* Demangled: keymaster::OperationFactory::supported(keymaster_block_mode_t) const */
int _ZNK9keymaster16OperationFactory9supportedE22keymaster_block_mode_t(void);

/* Symbol: _ZN9keymaster29generate_attestation_from_EVPEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_RKNS_24AttestationRecordContextEjRK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE */
/* Demangled: keymaster::generate_attestation_from_EVP(evp_pkey_st const*, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AttestationRecordContext const&, unsigned int, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
int _ZN9keymaster29generate_attestation_from_EVPEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_RKNS_24AttestationRecordContextEjRK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster9AttestKeyERKNS_16AttestKeyRequestEPNS_17AttestKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::AttestKey(keymaster::AttestKeyRequest const&, keymaster::AttestKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster9AttestKeyERKNS_16AttestKeyRequestEPNS_17AttestKeyResponseE(void);

/* Symbol: _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_ */
/* Demangled: keymaster::KeymasterResponse::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_ */
/* Demangled: keymaster::VerificationToken::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AuthorizationSet4SortEv */
/* Demangled: keymaster::AuthorizationSet::Sort() */
int _ZN9keymaster16AuthorizationSet4SortEv(void);

/* Symbol: _ZN9keymaster22i2d_KM_KEY_DESCRIPTIONEPNS_18km_key_descriptionEPPh */
/* Demangled: keymaster::i2d_KM_KEY_DESCRIPTION(keymaster::km_key_description*, unsigned char**) */
int _ZN9keymaster22i2d_KM_KEY_DESCRIPTIONEPNS_18km_key_descriptionEPPh(void);

/* Symbol: _ZN9keymaster19RsaEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::RsaEncryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster19RsaEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::UpgradeKeyRequest::SerializedSize() const */
int _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh */
/* Demangled: keymaster::HmacSharingParametersArray::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster17AttestKeyResponseE */
/* Demangled: vtable for keymaster::AttestKeyResponse */
extern void* _ZTVN9keymaster17AttestKeyResponseE;

/* Symbol: _ZN9keymaster14TAG_BLOCK_MODEE */
/* Demangled: keymaster::TAG_BLOCK_MODE */
extern void* _ZN9keymaster14TAG_BLOCK_MODEE;

/* Symbol: _ZNK9keymaster16OperationFactory21GetAndValidatePaddingERKNS_16AuthorizationSetERKNS_3KeyEP19keymaster_padding_tP17keymaster_error_t */
/* Demangled: keymaster::OperationFactory::GetAndValidatePadding(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_padding_t*, keymaster_error_t*) const */
int _ZNK9keymaster16OperationFactory21GetAndValidatePaddingERKNS_16AuthorizationSetERKNS_3KeyEP19keymaster_padding_tP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster20EcdsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::EcdsaVerifyOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster20EcdsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZN9keymaster17parse_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPNS0_I16keymaster_blob_tEEPS2_S8_S7_PNS_16AuthorizationSetEP22keymaster_key_format_tS7_ */
/* Demangled: keymaster::parse_wrapped_key(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t>*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::TKeymasterBlob<keymaster_blob_t>*, keymaster::AuthorizationSet*, keymaster_key_format_t*, keymaster::TKeymasterBlob<keymaster_blob_t>*) */
int _ZN9keymaster17parse_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPNS0_I16keymaster_blob_tEEPS2_S8_S7_PNS_16AuthorizationSetEP22keymaster_key_format_tS7_(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster17ComputeSharedHmacERKNS_24ComputeSharedHmacRequestE */
/* Demangled: keymaster::AndroidKeymaster::ComputeSharedHmac(keymaster::ComputeSharedHmacRequest const&) */
int _ZN9keymaster16AndroidKeymaster17ComputeSharedHmacERKNS_24ComputeSharedHmacRequestE(void);

/* Symbol: _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ExportKeyRequest::SerializedSize() const */
int _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster12DeviceLockedERKNS_19DeviceLockedRequestE */
/* Demangled: keymaster::AndroidKeymaster::DeviceLocked(keymaster::DeviceLockedRequest const&) */
int _ZN9keymaster16AndroidKeymaster12DeviceLockedERKNS_19DeviceLockedRequestE(void);

/* Symbol: _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE */
/* Demangled: keymaster::TAG_UNLOCKED_DEVICE_REQUIRED */
extern void* _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE;

/* Symbol: _ZN9keymaster12RsaOperation9StoreDataERKNS_6BufferEPm */
/* Demangled: keymaster::RsaOperation::StoreData(keymaster::Buffer const&, unsigned long*) */
int _ZN9keymaster12RsaOperation9StoreDataERKNS_6BufferEPm(void);

/* Symbol: _ZN9keymaster16RsaSignOperation12SignDigestedEPNS_6BufferE */
/* Demangled: keymaster::RsaSignOperation::SignDigested(keymaster::Buffer*) */
int _ZN9keymaster16RsaSignOperation12SignDigestedEPNS_6BufferE(void);

/* Symbol: _ZTVN9keymaster19TripleDesKeyFactoryE */
/* Demangled: vtable for keymaster::TripleDesKeyFactory */
extern void* _ZTVN9keymaster19TripleDesKeyFactoryE;

/* Symbol: _ZN9keymaster16AndroidKeymaster22SupportedExportFormatsERKNS_29SupportedExportFormatsRequestEPNS_30SupportedExportFormatsResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedExportFormats(keymaster::SupportedExportFormatsRequest const&, keymaster::SupportedExportFormatsResponse*) */
int _ZN9keymaster16AndroidKeymaster22SupportedExportFormatsERKNS_29SupportedExportFormatsRequestEPNS_30SupportedExportFormatsResponseE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster9ConfigureERKNS_16ConfigureRequestEPNS_17ConfigureResponseE */
/* Demangled: keymaster::AndroidKeymaster::Configure(keymaster::ConfigureRequest const&, keymaster::ConfigureResponse*) */
int _ZN9keymaster16AndroidKeymaster9ConfigureERKNS_16ConfigureRequestEPNS_17ConfigureResponseE(void);

/* Symbol: _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ExportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster26HmacSharingParametersArrayE */
/* Demangled: vtable for keymaster::HmacSharingParametersArray */
extern void* _ZTVN9keymaster26HmacSharingParametersArrayE;

/* Symbol: _ZTVN9keymaster6BufferE */
/* Demangled: vtable for keymaster::Buffer */
extern void* _ZTVN9keymaster6BufferE;

/* Symbol: _ZN9keymaster8memcmp_sEPKvS1_m */
/* Demangled: keymaster::memcmp_s(void const*, void const*, unsigned long) */
int _ZN9keymaster8memcmp_sEPKvS1_m(void);

/* Symbol: _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MEID */
extern void* _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperationC2E19keymaster_purpose_t22keymaster_block_mode_t19keymaster_padding_tbmONS_3KeyERKNS_20EvpCipherDescriptionE */
/* Demangled: keymaster::BlockCipherEvpOperation::BlockCipherEvpOperation(keymaster_purpose_t, keymaster_block_mode_t, keymaster_padding_t, bool, unsigned long, keymaster::Key&&, keymaster::EvpCipherDescription const&) */
int _ZN9keymaster23BlockCipherEvpOperationC2E19keymaster_purpose_t22keymaster_block_mode_t19keymaster_padding_tbmONS_3KeyERKNS_20EvpCipherDescriptionE(void);

/* Symbol: _ZN9keymaster18EcdsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::EcdsaSignOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster18EcdsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZN9keymaster19parse_root_of_trustEPKhmP16keymaster_blob_tP25keymaster_verified_boot_tPb */
/* Demangled: keymaster::parse_root_of_trust(unsigned char const*, unsigned long, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) */
int _ZN9keymaster19parse_root_of_trustEPKhmP16keymaster_blob_tP25keymaster_verified_boot_tPb(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZTVN9keymaster19RsaOperationFactoryE */
/* Demangled: vtable for keymaster::RsaOperationFactory */
extern void* _ZTVN9keymaster19RsaOperationFactoryE;

/* Symbol: _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::UpgradeKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster30BlockCipherEvpEncryptOperationE */
/* Demangled: vtable for keymaster::BlockCipherEvpEncryptOperation */
extern void* _ZTVN9keymaster30BlockCipherEvpEncryptOperationE;

/* Symbol: _ZN9keymaster16AndroidKeymaster11GenerateKeyERKNS_18GenerateKeyRequestEPNS_19GenerateKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::GenerateKey(keymaster::GenerateKeyRequest const&, keymaster::GenerateKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster11GenerateKeyERKNS_18GenerateKeyRequestEPNS_19GenerateKeyResponseE(void);

/* Symbol: _ZN9keymaster16AuthorizationSet16reserve_indirectEm */
/* Demangled: keymaster::AuthorizationSet::reserve_indirect(unsigned long) */
int _ZN9keymaster16AuthorizationSet16reserve_indirectEm(void);

/* Symbol: _ZN9keymaster16AuthorizationSet5ClearEv */
/* Demangled: keymaster::AuthorizationSet::Clear() */
int _ZN9keymaster16AuthorizationSet5ClearEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSet8FreeDataEv */
/* Demangled: keymaster::AuthorizationSet::FreeData() */
int _ZN9keymaster16AuthorizationSet8FreeDataEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSet13reserve_elemsEm */
/* Demangled: keymaster::AuthorizationSet::reserve_elems(unsigned long) */
int _ZN9keymaster16AuthorizationSet13reserve_elemsEm(void);

/* Symbol: _ZTVN9keymaster12EcKeyFactoryE */
/* Demangled: vtable for keymaster::EcKeyFactory */
extern void* _ZTVN9keymaster12EcKeyFactoryE;

/* Symbol: _ZN9keymaster20NistCurveKeyExchangeC2EP9ec_key_stP17keymaster_error_t */
/* Demangled: keymaster::NistCurveKeyExchange::NistCurveKeyExchange(ec_key_st*, keymaster_error_t*) */
int _ZN9keymaster20NistCurveKeyExchangeC2EP9ec_key_stP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster16RsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::RsaSignOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster16RsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD0Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD0Ev(void);

/* Symbol: _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_PRODUCT */
extern void* _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE;

/* Symbol: _ZN9keymaster16AndroidKeymaster7LoadKeyERK20keymaster_key_blob_tRKNS_16AuthorizationSetEPPKNS_10KeyFactoryEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISC_EEEE */
/* Demangled: keymaster::AndroidKeymaster::LoadKey(keymaster_key_blob_t const&, keymaster::AuthorizationSet const&, keymaster::KeyFactory const**, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) */
int _ZN9keymaster16AndroidKeymaster7LoadKeyERK20keymaster_key_blob_tRKNS_16AuthorizationSetEPPKNS_10KeyFactoryEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISC_EEEE(void);

/* Symbol: _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::UpdateOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster19GenerateKeyResponseD1Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD1Ev(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj */
/* Demangled: keymaster::AuthorizationSet::ContainsIntValue(keymaster_tag_t, unsigned int) const */
int _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj(void);

/* Symbol: _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE */
/* Demangled: keymaster::TAG_IDENTITY_CREDENTIAL_KEY */
extern void* _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE;

/* Symbol: _ZN9keymaster24parse_attestation_recordEPKhmPjP26keymaster_security_level_tS2_S4_P16keymaster_blob_tPNS_16AuthorizationSetES8_S6_ */
/* Demangled: keymaster::parse_attestation_record(unsigned char const*, unsigned long, unsigned int*, keymaster_security_level_t*, unsigned int*, keymaster_security_level_t*, keymaster_blob_t*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*, keymaster_blob_t*) */
int _ZN9keymaster24parse_attestation_recordEPKhmPjP26keymaster_security_level_tS2_S4_P16keymaster_blob_tPNS_16AuthorizationSetES8_S6_(void);

/* Symbol: _ZN9keymaster19KeyMaterialToEvpKeyE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEE21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS8_vXadL_Z13EVP_PKEY_freeEEEEEE */
/* Demangled: keymaster::KeyMaterialToEvpKey(keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster_algorithm_t, keymaster::UniquePtr<evp_pkey_st, keymaster::OpenSslObjectDeleter<evp_pkey_st, void, &EVP_PKEY_free> >*) */
int _ZN9keymaster19KeyMaterialToEvpKeyE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEE21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS8_vXadL_Z13EVP_PKEY_freeEEEEEE(void);

/* Symbol: _ZN9keymaster18RsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::RsaVerifyOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster18RsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZN9keymaster30i2d_KM_WRAPPED_KEY_DESCRIPTIONEPNS_26km_wrapped_key_descriptionEPPh */
/* Demangled: keymaster::i2d_KM_WRAPPED_KEY_DESCRIPTION(keymaster::km_wrapped_key_description*, unsigned char**) */
int _ZN9keymaster30i2d_KM_WRAPPED_KEY_DESCRIPTIONEPNS_26km_wrapped_key_descriptionEPPh(void);

/* Symbol: _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::BeginOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::FinishOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster20AsymmetricKeyFactory22SupportedExportFormatsEPm */
/* Demangled: keymaster::AsymmetricKeyFactory::SupportedExportFormats(unsigned long*) const */
int _ZNK9keymaster20AsymmetricKeyFactory22SupportedExportFormatsEPm(void);

/* Symbol: _ZN9keymaster6Buffer11DeserializeEPPKhS2_ */
/* Demangled: keymaster::Buffer::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster6Buffer11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh */
/* Demangled: keymaster::AddEntropyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ImportWrappedKeyRequest::SerializedSize() const */
int _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE */
/* Demangled: keymaster::TAG_BLOB_USAGE_REQUIREMENTS */
extern void* _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation16ProcessAadBlocksEPKhmP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpOperation::ProcessAadBlocks(unsigned char const*, unsigned long, keymaster_error_t*) */
int _ZN9keymaster23BlockCipherEvpOperation16ProcessAadBlocksEPKhmP17keymaster_error_t(void);

/* Symbol: _ZTVN9keymaster20EcdsaVerifyOperationE */
/* Demangled: vtable for keymaster::EcdsaVerifyOperation */
extern void* _ZTVN9keymaster20EcdsaVerifyOperationE;

/* Symbol: _ZN9keymaster8EciesKemC2ERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::EciesKem::EciesKem(keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster8EciesKemC2ERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZTVN9keymaster21RsaDigestingOperationE */
/* Demangled: vtable for keymaster::RsaDigestingOperation */
extern void* _ZTVN9keymaster21RsaDigestingOperationE;

/* Symbol: _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ExportKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster13AccessTimeMap17LastKeyAccessTimeEmPj */
/* Demangled: keymaster::AccessTimeMap::LastKeyAccessTime(unsigned long, unsigned int*) const */
int _ZNK9keymaster13AccessTimeMap17LastKeyAccessTimeEmPj(void);

/* Symbol: _ZN9keymaster20generate_attestationERKNS_13AsymmetricKeyERKNS_16AuthorizationSetERK22keymaster_cert_chain_tRK20keymaster_key_blob_tRKNS_24AttestationRecordContextEPNS_9UniquePtrIS6_NS_22CertificateChainDeleteEEE */
/* Demangled: keymaster::generate_attestation(keymaster::AsymmetricKey const&, keymaster::AuthorizationSet const&, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::AttestationRecordContext const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
int _ZN9keymaster20generate_attestationERKNS_13AsymmetricKeyERKNS_16AuthorizationSetERK22keymaster_cert_chain_tRK20keymaster_key_blob_tRKNS_24AttestationRecordContextEPNS_9UniquePtrIS6_NS_22CertificateChainDeleteEEE(void);

/* Symbol: _ZNK9keymaster14HmacKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::HmacKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster14HmacKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueLong(keymaster_tag_t, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm(void);

/* Symbol: _ZN9keymaster13HmacOperationC2EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm */
/* Demangled: keymaster::HmacOperation::HmacOperation(keymaster::Key&&, keymaster_purpose_t, keymaster_digest_t, unsigned long, unsigned long) */
int _ZN9keymaster13HmacOperationC2EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm(void);

/* Symbol: _ZN9keymaster11Iso18033Kdf11GenerateKeyEPKhmPhm */
/* Demangled: keymaster::Iso18033Kdf::GenerateKey(unsigned char const*, unsigned long, unsigned char*, unsigned long) */
int _ZN9keymaster11Iso18033Kdf11GenerateKeyEPKhmPhm(void);

/* Symbol: _ZN9keymaster8EciesKem7EncryptERKNS_6BufferEPS1_S4_ */
/* Demangled: keymaster::EciesKem::Encrypt(keymaster::Buffer const&, keymaster::Buffer*, keymaster::Buffer*) */
int _ZN9keymaster8EciesKem7EncryptERKNS_6BufferEPS1_S4_(void);

/* Symbol: _ZN9keymaster20NistCurveKeyExchangeC1EP9ec_key_stP17keymaster_error_t */
/* Demangled: keymaster::NistCurveKeyExchange::NistCurveKeyExchange(ec_key_st*, keymaster_error_t*) */
int _ZN9keymaster20NistCurveKeyExchangeC1EP9ec_key_stP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE */
/* Demangled: keymaster::AndroidKeymaster::VerifyAuthorization(keymaster::VerifyAuthorizationRequest const&) */
int _ZN9keymaster16AndroidKeymaster19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster13AddRngEntropyERKNS_17AddEntropyRequestEPNS_18AddEntropyResponseE */
/* Demangled: keymaster::AndroidKeymaster::AddRngEntropy(keymaster::AddEntropyRequest const&, keymaster::AddEntropyResponse*) */
int _ZN9keymaster16AndroidKeymaster13AddRngEntropyERKNS_17AddEntropyRequestEPNS_18AddEntropyResponseE(void);

/* Symbol: _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster17KeymasterResponseE */
/* Demangled: vtable for keymaster::KeymasterResponse */
extern void* _ZTVN9keymaster17KeymasterResponseE;

/* Symbol: _ZNK9keymaster13AesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE */
/* Demangled: keymaster::AesKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
int _ZNK9keymaster13AesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void);

/* Symbol: _ZN9keymaster16RsaSignOperation14SignUndigestedEPNS_6BufferE */
/* Demangled: keymaster::RsaSignOperation::SignUndigested(keymaster::Buffer*) */
int _ZN9keymaster16RsaSignOperation14SignUndigestedEPNS_6BufferE(void);

/* Symbol: _ZN9keymaster16AndroidKeymasterD0Ev */
/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
int _ZN9keymaster16AndroidKeymasterD0Ev(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcementD0Ev */
/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
int _ZN9keymaster20KeymasterEnforcementD0Ev(void);

/* Symbol: _ZNK9keymaster19SymmetricKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_ */
/* Demangled: keymaster::SymmetricKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster19SymmetricKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void);

/* Symbol: _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster16AttestKeyRequestE */
/* Demangled: vtable for keymaster::AttestKeyRequest */
extern void* _ZTVN9keymaster16AttestKeyRequestE;

/* Symbol: _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyEPKhmPNS_6BufferE */
/* Demangled: keymaster::NistCurveKeyExchange::CalculateSharedKey(unsigned char const*, unsigned long, keymaster::Buffer*) const */
int _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyEPKhmPNS_6BufferE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster15FinishOperationERKNS_22FinishOperationRequestEPNS_23FinishOperationResponseE */
/* Demangled: keymaster::AndroidKeymaster::FinishOperation(keymaster::FinishOperationRequest const&, keymaster::FinishOperationResponse*) */
int _ZN9keymaster16AndroidKeymaster15FinishOperationERKNS_22FinishOperationRequestEPNS_23FinishOperationResponseE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet14SerializedSizeEv */
/* Demangled: keymaster::AuthorizationSet::SerializedSize() const */
int _ZNK9keymaster16AuthorizationSet14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ImportKeyRequest::SerializedSize() const */
int _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster6Buffer12ReinitializeEm */
/* Demangled: keymaster::Buffer::Reinitialize(unsigned long) */
int _ZN9keymaster6Buffer12ReinitializeEm(void);

/* Symbol: _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEjPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm */
/* Demangled: keymaster::build_attestation_record(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet, keymaster::AuthorizationSet, keymaster::AttestationRecordContext const&, unsigned int, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) */
int _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEjPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm(void);

/* Symbol: _ZNK9keymaster6Buffer14available_readEv */
/* Demangled: keymaster::Buffer::available_read() const */
int _ZNK9keymaster6Buffer14available_readEv(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev(void);

/* Symbol: _ZN9keymaster14TAG_MAC_LENGTHE */
/* Demangled: keymaster::TAG_MAC_LENGTH */
extern void* _ZN9keymaster14TAG_MAC_LENGTHE;

/* Symbol: _ZN9keymaster6Logger5DebugEPKcz */
/* Demangled: keymaster::Logger::Debug(char const*, ...) */
int _ZN9keymaster6Logger5DebugEPKcz(void);

/* Symbol: _ZN9keymaster27BlockCipherOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster27BlockCipherOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::BlockCipherEvpOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster23BlockCipherEvpOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::BlockCipherEvpEncryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster30BlockCipherEvpEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZTVN9keymaster27BlockCipherOperationFactoryE */
/* Demangled: vtable for keymaster::BlockCipherOperationFactory */
extern void* _ZTVN9keymaster27BlockCipherOperationFactoryE;

/* Symbol: _ZN9keymaster16AndroidKeymaster16ImportWrappedKeyERKNS_23ImportWrappedKeyRequestEPNS_24ImportWrappedKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::ImportWrappedKey(keymaster::ImportWrappedKeyRequest const&, keymaster::ImportWrappedKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster16ImportWrappedKeyERKNS_23ImportWrappedKeyRequestEPNS_24ImportWrappedKeyResponseE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t */
/* Demangled: keymaster::AuthorizationSet::GetTagValueBool(keymaster_tag_t) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

/* Symbol: _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::DeleteKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster24SetKeyBlobAuthorizationsERKNS_16AuthorizationSetE22keymaster_key_origin_tjjPS0_S4_ */
/* Demangled: keymaster::SetKeyBlobAuthorizations(keymaster::AuthorizationSet const&, keymaster_key_origin_t, unsigned int, unsigned int, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster24SetKeyBlobAuthorizationsERKNS_16AuthorizationSetE22keymaster_key_origin_tjjPS0_S4_(void);

/* Symbol: _ZNK9keymaster23AesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t */
/* Demangled: keymaster::AesEvpCipherDescription::GetCipherInstance(unsigned long, keymaster_block_mode_t, keymaster_error_t*) const */
int _ZNK9keymaster23AesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster20EcdsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::EcdsaVerifyOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster20EcdsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t19keymaster_padding_t */
/* Demangled: keymaster::RsaKey::SupportedMode(keymaster_purpose_t, keymaster_padding_t) */
int _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t19keymaster_padding_t(void);

/* Symbol: _ZN9keymaster27RsaCryptingOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::RsaCryptingOperationFactory::CreateRsaOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster27RsaCryptingOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZTVN9keymaster29TripleDesEvpCipherDescriptionE */
/* Demangled: vtable for keymaster::TripleDesEvpCipherDescription */
extern void* _ZTVN9keymaster29TripleDesEvpCipherDescriptionE;

/* Symbol: _ZN9keymaster20KeymasterEnforcement25MaxUsesPerBootNotExceededEmj */
/* Demangled: keymaster::KeymasterEnforcement::MaxUsesPerBootNotExceeded(unsigned long, unsigned int) */
int _ZN9keymaster20KeymasterEnforcement25MaxUsesPerBootNotExceededEmj(void);

/* Symbol: _ZNK9keymaster19TripleDesKeyFactory19GetOperationFactoryE19keymaster_purpose_t */
/* Demangled: keymaster::TripleDesKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
int _ZNK9keymaster19TripleDesKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void);

/* Symbol: _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AddEntropyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ExportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster18TAG_USER_SECURE_IDE */
/* Demangled: keymaster::TAG_USER_SECURE_ID */
extern void* _ZN9keymaster18TAG_USER_SECURE_IDE;

/* Symbol: _ZTVN9keymaster13AsymmetricKeyE */
/* Demangled: vtable for keymaster::AsymmetricKey */
extern void* _ZTVN9keymaster13AsymmetricKeyE;

/* Symbol: _ZN9keymaster16AuthorizationSetixEi */
/* Demangled: keymaster::AuthorizationSet::operator[](int) */
int _ZN9keymaster16AuthorizationSetixEi(void);

/* Symbol: _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster19RsaDecryptOperationE */
/* Demangled: vtable for keymaster::RsaDecryptOperation */
extern void* _ZTVN9keymaster19RsaDecryptOperationE;

/* Symbol: _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::FinishOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster19EvpKeyToKeyMaterialEPK11evp_pkey_stPNS_14TKeymasterBlobI20keymaster_key_blob_tEE */
/* Demangled: keymaster::EvpKeyToKeyMaterial(evp_pkey_st const*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster19EvpKeyToKeyMaterialEPK11evp_pkey_stPNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappingMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm(void);

/* Symbol: _ZN9keymaster6Buffer7reserveEm */
/* Demangled: keymaster::Buffer::reserve(unsigned long) */
int _ZN9keymaster6Buffer7reserveEm(void);

/* Symbol: _ZNK9keymaster20KeymasterEnforcement23GetAndValidateAuthTokenERKNS_16AuthorizationSetEPPK15hw_auth_token_tPj */
/* Demangled: keymaster::KeymasterEnforcement::GetAndValidateAuthToken(keymaster::AuthorizationSet const&, hw_auth_token_t const**, unsigned int*) const */
int _ZNK9keymaster20KeymasterEnforcement23GetAndValidateAuthTokenERKNS_16AuthorizationSetEPPK15hw_auth_token_tPj(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation5GetIvERKNS_16AuthorizationSetE */
/* Demangled: keymaster::BlockCipherEvpOperation::GetIv(keymaster::AuthorizationSet const&) */
int _ZN9keymaster23BlockCipherEvpOperation5GetIvERKNS_16AuthorizationSetE(void);

/* Symbol: _ZTVN9keymaster23BlockCipherEvpOperationE */
/* Demangled: vtable for keymaster::BlockCipherEvpOperation */
extern void* _ZTVN9keymaster23BlockCipherEvpOperationE;

/* Symbol: _ZN9keymaster12EcKeyFactory11ChooseGroupEm */
/* Demangled: keymaster::EcKeyFactory::ChooseGroup(unsigned long) */
int _ZN9keymaster12EcKeyFactory11ChooseGroupEm(void);

/* Symbol: _ZTVN9keymaster16RsaSignOperationE */
/* Demangled: vtable for keymaster::RsaSignOperation */
extern void* _ZTVN9keymaster16RsaSignOperationE;

/* Symbol: _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ExportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj */
/* Demangled: keymaster::EcCurveToKeySize(keymaster_ec_curve_t, unsigned int*) */
int _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj(void);

/* Symbol: _ZN9keymaster6Buffer5ClearEv */
/* Demangled: keymaster::Buffer::Clear() */
int _ZN9keymaster6Buffer5ClearEv(void);

/* Symbol: _ZTVN9keymaster23AesEvpCipherDescriptionE */
/* Demangled: vtable for keymaster::AesEvpCipherDescription */
extern void* _ZTVN9keymaster23AesEvpCipherDescriptionE;

/* Symbol: _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueInt(keymaster_tag_t, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj(void);

/* Symbol: _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ImportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcement14AuthorizeBeginE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetE */
/* Demangled: keymaster::KeymasterEnforcement::AuthorizeBegin(keymaster_purpose_t, unsigned long, keymaster::AuthProxy const&, keymaster::AuthorizationSet const&) */
int _ZN9keymaster20KeymasterEnforcement14AuthorizeBeginE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetE(void);

/* Symbol: _ZTVN9keymaster20AsymmetricKeyFactoryE */
/* Demangled: vtable for keymaster::AsymmetricKeyFactory */
extern void* _ZTVN9keymaster20AsymmetricKeyFactoryE;

/* Symbol: _ZN9keymaster20d2i_KM_ROOT_OF_TRUSTEPPNS_16km_root_of_trustEPPKhl */
/* Demangled: keymaster::d2i_KM_ROOT_OF_TRUST(keymaster::km_root_of_trust**, unsigned char const**, long) */
int _ZN9keymaster20d2i_KM_ROOT_OF_TRUSTEPPNS_16km_root_of_trustEPPKhl(void);

/* Symbol: _ZN9keymaster3KdfC2Ev */
/* Demangled: keymaster::Kdf::Kdf() */
int _ZN9keymaster3KdfC2Ev(void);

/* Symbol: _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::AttestKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE */
/* Demangled: keymaster::AuthorizationSet::set_invalid(keymaster::AuthorizationSet::Error) */
int _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE(void);

/* Symbol: _ZN9keymaster10TAG_ORIGINE */
/* Demangled: keymaster::TAG_ORIGIN */
extern void* _ZN9keymaster10TAG_ORIGINE;

/* Symbol: _ZN9keymaster26SerializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_RKNS_6BufferESA_PS2_ */
/* Demangled: keymaster::SerializeAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster26SerializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_RKNS_6BufferESA_PS2_(void);

/* Symbol: _ZNK9keymaster29TripleDesEvpCipherDescription19SupportedBlockModesEPm */
/* Demangled: keymaster::TripleDesEvpCipherDescription::SupportedBlockModes(unsigned long*) const */
int _ZNK9keymaster29TripleDesEvpCipherDescription19SupportedBlockModesEPm(void);

/* Symbol: _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GetVersionResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: ae_free */
/* Demangled: ae_free */
int ae_free(void);

/* Symbol: _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HmacSharingParameters::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster14TAG_DIGEST_OLDE */
/* Demangled: keymaster::TAG_DIGEST_OLD */
extern void* _ZN9keymaster14TAG_DIGEST_OLDE;

/* Symbol: gen_offset */
/* Demangled: gen_offset */
int gen_offset(void);

/* Symbol: _ZN9keymaster18EcdsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::EcdsaSignOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster18EcdsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZTVN9keymaster16AndroidKeymasterE */
/* Demangled: vtable for keymaster::AndroidKeymaster */
extern void* _ZTVN9keymaster16AndroidKeymasterE;

/* Symbol: _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::BeginOperationRequest::SerializedSize() const */
int _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster20KeymasterEnforcementE */
/* Demangled: vtable for keymaster::KeymasterEnforcement */
extern void* _ZTVN9keymaster20KeymasterEnforcementE;

/* Symbol: _ZNK9keymaster20NistCurveKeyExchange12public_valueEPNS_6BufferE */
/* Demangled: keymaster::NistCurveKeyExchange::public_value(keymaster::Buffer*) const */
int _ZNK9keymaster20NistCurveKeyExchange12public_valueEPNS_6BufferE(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD1Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD1Ev(void);

/* Symbol: _ZN9keymaster19GenerateKeyResponseD2Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD2Ev(void);

/* Symbol: _ZN9keymaster20KM_ROOT_OF_TRUST_newEv */
/* Demangled: keymaster::KM_ROOT_OF_TRUST_new() */
int _ZN9keymaster20KM_ROOT_OF_TRUST_newEv(void);

/* Symbol: _ZN9keymaster12RsaOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::RsaOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster12RsaOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZTVN9keymaster28GetKeyCharacteristicsRequestE */
/* Demangled: vtable for keymaster::GetKeyCharacteristicsRequest */
extern void* _ZTVN9keymaster28GetKeyCharacteristicsRequestE;

/* Symbol: _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t */
/* Demangled: keymaster::EcKeySizeToCurve(unsigned int, keymaster_ec_curve_t*) */
int _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t(void);

/* Symbol: _ZN9keymaster20TAG_APPLICATION_DATAE */
/* Demangled: keymaster::TAG_APPLICATION_DATA */
extern void* _ZN9keymaster20TAG_APPLICATION_DATAE;

/* Symbol: _ZN9keymaster13TAG_UNIQUE_IDE */
/* Demangled: keymaster::TAG_UNIQUE_ID */
extern void* _ZN9keymaster13TAG_UNIQUE_IDE;

/* Symbol: _ZNK9keymaster13RsaKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_ */
/* Demangled: keymaster::RsaKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster13RsaKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void);

/* Symbol: _ZN9keymaster16AndroidKeymasterC2EOS0_ */
/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::AndroidKeymaster&&) */
int _ZN9keymaster16AndroidKeymasterC2EOS0_(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh */
/* Demangled: keymaster::AuthorizationSet::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD0Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD0Ev(void);

/* Symbol: _ZN9keymaster43DeserializeIntegrityAssuredBlob_NoHmacCheckERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_ */
/* Demangled: keymaster::DeserializeIntegrityAssuredBlob_NoHmacCheck(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster43DeserializeIntegrityAssuredBlob_NoHmacCheckERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_(void);

/* Symbol: _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster17TAG_OS_PATCHLEVELE */
/* Demangled: keymaster::TAG_OS_PATCHLEVEL */
extern void* _ZN9keymaster17TAG_OS_PATCHLEVELE;

/* Symbol: _ZN9keymaster11TAG_PADDINGE */
/* Demangled: keymaster::TAG_PADDING */
extern void* _ZN9keymaster11TAG_PADDINGE;

/* Symbol: _ZNK9keymaster14HmacKeyFactory19GetOperationFactoryE19keymaster_purpose_t */
/* Demangled: keymaster::HmacKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
int _ZNK9keymaster14HmacKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueEnumRep(keymaster_tag_t, unsigned long, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj(void);

/* Symbol: _ZN9keymaster19TAG_ACTIVE_DATETIMEE */
/* Demangled: keymaster::TAG_ACTIVE_DATETIME */
extern void* _ZN9keymaster19TAG_ACTIVE_DATETIMEE;

/* Symbol: _ZN9keymaster24TAG_ATTESTATION_ID_MODELE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MODEL */
extern void* _ZN9keymaster24TAG_ATTESTATION_ID_MODELE;

/* Symbol: _ZN9keymaster13HmacOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::HmacOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster13HmacOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZTVN9keymaster16ImportKeyRequestE */
/* Demangled: vtable for keymaster::ImportKeyRequest */
extern void* _ZTVN9keymaster16ImportKeyRequestE;

/* Symbol: _ZN9keymaster21EcdsaOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::EcdsaOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster21EcdsaOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster15UpdateOperationERKNS_22UpdateOperationRequestEPNS_23UpdateOperationResponseE */
/* Demangled: keymaster::AndroidKeymaster::UpdateOperation(keymaster::UpdateOperationRequest const&, keymaster::UpdateOperationResponse*) */
int _ZN9keymaster16AndroidKeymaster15UpdateOperationERKNS_22UpdateOperationRequestEPNS_23UpdateOperationResponseE(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportWrappedKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster13RsaKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_ */
/* Demangled: keymaster::RsaKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster13RsaKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void);

/* Symbol: _ZN9keymaster16RsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::RsaSignOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster16RsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZN9keymaster16AndroidKeymasterD1Ev */
/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
int _ZN9keymaster16AndroidKeymasterD1Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm */
/* Demangled: keymaster::AuthorizationSet::ComputeIndirectDataSize(keymaster_key_param_t const*, unsigned long) */
int _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcement23MinTimeBetweenOpsPassedEjm */
/* Demangled: keymaster::KeymasterEnforcement::MinTimeBetweenOpsPassed(unsigned int, unsigned long) */
int _ZN9keymaster20KeymasterEnforcement23MinTimeBetweenOpsPassedEjm(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcementD1Ev */
/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
int _ZN9keymaster20KeymasterEnforcementD1Ev(void);

/* Symbol: _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list */
/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, std::__va_list) */
int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list(void);

/* Symbol: _ZN9keymaster14EcdsaOperationD0Ev */
/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
int _ZN9keymaster14EcdsaOperationD0Ev(void);

/* Symbol: _ZNK9keymaster20SoftwareRandomSource14GenerateRandomEPhm */
/* Demangled: keymaster::SoftwareRandomSource::GenerateRandom(unsigned char*, unsigned long) const */
int _ZNK9keymaster20SoftwareRandomSource14GenerateRandomEPhm(void);

/* Symbol: _ZN9keymaster29SerializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_S7_PS2_ */
/* Demangled: keymaster::SerializeIntegrityAssuredBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster29SerializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_S7_PS2_(void);

/* Symbol: _ZN9keymaster25BuildHiddenAuthorizationsERKNS_16AuthorizationSetEPS0_RKNS_14TKeymasterBlobI16keymaster_blob_tEE */
/* Demangled: keymaster::BuildHiddenAuthorizations(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*, keymaster::TKeymasterBlob<keymaster_blob_t> const&) */
int _ZN9keymaster25BuildHiddenAuthorizationsERKNS_16AuthorizationSetEPS0_RKNS_14TKeymasterBlobI16keymaster_blob_tEE(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperationD0Ev */
/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
int _ZN9keymaster23BlockCipherEvpOperationD0Ev(void);

/* Symbol: _ZTVN9keymaster28RsaDigestingOperationFactoryE */
/* Demangled: vtable for keymaster::RsaDigestingOperationFactory */
extern void* _ZTVN9keymaster28RsaDigestingOperationFactoryE;

/* Symbol: _ZN9keymaster20KeymasterEnforcement18AuthorizeOperationE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetEmb */
/* Demangled: keymaster::KeymasterEnforcement::AuthorizeOperation(keymaster_purpose_t, unsigned long, keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long, bool) */
int _ZN9keymaster20KeymasterEnforcement18AuthorizeOperationE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetEmb(void);

/* Symbol: _ZN9keymaster16KM_AUTH_LIST_newEv */
/* Demangled: keymaster::KM_AUTH_LIST_new() */
int _ZN9keymaster16KM_AUTH_LIST_newEv(void);

/* Symbol: _ZN9keymaster21RsaDigestingOperationD0Ev */
/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
int _ZN9keymaster21RsaDigestingOperationD0Ev(void);

/* Symbol: _ZTVN9keymaster19SymmetricKeyFactoryE */
/* Demangled: vtable for keymaster::SymmetricKeyFactory */
extern void* _ZTVN9keymaster19SymmetricKeyFactoryE;

/* Symbol: _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev(void);

/* Symbol: _ZNK9keymaster13AesKeyFactory19GetOperationFactoryE19keymaster_purpose_t */
/* Demangled: keymaster::AesKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
int _ZNK9keymaster13AesKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation16InitializeCipherENS_14TKeymasterBlobI20keymaster_key_blob_tEE */
/* Demangled: keymaster::BlockCipherEvpOperation::InitializeCipher(keymaster::TKeymasterBlob<keymaster_key_blob_t>) */
int _ZN9keymaster23BlockCipherEvpOperation16InitializeCipherENS_14TKeymasterBlobI20keymaster_key_blob_tEE(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcement23AuthorizeUpdateOrFinishERKNS_9AuthProxyERKNS_16AuthorizationSetEm */
/* Demangled: keymaster::KeymasterEnforcement::AuthorizeUpdateOrFinish(keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long) */
int _ZN9keymaster20KeymasterEnforcement23AuthorizeUpdateOrFinishERKNS_9AuthProxyERKNS_16AuthorizationSetEm(void);

/* Symbol: _ZN9keymaster20TAG_ALL_APPLICATIONSE */
/* Demangled: keymaster::TAG_ALL_APPLICATIONS */
extern void* _ZN9keymaster20TAG_ALL_APPLICATIONSE;

/* Symbol: _ZN9keymaster18TAG_APPLICATION_IDE */
/* Demangled: keymaster::TAG_APPLICATION_ID */
extern void* _ZN9keymaster18TAG_APPLICATION_IDE;

/* Symbol: _ZN9keymaster20i2d_KM_ROOT_OF_TRUSTEPNS_16km_root_of_trustEPPh */
/* Demangled: keymaster::i2d_KM_ROOT_OF_TRUST(keymaster::km_root_of_trust*, unsigned char**) */
int _ZN9keymaster20i2d_KM_ROOT_OF_TRUSTEPNS_16km_root_of_trustEPPh(void);

/* Symbol: _ZN9keymaster8EciesKem7DecryptEP9ec_key_stPKhmPNS_6BufferE */
/* Demangled: keymaster::EciesKem::Decrypt(ec_key_st*, unsigned char const*, unsigned long, keymaster::Buffer*) */
int _ZN9keymaster8EciesKem7DecryptEP9ec_key_stPKhmPNS_6BufferE(void);

/* Symbol: _ZNK9keymaster29TripleDesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t */
/* Demangled: keymaster::TripleDesEvpCipherDescription::GetCipherInstance(unsigned long, keymaster_block_mode_t, keymaster_error_t*) const */
int _ZNK9keymaster29TripleDesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster21HmacSharingParametersE */
/* Demangled: vtable for keymaster::HmacSharingParameters */
extern void* _ZTVN9keymaster21HmacSharingParametersE;

/* Symbol: _ZTVN9keymaster17VerificationTokenE */
/* Demangled: vtable for keymaster::VerificationToken */
extern void* _ZTVN9keymaster17VerificationTokenE;

/* Symbol: _ZTVN9keymaster16AuthorizationSetE */
/* Demangled: vtable for keymaster::AuthorizationSet */
extern void* _ZTVN9keymaster16AuthorizationSetE;

/* Symbol: ae_decrypt */
/* Demangled: ae_decrypt */
int ae_decrypt(void);

/* Symbol: _ZTVN9keymaster19AesOperationFactoryE */
/* Demangled: vtable for keymaster::AesOperationFactory */
extern void* _ZTVN9keymaster19AesOperationFactoryE;

/* Symbol: _ZNK9keymaster25TripleDesOperationFactory20GetCipherDescriptionEv */
/* Demangled: keymaster::TripleDesOperationFactory::GetCipherDescription() const */
int _ZNK9keymaster25TripleDesOperationFactory20GetCipherDescriptionEv(void);

/* Symbol: _ZN9keymaster16AttestKeyRequestD0Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD0Ev(void);

/* Symbol: _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AttestKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh */
/* Demangled: keymaster::HardwareAuthToken::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster18GetVersionResponseE */
/* Demangled: vtable for keymaster::GetVersionResponse */
extern void* _ZTVN9keymaster18GetVersionResponseE;

/* Symbol: _ZN9keymaster6Buffer5writeEPKhm */
/* Demangled: keymaster::Buffer::write(unsigned char const*, unsigned long) */
int _ZN9keymaster6Buffer5writeEPKhm(void);

/* Symbol: ae_encrypt */
/* Demangled: ae_encrypt */
int ae_encrypt(void);

/* Symbol: _ZNK9keymaster12EcKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_ */
/* Demangled: keymaster::EcKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster12EcKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster10UpgradeKeyERKNS_17UpgradeKeyRequestEPNS_18UpgradeKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::UpgradeKey(keymaster::UpgradeKeyRequest const&, keymaster::UpgradeKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster10UpgradeKeyERKNS_17UpgradeKeyRequestEPNS_18UpgradeKeyResponseE(void);

/* Symbol: _ZN9keymaster10dup_bufferEPKvm */
/* Demangled: keymaster::dup_buffer(void const*, unsigned long) */
int _ZN9keymaster10dup_bufferEPKvm(void);

/* Symbol: _ZTVN9keymaster29GetKeyCharacteristicsResponseE */
/* Demangled: vtable for keymaster::GetKeyCharacteristicsResponse */
extern void* _ZTVN9keymaster29GetKeyCharacteristicsResponseE;

/* Symbol: _ZN9keymaster12TAG_KEY_SIZEE */
/* Demangled: keymaster::TAG_KEY_SIZE */
extern void* _ZN9keymaster12TAG_KEY_SIZEE;

/* Symbol: _ZN9keymaster19KM_WRAPPED_KEY_freeEPNS_14km_wrapped_keyE */
/* Demangled: keymaster::KM_WRAPPED_KEY_free(keymaster::km_wrapped_key*) */
int _ZN9keymaster19KM_WRAPPED_KEY_freeEPNS_14km_wrapped_keyE(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappedMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm(void);

/* Symbol: _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE */
/* Demangled: keymaster::TAG_ROLLBACK_RESISTANCE */
extern void* _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_P17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpOperation::UpdateForFinish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, keymaster_error_t*) */
int _ZN9keymaster23BlockCipherEvpOperation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_P17keymaster_error_t(void);

/* Symbol: _ZTVN9keymaster22UpdateOperationRequestE */
/* Demangled: vtable for keymaster::UpdateOperationRequest */
extern void* _ZTVN9keymaster22UpdateOperationRequestE;

/* Symbol: _ZN9keymaster18EcdsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::EcdsaSignOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster18EcdsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv */
/* Demangled: keymaster::AuthorizationSet::SerializedSizeOfElements() const */
int _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv(void);

/* Symbol: _ZN9keymaster25ParseOldSoftkeymasterBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_ */
/* Demangled: keymaster::ParseOldSoftkeymasterBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster25ParseOldSoftkeymasterBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_(void);

/* Symbol: _ZNK9keymaster19SymmetricKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_ */
/* Demangled: keymaster::SymmetricKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster19SymmetricKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void);

/* Symbol: _ZNK9keymaster13AsymmetricKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm */
/* Demangled: keymaster::AsymmetricKey::formatted_key_material(keymaster_key_format_t, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) const */
int _ZNK9keymaster13AsymmetricKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm(void);

/* Symbol: _ZNK9keymaster21EcdsaOperationFactory16SupportedDigestsEPm */
/* Demangled: keymaster::EcdsaOperationFactory::SupportedDigests(unsigned long*) const */
int _ZNK9keymaster21EcdsaOperationFactory16SupportedDigestsEPm(void);

/* Symbol: _ZdlPv */
/* Demangled: operator delete(void*) */
int _ZdlPv(void);

/* Symbol: _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::DeserializeIndirectData(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster13RsaKeyFactoryE */
/* Demangled: vtable for keymaster::RsaKeyFactory */
extern void* _ZTVN9keymaster13RsaKeyFactoryE;

/* Symbol: _ZN9keymaster12RsaOperation10InitDigestEv */
/* Demangled: keymaster::RsaOperation::InitDigest() */
int _ZN9keymaster12RsaOperation10InitDigestEv(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::BlockCipherEvpOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster23BlockCipherEvpOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZTVN9keymaster21EcdsaOperationFactoryE */
/* Demangled: vtable for keymaster::EcdsaOperationFactory */
extern void* _ZTVN9keymaster21EcdsaOperationFactoryE;

/* Symbol: _ZN9keymaster8EciesKem7DecryptEP9ec_key_stRKNS_6BufferEPS3_ */
/* Demangled: keymaster::EciesKem::Decrypt(ec_key_st*, keymaster::Buffer const&, keymaster::Buffer*) */
int _ZN9keymaster8EciesKem7DecryptEP9ec_key_stRKNS_6BufferEPS3_(void);

/* Symbol: _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::Difference(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::BeginOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE */
/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
int _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD2Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD2Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::Union(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster14AccessCountMap23IncrementKeyAccessCountEm */
/* Demangled: keymaster::AccessCountMap::IncrementKeyAccessCount(unsigned long) */
int _ZN9keymaster14AccessCountMap23IncrementKeyAccessCountEm(void);

/* Symbol: _ZN9keymaster17KM_AUTH_LIST_freeEPNS_12km_auth_listE */
/* Demangled: keymaster::KM_AUTH_LIST_free(keymaster::km_auth_list*) */
int _ZN9keymaster17KM_AUTH_LIST_freeEPNS_12km_auth_listE(void);

/* Symbol: _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE */
/* Demangled: keymaster::TAG_ORIGINATION_EXPIRE_DATETIME */
extern void* _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE;

/* Symbol: _ZN9keymaster18RsaVerifyOperation14VerifyDigestedERKNS_6BufferE */
/* Demangled: keymaster::RsaVerifyOperation::VerifyDigested(keymaster::Buffer const&) */
int _ZN9keymaster18RsaVerifyOperation14VerifyDigestedERKNS_6BufferE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster14AbortOperationERKNS_21AbortOperationRequestEPNS_22AbortOperationResponseE */
/* Demangled: keymaster::AndroidKeymaster::AbortOperation(keymaster::AbortOperationRequest const&, keymaster::AbortOperationResponse*) */
int _ZN9keymaster16AndroidKeymaster14AbortOperationERKNS_21AbortOperationRequestEPNS_22AbortOperationResponseE(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueLongRep(keymaster_tag_t, unsigned long, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm(void);

/* Symbol: _ZN9keymaster13AccessTimeMap19UpdateKeyAccessTimeEmjj */
/* Demangled: keymaster::AccessTimeMap::UpdateKeyAccessTime(unsigned long, unsigned int, unsigned int) */
int _ZN9keymaster13AccessTimeMap19UpdateKeyAccessTimeEmjj(void);

/* Symbol: _ZN9keymaster11TAG_PURPOSEE */
/* Demangled: keymaster::TAG_PURPOSE */
extern void* _ZN9keymaster11TAG_PURPOSEE;

/* Symbol: _ZN9keymaster31DeserializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_ */
/* Demangled: keymaster::DeserializeIntegrityAssuredBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster31DeserializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_(void);

/* Symbol: _ZN9keymaster12SymmetricKeyD0Ev */
/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
int _ZN9keymaster12SymmetricKeyD0Ev(void);

/* Symbol: _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::BeginOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD1Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD1Ev(void);

/* Symbol: _ZNK9keymaster20HmacOperationFactory16SupportedDigestsEPm */
/* Demangled: keymaster::HmacOperationFactory::SupportedDigests(unsigned long*) const */
int _ZNK9keymaster20HmacOperationFactory16SupportedDigestsEPm(void);

/* Symbol: _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::SerializedSize() const */
int _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_SERIAL */
extern void* _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE;

/* Symbol: _ZN9keymaster6Logger4InfoEPKcz */
/* Demangled: keymaster::Logger::Info(char const*, ...) */
int _ZN9keymaster6Logger4InfoEPKcz(void);

/* Symbol: _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_IMEI */
extern void* _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE;

/* Symbol: _ZN9keymaster16AndroidKeymasterD2Ev */
/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
int _ZN9keymaster16AndroidKeymasterD2Ev(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::UpgradeKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::CopyToParamSet(keymaster_key_param_set_t*) const */
int _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster20KeymasterEnforcementD2Ev */
/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
int _ZN9keymaster20KeymasterEnforcementD2Ev(void);

/* Symbol: ae_ctx_sizeof */
/* Demangled: ae_ctx_sizeof */
int ae_ctx_sizeof(void);

/* Symbol: _ZN9keymaster3minEmm */
/* Demangled: keymaster::min(unsigned long, unsigned long) */
int _ZN9keymaster3minEmm(void);

/* Symbol: _ZN9keymaster14EcdsaOperationD1Ev */
/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
int _ZN9keymaster14EcdsaOperationD1Ev(void);

/* Symbol: _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE */
/* Demangled: keymaster::copy_size_and_data_from_buf(unsigned char const**, unsigned char const*, unsigned long*, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*) */
int _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE(void);

/* Symbol: _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster14TAG_AUTH_TOKENE */
/* Demangled: keymaster::TAG_AUTH_TOKEN */
extern void* _ZN9keymaster14TAG_AUTH_TOKENE;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperationD1Ev */
/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
int _ZN9keymaster23BlockCipherEvpOperationD1Ev(void);

/* Symbol: _ZNK9keymaster10HmacSha2564SignERKNS_6BufferEPhm */
/* Demangled: keymaster::HmacSha256::Sign(keymaster::Buffer const&, unsigned char*, unsigned long) const */
int _ZNK9keymaster10HmacSha2564SignERKNS_6BufferEPhm(void);

/* Symbol: _ZN9keymaster6RsaKey13EvpToInternalEPK11evp_pkey_st */
/* Demangled: keymaster::RsaKey::EvpToInternal(evp_pkey_st const*) */
int _ZN9keymaster6RsaKey13EvpToInternalEPK11evp_pkey_st(void);

/* Symbol: _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh */
/* Demangled: keymaster::HmacSharingParameters::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::UpdateOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster22BeginOperationResponseE */
/* Demangled: vtable for keymaster::BeginOperationResponse */
extern void* _ZTVN9keymaster22BeginOperationResponseE;

/* Symbol: _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_BRAND */
extern void* _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE;

/* Symbol: _ZN9keymaster30BlockCipherEvpEncryptOperation10GenerateIvEv */
/* Demangled: keymaster::BlockCipherEvpEncryptOperation::GenerateIv() */
int _ZN9keymaster30BlockCipherEvpEncryptOperation10GenerateIvEv(void);

/* Symbol: _ZN9keymaster21RsaDigestingOperationD1Ev */
/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
int _ZN9keymaster21RsaDigestingOperationD1Ev(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev(void);

/* Symbol: _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE */
/* Demangled: keymaster::TAG_TRUSTED_CONFIRMATION_REQUIRED */
extern void* _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE;

/* Symbol: _ZN9keymaster10TAG_DIGESTE */
/* Demangled: keymaster::TAG_DIGEST */
extern void* _ZN9keymaster10TAG_DIGESTE;

/* Symbol: _ZN9keymaster25convert_pkcs8_blob_to_evpEPKhm21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS4_vXadL_Z13EVP_PKEY_freeEEEEEE */
/* Demangled: keymaster::convert_pkcs8_blob_to_evp(unsigned char const*, unsigned long, keymaster_algorithm_t, keymaster::UniquePtr<evp_pkey_st, keymaster::OpenSslObjectDeleter<evp_pkey_st, void, &EVP_PKEY_free> >*) */
int _ZN9keymaster25convert_pkcs8_blob_to_evpEPKhm21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS4_vXadL_Z13EVP_PKEY_freeEEEEEE(void);

/* Symbol: _ZN9keymaster12RsaOperationD0Ev */
/* Demangled: keymaster::RsaOperation::~RsaOperation() */
int _ZN9keymaster12RsaOperationD0Ev(void);

/* Symbol: _ZNK9keymaster16AndroidKeymaster13has_operationEm */
/* Demangled: keymaster::AndroidKeymaster::has_operation(unsigned long) const */
int _ZNK9keymaster16AndroidKeymaster13has_operationEm(void);

/* Symbol: _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::DeleteKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessAllButTagLengthBytesERKNS_6BufferEPS1_ */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::ProcessAllButTagLengthBytes(keymaster::Buffer const&, keymaster::Buffer*) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessAllButTagLengthBytesERKNS_6BufferEPS1_(void);

/* Symbol: _ZN9keymaster13HmacOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::HmacOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster13HmacOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZN9keymaster3Kdf26Uint32ToBigEndianByteArrayEjPh */
/* Demangled: keymaster::Kdf::Uint32ToBigEndianByteArray(unsigned int, unsigned char*) */
int _ZN9keymaster3Kdf26Uint32ToBigEndianByteArrayEjPh(void);

/* Symbol: _ZTVN9keymaster23ImportWrappedKeyRequestE */
/* Demangled: vtable for keymaster::ImportWrappedKeyRequest */
extern void* _ZTVN9keymaster23ImportWrappedKeyRequestE;

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void);

/* Symbol: _ZN9keymaster18RsaVerifyOperation16VerifyUndigestedERKNS_6BufferE */
/* Demangled: keymaster::RsaVerifyOperation::VerifyUndigested(keymaster::Buffer const&) */
int _ZN9keymaster18RsaVerifyOperation16VerifyUndigestedERKNS_6BufferE(void);

/* Symbol: _ZN9keymaster30KM_WRAPPED_KEY_DESCRIPTION_newEv */
/* Demangled: keymaster::KM_WRAPPED_KEY_DESCRIPTION_new() */
int _ZN9keymaster30KM_WRAPPED_KEY_DESCRIPTION_newEv(void);

/* Symbol: _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE */
/* Demangled: keymaster::TAG_MIN_SECONDS_BETWEEN_OPS */
extern void* _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE;

/* Symbol: _ZN9keymaster21FakeKeyAuthorizationsEP11evp_pkey_stPNS_16AuthorizationSetES3_ */
/* Demangled: keymaster::FakeKeyAuthorizations(evp_pkey_st*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
int _ZN9keymaster21FakeKeyAuthorizationsEP11evp_pkey_stPNS_16AuthorizationSetES3_(void);

/* Symbol: _ZNK9keymaster27BlockCipherOperationFactory21SupportedPaddingModesEPm */
/* Demangled: keymaster::BlockCipherOperationFactory::SupportedPaddingModes(unsigned long*) const */
int _ZNK9keymaster27BlockCipherOperationFactory21SupportedPaddingModesEPm(void);

/* Symbol: _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessTagBufContentsAsDataEmPNS_6BufferEP17keymaster_error_t */
/* Demangled: keymaster::BlockCipherEvpDecryptOperation::ProcessTagBufContentsAsData(unsigned long, keymaster::Buffer*, keymaster_error_t*) */
int _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessTagBufContentsAsDataEmPNS_6BufferEP17keymaster_error_t(void);

/* Symbol: _ZNK9keymaster10HmacSha2564SignEPKhmPhm */
/* Demangled: keymaster::HmacSha256::Sign(unsigned char const*, unsigned long, unsigned char*, unsigned long) const */
int _ZNK9keymaster10HmacSha2564SignEPKhmPhm(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster14EarlyBootEndedEv */
/* Demangled: keymaster::AndroidKeymaster::EarlyBootEnded() */
int _ZN9keymaster16AndroidKeymaster14EarlyBootEndedEv(void);

/* Symbol: _ZNK9keymaster17KeymasterResponse14SerializedSizeEv */
/* Demangled: keymaster::KeymasterResponse::SerializedSize() const */
int _ZNK9keymaster17KeymasterResponse14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AttestKeyRequestD1Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD1Ev(void);

/* Symbol: _ZNK9keymaster16AuthorizationSetixEi */
/* Demangled: keymaster::AuthorizationSet::operator[](int) const */
int _ZNK9keymaster16AuthorizationSetixEi(void);

/* Symbol: _ZN9keymaster11empty_paramE */
/* Demangled: keymaster::empty_param */
extern void* _ZN9keymaster11empty_paramE;

/* Symbol: _ZN9keymaster17ec_get_group_sizeEPK11ec_group_stPm */
/* Demangled: keymaster::ec_get_group_size(ec_group_st const*, unsigned long*) */
int _ZN9keymaster17ec_get_group_sizeEPK11ec_group_stPm(void);

/* Symbol: _ZN9keymaster4ckdfERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEEPKS5_mPS2_ */
/* Demangled: keymaster::ckdf(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster_blob_t const*, unsigned long, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster4ckdfERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEEPKS5_mPS2_(void);

/* Symbol: _ZN9keymaster13HmacOperation5AbortEv */
/* Demangled: keymaster::HmacOperation::Abort() */
int _ZN9keymaster13HmacOperation5AbortEv(void);

/* Symbol: _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz */
/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, ...) */
int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz(void);

/* Symbol: _ZTVN9keymaster30BlockCipherEvpDecryptOperationE */
/* Demangled: vtable for keymaster::BlockCipherEvpDecryptOperation */
extern void* _ZTVN9keymaster30BlockCipherEvpDecryptOperationE;

/* Symbol: _ZNK9keymaster6RsaKey13InternalToEvpEP11evp_pkey_st */
/* Demangled: keymaster::RsaKey::InternalToEvp(evp_pkey_st*) const */
int _ZNK9keymaster6RsaKey13InternalToEvpEP11evp_pkey_st(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster21SupportedPaddingModesERKNS_28SupportedPaddingModesRequestEPNS_29SupportedPaddingModesResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedPaddingModes(keymaster::SupportedPaddingModesRequest const&, keymaster::SupportedPaddingModesResponse*) */
int _ZN9keymaster16AndroidKeymaster21SupportedPaddingModesERKNS_28SupportedPaddingModesRequestEPNS_29SupportedPaddingModesResponseE(void);

/* Symbol: _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t18keymaster_digest_t */
/* Demangled: keymaster::RsaKey::SupportedMode(keymaster_purpose_t, keymaster_digest_t) */
int _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t18keymaster_digest_t(void);

/* Symbol: _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE */
/* Demangled: keymaster::TAG_RSA_PUBLIC_EXPONENT */
extern void* _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE;

/* Symbol: _ZTVN9keymaster25ComputeSharedHmacResponseE */
/* Demangled: vtable for keymaster::ComputeSharedHmacResponse */
extern void* _ZTVN9keymaster25ComputeSharedHmacResponseE;

/* Symbol: _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv */
/* Demangled: keymaster::HmacSharingParametersArray::SerializedSize() const */
int _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster22TAG_ROLLBACK_RESISTANTE */
/* Demangled: keymaster::TAG_ROLLBACK_RESISTANT */
extern void* _ZN9keymaster22TAG_ROLLBACK_RESISTANTE;

/* Symbol: _ZN9keymaster18TAG_USER_AUTH_TYPEE */
/* Demangled: keymaster::TAG_USER_AUTH_TYPE */
extern void* _ZN9keymaster18TAG_USER_AUTH_TYPEE;

/* Symbol: _ZN9keymaster28DeserializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_PNS_6BufferES9_ */
/* Demangled: keymaster::DeserializeAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*, keymaster::Buffer*, keymaster::Buffer*) */
int _ZN9keymaster28DeserializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_PNS_6BufferES9_(void);

/* Symbol: _ZN9keymaster22d2i_KM_KEY_DESCRIPTIONEPPNS_18km_key_descriptionEPPKhl */
/* Demangled: keymaster::d2i_KM_KEY_DESCRIPTION(keymaster::km_key_description**, unsigned char const**, long) */
int _ZN9keymaster22d2i_KM_KEY_DESCRIPTIONEPPNS_18km_key_descriptionEPPKhl(void);

/* Symbol: _ZN9keymaster14EcdsaOperation9StoreDataERKNS_6BufferEPm */
/* Demangled: keymaster::EcdsaOperation::StoreData(keymaster::Buffer const&, unsigned long*) */
int _ZN9keymaster14EcdsaOperation9StoreDataERKNS_6BufferEPm(void);

/* Symbol: _ZN9keymaster18i2d_KM_WRAPPED_KEYEPNS_14km_wrapped_keyEPPh */
/* Demangled: keymaster::i2d_KM_WRAPPED_KEY(keymaster::km_wrapped_key*, unsigned char**) */
int _ZN9keymaster18i2d_KM_WRAPPED_KEYEPNS_14km_wrapped_keyEPPh(void);

/* Symbol: _ZTVN9keymaster16DeleteKeyRequestE */
/* Demangled: vtable for keymaster::DeleteKeyRequest */
extern void* _ZTVN9keymaster16DeleteKeyRequestE;

/* Symbol: _ZN9keymaster20KeymasterEnforcementC2Ejj */
/* Demangled: keymaster::KeymasterEnforcement::KeymasterEnforcement(unsigned int, unsigned int) */
int _ZN9keymaster20KeymasterEnforcementC2Ejj(void);

/* Symbol: _ZN9keymaster15TAG_PADDING_OLDE */
/* Demangled: keymaster::TAG_PADDING_OLD */
extern void* _ZN9keymaster15TAG_PADDING_OLDE;

/* Symbol: _ZNK9keymaster19AesOperationFactory20GetCipherDescriptionEv */
/* Demangled: keymaster::AesOperationFactory::GetCipherDescription() const */
int _ZNK9keymaster19AesOperationFactory20GetCipherDescriptionEv(void);

/* Symbol: _ZNK9keymaster12EcKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_Pj */
/* Demangled: keymaster::EcKeyFactory::UpdateImportKeyDescription(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, unsigned int*) const */
int _ZNK9keymaster12EcKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_Pj(void);

/* Symbol: _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_t */
/* Demangled: keymaster::OperationFactory::GetAndValidateDigest(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_digest_t*, keymaster_error_t*) const */
int _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_t(void);

/* Symbol: _ZNK9keymaster28RsaDigestingOperationFactory21SupportedPaddingModesEPm */
/* Demangled: keymaster::RsaDigestingOperationFactory::SupportedPaddingModes(unsigned long*) const */
int _ZNK9keymaster28RsaDigestingOperationFactory21SupportedPaddingModesEPm(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster9DeleteKeyERKNS_16DeleteKeyRequestEPNS_17DeleteKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::DeleteKey(keymaster::DeleteKeyRequest const&, keymaster::DeleteKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster9DeleteKeyERKNS_16DeleteKeyRequestEPNS_17DeleteKeyResponseE(void);

/* Symbol: _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::AttestKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster5EcKeyE */
/* Demangled: vtable for keymaster::EcKey */
extern void* _ZTVN9keymaster5EcKeyE;

/* Symbol: _ZTVN9keymaster8EciesKemE */
/* Demangled: vtable for keymaster::EciesKem */
extern void* _ZTVN9keymaster8EciesKemE;

/* Symbol: _ZNK9keymaster10HmacSha2566VerifyERKNS_6BufferES3_ */
/* Demangled: keymaster::HmacSha256::Verify(keymaster::Buffer const&, keymaster::Buffer const&) const */
int _ZNK9keymaster10HmacSha2566VerifyERKNS_6BufferES3_(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster16SupportedDigestsERKNS_23SupportedDigestsRequestEPNS_24SupportedDigestsResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedDigests(keymaster::SupportedDigestsRequest const&, keymaster::SupportedDigestsResponse*) */
int _ZN9keymaster16AndroidKeymaster16SupportedDigestsERKNS_23SupportedDigestsRequestEPNS_24SupportedDigestsResponseE(void);

/* Symbol: _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::FinishOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster22FinishOperationRequestE */
/* Demangled: vtable for keymaster::FinishOperationRequest */
extern void* _ZTVN9keymaster22FinishOperationRequestE;

/* Symbol: _ZN9keymaster25TranslateLastOpenSslErrorEb */
/* Demangled: keymaster::TranslateLastOpenSslError(bool) */
int _ZN9keymaster25TranslateLastOpenSslErrorEb(void);

/* Symbol: _ZN9keymaster14EcdsaOperation10InitDigestEv */
/* Demangled: keymaster::EcdsaOperation::InitDigest() */
int _ZN9keymaster14EcdsaOperation10InitDigestEv(void);

/* Symbol: _ZN9keymaster20NistCurveKeyExchange16ExtractPublicKeyEv */
/* Demangled: keymaster::NistCurveKeyExchange::ExtractPublicKey() */
int _ZN9keymaster20NistCurveKeyExchange16ExtractPublicKeyEv(void);

/* Symbol: _ZdaPv */
/* Demangled: operator delete[](void*) */
int _ZdaPv(void);

/* Symbol: _ZN9keymaster16AndroidKeymasterC1EOS0_ */
/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::AndroidKeymaster&&) */
int _ZN9keymaster16AndroidKeymasterC1EOS0_(void);

/* Symbol: _ZN9keymaster16RsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::RsaSignOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster16RsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZTVN9keymaster27RsaCryptingOperationFactoryE */
/* Demangled: vtable for keymaster::RsaCryptingOperationFactory */
extern void* _ZTVN9keymaster27RsaCryptingOperationFactoryE;

/* Symbol: _ZN9keymaster17build_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEE22keymaster_key_format_tS4_S8_RKNS_16AuthorizationSetEPS2_ */
/* Demangled: keymaster::build_wrapped_key(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster17build_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEE22keymaster_key_format_tS4_S8_RKNS_16AuthorizationSetEPS2_(void);

/* Symbol: _ZNK9keymaster17VerificationToken9SerializeEPhPKh */
/* Demangled: keymaster::VerificationToken::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17VerificationToken9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj */
/* Demangled: keymaster::AuthorizationSet::ContainsEnumValue(keymaster_tag_t, unsigned int) const */
int _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj(void);

/* Symbol: _ZNK9keymaster12EcKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_ */
/* Demangled: keymaster::EcKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster12EcKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void);

/* Symbol: _ZTVN9keymaster11Iso18033KdfE */
/* Demangled: vtable for keymaster::Iso18033Kdf */
extern void* _ZTVN9keymaster11Iso18033KdfE;

/* Symbol: _ZTVN9keymaster20NistCurveKeyExchangeE */
/* Demangled: vtable for keymaster::NistCurveKeyExchange */
extern void* _ZTVN9keymaster20NistCurveKeyExchangeE;

/* Symbol: _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ImportWrappedKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster21BeginOperationRequestE */
/* Demangled: vtable for keymaster::BeginOperationRequest */
extern void* _ZTVN9keymaster21BeginOperationRequestE;

/* Symbol: _ZN9keymaster12SymmetricKeyD1Ev */
/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
int _ZN9keymaster12SymmetricKeyD1Ev(void);

/* Symbol: _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::AttestKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD2Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD2Ev(void);

/* Symbol: _ZN9keymaster16i2d_KM_AUTH_LISTEPNS_12km_auth_listEPPh */
/* Demangled: keymaster::i2d_KM_AUTH_LIST(keymaster::km_auth_list*, unsigned char**) */
int _ZN9keymaster16i2d_KM_AUTH_LISTEPNS_12km_auth_listEPPh(void);

/* Symbol: _ZTVN9keymaster18EcdsaSignOperationE */
/* Demangled: vtable for keymaster::EcdsaSignOperation */
extern void* _ZTVN9keymaster18EcdsaSignOperationE;

/* Symbol: _ZN9keymaster18RsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::RsaVerifyOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster18RsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti */
/* Demangled: keymaster::AuthorizationSet::find(keymaster_tag_t, int) const */
int _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti(void);

/* Symbol: _ZN9keymaster16AuthorizationSetD0Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD0Ev(void);

/* Symbol: _ZSt7nothrow */
/* Demangled: std::nothrow */
extern void* _ZSt7nothrow;

/* Symbol: _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ImportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster6Logger6SevereEPKcz */
/* Demangled: keymaster::Logger::Severe(char const*, ...) */
int _ZN9keymaster6Logger6SevereEPKcz(void);

/* Symbol: _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster21TAG_CREATION_DATETIMEE */
/* Demangled: keymaster::TAG_CREATION_DATETIME */
extern void* _ZN9keymaster21TAG_CREATION_DATETIMEE;

/* Symbol: _ZN9keymaster23BlockCipherEvpOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::BlockCipherEvpOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster23BlockCipherEvpOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster10GetVersionERKNS_17GetVersionRequestEPNS_18GetVersionResponseE */
/* Demangled: keymaster::AndroidKeymaster::GetVersion(keymaster::GetVersionRequest const&, keymaster::GetVersionResponse*) */
int _ZN9keymaster16AndroidKeymaster10GetVersionERKNS_17GetVersionRequestEPNS_18GetVersionResponseE(void);

/* Symbol: _ZN9keymaster19softwareRootOfTrustE */
/* Demangled: keymaster::softwareRootOfTrust */
extern void* _ZN9keymaster19softwareRootOfTrustE;

/* Symbol: _ZN9keymaster13HmacOperationD0Ev */
/* Demangled: keymaster::HmacOperation::~HmacOperation() */
int _ZN9keymaster13HmacOperationD0Ev(void);

/* Symbol: _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::DeleteKeyRequest::SerializedSize() const */
int _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE */
/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
int _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE(void);

/* Symbol: _ZN9keymaster19TAG_BOOTLOADER_ONLYE */
/* Demangled: keymaster::TAG_BOOTLOADER_ONLY */
extern void* _ZN9keymaster19TAG_BOOTLOADER_ONLYE;

/* Symbol: _ZTVN9keymaster14HmacKeyFactoryE */
/* Demangled: vtable for keymaster::HmacKeyFactory */
extern void* _ZTVN9keymaster14HmacKeyFactoryE;

/* Symbol: _ZNK9keymaster13RsaKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE */
/* Demangled: keymaster::RsaKeyFactory::CreateEmptyKey(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::AsymmetricKey, keymaster::DefaultDelete<keymaster::AsymmetricKey> >*) const */
int _ZNK9keymaster13RsaKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE(void);

/* Symbol: _ZnwmRKSt9nothrow_t */
/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
int _ZnwmRKSt9nothrow_t(void);

/* Symbol: _ZN9keymaster16AuthorizationSet5eraseEi */
/* Demangled: keymaster::AuthorizationSet::erase(int) */
int _ZN9keymaster16AuthorizationSet5eraseEi(void);

/* Symbol: _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16OperationFactory9supportedE19keymaster_padding_t */
/* Demangled: keymaster::OperationFactory::supported(keymaster_padding_t) const */
int _ZNK9keymaster16OperationFactory9supportedE19keymaster_padding_t(void);

/* Symbol: _ZNK9keymaster16OperationFactory9supportedE18keymaster_digest_t */
/* Demangled: keymaster::OperationFactory::supported(keymaster_digest_t) const */
int _ZNK9keymaster16OperationFactory9supportedE18keymaster_digest_t(void);

/* Symbol: _ZNK9keymaster6Buffer15available_writeEv */
/* Demangled: keymaster::Buffer::available_write() const */
int _ZNK9keymaster6Buffer15available_writeEv(void);

/* Symbol: _ZN9keymaster23KM_KEY_DESCRIPTION_freeEPNS_18km_key_descriptionE */
/* Demangled: keymaster::KM_KEY_DESCRIPTION_free(keymaster::km_key_description*) */
int _ZN9keymaster23KM_KEY_DESCRIPTION_freeEPNS_18km_key_descriptionE(void);

/* Symbol: _ZN9keymaster14EcdsaOperationD2Ev */
/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
int _ZN9keymaster14EcdsaOperationD2Ev(void);

/* Symbol: _ZN9keymaster19RsaOperationFactory9GetRsaKeyEONS_3KeyEP17keymaster_error_t */
/* Demangled: keymaster::RsaOperationFactory::GetRsaKey(keymaster::Key&&, keymaster_error_t*) */
int _ZN9keymaster19RsaOperationFactory9GetRsaKeyEONS_3KeyEP17keymaster_error_t(void);

/* Symbol: _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::AttestKeyRequest::SerializedSize() const */
int _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster17HardwareAuthTokenE */
/* Demangled: vtable for keymaster::HardwareAuthToken */
extern void* _ZTVN9keymaster17HardwareAuthTokenE;

/* Symbol: _ZN9keymaster9Operation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferE */
/* Demangled: keymaster::Operation::UpdateForFinish(keymaster::AuthorizationSet const&, keymaster::Buffer const&) */
int _ZN9keymaster9Operation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferE(void);

/* Symbol: _ZN9keymaster23BlockCipherEvpOperationD2Ev */
/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
int _ZN9keymaster23BlockCipherEvpOperationD2Ev(void);

/* Symbol: _ZN9keymaster5EcKey13EvpToInternalEPK11evp_pkey_st */
/* Demangled: keymaster::EcKey::EvpToInternal(evp_pkey_st const*) */
int _ZN9keymaster5EcKey13EvpToInternalEPK11evp_pkey_st(void);

/* Symbol: _ZNK9keymaster5EcKey13InternalToEvpEP11evp_pkey_st */
/* Demangled: keymaster::EcKey::InternalToEvp(evp_pkey_st*) const */
int _ZNK9keymaster5EcKey13InternalToEvpEP11evp_pkey_st(void);

/* Symbol: _ZnamRKSt9nothrow_t */
/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
int _ZnamRKSt9nothrow_t(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD0Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD0Ev(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetMaskingKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster15build_auth_listERKNS_16AuthorizationSetEPNS_12km_auth_listE */
/* Demangled: keymaster::build_auth_list(keymaster::AuthorizationSet const&, keymaster::km_auth_list*) */
int _ZN9keymaster15build_auth_listERKNS_16AuthorizationSetEPNS_12km_auth_listE(void);

/* Symbol: _ZN9keymaster21RsaDigestingOperationD2Ev */
/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
int _ZN9keymaster21RsaDigestingOperationD2Ev(void);

/* Symbol: _ZN9keymaster16AndroidKeymasterC2EPNS_16KeymasterContextEm */
/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::KeymasterContext*, unsigned long) */
int _ZN9keymaster16AndroidKeymasterC2EPNS_16KeymasterContextEm(void);

/* Symbol: _ZTVN9keymaster17ImportKeyResponseE */
/* Demangled: vtable for keymaster::ImportKeyResponse */
extern void* _ZTVN9keymaster17ImportKeyResponseE;

/* Symbol: _ZN9keymaster8EciesKem7EncryptEPKhmPNS_6BufferES4_ */
/* Demangled: keymaster::EciesKem::Encrypt(unsigned char const*, unsigned long, keymaster::Buffer*, keymaster::Buffer*) */
int _ZN9keymaster8EciesKem7EncryptEPKhmPNS_6BufferES4_(void);

/* Symbol: _ZN9keymaster12RsaOperationD1Ev */
/* Demangled: keymaster::RsaOperation::~RsaOperation() */
int _ZN9keymaster12RsaOperationD1Ev(void);

/* Symbol: _ZN9keymaster13TAG_ALGORITHME */
/* Demangled: keymaster::TAG_ALGORITHM */
extern void* _ZN9keymaster13TAG_ALGORITHME;

/* Symbol: _ZTVN9keymaster20HmacOperationFactoryE */
/* Demangled: vtable for keymaster::HmacOperationFactory */
extern void* _ZTVN9keymaster20HmacOperationFactoryE;

/* Symbol: _ZNK9keymaster6Buffer9SerializeEPhPKh */
/* Demangled: keymaster::Buffer::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster6Buffer9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster14TAG_OS_VERSIONE */
/* Demangled: keymaster::TAG_OS_VERSION */
extern void* _ZN9keymaster14TAG_OS_VERSIONE;

/* Symbol: _ZN9keymaster18UpgradeSoftKeyBlobERKNS_9UniquePtrINS_3KeyENS_13DefaultDeleteIS1_EEEEjjRKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEE */
/* Demangled: keymaster::UpgradeSoftKeyBlob(keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> > const&, unsigned int, unsigned int, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster18UpgradeSoftKeyBlobERKNS_9UniquePtrINS_3KeyENS_13DefaultDeleteIS1_EEEEjjRKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void);

/* Symbol: _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GetVersionResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: __cxa_pure_virtual */
/* Demangled: __cxa_pure_virtual */
int __cxa_pure_virtual(void);

/* Symbol: _ZNK9keymaster12EcKeyFactory19GetOperationFactoryE19keymaster_purpose_t */
/* Demangled: keymaster::EcKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
int _ZNK9keymaster12EcKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster24GetHmacSharingParametersEv */
/* Demangled: keymaster::AndroidKeymaster::GetHmacSharingParameters() */
int _ZN9keymaster16AndroidKeymaster24GetHmacSharingParametersEv(void);

/* Symbol: _ZN9keymaster16AttestKeyRequestD2Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD2Ev(void);

/* Symbol: ae_clear */
/* Demangled: ae_clear */
int ae_clear(void);

/* Symbol: _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh */
/* Demangled: keymaster::KeymasterResponse::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster13append_to_bufEPhPKhPKvm */
/* Demangled: keymaster::append_to_buf(unsigned char*, unsigned char const*, void const*, unsigned long) */
int _ZN9keymaster13append_to_bufEPhPKhPKvm(void);

/* Symbol: _ZN9keymaster14OperationTable3AddEONS_9UniquePtrINS_9OperationENS_13DefaultDeleteIS2_EEEE */
/* Demangled: keymaster::OperationTable::Add(keymaster::UniquePtr<keymaster::Operation, keymaster::DefaultDelete<keymaster::Operation> >&&) */
int _ZN9keymaster14OperationTable3AddEONS_9UniquePtrINS_9OperationENS_13DefaultDeleteIS2_EEEE(void);

/* Symbol: _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE */
/* Demangled: keymaster::TAG_ECIES_SINGLE_HASH_MODE */
extern void* _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE;

/* Symbol: _ZN9keymaster17TAG_ROOT_OF_TRUSTE */
/* Demangled: keymaster::TAG_ROOT_OF_TRUST */
extern void* _ZN9keymaster17TAG_ROOT_OF_TRUSTE;

/* Symbol: _ZTVN9keymaster12RsaOperationE */
/* Demangled: vtable for keymaster::RsaOperation */
extern void* _ZTVN9keymaster12RsaOperationE;

/* Symbol: _ZN9keymaster18d2i_KM_WRAPPED_KEYEPPNS_14km_wrapped_keyEPPKhl */
/* Demangled: keymaster::d2i_KM_WRAPPED_KEY(keymaster::km_wrapped_key**, unsigned char const**, long) */
int _ZN9keymaster18d2i_KM_WRAPPED_KEYEPPNS_14km_wrapped_keyEPPKhl(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster22SupportedImportFormatsERKNS_29SupportedImportFormatsRequestEPNS_30SupportedImportFormatsResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedImportFormats(keymaster::SupportedImportFormatsRequest const&, keymaster::SupportedImportFormatsResponse*) */
int _ZN9keymaster16AndroidKeymaster22SupportedImportFormatsERKNS_29SupportedImportFormatsRequestEPNS_30SupportedImportFormatsResponseE(void);

/* Symbol: _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_DEVICE */
extern void* _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE;

/* Symbol: _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::UpdateOperationRequest::SerializedSize() const */
int _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster19TAG_ASSOCIATED_DATAE */
/* Demangled: keymaster::TAG_ASSOCIATED_DATA */
extern void* _ZN9keymaster19TAG_ASSOCIATED_DATAE;

/* Symbol: _ZN9keymaster19TAG_EARLY_BOOT_ONLYE */
/* Demangled: keymaster::TAG_EARLY_BOOT_ONLY */
extern void* _ZN9keymaster19TAG_EARLY_BOOT_ONLYE;

/* Symbol: _ZN9keymaster20HmacOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::HmacOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster20HmacOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster13copy_from_bufEPPKhS1_Pvm */
/* Demangled: keymaster::copy_from_buf(unsigned char const**, unsigned char const*, void*, unsigned long) */
int _ZN9keymaster13copy_from_bufEPPKhS1_Pvm(void);

/* Symbol: _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GetVersionResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t */
/* Demangled: keymaster::AuthorizationSet::GetTagCount(keymaster_tag_t) const */
int _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t(void);

/* Symbol: _ZN9keymaster9TAG_NONCEE */
/* Demangled: keymaster::TAG_NONCE */
extern void* _ZN9keymaster9TAG_NONCEE;

/* Symbol: _ZN9keymaster14OperationTable4FindEm */
/* Demangled: keymaster::OperationTable::Find(unsigned long) */
int _ZN9keymaster14OperationTable4FindEm(void);

/* Symbol: _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv */
/* Demangled: keymaster::AddEntropyRequest::SerializedSize() const */
int _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster11TAG_USER_IDE */
/* Demangled: keymaster::TAG_USER_ID */
extern void* _ZN9keymaster11TAG_USER_IDE;

/* Symbol: _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE */
/* Demangled: keymaster::TAG_ALLOW_WHILE_ON_BODY */
extern void* _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE;

/* Symbol: _ZTVN9keymaster13AesKeyFactoryE */
/* Demangled: vtable for keymaster::AesKeyFactory */
extern void* _ZTVN9keymaster13AesKeyFactoryE;

/* Symbol: _ZN9keymaster27generate_attestation_commonEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_mmjRKNS_24AttestationRecordContextERK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE */
/* Demangled: keymaster::generate_attestation_common(evp_pkey_st const*, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, unsigned long, unsigned long, unsigned int, keymaster::AttestationRecordContext const&, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
int _ZN9keymaster27generate_attestation_commonEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_mmjRKNS_24AttestationRecordContextERK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE(void);

/* Symbol: _ZN9keymaster20EcdsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::EcdsaVerifyOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster20EcdsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZTVN9keymaster13HmacOperationE */
/* Demangled: vtable for keymaster::HmacOperation */
extern void* _ZTVN9keymaster13HmacOperationE;

/* Symbol: _ZTVN9keymaster19RsaEncryptOperationE */
/* Demangled: vtable for keymaster::RsaEncryptOperation */
extern void* _ZTVN9keymaster19RsaEncryptOperationE;

/* Symbol: infoString */
/* Demangled: infoString */
extern void* infoString;

/* Symbol: _ZN9keymaster8EciesKemC1ERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::EciesKem::EciesKem(keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster8EciesKemC1ERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZNK9keymaster10HmacSha25612DigestLengthEv */
/* Demangled: keymaster::HmacSha256::DigestLength() const */
int _ZNK9keymaster10HmacSha25612DigestLengthEv(void);

/* Symbol: _ZNK9keymaster19RsaOperationFactory16SupportedDigestsEPm */
/* Demangled: keymaster::RsaOperationFactory::SupportedDigests(unsigned long*) const */
int _ZNK9keymaster19RsaOperationFactory16SupportedDigestsEPm(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster23UpdateOperationResponseE */
/* Demangled: vtable for keymaster::UpdateOperationResponse */
extern void* _ZTVN9keymaster23UpdateOperationResponseE;

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueDate(keymaster_tag_t, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm(void);

/* Symbol: _ZN9keymaster16TAG_AUTH_TIMEOUTE */
/* Demangled: keymaster::TAG_AUTH_TIMEOUT */
extern void* _ZN9keymaster16TAG_AUTH_TIMEOUTE;

/* Symbol: _ZN9keymaster16AuthorizationSet8MoveFromERS0_ */
/* Demangled: keymaster::AuthorizationSet::MoveFrom(keymaster::AuthorizationSet&) */
int _ZN9keymaster16AuthorizationSet8MoveFromERS0_(void);

/* Symbol: _ZTVN9keymaster12SymmetricKeyE */
/* Demangled: vtable for keymaster::SymmetricKey */
extern void* _ZTVN9keymaster12SymmetricKeyE;

/* Symbol: _ZTVN9keymaster17ExportKeyResponseE */
/* Demangled: vtable for keymaster::ExportKeyResponse */
extern void* _ZTVN9keymaster17ExportKeyResponseE;

/* Symbol: _ZN9keymaster16d2i_KM_AUTH_LISTEPPNS_12km_auth_listEPPKhl */
/* Demangled: keymaster::d2i_KM_AUTH_LIST(keymaster::km_auth_list**, unsigned char const**, long) */
int _ZN9keymaster16d2i_KM_AUTH_LISTEPPNS_12km_auth_listEPPKhl(void);

/* Symbol: _ZN9keymaster19RsaOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t */
/* Demangled: keymaster::RsaOperationFactory::CreateRsaOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
int _ZN9keymaster19RsaOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster19RsaDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_ */
/* Demangled: keymaster::RsaDecryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster19RsaDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster9ExportKeyERKNS_16ExportKeyRequestEPNS_17ExportKeyResponseE */
/* Demangled: keymaster::AndroidKeymaster::ExportKey(keymaster::ExportKeyRequest const&, keymaster::ExportKeyResponse*) */
int _ZN9keymaster16AndroidKeymaster9ExportKeyERKNS_16ExportKeyRequestEPNS_17ExportKeyResponseE(void);

/* Symbol: _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::FinishOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::AttestKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE */
/* Demangled: keymaster::TAG_ATTESTATION_APPLICATION_ID */
extern void* _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE;

/* Symbol: _ZN9keymaster12SymmetricKeyD2Ev */
/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
int _ZN9keymaster12SymmetricKeyD2Ev(void);

/* Symbol: _ZNK9keymaster20AsymmetricKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::AsymmetricKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster20AsymmetricKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZN9keymaster10HmacSha2564InitERKNS_6BufferE */
/* Demangled: keymaster::HmacSha256::Init(keymaster::Buffer const&) */
int _ZN9keymaster10HmacSha2564InitERKNS_6BufferE(void);

/* Symbol: _ZN9keymaster17AttestKeyResponse13AllocateChainEm */
/* Demangled: keymaster::AttestKeyResponse::AllocateChain(unsigned long) */
int _ZN9keymaster17AttestKeyResponse13AllocateChainEm(void);

/* Symbol: _ZN9keymaster12SymmetricKeyC1EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE */
/* Demangled: keymaster::SymmetricKey::SymmetricKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::KeyFactory const*) */
int _ZN9keymaster12SymmetricKeyC1EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE(void);

/* Symbol: _ZN9keymaster16AndroidKeymaster19SupportedAlgorithmsERKNS_26SupportedAlgorithmsRequestEPNS_27SupportedAlgorithmsResponseE */
/* Demangled: keymaster::AndroidKeymaster::SupportedAlgorithms(keymaster::SupportedAlgorithmsRequest const&, keymaster::SupportedAlgorithmsResponse*) */
int _ZN9keymaster16AndroidKeymaster19SupportedAlgorithmsERKNS_26SupportedAlgorithmsRequestEPNS_27SupportedAlgorithmsResponseE(void);

/* Symbol: _ZN9keymaster16AuthorizationSetD1Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD1Ev(void);

/* Symbol: _ZN9keymaster16TAG_CALLER_NONCEE */
/* Demangled: keymaster::TAG_CALLER_NONCE */
extern void* _ZN9keymaster16TAG_CALLER_NONCEE;

/* Symbol: _ZN9keymaster7TAG_KDFE */
/* Demangled: keymaster::TAG_KDF */
extern void* _ZN9keymaster7TAG_KDFE;

/* Symbol: _ZN9keymaster12SymmetricKeyC2EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE */
/* Demangled: keymaster::SymmetricKey::SymmetricKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::KeyFactory const*) */
int _ZN9keymaster12SymmetricKeyC2EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE(void);

/* Symbol: _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm */
/* Demangled: keymaster::build_attestation_record(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet, keymaster::AuthorizationSet, keymaster::AttestationRecordContext const&, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) */
int _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm(void);

/* Symbol: _ZN9keymaster17extract_auth_listEPKNS_12km_auth_listEPNS_16AuthorizationSetE */
/* Demangled: keymaster::extract_auth_list(keymaster::km_auth_list const*, keymaster::AuthorizationSet*) */
int _ZN9keymaster17extract_auth_listEPKNS_12km_auth_listEPNS_16AuthorizationSetE(void);

/* Symbol: _ZN9keymaster20NistCurveKeyExchange19GenerateKeyExchangeE20keymaster_ec_curve_t */
/* Demangled: keymaster::NistCurveKeyExchange::GenerateKeyExchange(keymaster_ec_curve_t) */
int _ZN9keymaster20NistCurveKeyExchange19GenerateKeyExchangeE20keymaster_ec_curve_t(void);

/* Symbol: _ZN9keymaster30d2i_KM_WRAPPED_KEY_DESCRIPTIONEPPNS_26km_wrapped_key_descriptionEPPKhl */
/* Demangled: keymaster::d2i_KM_WRAPPED_KEY_DESCRIPTION(keymaster::km_wrapped_key_description**, unsigned char const**, long) */
int _ZN9keymaster30d2i_KM_WRAPPED_KEY_DESCRIPTIONEPPNS_26km_wrapped_key_descriptionEPPKhl(void);

/* Symbol: _ZTVN9keymaster23FinishOperationResponseE */
/* Demangled: vtable for keymaster::FinishOperationResponse */
extern void* _ZTVN9keymaster23FinishOperationResponseE;

/* Symbol: _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ExportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster19SymmetricKeyFactory22SupportedImportFormatsEPm */
/* Demangled: keymaster::SymmetricKeyFactory::SupportedImportFormats(unsigned long*) const */
int _ZNK9keymaster19SymmetricKeyFactory22SupportedImportFormatsEPm(void);

/* Symbol: _ZN9keymaster13HmacOperationD1Ev */
/* Demangled: keymaster::HmacOperation::~HmacOperation() */
int _ZN9keymaster13HmacOperationD1Ev(void);

/* Symbol: _ZTVN9keymaster20SoftwareRandomSourceE */
/* Demangled: vtable for keymaster::SoftwareRandomSource */
extern void* _ZTVN9keymaster20SoftwareRandomSourceE;

/* Symbol: _ZN9keymaster12TAG_EC_CURVEE */
/* Demangled: keymaster::TAG_EC_CURVE */
extern void* _ZN9keymaster12TAG_EC_CURVEE;

/* Symbol: _ZNK9keymaster13AesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::AesKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster13AesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZN9keymaster10HmacSha2564InitEPKhm */
/* Demangled: keymaster::HmacSha256::Init(unsigned char const*, unsigned long) */
int _ZN9keymaster10HmacSha2564InitEPKhm(void);

/* Symbol: _ZTVN9keymaster17RsaCryptOperationE */
/* Demangled: vtable for keymaster::RsaCryptOperation */
extern void* _ZTVN9keymaster17RsaCryptOperationE;

/* Symbol: _ZN9keymaster16AndroidKeymasterC1EPNS_16KeymasterContextEm */
/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::KeymasterContext*, unsigned long) */
int _ZN9keymaster16AndroidKeymasterC1EPNS_16KeymasterContextEm(void);

/* Symbol: _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::FinishOperationRequest::SerializedSize() const */
int _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster13OcbDecryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferESA_PS5_ */
/* Demangled: keymaster::OcbDecryptKey(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
int _ZN9keymaster13OcbDecryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferESA_PS5_(void);

/* Symbol: _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ExportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD1Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD1Ev(void);

/* Symbol: _ZN9keymaster12RsaOperation5BeginERKNS_16AuthorizationSetEPS1_ */
/* Demangled: keymaster::RsaOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
int _ZN9keymaster12RsaOperation5BeginERKNS_16AuthorizationSetEPS1_(void);

/* Symbol: _ZN9keymaster17RsaCryptOperation17GetOpensslPaddingEP17keymaster_error_t */
/* Demangled: keymaster::RsaCryptOperation::GetOpensslPadding(keymaster_error_t*) */
int _ZN9keymaster17RsaCryptOperation17GetOpensslPaddingEP17keymaster_error_t(void);

/* Symbol: _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::AttestKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster12RsaOperationD2Ev */
/* Demangled: keymaster::RsaOperation::~RsaOperation() */
int _ZN9keymaster12RsaOperationD2Ev(void);

/* Symbol: ae_init */
/* Demangled: ae_init */
int ae_init(void);

/* Symbol: _ZNK9keymaster19TripleDesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE */
/* Demangled: keymaster::TripleDesKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
int _ZNK9keymaster19TripleDesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void);

/* Symbol: _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::DeserializeElementsData(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_(void);

/* Symbol: _ZNK9keymaster16OperationFactory23is_public_key_operationEv */
/* Demangled: keymaster::OperationFactory::is_public_key_operation() const */
int _ZNK9keymaster16OperationFactory23is_public_key_operationEv(void);

/* Symbol: ae_allocate */
/* Demangled: ae_allocate */
int ae_allocate(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBKEYMASTER_PORTABLE_H */
