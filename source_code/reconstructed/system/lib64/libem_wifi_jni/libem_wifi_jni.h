/*
 * Reverse-Engineered ABI Specification for: libem_wifi_jni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libem_wifi_jni.so
 */

#ifndef BEGONIA_RE_LIBEM_WIFI_JNI_H
#define BEGONIA_RE_LIBEM_WIFI_JNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android15os_program_initEv */
/* Demangled: android::os_program_init() */
int _ZN7android15os_program_initEv(void);

/* Symbol: _ZN7android7CMT66xx15getWifiLogLevelEi */
/* Demangled: android::CMT66xx::getWifiLogLevel(int) */
int _ZN7android7CMT66xx15getWifiLogLevelEi(void);

/* Symbol: _ZN7android7CMT66xx17setEEPRomFromFileEPc */
/* Demangled: android::CMT66xx::setEEPRomFromFile(char*) */
int _ZN7android7CMT66xx17setEEPRomFromFileEPc(void);

/* Symbol: _ZN7android9CLocalOIDC1EPKcS2_ */
/* Demangled: android::CLocalOID::CLocalOID(char const*, char const*) */
int _ZN7android9CLocalOIDC1EPKcS2_(void);

/* Symbol: _ZN7android7CMT66xx10SetATParamEjj */
/* Demangled: android::CMT66xx::SetATParam(unsigned int, unsigned int) */
int _ZN7android7CMT66xx10SetATParamEjj(void);

/* Symbol: _ZN7android7CMT66xx11setChipTypeEj */
/* Demangled: android::CMT66xx::setChipType(unsigned int) */
int _ZN7android7CMT66xx11setChipTypeEj(void);

/* Symbol: _ZN7android7CMT66xx17getSpecEEPRomSizeEPi */
/* Demangled: android::CMT66xx::getSpecEEPRomSize(int*) */
int _ZN7android7CMT66xx17getSpecEEPRomSizeEPi(void);

/* Symbol: _ZN7android8CAdapter11setPnpPowerEi */
/* Demangled: android::CAdapter::setPnpPower(int) */
int _ZN7android8CAdapter11setPnpPowerEi(void);

/* Symbol: _ZN7android8CAdapter10getMACAddrEPh */
/* Demangled: android::CAdapter::getMACAddr(unsigned char*) */
int _ZN7android8CAdapter10getMACAddrEPh(void);

/* Symbol: _ZN7android8CAdapter15getXtalTrimToCrEPj */
/* Demangled: android::CAdapter::getXtalTrimToCr(unsigned int*) */
int _ZN7android8CAdapter15getXtalTrimToCrEPj(void);

/* Symbol: _ZN7android8CAdapterD2Ev */
/* Demangled: android::CAdapter::~CAdapter() */
int _ZN7android8CAdapterD2Ev(void);

/* Symbol: _ZN7android7CMT66xx11setThermoEnEi */
/* Demangled: android::CMT66xx::setThermoEn(int) */
int _ZN7android7CMT66xx11setThermoEnEi(void);

/* Symbol: _ZN7android8CAdapter15setLowPowerTestEi */
/* Demangled: android::CAdapter::setLowPowerTest(int) */
int _ZN7android8CAdapter15setLowPowerTestEi(void);

/* Symbol: _ZN7android12queryNdisOIDEiPKcjPcjPj */
/* Demangled: android::queryNdisOID(int, char const*, unsigned int, char*, unsigned int, unsigned int*) */
int _ZN7android12queryNdisOIDEiPKcjPcjPj(void);

/* Symbol: _ZN7android7CMT66xx10getChannelEPi */
/* Demangled: android::CMT66xx::getChannel(int*) */
int _ZN7android7CMT66xx10getChannelEPi(void);

/* Symbol: _ZN7android7CMT66xx10writeMCR32Ejj */
/* Demangled: android::CMT66xx::writeMCR32(unsigned int, unsigned int) */
int _ZN7android7CMT66xx10writeMCR32Ejj(void);

/* Symbol: _ZN7android7CMT66xx12restoreIOPinEv */
/* Demangled: android::CMT66xx::restoreIOPin() */
int _ZN7android7CMT66xx12restoreIOPinEv(void);

/* Symbol: _ZN7android7CMT66xx13HQA_SetRxPathEii */
/* Demangled: android::CMT66xx::HQA_SetRxPath(int, int) */
int _ZN7android7CMT66xx13HQA_SetRxPathEii(void);

