/*
 * Reverse-Engineered ABI Specification for: liboemcrypto.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: liboemcrypto.so
 */

#ifndef BEGONIA_RE_LIBOEMCRYPTO_H
#define BEGONIA_RE_LIBOEMCRYPTO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _oecc66 */
/* Demangled: _oecc66 */
int _oecc66(void);

/* Symbol: _oecc91 */
/* Demangled: _oecc91 */
int _oecc91(void);

/* Symbol: _ZN11GPTEEClient10APIVersionEv */
/* Demangled: GPTEEClient::APIVersion() */
int _ZN11GPTEEClient10APIVersionEv(void);

/* Symbol: getDeviceIDFunc */
/* Demangled: getDeviceIDFunc */
extern void* getDeviceIDFunc;

/* Symbol: _oecc67 */
/* Demangled: _oecc67 */
int _oecc67(void);

/* Symbol: _oecc92 */
/* Demangled: _oecc92 */
int _oecc92(void);

/* Symbol: _ZN11GPTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType */
/* Demangled: GPTEEClient::LoadKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_LicenseType) */
int _ZN11GPTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType(void);

/* Symbol: _ZN11GPTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j */
/* Demangled: GPTEEClient::Generic_Verify(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j(void);

/* Symbol: _ZN11GPTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj */
/* Demangled: GPTEEClient::RewrapDeviceRSAKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int const*, unsigned char const*, unsigned int, unsigned char const*, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj(void);

/* Symbol: closeSessionFunc */
/* Demangled: closeSessionFunc */
extern void* closeSessionFunc;

/* Symbol: _oecc68 */
/* Demangled: _oecc68 */
int _oecc68(void);

/* Symbol: _oecc93 */
/* Demangled: _oecc93 */
int _oecc93(void);

/* Symbol: _ZN12MTKTEEClient16DeleteUsageTableEv */
/* Demangled: MTKTEEClient::DeleteUsageTable() */
int _ZN12MTKTEEClient16DeleteUsageTableEv(void);

/* Symbol: _ZN12MTKTEEClientC2Ev */
/* Demangled: MTKTEEClient::MTKTEEClient() */
int _ZN12MTKTEEClientC2Ev(void);

/* Symbol: _ZN11GPTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci */
/* Demangled: GPTEEClient::FreeSecureBuffer(unsigned int, OEMCrypto_DestBufferDesc*, int) */
int _ZN11GPTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci(void);

/* Symbol: _oecc69 */
/* Demangled: _oecc69 */
int _oecc69(void);

/* Symbol: _oecc94 */
/* Demangled: _oecc94 */
int _oecc94(void);

/* Symbol: _ZN12MTKTEEClient20DeactivateUsageEntryEjPKhj */
/* Demangled: MTKTEEClient::DeactivateUsageEntry(unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient20DeactivateUsageEntryEjPKhj(void);

/* Symbol: _ZN12MTKTEEClient7LoadSRMEPKhj */
/* Demangled: MTKTEEClient::LoadSRM(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient7LoadSRMEPKhj(void);

/* Symbol: _ZN11GPTEEClient16GetHashErrorCodeEjPj */
/* Demangled: GPTEEClient::GetHashErrorCode(unsigned int, unsigned int*) */
int _ZN11GPTEEClient16GetHashErrorCodeEjPj(void);

/* Symbol: buildInformationFunc */
/* Demangled: buildInformationFunc */
extern void* buildInformationFunc;

/* Symbol: loadKeysFunc */
/* Demangled: loadKeysFunc */
extern void* loadKeysFunc;

/* Symbol: _oecc95 */
/* Demangled: _oecc95 */
int _oecc95(void);

/* Symbol: setDecryptHashFunc */
/* Demangled: setDecryptHashFunc */
extern void* setDecryptHashFunc;

/* Symbol: _oecc96 */
/* Demangled: _oecc96 */
int _oecc96(void);

/* Symbol: _ZN12MTKTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject */
/* Demangled: MTKTEEClient::RefreshKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
int _ZN12MTKTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void);

/* Symbol: _ZN12MTKTEEClient23GetOEMPublicCertificateEPhPj */
/* Demangled: MTKTEEClient::GetOEMPublicCertificate(unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient23GetOEMPublicCertificateEPhPj(void);

/* Symbol: _ZN12MTKTEEClient24DeactivateUsageEntry_V12EPKhj */
/* Demangled: MTKTEEClient::DeactivateUsageEntry_V12(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient24DeactivateUsageEntry_V12EPKhj(void);

/* Symbol: _ZN11GPTEEClient16UpdateUsageEntryEjPhPjS0_S1_ */
/* Demangled: GPTEEClient::UpdateUsageEntry(unsigned int, unsigned char*, unsigned int*, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient16UpdateUsageEntryEjPhPjS0_S1_(void);

/* Symbol: createOldUsageEntryFunc */
/* Demangled: createOldUsageEntryFunc */
extern void* createOldUsageEntryFunc;

/* Symbol: deriveKeysFromSessionKeyFunc */
/* Demangled: deriveKeysFromSessionKeyFunc */
extern void* deriveKeysFromSessionKeyFunc;

/* Symbol: loadEntitledContentKeysFunc */
/* Demangled: loadEntitledContentKeysFunc */
extern void* loadEntitledContentKeysFunc;

/* Symbol: _oecc97 */
/* Demangled: _oecc97 */
int _oecc97(void);

/* Symbol: _ZN12MTKTEEClient15QueryKeyControlEjPKhjPhPj */
/* Demangled: MTKTEEClient::QueryKeyControl(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient15QueryKeyControlEjPKhjPhPj(void);

/* Symbol: _ZN12MTKTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_ */
/* Demangled: MTKTEEClient::PrepAndSignProvisioningRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_(void);

/* Symbol: _ZN11GPTEEClient14SetDecryptHashEjjPKhj */
/* Demangled: GPTEEClient::SetDecryptHash(unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient14SetDecryptHashEjjPKhj(void);

/* Symbol: _ZN11GPTEEClientD1Ev */
/* Demangled: GPTEEClient::~GPTEEClient() */
int _ZN11GPTEEClientD1Ev(void);

/* Symbol: getNumberOfOpenSessionsFunc */
/* Demangled: getNumberOfOpenSessionsFunc */
extern void* getNumberOfOpenSessionsFunc;

/* Symbol: _oecc98 */
/* Demangled: _oecc98 */
int _oecc98(void);

/* Symbol: _oecc99 */
/* Demangled: _oecc99 */
int _oecc99(void);

/* Symbol: _ZN12MTKTEEClient16BuildInformationEv */
/* Demangled: MTKTEEClient::BuildInformation() */
int _ZN12MTKTEEClient16BuildInformationEv(void);

/* Symbol: _ZN11GPTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch */
/* Demangled: GPTEEClient::CopyBuffer_V14(unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, unsigned char) */
int _ZN11GPTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch(void);

/* Symbol: _ZN11GPTEEClient14LoadTestKeyboxEPKhj */
/* Demangled: GPTEEClient::LoadTestKeybox(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient14LoadTestKeyboxEPKhj(void);

/* Symbol: _ZN12MTKTEEClient14SetDecryptHashEjjPKhj */
/* Demangled: MTKTEEClient::SetDecryptHash(unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient14SetDecryptHashEjjPKhj(void);

/* Symbol: _ZN11GPTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc */
/* Demangled: GPTEEClient::DecryptCENC(unsigned int, OEMCrypto_SampleDescription const*, unsigned int, OEMCrypto_CENCEncryptPatternDesc const*) */
int _ZN11GPTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc(void);

/* Symbol: deactivateUsageEntryFunc */
/* Demangled: deactivateUsageEntryFunc */
extern void* deactivateUsageEntryFunc;

/* Symbol: generateSignatureFunc */
/* Demangled: generateSignatureFunc */
extern void* generateSignatureFunc;

