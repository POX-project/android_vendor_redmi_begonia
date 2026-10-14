/*
 * Reverse-Engineered ABI Specification for: libcam.hal3a.v3.nvram.50.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.hal3a.v3.nvram.50.so
 */

#ifndef BEGONIA_RE_LIBCAM_HAL3A_V3_NVRAM_50_H
#define BEGONIA_RE_LIBCAM_HAL3A_V3_NVRAM_50_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z17readDefaultNoLock21CAMERA_DATA_TYPE_ENUMi */
/* Demangled: readDefaultNoLock(CAMERA_DATA_TYPE_ENUM, int) */
int _Z17readDefaultNoLock21CAMERA_DATA_TYPE_ENUMi(void);

/* Symbol: _Z19checkDataVersionNew21CAMERA_DATA_TYPE_ENUMi */
/* Demangled: checkDataVersionNew(CAMERA_DATA_TYPE_ENUM, int) */
int _Z19checkDataVersionNew21CAMERA_DATA_TYPE_ENUMi(void);

/* Symbol: _Z19nvGetFlickerParaAlljiiiPPP17FLICKER_CUST_PARA */
/* Demangled: nvGetFlickerParaAll(unsigned int, int, int, int, FLICKER_CUST_PARA***) */
int _Z19nvGetFlickerParaAlljiiiPPP17FLICKER_CUST_PARA(void);

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _Z21nvbufUtil_getSensorIdiRi */
/* Demangled: nvbufUtil_getSensorId(int, int&) */
int _Z21nvbufUtil_getSensorIdiRi(void);

/* Symbol: _ZN8NvramDrv13readNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv */
/* Demangled: NvramDrv::readNvramData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*) */
int _ZN8NvramDrv13readNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv(void);

/* Symbol: _ZN8NvramDrv14writeNvramRealEPvii */
/* Demangled: NvramDrv::writeNvramReal(void*, int, int) */
int _ZN8NvramDrv14writeNvramRealEPvii(void);

/* Symbol: _Z19nvGetFlickerParaBinjiiiPv */
/* Demangled: nvGetFlickerParaBin(unsigned int, int, int, int, void*) */
int _Z19nvGetFlickerParaBinjiiiPv(void);

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _Z14getSenorArrInd30CAMERA_DUAL_CAMERA_SENSOR_ENUM */
/* Demangled: getSenorArrInd(CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
int _Z14getSenorArrInd30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMi */
/* Demangled: NvBufUtil::readDefault(CAMERA_DATA_TYPE_ENUM, int) */
int _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMi(void);

/* Symbol: _ZTV9NvBufUtil */
/* Demangled: vtable for NvBufUtil */
extern void* _ZTV9NvBufUtil;

/* Symbol: g_isVerNvBufRead */
/* Demangled: g_isVerNvBufRead */
extern void* g_isVerNvBufRead;

/* Symbol: gFilePath */
/* Demangled: gFilePath */
extern void* gFilePath;

/* Symbol: g_u4NvramDataSize */
/* Demangled: g_u4NvramDataSize */
extern void* g_u4NvramDataSize;

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: getInstance_NvBufUtil */
/* Demangled: getInstance_NvBufUtil */
int getInstance_NvBufUtil(void);

/* Symbol: _ZN8NvramDrvD0Ev */
/* Demangled: NvramDrv::~NvramDrv() */
int _ZN8NvramDrvD0Ev(void);

/* Symbol: bCustomInit */
/* Demangled: bCustomInit */
extern void* bCustomInit;

