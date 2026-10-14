/*
 * Reverse-Engineered Source for: libem_wifi_jni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libem_wifi_jni"

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
#include "libem_wifi_jni.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::os_program_init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15os_program_initEv(void) {
    ALOGD("_ZN7android15os_program_initEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::getWifiLogLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15getWifiLogLevelEi(void) {
    ALOGD("_ZN7android7CMT66xx15getWifiLogLevelEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setEEPRomFromFile(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17setEEPRomFromFileEPc(void) {
    ALOGD("_ZN7android7CMT66xx17setEEPRomFromFileEPc() called");
    return 0;
}

/* Demangled: android::CLocalOID::CLocalOID(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDC1EPKcS2_(void) {
    ALOGD("_ZN7android9CLocalOIDC1EPKcS2_() called");
    return 0;
}

/* Demangled: android::CMT66xx::SetATParam(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10SetATParamEjj(void) {
    ALOGD("_ZN7android7CMT66xx10SetATParamEjj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setChipType(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11setChipTypeEj(void) {
    ALOGD("_ZN7android7CMT66xx11setChipTypeEj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getSpecEEPRomSize(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17getSpecEEPRomSizeEPi(void) {
    ALOGD("_ZN7android7CMT66xx17getSpecEEPRomSizeEPi() called");
    return 0;
}

/* Demangled: android::CAdapter::setPnpPower(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter11setPnpPowerEi(void) {
    ALOGD("_ZN7android8CAdapter11setPnpPowerEi() called");
    return 0;
}

/* Demangled: android::CAdapter::getMACAddr(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter10getMACAddrEPh(void) {
    ALOGD("_ZN7android8CAdapter10getMACAddrEPh() called");
    return 0;
}

/* Demangled: android::CAdapter::getXtalTrimToCr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter15getXtalTrimToCrEPj(void) {
    ALOGD("_ZN7android8CAdapter15getXtalTrimToCrEPj() called");
    return 0;
}

/* Demangled: android::CAdapter::~CAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapterD2Ev(void) {
    ALOGD("_ZN7android8CAdapterD2Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::setThermoEn(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11setThermoEnEi(void) {
    ALOGD("_ZN7android7CMT66xx11setThermoEnEi() called");
    return 0;
}

/* Demangled: android::CAdapter::setLowPowerTest(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter15setLowPowerTestEi(void) {
    ALOGD("_ZN7android8CAdapter15setLowPowerTestEi() called");
    return 0;
}

/* Demangled: android::queryNdisOID(int, char const*, unsigned int, char*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12queryNdisOIDEiPKcjPcjPj(void) {
    ALOGD("_ZN7android12queryNdisOIDEiPKcjPcjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getChannel(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10getChannelEPi(void) {
    ALOGD("_ZN7android7CMT66xx10getChannelEPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::writeMCR32(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10writeMCR32Ejj(void) {
    ALOGD("_ZN7android7CMT66xx10writeMCR32Ejj() called");
    return 0;
}

/* Demangled: android::CMT66xx::restoreIOPin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12restoreIOPinEv(void) {
    ALOGD("_ZN7android7CMT66xx12restoreIOPinEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetRxPath(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13HQA_SetRxPathEii(void) {
    ALOGD("_ZN7android7CMT66xx13HQA_SetRxPathEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetAFactor(int, int*, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_GetAFactorEiPiS1_S1_S1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_GetAFactorEiPiS1_S1_S1_S1_() called");
    return 0;
}

/* Demangled: android::CAdapter::writeDPD32(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter10writeDPD32Ejj(void) {
    ALOGD("_ZN7android8CAdapter10writeDPD32Ejj() called");
    return 0;
}

/* Demangled: android::CAdapter::getSupportedCountries(android::COUNTRY_CODE*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter21getSupportedCountriesEPNS_12COUNTRY_CODEEi(void) {
    ALOGD("_ZN7android8CAdapter21getSupportedCountriesEPNS_12COUNTRY_CODEEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::getAlcInfo(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10getAlcInfoEPiS1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx10getAlcInfoEPiS1_S1_() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetPreamble(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15HQA_SetPreambleEi(void) {
    ALOGD("_ZN7android7CMT66xx15HQA_SetPreambleEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setTXMaxPowerToEEProm(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx21setTXMaxPowerToEEPromEiii(void) {
    ALOGD("_ZN7android7CMT66xx21setTXMaxPowerToEEPromEiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::getRadarStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14getRadarStatusEv(void) {
    ALOGD("_ZN7android7CMT66xx14getRadarStatusEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetChipCapability(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx21HQA_GetChipCapabilityEPi(void) {
    ALOGD("_ZN7android7CMT66xx21HQA_GetChipCapabilityEPi() called");
    return 0;
}

/* Demangled: android::CAdapter::getPacketTxStatusEx(unsigned int*, unsigned int*, unsigned short*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter19getPacketTxStatusExEPjS1_PtPhS3_(void) {
    ALOGD("_ZN7android8CAdapter19getPacketTxStatusExEPjS1_PtPhS3_() called");
    return 0;
}

/* Demangled: android::setNdisOID(int, char const*, unsigned int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10setNdisOIDEiPKcjPcj(void) {
    ALOGD("_ZN7android10setNdisOIDEiPKcjPcj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getRFICType() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11getRFICTypeEv(void) {
    ALOGD("_ZN7android7CMT66xx11getRFICTypeEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::getDPDLength(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12getDPDLengthEPi(void) {
    ALOGD("_ZN7android7CMT66xx12getDPDLengthEPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setDPDFromFile(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14setDPDFromFileEPc(void) {
    ALOGD("_ZN7android7CMT66xx14setDPDFromFileEPc() called");
    return 0;
}

/* Demangled: android::CAdapter::getSupportChannelList(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter21getSupportChannelListEPj(void) {
    ALOGD("_ZN7android8CAdapter21getSupportChannelListEPj() called");
    return 0;
}

/* Demangled: android::CAdapter::~CAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapterD0Ev(void) {
    ALOGD("_ZN7android8CAdapterD0Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::getEEPRomSize(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13getEEPRomSizeEPi(void) {
    ALOGD("_ZN7android7CMT66xx13getEEPRomSizeEPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::queryThermoInfo(int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15queryThermoInfoEPiPj(void) {
    ALOGD("_ZN7android7CMT66xx15queryThermoInfoEPiPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCContinuousTX(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx20HQA_DBDCContinuousTXEiiiiiiii(void) {
    ALOGD("_ZN7android7CMT66xx20HQA_DBDCContinuousTXEiiiiiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::GetATParam(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10GetATParamEjPj(void) {
    ALOGD("_ZN7android7CMT66xx10GetATParamEjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::writeDPD32(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10writeDPD32Ejj(void) {
    ALOGD("_ZN7android7CMT66xx10writeDPD32Ejj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setNormalMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13setNormalModeEv(void) {
    ALOGD("_ZN7android7CMT66xx13setNormalModeEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCStartTX(int, int, int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15HQA_DBDCStartTXEiiiiiiiiiii(void) {
    ALOGD("_ZN7android7CMT66xx15HQA_DBDCStartTXEiiiiiiiiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::getAlcSlopeRatio(int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16getAlcSlopeRatioEPiS1_S1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx16getAlcSlopeRatioEPiS1_S1_S1_() called");
    return 0;
}

/* Demangled: android::CMT66xx::testIOPin(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx9testIOPinEj(void) {
    ALOGD("_ZN7android7CMT66xx9testIOPinEj() called");
    return 0;
}

/* Demangled: JNI_OnLoad */
extern "C" __attribute__((visibility("default"))) int JNI_OnLoad(void) {
    ALOGD("JNI_OnLoad() called");
    return 0;
}

