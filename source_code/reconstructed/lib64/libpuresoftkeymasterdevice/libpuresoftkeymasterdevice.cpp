/*
 * Reverse-Engineered Source for: libpuresoftkeymasterdevice.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libpuresoftkeymasterdevice"

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
#include "libpuresoftkeymasterdevice.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: keymaster::PureSoftKeymasterContext::PureSoftKeymasterContext(keymaster_security_level_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContextC2E26keymaster_security_level_t(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContextC2E26keymaster_security_level_t() called");
    return 0;
}

/* Demangled: keymaster::SoftKeymasterEnforcement::ComputeSharedHmac(keymaster::HmacSharingParametersArray const&, keymaster::TKeymasterBlob<keymaster_blob_t>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24SoftKeymasterEnforcement17ComputeSharedHmacERKNS_26HmacSharingParametersArrayEPNS_14TKeymasterBlobI16keymaster_blob_tEE(void) {
    ALOGD("_ZN9keymaster24SoftKeymasterEnforcement17ComputeSharedHmacERKNS_26HmacSharingParametersArrayEPNS_14TKeymasterBlobI16keymaster_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::GetOsVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12GetOsVersionEv(void) {
    ALOGD("_ZN9keymaster12GetOsVersionEv() called");
    return 0;
}

/* Demangled: keymaster::GetOsVersion(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster12GetOsVersionEPKc(void) {
    ALOGD("_ZN9keymaster12GetOsVersionEPKc() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::CreateKeyBlob(keymaster::AuthorizationSet const&, keymaster_key_origin_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::DeleteAllKeys() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext13DeleteAllKeysEv(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext13DeleteAllKeysEv() called");
    return 0;
}

/* Exported Object: vtable for keymaster::SoftKeymasterEnforcement */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster24SoftKeymasterEnforcementE = NULL;

