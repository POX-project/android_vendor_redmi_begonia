/*
 * Reverse-Engineered Source for: libkeymaster_portable.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkeymaster_portable"

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
#include "libkeymaster_portable.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: keymaster::BeginOperationRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AccessCountMap::KeyAccessCount(unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster14AccessCountMap14KeyAccessCountEmPj(void) {
    ALOGD("_ZNK9keymaster14AccessCountMap14KeyAccessCountEmPj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ALL_USERS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_ALL_USERSE = NULL;

/* Demangled: keymaster::HmacOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster13HmacOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParametersArray::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpgradeKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18UpgradeKeyResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::Reinitialize(keymaster_key_param_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm() called");
    return 0;
}

/* Demangled: keymaster::Logger::Warning(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger7WarningEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger7WarningEPKcz() called");
    return 0;
}

/* Exported Object: keymaster::Logger::instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster6Logger9instance_E = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::HandleAad(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation9HandleAadERKNS_16AuthorizationSetERKNS_6BufferEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation9HandleAadERKNS_16AuthorizationSetERKNS_6BufferEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::ec_get_group(keymaster_ec_curve_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12ec_get_groupE20keymaster_ec_curve_t(void) {
    ALOGD("_ZN9keymaster12ec_get_groupE20keymaster_ec_curve_t() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Demangled: keymaster::is_public_key_algorithm(keymaster::AuthProxy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23is_public_key_algorithmERKNS_9AuthProxyE(void) {
    ALOGD("_ZN9keymaster23is_public_key_algorithmERKNS_9AuthProxyE() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperation::GetOpensslPadding(keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21RsaDigestingOperation17GetOpensslPaddingEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster21RsaDigestingOperation17GetOpensslPaddingEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::KM_WRAPPED_KEY_DESCRIPTION_free(keymaster::km_wrapped_key_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster31KM_WRAPPED_KEY_DESCRIPTION_freeEPNS_26km_wrapped_key_descriptionE(void) {
    ALOGD("_ZN9keymaster31KM_WRAPPED_KEY_DESCRIPTION_freeEPNS_26km_wrapped_key_descriptionE() called");
    return 0;
}

/* Demangled: keymaster::Buffer::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster6Buffer14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueEnum(keymaster_tag_t, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportWrappedKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster24ImportWrappedKeyResponseE = NULL;

/* Demangled: keymaster::GenerateRandom(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14GenerateRandomEPhm(void) {
    ALOGD("_ZN9keymaster14GenerateRandomEPhm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USAGE_EXPIRE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE = NULL;

/* Demangled: keymaster::HmacKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster14HmacKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void) {
    ALOGD("_ZNK9keymaster14HmacKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster6RsaKeyE = NULL;

/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::CopyIndirectData() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet16CopyIndirectDataEv() called");
    return 0;
}

/* Demangled: keymaster::KM_ROOT_OF_TRUST_free(keymaster::km_root_of_trust*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21KM_ROOT_OF_TRUST_freeEPNS_16km_root_of_trustE(void) {
    ALOGD("_ZN9keymaster21KM_ROOT_OF_TRUST_freeEPNS_16km_root_of_trustE() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::ProcessBufferedAadBlock(keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation23ProcessBufferedAadBlockEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation23ProcessBufferedAadBlockEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster21HmacSharingParameters14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17VerificationToken14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17VerificationToken14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::FillBufferedAadBlock(keymaster_blob_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation20FillBufferedAadBlockEP16keymaster_blob_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation20FillBufferedAadBlockEP16keymaster_blob_t() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::BufferCandidateTagData(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation22BufferCandidateTagDataEPKhm(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation22BufferCandidateTagDataEPKhm() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::ChooseGroup(keymaster_ec_curve_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12EcKeyFactory11ChooseGroupE20keymaster_ec_curve_t(void) {
    ALOGD("_ZN9keymaster12EcKeyFactory11ChooseGroupE20keymaster_ec_curve_t() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::BeginOperation(keymaster::BeginOperationRequest const&, keymaster::BeginOperationResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster14BeginOperationERKNS_21BeginOperationRequestEPNS_22BeginOperationResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster14BeginOperationERKNS_21BeginOperationRequestEPNS_22BeginOperationResponseE() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Reinitialize(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer12ReinitializeEPKvm(void) {
    ALOGD("_ZN9keymaster6Buffer12ReinitializeEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AsymmetricKeyFactory::SupportedImportFormats(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20AsymmetricKeyFactory22SupportedImportFormatsEPm(void) {
    ALOGD("_ZNK9keymaster20AsymmetricKeyFactory22SupportedImportFormatsEPm() called");
    return 0;
}

/* Demangled: keymaster::KM_WRAPPED_KEY_new() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18KM_WRAPPED_KEY_newEv(void) {
    ALOGD("_ZN9keymaster18KM_WRAPPED_KEY_newEv() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperation::RsaDigestingOperation(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster_purpose_t, keymaster_digest_t, keymaster_padding_t, evp_pkey_st*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21RsaDigestingOperationC2EONS_16AuthorizationSetES2_19keymaster_purpose_t18keymaster_digest_t19keymaster_padding_tP11evp_pkey_st(void) {
    ALOGD("_ZN9keymaster21RsaDigestingOperationC2EONS_16AuthorizationSetES2_19keymaster_purpose_t18keymaster_digest_t19keymaster_padding_tP11evp_pkey_st() called");
    return 0;
}

/* Demangled: keymaster::TripleDesKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19TripleDesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster19TripleDesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::RsaCryptOperation::SetOaepDigestIfRequired(evp_pkey_ctx_st*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17RsaCryptOperation23SetOaepDigestIfRequiredEP15evp_pkey_ctx_st(void) {
    ALOGD("_ZN9keymaster17RsaCryptOperation23SetOaepDigestIfRequiredEP15evp_pkey_ctx_st() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::DeleteAllKeys(keymaster::DeleteAllKeysRequest const&, keymaster::DeleteAllKeysResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster13DeleteAllKeysERKNS_20DeleteAllKeysRequestEPNS_21DeleteAllKeysResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster13DeleteAllKeysERKNS_20DeleteAllKeysRequestEPNS_21DeleteAllKeysResponseE() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AddEntropyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17AddEntropyRequestE = NULL;

/* Demangled: keymaster::OcbEncryptKey(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13OcbEncryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferEPS5_PS8_(void) {
    ALOGD("_ZN9keymaster13OcbEncryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferEPS5_PS8_() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ParseOcbAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25ParseOcbAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_(void) {
    ALOGD("_ZN9keymaster25ParseOcbAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_() called");
    return 0;
}

/* Demangled: keymaster::KM_KEY_DESCRIPTION_new() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22KM_KEY_DESCRIPTION_newEv(void) {
    ALOGD("_ZN9keymaster22KM_KEY_DESCRIPTION_newEv() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD0Ev() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GenerateKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19GenerateKeyResponseE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MANUFACTURER */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE = NULL;

/* Demangled: keymaster::Rfc5869Sha256Kdf::GenerateKey(unsigned char const*, unsigned long, unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16Rfc5869Sha256Kdf11GenerateKeyEPKhmPhm(void) {
    ALOGD("_ZN9keymaster16Rfc5869Sha256Kdf11GenerateKeyEPKhmPhm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaVerifyOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18RsaVerifyOperationE = NULL;

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD2Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Deduplicate() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11DeduplicateEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11DeduplicateEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcdsaOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster14EcdsaOperationE = NULL;

/* Demangled: keymaster::RsaKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13RsaKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster13RsaKeyFactory19GetOperationFactoryE19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: keymaster::RsaCryptingOperationFactory::SupportedPaddingModes(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27RsaCryptingOperationFactory21SupportedPaddingModesEPm(void) {
    ALOGD("_ZNK9keymaster27RsaCryptingOperationFactory21SupportedPaddingModesEPm() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::OperationFactory::GetAndValidateDigest(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_digest_t*, keymaster_error_t*, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_tb(void) {
    ALOGD("_ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_tb() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::SupportedBlockModes(keymaster::SupportedBlockModesRequest const&, keymaster::SupportedBlockModesResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster19SupportedBlockModesERKNS_26SupportedBlockModesRequestEPNS_27SupportedBlockModesResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster19SupportedBlockModesERKNS_26SupportedBlockModesRequestEPNS_27SupportedBlockModesResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueIntRep(keymaster_tag_t, unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::CreateEmptyKey(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::AsymmetricKey, keymaster::DefaultDelete<keymaster::AsymmetricKey> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster12EcKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE(void) {
    ALOGD("_ZNK9keymaster12EcKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE() called");
    return 0;
}

/* Demangled: keymaster::Kdf::Init(keymaster_digest_t, unsigned char const*, unsigned long, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster3Kdf4InitE18keymaster_digest_tPKhmS3_m(void) {
    ALOGD("_ZN9keymaster3Kdf4InitE18keymaster_digest_tPKhmS3_m() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::~HmacOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperationD2Ev(void) {
    ALOGD("_ZN9keymaster13HmacOperationD2Ev() called");
    return 0;
}

/* Demangled: keymaster::RsaKeyFactory::UpdateImportKeyDescription(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, unsigned long*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13RsaKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_PmPj(void) {
    ALOGD("_ZNK9keymaster13RsaKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_PmPj() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::HmacOperation(keymaster::Key&&, keymaster_purpose_t, keymaster_digest_t, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperationC1EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm(void) {
    ALOGD("_ZN9keymaster13HmacOperationC1EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_INVALID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_INVALIDE = NULL;

/* Exported Object: keymaster::TAG_MAX_USES_PER_BOOT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_MAX_USES_PER_BOOTE = NULL;

/* Demangled: keymaster::RsaVerifyOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18RsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster18RsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ExportKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16ExportKeyRequestE = NULL;

/* Demangled: keymaster::Logger::Error(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger5ErrorEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger5ErrorEPKcz() called");
    return 0;
}

/* Demangled: keymaster::Buffer::read(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer4readEPhm(void) {
    ALOGD("_ZN9keymaster6Buffer4readEPhm() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpEncryptOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpEncryptOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpEncryptOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD2Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD2Ev() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17HardwareAuthToken14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::Rfc5869Sha256Kdf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16Rfc5869Sha256KdfE = NULL;

/* Exported Object: vtable for keymaster::TripleDesOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster25TripleDesOperationFactoryE = NULL;

/* Demangled: keymaster::ec_group_size_bits(ec_key_st*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18ec_group_size_bitsEP9ec_key_st(void) {
    ALOGD("_ZN9keymaster18ec_group_size_bitsEP9ec_key_st() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::ImportKey(keymaster::ImportKeyRequest const&, keymaster::ImportKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster9ImportKeyERKNS_16ImportKeyRequestEPNS_17ImportKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster9ImportKeyERKNS_16ImportKeyRequestEPNS_17ImportKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::NistCurveKeyExchange::CalculateSharedKey(keymaster::Buffer const&, keymaster::Buffer*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyERKNS_6BufferEPS1_(void) {
    ALOGD("_ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyERKNS_6BufferEPS1_() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::SetRsaPaddingInEvpContext(evp_pkey_ctx_st*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperation25SetRsaPaddingInEvpContextEP15evp_pkey_ctx_stb(void) {
    ALOGD("_ZN9keymaster12RsaOperation25SetRsaPaddingInEvpContextEP15evp_pkey_ctx_stb() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MIN_MAC_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_MIN_MAC_LENGTHE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::need_iv() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23BlockCipherEvpOperation7need_ivEv(void) {
    ALOGD("_ZNK9keymaster23BlockCipherEvpOperation7need_ivEv() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::AuthTokenMatches(keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long, int, int, unsigned long, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20KeymasterEnforcement16AuthTokenMatchesERKNS_9AuthProxyERKNS_16AuthorizationSetEmiimb(void) {
    ALOGD("_ZNK9keymaster20KeymasterEnforcement16AuthTokenMatchesERKNS_9AuthProxyERKNS_16AuthorizationSetEmiimb() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::InternalUpdate(unsigned char const*, unsigned long, keymaster::Buffer*, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation14InternalUpdateEPKhmPNS_6BufferEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation14InternalUpdateEPKhmPNS_6BufferEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::Abort() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation5AbortEv(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation5AbortEv() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::GetCurveAndSize(keymaster::AuthorizationSet const&, keymaster_ec_curve_t*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12EcKeyFactory15GetCurveAndSizeERKNS_16AuthorizationSetEP20keymaster_ec_curve_tPj(void) {
    ALOGD("_ZN9keymaster12EcKeyFactory15GetCurveAndSizeERKNS_16AuthorizationSetEP20keymaster_ec_curve_tPj() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::Verify(unsigned char const*, unsigned long, unsigned char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster10HmacSha2566VerifyEPKhmS2_m(void) {
    ALOGD("_ZNK9keymaster10HmacSha2566VerifyEPKhmS2_m() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::GetKeyCharacteristics(keymaster::GetKeyCharacteristicsRequest const&, keymaster::GetKeyCharacteristicsResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster21GetKeyCharacteristicsERKNS_28GetKeyCharacteristicsRequestEPNS_29GetKeyCharacteristicsResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster21GetKeyCharacteristicsERKNS_28GetKeyCharacteristicsRequestEPNS_29GetKeyCharacteristicsResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueBlob(keymaster_tag_t, keymaster_blob_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_NO_AUTH_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_NO_AUTH_REQUIREDE = NULL;

/* Exported Object: keymaster::TAG_DEVICE_UNIQUE_ATTESTATION */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE = NULL;