/* Demangled: android::CAdapter::readDPD32(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter9readDPD32EjPj(void) {
    ALOGD("_ZN7android8CAdapter9readDPD32EjPj() called");
    return 0;
}

/* Demangled: android::CLocalOID::GetChipID(unsigned int&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOID9GetChipIDERjPKc(void) {
    ALOGD("_ZN7android9CLocalOID9GetChipIDERjPKc() called");
    return 0;
}

/* Demangled: android::CMT66xx::getXtalTrimToCr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15getXtalTrimToCrEPj(void) {
    ALOGD("_ZN7android7CMT66xx15getXtalTrimToCrEPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setTXMaxPowerToEEPromEx(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx23setTXMaxPowerToEEPromExEiiiii(void) {
    ALOGD("_ZN7android7CMT66xx23setTXMaxPowerToEEPromExEiiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCStopTX(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_DBDCStopTXEi(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_DBDCStopTXEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetTxPower(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_GetTxPowerEii(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_GetTxPowerEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetBandMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15HQA_SetBandModeEi(void) {
    ALOGD("_ZN7android7CMT66xx15HQA_SetBandModeEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setWifiLogLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15setWifiLogLevelEii(void) {
    ALOGD("_ZN7android7CMT66xx15setWifiLogLevelEii() called");
    return 0;
}

/* Demangled: android::CLocalOID::CLocalOID(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDC2EPKcS2_(void) {
    ALOGD("_ZN7android9CLocalOIDC2EPKcS2_() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCTXTone(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_DBDCTXToneEiiii(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_DBDCTXToneEiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setOutputPower(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14setOutputPowerEiii(void) {
    ALOGD("_ZN7android7CMT66xx14setOutputPowerEiii() called");
    return 0;
}

/* Demangled: android::CAdapter::queryOID(unsigned int, char*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter8queryOIDEjPcjPj(void) {
    ALOGD("_ZN7android8CAdapter8queryOIDEjPcjPj() called");
    return 0;
}

/* Demangled: android::CLocalOID::~CLocalOID() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDD1Ev(void) {
    ALOGD("_ZN7android9CLocalOIDD1Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::writeBBCR8(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10writeBBCR8Ejj(void) {
    ALOGD("_ZN7android7CMT66xx10writeBBCR8Ejj() called");
    return 0;
}

/* Demangled: android::CMT66xx::testInputPin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12testInputPinEii(void) {
    ALOGD("_ZN7android7CMT66xx12testInputPinEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::readTxPowerFromEEPromEx(int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx23readTxPowerFromEEPromExEiiPiS1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx23readTxPowerFromEEPromExEiiPiS1_S1_() called");
    return 0;
}

/* Demangled: android::CAdapter::ReadDPDParaFromFile(char*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter19ReadDPDParaFromFileEPcPji(void) {
    ALOGD("_ZN7android8CAdapter19ReadDPDParaFromFileEPcPji() called");
    return 0;
}

/* Demangled: android::CAdapter::ReadEepDataFromFile(char*, unsigned short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter19ReadEepDataFromFileEPcPti(void) {
    ALOGD("_ZN7android8CAdapter19ReadEepDataFromFileEPcPti() called");
    return 0;
}

/* Demangled: android::CMT66xx::getEEPRomVersion(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16getEEPRomVersionEPi(void) {
    ALOGD("_ZN7android7CMT66xx16getEEPRomVersionEPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::testLoopD4toD15(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15testLoopD4toD15EjPj(void) {
    ALOGD("_ZN7android7CMT66xx15testLoopD4toD15EjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getTxRate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx9getTxRateEii(void) {
    ALOGD("_ZN7android7CMT66xx9getTxRateEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetTxPowerExt(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17HQA_SetTxPowerExtEiiiii(void) {
    ALOGD("_ZN7android7CMT66xx17HQA_SetTxPowerExtEiiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setAlcInfoToEeprom(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18setAlcInfoToEepromEii(void) {
    ALOGD("_ZN7android7CMT66xx18setAlcInfoToEepromEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setTxAnt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx8setTxAntEi(void) {
    ALOGD("_ZN7android7CMT66xx8setTxAntEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::readMCR32(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx9readMCR32EjPj(void) {
    ALOGD("_ZN7android7CMT66xx9readMCR32EjPj() called");
    return 0;
}

/* Demangled: register_com_mediatek_engineermode_wifi_EMWifi(_JNIEnv*) */
extern "C" __attribute__((visibility("default"))) int _Z46register_com_mediatek_engineermode_wifi_EMWifiP7_JNIEnv(void) {
    ALOGD("_Z46register_com_mediatek_engineermode_wifi_EMWifiP7_JNIEnv() called");
    return 0;
}

