/*
 * Reverse-Engineered Source for: libcam.hal3a.v3.nvram.50.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_hal3a_v3_nvram_50"

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
#include "libcam_hal3a_v3_nvram_50.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAM_CAL_DRV "/dev/CAM_CAL_DRV"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAM_CAL_DRV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAM_CAL_DRV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAM_CAL_DRV, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: readDefaultNoLock(CAMERA_DATA_TYPE_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _Z17readDefaultNoLock21CAMERA_DATA_TYPE_ENUMi(void) {
    ALOGD("_Z17readDefaultNoLock21CAMERA_DATA_TYPE_ENUMi() called");
    return 0;
}

/* Demangled: checkDataVersionNew(CAMERA_DATA_TYPE_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _Z19checkDataVersionNew21CAMERA_DATA_TYPE_ENUMi(void) {
    ALOGD("_Z19checkDataVersionNew21CAMERA_DATA_TYPE_ENUMi() called");
    return 0;
}

/* Demangled: nvGetFlickerParaAll(unsigned int, int, int, int, FLICKER_CUST_PARA***) */
extern "C" __attribute__((visibility("default"))) int _Z19nvGetFlickerParaAlljiiiPPP17FLICKER_CUST_PARA(void) {
    ALOGD("_Z19nvGetFlickerParaAlljiiiPPP17FLICKER_CUST_PARA() called");
    return 0;
}

/* Demangled: CamCalDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv15destroyInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC2Ev(void) {
    ALOGD("_ZN9CamCalDrvC2Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Demangled: nvbufUtil_getSensorId(int, int&) */
extern "C" __attribute__((visibility("default"))) int _Z21nvbufUtil_getSensorIdiRi(void) {
    ALOGD("_Z21nvbufUtil_getSensorIdiRi() called");
    return 0;
}

/* Demangled: NvramDrv::readNvramData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv13readNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv(void) {
    ALOGD("_ZN8NvramDrv13readNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: NvramDrv::writeNvramReal(void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv14writeNvramRealEPvii(void) {
    ALOGD("_ZN8NvramDrv14writeNvramRealEPvii() called");
    return 0;
}

/* Demangled: nvGetFlickerParaBin(unsigned int, int, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19nvGetFlickerParaBinjiiiPv(void) {
    ALOGD("_Z19nvGetFlickerParaBinjiiiPv() called");
    return 0;
}

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: getSenorArrInd(CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z14getSenorArrInd30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void) {
    ALOGD("_Z14getSenorArrInd30CAMERA_DUAL_CAMERA_SENSOR_ENUM() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: NvBufUtil::readDefault(CAMERA_DATA_TYPE_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMi(void) {
    ALOGD("_ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMi() called");
    return 0;
}

/* Exported Object: vtable for NvBufUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV9NvBufUtil = NULL;

/* Exported Object: g_isVerNvBufRead */
extern "C" __attribute__((visibility("default"))) void* g_isVerNvBufRead = NULL;

/* Exported Object: gFilePath */
extern "C" __attribute__((visibility("default"))) void* gFilePath = NULL;

/* Exported Object: g_u4NvramDataSize */
extern "C" __attribute__((visibility("default"))) void* g_u4NvramDataSize = NULL;

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: getInstance_NvBufUtil */
extern "C" __attribute__((visibility("default"))) int getInstance_NvBufUtil(void) {
    ALOGD("getInstance_NvBufUtil() called");
    return 0;
}

/* Demangled: NvramDrv::~NvramDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrvD0Ev(void) {
    ALOGD("_ZN8NvramDrvD0Ev() called");
    return 0;
}

/* Exported Object: bCustomInit */
extern "C" __attribute__((visibility("default"))) void* bCustomInit = NULL;

/* Demangled: NvramDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12NvramDrvBase14createInstanceEv(void) {
    ALOGD("_ZN12NvramDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Demangled: NvBufUtil::getBuf(CAMERA_DATA_TYPE_ENUM, int, void*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil6getBufE21CAMERA_DATA_TYPE_ENUMiRPv(void) {
    ALOGD("_ZN9NvBufUtil6getBufE21CAMERA_DATA_TYPE_ENUMiRPv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: writeRamVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _Z15writeRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMi(void) {
    ALOGD("_Z15writeRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMi() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NvramDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv15destroyInstanceEv(void) {
    ALOGD("_ZN8NvramDrv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NvramDrv::readNvram(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv9readNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm(void) {
    ALOGD("_ZN8NvramDrv9readNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm() called");
    return 0;
}

/* Exported Object: gCreateDir */
extern "C" __attribute__((visibility("default"))) void* gCreateDir = NULL;

