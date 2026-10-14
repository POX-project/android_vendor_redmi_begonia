/*
 * Reverse-Engineered Source for: libkeymaster_messages.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkeymaster_messages"

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
#include "libkeymaster_messages.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportWrappedKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23ImportWrappedKeyRequestE = NULL;

/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Reinitialize(keymaster_key_param_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagCount(keymaster_tag_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::ContainsEnumValue(keymaster_tag_t, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD2Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD2Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_BLOB_USAGE_REQUIREMENTS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE = NULL;

/* Demangled: keymaster::AttestKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_BRAND */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE = NULL;

/* Demangled: keymaster::AuthorizationSet::find(keymaster_tag_t, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti() called");
    return 0;
}

/* Exported Object: keymaster::TAG_AUTH_TOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_AUTH_TOKENE = NULL;

/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz() called");
    return 0;
}

/* Demangled: keymaster::GetVersionResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GenerateKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19GenerateKeyResponseE = NULL;

/* Exported Object: keymaster::TAG_NO_AUTH_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_NO_AUTH_REQUIREDE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_PRODUCT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE = NULL;

/* Demangled: keymaster::AttestKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: std::nothrow */
extern "C" __attribute__((visibility("default"))) void* _ZSt7nothrow = NULL;

/* Exported Object: keymaster::TAG_INCLUDE_UNIQUE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE = NULL;

/* Exported Object: keymaster::TAG_APPLICATION_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_APPLICATION_IDE = NULL;

/* Demangled: keymaster::AuthorizationSet::operator[](int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSetixEi(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSetixEi() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::operator[](int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetixEi(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetixEi() called");
    return 0;
}

/* Demangled: keymaster::Buffer::available_write() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer15available_writeEv(void) {
    ALOGD("_ZNK9keymaster6Buffer15available_writeEv() called");
    return 0;
}

/* Demangled: keymaster::Buffer::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster6Buffer14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD0Ev() called");
    return 0;
}

/* Demangled: keymaster::copy_from_buf(unsigned char const**, unsigned char const*, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13copy_from_bufEPPKhS1_Pvm(void) {
    ALOGD("_ZN9keymaster13copy_from_bufEPPKhS1_Pvm() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::MoveFrom(keymaster::AuthorizationSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet8MoveFromERS0_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet8MoveFromERS0_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD0Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD0Ev() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MIN_SECONDS_BETWEEN_OPS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE = NULL;

/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list(void) {
    ALOGD("_ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16ExportKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpgradeKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18UpgradeKeyResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueEnumRep(keymaster_tag_t, unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueBlob(keymaster_tag_t, keymaster_blob_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USAGE_EXPIRE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE = NULL;

/* Demangled: keymaster::GetKeyCharacteristicsRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_CALLER_NONCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster16TAG_CALLER_NONCEE = NULL;

/* Exported Object: keymaster::TAG_UNLOCKED_DEVICE_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE = NULL;

/* Exported Object: vtable for keymaster::AttestKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16AttestKeyRequestE = NULL;

/* Exported Object: keymaster::TAG_PADDING_OLD */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster15TAG_PADDING_OLDE = NULL;

/* Demangled: keymaster::FinishOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueInt(keymaster_tag_t, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MODEL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster24TAG_ATTESTATION_ID_MODELE = NULL;

/* Demangled: keymaster::BeginOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD2Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::CopyIndirectData() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet16CopyIndirectDataEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE() called");
    return 0;
}

/* Exported Object: keymaster::TAG_RSA_PUBLIC_EXPONENT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE = NULL;

/* Demangled: keymaster::Logger::Debug(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger5DebugEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger5DebugEPKcz() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HardwareAuthToken */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17HardwareAuthTokenE = NULL;

/* Exported Object: keymaster::TAG_MIN_MAC_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_MIN_MAC_LENGTHE = NULL;

/* Exported Object: keymaster::TAG_ACTIVE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_ACTIVE_DATETIMEE = NULL;

/* Exported Object: keymaster::TAG_NONCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster9TAG_NONCEE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_APPLICATION_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE = NULL;

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD0Ev() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappingMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17HardwareAuthToken14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::HmacSharingParametersArray */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster26HmacSharingParametersArrayE = NULL;

/* Exported Object: vtable for keymaster::ImportWrappedKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster24ImportWrappedKeyResponseE = NULL;

/* Exported Object: vtable for keymaster::VerificationToken */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17VerificationTokenE = NULL;