/* Demangled: android::CAdapter::getDPDLength(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter12getDPDLengthEPi(void) {
    ALOGD("_ZN7android8CAdapter12getDPDLengthEPi() called");
    return 0;
}

/* Demangled: android::CAdapter::getChannelBand(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter14getChannelBandEiPiS1_(void) {
    ALOGD("_ZN7android8CAdapter14getChannelBandEiPiS1_() called");
    return 0;
}

/* Demangled: android::CMT66xx::setTestMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11setTestModeEv(void) {
    ALOGD("_ZN7android7CMT66xx11setTestModeEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::isWifiLogUiEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17isWifiLogUiEnableEi(void) {
    ALOGD("_ZN7android7CMT66xx17isWifiLogUiEnableEi() called");
    return 0;
}

/* Demangled: android::CAdapter::eepromReadByteStr(unsigned int, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter17eepromReadByteStrEjjPc(void) {
    ALOGD("_ZN7android8CAdapter17eepromReadByteStrEjjPc() called");
    return 0;
}

/* Demangled: android::CAdapter::getChannelList(unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter14getChannelListEPji(void) {
    ALOGD("_ZN7android8CAdapter14getChannelListEPji() called");
    return 0;
}

/* Demangled: android::CAdapter::setOID(unsigned int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter6setOIDEjPcj(void) {
    ALOGD("_ZN7android8CAdapter6setOIDEjPcj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setEEPRomSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13setEEPRomSizeEi(void) {
    ALOGD("_ZN7android7CMT66xx13setEEPRomSizeEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetWlanCfgEm(int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16HQA_GetWlanCfgEmEPiPc(void) {
    ALOGD("_ZN7android7CMT66xx16HQA_GetWlanCfgEmEPiPc() called");
    return 0;
}

/* Demangled: android::CLocalOID::queryOID(android::CAdapter*, unsigned int, char*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOID8queryOIDEPNS_8CAdapterEjPcjPj(void) {
    ALOGD("_ZN7android9CLocalOID8queryOIDEPNS_8CAdapterEjPcjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getDACOffset(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12getDACOffsetEPt(void) {
    ALOGD("_ZN7android7CMT66xx12getDACOffsetEPt() called");
    return 0;
}

/* Demangled: android::CMT66xx::getPacketRxStatus(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17getPacketRxStatusEPiS1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx17getPacketRxStatusEPiS1_S1_() called");
    return 0;
}

/* Demangled: android::CAdapter::~CAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapterD1Ev(void) {
    ALOGD("_ZN7android8CAdapterD1Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::setStandBy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10setStandByEv(void) {
    ALOGD("_ZN7android7CMT66xx10setStandByEv() called");
    return 0;
}

/* Demangled: android::CAdapter::eepromWriteByteStr(unsigned int, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter18eepromWriteByteStrEjjPc(void) {
    ALOGD("_ZN7android8CAdapter18eepromWriteByteStrEjjPc() called");
    return 0;
}

/* Demangled: android::CLocalOID::setOID(android::CAdapter*, unsigned int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOID6setOIDEPNS_8CAdapterEjPcj(void) {
    ALOGD("_ZN7android9CLocalOID6setOIDEPNS_8CAdapterEjPcj() called");
    return 0;
}

/* Demangled: android::CLocalOID::CLocalOID(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDC2EPKc(void) {
    ALOGD("_ZN7android9CLocalOIDC2EPKc() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11HQA_SetRateEi(void) {
    ALOGD("_ZN7android7CMT66xx11HQA_SetRateEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setLocalFrequecy(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16setLocalFrequecyEii(void) {
    ALOGD("_ZN7android7CMT66xx16setLocalFrequecyEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCSetChannel(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18HQA_DBDCSetChannelEiiiiiii(void) {
    ALOGD("_ZN7android7CMT66xx18HQA_DBDCSetChannelEiiiiiii() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: android::CAdapter::getSupportedRates(unsigned short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter17getSupportedRatesEPti(void) {
    ALOGD("_ZN7android8CAdapter17getSupportedRatesEPti() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetTxInfo(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13HQA_GetTxInfoEiPi(void) {
    ALOGD("_ZN7android7CMT66xx13HQA_GetTxInfoEiPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::readTxPowerFromEEProm(int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx21readTxPowerFromEEPromEiiPii(void) {
    ALOGD("_ZN7android7CMT66xx21readTxPowerFromEEPromEiiPii() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::CAdapter::CAdapter(char const*, char const*, android::COID*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapterC2EPKcS2_PNS_4COIDES2_j(void) {
    ALOGD("_ZN7android8CAdapterC2EPKcS2_PNS_4COIDES2_j() called");
    return 0;
}

/* Exported Object: vtable for android::CLocalOID */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9CLocalOIDE = NULL;

