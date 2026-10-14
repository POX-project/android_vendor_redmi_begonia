/*
 * Reverse-Engineered ABI Specification for: libtlcWidevineModularDrm.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtlcWidevineModularDrm.so
 */

#ifndef BEGONIA_RE_LIBTLCWIDEVINEMODULARDRM_H
#define BEGONIA_RE_LIBTLCWIDEVINEMODULARDRM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: TLCMdw_LoadLicense */
/* Demangled: TLCMdw_LoadLicense */
int TLCMdw_LoadLicense(void);

/* Symbol: TLCMdw_GetHDCPCapability */
/* Demangled: TLCMdw_GetHDCPCapability */
int TLCMdw_GetHDCPCapability(void);

/* Symbol: TLCMdw_LoadDRMPrivateKey */
/* Demangled: TLCMdw_LoadDRMPrivateKey */
int TLCMdw_LoadDRMPrivateKey(void);

/* Symbol: TLCMdw_TestCryptoPerformance */
/* Demangled: TLCMdw_TestCryptoPerformance */
int TLCMdw_TestCryptoPerformance(void);

/* Symbol: _ZN5wvcdm4File11IsDirectoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::IsDirectory(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File11IsDirectoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5wvcdm4File15CreateDirectoryENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::CreateDirectory(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5wvcdm4File15CreateDirectoryENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5wvcdm4File4ReadEPcj */
/* Demangled: wvcdm::File::Read(char*, unsigned int) */
int _ZN5wvcdm4File4ReadEPcj(void);

/* Symbol: _ZN5wvcdm4FileD0Ev */
/* Demangled: wvcdm::File::~File() */
int _ZN5wvcdm4FileD0Ev(void);

/* Symbol: TLCMdw_CreateUsageTableHeader */
/* Demangled: TLCMdw_CreateUsageTableHeader */
int TLCMdw_CreateUsageTableHeader(void);

