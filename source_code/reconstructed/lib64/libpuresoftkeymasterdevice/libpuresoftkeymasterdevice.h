/*
 * Reverse-Engineered ABI Specification for: libpuresoftkeymasterdevice.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libpuresoftkeymasterdevice.so
 */

#ifndef BEGONIA_RE_LIBPURESOFTKEYMASTERDEVICE_H
#define BEGONIA_RE_LIBPURESOFTKEYMASTERDEVICE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9keymaster24PureSoftKeymasterContextC2E26keymaster_security_level_t */
/* Demangled: keymaster::PureSoftKeymasterContext::PureSoftKeymasterContext(keymaster_security_level_t) */
int _ZN9keymaster24PureSoftKeymasterContextC2E26keymaster_security_level_t(void);

/* Symbol: _ZN9keymaster24SoftKeymasterEnforcement17ComputeSharedHmacERKNS_26HmacSharingParametersArrayEPNS_14TKeymasterBlobI16keymaster_blob_tEE */
/* Demangled: keymaster::SoftKeymasterEnforcement::ComputeSharedHmac(keymaster::HmacSharingParametersArray const&, keymaster::TKeymasterBlob<keymaster_blob_t>*) */
int _ZN9keymaster24SoftKeymasterEnforcement17ComputeSharedHmacERKNS_26HmacSharingParametersArrayEPNS_14TKeymasterBlobI16keymaster_blob_tEE(void);

/* Symbol: _ZN9keymaster12GetOsVersionEv */
/* Demangled: keymaster::GetOsVersion() */
int _ZN9keymaster12GetOsVersionEv(void);

