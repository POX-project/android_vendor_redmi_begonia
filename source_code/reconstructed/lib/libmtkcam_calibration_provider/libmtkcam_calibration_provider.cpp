/*
 * Reverse-Engineered Source for: libmtkcam_calibration_provider.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_calibration_provider"

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
#include "libmtkcam_calibration_provider.h"


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

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFrom3rdParty(NSCam::CalibrationResultInMTKFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider32__loadMTKCalibrationFrom3rdPartyEPN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider32__loadMTKCalibrationFrom3rdPartyEPN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::ICalibrationProvider-in-android::NSCalibrationProvider::CalibrationProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android21NSCalibrationProvider19CalibrationProviderE0_N5NSCam20ICalibrationProviderE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::ICalibrationProvider::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20ICalibrationProvider11getInstanceEi(void) {
    ALOGD("_ZN5NSCam20ICalibrationProvider11getInstanceEi() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromSetting(NSCam::CalibrationResultInMTKFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider31__loadMTKCalibrationFromSettingEPN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider31__loadMTKCalibrationFromSettingEPN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Exported Object: VTT for android::NSCalibrationProvider::CalibrationProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android21NSCalibrationProvider19CalibrationProviderE = NULL;

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::getCalibration(NSCam::ENUM_CALIBRATION_FORMAT, NSCam::CalibrationResult*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider14getCalibrationEN5NSCam23ENUM_CALIBRATION_FORMATEPNS2_17CalibrationResultE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider14getCalibrationEN5NSCam23ENUM_CALIBRATION_FORMATEPNS2_17CalibrationResultE() called");
    return 0;
}

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: CamCalDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv15destroyInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC2Ev(void) {
    ALOGD("_ZN9CamCalDrvC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibration(NSCam::CalibrationResultInMTKFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider20__loadMTKCalibrationEPN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider20__loadMTKCalibrationEPN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromFile(NSCam::CalibrationResultInMTKFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider28__loadMTKCalibrationFromFileEPN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider28__loadMTKCalibrationFromFileEPN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProviderD0Ev(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProviderD0Ev() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromEEPROM(NSCam::CalibrationResultInMTKFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider30__loadMTKCalibrationFromEEPROMEPN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider30__loadMTKCalibrationFromEEPROMEPN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProviderD1Ev(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProviderD1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::NSCalibrationConvertor::CalibrationConvertor>::operator=(android::NSCalibrationConvertor::CalibrationConvertor*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_22NSCalibrationConvertor20CalibrationConvertorEEaSEPS2_(void) {
    ALOGD("_ZN7android2spINS_22NSCalibrationConvertor20CalibrationConvertorEEaSEPS2_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD0Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProviderD2Ev(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProviderD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD1Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProvider6__initEi(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProvider6__initEi() called");
    return 0;
}

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Exported Object: vtable for android::NSCalibrationProvider::CalibrationProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android21NSCalibrationProvider19CalibrationProviderE = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationInGoogleFormat(NSCam::CalibrationResultInGoogleFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android21NSCalibrationProvider19CalibrationProvider34__loadMTKCalibrationInGoogleFormatEPN5NSCam31CalibrationResultInGoogleFormatE(void) {
    ALOGD("_ZNK7android21NSCalibrationProvider19CalibrationProvider34__loadMTKCalibrationInGoogleFormatEPN5NSCam31CalibrationResultInGoogleFormatE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::CalibrationProvider(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProviderC1Ei(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProviderC1Ei() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Demangled: android::NSCalibrationProvider::CalibrationProvider::CalibrationProvider(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21NSCalibrationProvider19CalibrationProviderC2Ei(void) {
    ALOGD("_ZN7android21NSCalibrationProvider19CalibrationProviderC2Ei() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}