/* Demangled: keymaster::SoftKeymasterEnforcement::GetHmacSharingParameters(keymaster::HmacSharingParameters*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24SoftKeymasterEnforcement24GetHmacSharingParametersEPNS_21HmacSharingParametersE(void) {
    ALOGD("_ZN9keymaster24SoftKeymasterEnforcement24GetHmacSharingParametersEPNS_21HmacSharingParametersE() called");
    return 0;
}

/* Demangled: keymaster::ConfigureDevice(keymaster2_device*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj(void) {
    ALOGD("_ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj() called");
    return 0;
}

/* Demangled: keymaster::ConfigureDevice(keymaster2_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15ConfigureDeviceEP17keymaster2_device(void) {
    ALOGD("_ZN9keymaster15ConfigureDeviceEP17keymaster2_device() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::ParseKeyBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext12ParseKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext12ParseKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GenerateAttestation(keymaster::Key const&, keymaster::AuthorizationSet const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext19GenerateAttestationERKNS_3KeyERKNS_16AuthorizationSetEPNS_9UniquePtrI22keymaster_cert_chain_tNS_22CertificateChainDeleteEEE(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext19GenerateAttestationERKNS_3KeyERKNS_16AuthorizationSetEPNS_9UniquePtrI22keymaster_cert_chain_tNS_22CertificateChainDeleteEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::GetVerifiedBootParams(keymaster_blob_t*, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn16_NK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb(void) {
    ALOGD("_ZThn16_NK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb() called");
    return 0;
}

/* Exported Object: vtable for keymaster::PureSoftKeymasterContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster24PureSoftKeymasterContextE = NULL;

/* Demangled: keymaster::PureSoftKeymasterContext::PureSoftKeymasterContext(keymaster_security_level_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContextC1E26keymaster_security_level_t(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContextC1E26keymaster_security_level_t() called");
    return 0;
}

/* Demangled: keymaster::SoftKeymasterEnforcement::VerifyAuthorization(keymaster::VerifyAuthorizationRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24SoftKeymasterEnforcement19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE(void) {
    ALOGD("_ZN9keymaster24SoftKeymasterEnforcement19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9keymaster24PureSoftKeymasterContextD1Ev(void) {
    ALOGD("_ZThn16_N9keymaster24PureSoftKeymasterContextD1Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::DeleteKey(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext9DeleteKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext9DeleteKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEE() called");
    return 0;
}

/* Demangled: keymaster::GetOsPatchlevel() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15GetOsPatchlevelEv(void) {
    ALOGD("_ZN9keymaster15GetOsPatchlevelEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N9keymaster24PureSoftKeymasterContextD1Ev(void) {
    ALOGD("_ZThn24_N9keymaster24PureSoftKeymasterContextD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9keymaster24PureSoftKeymasterContextD0Ev(void) {
    ALOGD("_ZThn16_N9keymaster24PureSoftKeymasterContextD0Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GetSupportedAlgorithms(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext22GetSupportedAlgorithmsEPm(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext22GetSupportedAlgorithmsEPm() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::UpgradeKeyBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext14UpgradeKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS3_(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext14UpgradeKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS3_() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GetVerifiedBootParams(keymaster_blob_t*, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N9keymaster24PureSoftKeymasterContextD0Ev(void) {
    ALOGD("_ZThn24_N9keymaster24PureSoftKeymasterContextD0Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GetKeyFactory(keymaster_algorithm_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext13GetKeyFactoryE21keymaster_algorithm_t(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext13GetKeyFactoryE21keymaster_algorithm_t() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContextD2Ev(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContextD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9keymaster24PureSoftKeymasterContextD1Ev(void) {
    ALOGD("_ZThn8_N9keymaster24PureSoftKeymasterContextD1Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::UnwrapKey(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, keymaster_key_format_t*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext9UnwrapKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEES5_RKNS_16AuthorizationSetES5_PS6_P22keymaster_key_format_tPS3_(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext9UnwrapKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEES5_RKNS_16AuthorizationSetES5_PS6_P22keymaster_key_format_tPS3_() called");
    return 0;
}

/* Demangled: keymaster::SoftKeymasterLogger::log_msg(keymaster::Logger::LogLevel, char const*, std::__va_list) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster19SoftKeymasterLogger7log_msgENS_6Logger8LogLevelEPKcSt9__va_list(void) {
    ALOGD("_ZNK9keymaster19SoftKeymasterLogger7log_msgENS_6Logger8LogLevelEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: keymaster::SoftKeymasterEnforcement::CreateKeyId(keymaster_key_blob_t const&, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24SoftKeymasterEnforcement11CreateKeyIdERK20keymaster_key_blob_tPm(void) {
    ALOGD("_ZNK9keymaster24SoftKeymasterEnforcement11CreateKeyIdERK20keymaster_key_blob_tPm() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9keymaster24PureSoftKeymasterContextD0Ev(void) {
    ALOGD("_ZThn8_N9keymaster24PureSoftKeymasterContextD0Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContextD1Ev(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContextD1Ev() called");
    return 0;
}

/* Exported Object: vtable for keymaster::SoftKeymasterLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9keymaster19SoftKeymasterLoggerE = NULL;

/* Demangled: keymaster::SoftKeymasterEnforcement::get_current_time_ms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24SoftKeymasterEnforcement19get_current_time_msEv(void) {
    ALOGD("_ZNK9keymaster24SoftKeymasterEnforcement19get_current_time_msEv() called");
    return 0;
}

/* Demangled: keymaster::GetOsPatchlevel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster15GetOsPatchlevelEPKc(void) {
    ALOGD("_ZN9keymaster15GetOsPatchlevelEPKc() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContextD0Ev(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContextD0Ev() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::SetSystemVersion(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster24PureSoftKeymasterContext16SetSystemVersionEjj(void) {
    ALOGD("_ZN9keymaster24PureSoftKeymasterContext16SetSystemVersionEjj() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GetSystemVersion(unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext16GetSystemVersionEPjS1_(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext16GetSystemVersionEPjS1_() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::GetOperationFactory(keymaster_algorithm_t, keymaster_purpose_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext19GetOperationFactoryE21keymaster_algorithm_t19keymaster_purpose_t(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext19GetOperationFactoryE21keymaster_algorithm_t19keymaster_purpose_t() called");
    return 0;
}

/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::CreateKeyBlob(keymaster::AuthorizationSet const&, keymaster_key_origin_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void) {
    ALOGD("_ZThn8_NK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_() called");
    return 0;
}

/* Demangled: keymaster::PureSoftKeymasterContext::AddRngEntropy(unsigned char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9keymaster24PureSoftKeymasterContext13AddRngEntropyEPKhm(void) {
    ALOGD("_ZNK9keymaster24PureSoftKeymasterContext13AddRngEntropyEPKhm() called");
    return 0;
}