/* Symbol: TLCMdw_SelectKey */
/* Demangled: TLCMdw_SelectKey */
int TLCMdw_SelectKey(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: gDrmKeyInstallHandle */
/* Demangled: gDrmKeyInstallHandle */
extern void* gDrmKeyInstallHandle;

/* Symbol: TLCMdw_ForceDeleteUsageEntry */
/* Demangled: TLCMdw_ForceDeleteUsageEntry */
int TLCMdw_ForceDeleteUsageEntry(void);

/* Symbol: TLCMdw_PrepAndSignLicenseRequest */
/* Demangled: TLCMdw_PrepAndSignLicenseRequest */
int TLCMdw_PrepAndSignLicenseRequest(void);

/* Symbol: gFreeEncryptDrmkeyFunc */
/* Demangled: gFreeEncryptDrmkeyFunc */
extern void* gFreeEncryptDrmkeyFunc;

/* Symbol: TLCMdw_APIVersion */
/* Demangled: TLCMdw_APIVersion */
int TLCMdw_APIVersion(void);

/* Symbol: TLCMdw_CloseSession */
/* Demangled: TLCMdw_CloseSession */
int TLCMdw_CloseSession(void);

/* Symbol: TLCMdw_GenerateNonce */
/* Demangled: TLCMdw_GenerateNonce */
int TLCMdw_GenerateNonce(void);

/* Symbol: TLCMdw_LoadOEMPrivateKey */
/* Demangled: TLCMdw_LoadOEMPrivateKey */
int TLCMdw_LoadOEMPrivateKey(void);

/* Symbol: TLCMdw_Terminate */
/* Demangled: TLCMdw_Terminate */
int TLCMdw_Terminate(void);

/* Symbol: _Z22GetDeviceFilesBasePath16TlcSecurityLevelPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: GetDeviceFilesBasePath(TlcSecurityLevel, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z22GetDeviceFilesBasePath16TlcSecurityLevelPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: sSession */
/* Demangled: sSession */
extern void* sSession;

/* Symbol: TLCMdw_RefreshKeys */
/* Demangled: TLCMdw_RefreshKeys */
int TLCMdw_RefreshKeys(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: gWVHdcpExtLibPath */
/* Demangled: gWVHdcpExtLibPath */
extern void* gWVHdcpExtLibPath;

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_(void);

/* Symbol: TLCMdw_DecryptCENC */
/* Demangled: TLCMdw_DecryptCENC */
int TLCMdw_DecryptCENC(void);

/* Symbol: TLCMdw_LoadProvisioning */
/* Demangled: TLCMdw_LoadProvisioning */
int TLCMdw_LoadProvisioning(void);

/* Symbol: _Z20SaveUsageTableToFilePhj */
/* Demangled: SaveUsageTableToFile(unsigned char*, unsigned int) */
int _Z20SaveUsageTableToFilePhj(void);

/* Symbol: TLCMdw_Generic_Encrypt */
/* Demangled: TLCMdw_Generic_Encrypt */
int TLCMdw_Generic_Encrypt(void);

/* Symbol: _ZN5wvcdm4FileC1Ev */
/* Demangled: wvcdm::File::File() */
int _ZN5wvcdm4FileC1Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: enc_buf */
/* Demangled: enc_buf */
extern void* enc_buf;

/* Symbol: gGetEncryptDrmkeyFunc */
/* Demangled: gGetEncryptDrmkeyFunc */
extern void* gGetEncryptDrmkeyFunc;

/* Symbol: sContext */
/* Demangled: sContext */
extern void* sContext;

/* Symbol: TLCMdw_LoadKeys */
/* Demangled: TLCMdw_LoadKeys */
int TLCMdw_LoadKeys(void);

/* Symbol: TLCMdw_OpenSession */
/* Demangled: TLCMdw_OpenSession */
int TLCMdw_OpenSession(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: TLCMdw_Generic_Sign */
/* Demangled: TLCMdw_Generic_Sign */
int TLCMdw_Generic_Sign(void);

/* Symbol: TLCMdw_GetHashErrorCode */
/* Demangled: TLCMdw_GetHashErrorCode */
int TLCMdw_GetHashErrorCode(void);

/* Symbol: _ZN5wvcdm4File4CopyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: wvcdm::File::Copy(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File4CopyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: TLCMdw_DeleteUsageTable */
/* Demangled: TLCMdw_DeleteUsageTable */
int TLCMdw_DeleteUsageTable(void);

/* Symbol: TLCMdw_GenerateRSASignature */
/* Demangled: TLCMdw_GenerateRSASignature */
int TLCMdw_GenerateRSASignature(void);

/* Symbol: _ZN5wvcdm4File5WriteEPKcj */
/* Demangled: wvcdm::File::Write(char const*, unsigned int) */
int _ZN5wvcdm4File5WriteEPKcj(void);

/* Symbol: _Z15TLCMdw_TestRpmbv */
/* Demangled: TLCMdw_TestRpmb() */
int _Z15TLCMdw_TestRpmbv(void);

/* Symbol: TLCMdw_DeriveKeysFromSessionKey */
/* Demangled: TLCMdw_DeriveKeysFromSessionKey */
int TLCMdw_DeriveKeysFromSessionKey(void);

/* Symbol: TLCMdw_UpdateUsageEntry */
/* Demangled: TLCMdw_UpdateUsageEntry */
int TLCMdw_UpdateUsageEntry(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: TLCMdw_GenerateSignature */
/* Demangled: TLCMdw_GenerateSignature */
int TLCMdw_GenerateSignature(void);

/* Symbol: TLCMdw_GetMaxNumberOfSessions */
/* Demangled: TLCMdw_GetMaxNumberOfSessions */
int TLCMdw_GetMaxNumberOfSessions(void);

/* Symbol: TLCMdw_LoadTestRSAKey */
/* Demangled: TLCMdw_LoadTestRSAKey */
int TLCMdw_LoadTestRSAKey(void);

/* Symbol: TLCMdw_RemoveSRM */
/* Demangled: TLCMdw_RemoveSRM */
int TLCMdw_RemoveSRM(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: TLCMdw_IsSRMUpdateSupported */
/* Demangled: TLCMdw_IsSRMUpdateSupported */
int TLCMdw_IsSRMUpdateSupported(void);

/* Symbol: TLCMdw_RewrapDeviceRSAKey */
/* Demangled: TLCMdw_RewrapDeviceRSAKey */
int TLCMdw_RewrapDeviceRSAKey(void);

/* Symbol: _ZN5wvcdm4File8FileSizeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::FileSize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File8FileSizeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN5wvcdm4File4ListERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorIS7_NS5_IS7_EEEE */
/* Demangled: wvcdm::File::List(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN5wvcdm4File4ListERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorIS7_NS5_IS7_EEEE(void);

/* Symbol: TLCMdw_LoadEntitledContentKeys */
/* Demangled: TLCMdw_LoadEntitledContentKeys */
int TLCMdw_LoadEntitledContentKeys(void);

/* Symbol: gWvHdcpExt_GetCurrentSRMVersionFunc */
/* Demangled: gWvHdcpExt_GetCurrentSRMVersionFunc */
extern void* gWvHdcpExt_GetCurrentSRMVersionFunc;

/* Symbol: TLCMdw_BuildInformation */
/* Demangled: TLCMdw_BuildInformation */
int TLCMdw_BuildInformation(void);

/* Symbol: TLCMdw_FreeSecureBuffer */
/* Demangled: TLCMdw_FreeSecureBuffer */
int TLCMdw_FreeSecureBuffer(void);

/* Symbol: TLCMdw_SetDecryptHash */
/* Demangled: TLCMdw_SetDecryptHash */
int TLCMdw_SetDecryptHash(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN5wvcdm4FileD1Ev */
/* Demangled: wvcdm::File::~File() */
int _ZN5wvcdm4FileD1Ev(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN5wvcdm4File13IsRegularFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::IsRegularFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File13IsRegularFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: TLCMdw_AllocateSecureBuffer */
/* Demangled: TLCMdw_AllocateSecureBuffer */
int TLCMdw_AllocateSecureBuffer(void);

/* Symbol: TLCMdw_GetRandom */
/* Demangled: TLCMdw_GetRandom */
int TLCMdw_GetRandom(void);

/* Symbol: TLCMdw_QueryKeyControl */
/* Demangled: TLCMdw_QueryKeyControl */
int TLCMdw_QueryKeyControl(void);

/* Symbol: gDrmKeyInstallLibpath */
/* Demangled: gDrmKeyInstallLibpath */
extern void* gDrmKeyInstallLibpath;

/* Symbol: gRestoreKeyboxFromBackupFunc */
/* Demangled: gRestoreKeyboxFromBackupFunc */
extern void* gRestoreKeyboxFromBackupFunc;

/* Symbol: TLCMdw_ShrinkUsageTableHeader */
/* Demangled: TLCMdw_ShrinkUsageTableHeader */
int TLCMdw_ShrinkUsageTableHeader(void);

/* Symbol: TLCMdw_SupportedCertificates */
/* Demangled: TLCMdw_SupportedCertificates */
int TLCMdw_SupportedCertificates(void);

/* Symbol: _ZN5wvcdm4File4OpenERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: wvcdm::File::Open(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5wvcdm4File4OpenERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: TLCMdw_DeactivateUsageEntry */
/* Demangled: TLCMdw_DeactivateUsageEntry */
int TLCMdw_DeactivateUsageEntry(void);

/* Symbol: TLCMdw_InstallKeybox */
/* Demangled: TLCMdw_InstallKeybox */
int TLCMdw_InstallKeybox(void);

/* Symbol: TLCMdw_LoadUsageTableHeader */
/* Demangled: TLCMdw_LoadUsageTableHeader */
int TLCMdw_LoadUsageTableHeader(void);

/* Symbol: gWvHdcpExt_IsSRMUpdateSupportedFunc */
/* Demangled: gWvHdcpExt_IsSRMUpdateSupportedFunc */
extern void* gWvHdcpExt_IsSRMUpdateSupportedFunc;

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: TLCMdw_CreateNewUsageEntry */
/* Demangled: TLCMdw_CreateNewUsageEntry */
int TLCMdw_CreateNewUsageEntry(void);

/* Symbol: _ZN5wvcdm4File5CloseEv */
/* Demangled: wvcdm::File::Close() */
int _ZN5wvcdm4File5CloseEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: TLCMdw_LoadTestKeybox */
/* Demangled: TLCMdw_LoadTestKeybox */
int TLCMdw_LoadTestKeybox(void);

/* Symbol: WRAPPED_KEYBOX_PATH */
/* Demangled: WRAPPED_KEYBOX_PATH */
extern void* WRAPPED_KEYBOX_PATH;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: TLCMdw_Initialize */
/* Demangled: TLCMdw_Initialize */
int TLCMdw_Initialize(void);

/* Symbol: _ZN5wvcdm4FileC2Ev */
/* Demangled: wvcdm::File::File() */
int _ZN5wvcdm4FileC2Ev(void);

/* Symbol: TLCMdw_GenerateDerivedKeys */
/* Demangled: TLCMdw_GenerateDerivedKeys */
int TLCMdw_GenerateDerivedKeys(void);

/* Symbol: TLCMdw_Generic_Verify */
/* Demangled: TLCMdw_Generic_Verify */
int TLCMdw_Generic_Verify(void);

/* Symbol: TLCMdw_GetDeviceID */
/* Demangled: TLCMdw_GetDeviceID */
int TLCMdw_GetDeviceID(void);

/* Symbol: TLCMdw_GetNumberOfOpenSessions */
/* Demangled: TLCMdw_GetNumberOfOpenSessions */
int TLCMdw_GetNumberOfOpenSessions(void);

/* Symbol: TLCMdw_MaximumUsageTableHeaderSize */
/* Demangled: TLCMdw_MaximumUsageTableHeaderSize */
int TLCMdw_MaximumUsageTableHeaderSize(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: TLCMdw_DeleteUsageEntry */
/* Demangled: TLCMdw_DeleteUsageEntry */
int TLCMdw_DeleteUsageEntry(void);

/* Symbol: TLCMdw_LoadDeviceRSAKey */
/* Demangled: TLCMdw_LoadDeviceRSAKey */
int TLCMdw_LoadDeviceRSAKey(void);

/* Symbol: TLCMdw_MinorAPIVersion */
/* Demangled: TLCMdw_MinorAPIVersion */
int TLCMdw_MinorAPIVersion(void);

/* Symbol: _Z25TLCMdw_TestHdcpCapabilityhh */
/* Demangled: TLCMdw_TestHdcpCapability(unsigned char, unsigned char) */
int _Z25TLCMdw_TestHdcpCapabilityhh(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: gNwDecryptDrmkeyFunc */
/* Demangled: gNwDecryptDrmkeyFunc */
extern void* gNwDecryptDrmkeyFunc;

/* Symbol: TLCMdw_IsKeyboxValid */
/* Demangled: TLCMdw_IsKeyboxValid */
int TLCMdw_IsKeyboxValid(void);

/* Symbol: TLCMdw_PrepAndSignRenewalRequest */
/* Demangled: TLCMdw_PrepAndSignRenewalRequest */
int TLCMdw_PrepAndSignRenewalRequest(void);

/* Symbol: TLCMdw_TestInvokeTEEPerformance */
/* Demangled: TLCMdw_TestInvokeTEEPerformance */
int TLCMdw_TestInvokeTEEPerformance(void);

/* Symbol: TLCMdw_CopyOldUsageEntry */
/* Demangled: TLCMdw_CopyOldUsageEntry */
int TLCMdw_CopyOldUsageEntry(void);

/* Symbol: TLCMdw_CreateOldUsageEntry */
/* Demangled: TLCMdw_CreateOldUsageEntry */
int TLCMdw_CreateOldUsageEntry(void);

/* Symbol: gWVKeyboxExtHandle */
/* Demangled: gWVKeyboxExtHandle */
extern void* gWVKeyboxExtHandle;

/* Symbol: gWvHdcpExt_LoadSRMFunc */
/* Demangled: gWvHdcpExt_LoadSRMFunc */
extern void* gWvHdcpExt_LoadSRMFunc;

/* Symbol: TLCMdw_Generic_Decrypt */
/* Demangled: TLCMdw_Generic_Decrypt */
int TLCMdw_Generic_Decrypt(void);

/* Symbol: TLCMdw_SecurityLevel */
/* Demangled: TLCMdw_SecurityLevel */
int TLCMdw_SecurityLevel(void);

/* Symbol: TLCMdw_GetCurrentSRMVersion */
/* Demangled: TLCMdw_GetCurrentSRMVersion */
int TLCMdw_GetCurrentSRMVersion(void);

/* Symbol: TLCMdw_GetKeyData */
/* Demangled: TLCMdw_GetKeyData */
int TLCMdw_GetKeyData(void);

/* Symbol: TLCMdw_PrepAndSignProvisioningRequest */
/* Demangled: TLCMdw_PrepAndSignProvisioningRequest */
int TLCMdw_PrepAndSignProvisioningRequest(void);

/* Symbol: gWvHdcpExt_RemoveSRMFunc */
/* Demangled: gWvHdcpExt_RemoveSRMFunc */
extern void* gWvHdcpExt_RemoveSRMFunc;

/* Symbol: TLCMdw_LoadUsageEntry */
/* Demangled: TLCMdw_LoadUsageEntry */
int TLCMdw_LoadUsageEntry(void);

/* Symbol: TLCMdw_SupportsUsageTable */
/* Demangled: TLCMdw_SupportsUsageTable */
int TLCMdw_SupportsUsageTable(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN5wvcdm4File6RemoveERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::Remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File6RemoveERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5wvcdm4FileE */
/* Demangled: vtable for wvcdm::File */
extern void* _ZTVN5wvcdm4FileE;

/* Symbol: TLCMdw_DeleteOldUsageTable */
/* Demangled: TLCMdw_DeleteOldUsageTable */
int TLCMdw_DeleteOldUsageTable(void);

/* Symbol: TLCMdw_LoadRenewal */
/* Demangled: TLCMdw_LoadRenewal */
int TLCMdw_LoadRenewal(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: TLCMdw_TestMemCopyPerformance */
/* Demangled: TLCMdw_TestMemCopyPerformance */
int TLCMdw_TestMemCopyPerformance(void);

/* Symbol: _ZN5wvcdm4File6ExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: wvcdm::File::Exists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5wvcdm4File6ExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5wvcdm4FileD2Ev */
/* Demangled: wvcdm::File::~File() */
int _ZN5wvcdm4FileD2Ev(void);

/* Symbol: TLCMdw_LoadSRM */
/* Demangled: TLCMdw_LoadSRM */
int TLCMdw_LoadSRM(void);

/* Symbol: TLCMdw_MoveEntry */
/* Demangled: TLCMdw_MoveEntry */
int TLCMdw_MoveEntry(void);

/* Symbol: TLCMdw_SecurityPatchLevel */
/* Demangled: TLCMdw_SecurityPatchLevel */
int TLCMdw_SecurityPatchLevel(void);

/* Symbol: TLCMdw_TestHDCPCheck */
/* Demangled: TLCMdw_TestHDCPCheck */
int TLCMdw_TestHDCPCheck(void);

/* Symbol: TLCMdw_UpdateUsageTable */
/* Demangled: TLCMdw_UpdateUsageTable */
int TLCMdw_UpdateUsageTable(void);

/* Symbol: gInstallKeyboxFunc */
/* Demangled: gInstallKeyboxFunc */
extern void* gInstallKeyboxFunc;

/* Symbol: gWVHdcpExtHandle */
/* Demangled: gWVHdcpExtHandle */
extern void* gWVHdcpExtHandle;

/* Symbol: gWVKeyboxExtLibPath */
/* Demangled: gWVKeyboxExtLibPath */
extern void* gWVKeyboxExtLibPath;

/* Symbol: TLCMdw_CopyBuffer */
/* Demangled: TLCMdw_CopyBuffer */
int TLCMdw_CopyBuffer(void);

/* Symbol: TLCMdw_InitKeybox */
/* Demangled: TLCMdw_InitKeybox */
int TLCMdw_InitKeybox(void);

/* Symbol: TLCMdw_IsAntiRollbackHwPresent */
/* Demangled: TLCMdw_IsAntiRollbackHwPresent */
int TLCMdw_IsAntiRollbackHwPresent(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: gNwFreeDrmkeyFunc */
/* Demangled: gNwFreeDrmkeyFunc */
extern void* gNwFreeDrmkeyFunc;

/* Symbol: TLCMdw_ReportUsage */
/* Demangled: TLCMdw_ReportUsage */
int TLCMdw_ReportUsage(void);

/* Symbol: TLCMdw_WrapKeybox */
/* Demangled: TLCMdw_WrapKeybox */
int TLCMdw_WrapKeybox(void);

/* Symbol: _Z22LoadUsageTableFromFilev */
/* Demangled: LoadUsageTableFromFile() */
int _Z22LoadUsageTableFromFilev(void);

/* Symbol: _ZTVN5wvcdm4File4ImplE */
/* Demangled: vtable for wvcdm::File::Impl */
extern void* _ZTVN5wvcdm4File4ImplE;

__END_DECLS

#endif /* BEGONIA_RE_LIBTLCWIDEVINEMODULARDRM_H */