/* Symbol: _ZN9keymaster12GetOsVersionEPKc */
/* Demangled: keymaster::GetOsVersion(char const*) */
int _ZN9keymaster12GetOsVersionEPKc(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_ */
/* Demangled: keymaster::PureSoftKeymasterContext::CreateKeyBlob(keymaster::AuthorizationSet const&, keymaster_key_origin_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZNK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext13DeleteAllKeysEv */
/* Demangled: keymaster::PureSoftKeymasterContext::DeleteAllKeys() const */
int _ZNK9keymaster24PureSoftKeymasterContext13DeleteAllKeysEv(void);

/* Symbol: _ZTVN9keymaster24SoftKeymasterEnforcementE */
/* Demangled: vtable for keymaster::SoftKeymasterEnforcement */
extern void* _ZTVN9keymaster24SoftKeymasterEnforcementE;

/* Symbol: _ZN9keymaster24SoftKeymasterEnforcement24GetHmacSharingParametersEPNS_21HmacSharingParametersE */
/* Demangled: keymaster::SoftKeymasterEnforcement::GetHmacSharingParameters(keymaster::HmacSharingParameters*) */
int _ZN9keymaster24SoftKeymasterEnforcement24GetHmacSharingParametersEPNS_21HmacSharingParametersE(void);

/* Symbol: _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj */
/* Demangled: keymaster::ConfigureDevice(keymaster2_device*, unsigned int, unsigned int) */
int _ZN9keymaster15ConfigureDeviceEP17keymaster2_devicejj(void);

/* Symbol: _ZN9keymaster15ConfigureDeviceEP17keymaster2_device */
/* Demangled: keymaster::ConfigureDevice(keymaster2_device*) */
int _ZN9keymaster15ConfigureDeviceEP17keymaster2_device(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext12ParseKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE */
/* Demangled: keymaster::PureSoftKeymasterContext::ParseKeyBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::UniquePtr<keymaster::Key, keymaster::DefaultDelete<keymaster::Key> >*) const */
int _ZNK9keymaster24PureSoftKeymasterContext12ParseKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPNS_9UniquePtrINS_3KeyENS_13DefaultDeleteISA_EEEE(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext19GenerateAttestationERKNS_3KeyERKNS_16AuthorizationSetEPNS_9UniquePtrI22keymaster_cert_chain_tNS_22CertificateChainDeleteEEE */
/* Demangled: keymaster::PureSoftKeymasterContext::GenerateAttestation(keymaster::Key const&, keymaster::AuthorizationSet const&, keymaster::UniquePtr<keymaster_cert_chain_t, keymaster::CertificateChainDelete>*) const */
int _ZNK9keymaster24PureSoftKeymasterContext19GenerateAttestationERKNS_3KeyERKNS_16AuthorizationSetEPNS_9UniquePtrI22keymaster_cert_chain_tNS_22CertificateChainDeleteEEE(void);

/* Symbol: _ZThn16_NK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::GetVerifiedBootParams(keymaster_blob_t*, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) const */
int _ZThn16_NK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb(void);

/* Symbol: _ZTVN9keymaster24PureSoftKeymasterContextE */
/* Demangled: vtable for keymaster::PureSoftKeymasterContext */
extern void* _ZTVN9keymaster24PureSoftKeymasterContextE;

/* Symbol: _ZN9keymaster24PureSoftKeymasterContextC1E26keymaster_security_level_t */
/* Demangled: keymaster::PureSoftKeymasterContext::PureSoftKeymasterContext(keymaster_security_level_t) */
int _ZN9keymaster24PureSoftKeymasterContextC1E26keymaster_security_level_t(void);

/* Symbol: _ZN9keymaster24SoftKeymasterEnforcement19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE */
/* Demangled: keymaster::SoftKeymasterEnforcement::VerifyAuthorization(keymaster::VerifyAuthorizationRequest const&) */
int _ZN9keymaster24SoftKeymasterEnforcement19VerifyAuthorizationERKNS_26VerifyAuthorizationRequestE(void);

/* Symbol: _ZThn16_N9keymaster24PureSoftKeymasterContextD1Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn16_N9keymaster24PureSoftKeymasterContextD1Ev(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext9DeleteKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEE */
/* Demangled: keymaster::PureSoftKeymasterContext::DeleteKey(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&) const */
int _ZNK9keymaster24PureSoftKeymasterContext9DeleteKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEE(void);

/* Symbol: _ZN9keymaster15GetOsPatchlevelEv */
/* Demangled: keymaster::GetOsPatchlevel() */
int _ZN9keymaster15GetOsPatchlevelEv(void);

/* Symbol: _ZThn24_N9keymaster24PureSoftKeymasterContextD1Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn24_N9keymaster24PureSoftKeymasterContextD1Ev(void);

/* Symbol: _ZThn16_N9keymaster24PureSoftKeymasterContextD0Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn16_N9keymaster24PureSoftKeymasterContextD0Ev(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext22GetSupportedAlgorithmsEPm */
/* Demangled: keymaster::PureSoftKeymasterContext::GetSupportedAlgorithms(unsigned long*) const */
int _ZNK9keymaster24PureSoftKeymasterContext22GetSupportedAlgorithmsEPm(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext14UpgradeKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS3_ */
/* Demangled: keymaster::PureSoftKeymasterContext::UpgradeKeyBlob(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) const */
int _ZNK9keymaster24PureSoftKeymasterContext14UpgradeKeyBlobERKNS_14TKeymasterBlobI20keymaster_key_blob_tEERKNS_16AuthorizationSetEPS3_(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb */
/* Demangled: keymaster::PureSoftKeymasterContext::GetVerifiedBootParams(keymaster_blob_t*, keymaster_blob_t*, keymaster_verified_boot_t*, bool*) const */
int _ZNK9keymaster24PureSoftKeymasterContext21GetVerifiedBootParamsEP16keymaster_blob_tS2_P25keymaster_verified_boot_tPb(void);

/* Symbol: _ZThn24_N9keymaster24PureSoftKeymasterContextD0Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn24_N9keymaster24PureSoftKeymasterContextD0Ev(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext13GetKeyFactoryE21keymaster_algorithm_t */
/* Demangled: keymaster::PureSoftKeymasterContext::GetKeyFactory(keymaster_algorithm_t) const */
int _ZNK9keymaster24PureSoftKeymasterContext13GetKeyFactoryE21keymaster_algorithm_t(void);

/* Symbol: _ZN9keymaster24PureSoftKeymasterContextD2Ev */
/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZN9keymaster24PureSoftKeymasterContextD2Ev(void);

/* Symbol: _ZThn8_N9keymaster24PureSoftKeymasterContextD1Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn8_N9keymaster24PureSoftKeymasterContextD1Ev(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext9UnwrapKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEES5_RKNS_16AuthorizationSetES5_PS6_P22keymaster_key_format_tPS3_ */
/* Demangled: keymaster::PureSoftKeymasterContext::UnwrapKey(keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet const&, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::AuthorizationSet*, keymaster_key_format_t*, keymaster::TKeymasterBlob<keymaster_key_blob_t>*) const */
int _ZNK9keymaster24PureSoftKeymasterContext9UnwrapKeyERKNS_14TKeymasterBlobI20keymaster_key_blob_tEES5_RKNS_16AuthorizationSetES5_PS6_P22keymaster_key_format_tPS3_(void);

/* Symbol: _ZNK9keymaster19SoftKeymasterLogger7log_msgENS_6Logger8LogLevelEPKcSt9__va_list */
/* Demangled: keymaster::SoftKeymasterLogger::log_msg(keymaster::Logger::LogLevel, char const*, std::__va_list) const */
int _ZNK9keymaster19SoftKeymasterLogger7log_msgENS_6Logger8LogLevelEPKcSt9__va_list(void);

/* Symbol: _ZNK9keymaster24SoftKeymasterEnforcement11CreateKeyIdERK20keymaster_key_blob_tPm */
/* Demangled: keymaster::SoftKeymasterEnforcement::CreateKeyId(keymaster_key_blob_t const&, unsigned long*) const */
int _ZNK9keymaster24SoftKeymasterEnforcement11CreateKeyIdERK20keymaster_key_blob_tPm(void);

/* Symbol: _ZThn8_N9keymaster24PureSoftKeymasterContextD0Ev */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZThn8_N9keymaster24PureSoftKeymasterContextD0Ev(void);

/* Symbol: _ZN9keymaster24PureSoftKeymasterContextD1Ev */
/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZN9keymaster24PureSoftKeymasterContextD1Ev(void);

/* Symbol: _ZTVN9keymaster19SoftKeymasterLoggerE */
/* Demangled: vtable for keymaster::SoftKeymasterLogger */
extern void* _ZTVN9keymaster19SoftKeymasterLoggerE;

/* Symbol: _ZNK9keymaster24SoftKeymasterEnforcement19get_current_time_msEv */
/* Demangled: keymaster::SoftKeymasterEnforcement::get_current_time_ms() const */
int _ZNK9keymaster24SoftKeymasterEnforcement19get_current_time_msEv(void);

/* Symbol: _ZN9keymaster15GetOsPatchlevelEPKc */
/* Demangled: keymaster::GetOsPatchlevel(char const*) */
int _ZN9keymaster15GetOsPatchlevelEPKc(void);

/* Symbol: _ZN9keymaster24PureSoftKeymasterContextD0Ev */
/* Demangled: keymaster::PureSoftKeymasterContext::~PureSoftKeymasterContext() */
int _ZN9keymaster24PureSoftKeymasterContextD0Ev(void);

/* Symbol: _ZN9keymaster24PureSoftKeymasterContext16SetSystemVersionEjj */
/* Demangled: keymaster::PureSoftKeymasterContext::SetSystemVersion(unsigned int, unsigned int) */
int _ZN9keymaster24PureSoftKeymasterContext16SetSystemVersionEjj(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext16GetSystemVersionEPjS1_ */
/* Demangled: keymaster::PureSoftKeymasterContext::GetSystemVersion(unsigned int*, unsigned int*) const */
int _ZNK9keymaster24PureSoftKeymasterContext16GetSystemVersionEPjS1_(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext19GetOperationFactoryE21keymaster_algorithm_t19keymaster_purpose_t */
/* Demangled: keymaster::PureSoftKeymasterContext::GetOperationFactory(keymaster_algorithm_t, keymaster_purpose_t) const */
int _ZNK9keymaster24PureSoftKeymasterContext19GetOperationFactoryE21keymaster_algorithm_t19keymaster_purpose_t(void);

/* Symbol: _ZThn8_NK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_ */
/* Demangled: non-virtual thunk to keymaster::PureSoftKeymasterContext::CreateKeyBlob(keymaster::AuthorizationSet const&, keymaster_key_origin_t, keymaster::TKeymasterBlob<keymaster_key_blob_t> const&, keymaster::TKeymasterBlob<keymaster_key_blob_t>*, keymaster::AuthorizationSet*, keymaster::AuthorizationSet*) const */
int _ZThn8_NK9keymaster24PureSoftKeymasterContext13CreateKeyBlobERKNS_16AuthorizationSetE22keymaster_key_origin_tRKNS_14TKeymasterBlobI20keymaster_key_blob_tEEPS7_PS1_SB_(void);

/* Symbol: _ZNK9keymaster24PureSoftKeymasterContext13AddRngEntropyEPKhm */
/* Demangled: keymaster::PureSoftKeymasterContext::AddRngEntropy(unsigned char const*, unsigned long) const */
int _ZNK9keymaster24PureSoftKeymasterContext13AddRngEntropyEPKhm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPURESOFTKEYMASTERDEVICE_H */