/* Symbol: _ZN7android7CMT66xx14HQA_GetAFactorEiPiS1_S1_S1_S1_ */
/* Demangled: android::CMT66xx::HQA_GetAFactor(int, int*, int*, int*, int*, int*) */
int _ZN7android7CMT66xx14HQA_GetAFactorEiPiS1_S1_S1_S1_(void);

/* Symbol: _ZN7android8CAdapter10writeDPD32Ejj */
/* Demangled: android::CAdapter::writeDPD32(unsigned int, unsigned int) */
int _ZN7android8CAdapter10writeDPD32Ejj(void);

/* Symbol: _ZN7android8CAdapter21getSupportedCountriesEPNS_12COUNTRY_CODEEi */
/* Demangled: android::CAdapter::getSupportedCountries(android::COUNTRY_CODE*, int) */
int _ZN7android8CAdapter21getSupportedCountriesEPNS_12COUNTRY_CODEEi(void);

/* Symbol: _ZN7android7CMT66xx10getAlcInfoEPiS1_S1_ */
/* Demangled: android::CMT66xx::getAlcInfo(int*, int*, int*) */
int _ZN7android7CMT66xx10getAlcInfoEPiS1_S1_(void);

/* Symbol: _ZN7android7CMT66xx15HQA_SetPreambleEi */
/* Demangled: android::CMT66xx::HQA_SetPreamble(int) */
int _ZN7android7CMT66xx15HQA_SetPreambleEi(void);

/* Symbol: _ZN7android7CMT66xx21setTXMaxPowerToEEPromEiii */
/* Demangled: android::CMT66xx::setTXMaxPowerToEEProm(int, int, int) */
int _ZN7android7CMT66xx21setTXMaxPowerToEEPromEiii(void);

/* Symbol: _ZN7android7CMT66xx14getRadarStatusEv */
/* Demangled: android::CMT66xx::getRadarStatus() */
int _ZN7android7CMT66xx14getRadarStatusEv(void);

/* Symbol: _ZN7android7CMT66xx21HQA_GetChipCapabilityEPi */
/* Demangled: android::CMT66xx::HQA_GetChipCapability(int*) */
int _ZN7android7CMT66xx21HQA_GetChipCapabilityEPi(void);

/* Symbol: _ZN7android8CAdapter19getPacketTxStatusExEPjS1_PtPhS3_ */
/* Demangled: android::CAdapter::getPacketTxStatusEx(unsigned int*, unsigned int*, unsigned short*, unsigned char*, unsigned char*) */
int _ZN7android8CAdapter19getPacketTxStatusExEPjS1_PtPhS3_(void);

/* Symbol: _ZN7android10setNdisOIDEiPKcjPcj */
/* Demangled: android::setNdisOID(int, char const*, unsigned int, char*, unsigned int) */
int _ZN7android10setNdisOIDEiPKcjPcj(void);

/* Symbol: _ZN7android7CMT66xx11getRFICTypeEv */
/* Demangled: android::CMT66xx::getRFICType() */
int _ZN7android7CMT66xx11getRFICTypeEv(void);

/* Symbol: _ZN7android7CMT66xx12getDPDLengthEPi */
/* Demangled: android::CMT66xx::getDPDLength(int*) */
int _ZN7android7CMT66xx12getDPDLengthEPi(void);

/* Symbol: _ZN7android7CMT66xx14setDPDFromFileEPc */
/* Demangled: android::CMT66xx::setDPDFromFile(char*) */
int _ZN7android7CMT66xx14setDPDFromFileEPc(void);

/* Symbol: _ZN7android8CAdapter21getSupportChannelListEPj */
/* Demangled: android::CAdapter::getSupportChannelList(unsigned int*) */
int _ZN7android8CAdapter21getSupportChannelListEPj(void);

/* Symbol: _ZN7android8CAdapterD0Ev */
/* Demangled: android::CAdapter::~CAdapter() */
int _ZN7android8CAdapterD0Ev(void);

/* Symbol: _ZN7android7CMT66xx13getEEPRomSizeEPi */
/* Demangled: android::CMT66xx::getEEPRomSize(int*) */
int _ZN7android7CMT66xx13getEEPRomSizeEPi(void);

/* Symbol: _ZN7android7CMT66xx15queryThermoInfoEPiPj */
/* Demangled: android::CMT66xx::queryThermoInfo(int*, unsigned int*) */
int _ZN7android7CMT66xx15queryThermoInfoEPiPj(void);

/* Symbol: _ZN7android7CMT66xx20HQA_DBDCContinuousTXEiiiiiiii */
/* Demangled: android::CMT66xx::HQA_DBDCContinuousTX(int, int, int, int, int, int, int, int) */
int _ZN7android7CMT66xx20HQA_DBDCContinuousTXEiiiiiiii(void);

