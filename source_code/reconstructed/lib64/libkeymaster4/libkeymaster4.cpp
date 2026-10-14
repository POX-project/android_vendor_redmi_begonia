/*
 * Reverse-Engineered Source for: libkeymaster4.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkeymaster4"

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
#include "libkeymaster4.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster1_device>::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_(void) {
    ALOGD("_ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::hidlKeyParams2Km(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng16hidlKeyParams2KmERKN7android8hardware8hidl_vecINS3_9keymaster4V4_012KeyParameterEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng16hidlKeyParams2KmERKN7android8hardware8hidl_vecINS3_9keymaster4V4_012KeyParameterEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getHardwareInfo(std::__1::function<void (android::hardware::keymaster::V4_0::SecurityLevel, android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device15getHardwareInfoENSt3__18functionIFvN7android8hardware9keymaster4V4_013SecurityLevelERKNS6_11hidl_stringESC_EEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device15getHardwareInfoENSt3__18functionIFvN7android8hardware9keymaster4V4_013SecurityLevelERKNS6_11hidl_stringESC_EEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::deleteKey(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9deleteKeyERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device9deleteKeyERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::update(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, android::hardware::keymaster::V4_0::VerificationToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, unsigned int, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6updateEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEERKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeEjSB_SE_EEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device6updateEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEERKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeEjSB_SE_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::keymaster::V4_0::IKeymasterDevice-in-keymaster::V4_0::ng::AndroidKeymaster4Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android8hardware9keymaster4V4_016IKeymasterDeviceE = NULL;

/* Demangled: keymaster::KeymasterPassthroughKeyFactory::LoadKey(keymaster::TKeymasterBlob<keymaster_key_blob_t>&&, keymaster::AuthorizationSet const&, keymaster::AuthorizationSet&&, keymaster::AuthorizationSet&&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster30KeymasterPassthroughKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster30KeymasterPassthroughKeyFactory7LoadKeyEONS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEOS5_S8_PNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster2_device>::ImportKey(keymaster::AuthorizationSet const&, keymaster_key_format_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_(void) {
    ALOGD("_ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE9ImportKeyERKNS_16AuthorizationSetE22keymaster_key_format_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS9_PS3_SD_() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughEngine::createInstance(keymaster2_device const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster2_device(void) {
    ALOGD("_ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster2_device() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughOperation<keymaster1_device>::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29KeymasterPassthroughOperationI17keymaster1_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_(void) {
    ALOGD("_ZN9keymaster29KeymasterPassthroughOperationI17keymaster1_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_() called");
    return 0;
}

/* Demangled: virtual thunk to keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev(void) {
    ALOGD("_ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD0Ev() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getKeyCharacteristics(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21getKeyCharacteristicsERKN7android8hardware8hidl_vecIhEES8_S8_NSt3__18functionIFvNS4_9keymaster4V4_09ErrorCodeERKNSC_18KeyCharacteristicsEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device21getKeyCharacteristicsERKN7android8hardware8hidl_vecIhEES8_S8_NSt3__18functionIFvNS4_9keymaster4V4_09ErrorCodeERKNSC_18KeyCharacteristicsEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::attestKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::hidl_vec<unsigned char> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9attestKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeERKNS5_IS6_EEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device9attestKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeERKNS5_IS6_EEEEE() called");
    return 0;
}

/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster2_device>::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_(void) {
    ALOGD("_ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster2_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::generateKey(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device11generateKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEERKNS7_18KeyCharacteristicsEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device11generateKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEERKNS7_18KeyCharacteristicsEEEE() called");
    return 0;
}

/* Demangled: keymaster::ConfigureDevice(keymaster2_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15ConfigureDeviceEP17keymaster2_device(void) {
    ALOGD("_ZN9keymaster15ConfigureDeviceEP17keymaster2_device() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughKeyFactory::SupportedImportFormats(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedImportFormatsEPm(void) {
    ALOGD("_ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedImportFormatsEPm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::KeymasterPassthroughKeyFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster30KeymasterPassthroughKeyFactoryE = NULL;

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::getHmacSharingParameters(std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::HmacSharingParameters const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device24getHmacSharingParametersENSt3__18functionIFvN7android8hardware9keymaster4V4_09ErrorCodeERKNS8_21HmacSharingParametersEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device24getHmacSharingParametersENSt3__18functionIFvN7android8hardware9keymaster4V4_09ErrorCodeERKNS8_21HmacSharingParametersEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::importKey(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::KeyFormat, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9importKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENS7_9KeyFormatERKNS5_IhEENSt3__18functionIFvNS7_9ErrorCodeESF_RKNS7_18KeyCharacteristicsEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device9importKeyERKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEENS7_9KeyFormatERKNS5_IhEENSt3__18functionIFvNS7_9ErrorCodeESF_RKNS7_18KeyCharacteristicsEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::verifyAuthorization(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::keymaster::V4_0::VerificationToken const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device19verifyAuthorizationEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS7_17HardwareAuthTokenENSt3__18functionIFvNS7_9ErrorCodeERKNS7_17VerificationTokenEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device19verifyAuthorizationEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS7_17HardwareAuthTokenENSt3__18functionIFvNS7_9ErrorCodeERKNS7_17VerificationTokenEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::upgradeKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device10upgradeKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeES8_EEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device10upgradeKeyERKN7android8hardware8hidl_vecIhEERKNS5_INS4_9keymaster4V4_012KeyParameterEEENSt3__18functionIFvNSA_9ErrorCodeES8_EEE() called");
    return 0;
}

/* Demangled: keymaster::GetOsVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12GetOsVersionEv(void) {
    ALOGD("_ZN9keymaster12GetOsVersionEv() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughOperation<keymaster2_device>::Finish(keymaster::AuthorizationSet const&, keymaster::Buffer const&, keymaster::Buffer const&, keymaster::AuthorizationSet*, keymaster::Buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster29KeymasterPassthroughOperationI17keymaster2_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_(void) {
    ALOGD("_ZN9keymaster29KeymasterPassthroughOperationI17keymaster2_deviceE6FinishERKNS_16AuthorizationSetERKNS_6BufferES8_PS3_PS6_() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::computeSharedHmac(android::hardware::hidl_vec<android::hardware::keymaster::V4_0::HmacSharingParameters> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device17computeSharedHmacERKN7android8hardware8hidl_vecINS4_9keymaster4V4_021HmacSharingParametersEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device17computeSharedHmacERKN7android8hardware8hidl_vecINS4_9keymaster4V4_021HmacSharingParametersEEENSt3__18functionIFvNS7_9ErrorCodeERKNS5_IhEEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::AndroidKeymaster4Device(android::hardware::keymaster::V4_0::SecurityLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC1EN7android8hardware9keymaster4V4_013SecurityLevelE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC1EN7android8hardware9keymaster4V4_013SecurityLevelE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD2Ev(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD2Ev() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::begin(android::hardware::keymaster::V4_0::KeyPurpose, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5beginEN7android8hardware9keymaster4V4_010KeyPurposeERKNS4_8hidl_vecIhEERKNS8_INS6_12KeyParameterEEERKNS6_17HardwareAuthTokenENSt3__18functionIFvNS6_9ErrorCodeESF_mEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device5beginEN7android8hardware9keymaster4V4_010KeyPurposeERKNS4_8hidl_vecIhEERKNS8_INS6_12KeyParameterEEERKNS6_17HardwareAuthTokenENSt3__18functionIFvNS6_9ErrorCodeESF_mEEE() called");
    return 0;
}

/* Demangled: keymaster::GetOsPatchlevel() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15GetOsPatchlevelEv(void) {
    ALOGD("_ZN9keymaster15GetOsPatchlevelEv() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughEngine::createInstance(keymaster1_device const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster1_device(void) {
    ALOGD("_ZN9keymaster26KeymasterPassthroughEngine14createInstanceEPK17keymaster1_device() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::exportKey(android::hardware::keymaster::V4_0::KeyFormat, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device9exportKeyEN7android8hardware9keymaster4V4_09KeyFormatERKNS4_8hidl_vecIhEESB_SB_NSt3__18functionIFvNS6_9ErrorCodeESB_EEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device9exportKeyEN7android8hardware9keymaster4V4_09KeyFormatERKNS4_8hidl_vecIhEESB_SB_NSt3__18functionIFvNS6_9ErrorCodeESB_EEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::deleteAllKeys() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13deleteAllKeysEv(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device13deleteAllKeysEv() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::finish(unsigned long, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::HardwareAuthToken const&, android::hardware::keymaster::V4_0::VerificationToken const&, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device6finishEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEESE_RKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeESB_SE_EEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device6finishEmRKN7android8hardware8hidl_vecINS4_9keymaster4V4_012KeyParameterEEERKNS5_IhEESE_RKNS7_17HardwareAuthTokenERKNS7_17VerificationTokenENSt3__18functionIFvNS7_9ErrorCodeESB_SE_EEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::abort(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device5abortEm(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device5abortEm() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughKeyFactory::SupportedExportFormats(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedExportFormatsEPm(void) {
    ALOGD("_ZNK9keymaster30KeymasterPassthroughKeyFactory22SupportedExportFormatsEPm() called");
    return 0;
}

/* Exported Object: vtable for keymaster::KeymasterPassthroughKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster23KeymasterPassthroughKeyE = NULL;

/* Demangled: keymaster::TKeymasterPassthroughEngine<keymaster1_device>::GenerateKey(keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_(void) {
    ALOGD("_ZNK9keymaster27TKeymasterPassthroughEngineI17keymaster1_deviceE11GenerateKeyERKNS_16AuthorizationSetEPNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS3_SA_() called");
    return 0;
}

/* Exported Object: vtable for keymaster::V4_0::ng::AndroidKeymaster4Device */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster4V4_02ng23AndroidKeymaster4DeviceE = NULL;