/* Symbol: isSRMUpdateSupportedFunc */
/* Demangled: isSRMUpdateSupportedFunc */
extern void* isSRMUpdateSupportedFunc;

/* Symbol: loadDRMPrivateKeyFunc */
/* Demangled: loadDRMPrivateKeyFunc */
extern void* loadDRMPrivateKeyFunc;

/* Symbol: maximumUsageTableHeaderSizeFunc */
/* Demangled: maximumUsageTableHeaderSizeFunc */
extern void* maximumUsageTableHeaderSizeFunc;

/* Symbol: _ZN12MTKTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j */
/* Demangled: MTKTEEClient::LoadKeys_V11_or_V12(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void);

/* Symbol: _ZN11GPTEEClient13InstallKeyboxEPKhj */
/* Demangled: GPTEEClient::InstallKeybox(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient13InstallKeyboxEPKhj(void);

/* Symbol: _ZN11GPTEEClient17CopyOldUsageEntryEjPKhj */
/* Demangled: GPTEEClient::CopyOldUsageEntry(unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient17CopyOldUsageEntryEjPKhj(void);

/* Symbol: loadTestKeyboxFunc */
/* Demangled: loadTestKeyboxFunc */
extern void* loadTestKeyboxFunc;

/* Symbol: supportedCertificatesFunc */
/* Demangled: supportedCertificatesFunc */
extern void* supportedCertificatesFunc;

/* Symbol: wrapKeyboxFunc */
/* Demangled: wrapKeyboxFunc */
extern void* wrapKeyboxFunc;

/* Symbol: _ZN12MTKTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci */
/* Demangled: MTKTEEClient::FreeSecureBuffer(unsigned int, OEMCrypto_DestBufferDesc*, int) */
int _ZN12MTKTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci(void);

/* Symbol: _ZN11GPTEEClient11LoadLicenseEjPKhjjS1_j */
/* Demangled: GPTEEClient::LoadLicense(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient11LoadLicenseEjPKhjjS1_j(void);

/* Symbol: _ZN11GPTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj */
/* Demangled: GPTEEClient::Generic_Sign(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj(void);

/* Symbol: _ZN12MTKTEEClient18LoadTestKeybox_V13Ev */
/* Demangled: MTKTEEClient::LoadTestKeybox_V13() */
int _ZN12MTKTEEClient18LoadTestKeybox_V13Ev(void);

/* Symbol: OEMCrypto_DeleteUsageTable */
/* Demangled: OEMCrypto_DeleteUsageTable */
int OEMCrypto_DeleteUsageTable(void);

/* Symbol: _ZN11GPTEEClient20GetCurrentSRMVersionEPt */
/* Demangled: GPTEEClient::GetCurrentSRMVersion(unsigned short*) */
int _ZN11GPTEEClient20GetCurrentSRMVersionEPt(void);

/* Symbol: _ZN11GPTEEClient20IsSRMUpdateSupportedEv */
/* Demangled: GPTEEClient::IsSRMUpdateSupported() */
int _ZN11GPTEEClient20IsSRMUpdateSupportedEv(void);

/* Symbol: generateRSASignatureFunc */
/* Demangled: generateRSASignatureFunc */
extern void* generateRSASignatureFunc;

/* Symbol: terminateFunc */
/* Demangled: terminateFunc */
extern void* terminateFunc;

/* Symbol: _ZN12MTKTEEClient11OpenSessionEPj */
/* Demangled: MTKTEEClient::OpenSession(unsigned int*) */
int _ZN12MTKTEEClient11OpenSessionEPj(void);

/* Symbol: _ZN12MTKTEEClientD0Ev */
/* Demangled: MTKTEEClient::~MTKTEEClient() */
int _ZN12MTKTEEClientD0Ev(void);

/* Symbol: _ZN12MTKTEEClient20GetCurrentSRMVersionEPt */
/* Demangled: MTKTEEClient::GetCurrentSRMVersion(unsigned short*) */
int _ZN12MTKTEEClient20GetCurrentSRMVersionEPt(void);

/* Symbol: _oecc10 */
/* Demangled: _oecc10 */
int _oecc10(void);

/* Symbol: _ZN11GPTEEClient23GetNumberOfOpenSessionsEPj */
/* Demangled: GPTEEClient::GetNumberOfOpenSessions(unsigned int*) */
int _ZN11GPTEEClient23GetNumberOfOpenSessionsEPj(void);

/* Symbol: _ZN11GPTEEClient9GetRandomEPhj */
/* Demangled: GPTEEClient::GetRandom(unsigned char*, unsigned int) */
int _ZN11GPTEEClient9GetRandomEPhj(void);

/* Symbol: generateDerivedKeysFunc */
/* Demangled: generateDerivedKeysFunc */
extern void* generateDerivedKeysFunc;

/* Symbol: _oecc11 */
/* Demangled: _oecc11 */
int _oecc11(void);

/* Symbol: _ZN12MTKTEEClient11LoadLicenseEjPKhjjS1_j */
/* Demangled: MTKTEEClient::LoadLicense(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient11LoadLicenseEjPKhjjS1_j(void);

/* Symbol: _oecc12 */
/* Demangled: _oecc12 */
int _oecc12(void);

/* Symbol: _ZN12MTKTEEClient11LoadRenewalEjPKhjjS1_j */
/* Demangled: MTKTEEClient::LoadRenewal(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient11LoadRenewalEjPKhjjS1_j(void);

/* Symbol: _ZN12MTKTEEClient14LoadTestRSAKeyEv */
/* Demangled: MTKTEEClient::LoadTestRSAKey() */
int _ZN12MTKTEEClient14LoadTestRSAKeyEv(void);

/* Symbol: _ZN11GPTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_ */
/* Demangled: GPTEEClient::GetHDCPCapability(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
int _ZN11GPTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _oecc13 */
/* Demangled: _oecc13 */
int _oecc13(void);

/* Symbol: _ZN12MTKTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj */
/* Demangled: MTKTEEClient::Generic_Sign(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj(void);

/* Symbol: _ZN11GPTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh */
/* Demangled: GPTEEClient::Generic_Encrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
int _ZN11GPTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void);

/* Symbol: _ZN11GPTEEClient20LoadUsageTableHeaderEPKhj */
/* Demangled: GPTEEClient::LoadUsageTableHeader(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient20LoadUsageTableHeaderEPKhj(void);

/* Symbol: _ZN11GPTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject */
/* Demangled: GPTEEClient::LoadEntitledContentKeys(unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
int _ZN11GPTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject(void);

/* Symbol: _oecc14 */
/* Demangled: _oecc14 */
int _oecc14(void);

/* Symbol: _ZN12MTKTEEClient9TerminateEv */
/* Demangled: MTKTEEClient::Terminate() */
int _ZN12MTKTEEClient9TerminateEv(void);

/* Symbol: _oecc15 */
/* Demangled: _oecc15 */
int _oecc15(void);

/* Symbol: _oecc40 */
/* Demangled: _oecc40 */
int _oecc40(void);

/* Symbol: _oecc16 */
/* Demangled: _oecc16 */
int _oecc16(void);