/* Symbol: _ZN7android7CMT66xx10GetATParamEjPj */
/* Demangled: android::CMT66xx::GetATParam(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx10GetATParamEjPj(void);

/* Symbol: _ZN7android7CMT66xx10writeDPD32Ejj */
/* Demangled: android::CMT66xx::writeDPD32(unsigned int, unsigned int) */
int _ZN7android7CMT66xx10writeDPD32Ejj(void);

/* Symbol: _ZN7android7CMT66xx13setNormalModeEv */
/* Demangled: android::CMT66xx::setNormalMode() */
int _ZN7android7CMT66xx13setNormalModeEv(void);

/* Symbol: _ZN7android7CMT66xx15HQA_DBDCStartTXEiiiiiiiiiii */
/* Demangled: android::CMT66xx::HQA_DBDCStartTX(int, int, int, int, int, int, int, int, int, int, int) */
int _ZN7android7CMT66xx15HQA_DBDCStartTXEiiiiiiiiiii(void);

/* Symbol: _ZN7android7CMT66xx16getAlcSlopeRatioEPiS1_S1_S1_ */
/* Demangled: android::CMT66xx::getAlcSlopeRatio(int*, int*, int*, int*) */
int _ZN7android7CMT66xx16getAlcSlopeRatioEPiS1_S1_S1_(void);

/* Symbol: _ZN7android7CMT66xx9testIOPinEj */
/* Demangled: android::CMT66xx::testIOPin(unsigned int) */
int _ZN7android7CMT66xx9testIOPinEj(void);

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: _ZN7android8CAdapter9readDPD32EjPj */
/* Demangled: android::CAdapter::readDPD32(unsigned int, unsigned int*) */
int _ZN7android8CAdapter9readDPD32EjPj(void);

/* Symbol: _ZN7android9CLocalOID9GetChipIDERjPKc */
/* Demangled: android::CLocalOID::GetChipID(unsigned int&, char const*) */
int _ZN7android9CLocalOID9GetChipIDERjPKc(void);

/* Symbol: _ZN7android7CMT66xx15getXtalTrimToCrEPj */
/* Demangled: android::CMT66xx::getXtalTrimToCr(unsigned int*) */
int _ZN7android7CMT66xx15getXtalTrimToCrEPj(void);

/* Symbol: _ZN7android7CMT66xx23setTXMaxPowerToEEPromExEiiiii */
/* Demangled: android::CMT66xx::setTXMaxPowerToEEPromEx(int, int, int, int, int) */
int _ZN7android7CMT66xx23setTXMaxPowerToEEPromExEiiiii(void);

/* Symbol: _ZN7android7CMT66xx14HQA_DBDCStopTXEi */
/* Demangled: android::CMT66xx::HQA_DBDCStopTX(int) */
int _ZN7android7CMT66xx14HQA_DBDCStopTXEi(void);

/* Symbol: _ZN7android7CMT66xx14HQA_GetTxPowerEii */
/* Demangled: android::CMT66xx::HQA_GetTxPower(int, int) */
int _ZN7android7CMT66xx14HQA_GetTxPowerEii(void);

/* Symbol: _ZN7android7CMT66xx15HQA_SetBandModeEi */
/* Demangled: android::CMT66xx::HQA_SetBandMode(int) */
int _ZN7android7CMT66xx15HQA_SetBandModeEi(void);

/* Symbol: _ZN7android7CMT66xx15setWifiLogLevelEii */
/* Demangled: android::CMT66xx::setWifiLogLevel(int, int) */
int _ZN7android7CMT66xx15setWifiLogLevelEii(void);

/* Symbol: _ZN7android9CLocalOIDC2EPKcS2_ */
/* Demangled: android::CLocalOID::CLocalOID(char const*, char const*) */
int _ZN7android9CLocalOIDC2EPKcS2_(void);

/* Symbol: _ZN7android7CMT66xx14HQA_DBDCTXToneEiiii */
/* Demangled: android::CMT66xx::HQA_DBDCTXTone(int, int, int, int) */
int _ZN7android7CMT66xx14HQA_DBDCTXToneEiiii(void);

/* Symbol: _ZN7android7CMT66xx14setOutputPowerEiii */
/* Demangled: android::CMT66xx::setOutputPower(int, int, int) */
int _ZN7android7CMT66xx14setOutputPowerEiii(void);

/* Symbol: _ZN7android8CAdapter8queryOIDEjPcjPj */
/* Demangled: android::CAdapter::queryOID(unsigned int, char*, unsigned int, unsigned int*) */
int _ZN7android8CAdapter8queryOIDEjPcjPj(void);