/* Demangled: keymaster::AesEvpCipherDescription::SupportedBlockModes(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23AesEvpCipherDescription19SupportedBlockModesEPm(void) {
    ALOGD("_ZNK9keymaster23AesEvpCipherDescription19SupportedBlockModesEPm() called");
    return 0;
}

/* Demangled: keymaster::OperationTable::Delete(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14OperationTable6DeleteEm(void) {
    ALOGD("_ZN9keymaster14OperationTable6DeleteEm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpgradeKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17UpgradeKeyRequestE = NULL;

/* Exported Object: keymaster::TAG_INCLUDE_UNIQUE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE = NULL;

/* Demangled: keymaster::OperationFactory::supported(keymaster_block_mode_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory9supportedE22keymaster_block_mode_t(void) {
    ALOGD("_ZNK9keymaster16OperationFactory9supportedE22keymaster_block_mode_t() called");
    return 0;
}

/* Demangled: keymaster::generate_attestation_from_EVP(evp_pkey_st const*, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AttestationRecordContext const&, unsigned int, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29generate_attestation_from_EVPEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_RKNS_24AttestationRecordContextEjRK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE(void) {
    ALOGD("_ZN9keymaster29generate_attestation_from_EVPEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_RKNS_24AttestationRecordContextEjRK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AttestKey(keymaster::AttestKeyRequest const&, keymaster::AttestKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster9AttestKeyERKNS_16AttestKeyRequestEPNS_17AttestKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster9AttestKeyERKNS_16AttestKeyRequestEPNS_17AttestKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::KeymasterResponse::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17VerificationToken11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet4SortEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet4SortEv() called");
    return 0;
}

/* Demangled: keymaster::i2d_KM_KEY_DESCRIPTION(keymaster::km_key_description*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22i2d_KM_KEY_DESCRIPTIONEPNS_18km_key_descriptionEPPh(void) {
    ALOGD("_ZN9keymaster22i2d_KM_KEY_DESCRIPTIONEPNS_18km_key_descriptionEPPh() called");
    return 0;
}

/* Demangled: keymaster::RsaEncryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19RsaEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster19RsaEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParametersArray::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AttestKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17AttestKeyResponseE = NULL;

/* Exported Object: keymaster::TAG_BLOCK_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_BLOCK_MODEE = NULL;

/* Demangled: keymaster::OperationFactory::GetAndValidatePadding(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_padding_t*, keymaster_error_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory21GetAndValidatePaddingERKNS_16AuthorizationSetERKNS_3KeyEP19keymaster_padding_tP17keymaster_error_t(void) {
    ALOGD("_ZNK9keymaster16OperationFactory21GetAndValidatePaddingERKNS_16AuthorizationSetERKNS_3KeyEP19keymaster_padding_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::EcdsaVerifyOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20EcdsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster20EcdsaVerifyOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Demangled: keymaster::parse_wrapped_key(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t>*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::TKeymasterBlob<keymaster_blob_t>*, keymaster::AuthorizationSet*, keymaster_key_format_t*, keymaster::TKeymasterBlob<keymaster_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17parse_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPNS0_I16keymaster_blob_tEEPS2_S8_S7_PNS_16AuthorizationSetEP22keymaster_key_format_tS7_(void) {
    ALOGD("_ZN9keymaster17parse_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPNS0_I16keymaster_blob_tEEPS2_S8_S7_PNS_16AuthorizationSetEP22keymaster_key_format_tS7_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::ComputeSharedHmac(keymaster::ComputeSharedHmacRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster17ComputeSharedHmacERKNS_24ComputeSharedHmacRequestE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster17ComputeSharedHmacERKNS_24ComputeSharedHmacRequestE() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16ExportKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::DeviceLocked(keymaster::DeviceLockedRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster12DeviceLockedERKNS_19DeviceLockedRequestE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster12DeviceLockedERKNS_19DeviceLockedRequestE() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_UNLOCKED_DEVICE_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE = NULL;

/* Demangled: keymaster::RsaOperation::StoreData(keymaster::Buffer const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperation9StoreDataERKNS_6BufferEPm(void) {
    ALOGD("_ZN9keymaster12RsaOperation9StoreDataERKNS_6BufferEPm() called");
    return 0;
}

/* Demangled: keymaster::RsaSignOperation::SignDigested(keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16RsaSignOperation12SignDigestedEPNS_6BufferE(void) {
    ALOGD("_ZN9keymaster16RsaSignOperation12SignDigestedEPNS_6BufferE() called");
    return 0;
}

/* Exported Object: vtable for keymaster::TripleDesKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19TripleDesKeyFactoryE = NULL;

/* Demangled: keymaster::AndroidKeymaster::SupportedExportFormats(keymaster::SupportedExportFormatsRequest const&, keymaster::SupportedExportFormatsResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster22SupportedExportFormatsERKNS_29SupportedExportFormatsRequestEPNS_30SupportedExportFormatsResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster22SupportedExportFormatsERKNS_29SupportedExportFormatsRequestEPNS_30SupportedExportFormatsResponseE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::Configure(keymaster::ConfigureRequest const&, keymaster::ConfigureResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster9ConfigureERKNS_16ConfigureRequestEPNS_17ConfigureResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster9ConfigureERKNS_16ConfigureRequestEPNS_17ConfigureResponseE() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HmacSharingParametersArray */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster26HmacSharingParametersArrayE = NULL;

