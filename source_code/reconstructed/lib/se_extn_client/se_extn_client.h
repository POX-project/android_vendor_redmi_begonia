/*
 * Reverse-Engineered ABI Specification for: se_extn_client.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: se_extn_client.so
 */

#ifndef BEGONIA_RE_SE_EXTN_CLIENT_H
#define BEGONIA_RE_SE_EXTN_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10CNfcConfig10moveToListEv */
/* Demangled: CNfcConfig::moveToList() */
int _ZN10CNfcConfig10moveToListEv(void);

/* Symbol: _ZN10CNfcConfig11GetInstanceEv */
/* Demangled: CNfcConfig::GetInstance() */
int _ZN10CNfcConfig11GetInstanceEv(void);

/* Symbol: _ZN10CNfcConfig12moveFromListEv */
/* Demangled: CNfcConfig::moveFromList() */
int _ZN10CNfcConfig12moveFromListEv(void);

/* Symbol: _Z18geteUICCTerminalIdPc */
/* Demangled: geteUICCTerminalId(char*) */
int _Z18geteUICCTerminalIdPc(void);

/* Symbol: NXPLOG_ITEM_NCIHAL */
/* Demangled: NXPLOG_ITEM_NCIHAL */
extern void* NXPLOG_ITEM_NCIHAL;

/* Symbol: _ZN10CNfcConfig9isAllowedEPKc */
/* Demangled: CNfcConfig::isAllowed(char const*) */
int _ZN10CNfcConfig9isAllowedEPKc(void);

/* Symbol: _Z16geteSETerminalIdPc */
/* Demangled: geteSETerminalId(char*) */
int _Z16geteSETerminalIdPc(void);

/* Symbol: updateNxpConfigTimestamp */
/* Demangled: updateNxpConfigTimestamp */
int updateNxpConfigTimestamp(void);

/* Symbol: seExtn */
/* Demangled: seExtn */
extern void* seExtn;

/* Symbol: _ZNK10CNfcConfig8getValueEPKcRt */
/* Demangled: CNfcConfig::getValue(char const*, unsigned short&) const */
int _ZNK10CNfcConfig8getValueEPKcRt(void);

/* Symbol: _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<CNfcParam const*, std::__1::allocator<CNfcParam const*> >::__push_back_slow_path<CNfcParam const* const&>(CNfcParam const* const&) */
int _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: NXPLOG_ITEM_FWDNLD */
/* Demangled: NXPLOG_ITEM_FWDNLD */
extern void* NXPLOG_ITEM_FWDNLD;

/* Symbol: GetNxpStrValue */
/* Demangled: GetNxpStrValue */
int GetNxpStrValue(void);

/* Symbol: _Z12sparse_crc32jPKvi */
/* Demangled: sparse_crc32(unsigned int, void const*, int) */
int _Z12sparse_crc32jPKvi(void);

/* Symbol: resetNxpConfig */
/* Demangled: resetNxpConfig */
int resetNxpConfig(void);

/* Symbol: _ZNK10CNfcConfig4findEPKc */
/* Demangled: CNfcConfig::find(char const*) const */
int _ZNK10CNfcConfig4findEPKc(void);

/* Symbol: _ZTV10CNfcConfig */
/* Demangled: vtable for CNfcConfig */
extern void* _ZTV10CNfcConfig;

/* Symbol: gLog_level */
/* Demangled: gLog_level */
extern void* gLog_level;

/* Symbol: _Z19getLsUpdateRequiredv */
/* Demangled: getLsUpdateRequired() */
int _Z19getLsUpdateRequiredv(void);

/* Symbol: _Z21setJcopUpdateRequiredh */
/* Demangled: setJcopUpdateRequired(unsigned char) */
int _Z21setJcopUpdateRequiredh(void);

/* Symbol: _ZN10CNfcConfig10isModifiedEv */
/* Demangled: CNfcConfig::isModified() */
int _ZN10CNfcConfig10isModifiedEv(void);

/* Symbol: _ZN9CNfcParamD0Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD0Ev(void);

/* Symbol: isNxpConfigModified */
/* Demangled: isNxpConfigModified */
int isNxpConfigModified(void);

/* Symbol: _Z18getNfcSeTerminalIdPc */
/* Demangled: getNfcSeTerminalId(char*) */
int _Z18getNfcSeTerminalIdPc(void);

/* Symbol: _Z19setLsUpdateRequiredh */
/* Demangled: setLsUpdateRequired(unsigned char) */
int _Z19setLsUpdateRequiredh(void);

/* Symbol: _Z22checkeSEClientRequired15ESE_CLIENT_INTF */
/* Demangled: checkeSEClientRequired(ESE_CLIENT_INTF) */
int _Z22checkeSEClientRequired15ESE_CLIENT_INTF(void);

/* Symbol: NXPLOG_ITEM_NCIR */
/* Demangled: NXPLOG_ITEM_NCIR */
extern void* NXPLOG_ITEM_NCIR;

/* Symbol: _ZN10CNfcConfig10readConfigEPKcb */
/* Demangled: CNfcConfig::readConfig(char const*, bool) */
int _ZN10CNfcConfig10readConfigEPKcb(void);

/* Symbol: _ZN9CNfcParamD1Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD1Ev(void);

/* Symbol: _ZNK10CNfcConfig20readNxpTransitConfigEPKc */
/* Demangled: CNfcConfig::readNxpTransitConfig(char const*) const */
int _ZNK10CNfcConfig20readNxpTransitConfigEPKc(void);

/* Symbol: GetNxpByteArrayValue */
/* Demangled: GetNxpByteArrayValue */
int GetNxpByteArrayValue(void);