/* Symbol: _ZN7android9CLocalOIDD1Ev */
/* Demangled: android::CLocalOID::~CLocalOID() */
int _ZN7android9CLocalOIDD1Ev(void);

/* Symbol: _ZN7android7CMT66xx10writeBBCR8Ejj */
/* Demangled: android::CMT66xx::writeBBCR8(unsigned int, unsigned int) */
int _ZN7android7CMT66xx10writeBBCR8Ejj(void);

/* Symbol: _ZN7android7CMT66xx12testInputPinEii */
/* Demangled: android::CMT66xx::testInputPin(int, int) */
int _ZN7android7CMT66xx12testInputPinEii(void);

/* Symbol: _ZN7android7CMT66xx23readTxPowerFromEEPromExEiiPiS1_S1_ */
/* Demangled: android::CMT66xx::readTxPowerFromEEPromEx(int, int, int*, int*, int*) */
int _ZN7android7CMT66xx23readTxPowerFromEEPromExEiiPiS1_S1_(void);

/* Symbol: _ZN7android8CAdapter19ReadDPDParaFromFileEPcPji */
/* Demangled: android::CAdapter::ReadDPDParaFromFile(char*, unsigned int*, int) */
int _ZN7android8CAdapter19ReadDPDParaFromFileEPcPji(void);

/* Symbol: _ZN7android8CAdapter19ReadEepDataFromFileEPcPti */
/* Demangled: android::CAdapter::ReadEepDataFromFile(char*, unsigned short*, int) */
int _ZN7android8CAdapter19ReadEepDataFromFileEPcPti(void);

/* Symbol: _ZN7android7CMT66xx16getEEPRomVersionEPi */
/* Demangled: android::CMT66xx::getEEPRomVersion(int*) */
int _ZN7android7CMT66xx16getEEPRomVersionEPi(void);

/* Symbol: _ZN7android7CMT66xx15testLoopD4toD15EjPj */
/* Demangled: android::CMT66xx::testLoopD4toD15(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx15testLoopD4toD15EjPj(void);

/* Symbol: _ZN7android7CMT66xx9getTxRateEii */
/* Demangled: android::CMT66xx::getTxRate(int, int) */
int _ZN7android7CMT66xx9getTxRateEii(void);

/* Symbol: _ZN7android7CMT66xx17HQA_SetTxPowerExtEiiiii */
/* Demangled: android::CMT66xx::HQA_SetTxPowerExt(int, int, int, int, int) */
int _ZN7android7CMT66xx17HQA_SetTxPowerExtEiiiii(void);

/* Symbol: _ZN7android7CMT66xx18setAlcInfoToEepromEii */
/* Demangled: android::CMT66xx::setAlcInfoToEeprom(int, int) */
int _ZN7android7CMT66xx18setAlcInfoToEepromEii(void);

/* Symbol: _ZN7android7CMT66xx8setTxAntEi */
/* Demangled: android::CMT66xx::setTxAnt(int) */
int _ZN7android7CMT66xx8setTxAntEi(void);

/* Symbol: _ZN7android7CMT66xx9readMCR32EjPj */
/* Demangled: android::CMT66xx::readMCR32(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx9readMCR32EjPj(void);

/* Symbol: _Z46register_com_mediatek_engineermode_wifi_EMWifiP7_JNIEnv */
/* Demangled: register_com_mediatek_engineermode_wifi_EMWifi(_JNIEnv*) */
int _Z46register_com_mediatek_engineermode_wifi_EMWifiP7_JNIEnv(void);

/* Symbol: _ZN7android8CAdapter12getDPDLengthEPi */
/* Demangled: android::CAdapter::getDPDLength(int*) */
int _ZN7android8CAdapter12getDPDLengthEPi(void);

/* Symbol: _ZN7android8CAdapter14getChannelBandEiPiS1_ */
/* Demangled: android::CAdapter::getChannelBand(int, int*, int*) */
int _ZN7android8CAdapter14getChannelBandEiPiS1_(void);

/* Symbol: _ZN7android7CMT66xx11setTestModeEv */
/* Demangled: android::CMT66xx::setTestMode() */
int _ZN7android7CMT66xx11setTestModeEv(void);

/* Symbol: _ZN7android7CMT66xx17isWifiLogUiEnableEi */
/* Demangled: android::CMT66xx::isWifiLogUiEnable(int) */
int _ZN7android7CMT66xx17isWifiLogUiEnableEi(void);