/* Demangled: keymaster::AuthorizationSet::ContainsIntValue(keymaster_tag_t, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17VerificationToken9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17VerificationToken9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ExportKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17ExportKeyResponseE = NULL;

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD1Ev() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ROLLBACK_RESISTANT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster22TAG_ROLLBACK_RESISTANTE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_DEVICE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE = NULL;

/* Exported Object: keymaster::TAG_PURPOSE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_PURPOSEE = NULL;

/* Demangled: keymaster::AttestKeyResponse::AllocateChain(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponse13AllocateChainEm(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponse13AllocateChainEm() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD1Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ALGORITHM */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_ALGORITHME = NULL;

/* Exported Object: keymaster::TAG_KDF */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster7TAG_KDFE = NULL;

/* Exported Object: keymaster::Logger::instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster6Logger9instance_E = NULL;

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD2Ev() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::EcCurveToKeySize(keymaster_ec_curve_t, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj(void) {
    ALOGD("_ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_UNIQUE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_UNIQUE_IDE = NULL;

/* Exported Object: keymaster::TAG_EARLY_BOOT_ONLY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_EARLY_BOOT_ONLYE = NULL;

/* Demangled: keymaster::Buffer::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer7reserveEm(void) {
    ALOGD("_ZN9keymaster6Buffer7reserveEm() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Reinitialize(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer12ReinitializeEPKvm(void) {
    ALOGD("_ZN9keymaster6Buffer12ReinitializeEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueLongRep(keymaster_tag_t, unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueLong(keymaster_tag_t, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_OS_PATCHLEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster17TAG_OS_PATCHLEVELE = NULL;

/* Demangled: keymaster::Buffer::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster6Buffer9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ExportKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16ExportKeyRequestE = NULL;

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD1Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17VerificationToken11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_INVALID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_INVALIDE = NULL;

/* Exported Object: keymaster::TAG_ORIGIN */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster10TAG_ORIGINE = NULL;

/* Exported Object: keymaster::TAG_EC_CURVE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster12TAG_EC_CURVEE = NULL;

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD1Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD1Ev() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16ImportKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USER_SECURE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_USER_SECURE_IDE = NULL;

/* Demangled: keymaster::Buffer::Reinitialize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer12ReinitializeEm(void) {
    ALOGD("_ZN9keymaster6Buffer12ReinitializeEm() called");
    return 0;
}

/* Demangled: keymaster::memcmp_s(void const*, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster8memcmp_sEPKvS1_m(void) {
    ALOGD("_ZN9keymaster8memcmp_sEPKvS1_m() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::erase(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5eraseEi(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5eraseEi() called");
    return 0;
}

/* Demangled: keymaster::Logger::Error(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger5ErrorEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger5ErrorEPKcz() called");
    return 0;
}

/* Exported Object: keymaster::empty_param */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11empty_paramE = NULL;

/* Demangled: keymaster::ImportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::Buffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster6BufferE = NULL;

/* Exported Object: keymaster::TAG_PADDING */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_PADDINGE = NULL;

/* Demangled: keymaster::KeymasterResponse::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17KeymasterResponse9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::GetVersionResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::CopyToParamSet(keymaster_key_param_set_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_BOOTLOADER_ONLY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_BOOTLOADER_ONLYE = NULL;

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MANUFACTURER */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE = NULL;

/* Exported Object: keymaster::TAG_APPLICATION_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_APPLICATION_DATAE = NULL;

/* Exported Object: keymaster::TAG_ROLLBACK_RESISTANCE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE = NULL;

/* Exported Object: keymaster::TAG_ASSOCIATED_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster19TAG_ASSOCIATED_DATAE = NULL;

/* Demangled: keymaster::GetKeyCharacteristicsRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_SERIAL */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE = NULL;

/* Exported Object: keymaster::TAG_USER_AUTH_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster18TAG_USER_AUTH_TYPEE = NULL;

/* Demangled: keymaster::Logger::Warning(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger7WarningEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger7WarningEPKcz() called");
    return 0;
}

/* Demangled: keymaster::KeymasterResponse::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AddEntropyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17AddEntropyRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BeginOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21BeginOperationRequestE = NULL;

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::append_to_buf(unsigned char*, unsigned char const*, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster13append_to_bufEPhPKhPKvm(void) {
    ALOGD("_ZN9keymaster13append_to_bufEPhPKhPKvm() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HardwareAuthToken::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::FreeData() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet8FreeDataEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet8FreeDataEv() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ROOT_OF_TRUST */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster17TAG_ROOT_OF_TRUSTE = NULL;