/* Symbol: _oecc41 */
/* Demangled: _oecc41 */
int _oecc41(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _oecc17 */
/* Demangled: _oecc17 */
int _oecc17(void);

/* Symbol: _oecc42 */
/* Demangled: _oecc42 */
int _oecc42(void);

/* Symbol: _ZN11GPTEEClient22GetMaxNumberOfSessionsEPj */
/* Demangled: GPTEEClient::GetMaxNumberOfSessions(unsigned int*) */
int _ZN11GPTEEClient22GetMaxNumberOfSessionsEPj(void);

/* Symbol: getRandomFunc */
/* Demangled: getRandomFunc */
extern void* getRandomFunc;

/* Symbol: installKeyboxFunc */
/* Demangled: installKeyboxFunc */
extern void* installKeyboxFunc;

/* Symbol: _oecc18 */
/* Demangled: _oecc18 */
int _oecc18(void);

/* Symbol: _oecc43 */
/* Demangled: _oecc43 */
int _oecc43(void);

/* Symbol: _oecc19 */
/* Demangled: _oecc19 */
int _oecc19(void);

/* Symbol: _oecc44 */
/* Demangled: _oecc44 */
int _oecc44(void);

/* Symbol: _ZN11GPTEEClient21ForceDeleteUsageEntryEPKhj */
/* Demangled: GPTEEClient::ForceDeleteUsageEntry(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient21ForceDeleteUsageEntryEPKhj(void);

/* Symbol: _ZN11GPTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j */
/* Demangled: GPTEEClient::DeriveKeysFromSessionKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j(void);

/* Symbol: _oecc45 */
/* Demangled: _oecc45 */
int _oecc45(void);

/* Symbol: _oecc70 */
/* Demangled: _oecc70 */
int _oecc70(void);

/* Symbol: _ZN12MTKTEEClient14LoadTestKeyboxEPKhj */
/* Demangled: MTKTEEClient::LoadTestKeybox(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient14LoadTestKeyboxEPKhj(void);

/* Symbol: removeSRMFunc */
/* Demangled: removeSRMFunc */
extern void* removeSRMFunc;

/* Symbol: securityPatchLevelFunc */
/* Demangled: securityPatchLevelFunc */
extern void* securityPatchLevelFunc;

/* Symbol: _oecc46 */
/* Demangled: _oecc46 */
int _oecc46(void);

/* Symbol: _oecc71 */
/* Demangled: _oecc71 */
int _oecc71(void);

/* Symbol: _ZN12MTKTEEClient17LoadOEMPrivateKeyEj */
/* Demangled: MTKTEEClient::LoadOEMPrivateKey(unsigned int) */
int _ZN12MTKTEEClient17LoadOEMPrivateKeyEj(void);

/* Symbol: _ZN12MTKTEEClient22ShrinkUsageTableHeaderEjPhPj */
/* Demangled: MTKTEEClient::ShrinkUsageTableHeader(unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient22ShrinkUsageTableHeaderEjPhPj(void);

/* Symbol: _ZN11GPTEEClient16DeleteUsageTableEv */
/* Demangled: GPTEEClient::DeleteUsageTable() */
int _ZN11GPTEEClient16DeleteUsageTableEv(void);

/* Symbol: _ZN11GPTEEClient23IsAntiRollbackHwPresentEv */
/* Demangled: GPTEEClient::IsAntiRollbackHwPresent() */
int _ZN11GPTEEClient23IsAntiRollbackHwPresentEv(void);

/* Symbol: generic_SignFunc */
/* Demangled: generic_SignFunc */
extern void* generic_SignFunc;

/* Symbol: _oecc47 */
/* Demangled: _oecc47 */
int _oecc47(void);

/* Symbol: _ZN11GPTEEClient18SupportsUsageTableEv */
/* Demangled: GPTEEClient::SupportsUsageTable() */
int _ZN11GPTEEClient18SupportsUsageTableEv(void);

/* Symbol: libpath */
/* Demangled: libpath */
extern void* libpath;

/* Symbol: _oecc48 */
/* Demangled: _oecc48 */
int _oecc48(void);

/* Symbol: _ZN12MTKTEEClient22GetMaxNumberOfSessionsEPj */
/* Demangled: MTKTEEClient::GetMaxNumberOfSessions(unsigned int*) */
int _ZN12MTKTEEClient22GetMaxNumberOfSessionsEPj(void);

/* Symbol: minorAPIVersionFunc */
/* Demangled: minorAPIVersionFunc */
extern void* minorAPIVersionFunc;

/* Symbol: prepAndSignProvisioningRequestFunc */
/* Demangled: prepAndSignProvisioningRequestFunc */
extern void* prepAndSignProvisioningRequestFunc;

/* Symbol: _oecc49 */
/* Demangled: _oecc49 */
int _oecc49(void);

/* Symbol: _ZN12MTKTEEClient13GenerateNonceEjPj */
/* Demangled: MTKTEEClient::GenerateNonce(unsigned int, unsigned int*) */
int _ZN12MTKTEEClient13GenerateNonceEjPj(void);

/* Symbol: _ZN12MTKTEEClient14mAvailSessionsE */
/* Demangled: MTKTEEClient::mAvailSessions */
extern void* _ZN12MTKTEEClient14mAvailSessionsE;

/* Symbol: _ZN12MTKTEEClientD2Ev */
/* Demangled: MTKTEEClient::~MTKTEEClient() */
int _ZN12MTKTEEClientD2Ev(void);

/* Symbol: OEMCrypto_AllocateSecureBuffer */
/* Demangled: OEMCrypto_AllocateSecureBuffer */
int OEMCrypto_AllocateSecureBuffer(void);

/* Symbol: _ZN11GPTEEClientC2Ev */
/* Demangled: GPTEEClient::GPTEEClient() */
int _ZN11GPTEEClientC2Ev(void);

/* Symbol: _ZN12MTKTEEClient23GetNumberOfOpenSessionsEPj */
/* Demangled: MTKTEEClient::GetNumberOfOpenSessions(unsigned int*) */
int _ZN12MTKTEEClient23GetNumberOfOpenSessionsEPj(void);

/* Symbol: _ZN11GPTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h */
/* Demangled: GPTEEClient::DecryptCENC_V15(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, OEMCrypto_CENCEncryptPatternDesc_V15 const*, unsigned char) */
int _ZN11GPTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h(void);

/* Symbol: _ZN12MTKTEEClient15MinorAPIVersionEv */
/* Demangled: MTKTEEClient::MinorAPIVersion() */
int _ZN12MTKTEEClient15MinorAPIVersionEv(void);

/* Symbol: _ZN12MTKTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj */
/* Demangled: MTKTEEClient::LoadDRMPrivateKey(unsigned int, OEMCrypto_PrivateKeyType, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj(void);

/* Symbol: _ZN11GPTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh */
/* Demangled: GPTEEClient::Generic_Decrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
int _ZN11GPTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void);

/* Symbol: _ZN11GPTEEClient16BuildInformationEv */
/* Demangled: GPTEEClient::BuildInformation() */
int _ZN11GPTEEClient16BuildInformationEv(void);

/* Symbol: getKeyDataFunc */
/* Demangled: getKeyDataFunc */
extern void* getKeyDataFunc;

/* Symbol: selectKeyFunc */
/* Demangled: selectKeyFunc */
extern void* selectKeyFunc;

/* Symbol: _oecc78 */
/* Demangled: _oecc78 */
int _oecc78(void);

/* Symbol: _ZN12MTKTEEClient17GenerateSignatureEjPKhjPhPj */
/* Demangled: MTKTEEClient::GenerateSignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient17GenerateSignatureEjPKhjPhPj(void);

/* Symbol: _ZN12MTKTEEClient23GenerateRSASignature_V8EjPKhjPhPj */
/* Demangled: MTKTEEClient::GenerateRSASignature_V8(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient23GenerateRSASignature_V8EjPKhjPhPj(void);

/* Symbol: _ZN11GPTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch */
/* Demangled: GPTEEClient::CopyBuffer(unsigned int, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
int _ZN11GPTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch(void);

/* Symbol: _ZN11GPTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch */
/* Demangled: GPTEEClient::DecryptCTR_V10(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
int _ZN11GPTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch(void);

/* Symbol: updateUsageTableFunc */
/* Demangled: updateUsageTableFunc */
extern void* updateUsageTableFunc;

/* Symbol: _oecc79 */
/* Demangled: _oecc79 */
int _oecc79(void);

/* Symbol: _ZN12MTKTEEClient10InitializeEv */
/* Demangled: MTKTEEClient::Initialize() */
int _ZN12MTKTEEClient10InitializeEv(void);

/* Symbol: _ZN12MTKTEEClient13SelectKey_V13EjPKhj */
/* Demangled: MTKTEEClient::SelectKey_V13(unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient13SelectKey_V13EjPKhj(void);

/* Symbol: _ZN12MTKTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch */
/* Demangled: MTKTEEClient::CopyBuffer(unsigned int, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
int _ZN12MTKTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch(void);

/* Symbol: _ZN12MTKTEEClient13InstallKeyboxEPKhj */
/* Demangled: MTKTEEClient::InstallKeybox(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient13InstallKeyboxEPKhj(void);

/* Symbol: _ZN12MTKTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j */
/* Demangled: MTKTEEClient::DeleteUsageEntry(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j(void);

/* Symbol: isKeyboxValidFunc */
/* Demangled: isKeyboxValidFunc */
extern void* isKeyboxValidFunc;

/* Symbol: copyOldUsageEntryFunc */
/* Demangled: copyOldUsageEntryFunc */
extern void* copyOldUsageEntryFunc;

/* Symbol: _ZN11GPTEEClient23GenerateRSASignature_V8EjPKhjPhPj */
/* Demangled: GPTEEClient::GenerateRSASignature_V8(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient23GenerateRSASignature_V8EjPKhjPhPj(void);

/* Symbol: _ZN12MTKTEEClient11GetDeviceIDEPhPj */
/* Demangled: MTKTEEClient::GetDeviceID(unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient11GetDeviceIDEPhPj(void);

/* Symbol: _ZN12MTKTEEClient12CloseSessionEj */
/* Demangled: MTKTEEClient::CloseSession(unsigned int) */
int _ZN12MTKTEEClient12CloseSessionEj(void);

/* Symbol: createNewUsageEntryFunc */
/* Demangled: createNewUsageEntryFunc */
extern void* createNewUsageEntryFunc;

/* Symbol: generic_EncryptFunc */
/* Demangled: generic_EncryptFunc */
extern void* generic_EncryptFunc;

/* Symbol: reportUsageFunc */
/* Demangled: reportUsageFunc */
extern void* reportUsageFunc;

/* Symbol: _ZN12MTKTEEClientC1Ev */
/* Demangled: MTKTEEClient::MTKTEEClient() */
int _ZN12MTKTEEClientC1Ev(void);

/* Symbol: _ZN12MTKTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch */
/* Demangled: MTKTEEClient::DecryptCTR_V10(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
int _ZN12MTKTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch(void);

/* Symbol: _ZN11GPTEEClient11ReportUsageEjPKhjPhPj */
/* Demangled: GPTEEClient::ReportUsage(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient11ReportUsageEjPKhjPhPj(void);

/* Symbol: prepAndSignRenewalRequestFunc */
/* Demangled: prepAndSignRenewalRequestFunc */
extern void* prepAndSignRenewalRequestFunc;

/* Symbol: _ZN12MTKTEEClient21ForceDeleteUsageEntryEPKhj */
/* Demangled: MTKTEEClient::ForceDeleteUsageEntry(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient21ForceDeleteUsageEntryEPKhj(void);

/* Symbol: _ZN12MTKTEEClient19GenerateDerivedKeysEjPKhjS1_j */
/* Demangled: MTKTEEClient::GenerateDerivedKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient19GenerateDerivedKeysEjPKhjS1_j(void);

/* Symbol: _ZN11GPTEEClient14LoadTestRSAKeyEv */
/* Demangled: GPTEEClient::LoadTestRSAKey() */
int _ZN11GPTEEClient14LoadTestRSAKeyEv(void);

/* Symbol: _ZN11GPTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j */
/* Demangled: GPTEEClient::GenerateDerivedKeys_V15(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j(void);

/* Symbol: _ZN11GPTEEClient23GetOEMPublicCertificateEPhPj */
/* Demangled: GPTEEClient::GetOEMPublicCertificate(unsigned char*, unsigned int*) */
int _ZN11GPTEEClient23GetOEMPublicCertificateEPhPj(void);

/* Symbol: deleteUsageEntryFunc */
/* Demangled: deleteUsageEntryFunc */
extern void* deleteUsageEntryFunc;

/* Symbol: _ZN12MTKTEEClient11ReportUsageEjPKhjPhPj */
/* Demangled: MTKTEEClient::ReportUsage(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient11ReportUsageEjPKhjPhPj(void);

/* Symbol: _ZN12MTKTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j */
/* Demangled: MTKTEEClient::Generic_Verify(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j(void);

/* Symbol: _ZN12MTKTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject */
/* Demangled: MTKTEEClient::LoadEntitledContentKeys_V14(unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
int _ZN12MTKTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject(void);

/* Symbol: _ZN11GPTEEClientD0Ev */
/* Demangled: GPTEEClient::~GPTEEClient() */
int _ZN11GPTEEClientD0Ev(void);

/* Symbol: _ZN12MTKTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh */
/* Demangled: MTKTEEClient::Generic_Encrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
int _ZN12MTKTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void);

/* Symbol: freeSecureBufferFunc */
/* Demangled: freeSecureBufferFunc */
extern void* freeSecureBufferFunc;

/* Symbol: _ZN12MTKTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject */
/* Demangled: MTKTEEClient::RefreshKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
int _ZN12MTKTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void);

/* Symbol: _ZN11GPTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j */
/* Demangled: GPTEEClient::DeleteUsageEntry(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j(void);

/* Symbol: _ZN11GPTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j */
/* Demangled: GPTEEClient::LoadKeys_V11_or_V12(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void);

/* Symbol: _ZN16TEEClientFactory15createTEEClientEv */
/* Demangled: TEEClientFactory::createTEEClient() */
int _ZN16TEEClientFactory15createTEEClientEv(void);

/* Symbol: libpathuree */
/* Demangled: libpathuree */
extern void* libpathuree;

/* Symbol: _ZN11GPTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_ */
/* Demangled: GPTEEClient::PrepAndSignLicenseRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_(void);

/* Symbol: _ZN12MTKTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h */
/* Demangled: MTKTEEClient::DecryptCENC_V15(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, OEMCrypto_CENCEncryptPatternDesc_V15 const*, unsigned char) */
int _ZN12MTKTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h(void);

/* Symbol: _ZN11GPTEEClient22CreateUsageTableHeaderEPhPj */
/* Demangled: GPTEEClient::CreateUsageTableHeader(unsigned char*, unsigned int*) */
int _ZN11GPTEEClient22CreateUsageTableHeaderEPhPj(void);

/* Symbol: deleteUsageTableFunc */
/* Demangled: deleteUsageTableFunc */
extern void* deleteUsageTableFunc;

/* Symbol: _oecc20 */
/* Demangled: _oecc20 */
int _oecc20(void);

/* Symbol: _ZN12MTKTEEClient10WrapKeyboxEPKhjPhPjS1_j */
/* Demangled: MTKTEEClient::WrapKeybox(unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient10WrapKeyboxEPKhjPhPjS1_j(void);

/* Symbol: _ZN11GPTEEClient9RemoveSRMEv */
/* Demangled: GPTEEClient::RemoveSRM() */
int _ZN11GPTEEClient9RemoveSRMEv(void);

/* Symbol: refreshKeysFunc */
/* Demangled: refreshKeysFunc */
extern void* refreshKeysFunc;

/* Symbol: _oecc21 */
/* Demangled: _oecc21 */
int _oecc21(void);

/* Symbol: _ZN12MTKTEEClient10GetKeyDataEPhPj */
/* Demangled: MTKTEEClient::GetKeyData(unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient10GetKeyDataEPhPj(void);

/* Symbol: _oecc101 */
/* Demangled: _oecc101 */
int _oecc101(void);

/* Symbol: _oecc22 */
/* Demangled: _oecc22 */
int _oecc22(void);

/* Symbol: _ZN12MTKTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j */
/* Demangled: MTKTEEClient::DeriveKeysFromSessionKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j(void);

/* Symbol: _ZN11GPTEEClient15QueryKeyControlEjPKhjPhPj */
/* Demangled: GPTEEClient::QueryKeyControl(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient15QueryKeyControlEjPKhjPhPj(void);

/* Symbol: _ZN11GPTEEClient19CreateNewUsageEntryEjPj */
/* Demangled: GPTEEClient::CreateNewUsageEntry(unsigned int, unsigned int*) */
int _ZN11GPTEEClient19CreateNewUsageEntryEjPj(void);

/* Symbol: getCurrentSRMVersionFunc */
/* Demangled: getCurrentSRMVersionFunc */
extern void* getCurrentSRMVersionFunc;

/* Symbol: loadTestRSAKeyFunc */
/* Demangled: loadTestRSAKeyFunc */
extern void* loadTestRSAKeyFunc;

/* Symbol: _oecc102 */
/* Demangled: _oecc102 */
int _oecc102(void);

/* Symbol: _oecc23 */
/* Demangled: _oecc23 */
int _oecc23(void);

/* Symbol: _ZN12MTKTEEClient16LoadProvisioningEjPKhjjS1_jPhPj */
/* Demangled: MTKTEEClient::LoadProvisioning(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient16LoadProvisioningEjPKhjjS1_jPhPj(void);

/* Symbol: _ZN12MTKTEEClient18SupportsUsageTableEv */
/* Demangled: MTKTEEClient::SupportsUsageTable() */
int _ZN12MTKTEEClient18SupportsUsageTableEv(void);

/* Symbol: _ZN12MTKTEEClient20GenerateRSASignatureEjPKhjPhPjh */
/* Demangled: MTKTEEClient::GenerateRSASignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char) */
int _ZN12MTKTEEClient20GenerateRSASignatureEjPKhjPhPjh(void);

/* Symbol: _oecc103 */
/* Demangled: _oecc103 */
int _oecc103(void);

/* Symbol: _oecc24 */
/* Demangled: _oecc24 */
int _oecc24(void);

/* Symbol: _ZN12MTKTEEClient19CreateNewUsageEntryEjPj */
/* Demangled: MTKTEEClient::CreateNewUsageEntry(unsigned int, unsigned int*) */
int _ZN12MTKTEEClient19CreateNewUsageEntryEjPj(void);

/* Symbol: _ZN11GPTEEClient21SupportedCertificatesEv */
/* Demangled: GPTEEClient::SupportedCertificates() */
int _ZN11GPTEEClient21SupportedCertificatesEv(void);

/* Symbol: getHDCPCapabilityFunc */
/* Demangled: getHDCPCapabilityFunc */
extern void* getHDCPCapabilityFunc;

/* Symbol: _oecc104 */
/* Demangled: _oecc104 */
int _oecc104(void);

/* Symbol: _oecc25 */
/* Demangled: _oecc25 */
int _oecc25(void);

/* Symbol: _oecc50 */
/* Demangled: _oecc50 */
int _oecc50(void);

/* Symbol: _oecc105 */
/* Demangled: _oecc105 */
int _oecc105(void);

/* Symbol: _oecc26 */
/* Demangled: _oecc26 */
int _oecc26(void);

/* Symbol: _oecc51 */
/* Demangled: _oecc51 */
int _oecc51(void);

/* Symbol: _ZN12MTKTEEClient21SupportedCertificatesEv */
/* Demangled: MTKTEEClient::SupportedCertificates() */
int _ZN12MTKTEEClient21SupportedCertificatesEv(void);

/* Symbol: _ZN11GPTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject */
/* Demangled: GPTEEClient::LoadKeys_V8(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*) */
int _ZN11GPTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject(void);

/* Symbol: generic_DecryptFunc */
/* Demangled: generic_DecryptFunc */
extern void* generic_DecryptFunc;

/* Symbol: _oecc27 */
/* Demangled: _oecc27 */
int _oecc27(void);

/* Symbol: _oecc52 */
/* Demangled: _oecc52 */
int _oecc52(void);

/* Symbol: _ZN11GPTEEClient11OpenSessionEPj */
/* Demangled: GPTEEClient::OpenSession(unsigned int*) */
int _ZN11GPTEEClient11OpenSessionEPj(void);

/* Symbol: decryptCENCFunc */
/* Demangled: decryptCENCFunc */
extern void* decryptCENCFunc;

/* Symbol: _oecc107 */
/* Demangled: _oecc107 */
int _oecc107(void);

/* Symbol: _oecc28 */
/* Demangled: _oecc28 */
int _oecc28(void);

/* Symbol: _oecc53 */
/* Demangled: _oecc53 */
int _oecc53(void);

/* Symbol: loadDeviceRSAKeyFunc */
/* Demangled: loadDeviceRSAKeyFunc */
extern void* loadDeviceRSAKeyFunc;

/* Symbol: loadLicenseFunc */
/* Demangled: loadLicenseFunc */
extern void* loadLicenseFunc;

/* Symbol: _oecc108 */
/* Demangled: _oecc108 */
int _oecc108(void);

/* Symbol: _oecc29 */
/* Demangled: _oecc29 */
int _oecc29(void);

/* Symbol: _oecc54 */
/* Demangled: _oecc54 */
int _oecc54(void);

/* Symbol: _ZN11GPTEEClient27MaximumUsageTableHeaderSizeEv */
/* Demangled: GPTEEClient::MaximumUsageTableHeaderSize() */
int _ZN11GPTEEClient27MaximumUsageTableHeaderSizeEv(void);

/* Symbol: apiVersionFunc */
/* Demangled: apiVersionFunc */
extern void* apiVersionFunc;

/* Symbol: loadRenewalFunc */
/* Demangled: loadRenewalFunc */
extern void* loadRenewalFunc;

/* Symbol: _oecc55 */
/* Demangled: _oecc55 */
int _oecc55(void);

/* Symbol: _ZN12MTKTEEClient10APIVersionEv */
/* Demangled: MTKTEEClient::APIVersion() */
int _ZN12MTKTEEClient10APIVersionEv(void);

/* Symbol: _ZN12MTKTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc */
/* Demangled: MTKTEEClient::DecryptCENC(unsigned int, OEMCrypto_SampleDescription const*, unsigned int, OEMCrypto_CENCEncryptPatternDesc const*) */
int _ZN12MTKTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc(void);

/* Symbol: _ZN12MTKTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh */
/* Demangled: MTKTEEClient::Generic_Decrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
int _ZN12MTKTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void);

/* Symbol: _ZN11GPTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi */
/* Demangled: GPTEEClient::AllocateSecureBuffer(unsigned int, unsigned int, OEMCrypto_DestBufferDesc*, int*) */
int _ZN11GPTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi(void);

/* Symbol: _oecc56 */
/* Demangled: _oecc56 */
int _oecc56(void);

/* Symbol: _oecc81 */
/* Demangled: _oecc81 */
int _oecc81(void);

/* Symbol: _ZN12MTKTEEClient16UpdateUsageEntryEjPhPjS0_S1_ */
/* Demangled: MTKTEEClient::UpdateUsageEntry(unsigned int, unsigned char*, unsigned int*, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient16UpdateUsageEntryEjPhPjS0_S1_(void);

/* Symbol: _ZN12MTKTEEClient18ResourceRatingTierEv */
/* Demangled: MTKTEEClient::ResourceRatingTier() */
int _ZN12MTKTEEClient18ResourceRatingTierEv(void);

/* Symbol: gWidevineModularDrmUreeHandle */
/* Demangled: gWidevineModularDrmUreeHandle */
extern void* gWidevineModularDrmUreeHandle;

/* Symbol: _ZN11GPTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject */
/* Demangled: GPTEEClient::RefreshKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
int _ZN11GPTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void);

/* Symbol: _ZN11GPTEEClient17GenerateSignatureEjPKhjPhPj */
/* Demangled: GPTEEClient::GenerateSignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient17GenerateSignatureEjPKhjPhPj(void);

/* Symbol: _ZN11GPTEEClientD2Ev */
/* Demangled: GPTEEClient::~GPTEEClient() */
int _ZN11GPTEEClientD2Ev(void);

/* Symbol: initializeFunc */
/* Demangled: initializeFunc */
extern void* initializeFunc;

/* Symbol: _oecc57 */
/* Demangled: _oecc57 */
int _oecc57(void);

/* Symbol: _oecc82 */
/* Demangled: _oecc82 */
int _oecc82(void);

/* Symbol: _ZN12MTKTEEClient20IsSRMUpdateSupportedEv */
/* Demangled: MTKTEEClient::IsSRMUpdateSupported() */
int _ZN12MTKTEEClient20IsSRMUpdateSupportedEv(void);

/* Symbol: _ZN11GPTEEClient17LoadOEMPrivateKeyEj */
/* Demangled: GPTEEClient::LoadOEMPrivateKey(unsigned int) */
int _ZN11GPTEEClient17LoadOEMPrivateKeyEj(void);

/* Symbol: getHashErrorCodeFunc */
/* Demangled: getHashErrorCodeFunc */
extern void* getHashErrorCodeFunc;

/* Symbol: moveEntryFunc */
/* Demangled: moveEntryFunc */
extern void* moveEntryFunc;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _oecc83 */
/* Demangled: _oecc83 */
int _oecc83(void);

/* Symbol: _ZN11GPTEEClient13IsKeyboxValidEv */
/* Demangled: GPTEEClient::IsKeyboxValid() */
int _ZN11GPTEEClient13IsKeyboxValidEv(void);

/* Symbol: gWidevineModularDrmTlcHandle */
/* Demangled: gWidevineModularDrmTlcHandle */
extern void* gWidevineModularDrmTlcHandle;

/* Symbol: isAntiRollbackHwPresentFunc */
/* Demangled: isAntiRollbackHwPresentFunc */
extern void* isAntiRollbackHwPresentFunc;

/* Symbol: _oecc84 */
/* Demangled: _oecc84 */
int _oecc84(void);

/* Symbol: _ZN11GPTEEClient11GetDeviceIDEPhPj */
/* Demangled: GPTEEClient::GetDeviceID(unsigned char*, unsigned int*) */
int _ZN11GPTEEClient11GetDeviceIDEPhPj(void);

/* Symbol: _ZTV11GPTEEClient */
/* Demangled: vtable for GPTEEClient */
extern void* _ZTV11GPTEEClient;

/* Symbol: getMaxNumberOfSessionsFunc */
/* Demangled: getMaxNumberOfSessionsFunc */
extern void* getMaxNumberOfSessionsFunc;

/* Symbol: _oecc85 */
/* Demangled: _oecc85 */
int _oecc85(void);

/* Symbol: _ZN12MTKTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType */
/* Demangled: MTKTEEClient::LoadKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_LicenseType) */
int _ZN12MTKTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType(void);

/* Symbol: _ZN12MTKTEEClient17CopyOldUsageEntryEjPKhj */
/* Demangled: MTKTEEClient::CopyOldUsageEntry(unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient17CopyOldUsageEntryEjPKhj(void);

/* Symbol: _ZN11GPTEEClient11LoadRenewalEjPKhjjS1_j */
/* Demangled: GPTEEClient::LoadRenewal(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient11LoadRenewalEjPKhjjS1_j(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _oecc86 */
/* Demangled: _oecc86 */
int _oecc86(void);

/* Symbol: _ZN12MTKTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject */
/* Demangled: MTKTEEClient::LoadKeys_V8(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*) */
int _ZN12MTKTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject(void);

/* Symbol: _ZN12MTKTEEClient16UpdateUsageTableEv */
/* Demangled: MTKTEEClient::UpdateUsageTable() */
int _ZN12MTKTEEClient16UpdateUsageTableEv(void);

/* Symbol: _ZN11GPTEEClient22ShrinkUsageTableHeaderEjPhPj */
/* Demangled: GPTEEClient::ShrinkUsageTableHeader(unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient22ShrinkUsageTableHeaderEjPhPj(void);

/* Symbol: _ZN11GPTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType */
/* Demangled: GPTEEClient::LoadKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, OEMCrypto_Substring, OEMCrypto_Substring, unsigned int, OEMCrypto_KeyObject const*, OEMCrypto_Substring, OEMCrypto_Substring, OEMCrypto_LicenseType) */
int _ZN11GPTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType(void);

/* Symbol: _ZN12MTKTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_ */
/* Demangled: MTKTEEClient::GetHDCPCapability(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
int _ZN12MTKTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_(void);

/* Symbol: _ZN12MTKTEEClient27MaximumUsageTableHeaderSizeEv */
/* Demangled: MTKTEEClient::MaximumUsageTableHeaderSize() */
int _ZN12MTKTEEClient27MaximumUsageTableHeaderSizeEv(void);

/* Symbol: _ZN11GPTEEClient10GetKeyDataEPhPj */
/* Demangled: GPTEEClient::GetKeyData(unsigned char*, unsigned int*) */
int _ZN11GPTEEClient10GetKeyDataEPhPj(void);

/* Symbol: _oecc88 */
/* Demangled: _oecc88 */
int _oecc88(void);

/* Symbol: _ZN12MTKTEEClient20LoadUsageTableHeaderEPKhj */
/* Demangled: MTKTEEClient::LoadUsageTableHeader(unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient20LoadUsageTableHeaderEPKhj(void);

/* Symbol: _ZN11GPTEEClient14LoadUsageEntryEjjPKhj */
/* Demangled: GPTEEClient::LoadUsageEntry(unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient14LoadUsageEntryEjjPKhj(void);

/* Symbol: deleteOldUsageTableFunc */
/* Demangled: deleteOldUsageTableFunc */
extern void* deleteOldUsageTableFunc;

/* Symbol: _oecc89 */
/* Demangled: _oecc89 */
int _oecc89(void);

/* Symbol: _ZN11GPTEEClient9MoveEntryEjj */
/* Demangled: GPTEEClient::MoveEntry(unsigned int, unsigned int) */
int _ZN11GPTEEClient9MoveEntryEjj(void);

/* Symbol: openSessionFunc */
/* Demangled: openSessionFunc */
extern void* openSessionFunc;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN12MTKTEEClientD1Ev */
/* Demangled: MTKTEEClient::~MTKTEEClient() */
int _ZN12MTKTEEClientD1Ev(void);

/* Symbol: _ZN11GPTEEClient10InitializeEv */
/* Demangled: GPTEEClient::Initialize() */
int _ZN11GPTEEClient10InitializeEv(void);

/* Symbol: _ZN11GPTEEClient13SelectKey_V13EjPKhj */
/* Demangled: GPTEEClient::SelectKey_V13(unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient13SelectKey_V13EjPKhj(void);

/* Symbol: forceDeleteUsageEntryFunc */
/* Demangled: forceDeleteUsageEntryFunc */
extern void* forceDeleteUsageEntryFunc;

/* Symbol: _ZN11GPTEEClientC1Ev */
/* Demangled: GPTEEClient::GPTEEClient() */
int _ZN11GPTEEClientC1Ev(void);

/* Symbol: _ZN11GPTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j */
/* Demangled: GPTEEClient::LoadKeys_V9_or_V10(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void);

/* Symbol: updateUsageEntryFunc */
/* Demangled: updateUsageEntryFunc */
extern void* updateUsageEntryFunc;

/* Symbol: _ZN12MTKTEEClient14LoadUsageEntryEjjPKhj */
/* Demangled: MTKTEEClient::LoadUsageEntry(unsigned int, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient14LoadUsageEntryEjjPKhj(void);

/* Symbol: _ZN12MTKTEEClient18SecurityPatchLevelEv */
/* Demangled: MTKTEEClient::SecurityPatchLevel() */
int _ZN12MTKTEEClient18SecurityPatchLevelEv(void);

/* Symbol: _ZN12MTKTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_ */
/* Demangled: MTKTEEClient::PrepAndSignRenewalRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_(void);

/* Symbol: _ZN11GPTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject */
/* Demangled: GPTEEClient::LoadEntitledContentKeys_V14(unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
int _ZN11GPTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject(void);

/* Symbol: _ZN12MTKTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_ */
/* Demangled: MTKTEEClient::PrepAndSignLicenseRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_(void);

/* Symbol: _ZN11GPTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj */
/* Demangled: GPTEEClient::CreateOldUsageEntry(unsigned long long, unsigned long long, unsigned long long, OEMCrypto_Usage_Entry_Status, unsigned char*, unsigned char*, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj(void);

/* Symbol: _ZN12MTKTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j */
/* Demangled: MTKTEEClient::LoadKeys_V9_or_V10(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void);

/* Symbol: _ZN12MTKTEEClient22CreateUsageTableHeaderEPhPj */
/* Demangled: MTKTEEClient::CreateUsageTableHeader(unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient22CreateUsageTableHeaderEPhPj(void);

/* Symbol: _ZN11GPTEEClient13GenerateNonceEjPj */
/* Demangled: GPTEEClient::GenerateNonce(unsigned int, unsigned int*) */
int _ZN11GPTEEClient13GenerateNonceEjPj(void);

/* Symbol: _ZN11GPTEEClient7LoadSRMEPKhj */
/* Demangled: GPTEEClient::LoadSRM(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient7LoadSRMEPKhj(void);

/* Symbol: _ZN12MTKTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch */
/* Demangled: MTKTEEClient::CopyBuffer_V14(unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, unsigned char) */
int _ZN12MTKTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch(void);

/* Symbol: _ZN12MTKTEEClient23IsAntiRollbackHwPresentEv */
/* Demangled: MTKTEEClient::IsAntiRollbackHwPresent() */
int _ZN12MTKTEEClient23IsAntiRollbackHwPresentEv(void);

/* Symbol: generic_VerifyFunc */
/* Demangled: generic_VerifyFunc */
extern void* generic_VerifyFunc;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN12MTKTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_ */
/* Demangled: MTKTEEClient::GetHDCPCapability_V9(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
int _ZN12MTKTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_(void);

/* Symbol: _ZN12MTKTEEClient9GetRandomEPhj */
/* Demangled: MTKTEEClient::GetRandom(unsigned char*, unsigned int) */
int _ZN12MTKTEEClient9GetRandomEPhj(void);

/* Symbol: _ZN11GPTEEClient16LoadProvisioningEjPKhjjS1_jPhPj */
/* Demangled: GPTEEClient::LoadProvisioning(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient16LoadProvisioningEjPKhjjS1_jPhPj(void);

/* Symbol: _ZN11GPTEEClient19GenerateDerivedKeysEjPKhjS1_j */
/* Demangled: GPTEEClient::GenerateDerivedKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient19GenerateDerivedKeysEjPKhjS1_j(void);

/* Symbol: _ZN11GPTEEClient20GenerateRSASignatureEjPKhjPhPjh */
/* Demangled: GPTEEClient::GenerateRSASignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char) */
int _ZN11GPTEEClient20GenerateRSASignatureEjPKhjPhPjh(void);

/* Symbol: loadSRMFunc */
/* Demangled: loadSRMFunc */
extern void* loadSRMFunc;

/* Symbol: _ZN12MTKTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj */
/* Demangled: MTKTEEClient::CreateOldUsageEntry(unsigned long long, unsigned long long, unsigned long long, OEMCrypto_Usage_Entry_Status, unsigned char*, unsigned char*, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj(void);

/* Symbol: _ZN11GPTEEClient15MinorAPIVersionEv */
/* Demangled: GPTEEClient::MinorAPIVersion() */
int _ZN11GPTEEClient15MinorAPIVersionEv(void);

/* Symbol: shrinkUsageTableHeaderFunc */
/* Demangled: shrinkUsageTableHeaderFunc */
extern void* shrinkUsageTableHeaderFunc;

/* Symbol: _oecc01 */
/* Demangled: _oecc01 */
int _oecc01(void);

/* Symbol: _ZN12MTKTEEClient16GetHashErrorCodeEjPj */
/* Demangled: MTKTEEClient::GetHashErrorCode(unsigned int, unsigned int*) */
int _ZN12MTKTEEClient16GetHashErrorCodeEjPj(void);

/* Symbol: _ZN11GPTEEClient18ResourceRatingTierEv */
/* Demangled: GPTEEClient::ResourceRatingTier() */
int _ZN11GPTEEClient18ResourceRatingTierEv(void);

/* Symbol: _oecc02 */
/* Demangled: _oecc02 */
int _oecc02(void);

/* Symbol: _ZN11GPTEEClient16LoadDeviceRSAKeyEjPKhj */
/* Demangled: GPTEEClient::LoadDeviceRSAKey(unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient16LoadDeviceRSAKeyEjPKhj(void);

/* Symbol: _ZN11GPTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj */
/* Demangled: GPTEEClient::LoadDRMPrivateKey(unsigned int, OEMCrypto_PrivateKeyType, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj(void);

/* Symbol: loadOEMPrivateKeyFunc */
/* Demangled: loadOEMPrivateKeyFunc */
extern void* loadOEMPrivateKeyFunc;

/* Symbol: _oecc03 */
/* Demangled: _oecc03 */
int _oecc03(void);

/* Symbol: _ZN12MTKTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj */
/* Demangled: MTKTEEClient::RewrapDeviceRSAKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int const*, unsigned char const*, unsigned int, unsigned char const*, unsigned char*, unsigned int*) */
int _ZN12MTKTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj(void);

/* Symbol: _ZN11GPTEEClient20DeactivateUsageEntryEjPKhj */
/* Demangled: GPTEEClient::DeactivateUsageEntry(unsigned int, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient20DeactivateUsageEntryEjPKhj(void);

/* Symbol: _oecc04 */
/* Demangled: _oecc04 */
int _oecc04(void);

/* Symbol: _ZN12MTKTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType */
/* Demangled: MTKTEEClient::LoadKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, OEMCrypto_Substring, OEMCrypto_Substring, unsigned int, OEMCrypto_KeyObject const*, OEMCrypto_Substring, OEMCrypto_Substring, OEMCrypto_LicenseType) */
int _ZN12MTKTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType(void);

/* Symbol: _ZN12MTKTEEClient9RemoveSRMEv */
/* Demangled: MTKTEEClient::RemoveSRM() */
int _ZN12MTKTEEClient9RemoveSRMEv(void);

/* Symbol: _ZTV12MTKTEEClient */
/* Demangled: vtable for MTKTEEClient */
extern void* _ZTV12MTKTEEClient;

/* Symbol: _ZN11GPTEEClient12CloseSessionEj */
/* Demangled: GPTEEClient::CloseSession(unsigned int) */
int _ZN11GPTEEClient12CloseSessionEj(void);

/* Symbol: prepAndSignLicenseRequestFunc */
/* Demangled: prepAndSignLicenseRequestFunc */
extern void* prepAndSignLicenseRequestFunc;

/* Symbol: supportsUsageTableFunc */
/* Demangled: supportsUsageTableFunc */
extern void* supportsUsageTableFunc;

/* Symbol: _oecc05 */
/* Demangled: _oecc05 */
int _oecc05(void);

/* Symbol: _oecc30 */
/* Demangled: _oecc30 */
int _oecc30(void);

/* Symbol: _ZN12MTKTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_ */
/* Demangled: MTKTEEClient::LoadKeys_V13(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*) */
int _ZN12MTKTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_(void);

/* Symbol: _ZN11GPTEEClient18LoadTestKeybox_V13Ev */
/* Demangled: GPTEEClient::LoadTestKeybox_V13() */
int _ZN11GPTEEClient18LoadTestKeybox_V13Ev(void);

/* Symbol: _ZN11GPTEEClient9TerminateEv */
/* Demangled: GPTEEClient::Terminate() */
int _ZN11GPTEEClient9TerminateEv(void);

/* Symbol: allocateSecureBufferFunc */
/* Demangled: allocateSecureBufferFunc */
extern void* allocateSecureBufferFunc;

/* Symbol: generateNonceFunc */
/* Demangled: generateNonceFunc */
extern void* generateNonceFunc;

/* Symbol: _oecc06 */
/* Demangled: _oecc06 */
int _oecc06(void);

/* Symbol: _oecc31 */
/* Demangled: _oecc31 */
int _oecc31(void);

/* Symbol: _ZN12MTKTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode */
/* Demangled: MTKTEEClient::SelectKey(unsigned int, unsigned char const*, unsigned int, OEMCryptoCipherMode) */
int _ZN12MTKTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode(void);

/* Symbol: loadUsageEntryFunc */
/* Demangled: loadUsageEntryFunc */
extern void* loadUsageEntryFunc;

/* Symbol: _oecc07 */
/* Demangled: _oecc07 */
int _oecc07(void);

/* Symbol: _oecc32 */
/* Demangled: _oecc32 */
int _oecc32(void);

/* Symbol: _ZN12MTKTEEClient14CheckLogEnableEv */
/* Demangled: MTKTEEClient::CheckLogEnable() */
int _ZN12MTKTEEClient14CheckLogEnableEv(void);

/* Symbol: _oecc08 */
/* Demangled: _oecc08 */
int _oecc08(void);

/* Symbol: _oecc33 */
/* Demangled: _oecc33 */
int _oecc33(void);

/* Symbol: _ZN12MTKTEEClient16LoadDeviceRSAKeyEjPKhj */
/* Demangled: MTKTEEClient::LoadDeviceRSAKey(unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient16LoadDeviceRSAKeyEjPKhj(void);

/* Symbol: _ZN12MTKTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject */
/* Demangled: MTKTEEClient::LoadEntitledContentKeys(unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
int _ZN12MTKTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject(void);

/* Symbol: _ZN11GPTEEClient19DeleteOldUsageTableEv */
/* Demangled: GPTEEClient::DeleteOldUsageTable() */
int _ZN11GPTEEClient19DeleteOldUsageTableEv(void);

/* Symbol: loadProvisioningFunc */
/* Demangled: loadProvisioningFunc */
extern void* loadProvisioningFunc;

/* Symbol: _oecc09 */
/* Demangled: _oecc09 */
int _oecc09(void);

/* Symbol: _oecc34 */
/* Demangled: _oecc34 */
int _oecc34(void);

/* Symbol: _ZN11GPTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_ */
/* Demangled: GPTEEClient::LoadKeys_V13(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*) */
int _ZN11GPTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_(void);

/* Symbol: rewrapDeviceRSAKeyFunc */
/* Demangled: rewrapDeviceRSAKeyFunc */
extern void* rewrapDeviceRSAKeyFunc;

/* Symbol: _oecc35 */
/* Demangled: _oecc35 */
int _oecc35(void);

/* Symbol: _ZN12MTKTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi */
/* Demangled: MTKTEEClient::AllocateSecureBuffer(unsigned int, unsigned int, OEMCrypto_DestBufferDesc*, int*) */
int _ZN12MTKTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi(void);

/* Symbol: copyBufferFunc */
/* Demangled: copyBufferFunc */
extern void* copyBufferFunc;

/* Symbol: _oecc36 */
/* Demangled: _oecc36 */
int _oecc36(void);

/* Symbol: _oecc61 */
/* Demangled: _oecc61 */
int _oecc61(void);

/* Symbol: _ZN12MTKTEEClient13IsKeyboxValidEv */
/* Demangled: MTKTEEClient::IsKeyboxValid() */
int _ZN12MTKTEEClient13IsKeyboxValidEv(void);

/* Symbol: _ZN11GPTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_ */
/* Demangled: GPTEEClient::PrepAndSignRenewalRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_(void);

/* Symbol: loadUsageTableHeaderFunc */
/* Demangled: loadUsageTableHeaderFunc */
extern void* loadUsageTableHeaderFunc;

/* Symbol: _oecc37 */
/* Demangled: _oecc37 */
int _oecc37(void);

/* Symbol: _oecc62 */
/* Demangled: _oecc62 */
int _oecc62(void);

/* Symbol: _ZN12MTKTEEClient19DeleteOldUsageTableEv */
/* Demangled: MTKTEEClient::DeleteOldUsageTable() */
int _ZN12MTKTEEClient19DeleteOldUsageTableEv(void);

/* Symbol: _ZN11GPTEEClient10WrapKeyboxEPKhjPhPjS1_j */
/* Demangled: GPTEEClient::WrapKeybox(unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char const*, unsigned int) */
int _ZN11GPTEEClient10WrapKeyboxEPKhjPhPjS1_j(void);

/* Symbol: _ZN11GPTEEClient18SecurityPatchLevelEv */
/* Demangled: GPTEEClient::SecurityPatchLevel() */
int _ZN11GPTEEClient18SecurityPatchLevelEv(void);

/* Symbol: _oecc38 */
/* Demangled: _oecc38 */
int _oecc38(void);

/* Symbol: _oecc63 */
/* Demangled: _oecc63 */
int _oecc63(void);

/* Symbol: _ZN12MTKTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j */
/* Demangled: MTKTEEClient::GenerateDerivedKeys_V15(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _ZN12MTKTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j(void);

/* Symbol: _ZN12MTKTEEClient9MoveEntryEjj */
/* Demangled: MTKTEEClient::MoveEntry(unsigned int, unsigned int) */
int _ZN12MTKTEEClient9MoveEntryEjj(void);

/* Symbol: _ZN11GPTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject */
/* Demangled: GPTEEClient::RefreshKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
int _ZN11GPTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void);

/* Symbol: _ZN11GPTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_ */
/* Demangled: GPTEEClient::GetHDCPCapability_V9(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
int _ZN11GPTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_(void);

/* Symbol: _ZN11GPTEEClient24DeactivateUsageEntry_V12EPKhj */
/* Demangled: GPTEEClient::DeactivateUsageEntry_V12(unsigned char const*, unsigned int) */
int _ZN11GPTEEClient24DeactivateUsageEntry_V12EPKhj(void);

/* Symbol: createUsageTableHeaderFunc */
/* Demangled: createUsageTableHeaderFunc */
extern void* createUsageTableHeaderFunc;

/* Symbol: queryKeyControlFunc */
/* Demangled: queryKeyControlFunc */
extern void* queryKeyControlFunc;

/* Symbol: _oecc39 */
/* Demangled: _oecc39 */
int _oecc39(void);

/* Symbol: _oecc64 */
/* Demangled: _oecc64 */
int _oecc64(void);

/* Symbol: _ZN11GPTEEClient16UpdateUsageTableEv */
/* Demangled: GPTEEClient::UpdateUsageTable() */
int _ZN11GPTEEClient16UpdateUsageTableEv(void);

/* Symbol: _ZN11GPTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_ */
/* Demangled: GPTEEClient::PrepAndSignProvisioningRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
int _ZN11GPTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_(void);

/* Symbol: _ZN11GPTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode */
/* Demangled: GPTEEClient::SelectKey(unsigned int, unsigned char const*, unsigned int, OEMCryptoCipherMode) */
int _ZN11GPTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode(void);

/* Symbol: OEMCrypto_FreeSecureBuffer */
/* Demangled: OEMCrypto_FreeSecureBuffer */
int OEMCrypto_FreeSecureBuffer(void);

/* Symbol: _oecc65 */
/* Demangled: _oecc65 */
int _oecc65(void);

/* Symbol: _oecc90 */
/* Demangled: _oecc90 */
int _oecc90(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBOEMCRYPTO_H */