/* Exported Object: VTT for keymaster::V4_0::ng::AndroidKeymaster4Device */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9keymaster4V4_02ng23AndroidKeymaster4DeviceE = NULL;

/* Demangled: keymaster::ConfigureDevice(keymaster2_device*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj(void) {
    ALOGD("_ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj() called");
    return 0;
}

/* Demangled: keymaster::GetOsPatchlevel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15GetOsPatchlevelEPKc(void) {
    ALOGD("_ZN9keymaster15GetOsPatchlevelEPKc() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::AndroidKeymaster4Device(android::hardware::keymaster::V4_0::SecurityLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC2EN7android8hardware9keymaster4V4_013SecurityLevelE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4DeviceC2EN7android8hardware9keymaster4V4_013SecurityLevelE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::importWrappedKey(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&, unsigned long, unsigned long, std::__1::function<void (android::hardware::keymaster::V4_0::ErrorCode, android::hardware::hidl_vec<unsigned char> const&, android::hardware::keymaster::V4_0::KeyCharacteristics const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device16importWrappedKeyERKN7android8hardware8hidl_vecIhEES8_S8_RKNS5_INS4_9keymaster4V4_012KeyParameterEEEmmNSt3__18functionIFvNSA_9ErrorCodeES8_RKNSA_18KeyCharacteristicsEEEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device16importWrappedKeyERKN7android8hardware8hidl_vecIhEES8_S8_RKNS5_INS4_9keymaster4V4_012KeyParameterEEEmmNSt3__18functionIFvNSA_9ErrorCodeES8_RKNSA_18KeyCharacteristicsEEEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::CreateKeymasterDevice(android::hardware::keymaster::V4_0::SecurityLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng21CreateKeymasterDeviceEN7android8hardware9keymaster4V4_013SecurityLevelE(void) {
    ALOGD("_ZN9keymaster4V4_02ng21CreateKeymasterDeviceEN7android8hardware9keymaster4V4_013SecurityLevelE() called");
    return 0;
}

/* Demangled: keymaster::KeymasterPassthroughKey::formatted_key_material(keymaster_key_format_t, keymaster::UniquePtr<unsigned char [], keymaster::DefaultDelete<unsigned char []> >*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster23KeymasterPassthroughKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm(void) {
    ALOGD("_ZNK9keymaster23KeymasterPassthroughKey22formatted_key_materialE22keymaster_key_format_tPNS_9UniquePtrIA_hNS_13DefaultDeleteIS3_EEEEPm() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Demangled: virtual thunk to keymaster::V4_0::ng::AndroidKeymaster4Device::~AndroidKeymaster4Device() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev(void) {
    ALOGD("_ZTv0_n24_N9keymaster4V4_02ng23AndroidKeymaster4DeviceD1Ev() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::addRngEntropy(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device13addRngEntropyERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device13addRngEntropyERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: keymaster::V4_0::ng::AndroidKeymaster4Device::destroyAttestationIds() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster4V4_02ng23AndroidKeymaster4Device21destroyAttestationIdsEv(void) {
    ALOGD("_ZN9keymaster4V4_02ng23AndroidKeymaster4Device21destroyAttestationIdsEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-keymaster::V4_0::ng::AndroidKeymaster4Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9keymaster4V4_02ng23AndroidKeymaster4DeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: keymaster::GetOsVersion(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12GetOsVersionEPKc(void) {
    ALOGD("_ZN9keymaster12GetOsVersionEPKc() called");
    return 0;
}