/* Demangled: keymaster::FinishOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParametersArray::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetMaskingKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MAX_USES_PER_BOOT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_MAX_USES_PER_BOOTE = NULL;

/* Exported Object: keymaster::TAG_TRUSTED_CONFIRMATION_REQUIRED */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE = NULL;

/* Demangled: keymaster::GetVersionResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster21HmacSharingParameters14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GetKeyCharacteristicsResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster29GetKeyCharacteristicsResponseE = NULL;

/* Exported Object: vtable for keymaster::FinishOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22FinishOperationRequestE = NULL;

/* Exported Object: keymaster::TAG_KEY_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster12TAG_KEY_SIZEE = NULL;

/* Demangled: keymaster::AttestKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpgradeKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17UpgradeKeyRequestE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueDate(keymaster_tag_t, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_MEID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE = NULL;

/* Exported Object: keymaster::TAG_DIGEST */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster10TAG_DIGESTE = NULL;

/* Demangled: keymaster::Buffer::available_read() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster6Buffer14available_readEv(void) {
    ALOGD("_ZNK9keymaster6Buffer14available_readEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::BeginOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22BeginOperationResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueBool(keymaster_tag_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_OS_VERSION */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_OS_VERSIONE = NULL;

/* Exported Object: keymaster::TAG_BLOCK_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_BLOCK_MODEE = NULL;

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::copy_size_and_data_from_buf(unsigned char const**, unsigned char const*, unsigned long*, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE(void) {
    ALOGD("_ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE() called");
    return 0;
}

/* Demangled: keymaster::ImportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappedMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16ImportKeyRequestE = NULL;

/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster18UpgradeKeyResponseD1Ev(void) {
    ALOGD("_ZN9keymaster18UpgradeKeyResponseD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::reserve_elems(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet13reserve_elemsEm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet13reserve_elemsEm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Deduplicate() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11DeduplicateEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11DeduplicateEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ComputeSharedHmacResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster25ComputeSharedHmacResponseE = NULL;

/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AttestKeyRequestD1Ev(void) {
    ALOGD("_ZN9keymaster16AttestKeyRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::reserve_indirect(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet16reserve_indirectEm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet16reserve_indirectEm() called");
    return 0;
}

/* Demangled: keymaster::StringifyTag(keymaster_tag_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12StringifyTagE15keymaster_tag_t(void) {
    ALOGD("_ZN9keymaster12StringifyTagE15keymaster_tag_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_DEVICE_UNIQUE_ATTESTATION */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE = NULL;

/* Demangled: keymaster::GenerateKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::GetTagValueEnum(keymaster_tag_t, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj() called");
    return 0;
}

/* Exported Object: keymaster::TAG_USER_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster11TAG_USER_IDE = NULL;

/* Demangled: keymaster::Logger::Info(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger4InfoEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger4InfoEPKcz() called");
    return 0;
}

/* Demangled: keymaster::Buffer::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer5ClearEv(void) {
    ALOGD("_ZN9keymaster6Buffer5ClearEv() called");
    return 0;
}

/* Demangled: keymaster::VerificationToken::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17VerificationToken14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17VerificationToken14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AddEntropyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17AddEntropyRequestE = NULL;

/* Demangled: keymaster::Buffer::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster6Buffer11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpdateOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23UpdateOperationResponseE = NULL;

/* Exported Object: vtable for keymaster::HmacSharingParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster21HmacSharingParametersE = NULL;

/* Demangled: keymaster::AuthorizationSet::ComputeIndirectDataSize(keymaster_key_param_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5ClearEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5ClearEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AuthorizationSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16AuthorizationSetE = NULL;

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD0Ev() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::DeserializeIndirectData(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::DeleteKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::FinishOperationResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23FinishOperationResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::GetTagValueIntRep(keymaster_tag_t, unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj() called");
    return 0;
}

/* Demangled: operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZdlPv(void) {
    ALOGD("_ZdlPv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD0Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD0Ev() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::GetKeyCharacteristicsRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster28GetKeyCharacteristicsRequestE = NULL;

/* Exported Object: vtable for keymaster::KeymasterResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17KeymasterResponseE = NULL;

/* Exported Object: vtable for keymaster::GetVersionResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster18GetVersionResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet4SortEv(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet4SortEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::SerializedSizeOfElements() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv(void) {
    ALOGD("_ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv() called");
    return 0;
}

/* Demangled: keymaster::Buffer::write(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer5writeEPKhm(void) {
    ALOGD("_ZN9keymaster6Buffer5writeEPKhm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev(void) {
    ALOGD("_ZN9keymaster28GetKeyCharacteristicsRequestD1Ev() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::Difference(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParameters::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::EcKeySizeToCurve(unsigned int, keymaster_ec_curve_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t(void) {
    ALOGD("_ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_IDENTITY_CREDENTIAL_KEY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE = NULL;

/* Demangled: keymaster::Logger::Severe(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Logger6SevereEPKcz(void) {
    ALOGD("_ZN9keymaster6Logger6SevereEPKcz() called");
    return 0;
}

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Exported Object: vtable for keymaster::UpdateOperationRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster22UpdateOperationRequestE = NULL;

/* Exported Object: keymaster::TAG_CREATION_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster21TAG_CREATION_DATETIMEE = NULL;

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD0Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD0Ev() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParametersArray::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::DeleteKeyRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster16DeleteKeyRequestE = NULL;

/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19GenerateKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster19GenerateKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::HmacSharingParametersArray::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ALL_USERS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster13TAG_ALL_USERSE = NULL;

/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSetD0Ev(void) {
    ALOGD("_ZN9keymaster16AuthorizationSetD0Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ORIGINATION_EXPIRE_DATETIME */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE = NULL;