/* Symbol: _ZN7android8CAdapter17eepromReadByteStrEjjPc */
/* Demangled: android::CAdapter::eepromReadByteStr(unsigned int, unsigned int, char*) */
int _ZN7android8CAdapter17eepromReadByteStrEjjPc(void);

/* Symbol: _ZN7android8CAdapter14getChannelListEPji */
/* Demangled: android::CAdapter::getChannelList(unsigned int*, int) */
int _ZN7android8CAdapter14getChannelListEPji(void);

/* Symbol: _ZN7android8CAdapter6setOIDEjPcj */
/* Demangled: android::CAdapter::setOID(unsigned int, char*, unsigned int) */
int _ZN7android8CAdapter6setOIDEjPcj(void);

/* Symbol: _ZN7android7CMT66xx13setEEPRomSizeEi */
/* Demangled: android::CMT66xx::setEEPRomSize(int) */
int _ZN7android7CMT66xx13setEEPRomSizeEi(void);

/* Symbol: _ZN7android7CMT66xx16HQA_GetWlanCfgEmEPiPc */
/* Demangled: android::CMT66xx::HQA_GetWlanCfgEm(int*, char*) */
int _ZN7android7CMT66xx16HQA_GetWlanCfgEmEPiPc(void);

/* Symbol: _ZN7android9CLocalOID8queryOIDEPNS_8CAdapterEjPcjPj */
/* Demangled: android::CLocalOID::queryOID(android::CAdapter*, unsigned int, char*, unsigned int, unsigned int*) */
int _ZN7android9CLocalOID8queryOIDEPNS_8CAdapterEjPcjPj(void);

/* Symbol: _ZN7android7CMT66xx12getDACOffsetEPt */
/* Demangled: android::CMT66xx::getDACOffset(unsigned short*) */
int _ZN7android7CMT66xx12getDACOffsetEPt(void);

/* Symbol: _ZN7android7CMT66xx17getPacketRxStatusEPiS1_S1_ */
/* Demangled: android::CMT66xx::getPacketRxStatus(int*, int*, int*) */
int _ZN7android7CMT66xx17getPacketRxStatusEPiS1_S1_(void);

/* Symbol: _ZN7android8CAdapterD1Ev */
/* Demangled: android::CAdapter::~CAdapter() */
int _ZN7android8CAdapterD1Ev(void);

/* Symbol: _ZN7android7CMT66xx10setStandByEv */
/* Demangled: android::CMT66xx::setStandBy() */
int _ZN7android7CMT66xx10setStandByEv(void);

/* Symbol: _ZN7android8CAdapter18eepromWriteByteStrEjjPc */
/* Demangled: android::CAdapter::eepromWriteByteStr(unsigned int, unsigned int, char*) */
int _ZN7android8CAdapter18eepromWriteByteStrEjjPc(void);

/* Symbol: _ZN7android9CLocalOID6setOIDEPNS_8CAdapterEjPcj */
/* Demangled: android::CLocalOID::setOID(android::CAdapter*, unsigned int, char*, unsigned int) */
int _ZN7android9CLocalOID6setOIDEPNS_8CAdapterEjPcj(void);

/* Symbol: _ZN7android9CLocalOIDC2EPKc */
/* Demangled: android::CLocalOID::CLocalOID(char const*) */
int _ZN7android9CLocalOIDC2EPKc(void);

/* Symbol: _ZN7android7CMT66xx11HQA_SetRateEi */
/* Demangled: android::CMT66xx::HQA_SetRate(int) */
int _ZN7android7CMT66xx11HQA_SetRateEi(void);

/* Symbol: _ZN7android7CMT66xx16setLocalFrequecyEii */
/* Demangled: android::CMT66xx::setLocalFrequecy(int, int) */
int _ZN7android7CMT66xx16setLocalFrequecyEii(void);