/* Demangled: android::CMT66xx::readEEPRom16(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12readEEPRom16EjPj(void) {
    ALOGD("_ZN7android7CMT66xx12readEEPRom16EjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::getEEPRomVersion_() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17getEEPRomVersion_Ev(void) {
    ALOGD("_ZN7android7CMT66xx17getEEPRomVersion_Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::setRcpiOffsetToEEProm(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx21setRcpiOffsetToEEPromEii(void) {
    ALOGD("_ZN7android7CMT66xx21setRcpiOffsetToEEPromEii() called");
    return 0;
}

/* Demangled: android::CLocalOID::CLocalOID(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDC1EPKc(void) {
    ALOGD("_ZN7android9CLocalOIDC1EPKc() called");
    return 0;
}

/* Demangled: android::CMT66xx::readBBCR8(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx9readBBCR8EjPj(void) {
    ALOGD("_ZN7android7CMT66xx9readBBCR8EjPj() called");
    return 0;
}

/* Demangled: android::CAdapter::sw_cmd(int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter6sw_cmdEijPj(void) {
    ALOGD("_ZN7android8CAdapter6sw_cmdEijPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setOutputPin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx12setOutputPinEii(void) {
    ALOGD("_ZN7android7CMT66xx12setOutputPinEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCStopRX(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_DBDCStopRXEi(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_DBDCStopRXEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::findMaxPowerByteOffset(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx22findMaxPowerByteOffsetEiii(void) {
    ALOGD("_ZN7android7CMT66xx22findMaxPowerByteOffsetEiii() called");
    return 0;
}

/* Demangled: android::CAdapter::getFwManifestVersion(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter20getFwManifestVersionEPc(void) {
    ALOGD("_ZN7android8CAdapter20getFwManifestVersionEPc() called");
    return 0;
}

/* Demangled: android::CAdapter::setDPDFromFile(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter14setDPDFromFileEPc(void) {
    ALOGD("_ZN7android8CAdapter14setDPDFromFileEPc() called");
    return 0;
}

/* Demangled: android::CLocalOID::~CLocalOID() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDD2Ev(void) {
    ALOGD("_ZN7android9CLocalOIDD2Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::getChannelList(unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14getChannelListEPji(void) {
    ALOGD("_ZN7android7CMT66xx14getChannelListEPji() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetAntSwapCapability(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx24HQA_GetAntSwapCapabilityEPi(void) {
    ALOGD("_ZN7android7CMT66xx24HQA_GetAntSwapCapabilityEPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::readDPD32(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx9readDPD32EjPj(void) {
    ALOGD("_ZN7android7CMT66xx9readDPD32EjPj() called");
    return 0;
}

/* Demangled: android::CAdapter::setPowerManagementState(android::POWER_MANAGEMENT_STATE) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter23setPowerManagementStateENS_22POWER_MANAGEMENT_STATEE(void) {
    ALOGD("_ZN7android8CAdapter23setPowerManagementStateENS_22POWER_MANAGEMENT_STATEE() called");
    return 0;
}

/* Demangled: android::CMT66xx::setChannel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10setChannelEi(void) {
    ALOGD("_ZN7android7CMT66xx10setChannelEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::writeEEPRom16(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13writeEEPRom16Ejj(void) {
    ALOGD("_ZN7android7CMT66xx13writeEEPRom16Ejj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setPPMCRAndSCR() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14setPPMCRAndSCREv(void) {
    ALOGD("_ZN7android7CMT66xx14setPPMCRAndSCREv() called");
    return 0;
}

/* Demangled: android::CMT66xx::setXtalTrimToCr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15setXtalTrimToCrEj(void) {
    ALOGD("_ZN7android7CMT66xx15setXtalTrimToCrEj() called");
    return 0;
}

/* Demangled: android::CMT66xx::readBBCRStatistic(unsigned short*, unsigned short*, unsigned short*, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17readBBCRStatisticEPtS1_S1_S1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx17readBBCRStatisticEPtS1_S1_S1_S1_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::CMT66xx::HQA_SetTxPath(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx13HQA_SetTxPathEii(void) {
    ALOGD("_ZN7android7CMT66xx13HQA_SetTxPathEii() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_GetRXStatisticsAllExt(int, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx25HQA_GetRXStatisticsAllExtEiPiS1_S1_S1_(void) {
    ALOGD("_ZN7android7CMT66xx25HQA_GetRXStatisticsAllExtEiPiS1_S1_S1_() called");
    return 0;
}

/* Exported Object: g_mutex */
extern "C" __attribute__((visibility("default"))) void* g_mutex = NULL;