/* Exported Object: keymaster::TAG_ALL_APPLICATIONS */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster20TAG_ALL_APPLICATIONSE = NULL;

/* Demangled: keymaster::KeymasterResponse::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17KeymasterResponse14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17KeymasterResponse14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17AttestKeyResponseD2Ev(void) {
    ALOGD("_ZN9keymaster17AttestKeyResponseD2Ev() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::ImportKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17ImportKeyResponseE = NULL;

/* Demangled: keymaster::Buffer::read(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster6Buffer4readEPhm(void) {
    ALOGD("_ZN9keymaster6Buffer4readEPhm() called");
    return 0;
}

/* Demangled: keymaster::ExportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::DeserializeElementsData(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ECIES_SINGLE_HASH_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE = NULL;

/* Exported Object: keymaster::TAG_DIGEST_OLD */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_DIGEST_OLDE = NULL;

/* Demangled: keymaster::BeginOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster21BeginOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpdateOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::dup_buffer(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster10dup_bufferEPKvm(void) {
    ALOGD("_ZN9keymaster10dup_bufferEPKvm() called");
    return 0;
}

/* Demangled: keymaster::AttestKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster16AttestKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::AttestKeyResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster17AttestKeyResponseE = NULL;

/* Demangled: keymaster::AuthorizationSet::Union(keymaster_key_param_set_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t() called");
    return 0;
}

/* Exported Object: keymaster::TAG_ATTESTATION_ID_IMEI */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE = NULL;

/* Demangled: keymaster::BeginOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_(void) {
    ALOGD("_ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_() called");
    return 0;
}

/* Demangled: keymaster::AuthorizationSet::set_invalid(keymaster::AuthorizationSet::Error) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE(void) {
    ALOGD("_ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE() called");
    return 0;
}

/* Demangled: keymaster::BeginOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::ImportWrappedKeyResponse::SetKeyMaterial(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm(void) {
    ALOGD("_ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm() called");
    return 0;
}

/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh(void) {
    ALOGD("_ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh() called");
    return 0;
}

/* Demangled: keymaster::FinishOperationRequest::SerializedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv(void) {
    ALOGD("_ZNK9keymaster22FinishOperationRequest14SerializedSizeEv() called");
    return 0;
}

/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17UpgradeKeyRequestD2Ev(void) {
    ALOGD("_ZN9keymaster17UpgradeKeyRequestD2Ev() called");
    return 0;
}

/* Exported Object: keymaster::TAG_MAC_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster14TAG_MAC_LENGTHE = NULL;

/* Exported Object: keymaster::TAG_AUTH_TIMEOUT */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster16TAG_AUTH_TIMEOUTE = NULL;

/* Exported Object: keymaster::TAG_ALLOW_WHILE_ON_BODY */
extern "C" __attribute__((visibility("default"))) void* _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE = NULL;