/* Symbol: _ZN7android7CMT66xx18HQA_DBDCSetChannelEiiiiiii */
/* Demangled: android::CMT66xx::HQA_DBDCSetChannel(int, int, int, int, int, int, int) */
int _ZN7android7CMT66xx18HQA_DBDCSetChannelEiiiiiii(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: _ZN7android8CAdapter17getSupportedRatesEPti */
/* Demangled: android::CAdapter::getSupportedRates(unsigned short*, int) */
int _ZN7android8CAdapter17getSupportedRatesEPti(void);

/* Symbol: _ZN7android7CMT66xx13HQA_GetTxInfoEiPi */
/* Demangled: android::CMT66xx::HQA_GetTxInfo(int, int*) */
int _ZN7android7CMT66xx13HQA_GetTxInfoEiPi(void);

/* Symbol: _ZN7android7CMT66xx21readTxPowerFromEEPromEiiPii */
/* Demangled: android::CMT66xx::readTxPowerFromEEProm(int, int, int*, int) */
int _ZN7android7CMT66xx21readTxPowerFromEEPromEiiPii(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN7android8CAdapterC2EPKcS2_PNS_4COIDES2_j */
/* Demangled: android::CAdapter::CAdapter(char const*, char const*, android::COID*, char const*, unsigned int) */
int _ZN7android8CAdapterC2EPKcS2_PNS_4COIDES2_j(void);

/* Symbol: _ZTVN7android9CLocalOIDE */
/* Demangled: vtable for android::CLocalOID */
extern void* _ZTVN7android9CLocalOIDE;

/* Symbol: _ZN7android7CMT66xx12readEEPRom16EjPj */
/* Demangled: android::CMT66xx::readEEPRom16(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx12readEEPRom16EjPj(void);

/* Symbol: _ZN7android7CMT66xx17getEEPRomVersion_Ev */
/* Demangled: android::CMT66xx::getEEPRomVersion_() */
int _ZN7android7CMT66xx17getEEPRomVersion_Ev(void);

/* Symbol: _ZN7android7CMT66xx21setRcpiOffsetToEEPromEii */
/* Demangled: android::CMT66xx::setRcpiOffsetToEEProm(int, int) */
int _ZN7android7CMT66xx21setRcpiOffsetToEEPromEii(void);

/* Symbol: _ZN7android9CLocalOIDC1EPKc */
/* Demangled: android::CLocalOID::CLocalOID(char const*) */
int _ZN7android9CLocalOIDC1EPKc(void);

/* Symbol: _ZN7android7CMT66xx9readBBCR8EjPj */
/* Demangled: android::CMT66xx::readBBCR8(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx9readBBCR8EjPj(void);

/* Symbol: _ZN7android8CAdapter6sw_cmdEijPj */
/* Demangled: android::CAdapter::sw_cmd(int, unsigned int, unsigned int*) */
int _ZN7android8CAdapter6sw_cmdEijPj(void);

/* Symbol: _ZN7android7CMT66xx12setOutputPinEii */
/* Demangled: android::CMT66xx::setOutputPin(int, int) */
int _ZN7android7CMT66xx12setOutputPinEii(void);

/* Symbol: _ZN7android7CMT66xx14HQA_DBDCStopRXEi */
/* Demangled: android::CMT66xx::HQA_DBDCStopRX(int) */
int _ZN7android7CMT66xx14HQA_DBDCStopRXEi(void);

/* Symbol: _ZN7android7CMT66xx22findMaxPowerByteOffsetEiii */
/* Demangled: android::CMT66xx::findMaxPowerByteOffset(int, int, int) */
int _ZN7android7CMT66xx22findMaxPowerByteOffsetEiii(void);

/* Symbol: _ZN7android8CAdapter20getFwManifestVersionEPc */
/* Demangled: android::CAdapter::getFwManifestVersion(char*) */
int _ZN7android8CAdapter20getFwManifestVersionEPc(void);

/* Symbol: _ZN7android8CAdapter14setDPDFromFileEPc */
/* Demangled: android::CAdapter::setDPDFromFile(char*) */
int _ZN7android8CAdapter14setDPDFromFileEPc(void);

/* Symbol: _ZN7android9CLocalOIDD2Ev */
/* Demangled: android::CLocalOID::~CLocalOID() */
int _ZN7android9CLocalOIDD2Ev(void);

/* Symbol: _ZN7android7CMT66xx14getChannelListEPji */
/* Demangled: android::CMT66xx::getChannelList(unsigned int*, int) */
int _ZN7android7CMT66xx14getChannelListEPji(void);

/* Symbol: _ZN7android7CMT66xx24HQA_GetAntSwapCapabilityEPi */
/* Demangled: android::CMT66xx::HQA_GetAntSwapCapability(int*) */
int _ZN7android7CMT66xx24HQA_GetAntSwapCapabilityEPi(void);

/* Symbol: _ZN7android7CMT66xx9readDPD32EjPj */
/* Demangled: android::CMT66xx::readDPD32(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx9readDPD32EjPj(void);

/* Symbol: _ZN7android8CAdapter23setPowerManagementStateENS_22POWER_MANAGEMENT_STATEE */
/* Demangled: android::CAdapter::setPowerManagementState(android::POWER_MANAGEMENT_STATE) */
int _ZN7android8CAdapter23setPowerManagementStateENS_22POWER_MANAGEMENT_STATEE(void);

/* Symbol: _ZN7android7CMT66xx10setChannelEi */
/* Demangled: android::CMT66xx::setChannel(int) */
int _ZN7android7CMT66xx10setChannelEi(void);

/* Symbol: _ZN7android7CMT66xx13writeEEPRom16Ejj */
/* Demangled: android::CMT66xx::writeEEPRom16(unsigned int, unsigned int) */
int _ZN7android7CMT66xx13writeEEPRom16Ejj(void);

/* Symbol: _ZN7android7CMT66xx14setPPMCRAndSCREv */
/* Demangled: android::CMT66xx::setPPMCRAndSCR() */
int _ZN7android7CMT66xx14setPPMCRAndSCREv(void);

/* Symbol: _ZN7android7CMT66xx15setXtalTrimToCrEj */
/* Demangled: android::CMT66xx::setXtalTrimToCr(unsigned int) */
int _ZN7android7CMT66xx15setXtalTrimToCrEj(void);

/* Symbol: _ZN7android7CMT66xx17readBBCRStatisticEPtS1_S1_S1_S1_ */
/* Demangled: android::CMT66xx::readBBCRStatistic(unsigned short*, unsigned short*, unsigned short*, unsigned short*, unsigned short*) */
int _ZN7android7CMT66xx17readBBCRStatisticEPtS1_S1_S1_S1_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7android7CMT66xx13HQA_SetTxPathEii */
/* Demangled: android::CMT66xx::HQA_SetTxPath(int, int) */
int _ZN7android7CMT66xx13HQA_SetTxPathEii(void);

/* Symbol: _ZN7android7CMT66xx25HQA_GetRXStatisticsAllExtEiPiS1_S1_S1_ */
/* Demangled: android::CMT66xx::HQA_GetRXStatisticsAllExt(int, int*, int*, int*, int*) */
int _ZN7android7CMT66xx25HQA_GetRXStatisticsAllExtEiPiS1_S1_S1_(void);

/* Symbol: g_mutex */
/* Demangled: g_mutex */
extern void* g_mutex;

/* Symbol: _ZN7android7CMT66xx11getInputPinEiPi */
/* Demangled: android::CMT66xx::getInputPin(int, int*) */
int _ZN7android7CMT66xx11getInputPinEiPi(void);

/* Symbol: _ZN7android7CMT66xx16readSpecEEPRom16EjPj */
/* Demangled: android::CMT66xx::readSpecEEPRom16(unsigned int, unsigned int*) */
int _ZN7android7CMT66xx16readSpecEEPRom16EjPj(void);

/* Symbol: _ZN7android7CMT66xx18setCountryToEEPromEPh */
/* Demangled: android::CMT66xx::setCountryToEEProm(unsigned char*) */
int _ZN7android7CMT66xx18setCountryToEEPromEPh(void);

/* Symbol: _ZN7android7CMT66xx20HQA_DBDCSetTXContentEii */
/* Demangled: android::CMT66xx::HQA_DBDCSetTXContent(int, int) */
int _ZN7android7CMT66xx20HQA_DBDCSetTXContentEii(void);

/* Symbol: _ZTVN7android7CMT66xxE */
/* Demangled: vtable for android::CMT66xx */
extern void* _ZTVN7android7CMT66xxE;

/* Symbol: _ZN7android8CAdapter19getOperatingCountryEPc */
/* Demangled: android::CAdapter::getOperatingCountry(char*) */
int _ZN7android8CAdapter19getOperatingCountryEPc(void);

/* Symbol: _ZN7android15wifi_init_ifaceEPKc */
/* Demangled: android::wifi_init_iface(char const*) */
int _ZN7android15wifi_init_ifaceEPKc(void);

/* Symbol: _ZTVN7android8CAdapterE */
/* Demangled: vtable for android::CAdapter */
extern void* _ZTVN7android8CAdapterE;

/* Symbol: _ZN7android9CLocalOIDD0Ev */
/* Demangled: android::CLocalOID::~CLocalOID() */
int _ZN7android9CLocalOIDD0Ev(void);

/* Symbol: _ZN7android7CMT66xx10HQA_SetNssEi */
/* Demangled: android::CMT66xx::HQA_SetNss(int) */
int _ZN7android7CMT66xx10HQA_SetNssEi(void);

/* Symbol: _ZN7android7CMT66xx11setPacketRxEiNS_10RX_ANT_SELE */
/* Demangled: android::CMT66xx::setPacketRx(int, android::RX_ANT_SEL) */
int _ZN7android7CMT66xx11setPacketRxEiNS_10RX_ANT_SELE(void);

/* Symbol: _ZN7android7CMT66xx16HQA_SetWlanCfgEmEiPc */
/* Demangled: android::CMT66xx::HQA_SetWlanCfgEm(int, char*) */
int _ZN7android7CMT66xx16HQA_SetWlanCfgEmEiPc(void);

/* Symbol: _ZN7android7CMT66xx20setDACOffsetToEEPromEt */
/* Demangled: android::CMT66xx::setDACOffsetToEEProm(unsigned short) */
int _ZN7android7CMT66xx20setDACOffsetToEEPromEt(void);

/* Symbol: _ZN7android7CMT66xx24setAlcSlopeRatioToEepromEiiii */
/* Demangled: android::CMT66xx::setAlcSlopeRatioToEeprom(int, int, int, int) */
int _ZN7android7CMT66xx24setAlcSlopeRatioToEepromEiiii(void);

/* Symbol: _ZN7android7CMT66xx28setAnritsu8860bTestSupportEnEi */
/* Demangled: android::CMT66xx::setAnritsu8860bTestSupportEn(int) */
int _ZN7android7CMT66xx28setAnritsu8860bTestSupportEnEi(void);

/* Symbol: _ZN7android8CAdapter19setOperatingCountryEPc */
/* Demangled: android::CAdapter::setOperatingCountry(char*) */
int _ZN7android8CAdapter19setOperatingCountryEPc(void);

/* Symbol: _ZN7android8CAdapter21getLowPowerTestResultEPiS1_ */
/* Demangled: android::CAdapter::getLowPowerTestResult(int*, int*) */
int _ZN7android8CAdapter21getLowPowerTestResultEPiS1_(void);

/* Symbol: _ZN7android7CMT66xx18HQA_DBDCStartRXExtEiiii */
/* Demangled: android::CMT66xx::HQA_DBDCStartRXExt(int, int, int, int) */
int _ZN7android7CMT66xx18HQA_DBDCStartRXExtEiiii(void);

/* Symbol: _ZN7android7CMT66xx18setMACAddrToEEPromEPh */
/* Demangled: android::CMT66xx::setMACAddrToEEProm(unsigned char*) */
int _ZN7android7CMT66xx18setMACAddrToEEPromEPh(void);

/* Symbol: _ZN7android7CMT66xx18setPhyModeToEEPromEi */
/* Demangled: android::CMT66xx::setPhyModeToEEProm(int) */
int _ZN7android7CMT66xx18setPhyModeToEEPromEi(void);

/* Symbol: _ZN7android7CMT66xx24nicCalculateChecksumByteEPvj */
/* Demangled: android::CMT66xx::nicCalculateChecksumByte(void*, unsigned int) */
int _ZN7android7CMT66xx24nicCalculateChecksumByteEPvj(void);

/* Symbol: _ZN7android7CMT66xx14HQA_SetAntSwapEi */
/* Demangled: android::CMT66xx::HQA_SetAntSwap(int) */
int _ZN7android7CMT66xx14HQA_SetAntSwapEi(void);

/* Symbol: _ZN7android7CMT66xx15updateALCOffsetEv */
/* Demangled: android::CMT66xx::updateALCOffset() */
int _ZN7android7CMT66xx15updateALCOffsetEv(void);

/* Symbol: _ZN7android7CMT66xx16isAntSwapSupportEv */
/* Demangled: android::CMT66xx::isAntSwapSupport() */
int _ZN7android7CMT66xx16isAntSwapSupportEv(void);

/* Symbol: _ZN7android7CMT66xx17HQA_SetRUSettingsEiiiiiiiiiii */
/* Demangled: android::CMT66xx::HQA_SetRUSettings(int, int, int, int, int, int, int, int, int, int, int) */
int _ZN7android7CMT66xx17HQA_SetRUSettingsEiiiiiiiiiii(void);

/* Symbol: _ZN7android7CMT66xx19setEEPromCKSUpdatedEv */
/* Demangled: android::CMT66xx::setEEPromCKSUpdated() */
int _ZN7android7CMT66xx19setEEPromCKSUpdatedEv(void);

/* Symbol: _ZN7android7CMT66xx21setCarrierSuppressionEiii */
/* Demangled: android::CMT66xx::setCarrierSuppression(int, int, int) */
int _ZN7android7CMT66xx21setCarrierSuppressionEiii(void);

/* Symbol: _ZN7android7CMT66xx23setXtalFreqTrimToEEPromEi */
/* Demangled: android::CMT66xx::setXtalFreqTrimToEEProm(int) */
int _ZN7android7CMT66xx23setXtalFreqTrimToEEPromEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBEM_WIFI_JNI_H */
