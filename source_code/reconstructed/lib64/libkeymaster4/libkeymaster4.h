/*
 * Reverse-Engineered ABI Specification for: libkeymaster4.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libkeymaster4.so
 */

#ifndef BEGONIA_RE_LIBKEYMASTER4_H
#define BEGONIA_RE_LIBKEYMASTER4_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_ */
/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster1_device>::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_(void);

/* Symbol: _ZN9keymaster4V4_02ng16hidlKeyParams2KmERKN7android8hardware8hidl_vecINS3_9keymaster4V4_012KeyParameterEEE */
/* Demangled: keymaster::V4_0::ng::hidlKeyParams2Km(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&) */
int _ZN9keymaster4V4_02ng16hidlKeyParams2KmERKN7android8hardware8hidl_vecINS3_9keymaster4V4_012KeyParameterEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device15getHardwareInfoENSt3__18functionIFvN7android8hardware9keymaster4V4_013SecurityLevelERKNS6_11hidl_stringESC_EEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getHardwareInfo(std::__1::function<void (android::hardware::keymaster::V4_0::SecurityLevel, android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device15getHardwareInfoENSt3__18functionIFvN7android8hardware9keymaster4V4_013SecurityLevelERKNS6_11hidl_stringESC_EEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9deleteKeyERKN7android8hardware8hidl_vecIhEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::deleteKey(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9deleteKeyERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6updateEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEERKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeEjSB_SE_EEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::update(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, android::hardware::keymaster::V4_0::VerificationToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, unsigned int, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6updateEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEERKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeEjSB_SE_EEE(void);

/* Symbol: _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android8hardware9keymaster4V4_016IKeymasterDeviceE */
/* Demangled: construction vtable for android::hardware::keymaster::V4_0::IKeymasterDevice-in-keymaster::V4_0::ng::AndroidKeymaster4Device */
extern void* _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android8hardware9keymaster4V4_016IKeymasterDeviceE;

/* Symbol: _ZNK9keymaster30KeymasterPassthroughKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::KeymasterPassthroughKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster30KeymasterPassthroughKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_ */
/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster2_device>::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_(void);

/* Symbol: _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster2_device */
/* Demangled: keymaster::KeymasterPassthroughEngine::createInstance(keymaster2_device const*) */
int _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster2_device(void);

/* Symbol: _ZN9keymaster29KeymasterPassthroughOperationI17keymaster1_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_ */
/* Demangled: keymaster::KeymasterPassthroughOperation<keymaster1_device>::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster29KeymasterPassthroughOperationI17keymaster1_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_(void);

/* Symbol: _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev */
/* Demangled: virtual thunk to keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
int _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21getKeyCharacteristicsERKN7android8hardware8hidl_vecIhEES8_S8_NSt3__18functionIFvNS4_9keymaster4V4_09ErrorCodeERKNSC_18KeyCharacteristicsEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getKeyCharacteristics(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21getKeyCharacteristicsERKN7android8hardware8hidl_vecIhEES8_S8_NSt3__18functionIFvNS4_9keymaster4V4_09ErrorCodeERKNSC_18KeyCharacteristicsEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9attestKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeERKNS5_IS6_EEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::attestKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::hidl_vec<unsigned char> > const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9attestKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeERKNS5_IS6_EEEEE(void);

/* Symbol: _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_ */
/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster2_device>::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device11generateKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEERKNS7_18KeyCharacteristicsEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::generateKey(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device11generateKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEERKNS7_18KeyCharacteristicsEEEE(void);

/* Symbol: _ZN9keymaster15ConfigureDeviceEP17keymaster2_device */
/* Demangled: keymaster::ConfigureDevice(keymaster2_device*) */
int _ZN9keymaster15ConfigureDeviceEP17keymaster2_device(void);

/* Symbol: _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedImportFormatsEPm */
/* Demangled: keymaster::KeymasterPassthroughKeyFactory::SupportedImportFormats(unsigned long*) const */
int _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedImportFormatsEPm(void);

/* Symbol: _ZTVN9keymaster30KeymasterPassthroughKeyFactoryE */
/* Demangled: vtable for keymaster::KeymasterPassthroughKeyFactory */
extern void* _ZTVN9keymaster30KeymasterPassthroughKeyFactoryE;

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device24getHmacSharingParametersENSt3__18functionIFvN7android8hardware9keymaster4V4_09ErrorCodeERKNS8_21HmacSharingParametersEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getHmacSharingParameters(std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::HmacSharingParameters const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device24getHmacSharingParametersENSt3__18functionIFvN7android8hardware9keymaster4V4_09ErrorCodeERKNS8_21HmacSharingParametersEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9importKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENS7_9KeyFormatERKNS5_IhEENSt3__18functionIFvNS7_9ErrorCodeESF_RKNS7_18KeyCharacteristicsEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::importKey(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::KeyFormat, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9importKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENS7_9KeyFormatERKNS5_IhEENSt3__18functionIFvNS7_9ErrorCodeESF_RKNS7_18KeyCharacteristicsEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device19verifyAuthorizationEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS7_17HardwareAuthTokenENSt3__18functionIFvNS7_9ErrorCodeERKNS7_17VerificationTokenEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::verifyAuthorization(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::VerificationToken const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device19verifyAuthorizationEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS7_17HardwareAuthTokenENSt3__18functionIFvNS7_9ErrorCodeERKNS7_17VerificationTokenEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device10upgradeKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeES8_EEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::upgradeKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device10upgradeKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeES8_EEE(void);

/* Symbol: _ZN9keymaster12GetOsVersionEv */
/* Demangled: keymaster::GetOsVersion() */
int _ZN9keymaster12GetOsVersionEv(void);

/* Symbol: _ZN9keymaster29KeymasterPassthroughOperationI17keymaster2_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_ */
/* Demangled: keymaster::KeymasterPassthroughOperation<keymaster2_device>::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
int _ZN9keymaster29KeymasterPassthroughOperationI17keymaster2_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device17computeSharedHmacERKN7android8hardware8hidl_vecINS4_9keymaster4V4_021HmacSharingParametersEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::computeSharedHmac(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::HmacSharingParameters> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device17computeSharedHmacERKN7android8hardware8hidl_vecINS4_9keymaster4V4_021HmacSharingParametersEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC1EN7android8hardware9keymaster4V4_013SecurityLevelE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::AndroidKeymaster4Device(android::hardware::keymaster::V4_0::SecurityLevel) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC1EN7android8hardware9keymaster4V4_013SecurityLevelE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD2Ev */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD2Ev(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5beginEN7android8hardware9keymaster4V4_010KeyPurposeERKNS4_8hidl_vecIhEERKNS8_INS6_12KeyParameterEEERKNS6_17HardwareAuthTokenENSt3__18functionIFvNS6_9ErrorCodeESF_mEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::begin(android::hardware::keymaster::V4_0::KeyPurpose, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, unsigned long)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5beginEN7android8hardware9keymaster4V4_010KeyPurposeERKNS4_8hidl_vecIhEERKNS8_INS6_12KeyParameterEEERKNS6_17HardwareAuthTokenENSt3__18functionIFvNS6_9ErrorCodeESF_mEEE(void);

/* Symbol: _ZN9keymaster15GetOsPatchlevelEv */
/* Demangled: keymaster::GetOsPatchlevel() */
int _ZN9keymaster15GetOsPatchlevelEv(void);

/* Symbol: _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster1_device */
/* Demangled: keymaster::KeymasterPassthroughEngine::createInstance(keymaster1_device const*) */
int _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster1_device(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9exportKeyEN7android8hardware9keymaster4V4_09KeyFormatERKNS4_8hidl_vecIhEESB_SB_NSt3__18functionIFvNS6_9ErrorCodeESB_EEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::exportKey(android::hardware::keymaster::V4_0::KeyFormat, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9exportKeyEN7android8hardware9keymaster4V4_09KeyFormatERKNS4_8hidl_vecIhEESB_SB_NSt3__18functionIFvNS6_9ErrorCodeESB_EEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13deleteAllKeysEv */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::deleteAllKeys() */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13deleteAllKeysEv(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6finishEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEESE_RKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeESB_SE_EEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::finish(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, android::hardware::keymaster::V4_0::VerificationToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6finishEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEESE_RKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeESB_SE_EEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5abortEm */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::abort(unsigned long) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5abortEm(void);

/* Symbol: _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedExportFormatsEPm */
/* Demangled: keymaster::KeymasterPassthroughKeyFactory::SupportedExportFormats(unsigned long*) const */
int _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedExportFormatsEPm(void);

/* Symbol: _ZTVN9keymaster23KeymasterPassthroughKeyE */
/* Demangled: vtable for keymaster::KeymasterPassthroughKey */
extern void* _ZTVN9keymaster23KeymasterPassthroughKeyE;

/* Symbol: _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_ */
/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster1_device>::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_(void);

/* Symbol: _ZTVN9keymaster4V4_02ng23AndroidKeymaster4DeviceE */
/* Demangled: vtable for keymaster::V4_0::ng::AndroidKeymaster4Device */
extern void* _ZTVN9keymaster4V4_02ng23AndroidKeymaster4DeviceE;

/* Symbol: _ZTTN9keymaster4V4_02ng23AndroidKeymaster4DeviceE */
/* Demangled: VTT for keymaster::V4_0::ng::AndroidKeymaster4Device */
extern void* _ZTTN9keymaster4V4_02ng23AndroidKeymaster4DeviceE;

/* Symbol: _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj */
/* Demangled: keymaster::ConfigureDevice(keymaster2_device*, unsigned int, unsigned int) */
int _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj(void);

/* Symbol: _ZN9keymaster15GetOsPatchlevelEPKc */
/* Demangled: keymaster::GetOsPatchlevel(char const*) */
int _ZN9keymaster15GetOsPatchlevelEPKc(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC2EN7android8hardware9keymaster4V4_013SecurityLevelE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::AndroidKeymaster4Device(android::hardware::keymaster::V4_0::SecurityLevel) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC2EN7android8hardware9keymaster4V4_013SecurityLevelE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device16importWrappedKeyERKN7android8hardware8hidl_vecIhEES8_S8_RKNS5_INS4_9keymaster4V4_012KeyParameterEEEmmNSt3__18functionIFvNSA_9ErrorCodeES8_RKNSA_18KeyCharacteristicsEEEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::importWrappedKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, unsigned long, unsigned long, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device16importWrappedKeyERKN7android8hardware8hidl_vecIhEES8_S8_RKNS5_INS4_9keymaster4V4_012KeyParameterEEEmmNSt3__18functionIFvNSA_9ErrorCodeES8_RKNSA_18KeyCharacteristicsEEEE(void);

/* Symbol: _ZN9keymaster4V4_02ng21CreateKeymasterDeviceEN7android8hardware9keymaster4V4_013SecurityLevelE */
/* Demangled: keymaster::V4_0::ng::CreateKeymasterDevice(android::hardware::keymaster::V4_0::SecurityLevel) */
int _ZN9keymaster4V4_02ng21CreateKeymasterDeviceEN7android8hardware9keymaster4V4_013SecurityLevelE(void);

/* Symbol: _ZNK9keymaster23KeymasterPassthroughKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm */
/* Demangled: keymaster::KeymasterPassthroughKey::formatted_key_material(keymaster_key_format_t, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) const */
int _ZNK9keymaster23KeymasterPassthroughKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

/* Symbol: _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev */
/* Demangled: virtual thunk to keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
int _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13addRngEntropyERKN7android8hardware8hidl_vecIhEE */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::addRngEntropy(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13addRngEntropyERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21destroyAttestationIdsEv */
/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::destroyAttestationIds() */
int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21destroyAttestationIdsEv(void);

/* Symbol: _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-keymaster::V4_0::ng::AndroidKeymaster4Device */
extern void* _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN9keymaster12GetOsVersionEPKc */
/* Demangled: keymaster::GetOsVersion(char const*) */
int _ZN9keymaster12GetOsVersionEPKc(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBKEYMASTER4_H */