/* Demangled: android::CMT66xx::getInputPin(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11getInputPinEiPi(void) {
    ALOGD("_ZN7android7CMT66xx11getInputPinEiPi() called");
    return 0;
}

/* Demangled: android::CMT66xx::readSpecEEPRom16(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16readSpecEEPRom16EjPj(void) {
    ALOGD("_ZN7android7CMT66xx16readSpecEEPRom16EjPj() called");
    return 0;
}

/* Demangled: android::CMT66xx::setCountryToEEProm(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18setCountryToEEPromEPh(void) {
    ALOGD("_ZN7android7CMT66xx18setCountryToEEPromEPh() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCSetTXContent(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx20HQA_DBDCSetTXContentEii(void) {
    ALOGD("_ZN7android7CMT66xx20HQA_DBDCSetTXContentEii() called");
    return 0;
}

/* Exported Object: vtable for android::CMT66xx */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7CMT66xxE = NULL;

/* Demangled: android::CAdapter::getOperatingCountry(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter19getOperatingCountryEPc(void) {
    ALOGD("_ZN7android8CAdapter19getOperatingCountryEPc() called");
    return 0;
}

/* Demangled: android::wifi_init_iface(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15wifi_init_ifaceEPKc(void) {
    ALOGD("_ZN7android15wifi_init_ifaceEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::CAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8CAdapterE = NULL;

/* Demangled: android::CLocalOID::~CLocalOID() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CLocalOIDD0Ev(void) {
    ALOGD("_ZN7android9CLocalOIDD0Ev() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetNss(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx10HQA_SetNssEi(void) {
    ALOGD("_ZN7android7CMT66xx10HQA_SetNssEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::setPacketRx(int, android::RX_ANT_SEL) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx11setPacketRxEiNS_10RX_ANT_SELE(void) {
    ALOGD("_ZN7android7CMT66xx11setPacketRxEiNS_10RX_ANT_SELE() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetWlanCfgEm(int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16HQA_SetWlanCfgEmEiPc(void) {
    ALOGD("_ZN7android7CMT66xx16HQA_SetWlanCfgEmEiPc() called");
    return 0;
}

/* Demangled: android::CMT66xx::setDACOffsetToEEProm(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx20setDACOffsetToEEPromEt(void) {
    ALOGD("_ZN7android7CMT66xx20setDACOffsetToEEPromEt() called");
    return 0;
}

/* Demangled: android::CMT66xx::setAlcSlopeRatioToEeprom(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx24setAlcSlopeRatioToEepromEiiii(void) {
    ALOGD("_ZN7android7CMT66xx24setAlcSlopeRatioToEepromEiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setAnritsu8860bTestSupportEn(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx28setAnritsu8860bTestSupportEnEi(void) {
    ALOGD("_ZN7android7CMT66xx28setAnritsu8860bTestSupportEnEi() called");
    return 0;
}

/* Demangled: android::CAdapter::setOperatingCountry(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter19setOperatingCountryEPc(void) {
    ALOGD("_ZN7android8CAdapter19setOperatingCountryEPc() called");
    return 0;
}

/* Demangled: android::CAdapter::getLowPowerTestResult(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8CAdapter21getLowPowerTestResultEPiS1_(void) {
    ALOGD("_ZN7android8CAdapter21getLowPowerTestResultEPiS1_() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_DBDCStartRXExt(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18HQA_DBDCStartRXExtEiiii(void) {
    ALOGD("_ZN7android7CMT66xx18HQA_DBDCStartRXExtEiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setMACAddrToEEProm(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18setMACAddrToEEPromEPh(void) {
    ALOGD("_ZN7android7CMT66xx18setMACAddrToEEPromEPh() called");
    return 0;
}

/* Demangled: android::CMT66xx::setPhyModeToEEProm(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx18setPhyModeToEEPromEi(void) {
    ALOGD("_ZN7android7CMT66xx18setPhyModeToEEPromEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::nicCalculateChecksumByte(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx24nicCalculateChecksumByteEPvj(void) {
    ALOGD("_ZN7android7CMT66xx24nicCalculateChecksumByteEPvj() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetAntSwap(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx14HQA_SetAntSwapEi(void) {
    ALOGD("_ZN7android7CMT66xx14HQA_SetAntSwapEi() called");
    return 0;
}

/* Demangled: android::CMT66xx::updateALCOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx15updateALCOffsetEv(void) {
    ALOGD("_ZN7android7CMT66xx15updateALCOffsetEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::isAntSwapSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx16isAntSwapSupportEv(void) {
    ALOGD("_ZN7android7CMT66xx16isAntSwapSupportEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::HQA_SetRUSettings(int, int, int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx17HQA_SetRUSettingsEiiiiiiiiiii(void) {
    ALOGD("_ZN7android7CMT66xx17HQA_SetRUSettingsEiiiiiiiiiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setEEPromCKSUpdated() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx19setEEPromCKSUpdatedEv(void) {
    ALOGD("_ZN7android7CMT66xx19setEEPromCKSUpdatedEv() called");
    return 0;
}

/* Demangled: android::CMT66xx::setCarrierSuppression(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx21setCarrierSuppressionEiii(void) {
    ALOGD("_ZN7android7CMT66xx21setCarrierSuppressionEiii() called");
    return 0;
}

/* Demangled: android::CMT66xx::setXtalFreqTrimToEEProm(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7CMT66xx23setXtalFreqTrimToEEPromEi(void) {
    ALOGD("_ZN7android7CMT66xx23setXtalFreqTrimToEEPromEi() called");
    return 0;
}
