/*
 * Reverse-Engineered ABI Specification for: libmtkcam_calibration_provider.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_calibration_provider.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_CALIBRATION_PROVIDER_H
#define BEGONIA_RE_LIBMTKCAM_CALIBRATION_PROVIDER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider32__loadMTKCalibrationFrom3rdPartyEPN5NSCam28CalibrationResultInMTKFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFrom3rdParty(NSCam::CalibrationResultInMTKFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider32__loadMTKCalibrationFrom3rdPartyEPN5NSCam28CalibrationResultInMTKFormatE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZTCN7android21NSCalibrationProvider19CalibrationProviderE0_N5NSCam20ICalibrationProviderE */
/* Demangled: construction vtable for NSCam::ICalibrationProvider-in-android::NSCalibrationProvider::CalibrationProvider */
extern void* _ZTCN7android21NSCalibrationProvider19CalibrationProviderE0_N5NSCam20ICalibrationProviderE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZN5NSCam20ICalibrationProvider11getInstanceEi */
/* Demangled: NSCam::ICalibrationProvider::getInstance(int) */
int _ZN5NSCam20ICalibrationProvider11getInstanceEi(void);

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider31__loadMTKCalibrationFromSettingEPN5NSCam28CalibrationResultInMTKFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromSetting(NSCam::CalibrationResultInMTKFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider31__loadMTKCalibrationFromSettingEPN5NSCam28CalibrationResultInMTKFormatE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZTTN7android21NSCalibrationProvider19CalibrationProviderE */
/* Demangled: VTT for android::NSCalibrationProvider::CalibrationProvider */
extern void* _ZTTN7android21NSCalibrationProvider19CalibrationProviderE;

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider14getCalibrationEN5NSCam23ENUM_CALIBRATION_FORMATEPNS2_17CalibrationResultE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::getCalibration(NSCam::ENUM_CALIBRATION_FORMAT, NSCam::CalibrationResult*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider14getCalibrationEN5NSCam23ENUM_CALIBRATION_FORMATEPNS2_17CalibrationResultE(void);

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider20__loadMTKCalibrationEPN5NSCam28CalibrationResultInMTKFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibration(NSCam::CalibrationResultInMTKFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider20__loadMTKCalibrationEPN5NSCam28CalibrationResultInMTKFormatE(void);

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider28__loadMTKCalibrationFromFileEPN5NSCam28CalibrationResultInMTKFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromFile(NSCam::CalibrationResultInMTKFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider28__loadMTKCalibrationFromFileEPN5NSCam28CalibrationResultInMTKFormatE(void);

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProviderD0Ev */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
int _ZN7android21NSCalibrationProvider19CalibrationProviderD0Ev(void);

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider30__loadMTKCalibrationFromEEPROMEPN5NSCam28CalibrationResultInMTKFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationFromEEPROM(NSCam::CalibrationResultInMTKFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider30__loadMTKCalibrationFromEEPROMEPN5NSCam28CalibrationResultInMTKFormatE(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProviderD1Ev */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
int _ZN7android21NSCalibrationProvider19CalibrationProviderD1Ev(void);

/* Symbol: _ZN7android2spINS_22NSCalibrationConvertor20CalibrationConvertorEEaSEPS2_ */
/* Demangled: android::sp<android::NSCalibrationConvertor::CalibrationConvertor>::operator=(android::NSCalibrationConvertor::CalibrationConvertor*) */
int _ZN7android2spINS_22NSCalibrationConvertor20CalibrationConvertorEEaSEPS2_(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj(void);

/* Symbol: _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD0Ev */
/* Demangled: virtual thunk to android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
int _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD0Ev(void);

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProviderD2Ev */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
int _ZN7android21NSCalibrationProvider19CalibrationProviderD2Ev(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD1Ev */
/* Demangled: virtual thunk to android::NSCalibrationProvider::CalibrationProvider::~CalibrationProvider() */
int _ZTv0_n12_N7android21NSCalibrationProvider19CalibrationProviderD1Ev(void);

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProvider6__initEi */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__init(int) */
int _ZN7android21NSCalibrationProvider19CalibrationProvider6__initEi(void);

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZTVN7android21NSCalibrationProvider19CalibrationProviderE */
/* Demangled: vtable for android::NSCalibrationProvider::CalibrationProvider */
extern void* _ZTVN7android21NSCalibrationProvider19CalibrationProviderE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNK7android21NSCalibrationProvider19CalibrationProvider34__loadMTKCalibrationInGoogleFormatEPN5NSCam31CalibrationResultInGoogleFormatE */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::__loadMTKCalibrationInGoogleFormat(NSCam::CalibrationResultInGoogleFormat*) const */
int _ZNK7android21NSCalibrationProvider19CalibrationProvider34__loadMTKCalibrationInGoogleFormatEPN5NSCam31CalibrationResultInGoogleFormatE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProviderC1Ei */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::CalibrationProvider(int) */
int _ZN7android21NSCalibrationProvider19CalibrationProviderC1Ei(void);

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _ZN7android21NSCalibrationProvider19CalibrationProviderC2Ei */
/* Demangled: android::NSCalibrationProvider::CalibrationProvider::CalibrationProvider(int) */
int _ZN7android21NSCalibrationProvider19CalibrationProviderC2Ei(void);

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_CALIBRATION_PROVIDER_H */