/* Demangled: checkSensorPowerStatus(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22checkSensorPowerStatus30CAMERA_DUAL_CAMERA_SENSOR_ENUMji(void) {
    ALOGD("_Z22checkSensorPowerStatus30CAMERA_DUAL_CAMERA_SENSOR_ENUMji() called");
    return 0;
}

/* Exported Object: gFilePathD */
extern "C" __attribute__((visibility("default"))) void* gFilePathD = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NvramDrv::readMultiNvram(void*, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv14readMultiNvramEPviPiii(void) {
    ALOGD("_ZN8NvramDrv14readMultiNvramEPviPiii() called");
    return 0;
}

/* Demangled: NvramDrv::readDefaultData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv15readDefaultDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPv(void) {
    ALOGD("_ZN8NvramDrv15readDefaultDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: nvGetFlickerPara(unsigned int, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16nvGetFlickerParaj30CAMERA_DUAL_CAMERA_SENSOR_ENUMiPv(void) {
    ALOGD("_Z16nvGetFlickerParaj30CAMERA_DUAL_CAMERA_SENSOR_ENUMiPv() called");
    return 0;
}

/* Demangled: getNvFileNameU(int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z14getNvFileNameUiiPc(void) {
    ALOGD("_Z14getNvFileNameUiiPc() called");
    return 0;
}

/* Demangled: NvBufUtil::write(CAMERA_DATA_TYPE_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil5writeE21CAMERA_DATA_TYPE_ENUMi(void) {
    ALOGD("_ZN9NvBufUtil5writeE21CAMERA_DATA_TYPE_ENUMi() called");
    return 0;
}

/* Demangled: NvramDrv::writeMultiNvram(void*, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv15writeMultiNvramEPviPiii(void) {
    ALOGD("_ZN8NvramDrv15writeMultiNvramEPviPiii() called");
    return 0;
}

/* Demangled: NvBufUtil::setAndroidMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil14setAndroidModeEi(void) {
    ALOGD("_ZN9NvBufUtil14setAndroidModeEi() called");
    return 0;
}

/* Demangled: writeVerNvramNoLock() */
extern "C" __attribute__((visibility("default"))) int _Z19writeVerNvramNoLockv(void) {
    ALOGD("_Z19writeVerNvramNoLockv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NvramDrv::NvramDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrvC1Ev(void) {
    ALOGD("_ZN8NvramDrvC1Ev() called");
    return 0;
}

/* Demangled: NvramDrv::~NvramDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrvD1Ev(void) {
    ALOGD("_ZN8NvramDrvD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: NvBufUtil::NvBufUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtilC1Ev(void) {
    ALOGD("_ZN9NvBufUtilC1Ev() called");
    return 0;
}

/* Exported Object: g_sensorArrInd */
extern "C" __attribute__((visibility("default"))) void* g_sensorArrInd = NULL;

/* Demangled: getNvFileName(int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z13getNvFileNameiiPc(void) {
    ALOGD("_Z13getNvFileNameiiPc() called");
    return 0;
}

/* Exported Object: vtable for NvramDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV8NvramDrv = NULL;

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: readRamVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, int&) */
extern "C" __attribute__((visibility("default"))) int _Z14readRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi(void) {
    ALOGD("_Z14readRamVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi() called");
    return 0;
}

/* Demangled: NvBufUtil::readDefault(CAMERA_DATA_TYPE_ENUM, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMiPv(void) {
    ALOGD("_ZN9NvBufUtil11readDefaultE21CAMERA_DATA_TYPE_ENUMiPv() called");
    return 0;
}

/* Demangled: NvBufUtil::getBufAndReadNoDefault(CAMERA_DATA_TYPE_ENUM, int, void*&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil22getBufAndReadNoDefaultE21CAMERA_DATA_TYPE_ENUMiRPvi(void) {
    ALOGD("_ZN9NvBufUtil22getBufAndReadNoDefaultE21CAMERA_DATA_TYPE_ENUMiRPvi() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: writeRamUpdatedVersion(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z22writeRamUpdatedVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void) {
    ALOGD("_Z22writeRamUpdatedVersion21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUM() called");
    return 0;
}

/* Demangled: getVerMem(void*&) */
extern "C" __attribute__((visibility("default"))) int _Z9getVerMemRPv(void) {
    ALOGD("_Z9getVerMemRPv() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NvramDrv::checkDataVersion(CAMERA_DATA_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv16checkDataVersionE21CAMERA_DATA_TYPE_ENUMPv(void) {
    ALOGD("_ZN8NvramDrv16checkDataVersionE21CAMERA_DATA_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: g_nvramSize */
extern "C" __attribute__((visibility("default"))) void* g_nvramSize = NULL;

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Demangled: NvBufUtil::getSensorIdAndModuleId(int, int, int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil22getSensorIdAndModuleIdEiiRiRj(void) {
    ALOGD("_ZN9NvBufUtil22getSensorIdAndModuleIdEiiRiRj() called");
    return 0;
}

/* Demangled: NvramDrv::writeNvram(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv10writeNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm(void) {
    ALOGD("_ZN8NvramDrv10writeNvramE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvm() called");
    return 0;
}

/* Demangled: NvramDrv::writeNvramData(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv14writeNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv(void) {
    ALOGD("_ZN8NvramDrv14writeNvramDataE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Demangled: getNvramArrInd(CAMERA_DATA_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z14getNvramArrInd21CAMERA_DATA_TYPE_ENUM(void) {
    ALOGD("_Z14getNvramArrInd21CAMERA_DATA_TYPE_ENUM() called");
    return 0;
}

/* Demangled: NvBufUtil::getBufAndRead(CAMERA_DATA_TYPE_ENUM, int, void*&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil13getBufAndReadE21CAMERA_DATA_TYPE_ENUMiRPvi(void) {
    ALOGD("_ZN9NvBufUtil13getBufAndReadE21CAMERA_DATA_TYPE_ENUMiRPvi() called");
    return 0;
}

/* Exported Object: gCreateDirD */
extern "C" __attribute__((visibility("default"))) void* gCreateDirD = NULL;

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NvBufUtil::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtil11getInstanceEv(void) {
    ALOGD("_ZN9NvBufUtil11getInstanceEv() called");
    return 0;
}

/* Demangled: isXiaomiStableVersion() */
extern "C" __attribute__((visibility("default"))) int _Z21isXiaomiStableVersionv(void) {
    ALOGD("_Z21isXiaomiStableVersionv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: getSensorID(CAMERA_DUAL_CAMERA_SENSOR_ENUM, int&) */
extern "C" __attribute__((visibility("default"))) int _Z11getSensorID30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi(void) {
    ALOGD("_Z11getSensorID30CAMERA_DUAL_CAMERA_SENSOR_ENUMRi() called");
    return 0;
}

/* Demangled: writeNvramNoLock(CAMERA_DATA_TYPE_ENUM, int) */
extern "C" __attribute__((visibility("default"))) int _Z16writeNvramNoLock21CAMERA_DATA_TYPE_ENUMi(void) {
    ALOGD("_Z16writeNvramNoLock21CAMERA_DATA_TYPE_ENUMi() called");
    return 0;
}

/* Demangled: NvramDrv::isNvramExist(int, CAMERA_DATA_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv12isNvramExistEi21CAMERA_DATA_TYPE_ENUM(void) {
    ALOGD("_ZN8NvramDrv12isNvramExistEi21CAMERA_DATA_TYPE_ENUM() called");
    return 0;
}

/* Demangled: NvramDrv::readNvramReal(void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv13readNvramRealEPvii(void) {
    ALOGD("_ZN8NvramDrv13readNvramRealEPvii() called");
    return 0;
}

/* Demangled: readVerNvramNoLock(void*&) */
extern "C" __attribute__((visibility("default"))) int _Z18readVerNvramNoLockRPv(void) {
    ALOGD("_Z18readVerNvramNoLockRPv() called");
    return 0;
}

/* Demangled: NvramDrv::readNvrameEx(CAMERA_DUAL_CAMERA_SENSOR_ENUM, unsigned long, CAMERA_DATA_TYPE_ENUM, void*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv12readNvrameExE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvmi(void) {
    ALOGD("_ZN8NvramDrv12readNvrameExE30CAMERA_DUAL_CAMERA_SENSOR_ENUMm21CAMERA_DATA_TYPE_ENUMPvmi() called");
    return 0;
}

/* Demangled: NvramDrv::NvramDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrvC2Ev(void) {
    ALOGD("_ZN8NvramDrvC2Ev() called");
    return 0;
}

/* Demangled: NvramDrv::~NvramDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrvD2Ev(void) {
    ALOGD("_ZN8NvramDrvD2Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: getMem(CAMERA_DATA_TYPE_ENUM, CAMERA_DUAL_CAMERA_SENSOR_ENUM, void*&) */
extern "C" __attribute__((visibility("default"))) int _Z6getMem21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRPv(void) {
    ALOGD("_Z6getMem21CAMERA_DATA_TYPE_ENUM30CAMERA_DUAL_CAMERA_SENSOR_ENUMRPv() called");
    return 0;
}

/* Demangled: NvBufUtil::NvBufUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN9NvBufUtilC2Ev(void) {
    ALOGD("_ZN9NvBufUtilC2Ev() called");
    return 0;
}

/* Demangled: NvramDrv::readNoDefault(CAMERA_DUAL_CAMERA_SENSOR_ENUM, CAMERA_DATA_TYPE_ENUM, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv13readNoDefaultE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPvm(void) {
    ALOGD("_ZN8NvramDrv13readNoDefaultE30CAMERA_DUAL_CAMERA_SENSOR_ENUM21CAMERA_DATA_TYPE_ENUMPvm() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Exported Object: g_nvramArrInd */
extern "C" __attribute__((visibility("default"))) void* g_nvramArrInd = NULL;

/* Demangled: NvramDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv11getInstanceEv(void) {
    ALOGD("_ZN8NvramDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: NvramDrv::readModuleIdFromEEPROM(CAMERA_DUAL_CAMERA_SENSOR_ENUM, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8NvramDrv22readModuleIdFromEEPROME30CAMERA_DUAL_CAMERA_SENSOR_ENUMii(void) {
    ALOGD("_ZN8NvramDrv22readModuleIdFromEEPROME30CAMERA_DUAL_CAMERA_SENSOR_ENUMii() called");
    return 0;
}