/* Exported Object: vtable for keymaster::Buffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster6BufferE = NULL;

/* Demangled: keymaster::memcmp_s(void const*, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8memcmp_sEPKvS1_m(void) {
    ALOGD("_ZN9keymaster8memcmp_sEPKvS1_m() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MEID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::BlockCipherEvpOperation(keymaster_purpose_t, keymaster_block_mode_t, keymaster_padding_t, bool, unsigned long, keymaster::Key&&, keymaster::EvpCipherDescription const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperationC2E19keymaster_purpose_t22keymaster_block_mode_t19keymaster_padding_tbmONS_3KeyERKNS_20EvpCipherDescriptionE(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperationC2E19keymaster_purpose_t22keymaster_block_mode_t19keymaster_padding_tbmONS_3KeyERKNS_20EvpCipherDescriptionE() called");
    return 0;
}

/* Demangled: keymaster::EcdsaSignOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18EcdsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster18EcdsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Demangled: keymaster::parse_root_of_trust(unsigned char const*, unsigned long, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19parse_root_of_trustEPKhmP16keymaster_blob_tP25keymaster_verified_boot_tPb(void) {
    ALOGD("_ZN9keymaster19parse_root_of_trustEPKhmP16keymaster_blob_tP25keymaster_verified_boot_tPb() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19RsaOperationFactoryE = NULL;

/* Demangled: keymaster::UpgradeKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BlockCipherEvpEncryptOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster30BlockCipherEvpEncryptOperationE = NULL;

/* Demangled: keymaster::AndroidKeymaster::GenerateKey(keymaster::GenerateKeyRequest const&, keymaster::GenerateKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster11GenerateKeyERKNS_18GenerateKeyRequestEPNS_19GenerateKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster11GenerateKeyERKNS_18GenerateKeyRequestEPNS_19GenerateKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::reserve_indirect(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet16reserve_indirectEm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet16reserve_indirectEm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5ClearEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5ClearEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::FreeData() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet8FreeDataEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet8FreeDataEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::reserve_elems(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet13reserve_elemsEm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet13reserve_elemsEm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster12EcKeyFactoryE = NULL;

/* Demangled: keymaster::NistCurveKeyExchange::NistCurveKeyExchange(ec_key_st*, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20NistCurveKeyExchangeC2EP9ec_key_stP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster20NistCurveKeyExchangeC2EP9ec_key_stP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::RsaSignOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16RsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster16RsaSignOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD0Ev() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_PRODUCT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE = NULL;

/* Demangled: keymaster::AndroidKeymaster::LoadKey(keymaster_key_blob_t const&, keymaster::AuthorizationSet const&, keymaster::KeyFactory const**, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster7LoadKeyERK20keymaster_key_blob_tRKNS_16AuthorizationSetEPPKNS_10KeyFactoryEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISC_EEEE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster7LoadKeyERK20keymaster_key_blob_tRKNS_16AuthorizationSetEPPKNS_10KeyFactoryEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISC_EEEE() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::ContainsIntValue(keymaster_tag_t, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_IDENTITY_CREDENTIAL_KEY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE = NULL;

/* Demangled: keymaster::parse_attestation_record(unsigned char const*, unsigned long, unsigned int*, keymaster_security_level_t*, unsigned int*, keymaster_security_level_t*, keymaster_blob_t*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*, keymaster_blob_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24parse_attestation_recordEPKhmPjP26keymaster_security_level_tS2_S4_P16keymaster_blob_tPNS_16AuthorizationSetES8_S6_(void) {
    ALOGD("_ZN9keymaster24parse_attestation_recordEPKhmPjP26keymaster_security_level_tS2_S4_P16keymaster_blob_tPNS_16AuthorizationSetES8_S6_() called");
    return 0;
}

/* Demangled: keymaster::KeyMaterialToEvpKey(keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster_algorithm_t, keymaster::UniquePtr<evp_pkey_st, keymaster::OpenSslObjectDeleter<evp_pkey_st, void, &EVP_PKEY_free> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19KeyMaterialToEvpKeyE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEE21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS8_vXadL_Z13EVP_PKEY_freeEEEEEE(void) {
    ALOGD("_ZN9keymaster19KeyMaterialToEvpKeyE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEE21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS8_vXadL_Z13EVP_PKEY_freeEEEEEE() called");
    return 0;
}

/* Demangled: keymaster::RsaVerifyOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18RsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster18RsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::i2d_KM_WRAPPED_KEY_DESCRIPTION(keymaster::km_wrapped_key_description*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30i2d_KM_WRAPPED_KEY_DESCRIPTIONEPNS_26km_wrapped_key_descriptionEPPh(void) {
    ALOGD("_ZN9keymaster30i2d_KM_WRAPPED_KEY_DESCRIPTIONEPNS_26km_wrapped_key_descriptionEPPh() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AsymmetricKeyFactory::SupportedExportFormats(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20AsymmetricKeyFactory22SupportedExportFormatsEPm(void) {
    ALOGD("_ZNK9keymaster20AsymmetricKeyFactory22SupportedExportFormatsEPm() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster6Buffer11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_BLOB_USAGE_REQUIREMENTS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::ProcessAadBlocks(unsigned char const*, unsigned long, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation16ProcessAadBlocksEPKhmP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation16ProcessAadBlocksEPKhmP17keymaster_error_t() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcdsaVerifyOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20EcdsaVerifyOperationE = NULL;

/* Demangled: keymaster::EciesKem::EciesKem(keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKemC2ERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster8EciesKemC2ERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaDigestingOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21RsaDigestingOperationE = NULL;

/* Demangled: keymaster::ExportKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AccessTimeMap::LastKeyAccessTime(unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13AccessTimeMap17LastKeyAccessTimeEmPj(void) {
    ALOGD("_ZNK9keymaster13AccessTimeMap17LastKeyAccessTimeEmPj() called");
    return 0;
}

/* Demangled: keymaster::generate_attestation(keymaster::AsymmetricKey const&, keymaster::AuthorizationSet const&, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::AttestationRecordContext const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20generate_attestationERKNS_13AsymmetricKeyERKNS_16AuthorizationSetERK22keymaster_cert_chain_tRK20keymaster_key_blob_tRKNS_24AttestationRecordContextEPNS_9UniquePtrIS6_NS_22CertificateChainDeleteEEE(void) {
    ALOGD("_ZN9keymaster20generate_attestationERKNS_13AsymmetricKeyERKNS_16AuthorizationSetERK22keymaster_cert_chain_tRK20keymaster_key_blob_tRKNS_24AttestationRecordContextEPNS_9UniquePtrIS6_NS_22CertificateChainDeleteEEE() called");
    return 0;
}

/* Demangled: keymaster::HmacKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster14HmacKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster14HmacKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueLong(keymaster_tag_t, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::HmacOperation(keymaster::Key&&, keymaster_purpose_t, keymaster_digest_t, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperationC2EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm(void) {
    ALOGD("_ZN9keymaster13HmacOperationC2EONS_3KeyE19keymaster_purpose_t18keymaster_digest_tmm() called");
    return 0;
}

/* Demangled: keymaster::Iso18033Kdf::GenerateKey(unsigned char const*, unsigned long, unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster11Iso18033Kdf11GenerateKeyEPKhmPhm(void) {
    ALOGD("_ZN9keymaster11Iso18033Kdf11GenerateKeyEPKhmPhm() called");
    return 0;
}

/* Demangled: keymaster::EciesKem::Encrypt(keymaster::Buffer const&, keymaster::Buffer*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKem7EncryptERKNS_6BufferEPS1_S4_(void) {
    ALOGD("_ZN9keymaster8EciesKem7EncryptERKNS_6BufferEPS1_S4_() called");
    return 0;
}

/* Demangled: keymaster::NistCurveKeyExchange::NistCurveKeyExchange(ec_key_st*, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20NistCurveKeyExchangeC1EP9ec_key_stP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster20NistCurveKeyExchangeC1EP9ec_key_stP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::VerifyAuthorization(keymaster::VerifyAuthorizationRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AddRngEntropy(keymaster::AddEntropyRequest const&, keymaster::AddEntropyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster13AddRngEntropyERKNS_17AddEntropyRequestEPNS_18AddEntropyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster13AddRngEntropyERKNS_17AddEntropyRequestEPNS_18AddEntropyResponseE() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::KeymasterResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17KeymasterResponseE = NULL;

/* Demangled: keymaster::AesKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13AesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void) {
    ALOGD("_ZNK9keymaster13AesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE() called");
    return 0;
}

/* Demangled: keymaster::RsaSignOperation::SignUndigested(keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16RsaSignOperation14SignUndigestedEPNS_6BufferE(void) {
    ALOGD("_ZN9keymaster16RsaSignOperation14SignUndigestedEPNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterD0Ev(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterD0Ev() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcementD0Ev(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcementD0Ev() called");
    return 0;
}

/* Demangled: keymaster::SymmetricKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19SymmetricKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void) {
    ALOGD("_ZNK9keymaster19SymmetricKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AttestKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16AttestKeyRequestE = NULL;

/* Demangled: keymaster::NistCurveKeyExchange::CalculateSharedKey(unsigned char const*, unsigned long, keymaster::Buffer*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyEPKhmPNS_6BufferE(void) {
    ALOGD("_ZNK9keymaster20NistCurveKeyExchange18CalculateSharedKeyEPKhmPNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::FinishOperation(keymaster::FinishOperationRequest const&, keymaster::FinishOperationResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster15FinishOperationERKNS_22FinishOperationRequestEPNS_23FinishOperationResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster15FinishOperationERKNS_22FinishOperationRequestEPNS_23FinishOperationResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16ImportKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Reinitialize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer12ReinitializeEm(void) {
    ALOGD("_ZN9keymaster6Buffer12ReinitializeEm() called");
    return 0;
}

/* Demangled: keymaster::build_attestation_record(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet, keymaster::AuthorizationSet, keymaster::AttestationRecordContext const&, unsigned int, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEjPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm(void) {
    ALOGD("_ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEjPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm() called");
    return 0;
}

/* Demangled: keymaster::Buffer::available_read() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer14available_readEv(void) {
    ALOGD("_ZNK9keymaster6Buffer14available_readEv() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD0Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MAC_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_MAC_LENGTHE = NULL;

/* Demangled: keymaster::Logger::Debug(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger5DebugEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger5DebugEPKcz() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster27BlockCipherOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster27BlockCipherOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpEncryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpEncryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BlockCipherOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster27BlockCipherOperationFactoryE = NULL;

/* Demangled: keymaster::AndroidKeymaster::ImportWrappedKey(keymaster::ImportWrappedKeyRequest const&, keymaster::ImportWrappedKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster16ImportWrappedKeyERKNS_23ImportWrappedKeyRequestEPNS_24ImportWrappedKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster16ImportWrappedKeyERKNS_23ImportWrappedKeyRequestEPNS_24ImportWrappedKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueBool(keymaster_tag_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::SetKeyBlobAuthorizations(keymaster::AuthorizationSet const&, keymaster_key_origin_t, unsigned int, unsigned int, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24SetKeyBlobAuthorizationsERKNS_16AuthorizationSetE22keymaster_key_origin_tjjPS0_S4_(void) {
    ALOGD("_ZN9keymaster24SetKeyBlobAuthorizationsERKNS_16AuthorizationSetE22keymaster_key_origin_tjjPS0_S4_() called");
    return 0;
}

/* Demangled: keymaster::AesEvpCipherDescription::GetCipherInstance(unsigned long, keymaster_block_mode_t, keymaster_error_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23AesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t(void) {
    ALOGD("_ZNK9keymaster23AesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::EcdsaVerifyOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20EcdsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster20EcdsaVerifyOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::RsaKey::SupportedMode(keymaster_purpose_t, keymaster_padding_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t19keymaster_padding_t(void) {
    ALOGD("_ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t19keymaster_padding_t() called");
    return 0;
}

/* Demangled: keymaster::RsaCryptingOperationFactory::CreateRsaOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster27RsaCryptingOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster27RsaCryptingOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Exported Object: vtable for keymaster::TripleDesEvpCipherDescription */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster29TripleDesEvpCipherDescriptionE = NULL;