/* Symbol: _ZN10CNfcConfig14checkTimestampEPKcS1_ */
/* Demangled: CNfcConfig::checkTimestamp(char const*, char const*) */
int _ZN10CNfcConfig14checkTimestampEPKcS1_(void);

/* Symbol: _ZN9CNfcParamC1Ev */
/* Demangled: CNfcParam::CNfcParam() */
int _ZN9CNfcParamC1Ev(void);

/* Symbol: _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN9CNfcParamD2Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD2Ev(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcPcj */
/* Demangled: CNfcConfig::getValue(char const*, char*, unsigned int) const */
int _ZNK10CNfcConfig8getValueEPKcPcj(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcPclPl */
/* Demangled: CNfcConfig::getValue(char const*, char*, long, long*) const */
int _ZNK10CNfcConfig8getValueEPKcPclPl(void);

/* Symbol: _ZN10CNfcConfig15updateTimestampEv */
/* Demangled: CNfcConfig::updateTimestamp() */
int _ZN10CNfcConfig15updateTimestampEv(void);

/* Symbol: _ZN9CNfcParamC2Ev */
/* Demangled: CNfcParam::CNfcParam() */
int _ZN9CNfcParamC2Ev(void);

/* Symbol: _Z17getJcopUpdateIntfv */
/* Demangled: getJcopUpdateIntf() */
int _Z17getJcopUpdateIntfv(void);

/* Symbol: _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_ */
/* Demangled: findConfigFilePathFromTransportConfigPaths(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_(void);

/* Symbol: _ZN10CNfcConfig5cleanEv */
/* Demangled: CNfcConfig::clean() */
int _ZN10CNfcConfig5cleanEv(void);

/* Symbol: _ZN9CNfcParamC2EPKcm */
/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
int _ZN9CNfcParamC2EPKcm(void);

/* Symbol: _Z21getJcopUpdateRequiredv */
/* Demangled: getJcopUpdateRequired() */
int _Z21getJcopUpdateRequiredv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN9CNfcParamC1EPKcm */
/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
int _ZN9CNfcParamC1EPKcm(void);

/* Symbol: transport_config_paths */
/* Demangled: transport_config_paths */
extern void* transport_config_paths;

/* Symbol: Ch */
/* Demangled: Ch */
extern void* Ch;

/* Symbol: NXPLOG_ITEM_NCIX */
/* Demangled: NXPLOG_ITEM_NCIX */
extern void* NXPLOG_ITEM_NCIX;

/* Symbol: _Z27phNxpLog_InitializeLogLevelv */
/* Demangled: phNxpLog_InitializeLogLevel() */
int _Z27phNxpLog_InitializeLogLevelv(void);

/* Symbol: NXPLOG_ITEM_EXTNS */
/* Demangled: NXPLOG_ITEM_EXTNS */
extern void* NXPLOG_ITEM_EXTNS;

/* Symbol: _ZN10CNfcConfig3addEPK9CNfcParam */
/* Demangled: CNfcConfig::add(CNfcParam const*) */
int _ZN10CNfcConfig3addEPK9CNfcParam(void);

/* Symbol: _ZN10CNfcConfigD0Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD0Ev(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcRm */
/* Demangled: CNfcConfig::getValue(char const*, unsigned long&) const */
int _ZNK10CNfcConfig8getValueEPKcRm(void);

/* Symbol: GetNxpNumValue */
/* Demangled: GetNxpNumValue */
int GetNxpNumValue(void);

/* Symbol: _Z18readOptionalConfigPKc */
/* Demangled: readOptionalConfig(char const*) */
int _Z18readOptionalConfigPKc(void);

/* Symbol: _ZN10CNfcConfigD1Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD1Ev(void);

/* Symbol: nfc_debug_enabled */
/* Demangled: nfc_debug_enabled */
extern void* nfc_debug_enabled;

/* Symbol: NXPLOG_ITEM_TML */
/* Demangled: NXPLOG_ITEM_TML */
extern void* NXPLOG_ITEM_TML;

/* Symbol: _ZN10CNfcConfig4dumpEv */
/* Demangled: CNfcConfig::dump() */
int _ZN10CNfcConfig4dumpEv(void);

/* Symbol: _ZN10CNfcConfigC1Ev */
/* Demangled: CNfcConfig::CNfcConfig() */
int _ZN10CNfcConfigC1Ev(void);

/* Symbol: _ZN10CNfcConfigD2Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD2Ev(void);

/* Symbol: _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK10CNfcConfig15readNxpRFConfigEPKc */
/* Demangled: CNfcConfig::readNxpRFConfig(char const*) const */
int _ZNK10CNfcConfig15readNxpRFConfigEPKc(void);

/* Symbol: _ZTV9CNfcParam */
/* Demangled: vtable for CNfcParam */
extern void* _ZTV9CNfcParam;

/* Symbol: _Z15getLsUpdateIntfv */
/* Demangled: getLsUpdateIntf() */
int _Z15getLsUpdateIntfv(void);

/* Symbol: _ZN10CNfcConfig13resetModifiedEv */
/* Demangled: CNfcConfig::resetModified() */
int _ZN10CNfcConfig13resetModifiedEv(void);

/* Symbol: _ZN10CNfcConfigC2Ev */
/* Demangled: CNfcConfig::CNfcConfig() */
int _ZN10CNfcConfigC2Ev(void);

/* Symbol: isNxpRFConfigModified */
/* Demangled: isNxpRFConfigModified */
int isNxpRFConfigModified(void);

__END_DECLS

#endif /* BEGONIA_RE_SE_EXTN_CLIENT_H */
