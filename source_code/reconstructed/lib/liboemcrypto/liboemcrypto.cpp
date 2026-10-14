/*
 * Reverse-Engineered Source for: liboemcrypto.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "liboemcrypto"

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
#include "liboemcrypto.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: _oecc66 */
extern "C" __attribute__((visibility("default"))) int _oecc66(void) {
    ALOGD("_oecc66() called");
    return 0;
}

/* Demangled: _oecc91 */
extern "C" __attribute__((visibility("default"))) int _oecc91(void) {
    ALOGD("_oecc91() called");
    return 0;
}

/* Demangled: GPTEEClient::APIVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient10APIVersionEv(void) {
    ALOGD("_ZN11GPTEEClient10APIVersionEv() called");
    return 0;
}

/* Exported Object: getDeviceIDFunc */
extern "C" __attribute__((visibility("default"))) void* getDeviceIDFunc = NULL;

/* Demangled: _oecc67 */
extern "C" __attribute__((visibility("default"))) int _oecc67(void) {
    ALOGD("_oecc67() called");
    return 0;
}

/* Demangled: _oecc92 */
extern "C" __attribute__((visibility("default"))) int _oecc92(void) {
    ALOGD("_oecc92() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_LicenseType) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType(void) {
    ALOGD("_ZN11GPTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType() called");
    return 0;
}

/* Demangled: GPTEEClient::Generic_Verify(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j(void) {
    ALOGD("_ZN11GPTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::RewrapDeviceRSAKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int const*, unsigned char const*, unsigned int, unsigned char const*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj(void) {
    ALOGD("_ZN11GPTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj() called");
    return 0;
}

/* Exported Object: closeSessionFunc */
extern "C" __attribute__((visibility("default"))) void* closeSessionFunc = NULL;

/* Demangled: _oecc68 */
extern "C" __attribute__((visibility("default"))) int _oecc68(void) {
    ALOGD("_oecc68() called");
    return 0;
}

/* Demangled: _oecc93 */
extern "C" __attribute__((visibility("default"))) int _oecc93(void) {
    ALOGD("_oecc93() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeleteUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16DeleteUsageTableEv(void) {
    ALOGD("_ZN12MTKTEEClient16DeleteUsageTableEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::MTKTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClientC2Ev(void) {
    ALOGD("_ZN12MTKTEEClientC2Ev() called");
    return 0;
}

/* Demangled: GPTEEClient::FreeSecureBuffer(unsigned int, OEMCrypto_DestBufferDesc*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci(void) {
    ALOGD("_ZN11GPTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci() called");
    return 0;
}

/* Demangled: _oecc69 */
extern "C" __attribute__((visibility("default"))) int _oecc69(void) {
    ALOGD("_oecc69() called");
    return 0;
}

/* Demangled: _oecc94 */
extern "C" __attribute__((visibility("default"))) int _oecc94(void) {
    ALOGD("_oecc94() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeactivateUsageEntry(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20DeactivateUsageEntryEjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient20DeactivateUsageEntryEjPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadSRM(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient7LoadSRMEPKhj(void) {
    ALOGD("_ZN12MTKTEEClient7LoadSRMEPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::GetHashErrorCode(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16GetHashErrorCodeEjPj(void) {
    ALOGD("_ZN11GPTEEClient16GetHashErrorCodeEjPj() called");
    return 0;
}

/* Exported Object: buildInformationFunc */
extern "C" __attribute__((visibility("default"))) void* buildInformationFunc = NULL;

/* Exported Object: loadKeysFunc */
extern "C" __attribute__((visibility("default"))) void* loadKeysFunc = NULL;

/* Demangled: _oecc95 */
extern "C" __attribute__((visibility("default"))) int _oecc95(void) {
    ALOGD("_oecc95() called");
    return 0;
}

/* Exported Object: setDecryptHashFunc */
extern "C" __attribute__((visibility("default"))) void* setDecryptHashFunc = NULL;

/* Demangled: _oecc96 */
extern "C" __attribute__((visibility("default"))) int _oecc96(void) {
    ALOGD("_oecc96() called");
    return 0;
}

/* Demangled: MTKTEEClient::RefreshKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void) {
    ALOGD("_ZN12MTKTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetOEMPublicCertificate(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23GetOEMPublicCertificateEPhPj(void) {
    ALOGD("_ZN12MTKTEEClient23GetOEMPublicCertificateEPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeactivateUsageEntry_V12(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient24DeactivateUsageEntry_V12EPKhj(void) {
    ALOGD("_ZN12MTKTEEClient24DeactivateUsageEntry_V12EPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::UpdateUsageEntry(unsigned int, unsigned char*, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16UpdateUsageEntryEjPhPjS0_S1_(void) {
    ALOGD("_ZN11GPTEEClient16UpdateUsageEntryEjPhPjS0_S1_() called");
    return 0;
}

/* Exported Object: createOldUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* createOldUsageEntryFunc = NULL;

/* Exported Object: deriveKeysFromSessionKeyFunc */
extern "C" __attribute__((visibility("default"))) void* deriveKeysFromSessionKeyFunc = NULL;

/* Exported Object: loadEntitledContentKeysFunc */
extern "C" __attribute__((visibility("default"))) void* loadEntitledContentKeysFunc = NULL;

/* Demangled: _oecc97 */
extern "C" __attribute__((visibility("default"))) int _oecc97(void) {
    ALOGD("_oecc97() called");
    return 0;
}

/* Demangled: MTKTEEClient::QueryKeyControl(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15QueryKeyControlEjPKhjPhPj(void) {
    ALOGD("_ZN12MTKTEEClient15QueryKeyControlEjPKhjPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::PrepAndSignProvisioningRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN12MTKTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Demangled: GPTEEClient::SetDecryptHash(unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14SetDecryptHashEjjPKhj(void) {
    ALOGD("_ZN11GPTEEClient14SetDecryptHashEjjPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::~GPTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClientD1Ev(void) {
    ALOGD("_ZN11GPTEEClientD1Ev() called");
    return 0;
}

/* Exported Object: getNumberOfOpenSessionsFunc */
extern "C" __attribute__((visibility("default"))) void* getNumberOfOpenSessionsFunc = NULL;

/* Demangled: _oecc98 */
extern "C" __attribute__((visibility("default"))) int _oecc98(void) {
    ALOGD("_oecc98() called");
    return 0;
}

/* Demangled: _oecc99 */
extern "C" __attribute__((visibility("default"))) int _oecc99(void) {
    ALOGD("_oecc99() called");
    return 0;
}

/* Demangled: MTKTEEClient::BuildInformation() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16BuildInformationEv(void) {
    ALOGD("_ZN12MTKTEEClient16BuildInformationEv() called");
    return 0;
}

/* Demangled: GPTEEClient::CopyBuffer_V14(unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN11GPTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadTestKeybox(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14LoadTestKeyboxEPKhj(void) {
    ALOGD("_ZN11GPTEEClient14LoadTestKeyboxEPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::SetDecryptHash(unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14SetDecryptHashEjjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient14SetDecryptHashEjjPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::DecryptCENC(unsigned int, OEMCrypto_SampleDescription const*, unsigned int, OEMCrypto_CENCEncryptPatternDesc const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc(void) {
    ALOGD("_ZN11GPTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc() called");
    return 0;
}

/* Exported Object: deactivateUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* deactivateUsageEntryFunc = NULL;

/* Exported Object: generateSignatureFunc */
extern "C" __attribute__((visibility("default"))) void* generateSignatureFunc = NULL;

/* Exported Object: isSRMUpdateSupportedFunc */
extern "C" __attribute__((visibility("default"))) void* isSRMUpdateSupportedFunc = NULL;

/* Exported Object: loadDRMPrivateKeyFunc */
extern "C" __attribute__((visibility("default"))) void* loadDRMPrivateKeyFunc = NULL;

/* Exported Object: maximumUsageTableHeaderSizeFunc */
extern "C" __attribute__((visibility("default"))) void* maximumUsageTableHeaderSizeFunc = NULL;

/* Demangled: MTKTEEClient::LoadKeys_V11_or_V12(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void) {
    ALOGD("_ZN12MTKTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::InstallKeybox(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient13InstallKeyboxEPKhj(void) {
    ALOGD("_ZN11GPTEEClient13InstallKeyboxEPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::CopyOldUsageEntry(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient17CopyOldUsageEntryEjPKhj(void) {
    ALOGD("_ZN11GPTEEClient17CopyOldUsageEntryEjPKhj() called");
    return 0;
}

/* Exported Object: loadTestKeyboxFunc */
extern "C" __attribute__((visibility("default"))) void* loadTestKeyboxFunc = NULL;

/* Exported Object: supportedCertificatesFunc */
extern "C" __attribute__((visibility("default"))) void* supportedCertificatesFunc = NULL;

/* Exported Object: wrapKeyboxFunc */
extern "C" __attribute__((visibility("default"))) void* wrapKeyboxFunc = NULL;

/* Demangled: MTKTEEClient::FreeSecureBuffer(unsigned int, OEMCrypto_DestBufferDesc*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci(void) {
    ALOGD("_ZN12MTKTEEClient16FreeSecureBufferEjP24OEMCrypto_DestBufferDesci() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadLicense(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11LoadLicenseEjPKhjjS1_j(void) {
    ALOGD("_ZN11GPTEEClient11LoadLicenseEjPKhjjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::Generic_Sign(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj(void) {
    ALOGD("_ZN11GPTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadTestKeybox_V13() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18LoadTestKeybox_V13Ev(void) {
    ALOGD("_ZN12MTKTEEClient18LoadTestKeybox_V13Ev() called");
    return 0;
}

/* Demangled: OEMCrypto_DeleteUsageTable */
extern "C" __attribute__((visibility("default"))) int OEMCrypto_DeleteUsageTable(void) {
    ALOGD("OEMCrypto_DeleteUsageTable() called");
    return 0;
}

/* Demangled: GPTEEClient::GetCurrentSRMVersion(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20GetCurrentSRMVersionEPt(void) {
    ALOGD("_ZN11GPTEEClient20GetCurrentSRMVersionEPt() called");
    return 0;
}

/* Demangled: GPTEEClient::IsSRMUpdateSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20IsSRMUpdateSupportedEv(void) {
    ALOGD("_ZN11GPTEEClient20IsSRMUpdateSupportedEv() called");
    return 0;
}

/* Exported Object: generateRSASignatureFunc */
extern "C" __attribute__((visibility("default"))) void* generateRSASignatureFunc = NULL;

/* Exported Object: terminateFunc */
extern "C" __attribute__((visibility("default"))) void* terminateFunc = NULL;

/* Demangled: MTKTEEClient::OpenSession(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11OpenSessionEPj(void) {
    ALOGD("_ZN12MTKTEEClient11OpenSessionEPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::~MTKTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClientD0Ev(void) {
    ALOGD("_ZN12MTKTEEClientD0Ev() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetCurrentSRMVersion(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20GetCurrentSRMVersionEPt(void) {
    ALOGD("_ZN12MTKTEEClient20GetCurrentSRMVersionEPt() called");
    return 0;
}

/* Demangled: _oecc10 */
extern "C" __attribute__((visibility("default"))) int _oecc10(void) {
    ALOGD("_oecc10() called");
    return 0;
}

/* Demangled: GPTEEClient::GetNumberOfOpenSessions(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23GetNumberOfOpenSessionsEPj(void) {
    ALOGD("_ZN11GPTEEClient23GetNumberOfOpenSessionsEPj() called");
    return 0;
}

/* Demangled: GPTEEClient::GetRandom(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient9GetRandomEPhj(void) {
    ALOGD("_ZN11GPTEEClient9GetRandomEPhj() called");
    return 0;
}

/* Exported Object: generateDerivedKeysFunc */
extern "C" __attribute__((visibility("default"))) void* generateDerivedKeysFunc = NULL;

/* Demangled: _oecc11 */
extern "C" __attribute__((visibility("default"))) int _oecc11(void) {
    ALOGD("_oecc11() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadLicense(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11LoadLicenseEjPKhjjS1_j(void) {
    ALOGD("_ZN12MTKTEEClient11LoadLicenseEjPKhjjS1_j() called");
    return 0;
}

/* Demangled: _oecc12 */
extern "C" __attribute__((visibility("default"))) int _oecc12(void) {
    ALOGD("_oecc12() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadRenewal(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11LoadRenewalEjPKhjjS1_j(void) {
    ALOGD("_ZN12MTKTEEClient11LoadRenewalEjPKhjjS1_j() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadTestRSAKey() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14LoadTestRSAKeyEv(void) {
    ALOGD("_ZN12MTKTEEClient14LoadTestRSAKeyEv() called");
    return 0;
}

/* Demangled: GPTEEClient::GetHDCPCapability(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_(void) {
    ALOGD("_ZN11GPTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: _oecc13 */
extern "C" __attribute__((visibility("default"))) int _oecc13(void) {
    ALOGD("_oecc13() called");
    return 0;
}

/* Demangled: MTKTEEClient::Generic_Sign(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj(void) {
    ALOGD("_ZN12MTKTEEClient12Generic_SignEjPKhj19OEMCrypto_AlgorithmPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::Generic_Encrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void) {
    ALOGD("_ZN11GPTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadUsageTableHeader(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20LoadUsageTableHeaderEPKhj(void) {
    ALOGD("_ZN11GPTEEClient20LoadUsageTableHeaderEPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadEntitledContentKeys(unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject(void) {
    ALOGD("_ZN11GPTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject() called");
    return 0;
}

/* Demangled: _oecc14 */
extern "C" __attribute__((visibility("default"))) int _oecc14(void) {
    ALOGD("_oecc14() called");
    return 0;
}

/* Demangled: MTKTEEClient::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient9TerminateEv(void) {
    ALOGD("_ZN12MTKTEEClient9TerminateEv() called");
    return 0;
}

/* Demangled: _oecc15 */
extern "C" __attribute__((visibility("default"))) int _oecc15(void) {
    ALOGD("_oecc15() called");
    return 0;
}

/* Demangled: _oecc40 */
extern "C" __attribute__((visibility("default"))) int _oecc40(void) {
    ALOGD("_oecc40() called");
    return 0;
}

/* Demangled: _oecc16 */
extern "C" __attribute__((visibility("default"))) int _oecc16(void) {
    ALOGD("_oecc16() called");
    return 0;
}

/* Demangled: _oecc41 */
extern "C" __attribute__((visibility("default"))) int _oecc41(void) {
    ALOGD("_oecc41() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: _oecc17 */
extern "C" __attribute__((visibility("default"))) int _oecc17(void) {
    ALOGD("_oecc17() called");
    return 0;
}

/* Demangled: _oecc42 */
extern "C" __attribute__((visibility("default"))) int _oecc42(void) {
    ALOGD("_oecc42() called");
    return 0;
}

/* Demangled: GPTEEClient::GetMaxNumberOfSessions(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient22GetMaxNumberOfSessionsEPj(void) {
    ALOGD("_ZN11GPTEEClient22GetMaxNumberOfSessionsEPj() called");
    return 0;
}

/* Exported Object: getRandomFunc */
extern "C" __attribute__((visibility("default"))) void* getRandomFunc = NULL;

/* Exported Object: installKeyboxFunc */
extern "C" __attribute__((visibility("default"))) void* installKeyboxFunc = NULL;

/* Demangled: _oecc18 */
extern "C" __attribute__((visibility("default"))) int _oecc18(void) {
    ALOGD("_oecc18() called");
    return 0;
}

/* Demangled: _oecc43 */
extern "C" __attribute__((visibility("default"))) int _oecc43(void) {
    ALOGD("_oecc43() called");
    return 0;
}

/* Demangled: _oecc19 */
extern "C" __attribute__((visibility("default"))) int _oecc19(void) {
    ALOGD("_oecc19() called");
    return 0;
}

/* Demangled: _oecc44 */
extern "C" __attribute__((visibility("default"))) int _oecc44(void) {
    ALOGD("_oecc44() called");
    return 0;
}

/* Demangled: GPTEEClient::ForceDeleteUsageEntry(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient21ForceDeleteUsageEntryEPKhj(void) {
    ALOGD("_ZN11GPTEEClient21ForceDeleteUsageEntryEPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::DeriveKeysFromSessionKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j(void) {
    ALOGD("_ZN11GPTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j() called");
    return 0;
}

/* Demangled: _oecc45 */
extern "C" __attribute__((visibility("default"))) int _oecc45(void) {
    ALOGD("_oecc45() called");
    return 0;
}

/* Demangled: _oecc70 */
extern "C" __attribute__((visibility("default"))) int _oecc70(void) {
    ALOGD("_oecc70() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadTestKeybox(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14LoadTestKeyboxEPKhj(void) {
    ALOGD("_ZN12MTKTEEClient14LoadTestKeyboxEPKhj() called");
    return 0;
}

/* Exported Object: removeSRMFunc */
extern "C" __attribute__((visibility("default"))) void* removeSRMFunc = NULL;

/* Exported Object: securityPatchLevelFunc */
extern "C" __attribute__((visibility("default"))) void* securityPatchLevelFunc = NULL;

/* Demangled: _oecc46 */
extern "C" __attribute__((visibility("default"))) int _oecc46(void) {
    ALOGD("_oecc46() called");
    return 0;
}

/* Demangled: _oecc71 */
extern "C" __attribute__((visibility("default"))) int _oecc71(void) {
    ALOGD("_oecc71() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadOEMPrivateKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient17LoadOEMPrivateKeyEj(void) {
    ALOGD("_ZN12MTKTEEClient17LoadOEMPrivateKeyEj() called");
    return 0;
}

/* Demangled: MTKTEEClient::ShrinkUsageTableHeader(unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient22ShrinkUsageTableHeaderEjPhPj(void) {
    ALOGD("_ZN12MTKTEEClient22ShrinkUsageTableHeaderEjPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::DeleteUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16DeleteUsageTableEv(void) {
    ALOGD("_ZN11GPTEEClient16DeleteUsageTableEv() called");
    return 0;
}

/* Demangled: GPTEEClient::IsAntiRollbackHwPresent() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23IsAntiRollbackHwPresentEv(void) {
    ALOGD("_ZN11GPTEEClient23IsAntiRollbackHwPresentEv() called");
    return 0;
}

/* Exported Object: generic_SignFunc */
extern "C" __attribute__((visibility("default"))) void* generic_SignFunc = NULL;

/* Demangled: _oecc47 */
extern "C" __attribute__((visibility("default"))) int _oecc47(void) {
    ALOGD("_oecc47() called");
    return 0;
}

/* Demangled: GPTEEClient::SupportsUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18SupportsUsageTableEv(void) {
    ALOGD("_ZN11GPTEEClient18SupportsUsageTableEv() called");
    return 0;
}

/* Exported Object: libpath */
extern "C" __attribute__((visibility("default"))) void* libpath = NULL;

/* Demangled: _oecc48 */
extern "C" __attribute__((visibility("default"))) int _oecc48(void) {
    ALOGD("_oecc48() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetMaxNumberOfSessions(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient22GetMaxNumberOfSessionsEPj(void) {
    ALOGD("_ZN12MTKTEEClient22GetMaxNumberOfSessionsEPj() called");
    return 0;
}

/* Exported Object: minorAPIVersionFunc */
extern "C" __attribute__((visibility("default"))) void* minorAPIVersionFunc = NULL;

/* Exported Object: prepAndSignProvisioningRequestFunc */
extern "C" __attribute__((visibility("default"))) void* prepAndSignProvisioningRequestFunc = NULL;

/* Demangled: _oecc49 */
extern "C" __attribute__((visibility("default"))) int _oecc49(void) {
    ALOGD("_oecc49() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateNonce(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient13GenerateNonceEjPj(void) {
    ALOGD("_ZN12MTKTEEClient13GenerateNonceEjPj() called");
    return 0;
}

/* Exported Object: MTKTEEClient::mAvailSessions */
extern "C" __attribute__((visibility("default"))) void* _ZN12MTKTEEClient14mAvailSessionsE = NULL;

/* Demangled: MTKTEEClient::~MTKTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClientD2Ev(void) {
    ALOGD("_ZN12MTKTEEClientD2Ev() called");
    return 0;
}

/* Demangled: OEMCrypto_AllocateSecureBuffer */
extern "C" __attribute__((visibility("default"))) int OEMCrypto_AllocateSecureBuffer(void) {
    ALOGD("OEMCrypto_AllocateSecureBuffer() called");
    return 0;
}

/* Demangled: GPTEEClient::GPTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClientC2Ev(void) {
    ALOGD("_ZN11GPTEEClientC2Ev() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetNumberOfOpenSessions(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23GetNumberOfOpenSessionsEPj(void) {
    ALOGD("_ZN12MTKTEEClient23GetNumberOfOpenSessionsEPj() called");
    return 0;
}

/* Demangled: GPTEEClient::DecryptCENC_V15(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, OEMCrypto_CENCEncryptPatternDesc_V15 const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h(void) {
    ALOGD("_ZN11GPTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h() called");
    return 0;
}

/* Demangled: MTKTEEClient::MinorAPIVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15MinorAPIVersionEv(void) {
    ALOGD("_ZN12MTKTEEClient15MinorAPIVersionEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadDRMPrivateKey(unsigned int, OEMCrypto_PrivateKeyType, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj(void) {
    ALOGD("_ZN12MTKTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::Generic_Decrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void) {
    ALOGD("_ZN11GPTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh() called");
    return 0;
}

/* Demangled: GPTEEClient::BuildInformation() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16BuildInformationEv(void) {
    ALOGD("_ZN11GPTEEClient16BuildInformationEv() called");
    return 0;
}

/* Exported Object: getKeyDataFunc */
extern "C" __attribute__((visibility("default"))) void* getKeyDataFunc = NULL;

/* Exported Object: selectKeyFunc */
extern "C" __attribute__((visibility("default"))) void* selectKeyFunc = NULL;

/* Demangled: _oecc78 */
extern "C" __attribute__((visibility("default"))) int _oecc78(void) {
    ALOGD("_oecc78() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateSignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient17GenerateSignatureEjPKhjPhPj(void) {
    ALOGD("_ZN12MTKTEEClient17GenerateSignatureEjPKhjPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateRSASignature_V8(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23GenerateRSASignature_V8EjPKhjPhPj(void) {
    ALOGD("_ZN12MTKTEEClient23GenerateRSASignature_V8EjPKhjPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::CopyBuffer(unsigned int, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN11GPTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Demangled: GPTEEClient::DecryptCTR_V10(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN11GPTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Exported Object: updateUsageTableFunc */
extern "C" __attribute__((visibility("default"))) void* updateUsageTableFunc = NULL;

/* Demangled: _oecc79 */
extern "C" __attribute__((visibility("default"))) int _oecc79(void) {
    ALOGD("_oecc79() called");
    return 0;
}

/* Demangled: MTKTEEClient::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient10InitializeEv(void) {
    ALOGD("_ZN12MTKTEEClient10InitializeEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::SelectKey_V13(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient13SelectKey_V13EjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient13SelectKey_V13EjPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::CopyBuffer(unsigned int, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN12MTKTEEClient10CopyBufferEjPKhjPK24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Demangled: MTKTEEClient::InstallKeybox(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient13InstallKeyboxEPKhj(void) {
    ALOGD("_ZN12MTKTEEClient13InstallKeyboxEPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeleteUsageEntry(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j(void) {
    ALOGD("_ZN12MTKTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j() called");
    return 0;
}

/* Exported Object: isKeyboxValidFunc */
extern "C" __attribute__((visibility("default"))) void* isKeyboxValidFunc = NULL;

/* Exported Object: copyOldUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* copyOldUsageEntryFunc = NULL;

/* Demangled: GPTEEClient::GenerateRSASignature_V8(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23GenerateRSASignature_V8EjPKhjPhPj(void) {
    ALOGD("_ZN11GPTEEClient23GenerateRSASignature_V8EjPKhjPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetDeviceID(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11GetDeviceIDEPhPj(void) {
    ALOGD("_ZN12MTKTEEClient11GetDeviceIDEPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::CloseSession(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient12CloseSessionEj(void) {
    ALOGD("_ZN12MTKTEEClient12CloseSessionEj() called");
    return 0;
}

/* Exported Object: createNewUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* createNewUsageEntryFunc = NULL;

/* Exported Object: generic_EncryptFunc */
extern "C" __attribute__((visibility("default"))) void* generic_EncryptFunc = NULL;

/* Exported Object: reportUsageFunc */
extern "C" __attribute__((visibility("default"))) void* reportUsageFunc = NULL;

/* Demangled: MTKTEEClient::MTKTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClientC1Ev(void) {
    ALOGD("_ZN12MTKTEEClientC1Ev() called");
    return 0;
}

/* Demangled: MTKTEEClient::DecryptCTR_V10(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN12MTKTEEClient14DecryptCTR_V10EjPKhjbS1_jPK24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Demangled: GPTEEClient::ReportUsage(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11ReportUsageEjPKhjPhPj(void) {
    ALOGD("_ZN11GPTEEClient11ReportUsageEjPKhjPhPj() called");
    return 0;
}

/* Exported Object: prepAndSignRenewalRequestFunc */
extern "C" __attribute__((visibility("default"))) void* prepAndSignRenewalRequestFunc = NULL;

/* Demangled: MTKTEEClient::ForceDeleteUsageEntry(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient21ForceDeleteUsageEntryEPKhj(void) {
    ALOGD("_ZN12MTKTEEClient21ForceDeleteUsageEntryEPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateDerivedKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient19GenerateDerivedKeysEjPKhjS1_j(void) {
    ALOGD("_ZN12MTKTEEClient19GenerateDerivedKeysEjPKhjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadTestRSAKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14LoadTestRSAKeyEv(void) {
    ALOGD("_ZN11GPTEEClient14LoadTestRSAKeyEv() called");
    return 0;
}

/* Demangled: GPTEEClient::GenerateDerivedKeys_V15(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j(void) {
    ALOGD("_ZN11GPTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::GetOEMPublicCertificate(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient23GetOEMPublicCertificateEPhPj(void) {
    ALOGD("_ZN11GPTEEClient23GetOEMPublicCertificateEPhPj() called");
    return 0;
}

/* Exported Object: deleteUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* deleteUsageEntryFunc = NULL;

/* Demangled: MTKTEEClient::ReportUsage(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11ReportUsageEjPKhjPhPj(void) {
    ALOGD("_ZN12MTKTEEClient11ReportUsageEjPKhjPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::Generic_Verify(unsigned int, unsigned char const*, unsigned int, OEMCrypto_Algorithm, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j(void) {
    ALOGD("_ZN12MTKTEEClient14Generic_VerifyEjPKhj19OEMCrypto_AlgorithmS1_j() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadEntitledContentKeys_V14(unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject(void) {
    ALOGD("_ZN12MTKTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject() called");
    return 0;
}

/* Demangled: GPTEEClient::~GPTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClientD0Ev(void) {
    ALOGD("_ZN11GPTEEClientD0Ev() called");
    return 0;
}

/* Demangled: MTKTEEClient::Generic_Encrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void) {
    ALOGD("_ZN12MTKTEEClient15Generic_EncryptEjPKhjS1_19OEMCrypto_AlgorithmPh() called");
    return 0;
}

/* Exported Object: freeSecureBufferFunc */
extern "C" __attribute__((visibility("default"))) void* freeSecureBufferFunc = NULL;

/* Demangled: MTKTEEClient::RefreshKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void) {
    ALOGD("_ZN12MTKTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject() called");
    return 0;
}

/* Demangled: GPTEEClient::DeleteUsageEntry(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j(void) {
    ALOGD("_ZN11GPTEEClient16DeleteUsageEntryEjPKhjS1_jS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys_V11_or_V12(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void) {
    ALOGD("_ZN11GPTEEClient19LoadKeys_V11_or_V12EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j() called");
    return 0;
}

/* Demangled: TEEClientFactory::createTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN16TEEClientFactory15createTEEClientEv(void) {
    ALOGD("_ZN16TEEClientFactory15createTEEClientEv() called");
    return 0;
}

/* Exported Object: libpathuree */
extern "C" __attribute__((visibility("default"))) void* libpathuree = NULL;

/* Demangled: GPTEEClient::PrepAndSignLicenseRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN11GPTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Demangled: MTKTEEClient::DecryptCENC_V15(unsigned int, unsigned char const*, unsigned int, bool, unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, OEMCrypto_CENCEncryptPatternDesc_V15 const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h(void) {
    ALOGD("_ZN12MTKTEEClient15DecryptCENC_V15EjPKhjbS1_jP24OEMCrypto_DestBufferDescPK36OEMCrypto_CENCEncryptPatternDesc_V15h() called");
    return 0;
}

/* Demangled: GPTEEClient::CreateUsageTableHeader(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient22CreateUsageTableHeaderEPhPj(void) {
    ALOGD("_ZN11GPTEEClient22CreateUsageTableHeaderEPhPj() called");
    return 0;
}

/* Exported Object: deleteUsageTableFunc */
extern "C" __attribute__((visibility("default"))) void* deleteUsageTableFunc = NULL;

/* Demangled: _oecc20 */
extern "C" __attribute__((visibility("default"))) int _oecc20(void) {
    ALOGD("_oecc20() called");
    return 0;
}

/* Demangled: MTKTEEClient::WrapKeybox(unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient10WrapKeyboxEPKhjPhPjS1_j(void) {
    ALOGD("_ZN12MTKTEEClient10WrapKeyboxEPKhjPhPjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::RemoveSRM() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient9RemoveSRMEv(void) {
    ALOGD("_ZN11GPTEEClient9RemoveSRMEv() called");
    return 0;
}

/* Exported Object: refreshKeysFunc */
extern "C" __attribute__((visibility("default"))) void* refreshKeysFunc = NULL;

/* Demangled: _oecc21 */
extern "C" __attribute__((visibility("default"))) int _oecc21(void) {
    ALOGD("_oecc21() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetKeyData(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient10GetKeyDataEPhPj(void) {
    ALOGD("_ZN12MTKTEEClient10GetKeyDataEPhPj() called");
    return 0;
}

/* Demangled: _oecc101 */
extern "C" __attribute__((visibility("default"))) int _oecc101(void) {
    ALOGD("_oecc101() called");
    return 0;
}

/* Demangled: _oecc22 */
extern "C" __attribute__((visibility("default"))) int _oecc22(void) {
    ALOGD("_oecc22() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeriveKeysFromSessionKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j(void) {
    ALOGD("_ZN12MTKTEEClient24DeriveKeysFromSessionKeyEjPKhjS1_jS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::QueryKeyControl(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15QueryKeyControlEjPKhjPhPj(void) {
    ALOGD("_ZN11GPTEEClient15QueryKeyControlEjPKhjPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::CreateNewUsageEntry(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient19CreateNewUsageEntryEjPj(void) {
    ALOGD("_ZN11GPTEEClient19CreateNewUsageEntryEjPj() called");
    return 0;
}

/* Exported Object: getCurrentSRMVersionFunc */
extern "C" __attribute__((visibility("default"))) void* getCurrentSRMVersionFunc = NULL;

/* Exported Object: loadTestRSAKeyFunc */
extern "C" __attribute__((visibility("default"))) void* loadTestRSAKeyFunc = NULL;

/* Demangled: _oecc102 */
extern "C" __attribute__((visibility("default"))) int _oecc102(void) {
    ALOGD("_oecc102() called");
    return 0;
}

/* Demangled: _oecc23 */
extern "C" __attribute__((visibility("default"))) int _oecc23(void) {
    ALOGD("_oecc23() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadProvisioning(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16LoadProvisioningEjPKhjjS1_jPhPj(void) {
    ALOGD("_ZN12MTKTEEClient16LoadProvisioningEjPKhjjS1_jPhPj() called");
    return 0;
}

/* Demangled: MTKTEEClient::SupportsUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18SupportsUsageTableEv(void) {
    ALOGD("_ZN12MTKTEEClient18SupportsUsageTableEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateRSASignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20GenerateRSASignatureEjPKhjPhPjh(void) {
    ALOGD("_ZN12MTKTEEClient20GenerateRSASignatureEjPKhjPhPjh() called");
    return 0;
}

/* Demangled: _oecc103 */
extern "C" __attribute__((visibility("default"))) int _oecc103(void) {
    ALOGD("_oecc103() called");
    return 0;
}

/* Demangled: _oecc24 */
extern "C" __attribute__((visibility("default"))) int _oecc24(void) {
    ALOGD("_oecc24() called");
    return 0;
}

/* Demangled: MTKTEEClient::CreateNewUsageEntry(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient19CreateNewUsageEntryEjPj(void) {
    ALOGD("_ZN12MTKTEEClient19CreateNewUsageEntryEjPj() called");
    return 0;
}

/* Demangled: GPTEEClient::SupportedCertificates() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient21SupportedCertificatesEv(void) {
    ALOGD("_ZN11GPTEEClient21SupportedCertificatesEv() called");
    return 0;
}

/* Exported Object: getHDCPCapabilityFunc */
extern "C" __attribute__((visibility("default"))) void* getHDCPCapabilityFunc = NULL;

/* Demangled: _oecc104 */
extern "C" __attribute__((visibility("default"))) int _oecc104(void) {
    ALOGD("_oecc104() called");
    return 0;
}

/* Demangled: _oecc25 */
extern "C" __attribute__((visibility("default"))) int _oecc25(void) {
    ALOGD("_oecc25() called");
    return 0;
}

/* Demangled: _oecc50 */
extern "C" __attribute__((visibility("default"))) int _oecc50(void) {
    ALOGD("_oecc50() called");
    return 0;
}

/* Demangled: _oecc105 */
extern "C" __attribute__((visibility("default"))) int _oecc105(void) {
    ALOGD("_oecc105() called");
    return 0;
}

/* Demangled: _oecc26 */
extern "C" __attribute__((visibility("default"))) int _oecc26(void) {
    ALOGD("_oecc26() called");
    return 0;
}

/* Demangled: _oecc51 */
extern "C" __attribute__((visibility("default"))) int _oecc51(void) {
    ALOGD("_oecc51() called");
    return 0;
}

/* Demangled: MTKTEEClient::SupportedCertificates() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient21SupportedCertificatesEv(void) {
    ALOGD("_ZN12MTKTEEClient21SupportedCertificatesEv() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys_V8(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject(void) {
    ALOGD("_ZN11GPTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject() called");
    return 0;
}

/* Exported Object: generic_DecryptFunc */
extern "C" __attribute__((visibility("default"))) void* generic_DecryptFunc = NULL;

/* Demangled: _oecc27 */
extern "C" __attribute__((visibility("default"))) int _oecc27(void) {
    ALOGD("_oecc27() called");
    return 0;
}

/* Demangled: _oecc52 */
extern "C" __attribute__((visibility("default"))) int _oecc52(void) {
    ALOGD("_oecc52() called");
    return 0;
}

/* Demangled: GPTEEClient::OpenSession(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11OpenSessionEPj(void) {
    ALOGD("_ZN11GPTEEClient11OpenSessionEPj() called");
    return 0;
}

/* Exported Object: decryptCENCFunc */
extern "C" __attribute__((visibility("default"))) void* decryptCENCFunc = NULL;

/* Demangled: _oecc107 */
extern "C" __attribute__((visibility("default"))) int _oecc107(void) {
    ALOGD("_oecc107() called");
    return 0;
}

/* Demangled: _oecc28 */
extern "C" __attribute__((visibility("default"))) int _oecc28(void) {
    ALOGD("_oecc28() called");
    return 0;
}

/* Demangled: _oecc53 */
extern "C" __attribute__((visibility("default"))) int _oecc53(void) {
    ALOGD("_oecc53() called");
    return 0;
}

/* Exported Object: loadDeviceRSAKeyFunc */
extern "C" __attribute__((visibility("default"))) void* loadDeviceRSAKeyFunc = NULL;

/* Exported Object: loadLicenseFunc */
extern "C" __attribute__((visibility("default"))) void* loadLicenseFunc = NULL;

/* Demangled: _oecc108 */
extern "C" __attribute__((visibility("default"))) int _oecc108(void) {
    ALOGD("_oecc108() called");
    return 0;
}

/* Demangled: _oecc29 */
extern "C" __attribute__((visibility("default"))) int _oecc29(void) {
    ALOGD("_oecc29() called");
    return 0;
}

/* Demangled: _oecc54 */
extern "C" __attribute__((visibility("default"))) int _oecc54(void) {
    ALOGD("_oecc54() called");
    return 0;
}

/* Demangled: GPTEEClient::MaximumUsageTableHeaderSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient27MaximumUsageTableHeaderSizeEv(void) {
    ALOGD("_ZN11GPTEEClient27MaximumUsageTableHeaderSizeEv() called");
    return 0;
}

/* Exported Object: apiVersionFunc */
extern "C" __attribute__((visibility("default"))) void* apiVersionFunc = NULL;

/* Exported Object: loadRenewalFunc */
extern "C" __attribute__((visibility("default"))) void* loadRenewalFunc = NULL;

/* Demangled: _oecc55 */
extern "C" __attribute__((visibility("default"))) int _oecc55(void) {
    ALOGD("_oecc55() called");
    return 0;
}

/* Demangled: MTKTEEClient::APIVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient10APIVersionEv(void) {
    ALOGD("_ZN12MTKTEEClient10APIVersionEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::DecryptCENC(unsigned int, OEMCrypto_SampleDescription const*, unsigned int, OEMCrypto_CENCEncryptPatternDesc const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc(void) {
    ALOGD("_ZN12MTKTEEClient11DecryptCENCEjPK27OEMCrypto_SampleDescriptionjPK32OEMCrypto_CENCEncryptPatternDesc() called");
    return 0;
}

/* Demangled: MTKTEEClient::Generic_Decrypt(unsigned int, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_Algorithm, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh(void) {
    ALOGD("_ZN12MTKTEEClient15Generic_DecryptEjPKhjS1_19OEMCrypto_AlgorithmPh() called");
    return 0;
}

/* Demangled: GPTEEClient::AllocateSecureBuffer(unsigned int, unsigned int, OEMCrypto_DestBufferDesc*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi(void) {
    ALOGD("_ZN11GPTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi() called");
    return 0;
}

/* Demangled: _oecc56 */
extern "C" __attribute__((visibility("default"))) int _oecc56(void) {
    ALOGD("_oecc56() called");
    return 0;
}

/* Demangled: _oecc81 */
extern "C" __attribute__((visibility("default"))) int _oecc81(void) {
    ALOGD("_oecc81() called");
    return 0;
}

/* Demangled: MTKTEEClient::UpdateUsageEntry(unsigned int, unsigned char*, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16UpdateUsageEntryEjPhPjS0_S1_(void) {
    ALOGD("_ZN12MTKTEEClient16UpdateUsageEntryEjPhPjS0_S1_() called");
    return 0;
}

/* Demangled: MTKTEEClient::ResourceRatingTier() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18ResourceRatingTierEv(void) {
    ALOGD("_ZN12MTKTEEClient18ResourceRatingTierEv() called");
    return 0;
}

/* Exported Object: gWidevineModularDrmUreeHandle */
extern "C" __attribute__((visibility("default"))) void* gWidevineModularDrmUreeHandle = NULL;

/* Demangled: GPTEEClient::RefreshKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void) {
    ALOGD("_ZN11GPTEEClient11RefreshKeysEjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject() called");
    return 0;
}

/* Demangled: GPTEEClient::GenerateSignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient17GenerateSignatureEjPKhjPhPj(void) {
    ALOGD("_ZN11GPTEEClient17GenerateSignatureEjPKhjPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::~GPTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClientD2Ev(void) {
    ALOGD("_ZN11GPTEEClientD2Ev() called");
    return 0;
}

/* Exported Object: initializeFunc */
extern "C" __attribute__((visibility("default"))) void* initializeFunc = NULL;

/* Demangled: _oecc57 */
extern "C" __attribute__((visibility("default"))) int _oecc57(void) {
    ALOGD("_oecc57() called");
    return 0;
}

/* Demangled: _oecc82 */
extern "C" __attribute__((visibility("default"))) int _oecc82(void) {
    ALOGD("_oecc82() called");
    return 0;
}

/* Demangled: MTKTEEClient::IsSRMUpdateSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20IsSRMUpdateSupportedEv(void) {
    ALOGD("_ZN12MTKTEEClient20IsSRMUpdateSupportedEv() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadOEMPrivateKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient17LoadOEMPrivateKeyEj(void) {
    ALOGD("_ZN11GPTEEClient17LoadOEMPrivateKeyEj() called");
    return 0;
}

/* Exported Object: getHashErrorCodeFunc */
extern "C" __attribute__((visibility("default"))) void* getHashErrorCodeFunc = NULL;

/* Exported Object: moveEntryFunc */
extern "C" __attribute__((visibility("default"))) void* moveEntryFunc = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: _oecc83 */
extern "C" __attribute__((visibility("default"))) int _oecc83(void) {
    ALOGD("_oecc83() called");
    return 0;
}

/* Demangled: GPTEEClient::IsKeyboxValid() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient13IsKeyboxValidEv(void) {
    ALOGD("_ZN11GPTEEClient13IsKeyboxValidEv() called");
    return 0;
}

/* Exported Object: gWidevineModularDrmTlcHandle */
extern "C" __attribute__((visibility("default"))) void* gWidevineModularDrmTlcHandle = NULL;

/* Exported Object: isAntiRollbackHwPresentFunc */
extern "C" __attribute__((visibility("default"))) void* isAntiRollbackHwPresentFunc = NULL;

/* Demangled: _oecc84 */
extern "C" __attribute__((visibility("default"))) int _oecc84(void) {
    ALOGD("_oecc84() called");
    return 0;
}

/* Demangled: GPTEEClient::GetDeviceID(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11GetDeviceIDEPhPj(void) {
    ALOGD("_ZN11GPTEEClient11GetDeviceIDEPhPj() called");
    return 0;
}

/* Exported Object: vtable for GPTEEClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV11GPTEEClient = NULL;

/* Exported Object: getMaxNumberOfSessionsFunc */
extern "C" __attribute__((visibility("default"))) void* getMaxNumberOfSessionsFunc = NULL;

/* Demangled: _oecc85 */
extern "C" __attribute__((visibility("default"))) int _oecc85(void) {
    ALOGD("_oecc85() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*, OEMCrypto_LicenseType) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType(void) {
    ALOGD("_ZN12MTKTEEClient12LoadKeys_V14EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_21OEMCrypto_LicenseType() called");
    return 0;
}

/* Demangled: MTKTEEClient::CopyOldUsageEntry(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient17CopyOldUsageEntryEjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient17CopyOldUsageEntryEjPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadRenewal(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient11LoadRenewalEjPKhjjS1_j(void) {
    ALOGD("_ZN11GPTEEClient11LoadRenewalEjPKhjjS1_j() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: _oecc86 */
extern "C" __attribute__((visibility("default"))) int _oecc86(void) {
    ALOGD("_oecc86() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadKeys_V8(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject(void) {
    ALOGD("_ZN12MTKTEEClient11LoadKeys_V8EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObject() called");
    return 0;
}

/* Demangled: MTKTEEClient::UpdateUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16UpdateUsageTableEv(void) {
    ALOGD("_ZN12MTKTEEClient16UpdateUsageTableEv() called");
    return 0;
}

/* Demangled: GPTEEClient::ShrinkUsageTableHeader(unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient22ShrinkUsageTableHeaderEjPhPj(void) {
    ALOGD("_ZN11GPTEEClient22ShrinkUsageTableHeaderEjPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, OEMCrypto_Substring, OEMCrypto_Substring, unsigned int, OEMCrypto_KeyObject const*, OEMCrypto_Substring, OEMCrypto_Substring, OEMCrypto_LicenseType) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType(void) {
    ALOGD("_ZN11GPTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetHDCPCapability(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_(void) {
    ALOGD("_ZN12MTKTEEClient17GetHDCPCapabilityEP25OEMCrypto_HDCP_CapabilityS1_() called");
    return 0;
}

/* Demangled: MTKTEEClient::MaximumUsageTableHeaderSize() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient27MaximumUsageTableHeaderSizeEv(void) {
    ALOGD("_ZN12MTKTEEClient27MaximumUsageTableHeaderSizeEv() called");
    return 0;
}

/* Demangled: GPTEEClient::GetKeyData(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient10GetKeyDataEPhPj(void) {
    ALOGD("_ZN11GPTEEClient10GetKeyDataEPhPj() called");
    return 0;
}

/* Demangled: _oecc88 */
extern "C" __attribute__((visibility("default"))) int _oecc88(void) {
    ALOGD("_oecc88() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadUsageTableHeader(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20LoadUsageTableHeaderEPKhj(void) {
    ALOGD("_ZN12MTKTEEClient20LoadUsageTableHeaderEPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadUsageEntry(unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient14LoadUsageEntryEjjPKhj(void) {
    ALOGD("_ZN11GPTEEClient14LoadUsageEntryEjjPKhj() called");
    return 0;
}

/* Exported Object: deleteOldUsageTableFunc */
extern "C" __attribute__((visibility("default"))) void* deleteOldUsageTableFunc = NULL;

/* Demangled: _oecc89 */
extern "C" __attribute__((visibility("default"))) int _oecc89(void) {
    ALOGD("_oecc89() called");
    return 0;
}

/* Demangled: GPTEEClient::MoveEntry(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient9MoveEntryEjj(void) {
    ALOGD("_ZN11GPTEEClient9MoveEntryEjj() called");
    return 0;
}

/* Exported Object: openSessionFunc */
extern "C" __attribute__((visibility("default"))) void* openSessionFunc = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: MTKTEEClient::~MTKTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClientD1Ev(void) {
    ALOGD("_ZN12MTKTEEClientD1Ev() called");
    return 0;
}

/* Demangled: GPTEEClient::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient10InitializeEv(void) {
    ALOGD("_ZN11GPTEEClient10InitializeEv() called");
    return 0;
}

/* Demangled: GPTEEClient::SelectKey_V13(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient13SelectKey_V13EjPKhj(void) {
    ALOGD("_ZN11GPTEEClient13SelectKey_V13EjPKhj() called");
    return 0;
}

/* Exported Object: forceDeleteUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* forceDeleteUsageEntryFunc = NULL;

/* Demangled: GPTEEClient::GPTEEClient() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClientC1Ev(void) {
    ALOGD("_ZN11GPTEEClientC1Ev() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys_V9_or_V10(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void) {
    ALOGD("_ZN11GPTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j() called");
    return 0;
}

/* Exported Object: updateUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* updateUsageEntryFunc = NULL;

/* Demangled: MTKTEEClient::LoadUsageEntry(unsigned int, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14LoadUsageEntryEjjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient14LoadUsageEntryEjjPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::SecurityPatchLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18SecurityPatchLevelEv(void) {
    ALOGD("_ZN12MTKTEEClient18SecurityPatchLevelEv() called");
    return 0;
}

/* Demangled: MTKTEEClient::PrepAndSignRenewalRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN12MTKTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadEntitledContentKeys_V14(unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject(void) {
    ALOGD("_ZN11GPTEEClient27LoadEntitledContentKeys_V14EjjPK34OEMCrypto_EntitledContentKeyObject() called");
    return 0;
}

/* Demangled: MTKTEEClient::PrepAndSignLicenseRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN12MTKTEEClient25PrepAndSignLicenseRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Demangled: GPTEEClient::CreateOldUsageEntry(unsigned long long, unsigned long long, unsigned long long, OEMCrypto_Usage_Entry_Status, unsigned char*, unsigned char*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj(void) {
    ALOGD("_ZN11GPTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadKeys_V9_or_V10(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j(void) {
    ALOGD("_ZN12MTKTEEClient18LoadKeys_V9_or_V10EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_j() called");
    return 0;
}

/* Demangled: MTKTEEClient::CreateUsageTableHeader(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient22CreateUsageTableHeaderEPhPj(void) {
    ALOGD("_ZN12MTKTEEClient22CreateUsageTableHeaderEPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::GenerateNonce(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient13GenerateNonceEjPj(void) {
    ALOGD("_ZN11GPTEEClient13GenerateNonceEjPj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadSRM(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient7LoadSRMEPKhj(void) {
    ALOGD("_ZN11GPTEEClient7LoadSRMEPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::CopyBuffer_V14(unsigned char const*, unsigned int, OEMCrypto_DestBufferDesc*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch(void) {
    ALOGD("_ZN12MTKTEEClient14CopyBuffer_V14EPKhjP24OEMCrypto_DestBufferDesch() called");
    return 0;
}

/* Demangled: MTKTEEClient::IsAntiRollbackHwPresent() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23IsAntiRollbackHwPresentEv(void) {
    ALOGD("_ZN12MTKTEEClient23IsAntiRollbackHwPresentEv() called");
    return 0;
}

/* Exported Object: generic_VerifyFunc */
extern "C" __attribute__((visibility("default"))) void* generic_VerifyFunc = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetHDCPCapability_V9(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_(void) {
    ALOGD("_ZN12MTKTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetRandom(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient9GetRandomEPhj(void) {
    ALOGD("_ZN12MTKTEEClient9GetRandomEPhj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadProvisioning(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16LoadProvisioningEjPKhjjS1_jPhPj(void) {
    ALOGD("_ZN11GPTEEClient16LoadProvisioningEjPKhjjS1_jPhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::GenerateDerivedKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient19GenerateDerivedKeysEjPKhjS1_j(void) {
    ALOGD("_ZN11GPTEEClient19GenerateDerivedKeysEjPKhjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::GenerateRSASignature(unsigned int, unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20GenerateRSASignatureEjPKhjPhPjh(void) {
    ALOGD("_ZN11GPTEEClient20GenerateRSASignatureEjPKhjPhPjh() called");
    return 0;
}

/* Exported Object: loadSRMFunc */
extern "C" __attribute__((visibility("default"))) void* loadSRMFunc = NULL;

/* Demangled: MTKTEEClient::CreateOldUsageEntry(unsigned long long, unsigned long long, unsigned long long, OEMCrypto_Usage_Entry_Status, unsigned char*, unsigned char*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj(void) {
    ALOGD("_ZN12MTKTEEClient19CreateOldUsageEntryEyyy28OEMCrypto_Usage_Entry_StatusPhS1_PKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::MinorAPIVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15MinorAPIVersionEv(void) {
    ALOGD("_ZN11GPTEEClient15MinorAPIVersionEv() called");
    return 0;
}

/* Exported Object: shrinkUsageTableHeaderFunc */
extern "C" __attribute__((visibility("default"))) void* shrinkUsageTableHeaderFunc = NULL;

/* Demangled: _oecc01 */
extern "C" __attribute__((visibility("default"))) int _oecc01(void) {
    ALOGD("_oecc01() called");
    return 0;
}

/* Demangled: MTKTEEClient::GetHashErrorCode(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16GetHashErrorCodeEjPj(void) {
    ALOGD("_ZN12MTKTEEClient16GetHashErrorCodeEjPj() called");
    return 0;
}

/* Demangled: GPTEEClient::ResourceRatingTier() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18ResourceRatingTierEv(void) {
    ALOGD("_ZN11GPTEEClient18ResourceRatingTierEv() called");
    return 0;
}

/* Demangled: _oecc02 */
extern "C" __attribute__((visibility("default"))) int _oecc02(void) {
    ALOGD("_oecc02() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadDeviceRSAKey(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16LoadDeviceRSAKeyEjPKhj(void) {
    ALOGD("_ZN11GPTEEClient16LoadDeviceRSAKeyEjPKhj() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadDRMPrivateKey(unsigned int, OEMCrypto_PrivateKeyType, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj(void) {
    ALOGD("_ZN11GPTEEClient17LoadDRMPrivateKeyEj24OEMCrypto_PrivateKeyTypePKhj() called");
    return 0;
}

/* Exported Object: loadOEMPrivateKeyFunc */
extern "C" __attribute__((visibility("default"))) void* loadOEMPrivateKeyFunc = NULL;

/* Demangled: _oecc03 */
extern "C" __attribute__((visibility("default"))) int _oecc03(void) {
    ALOGD("_oecc03() called");
    return 0;
}

/* Demangled: MTKTEEClient::RewrapDeviceRSAKey(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int const*, unsigned char const*, unsigned int, unsigned char const*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj(void) {
    ALOGD("_ZN12MTKTEEClient18RewrapDeviceRSAKeyEjPKhjS1_jPKjS1_jS1_PhPj() called");
    return 0;
}

/* Demangled: GPTEEClient::DeactivateUsageEntry(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20DeactivateUsageEntryEjPKhj(void) {
    ALOGD("_ZN11GPTEEClient20DeactivateUsageEntryEjPKhj() called");
    return 0;
}

/* Demangled: _oecc04 */
extern "C" __attribute__((visibility("default"))) int _oecc04(void) {
    ALOGD("_oecc04() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadKeys(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, OEMCrypto_Substring, OEMCrypto_Substring, unsigned int, OEMCrypto_KeyObject const*, OEMCrypto_Substring, OEMCrypto_Substring, OEMCrypto_LicenseType) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType(void) {
    ALOGD("_ZN12MTKTEEClient8LoadKeysEjPKhjS1_j19OEMCrypto_SubstringS2_jPK19OEMCrypto_KeyObjectS2_S2_21OEMCrypto_LicenseType() called");
    return 0;
}

/* Demangled: MTKTEEClient::RemoveSRM() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient9RemoveSRMEv(void) {
    ALOGD("_ZN12MTKTEEClient9RemoveSRMEv() called");
    return 0;
}

/* Exported Object: vtable for MTKTEEClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MTKTEEClient = NULL;

/* Demangled: GPTEEClient::CloseSession(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient12CloseSessionEj(void) {
    ALOGD("_ZN11GPTEEClient12CloseSessionEj() called");
    return 0;
}

/* Exported Object: prepAndSignLicenseRequestFunc */
extern "C" __attribute__((visibility("default"))) void* prepAndSignLicenseRequestFunc = NULL;

/* Exported Object: supportsUsageTableFunc */
extern "C" __attribute__((visibility("default"))) void* supportsUsageTableFunc = NULL;

/* Demangled: _oecc05 */
extern "C" __attribute__((visibility("default"))) int _oecc05(void) {
    ALOGD("_oecc05() called");
    return 0;
}

/* Demangled: _oecc30 */
extern "C" __attribute__((visibility("default"))) int _oecc30(void) {
    ALOGD("_oecc30() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadKeys_V13(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_(void) {
    ALOGD("_ZN12MTKTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadTestKeybox_V13() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18LoadTestKeybox_V13Ev(void) {
    ALOGD("_ZN11GPTEEClient18LoadTestKeybox_V13Ev() called");
    return 0;
}

/* Demangled: GPTEEClient::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient9TerminateEv(void) {
    ALOGD("_ZN11GPTEEClient9TerminateEv() called");
    return 0;
}

/* Exported Object: allocateSecureBufferFunc */
extern "C" __attribute__((visibility("default"))) void* allocateSecureBufferFunc = NULL;

/* Exported Object: generateNonceFunc */
extern "C" __attribute__((visibility("default"))) void* generateNonceFunc = NULL;

/* Demangled: _oecc06 */
extern "C" __attribute__((visibility("default"))) int _oecc06(void) {
    ALOGD("_oecc06() called");
    return 0;
}

/* Demangled: _oecc31 */
extern "C" __attribute__((visibility("default"))) int _oecc31(void) {
    ALOGD("_oecc31() called");
    return 0;
}

/* Demangled: MTKTEEClient::SelectKey(unsigned int, unsigned char const*, unsigned int, OEMCryptoCipherMode) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode(void) {
    ALOGD("_ZN12MTKTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode() called");
    return 0;
}

/* Exported Object: loadUsageEntryFunc */
extern "C" __attribute__((visibility("default"))) void* loadUsageEntryFunc = NULL;

/* Demangled: _oecc07 */
extern "C" __attribute__((visibility("default"))) int _oecc07(void) {
    ALOGD("_oecc07() called");
    return 0;
}

/* Demangled: _oecc32 */
extern "C" __attribute__((visibility("default"))) int _oecc32(void) {
    ALOGD("_oecc32() called");
    return 0;
}

/* Demangled: MTKTEEClient::CheckLogEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient14CheckLogEnableEv(void) {
    ALOGD("_ZN12MTKTEEClient14CheckLogEnableEv() called");
    return 0;
}

/* Demangled: _oecc08 */
extern "C" __attribute__((visibility("default"))) int _oecc08(void) {
    ALOGD("_oecc08() called");
    return 0;
}

/* Demangled: _oecc33 */
extern "C" __attribute__((visibility("default"))) int _oecc33(void) {
    ALOGD("_oecc33() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadDeviceRSAKey(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient16LoadDeviceRSAKeyEjPKhj(void) {
    ALOGD("_ZN12MTKTEEClient16LoadDeviceRSAKeyEjPKhj() called");
    return 0;
}

/* Demangled: MTKTEEClient::LoadEntitledContentKeys(unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_EntitledContentKeyObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject(void) {
    ALOGD("_ZN12MTKTEEClient23LoadEntitledContentKeysEjPKhjjPK34OEMCrypto_EntitledContentKeyObject() called");
    return 0;
}

/* Demangled: GPTEEClient::DeleteOldUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient19DeleteOldUsageTableEv(void) {
    ALOGD("_ZN11GPTEEClient19DeleteOldUsageTableEv() called");
    return 0;
}

/* Exported Object: loadProvisioningFunc */
extern "C" __attribute__((visibility("default"))) void* loadProvisioningFunc = NULL;

/* Demangled: _oecc09 */
extern "C" __attribute__((visibility("default"))) int _oecc09(void) {
    ALOGD("_oecc09() called");
    return 0;
}

/* Demangled: _oecc34 */
extern "C" __attribute__((visibility("default"))) int _oecc34(void) {
    ALOGD("_oecc34() called");
    return 0;
}

/* Demangled: GPTEEClient::LoadKeys_V13(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned char const*, unsigned int, OEMCrypto_KeyObject const*, unsigned char const*, unsigned int, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_(void) {
    ALOGD("_ZN11GPTEEClient12LoadKeys_V13EjPKhjS1_jS1_S1_jPK19OEMCrypto_KeyObjectS1_jS1_() called");
    return 0;
}

/* Exported Object: rewrapDeviceRSAKeyFunc */
extern "C" __attribute__((visibility("default"))) void* rewrapDeviceRSAKeyFunc = NULL;

/* Demangled: _oecc35 */
extern "C" __attribute__((visibility("default"))) int _oecc35(void) {
    ALOGD("_oecc35() called");
    return 0;
}

/* Demangled: MTKTEEClient::AllocateSecureBuffer(unsigned int, unsigned int, OEMCrypto_DestBufferDesc*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi(void) {
    ALOGD("_ZN12MTKTEEClient20AllocateSecureBufferEjjP24OEMCrypto_DestBufferDescPi() called");
    return 0;
}

/* Exported Object: copyBufferFunc */
extern "C" __attribute__((visibility("default"))) void* copyBufferFunc = NULL;

/* Demangled: _oecc36 */
extern "C" __attribute__((visibility("default"))) int _oecc36(void) {
    ALOGD("_oecc36() called");
    return 0;
}

/* Demangled: _oecc61 */
extern "C" __attribute__((visibility("default"))) int _oecc61(void) {
    ALOGD("_oecc61() called");
    return 0;
}

/* Demangled: MTKTEEClient::IsKeyboxValid() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient13IsKeyboxValidEv(void) {
    ALOGD("_ZN12MTKTEEClient13IsKeyboxValidEv() called");
    return 0;
}

/* Demangled: GPTEEClient::PrepAndSignRenewalRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN11GPTEEClient25PrepAndSignRenewalRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Exported Object: loadUsageTableHeaderFunc */
extern "C" __attribute__((visibility("default"))) void* loadUsageTableHeaderFunc = NULL;

/* Demangled: _oecc37 */
extern "C" __attribute__((visibility("default"))) int _oecc37(void) {
    ALOGD("_oecc37() called");
    return 0;
}

/* Demangled: _oecc62 */
extern "C" __attribute__((visibility("default"))) int _oecc62(void) {
    ALOGD("_oecc62() called");
    return 0;
}

/* Demangled: MTKTEEClient::DeleteOldUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient19DeleteOldUsageTableEv(void) {
    ALOGD("_ZN12MTKTEEClient19DeleteOldUsageTableEv() called");
    return 0;
}

/* Demangled: GPTEEClient::WrapKeybox(unsigned char const*, unsigned int, unsigned char*, unsigned int*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient10WrapKeyboxEPKhjPhPjS1_j(void) {
    ALOGD("_ZN11GPTEEClient10WrapKeyboxEPKhjPhPjS1_j() called");
    return 0;
}

/* Demangled: GPTEEClient::SecurityPatchLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient18SecurityPatchLevelEv(void) {
    ALOGD("_ZN11GPTEEClient18SecurityPatchLevelEv() called");
    return 0;
}

/* Demangled: _oecc38 */
extern "C" __attribute__((visibility("default"))) int _oecc38(void) {
    ALOGD("_oecc38() called");
    return 0;
}

/* Demangled: _oecc63 */
extern "C" __attribute__((visibility("default"))) int _oecc63(void) {
    ALOGD("_oecc63() called");
    return 0;
}

/* Demangled: MTKTEEClient::GenerateDerivedKeys_V15(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j(void) {
    ALOGD("_ZN12MTKTEEClient23GenerateDerivedKeys_V15EjPKhjS1_j() called");
    return 0;
}

/* Demangled: MTKTEEClient::MoveEntry(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKTEEClient9MoveEntryEjj(void) {
    ALOGD("_ZN12MTKTEEClient9MoveEntryEjj() called");
    return 0;
}

/* Demangled: GPTEEClient::RefreshKeys_V14(unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned int, OEMCrypto_KeyRefreshObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject(void) {
    ALOGD("_ZN11GPTEEClient15RefreshKeys_V14EjPKhjS1_jjPK26OEMCrypto_KeyRefreshObject() called");
    return 0;
}

/* Demangled: GPTEEClient::GetHDCPCapability_V9(OEMCrypto_HDCP_Capability*, OEMCrypto_HDCP_Capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_(void) {
    ALOGD("_ZN11GPTEEClient20GetHDCPCapability_V9EP25OEMCrypto_HDCP_CapabilityS1_() called");
    return 0;
}

/* Demangled: GPTEEClient::DeactivateUsageEntry_V12(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient24DeactivateUsageEntry_V12EPKhj(void) {
    ALOGD("_ZN11GPTEEClient24DeactivateUsageEntry_V12EPKhj() called");
    return 0;
}

/* Exported Object: createUsageTableHeaderFunc */
extern "C" __attribute__((visibility("default"))) void* createUsageTableHeaderFunc = NULL;

/* Exported Object: queryKeyControlFunc */
extern "C" __attribute__((visibility("default"))) void* queryKeyControlFunc = NULL;

/* Demangled: _oecc39 */
extern "C" __attribute__((visibility("default"))) int _oecc39(void) {
    ALOGD("_oecc39() called");
    return 0;
}

/* Demangled: _oecc64 */
extern "C" __attribute__((visibility("default"))) int _oecc64(void) {
    ALOGD("_oecc64() called");
    return 0;
}

/* Demangled: GPTEEClient::UpdateUsageTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient16UpdateUsageTableEv(void) {
    ALOGD("_ZN11GPTEEClient16UpdateUsageTableEv() called");
    return 0;
}

/* Demangled: GPTEEClient::PrepAndSignProvisioningRequest(unsigned int, unsigned char*, unsigned int, unsigned int*, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_(void) {
    ALOGD("_ZN11GPTEEClient30PrepAndSignProvisioningRequestEjPhjPjS0_S1_() called");
    return 0;
}

/* Demangled: GPTEEClient::SelectKey(unsigned int, unsigned char const*, unsigned int, OEMCryptoCipherMode) */
extern "C" __attribute__((visibility("default"))) int _ZN11GPTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode(void) {
    ALOGD("_ZN11GPTEEClient9SelectKeyEjPKhj19OEMCryptoCipherMode() called");
    return 0;
}

/* Demangled: OEMCrypto_FreeSecureBuffer */
extern "C" __attribute__((visibility("default"))) int OEMCrypto_FreeSecureBuffer(void) {
    ALOGD("OEMCrypto_FreeSecureBuffer() called");
    return 0;
}

/* Demangled: _oecc65 */
extern "C" __attribute__((visibility("default"))) int _oecc65(void) {
    ALOGD("_oecc65() called");
    return 0;
}

/* Demangled: _oecc90 */
extern "C" __attribute__((visibility("default"))) int _oecc90(void) {
    ALOGD("_oecc90() called");
    return 0;
}