/* Demangled: keymaster::KeymasterEnforcement::MaxUsesPerBootNotExceeded(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcement25MaxUsesPerBootNotExceededEmj(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcement25MaxUsesPerBootNotExceededEmj() called");
    return 0;
}

/* Demangled: keymaster::TripleDesKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19TripleDesKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster19TripleDesKeyFactory19GetOperationFactoryE19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USER_SECURE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_USER_SECURE_IDE = NULL;

/* Exported Object: vtable for keymaster::AsymmetricKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster13AsymmetricKeyE = NULL;

/* Demangled: keymaster::AuthorizationSet::operator[](int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetixEi(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetixEi() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaDecryptOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19RsaDecryptOperationE = NULL;

/* Demangled: keymaster::FinishOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::EvpKeyToKeyMaterial(evp_pkey_st const*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19EvpKeyToKeyMaterialEPK11evp_pkey_stPNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void) {
    ALOGD("_ZN9keymaster19EvpKeyToKeyMaterialEPK11evp_pkey_stPNS_14TKeymasterBlobI20keymaster_key_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappingMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::Buffer::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer7reserveEm(void) {
    ALOGD("_ZN9keymaster6Buffer7reserveEm() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::GetAndValidateAuthToken(keymaster::AuthorizationSet const&, hw_auth_token_t const**, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20KeymasterEnforcement23GetAndValidateAuthTokenERKNS_16AuthorizationSetEPPK15hw_auth_token_tPj(void) {
    ALOGD("_ZNK9keymaster20KeymasterEnforcement23GetAndValidateAuthTokenERKNS_16AuthorizationSetEPPK15hw_auth_token_tPj() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::GetIv(keymaster::AuthorizationSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation5GetIvERKNS_16AuthorizationSetE(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation5GetIvERKNS_16AuthorizationSetE() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BlockCipherEvpOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23BlockCipherEvpOperationE = NULL;

/* Demangled: keymaster::EcKeyFactory::ChooseGroup(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12EcKeyFactory11ChooseGroupEm(void) {
    ALOGD("_ZN9keymaster12EcKeyFactory11ChooseGroupEm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaSignOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16RsaSignOperationE = NULL;

/* Demangled: keymaster::ExportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::EcCurveToKeySize(keymaster_ec_curve_t, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj(void) {
    ALOGD("_ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer5ClearEv(void) {
    ALOGD("_ZN9keymaster6Buffer5ClearEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AesEvpCipherDescription */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23AesEvpCipherDescriptionE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueInt(keymaster_tag_t, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::AuthorizeBegin(keymaster_purpose_t, unsigned long, keymaster::AuthProxy const&, keymaster::AuthorizationSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcement14AuthorizeBeginE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetE(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcement14AuthorizeBeginE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetE() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AsymmetricKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20AsymmetricKeyFactoryE = NULL;

/* Demangled: keymaster::d2i_KM_ROOT_OF_TRUST(keymaster::km_root_of_trust**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20d2i_KM_ROOT_OF_TRUSTEPPNS_16km_root_of_trustEPPKhl(void) {
    ALOGD("_ZN9keymaster20d2i_KM_ROOT_OF_TRUSTEPPNS_16km_root_of_trustEPPKhl() called");
    return 0;
}

/* Demangled: keymaster::Kdf::Kdf() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster3KdfC2Ev(void) {
    ALOGD("_ZN9keymaster3KdfC2Ev() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::set_invalid(keymaster::AuthorizationSet::Error) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ORIGIN */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster10TAG_ORIGINE = NULL;

/* Demangled: keymaster::SerializeAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster26SerializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_RKNS_6BufferESA_PS2_(void) {
    ALOGD("_ZN9keymaster26SerializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_RKNS_6BufferESA_PS2_() called");
    return 0;
}

/* Demangled: keymaster::TripleDesEvpCipherDescription::SupportedBlockModes(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29TripleDesEvpCipherDescription19SupportedBlockModesEPm(void) {
    ALOGD("_ZNK9keymaster29TripleDesEvpCipherDescription19SupportedBlockModesEPm() called");
    return 0;
}

/* Demangled: keymaster::GetVersionResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: ae_free */
extern "C" __attribute__((visibility("default"))) int ae_free(void) {
    ALOGD("ae_free() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_DIGEST_OLD */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_DIGEST_OLDE = NULL;

/* Demangled: gen_offset */
extern "C" __attribute__((visibility("default"))) int gen_offset(void) {
    ALOGD("gen_offset() called");
    return 0;
}

/* Demangled: keymaster::EcdsaSignOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18EcdsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster18EcdsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AndroidKeymaster */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16AndroidKeymasterE = NULL;

/* Demangled: keymaster::BeginOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster21BeginOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::KeymasterEnforcement */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20KeymasterEnforcementE = NULL;

/* Demangled: keymaster::NistCurveKeyExchange::public_value(keymaster::Buffer*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20NistCurveKeyExchange12public_valueEPNS_6BufferE(void) {
    ALOGD("_ZNK9keymaster20NistCurveKeyExchange12public_valueEPNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD1Ev() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::KM_ROOT_OF_TRUST_new() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KM_ROOT_OF_TRUST_newEv(void) {
    ALOGD("_ZN9keymaster20KM_ROOT_OF_TRUST_newEv() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster12RsaOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GetKeyCharacteristicsRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster28GetKeyCharacteristicsRequestE = NULL;

/* Demangled: keymaster::EcKeySizeToCurve(unsigned int, keymaster_ec_curve_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t(void) {
    ALOGD("_ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_APPLICATION_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_APPLICATION_DATAE = NULL;

/* Exported Object: keymaster::TAG_UNIQUE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_UNIQUE_IDE = NULL;

/* Demangled: keymaster::RsaKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13RsaKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void) {
    ALOGD("_ZNK9keymaster13RsaKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::AndroidKeymaster&&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterC2EOS0_(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterC2EOS0_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD0Ev() called");
    return 0;
}

/* Demangled: keymaster::DeserializeIntegrityAssuredBlob_NoHmacCheck(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster43DeserializeIntegrityAssuredBlob_NoHmacCheckERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_(void) {
    ALOGD("_ZN9keymaster43DeserializeIntegrityAssuredBlob_NoHmacCheckERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_OS_PATCHLEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster17TAG_OS_PATCHLEVELE = NULL;

/* Exported Object: keymaster::TAG_PADDING */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_PADDINGE = NULL;

/* Demangled: keymaster::HmacKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster14HmacKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster14HmacKeyFactory19GetOperationFactoryE19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueEnumRep(keymaster_tag_t, unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ACTIVE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_ACTIVE_DATETIMEE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MODEL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster24TAG_ATTESTATION_ID_MODELE = NULL;

/* Demangled: keymaster::HmacOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster13HmacOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16ImportKeyRequestE = NULL;

/* Demangled: keymaster::EcdsaOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21EcdsaOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster21EcdsaOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::UpdateOperation(keymaster::UpdateOperationRequest const&, keymaster::UpdateOperationResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster15UpdateOperationERKNS_22UpdateOperationRequestEPNS_23UpdateOperationResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster15UpdateOperationERKNS_22UpdateOperationRequestEPNS_23UpdateOperationResponseE() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::RsaKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13RsaKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void) {
    ALOGD("_ZNK9keymaster13RsaKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_() called");
    return 0;
}

/* Demangled: keymaster::RsaSignOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16RsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster16RsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterD1Ev(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::ComputeIndirectDataSize(keymaster_key_param_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::MinTimeBetweenOpsPassed(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcement23MinTimeBetweenOpsPassedEjm(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcement23MinTimeBetweenOpsPassedEjm() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcementD1Ev(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcementD1Ev() called");
    return 0;
}

/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list(void) {
    ALOGD("_ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14EcdsaOperationD0Ev(void) {
    ALOGD("_ZN9keymaster14EcdsaOperationD0Ev() called");
    return 0;
}

/* Demangled: keymaster::SoftwareRandomSource::GenerateRandom(unsigned char*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20SoftwareRandomSource14GenerateRandomEPhm(void) {
    ALOGD("_ZNK9keymaster20SoftwareRandomSource14GenerateRandomEPhm() called");
    return 0;
}

/* Demangled: keymaster::SerializeIntegrityAssuredBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29SerializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_S7_PS2_(void) {
    ALOGD("_ZN9keymaster29SerializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetES7_S7_PS2_() called");
    return 0;
}

/* Demangled: keymaster::BuildHiddenAuthorizations(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*, keymaster::TKeymasterBlob<keymaster_blob_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25BuildHiddenAuthorizationsERKNS_16AuthorizationSetEPS0_RKNS_14TKeymasterBlobI16keymaster_blob_tEE(void) {
    ALOGD("_ZN9keymaster25BuildHiddenAuthorizationsERKNS_16AuthorizationSetEPS0_RKNS_14TKeymasterBlobI16keymaster_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperationD0Ev(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperationD0Ev() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaDigestingOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster28RsaDigestingOperationFactoryE = NULL;

/* Demangled: keymaster::KeymasterEnforcement::AuthorizeOperation(keymaster_purpose_t, unsigned long, keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcement18AuthorizeOperationE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetEmb(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcement18AuthorizeOperationE19keymaster_purpose_tmRKNS_9AuthProxyERKNS_16AuthorizationSetEmb() called");
    return 0;
}

/* Demangled: keymaster::KM_AUTH_LIST_new() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16KM_AUTH_LIST_newEv(void) {
    ALOGD("_ZN9keymaster16KM_AUTH_LIST_newEv() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21RsaDigestingOperationD0Ev(void) {
    ALOGD("_ZN9keymaster21RsaDigestingOperationD0Ev() called");
    return 0;
}

/* Exported Object: vtable for keymaster::SymmetricKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19SymmetricKeyFactoryE = NULL;

/* Demangled: keymaster::ImportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AesKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13AesKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster13AesKeyFactory19GetOperationFactoryE19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::InitializeCipher(keymaster::TKeymasterBlob<keymaster_key_blob_t>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation16InitializeCipherENS_14TKeymasterBlobI20keymaster_key_blob_tEE(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation16InitializeCipherENS_14TKeymasterBlobI20keymaster_key_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::AuthorizeUpdateOrFinish(keymaster::AuthProxy const&, keymaster::AuthorizationSet const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcement23AuthorizeUpdateOrFinishERKNS_9AuthProxyERKNS_16AuthorizationSetEm(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcement23AuthorizeUpdateOrFinishERKNS_9AuthProxyERKNS_16AuthorizationSetEm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ALL_APPLICATIONS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_ALL_APPLICATIONSE = NULL;

/* Exported Object: keymaster::TAG_APPLICATION_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_APPLICATION_IDE = NULL;

/* Demangled: keymaster::i2d_KM_ROOT_OF_TRUST(keymaster::km_root_of_trust*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20i2d_KM_ROOT_OF_TRUSTEPNS_16km_root_of_trustEPPh(void) {
    ALOGD("_ZN9keymaster20i2d_KM_ROOT_OF_TRUSTEPNS_16km_root_of_trustEPPh() called");
    return 0;
}

/* Demangled: keymaster::EciesKem::Decrypt(ec_key_st*, unsigned char const*, unsigned long, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKem7DecryptEP9ec_key_stPKhmPNS_6BufferE(void) {
    ALOGD("_ZN9keymaster8EciesKem7DecryptEP9ec_key_stPKhmPNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::TripleDesEvpCipherDescription::GetCipherInstance(unsigned long, keymaster_block_mode_t, keymaster_error_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29TripleDesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t(void) {
    ALOGD("_ZNK9keymaster29TripleDesEvpCipherDescription17GetCipherInstanceEm22keymaster_block_mode_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HmacSharingParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21HmacSharingParametersE = NULL;

/* Exported Object: vtable for keymaster::VerificationToken */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17VerificationTokenE = NULL;

/* Exported Object: vtable for keymaster::AuthorizationSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16AuthorizationSetE = NULL;

/* Demangled: ae_decrypt */
extern "C" __attribute__((visibility("default"))) int ae_decrypt(void) {
    ALOGD("ae_decrypt() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AesOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19AesOperationFactoryE = NULL;

/* Demangled: keymaster::TripleDesOperationFactory::GetCipherDescription() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster25TripleDesOperationFactory20GetCipherDescriptionEv(void) {
    ALOGD("_ZNK9keymaster25TripleDesOperationFactory20GetCipherDescriptionEv() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD0Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD0Ev() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GetVersionResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18GetVersionResponseE = NULL;

/* Demangled: keymaster::Buffer::write(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer5writeEPKhm(void) {
    ALOGD("_ZN9keymaster6Buffer5writeEPKhm() called");
    return 0;
}

/* Demangled: ae_encrypt */
extern "C" __attribute__((visibility("default"))) int ae_encrypt(void) {
    ALOGD("ae_encrypt() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster12EcKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void) {
    ALOGD("_ZNK9keymaster12EcKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::UpgradeKey(keymaster::UpgradeKeyRequest const&, keymaster::UpgradeKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster10UpgradeKeyERKNS_17UpgradeKeyRequestEPNS_18UpgradeKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster10UpgradeKeyERKNS_17UpgradeKeyRequestEPNS_18UpgradeKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::dup_buffer(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster10dup_bufferEPKvm(void) {
    ALOGD("_ZN9keymaster10dup_bufferEPKvm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GetKeyCharacteristicsResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster29GetKeyCharacteristicsResponseE = NULL;

/* Exported Object: keymaster::TAG_KEY_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster12TAG_KEY_SIZEE = NULL;

/* Demangled: keymaster::KM_WRAPPED_KEY_free(keymaster::km_wrapped_key*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19KM_WRAPPED_KEY_freeEPNS_14km_wrapped_keyE(void) {
    ALOGD("_ZN9keymaster19KM_WRAPPED_KEY_freeEPNS_14km_wrapped_keyE() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappedMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ROLLBACK_RESISTANCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::UpdateForFinish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_P17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_P17keymaster_error_t() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpdateOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22UpdateOperationRequestE = NULL;

/* Demangled: keymaster::EcdsaSignOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18EcdsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster18EcdsaSignOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::SerializedSizeOfElements() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv() called");
    return 0;
}

/* Demangled: keymaster::ParseOldSoftkeymasterBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25ParseOldSoftkeymasterBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_(void) {
    ALOGD("_ZN9keymaster25ParseOldSoftkeymasterBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_() called");
    return 0;
}

/* Demangled: keymaster::SymmetricKeyFactory::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19SymmetricKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_(void) {
    ALOGD("_ZNK9keymaster19SymmetricKeyFactory11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_S8_() called");
    return 0;
}

/* Demangled: keymaster::AsymmetricKey::formatted_key_material(keymaster_key_format_t, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13AsymmetricKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm(void) {
    ALOGD("_ZNK9keymaster13AsymmetricKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperationFactory::SupportedDigests(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21EcdsaOperationFactory16SupportedDigestsEPm(void) {
    ALOGD("_ZNK9keymaster21EcdsaOperationFactory16SupportedDigestsEPm() called");
    return 0;
}

/* Demangled: operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZdlPv(void) {
    ALOGD("_ZdlPv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::DeserializeIndirectData(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster13RsaKeyFactoryE = NULL;

/* Demangled: keymaster::RsaOperation::InitDigest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperation10InitDigestEv(void) {
    ALOGD("_ZN9keymaster12RsaOperation10InitDigestEv() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcdsaOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21EcdsaOperationFactoryE = NULL;

/* Demangled: keymaster::EciesKem::Decrypt(ec_key_st*, keymaster::Buffer const&, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKem7DecryptEP9ec_key_stRKNS_6BufferEPS3_(void) {
    ALOGD("_ZN9keymaster8EciesKem7DecryptEP9ec_key_stRKNS_6BufferEPS3_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Difference(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Union(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Demangled: keymaster::AccessCountMap::IncrementKeyAccessCount(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14AccessCountMap23IncrementKeyAccessCountEm(void) {
    ALOGD("_ZN9keymaster14AccessCountMap23IncrementKeyAccessCountEm() called");
    return 0;
}

/* Demangled: keymaster::KM_AUTH_LIST_free(keymaster::km_auth_list*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17KM_AUTH_LIST_freeEPNS_12km_auth_listE(void) {
    ALOGD("_ZN9keymaster17KM_AUTH_LIST_freeEPNS_12km_auth_listE() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ORIGINATION_EXPIRE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE = NULL;

/* Demangled: keymaster::RsaVerifyOperation::VerifyDigested(keymaster::Buffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18RsaVerifyOperation14VerifyDigestedERKNS_6BufferE(void) {
    ALOGD("_ZN9keymaster18RsaVerifyOperation14VerifyDigestedERKNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AbortOperation(keymaster::AbortOperationRequest const&, keymaster::AbortOperationResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster14AbortOperationERKNS_21AbortOperationRequestEPNS_22AbortOperationResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster14AbortOperationERKNS_21AbortOperationRequestEPNS_22AbortOperationResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueLongRep(keymaster_tag_t, unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm() called");
    return 0;
}

/* Demangled: keymaster::AccessTimeMap::UpdateKeyAccessTime(unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13AccessTimeMap19UpdateKeyAccessTimeEmjj(void) {
    ALOGD("_ZN9keymaster13AccessTimeMap19UpdateKeyAccessTimeEmjj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_PURPOSE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_PURPOSEE = NULL;

/* Demangled: keymaster::DeserializeIntegrityAssuredBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster31DeserializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_(void) {
    ALOGD("_ZN9keymaster31DeserializeIntegrityAssuredBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS2_PS5_S9_() called");
    return 0;
}

/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12SymmetricKeyD0Ev(void) {
    ALOGD("_ZN9keymaster12SymmetricKeyD0Ev() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD1Ev() called");
    return 0;
}

/* Demangled: keymaster::HmacOperationFactory::SupportedDigests(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20HmacOperationFactory16SupportedDigestsEPm(void) {
    ALOGD("_ZNK9keymaster20HmacOperationFactory16SupportedDigestsEPm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_SERIAL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE = NULL;

/* Demangled: keymaster::Logger::Info(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger4InfoEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger4InfoEPKcz() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_IMEI */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE = NULL;

/* Demangled: keymaster::AndroidKeymaster::~AndroidKeymaster() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterD2Ev(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterD2Ev() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::CopyToParamSet(keymaster_key_param_set_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t() called");
    return 0;
}

/* Demangled: keymaster::KeymasterEnforcement::~KeymasterEnforcement() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcementD2Ev(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcementD2Ev() called");
    return 0;
}

/* Demangled: ae_ctx_sizeof */
extern "C" __attribute__((visibility("default"))) int ae_ctx_sizeof(void) {
    ALOGD("ae_ctx_sizeof() called");
    return 0;
}

/* Demangled: keymaster::min(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster3minEmm(void) {
    ALOGD("_ZN9keymaster3minEmm() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14EcdsaOperationD1Ev(void) {
    ALOGD("_ZN9keymaster14EcdsaOperationD1Ev() called");
    return 0;
}

/* Demangled: keymaster::copy_size_and_data_from_buf(unsigned char const**, unsigned char const*, unsigned long*, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE(void) {
    ALOGD("_ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_AUTH_TOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_AUTH_TOKENE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperationD1Ev(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperationD1Ev() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::Sign(keymaster::Buffer const&, unsigned char*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster10HmacSha2564SignERKNS_6BufferEPhm(void) {
    ALOGD("_ZNK9keymaster10HmacSha2564SignERKNS_6BufferEPhm() called");
    return 0;
}

/* Demangled: keymaster::RsaKey::EvpToInternal(evp_pkey_st const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6RsaKey13EvpToInternalEPK11evp_pkey_st(void) {
    ALOGD("_ZN9keymaster6RsaKey13EvpToInternalEPK11evp_pkey_st() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BeginOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22BeginOperationResponseE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_BRAND */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE = NULL;

/* Demangled: keymaster::BlockCipherEvpEncryptOperation::GenerateIv() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpEncryptOperation10GenerateIvEv(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpEncryptOperation10GenerateIvEv() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21RsaDigestingOperationD1Ev(void) {
    ALOGD("_ZN9keymaster21RsaDigestingOperationD1Ev() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD2Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_TRUSTED_CONFIRMATION_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE = NULL;

/* Exported Object: keymaster::TAG_DIGEST */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster10TAG_DIGESTE = NULL;

/* Demangled: keymaster::convert_pkcs8_blob_to_evp(unsigned char const*, unsigned long, keymaster_algorithm_t, keymaster::UniquePtr<evp_pkey_st, keymaster::OpenSslObjectDeleter<evp_pkey_st, void, &EVP_PKEY_free> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25convert_pkcs8_blob_to_evpEPKhm21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS4_vXadL_Z13EVP_PKEY_freeEEEEEE(void) {
    ALOGD("_ZN9keymaster25convert_pkcs8_blob_to_evpEPKhm21keymaster_algorithm_tPNS_9UniquePtrI11evp_pkey_stNS_20OpenSslObjectDeleterIS4_vXadL_Z13EVP_PKEY_freeEEEEEE() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::~RsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperationD0Ev(void) {
    ALOGD("_ZN9keymaster12RsaOperationD0Ev() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::has_operation(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AndroidKeymaster13has_operationEm(void) {
    ALOGD("_ZNK9keymaster16AndroidKeymaster13has_operationEm() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::ProcessAllButTagLengthBytes(keymaster::Buffer const&, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessAllButTagLengthBytesERKNS_6BufferEPS1_(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessAllButTagLengthBytesERKNS_6BufferEPS1_() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster13HmacOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::Kdf::Uint32ToBigEndianByteArray(unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster3Kdf26Uint32ToBigEndianByteArrayEjPh(void) {
    ALOGD("_ZN9keymaster3Kdf26Uint32ToBigEndianByteArrayEjPh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportWrappedKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23ImportWrappedKeyRequestE = NULL;

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::Update(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation6UpdateERKNS_16AuthorizationSetERKNS_6BufferEPS1_PS4_Pm() called");
    return 0;
}

/* Demangled: keymaster::RsaVerifyOperation::VerifyUndigested(keymaster::Buffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18RsaVerifyOperation16VerifyUndigestedERKNS_6BufferE(void) {
    ALOGD("_ZN9keymaster18RsaVerifyOperation16VerifyUndigestedERKNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::KM_WRAPPED_KEY_DESCRIPTION_new() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30KM_WRAPPED_KEY_DESCRIPTION_newEv(void) {
    ALOGD("_ZN9keymaster30KM_WRAPPED_KEY_DESCRIPTION_newEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MIN_SECONDS_BETWEEN_OPS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE = NULL;

/* Demangled: keymaster::FakeKeyAuthorizations(evp_pkey_st*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21FakeKeyAuthorizationsEP11evp_pkey_stPNS_16AuthorizationSetES3_(void) {
    ALOGD("_ZN9keymaster21FakeKeyAuthorizationsEP11evp_pkey_stPNS_16AuthorizationSetES3_() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherOperationFactory::SupportedPaddingModes(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27BlockCipherOperationFactory21SupportedPaddingModesEPm(void) {
    ALOGD("_ZNK9keymaster27BlockCipherOperationFactory21SupportedPaddingModesEPm() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpDecryptOperation::ProcessTagBufContentsAsData(unsigned long, keymaster::Buffer*, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessTagBufContentsAsDataEmPNS_6BufferEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster30BlockCipherEvpDecryptOperation27ProcessTagBufContentsAsDataEmPNS_6BufferEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::Sign(unsigned char const*, unsigned long, unsigned char*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster10HmacSha2564SignEPKhmPhm(void) {
    ALOGD("_ZNK9keymaster10HmacSha2564SignEPKhmPhm() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::EarlyBootEnded() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster14EarlyBootEndedEv(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster14EarlyBootEndedEv() called");
    return 0;
}

/* Demangled: keymaster::KeymasterResponse::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17KeymasterResponse14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17KeymasterResponse14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD1Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::operator[](int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSetixEi(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSetixEi() called");
    return 0;
}

/* Exported Object: keymaster::empty_param */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11empty_paramE = NULL;

/* Demangled: keymaster::ec_get_group_size(ec_group_st const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ec_get_group_sizeEPK11ec_group_stPm(void) {
    ALOGD("_ZN9keymaster17ec_get_group_sizeEPK11ec_group_stPm() called");
    return 0;
}

/* Demangled: keymaster::ckdf(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster_blob_t const*, unsigned long, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4ckdfERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEEPKS5_mPS2_(void) {
    ALOGD("_ZN9keymaster4ckdfERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEEPKS5_mPS2_() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::Abort() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperation5AbortEv(void) {
    ALOGD("_ZN9keymaster13HmacOperation5AbortEv() called");
    return 0;
}

/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BlockCipherEvpDecryptOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster30BlockCipherEvpDecryptOperationE = NULL;

/* Demangled: keymaster::RsaKey::InternalToEvp(evp_pkey_st*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6RsaKey13InternalToEvpEP11evp_pkey_st(void) {
    ALOGD("_ZNK9keymaster6RsaKey13InternalToEvpEP11evp_pkey_st() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::SupportedPaddingModes(keymaster::SupportedPaddingModesRequest const&, keymaster::SupportedPaddingModesResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster21SupportedPaddingModesERKNS_28SupportedPaddingModesRequestEPNS_29SupportedPaddingModesResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster21SupportedPaddingModesERKNS_28SupportedPaddingModesRequestEPNS_29SupportedPaddingModesResponseE() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::RsaKey::SupportedMode(keymaster_purpose_t, keymaster_digest_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t18keymaster_digest_t(void) {
    ALOGD("_ZN9keymaster6RsaKey13SupportedModeE19keymaster_purpose_t18keymaster_digest_t() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_RSA_PUBLIC_EXPONENT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE = NULL;

/* Exported Object: vtable for keymaster::ComputeSharedHmacResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster25ComputeSharedHmacResponseE = NULL;

/* Demangled: keymaster::HmacSharingParametersArray::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ROLLBACK_RESISTANT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster22TAG_ROLLBACK_RESISTANTE = NULL;

/* Exported Object: keymaster::TAG_USER_AUTH_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_USER_AUTH_TYPEE = NULL;

/* Demangled: keymaster::DeserializeAuthEncryptedBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*, keymaster::Buffer*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28DeserializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_PNS_6BufferES9_(void) {
    ALOGD("_ZN9keymaster28DeserializeAuthEncryptedBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS2_PNS_16AuthorizationSetES7_PNS_6BufferES9_() called");
    return 0;
}

/* Demangled: keymaster::d2i_KM_KEY_DESCRIPTION(keymaster::km_key_description**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22d2i_KM_KEY_DESCRIPTIONEPPNS_18km_key_descriptionEPPKhl(void) {
    ALOGD("_ZN9keymaster22d2i_KM_KEY_DESCRIPTIONEPPNS_18km_key_descriptionEPPKhl() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperation::StoreData(keymaster::Buffer const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14EcdsaOperation9StoreDataERKNS_6BufferEPm(void) {
    ALOGD("_ZN9keymaster14EcdsaOperation9StoreDataERKNS_6BufferEPm() called");
    return 0;
}

/* Demangled: keymaster::i2d_KM_WRAPPED_KEY(keymaster::km_wrapped_key*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18i2d_KM_WRAPPED_KEYEPNS_14km_wrapped_keyEPPh(void) {
    ALOGD("_ZN9keymaster18i2d_KM_WRAPPED_KEYEPNS_14km_wrapped_keyEPPh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::DeleteKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16DeleteKeyRequestE = NULL;

/* Demangled: keymaster::KeymasterEnforcement::KeymasterEnforcement(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20KeymasterEnforcementC2Ejj(void) {
    ALOGD("_ZN9keymaster20KeymasterEnforcementC2Ejj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_PADDING_OLD */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster15TAG_PADDING_OLDE = NULL;

/* Demangled: keymaster::AesOperationFactory::GetCipherDescription() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19AesOperationFactory20GetCipherDescriptionEv(void) {
    ALOGD("_ZNK9keymaster19AesOperationFactory20GetCipherDescriptionEv() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::UpdateImportKeyDescription(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster12EcKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_Pj(void) {
    ALOGD("_ZNK9keymaster12EcKeyFactory26UpdateImportKeyDescriptionERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS1_Pj() called");
    return 0;
}

/* Demangled: keymaster::OperationFactory::GetAndValidateDigest(keymaster::AuthorizationSet const&, keymaster::Key const&, keymaster_digest_t*, keymaster_error_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_t(void) {
    ALOGD("_ZNK9keymaster16OperationFactory20GetAndValidateDigestERKNS_16AuthorizationSetERKNS_3KeyEP18keymaster_digest_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperationFactory::SupportedPaddingModes(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster28RsaDigestingOperationFactory21SupportedPaddingModesEPm(void) {
    ALOGD("_ZNK9keymaster28RsaDigestingOperationFactory21SupportedPaddingModesEPm() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::DeleteKey(keymaster::DeleteKeyRequest const&, keymaster::DeleteKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster9DeleteKeyERKNS_16DeleteKeyRequestEPNS_17DeleteKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster9DeleteKeyERKNS_16DeleteKeyRequestEPNS_17DeleteKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster5EcKeyE = NULL;

/* Exported Object: vtable for keymaster::EciesKem */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster8EciesKemE = NULL;

/* Demangled: keymaster::HmacSha256::Verify(keymaster::Buffer const&, keymaster::Buffer const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster10HmacSha2566VerifyERKNS_6BufferES3_(void) {
    ALOGD("_ZNK9keymaster10HmacSha2566VerifyERKNS_6BufferES3_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::SupportedDigests(keymaster::SupportedDigestsRequest const&, keymaster::SupportedDigestsResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster16SupportedDigestsERKNS_23SupportedDigestsRequestEPNS_24SupportedDigestsResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster16SupportedDigestsERKNS_23SupportedDigestsRequestEPNS_24SupportedDigestsResponseE() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::FinishOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22FinishOperationRequestE = NULL;

/* Demangled: keymaster::TranslateLastOpenSslError(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25TranslateLastOpenSslErrorEb(void) {
    ALOGD("_ZN9keymaster25TranslateLastOpenSslErrorEb() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperation::InitDigest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14EcdsaOperation10InitDigestEv(void) {
    ALOGD("_ZN9keymaster14EcdsaOperation10InitDigestEv() called");
    return 0;
}

/* Demangled: keymaster::NistCurveKeyExchange::ExtractPublicKey() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20NistCurveKeyExchange16ExtractPublicKeyEv(void) {
    ALOGD("_ZN9keymaster20NistCurveKeyExchange16ExtractPublicKeyEv() called");
    return 0;
}

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::AndroidKeymaster&&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterC1EOS0_(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterC1EOS0_() called");
    return 0;
}

/* Demangled: keymaster::RsaSignOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16RsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster16RsaSignOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaCryptingOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster27RsaCryptingOperationFactoryE = NULL;

/* Demangled: keymaster::build_wrapped_key(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17build_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEE22keymaster_key_format_tS4_S8_RKNS_16AuthorizationSetEPS2_(void) {
    ALOGD("_ZN9keymaster17build_wrapped_keyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS0_I16keymaster_blob_tEE22keymaster_key_format_tS4_S8_RKNS_16AuthorizationSetEPS2_() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17VerificationToken9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17VerificationToken9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::ContainsEnumValue(keymaster_tag_t, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster12EcKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void) {
    ALOGD("_ZNK9keymaster12EcKeyFactory9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::Iso18033Kdf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster11Iso18033KdfE = NULL;

/* Exported Object: vtable for keymaster::NistCurveKeyExchange */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20NistCurveKeyExchangeE = NULL;

/* Demangled: keymaster::ImportWrappedKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BeginOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21BeginOperationRequestE = NULL;

/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12SymmetricKeyD1Ev(void) {
    ALOGD("_ZN9keymaster12SymmetricKeyD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::i2d_KM_AUTH_LIST(keymaster::km_auth_list*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16i2d_KM_AUTH_LISTEPNS_12km_auth_listEPPh(void) {
    ALOGD("_ZN9keymaster16i2d_KM_AUTH_LISTEPNS_12km_auth_listEPPh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::EcdsaSignOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18EcdsaSignOperationE = NULL;

/* Demangled: keymaster::RsaVerifyOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18RsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster18RsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::find(keymaster_tag_t, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD0Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD0Ev() called");
    return 0;
}

/* Exported Object: std::nothrow */
extern "C" __attribute__((visibility("default"))) void* _ZSt7nothrow = NULL;

/* Demangled: keymaster::ImportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::Logger::Severe(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger6SevereEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger6SevereEPKcz() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_CREATION_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_CREATION_DATETIMEE = NULL;

/* Demangled: keymaster::BlockCipherEvpOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::GetVersion(keymaster::GetVersionRequest const&, keymaster::GetVersionResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster10GetVersionERKNS_17GetVersionRequestEPNS_18GetVersionResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster10GetVersionERKNS_17GetVersionRequestEPNS_18GetVersionResponseE() called");
    return 0;
}

/* Exported Object: keymaster::softwareRootOfTrust */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19softwareRootOfTrustE = NULL;

/* Demangled: keymaster::HmacOperation::~HmacOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperationD0Ev(void) {
    ALOGD("_ZN9keymaster13HmacOperationD0Ev() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE() called");
    return 0;
}

/* Exported Object: keymaster::TAG_BOOTLOADER_ONLY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_BOOTLOADER_ONLYE = NULL;

/* Exported Object: vtable for keymaster::HmacKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster14HmacKeyFactoryE = NULL;

/* Demangled: keymaster::RsaKeyFactory::CreateEmptyKey(keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::AsymmetricKey, keymaster::DefaultDelete<keymaster::AsymmetricKey> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13RsaKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE(void) {
    ALOGD("_ZNK9keymaster13RsaKeyFactory14CreateEmptyKeyEONS_16AuthorizationSetES2_PNS_9UniquePtrINS_13AsymmetricKeyENS_13DefaultDeleteIS4_EEEE() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::erase(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5eraseEi(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5eraseEi() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::OperationFactory::supported(keymaster_padding_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory9supportedE19keymaster_padding_t(void) {
    ALOGD("_ZNK9keymaster16OperationFactory9supportedE19keymaster_padding_t() called");
    return 0;
}

/* Demangled: keymaster::OperationFactory::supported(keymaster_digest_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory9supportedE18keymaster_digest_t(void) {
    ALOGD("_ZNK9keymaster16OperationFactory9supportedE18keymaster_digest_t() called");
    return 0;
}

/* Demangled: keymaster::Buffer::available_write() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer15available_writeEv(void) {
    ALOGD("_ZNK9keymaster6Buffer15available_writeEv() called");
    return 0;
}

/* Demangled: keymaster::KM_KEY_DESCRIPTION_free(keymaster::km_key_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23KM_KEY_DESCRIPTION_freeEPNS_18km_key_descriptionE(void) {
    ALOGD("_ZN9keymaster23KM_KEY_DESCRIPTION_freeEPNS_18km_key_descriptionE() called");
    return 0;
}

/* Demangled: keymaster::EcdsaOperation::~EcdsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14EcdsaOperationD2Ev(void) {
    ALOGD("_ZN9keymaster14EcdsaOperationD2Ev() called");
    return 0;
}

/* Demangled: keymaster::RsaOperationFactory::GetRsaKey(keymaster::Key&&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19RsaOperationFactory9GetRsaKeyEONS_3KeyEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster19RsaOperationFactory9GetRsaKeyEONS_3KeyEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16AttestKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HardwareAuthToken */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17HardwareAuthTokenE = NULL;

/* Demangled: keymaster::Operation::UpdateForFinish(keymaster::AuthorizationSet const&, keymaster::Buffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster9Operation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferE(void) {
    ALOGD("_ZN9keymaster9Operation15UpdateForFinishERKNS_16AuthorizationSetERKNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::BlockCipherEvpOperation::~BlockCipherEvpOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23BlockCipherEvpOperationD2Ev(void) {
    ALOGD("_ZN9keymaster23BlockCipherEvpOperationD2Ev() called");
    return 0;
}

/* Demangled: keymaster::EcKey::EvpToInternal(evp_pkey_st const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster5EcKey13EvpToInternalEPK11evp_pkey_st(void) {
    ALOGD("_ZN9keymaster5EcKey13EvpToInternalEPK11evp_pkey_st() called");
    return 0;
}

/* Demangled: keymaster::EcKey::InternalToEvp(evp_pkey_st*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster5EcKey13InternalToEvpEP11evp_pkey_st(void) {
    ALOGD("_ZNK9keymaster5EcKey13InternalToEvpEP11evp_pkey_st() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD0Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD0Ev() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetMaskingKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::build_auth_list(keymaster::AuthorizationSet const&, keymaster::km_auth_list*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15build_auth_listERKNS_16AuthorizationSetEPNS_12km_auth_listE(void) {
    ALOGD("_ZN9keymaster15build_auth_listERKNS_16AuthorizationSetEPNS_12km_auth_listE() called");
    return 0;
}

/* Demangled: keymaster::RsaDigestingOperation::~RsaDigestingOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21RsaDigestingOperationD2Ev(void) {
    ALOGD("_ZN9keymaster21RsaDigestingOperationD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::KeymasterContext*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterC2EPNS_16KeymasterContextEm(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterC2EPNS_16KeymasterContextEm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17ImportKeyResponseE = NULL;

/* Demangled: keymaster::EciesKem::Encrypt(unsigned char const*, unsigned long, keymaster::Buffer*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKem7EncryptEPKhmPNS_6BufferES4_(void) {
    ALOGD("_ZN9keymaster8EciesKem7EncryptEPKhmPNS_6BufferES4_() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::~RsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperationD1Ev(void) {
    ALOGD("_ZN9keymaster12RsaOperationD1Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ALGORITHM */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_ALGORITHME = NULL;

/* Exported Object: vtable for keymaster::HmacOperationFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20HmacOperationFactoryE = NULL;

/* Demangled: keymaster::Buffer::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster6Buffer9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_OS_VERSION */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_OS_VERSIONE = NULL;

/* Demangled: keymaster::UpgradeSoftKeyBlob(keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> > const&, unsigned int, unsigned int, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeSoftKeyBlobERKNS_9UniquePtrINS_3KeyENS_13DefaultDeleteIS1_EEEEjjRKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void) {
    ALOGD("_ZN9keymaster18UpgradeSoftKeyBlobERKNS_9UniquePtrINS_3KeyENS_13DefaultDeleteIS1_EEEEjjRKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::GetVersionResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Demangled: keymaster::EcKeyFactory::GetOperationFactory(keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster12EcKeyFactory19GetOperationFactoryE19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster12EcKeyFactory19GetOperationFactoryE19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::GetHmacSharingParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster24GetHmacSharingParametersEv(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster24GetHmacSharingParametersEv() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD2Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD2Ev() called");
    return 0;
}

/* Demangled: ae_clear */
extern "C" __attribute__((visibility("default"))) int ae_clear(void) {
    ALOGD("ae_clear() called");
    return 0;
}

/* Demangled: keymaster::KeymasterResponse::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17KeymasterResponse9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::append_to_buf(unsigned char*, unsigned char const*, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13append_to_bufEPhPKhPKvm(void) {
    ALOGD("_ZN9keymaster13append_to_bufEPhPKhPKvm() called");
    return 0;
}

/* Demangled: keymaster::OperationTable::Add(keymaster::UniquePtr<keymaster::Operation, keymaster::DefaultDelete<keymaster::Operation> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14OperationTable3AddEONS_9UniquePtrINS_9OperationENS_13DefaultDeleteIS2_EEEE(void) {
    ALOGD("_ZN9keymaster14OperationTable3AddEONS_9UniquePtrINS_9OperationENS_13DefaultDeleteIS2_EEEE() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ECIES_SINGLE_HASH_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE = NULL;

/* Exported Object: keymaster::TAG_ROOT_OF_TRUST */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster17TAG_ROOT_OF_TRUSTE = NULL;

/* Exported Object: vtable for keymaster::RsaOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster12RsaOperationE = NULL;

/* Demangled: keymaster::d2i_KM_WRAPPED_KEY(keymaster::km_wrapped_key**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18d2i_KM_WRAPPED_KEYEPPNS_14km_wrapped_keyEPPKhl(void) {
    ALOGD("_ZN9keymaster18d2i_KM_WRAPPED_KEYEPPNS_14km_wrapped_keyEPPKhl() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::SupportedImportFormats(keymaster::SupportedImportFormatsRequest const&, keymaster::SupportedImportFormatsResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster22SupportedImportFormatsERKNS_29SupportedImportFormatsRequestEPNS_30SupportedImportFormatsResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster22SupportedImportFormatsERKNS_29SupportedImportFormatsRequestEPNS_30SupportedImportFormatsResponseE() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_DEVICE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE = NULL;

/* Demangled: keymaster::UpdateOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ASSOCIATED_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_ASSOCIATED_DATAE = NULL;

/* Exported Object: keymaster::TAG_EARLY_BOOT_ONLY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_EARLY_BOOT_ONLYE = NULL;

/* Demangled: keymaster::HmacOperationFactory::CreateOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20HmacOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster20HmacOperationFactory15CreateOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::copy_from_buf(unsigned char const**, unsigned char const*, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13copy_from_bufEPPKhS1_Pvm(void) {
    ALOGD("_ZN9keymaster13copy_from_bufEPPKhS1_Pvm() called");
    return 0;
}

/* Demangled: keymaster::GetVersionResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagCount(keymaster_tag_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_NONCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster9TAG_NONCEE = NULL;

/* Demangled: keymaster::OperationTable::Find(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster14OperationTable4FindEm(void) {
    ALOGD("_ZN9keymaster14OperationTable4FindEm() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17AddEntropyRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USER_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_USER_IDE = NULL;

/* Exported Object: keymaster::TAG_ALLOW_WHILE_ON_BODY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE = NULL;

/* Exported Object: vtable for keymaster::AesKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster13AesKeyFactoryE = NULL;

/* Demangled: keymaster::generate_attestation_common(evp_pkey_st const*, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, unsigned long, unsigned long, unsigned int, keymaster::AttestationRecordContext const&, keymaster_cert_chain_t const&, keymaster_key_blob_t const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster27generate_attestation_commonEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_mmjRKNS_24AttestationRecordContextERK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE(void) {
    ALOGD("_ZN9keymaster27generate_attestation_commonEPK11evp_pkey_stRKNS_16AuthorizationSetES5_S5_mmjRKNS_24AttestationRecordContextERK22keymaster_cert_chain_tRK20keymaster_key_blob_tPNS_9UniquePtrIS9_NS_22CertificateChainDeleteEEE() called");
    return 0;
}

/* Demangled: keymaster::EcdsaVerifyOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20EcdsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster20EcdsaVerifyOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HmacOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster13HmacOperationE = NULL;

/* Exported Object: vtable for keymaster::RsaEncryptOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19RsaEncryptOperationE = NULL;

/* Exported Object: infoString */
extern "C" __attribute__((visibility("default"))) void* infoString = NULL;

/* Demangled: keymaster::EciesKem::EciesKem(keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8EciesKemC1ERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster8EciesKemC1ERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::DigestLength() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster10HmacSha25612DigestLengthEv(void) {
    ALOGD("_ZNK9keymaster10HmacSha25612DigestLengthEv() called");
    return 0;
}

/* Demangled: keymaster::RsaOperationFactory::SupportedDigests(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19RsaOperationFactory16SupportedDigestsEPm(void) {
    ALOGD("_ZNK9keymaster19RsaOperationFactory16SupportedDigestsEPm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpdateOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23UpdateOperationResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueDate(keymaster_tag_t, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_AUTH_TIMEOUT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster16TAG_AUTH_TIMEOUTE = NULL;

/* Demangled: keymaster::AuthorizationSet::MoveFrom(keymaster::AuthorizationSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet8MoveFromERS0_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet8MoveFromERS0_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::SymmetricKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster12SymmetricKeyE = NULL;

/* Exported Object: vtable for keymaster::ExportKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17ExportKeyResponseE = NULL;

/* Demangled: keymaster::d2i_KM_AUTH_LIST(keymaster::km_auth_list**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16d2i_KM_AUTH_LISTEPPNS_12km_auth_listEPPKhl(void) {
    ALOGD("_ZN9keymaster16d2i_KM_AUTH_LISTEPPNS_12km_auth_listEPPKhl() called");
    return 0;
}

/* Demangled: keymaster::RsaOperationFactory::CreateRsaOperation(keymaster::Key&&, keymaster::AuthorizationSet const&, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19RsaOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster19RsaOperationFactory18CreateRsaOperationEONS_3KeyERKNS_16AuthorizationSetEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::RsaDecryptOperation::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19RsaDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_(void) {
    ALOGD("_ZN9keymaster19RsaDecryptOperation6FinishERKNS_16AuthorizationSetERKNS_6BufferES6_PS1_PS4_() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::ExportKey(keymaster::ExportKeyRequest const&, keymaster::ExportKeyResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster9ExportKeyERKNS_16ExportKeyRequestEPNS_17ExportKeyResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster9ExportKeyERKNS_16ExportKeyRequestEPNS_17ExportKeyResponseE() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_APPLICATION_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE = NULL;

/* Demangled: keymaster::SymmetricKey::~SymmetricKey() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12SymmetricKeyD2Ev(void) {
    ALOGD("_ZN9keymaster12SymmetricKeyD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AsymmetricKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster20AsymmetricKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster20AsymmetricKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::Init(keymaster::Buffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster10HmacSha2564InitERKNS_6BufferE(void) {
    ALOGD("_ZN9keymaster10HmacSha2564InitERKNS_6BufferE() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::AllocateChain(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponse13AllocateChainEm(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponse13AllocateChainEm() called");
    return 0;
}

/* Demangled: keymaster::SymmetricKey::SymmetricKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::KeyFactory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12SymmetricKeyC1EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE(void) {
    ALOGD("_ZN9keymaster12SymmetricKeyC1EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE() called");
    return 0;
}

/* Demangled: keymaster::AndroidKeymaster::SupportedAlgorithms(keymaster::SupportedAlgorithmsRequest const&, keymaster::SupportedAlgorithmsResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymaster19SupportedAlgorithmsERKNS_26SupportedAlgorithmsRequestEPNS_27SupportedAlgorithmsResponseE(void) {
    ALOGD("_ZN9keymaster16AndroidKeymaster19SupportedAlgorithmsERKNS_26SupportedAlgorithmsRequestEPNS_27SupportedAlgorithmsResponseE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD1Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD1Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_CALLER_NONCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster16TAG_CALLER_NONCEE = NULL;

/* Exported Object: keymaster::TAG_KDF */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster7TAG_KDFE = NULL;

/* Demangled: keymaster::SymmetricKey::SymmetricKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::KeyFactory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12SymmetricKeyC2EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE(void) {
    ALOGD("_ZN9keymaster12SymmetricKeyC2EONS_14TKeymasterBlobI20keymaster_key_blob_tEEONS_16AuthorizationSetES6_PKNS_10KeyFactoryE() called");
    return 0;
}

/* Demangled: keymaster::build_attestation_record(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet, keymaster::AuthorizationSet, keymaster::AttestationRecordContext const&, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm(void) {
    ALOGD("_ZN9keymaster24build_attestation_recordERKNS_16AuthorizationSetES0_S0_RKNS_24AttestationRecordContextEPNS_9UniquePtrIA_hNS_13DefaultDeleteIS7_EEEEPm() called");
    return 0;
}

/* Demangled: keymaster::extract_auth_list(keymaster::km_auth_list const*, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17extract_auth_listEPKNS_12km_auth_listEPNS_16AuthorizationSetE(void) {
    ALOGD("_ZN9keymaster17extract_auth_listEPKNS_12km_auth_listEPNS_16AuthorizationSetE() called");
    return 0;
}

/* Demangled: keymaster::NistCurveKeyExchange::GenerateKeyExchange(keymaster_ec_curve_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster20NistCurveKeyExchange19GenerateKeyExchangeE20keymaster_ec_curve_t(void) {
    ALOGD("_ZN9keymaster20NistCurveKeyExchange19GenerateKeyExchangeE20keymaster_ec_curve_t() called");
    return 0;
}

/* Demangled: keymaster::d2i_KM_WRAPPED_KEY_DESCRIPTION(keymaster::km_wrapped_key_description**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster30d2i_KM_WRAPPED_KEY_DESCRIPTIONEPPNS_26km_wrapped_key_descriptionEPPKhl(void) {
    ALOGD("_ZN9keymaster30d2i_KM_WRAPPED_KEY_DESCRIPTIONEPPNS_26km_wrapped_key_descriptionEPPKhl() called");
    return 0;
}

/* Exported Object: vtable for keymaster::FinishOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23FinishOperationResponseE = NULL;

/* Demangled: keymaster::ExportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::SymmetricKeyFactory::SupportedImportFormats(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19SymmetricKeyFactory22SupportedImportFormatsEPm(void) {
    ALOGD("_ZNK9keymaster19SymmetricKeyFactory22SupportedImportFormatsEPm() called");
    return 0;
}

/* Demangled: keymaster::HmacOperation::~HmacOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13HmacOperationD1Ev(void) {
    ALOGD("_ZN9keymaster13HmacOperationD1Ev() called");
    return 0;
}

/* Exported Object: vtable for keymaster::SoftwareRandomSource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster20SoftwareRandomSourceE = NULL;

/* Exported Object: keymaster::TAG_EC_CURVE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster12TAG_EC_CURVEE = NULL;

/* Demangled: keymaster::AesKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster13AesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster13AesKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::HmacSha256::Init(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster10HmacSha2564InitEPKhm(void) {
    ALOGD("_ZN9keymaster10HmacSha2564InitEPKhm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::RsaCryptOperation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17RsaCryptOperationE = NULL;

/* Demangled: keymaster::AndroidKeymaster::AndroidKeymaster(keymaster::KeymasterContext*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AndroidKeymasterC1EPNS_16KeymasterContextEm(void) {
    ALOGD("_ZN9keymaster16AndroidKeymasterC1EPNS_16KeymasterContextEm() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22FinishOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::OcbDecryptKey(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13OcbDecryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferESA_PS5_(void) {
    ALOGD("_ZN9keymaster13OcbDecryptKeyERKNS_16AuthorizationSetES2_S2_RKNS_14TKeymasterBlobI20keymaster_key_blob_tEES7_RKNS_6BufferESA_PS5_() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD1Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::Begin(keymaster::AuthorizationSet const&, keymaster::AuthorizationSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperation5BeginERKNS_16AuthorizationSetEPS1_(void) {
    ALOGD("_ZN9keymaster12RsaOperation5BeginERKNS_16AuthorizationSetEPS1_() called");
    return 0;
}

/* Demangled: keymaster::RsaCryptOperation::GetOpensslPadding(keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17RsaCryptOperation17GetOpensslPaddingEP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster17RsaCryptOperation17GetOpensslPaddingEP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::RsaOperation::~RsaOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12RsaOperationD2Ev(void) {
    ALOGD("_ZN9keymaster12RsaOperationD2Ev() called");
    return 0;
}

/* Demangled: ae_init */
extern "C" __attribute__((visibility("default"))) int ae_init(void) {
    ALOGD("ae_init() called");
    return 0;
}

/* Demangled: keymaster::TripleDesKeyFactory::validate_algorithm_specific_new_key_params(keymaster::AuthorizationSet const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19TripleDesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE(void) {
    ALOGD("_ZNK9keymaster19TripleDesKeyFactory42validate_algorithm_specific_new_key_paramsERKNS_16AuthorizationSetE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::DeserializeElementsData(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::OperationFactory::is_public_key_operation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16OperationFactory23is_public_key_operationEv(void) {
    ALOGD("_ZNK9keymaster16OperationFactory23is_public_key_operationEv() called");
    return 0;
}

/* Demangled: ae_allocate */
extern "C" __attribute__((visibility("default"))) int ae_allocate(void) {
    ALOGD("ae_allocate() called");
    return 0;
}
