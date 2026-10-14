/*
 * Reverse-Engineered ABI Specification for: libkeymaster_messages.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libkeymaster_messages.so
 */

#ifndef BEGONIA_RE_LIBKEYMASTER_MESSAGES_H
#define BEGONIA_RE_LIBKEYMASTER_MESSAGES_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster24ImportWrappedKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster23ImportWrappedKeyRequestE */
/* Demangled: vtable for keymaster::ImportWrappedKeyRequest */
extern void* _ZTVN9keymaster23ImportWrappedKeyRequestE;

/* Symbol: _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE */
/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
int _ZN9keymaster16AuthorizationSetC2ERNS_23AuthorizationSetBuilderE(void);

/* Symbol: _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm */
/* Demangled: keymaster::AuthorizationSet::Reinitialize(keymaster_key_param_t const*, unsigned long) */
int _ZN9keymaster16AuthorizationSet12ReinitializeEPK21keymaster_key_param_tm(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t */
/* Demangled: keymaster::AuthorizationSet::GetTagCount(keymaster_tag_t) const */
int _ZNK9keymaster16AuthorizationSet11GetTagCountE15keymaster_tag_t(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj */
/* Demangled: keymaster::AuthorizationSet::ContainsEnumValue(keymaster_tag_t, unsigned int) const */
int _ZNK9keymaster16AuthorizationSet17ContainsEnumValueE15keymaster_tag_tj(void);

/* Symbol: _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::AttestKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17AttestKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSetD2Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD2Ev(void);

/* Symbol: _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE */
/* Demangled: keymaster::TAG_BLOB_USAGE_REQUIREMENTS */
extern void* _ZN9keymaster27TAG_BLOB_USAGE_REQUIREMENTSE;

/* Symbol: _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::AttestKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16AttestKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_BRAND */
extern void* _ZN9keymaster24TAG_ATTESTATION_ID_BRANDE;

/* Symbol: _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti */
/* Demangled: keymaster::AuthorizationSet::find(keymaster_tag_t, int) const */
int _ZNK9keymaster16AuthorizationSet4findE15keymaster_tag_ti(void);

/* Symbol: _ZN9keymaster14TAG_AUTH_TOKENE */
/* Demangled: keymaster::TAG_AUTH_TOKEN */
extern void* _ZN9keymaster14TAG_AUTH_TOKENE;

/* Symbol: _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz */
/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, ...) */
int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcz(void);

/* Symbol: _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GetVersionResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster18GetVersionResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster19GenerateKeyResponseE */
/* Demangled: vtable for keymaster::GenerateKeyResponse */
extern void* _ZTVN9keymaster19GenerateKeyResponseE;

/* Symbol: _ZN9keymaster20TAG_NO_AUTH_REQUIREDE */
/* Demangled: keymaster::TAG_NO_AUTH_REQUIRED */
extern void* _ZN9keymaster20TAG_NO_AUTH_REQUIREDE;

/* Symbol: _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_PRODUCT */
extern void* _ZN9keymaster26TAG_ATTESTATION_ID_PRODUCTE;

/* Symbol: _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AttestKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AttestKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster25ComputeSharedHmacResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZSt7nothrow */
/* Demangled: std::nothrow */
extern void* _ZSt7nothrow;

/* Symbol: _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE */
/* Demangled: keymaster::TAG_INCLUDE_UNIQUE_ID */
extern void* _ZN9keymaster21TAG_INCLUDE_UNIQUE_IDE;

/* Symbol: _ZN9keymaster18TAG_APPLICATION_IDE */
/* Demangled: keymaster::TAG_APPLICATION_ID */
extern void* _ZN9keymaster18TAG_APPLICATION_IDE;

/* Symbol: _ZNK9keymaster16AuthorizationSetixEi */
/* Demangled: keymaster::AuthorizationSet::operator[](int) const */
int _ZNK9keymaster16AuthorizationSetixEi(void);

/* Symbol: _ZN9keymaster16AuthorizationSetixEi */
/* Demangled: keymaster::AuthorizationSet::operator[](int) */
int _ZN9keymaster16AuthorizationSetixEi(void);

/* Symbol: _ZNK9keymaster6Buffer15available_writeEv */
/* Demangled: keymaster::Buffer::available_write() const */
int _ZNK9keymaster6Buffer15available_writeEv(void);

/* Symbol: _ZNK9keymaster6Buffer14SerializedSizeEv */
/* Demangled: keymaster::Buffer::SerializedSize() const */
int _ZNK9keymaster6Buffer14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AddEntropyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17AddEntropyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD0Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD0Ev(void);

/* Symbol: _ZN9keymaster13copy_from_bufEPPKhS1_Pvm */
/* Demangled: keymaster::copy_from_buf(unsigned char const**, unsigned char const*, void*, unsigned long) */
int _ZN9keymaster13copy_from_bufEPPKhS1_Pvm(void);

/* Symbol: _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster24ImportWrappedKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AuthorizationSet8MoveFromERS0_ */
/* Demangled: keymaster::AuthorizationSet::MoveFrom(keymaster::AuthorizationSet&) */
int _ZN9keymaster16AuthorizationSet8MoveFromERS0_(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AttestKeyRequestD0Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD0Ev(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster18UpgradeKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE */
/* Demangled: keymaster::TAG_MIN_SECONDS_BETWEEN_OPS */
extern void* _ZN9keymaster27TAG_MIN_SECONDS_BETWEEN_OPSE;

/* Symbol: _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list */
/* Demangled: keymaster::Logger::Log(keymaster::Logger::LogLevel, char const*, std::__va_list) */
int _ZN9keymaster6Logger3LogENS0_8LogLevelEPKcSt9__va_list(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster28GetKeyCharacteristicsRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::DeleteKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16DeleteKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ExportKeyRequest::SerializedSize() const */
int _ZNK9keymaster16ExportKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ImportWrappedKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23ImportWrappedKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet9push_backERK25keymaster_key_param_set_t(void);

/* Symbol: _ZTVN9keymaster18UpgradeKeyResponseE */
/* Demangled: vtable for keymaster::UpgradeKeyResponse */
extern void* _ZTVN9keymaster18UpgradeKeyResponseE;

/* Symbol: _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueEnumRep(keymaster_tag_t, unsigned long, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet18GetTagValueEnumRepE15keymaster_tag_tmPj(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t */
/* Demangled: keymaster::AuthorizationSet::GetTagValueBlob(keymaster_tag_t, keymaster_blob_t*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueBlobE15keymaster_tag_tP16keymaster_blob_t(void);

/* Symbol: _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE */
/* Demangled: keymaster::TAG_USAGE_EXPIRE_DATETIME */
extern void* _ZN9keymaster25TAG_USAGE_EXPIRE_DATETIMEE;

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster28GetKeyCharacteristicsRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17ImportKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster16TAG_CALLER_NONCEE */
/* Demangled: keymaster::TAG_CALLER_NONCE */
extern void* _ZN9keymaster16TAG_CALLER_NONCEE;

/* Symbol: _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE */
/* Demangled: keymaster::TAG_UNLOCKED_DEVICE_REQUIRED */
extern void* _ZN9keymaster28TAG_UNLOCKED_DEVICE_REQUIREDE;

/* Symbol: _ZTVN9keymaster16AttestKeyRequestE */
/* Demangled: vtable for keymaster::AttestKeyRequest */
extern void* _ZTVN9keymaster16AttestKeyRequestE;

/* Symbol: _ZN9keymaster15TAG_PADDING_OLDE */
/* Demangled: keymaster::TAG_PADDING_OLD */
extern void* _ZN9keymaster15TAG_PADDING_OLDE;

/* Symbol: _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::FinishOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster23FinishOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD2Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD2Ev(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueInt(keymaster_tag_t, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet14GetTagValueIntE15keymaster_tag_tPj(void);

/* Symbol: _ZN9keymaster24TAG_ATTESTATION_ID_MODELE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MODEL */
extern void* _ZN9keymaster24TAG_ATTESTATION_ID_MODELE;

/* Symbol: _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::BeginOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22BeginOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AttestKeyRequestD2Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD2Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv */
/* Demangled: keymaster::AuthorizationSet::CopyIndirectData() */
int _ZN9keymaster16AuthorizationSet16CopyIndirectDataEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE */
/* Demangled: keymaster::AuthorizationSet::AuthorizationSet(keymaster::AuthorizationSetBuilder&) */
int _ZN9keymaster16AuthorizationSetC1ERNS_23AuthorizationSetBuilderE(void);

/* Symbol: _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE */
/* Demangled: keymaster::TAG_RSA_PUBLIC_EXPONENT */
extern void* _ZN9keymaster23TAG_RSA_PUBLIC_EXPONENTE;

/* Symbol: _ZN9keymaster6Logger5DebugEPKcz */
/* Demangled: keymaster::Logger::Debug(char const*, ...) */
int _ZN9keymaster6Logger5DebugEPKcz(void);

/* Symbol: _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ExportKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17ExportKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZTVN9keymaster17HardwareAuthTokenE */
/* Demangled: vtable for keymaster::HardwareAuthToken */
extern void* _ZTVN9keymaster17HardwareAuthTokenE;

/* Symbol: _ZN9keymaster18TAG_MIN_MAC_LENGTHE */
/* Demangled: keymaster::TAG_MIN_MAC_LENGTH */
extern void* _ZN9keymaster18TAG_MIN_MAC_LENGTHE;

/* Symbol: _ZN9keymaster19TAG_ACTIVE_DATETIMEE */
/* Demangled: keymaster::TAG_ACTIVE_DATETIME */
extern void* _ZN9keymaster19TAG_ACTIVE_DATETIMEE;

/* Symbol: _ZN9keymaster9TAG_NONCEE */
/* Demangled: keymaster::TAG_NONCE */
extern void* _ZN9keymaster9TAG_NONCEE;

/* Symbol: _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE */
/* Demangled: keymaster::TAG_ATTESTATION_APPLICATION_ID */
extern void* _ZN9keymaster30TAG_ATTESTATION_APPLICATION_IDE;

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD0Ev(void);

/* Symbol: _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster25ComputeSharedHmacResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappingMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest19SetWrappingMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv */
/* Demangled: keymaster::HardwareAuthToken::SerializedSize() const */
int _ZNK9keymaster17HardwareAuthToken14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster26HmacSharingParametersArrayE */
/* Demangled: vtable for keymaster::HmacSharingParametersArray */
extern void* _ZTVN9keymaster26HmacSharingParametersArrayE;

/* Symbol: _ZTVN9keymaster24ImportWrappedKeyResponseE */
/* Demangled: vtable for keymaster::ImportWrappedKeyResponse */
extern void* _ZTVN9keymaster24ImportWrappedKeyResponseE;

/* Symbol: _ZTVN9keymaster17VerificationTokenE */
/* Demangled: vtable for keymaster::VerificationToken */
extern void* _ZTVN9keymaster17VerificationTokenE;

/* Symbol: _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj */
/* Demangled: keymaster::AuthorizationSet::ContainsIntValue(keymaster_tag_t, unsigned int) const */
int _ZNK9keymaster16AuthorizationSet16ContainsIntValueE15keymaster_tag_tj(void);

/* Symbol: _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ExportKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17ExportKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::UpgradeKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17UpgradeKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZnamRKSt9nothrow_t */
/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
int _ZnamRKSt9nothrow_t(void);

/* Symbol: _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ExportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17ExportKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HardwareAuthToken::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17HardwareAuthToken11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17VerificationToken9SerializeEPhPKh */
/* Demangled: keymaster::VerificationToken::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17VerificationToken9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster29GetKeyCharacteristicsResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster17ExportKeyResponseE */
/* Demangled: vtable for keymaster::ExportKeyResponse */
extern void* _ZTVN9keymaster17ExportKeyResponseE;

/* Symbol: _ZN9keymaster19GenerateKeyResponseD1Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD1Ev(void);

/* Symbol: _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::FinishOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23FinishOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ImportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16ImportKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster22TAG_ROLLBACK_RESISTANTE */
/* Demangled: keymaster::TAG_ROLLBACK_RESISTANT */
extern void* _ZN9keymaster22TAG_ROLLBACK_RESISTANTE;

/* Symbol: _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_DEVICE */
extern void* _ZN9keymaster25TAG_ATTESTATION_ID_DEVICEE;

/* Symbol: _ZN9keymaster11TAG_PURPOSEE */
/* Demangled: keymaster::TAG_PURPOSE */
extern void* _ZN9keymaster11TAG_PURPOSEE;

/* Symbol: _ZN9keymaster17AttestKeyResponse13AllocateChainEm */
/* Demangled: keymaster::AttestKeyResponse::AllocateChain(unsigned long) */
int _ZN9keymaster17AttestKeyResponse13AllocateChainEm(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD1Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD1Ev(void);

/* Symbol: _ZN9keymaster13TAG_ALGORITHME */
/* Demangled: keymaster::TAG_ALGORITHM */
extern void* _ZN9keymaster13TAG_ALGORITHME;

/* Symbol: _ZN9keymaster7TAG_KDFE */
/* Demangled: keymaster::TAG_KDF */
extern void* _ZN9keymaster7TAG_KDFE;

/* Symbol: _ZN9keymaster6Logger9instance_E */
/* Demangled: keymaster::Logger::instance_ */
extern void* _ZN9keymaster6Logger9instance_E;

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD2Ev(void);

/* Symbol: _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh */
/* Demangled: keymaster::AddEntropyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17AddEntropyRequest9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::ImportKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster17ImportKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj */
/* Demangled: keymaster::EcCurveToKeySize(keymaster_ec_curve_t, unsigned int*) */
int _ZN9keymaster16EcCurveToKeySizeE20keymaster_ec_curve_tPj(void);

/* Symbol: _ZN9keymaster13TAG_UNIQUE_IDE */
/* Demangled: keymaster::TAG_UNIQUE_ID */
extern void* _ZN9keymaster13TAG_UNIQUE_IDE;

/* Symbol: _ZN9keymaster19TAG_EARLY_BOOT_ONLYE */
/* Demangled: keymaster::TAG_EARLY_BOOT_ONLY */
extern void* _ZN9keymaster19TAG_EARLY_BOOT_ONLYE;

/* Symbol: _ZN9keymaster6Buffer7reserveEm */
/* Demangled: keymaster::Buffer::reserve(unsigned long) */
int _ZN9keymaster6Buffer7reserveEm(void);

/* Symbol: _ZN9keymaster6Buffer12ReinitializeEPKvm */
/* Demangled: keymaster::Buffer::Reinitialize(void const*, unsigned long) */
int _ZN9keymaster6Buffer12ReinitializeEPKvm(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueLongRep(keymaster_tag_t, unsigned long, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet18GetTagValueLongRepE15keymaster_tag_tmPm(void);

/* Symbol: _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17ImportKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster18UpgradeKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueLong(keymaster_tag_t, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueLongE15keymaster_tag_tPm(void);

/* Symbol: _ZN9keymaster17TAG_OS_PATCHLEVELE */
/* Demangled: keymaster::TAG_OS_PATCHLEVEL */
extern void* _ZN9keymaster17TAG_OS_PATCHLEVELE;

/* Symbol: _ZNK9keymaster6Buffer9SerializeEPhPKh */
/* Demangled: keymaster::Buffer::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster6Buffer9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportWrappedKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23ImportWrappedKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster16ExportKeyRequestE */
/* Demangled: vtable for keymaster::ExportKeyRequest */
extern void* _ZTVN9keymaster16ExportKeyRequestE;

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD1Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD1Ev(void);

/* Symbol: _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_ */
/* Demangled: keymaster::VerificationToken::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17VerificationToken11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster11TAG_INVALIDE */
/* Demangled: keymaster::TAG_INVALID */
extern void* _ZN9keymaster11TAG_INVALIDE;

/* Symbol: _ZN9keymaster10TAG_ORIGINE */
/* Demangled: keymaster::TAG_ORIGIN */
extern void* _ZN9keymaster10TAG_ORIGINE;

/* Symbol: _ZN9keymaster12TAG_EC_CURVEE */
/* Demangled: keymaster::TAG_EC_CURVE */
extern void* _ZN9keymaster12TAG_EC_CURVEE;

/* Symbol: _ZN9keymaster16AuthorizationSetD1Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD1Ev(void);

/* Symbol: _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16ImportKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ImportKeyRequest::SerializedSize() const */
int _ZNK9keymaster16ImportKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ExportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17ExportKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster18TAG_USER_SECURE_IDE */
/* Demangled: keymaster::TAG_USER_SECURE_ID */
extern void* _ZN9keymaster18TAG_USER_SECURE_IDE;

/* Symbol: _ZN9keymaster6Buffer12ReinitializeEm */
/* Demangled: keymaster::Buffer::Reinitialize(unsigned long) */
int _ZN9keymaster6Buffer12ReinitializeEm(void);

/* Symbol: _ZN9keymaster8memcmp_sEPKvS1_m */
/* Demangled: keymaster::memcmp_s(void const*, void const*, unsigned long) */
int _ZN9keymaster8memcmp_sEPKvS1_m(void);

/* Symbol: _ZN9keymaster16AuthorizationSet5eraseEi */
/* Demangled: keymaster::AuthorizationSet::erase(int) */
int _ZN9keymaster16AuthorizationSet5eraseEi(void);

/* Symbol: _ZN9keymaster6Logger5ErrorEPKcz */
/* Demangled: keymaster::Logger::Error(char const*, ...) */
int _ZN9keymaster6Logger5ErrorEPKcz(void);

/* Symbol: _ZN9keymaster11empty_paramE */
/* Demangled: keymaster::empty_param */
extern void* _ZN9keymaster11empty_paramE;

/* Symbol: _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16ImportKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster6BufferE */
/* Demangled: vtable for keymaster::Buffer */
extern void* _ZTVN9keymaster6BufferE;

/* Symbol: _ZN9keymaster11TAG_PADDINGE */
/* Demangled: keymaster::TAG_PADDING */
extern void* _ZN9keymaster11TAG_PADDINGE;

/* Symbol: _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh */
/* Demangled: keymaster::KeymasterResponse::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17KeymasterResponse9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::FinishOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22FinishOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GetVersionResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster18GetVersionResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::CopyToParamSet(keymaster_key_param_set_t*) const */
int _ZNK9keymaster16AuthorizationSet14CopyToParamSetEP25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster19TAG_BOOTLOADER_ONLYE */
/* Demangled: keymaster::TAG_BOOTLOADER_ONLY */
extern void* _ZN9keymaster19TAG_BOOTLOADER_ONLYE;

/* Symbol: _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MANUFACTURER */
extern void* _ZN9keymaster31TAG_ATTESTATION_ID_MANUFACTURERE;

/* Symbol: _ZN9keymaster20TAG_APPLICATION_DATAE */
/* Demangled: keymaster::TAG_APPLICATION_DATA */
extern void* _ZN9keymaster20TAG_APPLICATION_DATAE;

/* Symbol: _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE */
/* Demangled: keymaster::TAG_ROLLBACK_RESISTANCE */
extern void* _ZN9keymaster23TAG_ROLLBACK_RESISTANCEE;

/* Symbol: _ZN9keymaster19TAG_ASSOCIATED_DATAE */
/* Demangled: keymaster::TAG_ASSOCIATED_DATA */
extern void* _ZN9keymaster19TAG_ASSOCIATED_DATAE;

/* Symbol: _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::SerializedSize() const */
int _ZNK9keymaster28GetKeyCharacteristicsRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_SERIAL */
extern void* _ZN9keymaster25TAG_ATTESTATION_ID_SERIALE;

/* Symbol: _ZN9keymaster18TAG_USER_AUTH_TYPEE */
/* Demangled: keymaster::TAG_USER_AUTH_TYPE */
extern void* _ZN9keymaster18TAG_USER_AUTH_TYPEE;

/* Symbol: _ZN9keymaster6Logger7WarningEPKcz */
/* Demangled: keymaster::Logger::Warning(char const*, ...) */
int _ZN9keymaster6Logger7WarningEPKcz(void);

/* Symbol: _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_ */
/* Demangled: keymaster::KeymasterResponse::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17KeymasterResponse11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv */
/* Demangled: keymaster::AddEntropyRequest::SerializedSize() const */
int _ZNK9keymaster17AddEntropyRequest14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster21BeginOperationRequestE */
/* Demangled: vtable for keymaster::BeginOperationRequest */
extern void* _ZTVN9keymaster21BeginOperationRequestE;

/* Symbol: _ZnwmRKSt9nothrow_t */
/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
int _ZnwmRKSt9nothrow_t(void);

/* Symbol: _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23UpdateOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster13append_to_bufEPhPKhPKvm */
/* Demangled: keymaster::append_to_buf(unsigned char*, unsigned char const*, void const*, unsigned long) */
int _ZN9keymaster13append_to_bufEPhPKhPKvm(void);

/* Symbol: _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::AttestKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17AttestKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh */
/* Demangled: keymaster::HardwareAuthToken::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17HardwareAuthToken9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AuthorizationSet8FreeDataEv */
/* Demangled: keymaster::AuthorizationSet::FreeData() */
int _ZN9keymaster16AuthorizationSet8FreeDataEv(void);

/* Symbol: _ZN9keymaster17TAG_ROOT_OF_TRUSTE */
/* Demangled: keymaster::TAG_ROOT_OF_TRUST */
extern void* _ZN9keymaster17TAG_ROOT_OF_TRUSTE;

/* Symbol: _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::FinishOperationResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster23FinishOperationResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::DeleteKeyRequest::SerializedSize() const */
int _ZNK9keymaster16DeleteKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv */
/* Demangled: keymaster::HmacSharingParametersArray::SerializedSize() const */
int _ZNK9keymaster26HmacSharingParametersArray14SerializedSizeEv(void);

/* Symbol: _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ComputeSharedHmacResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster25ComputeSharedHmacResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetMaskingKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest21SetMaskingKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster21TAG_MAX_USES_PER_BOOTE */
/* Demangled: keymaster::TAG_MAX_USES_PER_BOOT */
extern void* _ZN9keymaster21TAG_MAX_USES_PER_BOOTE;

/* Symbol: _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE */
/* Demangled: keymaster::TAG_TRUSTED_CONFIRMATION_REQUIRED */
extern void* _ZN9keymaster33TAG_TRUSTED_CONFIRMATION_REQUIREDE;

/* Symbol: _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GetVersionResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster18GetVersionResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv */
/* Demangled: keymaster::HmacSharingParameters::SerializedSize() const */
int _ZNK9keymaster21HmacSharingParameters14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster29GetKeyCharacteristicsResponseE */
/* Demangled: vtable for keymaster::GetKeyCharacteristicsResponse */
extern void* _ZTVN9keymaster29GetKeyCharacteristicsResponseE;

/* Symbol: _ZTVN9keymaster22FinishOperationRequestE */
/* Demangled: vtable for keymaster::FinishOperationRequest */
extern void* _ZTVN9keymaster22FinishOperationRequestE;

/* Symbol: _ZN9keymaster12TAG_KEY_SIZEE */
/* Demangled: keymaster::TAG_KEY_SIZE */
extern void* _ZN9keymaster12TAG_KEY_SIZEE;

/* Symbol: _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::AttestKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17AttestKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZTVN9keymaster17UpgradeKeyRequestE */
/* Demangled: vtable for keymaster::UpgradeKeyRequest */
extern void* _ZTVN9keymaster17UpgradeKeyRequestE;

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm */
/* Demangled: keymaster::AuthorizationSet::GetTagValueDate(keymaster_tag_t, unsigned long*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueDateE15keymaster_tag_tPm(void);

/* Symbol: _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_MEID */
extern void* _ZN9keymaster23TAG_ATTESTATION_ID_MEIDE;

/* Symbol: _ZN9keymaster10TAG_DIGESTE */
/* Demangled: keymaster::TAG_DIGEST */
extern void* _ZN9keymaster10TAG_DIGESTE;

/* Symbol: _ZNK9keymaster6Buffer14available_readEv */
/* Demangled: keymaster::Buffer::available_read() const */
int _ZNK9keymaster6Buffer14available_readEv(void);

/* Symbol: _ZTVN9keymaster22BeginOperationResponseE */
/* Demangled: vtable for keymaster::BeginOperationResponse */
extern void* _ZTVN9keymaster22BeginOperationResponseE;

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t */
/* Demangled: keymaster::AuthorizationSet::GetTagValueBool(keymaster_tag_t) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueBoolE15keymaster_tag_t(void);

/* Symbol: _ZN9keymaster14TAG_OS_VERSIONE */
/* Demangled: keymaster::TAG_OS_VERSION */
extern void* _ZN9keymaster14TAG_OS_VERSIONE;

/* Symbol: _ZN9keymaster14TAG_BLOCK_MODEE */
/* Demangled: keymaster::TAG_BLOCK_MODE */
extern void* _ZN9keymaster14TAG_BLOCK_MODEE;

/* Symbol: _ZdaPv */
/* Demangled: operator delete[](void*) */
int _ZdaPv(void);

/* Symbol: _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::FinishOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22FinishOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE */
/* Demangled: keymaster::copy_size_and_data_from_buf(unsigned char const**, unsigned char const*, unsigned long*, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*) */
int _ZN9keymaster27copy_size_and_data_from_bufEPPKhS1_PmPNS_9UniquePtrIA_hNS_13DefaultDeleteIS5_EEEE(void);

/* Symbol: _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::ImportKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster17ImportKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyRequest::SetWrappedMaterial(void const*, unsigned long) */
int _ZN9keymaster23ImportWrappedKeyRequest18SetWrappedMaterialEPKvm(void);

/* Symbol: _ZTVN9keymaster16ImportKeyRequestE */
/* Demangled: vtable for keymaster::ImportKeyRequest */
extern void* _ZTVN9keymaster16ImportKeyRequestE;

/* Symbol: _ZN9keymaster18UpgradeKeyResponseD1Ev */
/* Demangled: keymaster::UpgradeKeyResponse::~UpgradeKeyResponse() */
int _ZN9keymaster18UpgradeKeyResponseD1Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet13reserve_elemsEm */
/* Demangled: keymaster::AuthorizationSet::reserve_elems(unsigned long) */
int _ZN9keymaster16AuthorizationSet13reserve_elemsEm(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11DeduplicateEv */
/* Demangled: keymaster::AuthorizationSet::Deduplicate() */
int _ZN9keymaster16AuthorizationSet11DeduplicateEv(void);

/* Symbol: _ZTVN9keymaster25ComputeSharedHmacResponseE */
/* Demangled: vtable for keymaster::ComputeSharedHmacResponse */
extern void* _ZTVN9keymaster25ComputeSharedHmacResponseE;

/* Symbol: _ZN9keymaster16AttestKeyRequestD1Ev */
/* Demangled: keymaster::AttestKeyRequest::~AttestKeyRequest() */
int _ZN9keymaster16AttestKeyRequestD1Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet16reserve_indirectEm */
/* Demangled: keymaster::AuthorizationSet::reserve_indirect(unsigned long) */
int _ZN9keymaster16AuthorizationSet16reserve_indirectEm(void);

/* Symbol: _ZN9keymaster12StringifyTagE15keymaster_tag_t */
/* Demangled: keymaster::StringifyTag(keymaster_tag_t) */
int _ZN9keymaster12StringifyTagE15keymaster_tag_t(void);

/* Symbol: _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE */
/* Demangled: keymaster::TAG_DEVICE_UNIQUE_ATTESTATION */
extern void* _ZN9keymaster29TAG_DEVICE_UNIQUE_ATTESTATIONE;

/* Symbol: _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster19GenerateKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::BeginOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster22BeginOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueEnum(keymaster_tag_t, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet15GetTagValueEnumE15keymaster_tag_tPj(void);

/* Symbol: _ZN9keymaster11TAG_USER_IDE */
/* Demangled: keymaster::TAG_USER_ID */
extern void* _ZN9keymaster11TAG_USER_IDE;

/* Symbol: _ZN9keymaster6Logger4InfoEPKcz */
/* Demangled: keymaster::Logger::Info(char const*, ...) */
int _ZN9keymaster6Logger4InfoEPKcz(void);

/* Symbol: _ZN9keymaster6Buffer5ClearEv */
/* Demangled: keymaster::Buffer::Clear() */
int _ZN9keymaster6Buffer5ClearEv(void);

/* Symbol: _ZNK9keymaster17VerificationToken14SerializedSizeEv */
/* Demangled: keymaster::VerificationToken::SerializedSize() const */
int _ZNK9keymaster17VerificationToken14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster17AddEntropyRequestE */
/* Demangled: vtable for keymaster::AddEntropyRequest */
extern void* _ZTVN9keymaster17AddEntropyRequestE;

/* Symbol: _ZN9keymaster6Buffer11DeserializeEPPKhS2_ */
/* Demangled: keymaster::Buffer::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster6Buffer11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::ImportWrappedKeyRequest::SerializedSize() const */
int _ZNK9keymaster23ImportWrappedKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster23UpdateOperationResponseE */
/* Demangled: vtable for keymaster::UpdateOperationResponse */
extern void* _ZTVN9keymaster23UpdateOperationResponseE;

/* Symbol: _ZTVN9keymaster21HmacSharingParametersE */
/* Demangled: vtable for keymaster::HmacSharingParameters */
extern void* _ZTVN9keymaster21HmacSharingParametersE;

/* Symbol: _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm */
/* Demangled: keymaster::AuthorizationSet::ComputeIndirectDataSize(keymaster_key_param_t const*, unsigned long) */
int _ZN9keymaster16AuthorizationSet23ComputeIndirectDataSizeEPK21keymaster_key_param_tm(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet14SerializedSizeEv */
/* Demangled: keymaster::AuthorizationSet::SerializedSize() const */
int _ZNK9keymaster16AuthorizationSet14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::BeginOperationRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster21BeginOperationRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::DeleteKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16DeleteKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

/* Symbol: _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster19GenerateKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster29GetKeyCharacteristicsResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ExportKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster16ExportKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster16AuthorizationSet5ClearEv */
/* Demangled: keymaster::AuthorizationSet::Clear() */
int _ZN9keymaster16AuthorizationSet5ClearEv(void);

/* Symbol: _ZTVN9keymaster16AuthorizationSetE */
/* Demangled: vtable for keymaster::AuthorizationSet */
extern void* _ZTVN9keymaster16AuthorizationSetE;

/* Symbol: _ZN9keymaster19GenerateKeyResponseD0Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD0Ev(void);

/* Symbol: _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::AttestKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16AttestKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::DeserializeIndirectData(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet23DeserializeIndirectDataEPPKhS2_(void);

/* Symbol: _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::BeginOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster21BeginOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::UpdateOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster22UpdateOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::DeleteKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16DeleteKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster23FinishOperationResponseE */
/* Demangled: vtable for keymaster::FinishOperationResponse */
extern void* _ZTVN9keymaster23FinishOperationResponseE;

/* Symbol: _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj */
/* Demangled: keymaster::AuthorizationSet::GetTagValueIntRep(keymaster_tag_t, unsigned long, unsigned int*) const */
int _ZNK9keymaster16AuthorizationSet17GetTagValueIntRepE15keymaster_tag_tmPj(void);

/* Symbol: _ZdlPv */
/* Demangled: operator delete(void*) */
int _ZdlPv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh */
/* Demangled: keymaster::AuthorizationSet::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16AuthorizationSet9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::ExportKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16ExportKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD0Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD0Ev(void);

/* Symbol: _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh */
/* Demangled: keymaster::HmacSharingParameters::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster21HmacSharingParameters9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::UpdateOperationRequest::SerializedSize() const */
int _ZNK9keymaster22UpdateOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster28GetKeyCharacteristicsRequestE */
/* Demangled: vtable for keymaster::GetKeyCharacteristicsRequest */
extern void* _ZTVN9keymaster28GetKeyCharacteristicsRequestE;

/* Symbol: _ZTVN9keymaster17KeymasterResponseE */
/* Demangled: vtable for keymaster::KeymasterResponse */
extern void* _ZTVN9keymaster17KeymasterResponseE;

/* Symbol: _ZTVN9keymaster18GetVersionResponseE */
/* Demangled: vtable for keymaster::GetVersionResponse */
extern void* _ZTVN9keymaster18GetVersionResponseE;

/* Symbol: _ZN9keymaster16AuthorizationSet4SortEv */
/* Demangled: keymaster::AuthorizationSet::Sort() */
int _ZN9keymaster16AuthorizationSet4SortEv(void);

/* Symbol: _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv */
/* Demangled: keymaster::AuthorizationSet::SerializedSizeOfElements() const */
int _ZNK9keymaster16AuthorizationSet24SerializedSizeOfElementsEv(void);

/* Symbol: _ZN9keymaster6Buffer5writeEPKhm */
/* Demangled: keymaster::Buffer::write(unsigned char const*, unsigned long) */
int _ZN9keymaster6Buffer5writeEPKhm(void);

/* Symbol: _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster28GetKeyCharacteristicsRequest9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm */
/* Demangled: keymaster::UpgradeKeyRequest::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster17UpgradeKeyRequest14SetKeyMaterialEPKvm(void);

/* Symbol: _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev */
/* Demangled: keymaster::GetKeyCharacteristicsRequest::~GetKeyCharacteristicsRequest() */
int _ZN9keymaster28GetKeyCharacteristicsRequestD1Ev(void);

/* Symbol: _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::Difference(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet10DifferenceERK25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::GetKeyCharacteristicsResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster29GetKeyCharacteristicsResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HmacSharingParameters::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster21HmacSharingParameters11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t */
/* Demangled: keymaster::EcKeySizeToCurve(unsigned int, keymaster_ec_curve_t*) */
int _ZN9keymaster16EcKeySizeToCurveEjP20keymaster_ec_curve_t(void);

/* Symbol: _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE */
/* Demangled: keymaster::TAG_IDENTITY_CREDENTIAL_KEY */
extern void* _ZN9keymaster27TAG_IDENTITY_CREDENTIAL_KEYE;

/* Symbol: _ZN9keymaster6Logger6SevereEPKcz */
/* Demangled: keymaster::Logger::Severe(char const*, ...) */
int _ZN9keymaster6Logger6SevereEPKcz(void);

/* Symbol: __cxa_pure_virtual */
/* Demangled: __cxa_pure_virtual */
int __cxa_pure_virtual(void);

/* Symbol: _ZTVN9keymaster22UpdateOperationRequestE */
/* Demangled: vtable for keymaster::UpdateOperationRequest */
extern void* _ZTVN9keymaster22UpdateOperationRequestE;

/* Symbol: _ZN9keymaster21TAG_CREATION_DATETIMEE */
/* Demangled: keymaster::TAG_CREATION_DATETIME */
extern void* _ZN9keymaster21TAG_CREATION_DATETIMEE;

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD0Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD0Ev(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::UpgradeKeyRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster17UpgradeKeyRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_ */
/* Demangled: keymaster::HmacSharingParametersArray::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster26HmacSharingParametersArray11DeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster16DeleteKeyRequestE */
/* Demangled: vtable for keymaster::DeleteKeyRequest */
extern void* _ZTVN9keymaster16DeleteKeyRequestE;

/* Symbol: _ZN9keymaster19GenerateKeyResponseD2Ev */
/* Demangled: keymaster::GenerateKeyResponse::~GenerateKeyResponse() */
int _ZN9keymaster19GenerateKeyResponseD2Ev(void);

/* Symbol: _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh */
/* Demangled: keymaster::HmacSharingParametersArray::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster26HmacSharingParametersArray9SerializeEPhPKh(void);

/* Symbol: _ZN9keymaster13TAG_ALL_USERSE */
/* Demangled: keymaster::TAG_ALL_USERS */
extern void* _ZN9keymaster13TAG_ALL_USERSE;

/* Symbol: _ZN9keymaster16AuthorizationSetD0Ev */
/* Demangled: keymaster::AuthorizationSet::~AuthorizationSet() */
int _ZN9keymaster16AuthorizationSetD0Ev(void);

/* Symbol: _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE */
/* Demangled: keymaster::TAG_ORIGINATION_EXPIRE_DATETIME */
extern void* _ZN9keymaster31TAG_ORIGINATION_EXPIRE_DATETIMEE;

/* Symbol: _ZN9keymaster20TAG_ALL_APPLICATIONSE */
/* Demangled: keymaster::TAG_ALL_APPLICATIONS */
extern void* _ZN9keymaster20TAG_ALL_APPLICATIONSE;

/* Symbol: _ZNK9keymaster17KeymasterResponse14SerializedSizeEv */
/* Demangled: keymaster::KeymasterResponse::SerializedSize() const */
int _ZNK9keymaster17KeymasterResponse14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_ */
/* Demangled: keymaster::UpdateOperationRequest::Deserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22UpdateOperationRequest11DeserializeEPPKhS2_(void);

/* Symbol: _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster23UpdateOperationResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster17AttestKeyResponseD2Ev */
/* Demangled: keymaster::AttestKeyResponse::~AttestKeyResponse() */
int _ZN9keymaster17AttestKeyResponseD2Ev(void);

/* Symbol: _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::ImportWrappedKeyResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster24ImportWrappedKeyResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZTVN9keymaster17ImportKeyResponseE */
/* Demangled: vtable for keymaster::ImportKeyResponse */
extern void* _ZTVN9keymaster17ImportKeyResponseE;

/* Symbol: _ZN9keymaster6Buffer4readEPhm */
/* Demangled: keymaster::Buffer::read(unsigned char*, unsigned long) */
int _ZN9keymaster6Buffer4readEPhm(void);

/* Symbol: _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh */
/* Demangled: keymaster::ExportKeyRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster16ExportKeyRequest9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv */
/* Demangled: keymaster::UpgradeKeyResponse::NonErrorSerializedSize() const */
int _ZNK9keymaster18UpgradeKeyResponse22NonErrorSerializedSizeEv(void);

/* Symbol: _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t */
/* Demangled: keymaster::AuthorizationSet::push_back(keymaster_key_param_t) */
int _ZN9keymaster16AuthorizationSet9push_backE21keymaster_key_param_t(void);

/* Symbol: _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_ */
/* Demangled: keymaster::AuthorizationSet::DeserializeElementsData(unsigned char const**, unsigned char const*) */
int _ZN9keymaster16AuthorizationSet23DeserializeElementsDataEPPKhS2_(void);

/* Symbol: _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE */
/* Demangled: keymaster::TAG_ECIES_SINGLE_HASH_MODE */
extern void* _ZN9keymaster26TAG_ECIES_SINGLE_HASH_MODEE;

/* Symbol: _ZN9keymaster14TAG_DIGEST_OLDE */
/* Demangled: keymaster::TAG_DIGEST_OLD */
extern void* _ZN9keymaster14TAG_DIGEST_OLDE;

/* Symbol: _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::BeginOperationRequest::SerializedSize() const */
int _ZNK9keymaster21BeginOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::UpdateOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster23UpdateOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster10dup_bufferEPKvm */
/* Demangled: keymaster::dup_buffer(void const*, unsigned long) */
int _ZN9keymaster10dup_bufferEPKvm(void);

/* Symbol: _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::AttestKeyRequest::SerializedSize() const */
int _ZNK9keymaster16AttestKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZTVN9keymaster17AttestKeyResponseE */
/* Demangled: vtable for keymaster::AttestKeyResponse */
extern void* _ZTVN9keymaster17AttestKeyResponseE;

/* Symbol: _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t */
/* Demangled: keymaster::AuthorizationSet::Union(keymaster_key_param_set_t const&) */
int _ZN9keymaster16AuthorizationSet5UnionERK25keymaster_key_param_set_t(void);

/* Symbol: _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE */
/* Demangled: keymaster::TAG_ATTESTATION_ID_IMEI */
extern void* _ZN9keymaster23TAG_ATTESTATION_ID_IMEIE;

/* Symbol: _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_ */
/* Demangled: keymaster::BeginOperationResponse::NonErrorDeserialize(unsigned char const**, unsigned char const*) */
int _ZN9keymaster22BeginOperationResponse19NonErrorDeserializeEPPKhS2_(void);

/* Symbol: _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE */
/* Demangled: keymaster::AuthorizationSet::set_invalid(keymaster::AuthorizationSet::Error) */
int _ZN9keymaster16AuthorizationSet11set_invalidENS0_5ErrorE(void);

/* Symbol: _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh */
/* Demangled: keymaster::BeginOperationRequest::Serialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster21BeginOperationRequest9SerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv */
/* Demangled: keymaster::UpgradeKeyRequest::SerializedSize() const */
int _ZNK9keymaster17UpgradeKeyRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm */
/* Demangled: keymaster::ImportWrappedKeyResponse::SetKeyMaterial(void const*, unsigned long) */
int _ZN9keymaster24ImportWrappedKeyResponse14SetKeyMaterialEPKvm(void);

/* Symbol: _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh */
/* Demangled: keymaster::GenerateKeyResponse::NonErrorSerialize(unsigned char*, unsigned char const*) const */
int _ZNK9keymaster19GenerateKeyResponse17NonErrorSerializeEPhPKh(void);

/* Symbol: _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv */
/* Demangled: keymaster::FinishOperationRequest::SerializedSize() const */
int _ZNK9keymaster22FinishOperationRequest14SerializedSizeEv(void);

/* Symbol: _ZN9keymaster17UpgradeKeyRequestD2Ev */
/* Demangled: keymaster::UpgradeKeyRequest::~UpgradeKeyRequest() */
int _ZN9keymaster17UpgradeKeyRequestD2Ev(void);

/* Symbol: _ZN9keymaster14TAG_MAC_LENGTHE */
/* Demangled: keymaster::TAG_MAC_LENGTH */
extern void* _ZN9keymaster14TAG_MAC_LENGTHE;

/* Symbol: _ZN9keymaster16TAG_AUTH_TIMEOUTE */
/* Demangled: keymaster::TAG_AUTH_TIMEOUT */
extern void* _ZN9keymaster16TAG_AUTH_TIMEOUTE;

/* Symbol: _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE */
/* Demangled: keymaster::TAG_ALLOW_WHILE_ON_BODY */
extern void* _ZN9keymaster23TAG_ALLOW_WHILE_ON_BODYE;

__END_DECLS

#endif /* BEGONIA_RE_LIBKEYMASTER_MESSAGES_H */