/* Symbol: _ZN12NvramDrvBase14createInstanceEv */
/* Demangled: NvramDrvBase::createInstance() */
int _ZN12NvramDrvBase14createInstanceEv(void);

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: _ZN9NvBufUtil6getBufE21CAMERA_DATA_TYPE_ENUMiRPv */
/* Demangled: NvBufUtil::getBuf(CAMERA_DATA_TYPE_ENUM, int, void*&) */
int _ZN9NvBufUtil6getBufE21CAMERA_DATA_TYPE_ENUMiRPv(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z15writeRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMi */
/* Demangled: writeRamVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int) */
int _Z15writeRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMi(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN8NvramDrv15destroyInstanceEv */
/* Demangled: NvramDrv::destroyInstance() */
int _ZN8NvramDrv15destroyInstanceEv(void);

/* Symbol: _ZN8NvramDrv9readNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm */
/* Demangled: NvramDrv::readNvram(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
int _ZN8NvramDrv9readNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm(void);

/* Symbol: gCreateDir */
/* Demangled: gCreateDir */
extern void* gCreateDir;

/* Symbol: _Z22checkSensorPowerStatus30CAMERA_DUAL_CAMERA_SENSOR_ENUMji */
/* Demangled: checkSensorPowerStatus(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned int, int) */
int _Z22checkSensorPowerStatus30CAMERA_DUAL_CAMERA_SENSOR_ENUMji(void);

/* Symbol: gFilePathD */
/* Demangled: gFilePathD */
extern void* gFilePathD;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN8NvramDrv14readMultiNvramEPviPiii */
/* Demangled: NvramDrv::readMultiNvram(void*, int, int*, int, int) */
int _ZN8NvramDrv14readMultiNvramEPviPiii(void);

/* Symbol: _ZN8NvramDrv15readDefaultDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPv */
/* Demangled: NvramDrv::readDefaultData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*) */
int _ZN8NvramDrv15readDefaultDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPv(void);

/* Symbol: _Z16nvGetFlickerParaj30CAMERA_DUAL_CAMERA_SENSOR_ENUMiPv */
/* Demangled: nvGetFlickerPara(unsigned int, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int, void*) */
int _Z16nvGetFlickerParaj30CAMERA_DUAL_CAMERA_SENSOR_ENUMiPv(void);

/* Symbol: _Z14getNvFileNameUiiPc */
/* Demangled: getNvFileNameU(int, int, char*) */
int _Z14getNvFileNameUiiPc(void);

/* Symbol: _ZN9NvBufUtil5writeE21CAMERA_DATA_TYPE_ENUMi */
/* Demangled: NvBufUtil::write(CAMERA_DATA_TYPE_ENUM, int) */
int _ZN9NvBufUtil5writeE21CAMERA_DATA_TYPE_ENUMi(void);

/* Symbol: _ZN8NvramDrv15writeMultiNvramEPviPiii */
/* Demangled: NvramDrv::writeMultiNvram(void*, int, int*, int, int) */
int _ZN8NvramDrv15writeMultiNvramEPviPiii(void);

/* Symbol: _ZN9NvBufUtil14setAndroidModeEi */
/* Demangled: NvBufUtil::setAndroidMode(int) */
int _ZN9NvBufUtil14setAndroidModeEi(void);

/* Symbol: _Z19writeVerNvramNoLockv */
/* Demangled: writeVerNvramNoLock() */
int _Z19writeVerNvramNoLockv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN8NvramDrvC1Ev */
/* Demangled: NvramDrv::NvramDrv() */
int _ZN8NvramDrvC1Ev(void);

/* Symbol: _ZN8NvramDrvD1Ev */
/* Demangled: NvramDrv::~NvramDrv() */
int _ZN8NvramDrvD1Ev(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN9NvBufUtilC1Ev */
/* Demangled: NvBufUtil::NvBufUtil() */
int _ZN9NvBufUtilC1Ev(void);

/* Symbol: g_sensorArrInd */
/* Demangled: g_sensorArrInd */
extern void* g_sensorArrInd;

/* Symbol: _Z13getNvFileNameiiPc */
/* Demangled: getNvFileName(int, int, char*) */
int _Z13getNvFileNameiiPc(void);

/* Symbol: _ZTV8NvramDrv */
/* Demangled: vtable for NvramDrv */
extern void* _ZTV8NvramDrv;

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _Z14readRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi */
/* Demangled: readRamVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int&) */
int _Z14readRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi(void);

/* Symbol: _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMiPv */
/* Demangled: NvBufUtil::readDefault(CAMERA_DATA_TYPE_ENUM, int, void*) */
int _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMiPv(void);

/* Symbol: _ZN9NvBufUtil22getBufAndReadNoDefaultE21CAMERA_DATA_TYPE_ENUMiRPvi */
/* Demangled: NvBufUtil::getBufAndReadNoDefault(CAMERA_DATA_TYPE_ENUM, int, void*&, int) */
int _ZN9NvBufUtil22getBufAndReadNoDefaultE21CAMERA_DATA_TYPE_ENUMiRPvi(void);

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z22writeRamUpdatedVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUM */
/* Demangled: writeRamUpdatedVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
int _Z22writeRamUpdatedVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void);

/* Symbol: _Z9getVerMemRPv */
/* Demangled: getVerMem(void*&) */
int _Z9getVerMemRPv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN8NvramDrv16checkDataVersionE21CAMERA_DATA_TYPE_ENUMPv */
/* Demangled: NvramDrv::checkDataVersion(CAMERA_DATA_TYPE_ENUM, void*) */
int _ZN8NvramDrv16checkDataVersionE21CAMERA_DATA_TYPE_ENUMPv(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: g_nvramSize */
/* Demangled: g_nvramSize */
extern void* g_nvramSize;

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZN9NvBufUtil22getSensorIdAndModuleIdEiiRiRj */
/* Demangled: NvBufUtil::getSensorIdAndModuleId(int, int, int&, unsigned int&) */
int _ZN9NvBufUtil22getSensorIdAndModuleIdEiiRiRj(void);

/* Symbol: _ZN8NvramDrv10writeNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm */
/* Demangled: NvramDrv::writeNvram(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
int _ZN8NvramDrv10writeNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm(void);

/* Symbol: _ZN8NvramDrv14writeNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv */
/* Demangled: NvramDrv::writeNvramData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*) */
int _ZN8NvramDrv14writeNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv(void);

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _Z14getNvramArrInd21CAMERA_DATA_TYPE_ENUM */
/* Demangled: getNvramArrInd(CAMERA_DATA_TYPE_ENUM) */
int _Z14getNvramArrInd21CAMERA_DATA_TYPE_ENUM(void);

/* Symbol: _ZN9NvBufUtil13getBufAndReadE21CAMERA_DATA_TYPE_ENUMiRPvi */
/* Demangled: NvBufUtil::getBufAndRead(CAMERA_DATA_TYPE_ENUM, int, void*&, int) */
int _ZN9NvBufUtil13getBufAndReadE21CAMERA_DATA_TYPE_ENUMiRPvi(void);

/* Symbol: gCreateDirD */
/* Demangled: gCreateDirD */
extern void* gCreateDirD;

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9NvBufUtil11getInstanceEv */
/* Demangled: NvBufUtil::getInstance() */
int _ZN9NvBufUtil11getInstanceEv(void);

/* Symbol: _Z21isXiaomiStableVersionv */
/* Demangled: isXiaomiStableVersion() */
int _Z21isXiaomiStableVersionv(void);

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _Z11getSensorID30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi */
/* Demangled: getSensorID(CAMERA_DUAL_CAMERA_SENSOR_ENUM, int&) */
int _Z11getSensorID30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi(void);

/* Symbol: _Z16writeNvramNoLock21CAMERA_DATA_TYPE_ENUMi */
/* Demangled: writeNvramNoLock(CAMERA_DATA_TYPE_ENUM, int) */
int _Z16writeNvramNoLock21CAMERA_DATA_TYPE_ENUMi(void);

/* Symbol: _ZN8NvramDrv12isNvramExistEi21CAMERA_DATA_TYPE_ENUM */
/* Demangled: NvramDrv::isNvramExist(int, CAMERA_DATA_TYPE_ENUM) */
int _ZN8NvramDrv12isNvramExistEi21CAMERA_DATA_TYPE_ENUM(void);

/* Symbol: _ZN8NvramDrv13readNvramRealEPvii */
/* Demangled: NvramDrv::readNvramReal(void*, int, int) */
int _ZN8NvramDrv13readNvramRealEPvii(void);

/* Symbol: _Z18readVerNvramNoLockRPv */
/* Demangled: readVerNvramNoLock(void*&) */
int _Z18readVerNvramNoLockRPv(void);

/* Symbol: _ZN8NvramDrv12readNvrameExE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvmi */
/* Demangled: NvramDrv::readNvrameEx(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long, int) */
int _ZN8NvramDrv12readNvrameExE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvmi(void);

/* Symbol: _ZN8NvramDrvC2Ev */
/* Demangled: NvramDrv::NvramDrv() */
int _ZN8NvramDrvC2Ev(void);

/* Symbol: _ZN8NvramDrvD2Ev */
/* Demangled: NvramDrv::~NvramDrv() */
int _ZN8NvramDrvD2Ev(void);

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: _Z6getMem21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRPv */
/* Demangled: getMem(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, void*&) */
int _Z6getMem21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRPv(void);

/* Symbol: _ZN9NvBufUtilC2Ev */
/* Demangled: NvBufUtil::NvBufUtil() */
int _ZN9NvBufUtilC2Ev(void);

/* Symbol: _ZN8NvramDrv13readNoDefaultE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPvm */
/* Demangled: NvramDrv::readNoDefault(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
int _ZN8NvramDrv13readNoDefaultE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPvm(void);

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: g_nvramArrInd */
/* Demangled: g_nvramArrInd */
extern void* g_nvramArrInd;

/* Symbol: _ZN8NvramDrv11getInstanceEv */
/* Demangled: NvramDrv::getInstance() */
int _ZN8NvramDrv11getInstanceEv(void);

/* Symbol: _ZN8NvramDrv22readModuleIdFromEEPROME30CAMERA_DUAL_CAMERA_SENSOR_ENUMii */
/* Demangled: NvramDrv::readModuleIdFromEEPROM(CAMERA_DUAL_CAMERA_SENSOR_ENUM, int, int) */
int _ZN8NvramDrv22readModuleIdFromEEPROME30CAMERA_DUAL_CAMERA_SENSOR_ENUMii(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HAL3A_V3_NVRAM_50_H */
