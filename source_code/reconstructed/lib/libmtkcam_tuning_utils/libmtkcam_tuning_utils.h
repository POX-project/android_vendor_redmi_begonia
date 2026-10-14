/*
 * Reverse-Engineered ABI Specification for: libmtkcam_tuning_utils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_tuning_utils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_TUNING_UTILS_H
#define BEGONIA_RE_LIBMTKCAM_TUNING_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11DumpP2ForDPEPKcS3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::DumpP2ForDP(char const*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule11DumpP2ForDPEPKcS3_i(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam11TuningUtils20extract_by_SensorDevEPNS0_21FILE_DUMP_NAMING_HINTEi */
/* Demangled: NSCam::TuningUtils::extract_by_SensorDev(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, int) */
int _ZN5NSCam11TuningUtils20extract_by_SensorDevEPNS0_21FILE_DUMP_NAMING_HINTEi(void);

/* Symbol: _ZN5NSCam11TuningUtils24genFileName_VSDOF_BUFFEREPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_VSDOF_BUFFER(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils24genFileName_VSDOF_BUFFEREPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils23genFileName_YNR_INT_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_YNR_INT_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils23genFileName_YNR_INT_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule12getFile_LCSOEiPKcPNS_12IImageBufferES3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LCSO(int, char const*, NSCam::IImageBuffer*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule12getFile_LCSOEiPKcPNS_12IImageBufferES3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_9IMetadataE */
/* Demangled: NSCam::TuningUtils::extract(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, NSCam::IMetadata const*) */
int _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRuleC2Ev */
/* Demangled: NSCam::TuningUtils::FileReadRule::FileReadRule() */
int _ZN5NSCam11TuningUtils12FileReadRuleC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC2Ev */
/* Demangled: NSCam::TuningUtils::FILE_DUMP_NAMING_HINT::FILE_DUMP_NAMING_HINT() */
int _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC2Ev(void);

/* Symbol: _ZN5NSCam11TuningUtils16genFileName_LSC2EPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_LSC2(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils16genFileName_LSC2EPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_RAWEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8RAW_PORTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_RAW(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, NSCam::TuningUtils::RAW_PORT, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_RAWEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8RAW_PORTEPKc(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule12isREADEnableEPKc */
/* Demangled: NSCam::TuningUtils::FileReadRule::isREADEnable(char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule12isREADEnableEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule17getFile_requestNoEPKci */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_requestNo(char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule17getFile_requestNoEPKci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN5NSCam11TuningUtils16genFileName_LCSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_LCSO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils16genFileName_LCSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils19genFileName_BPC_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_BPC_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils19genFileName_BPC_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule12DumpMfbForDPEPKcS3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::DumpMfbForDP(char const*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule12DumpMfbForDPEPKcS3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule16getFile_P2TUNINGEiPKcPciS3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_P2TUNING(int, char const*, char*, int, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule16getFile_P2TUNINGEiPKcPciS3_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11getFile_RAWEiPKcPNS_12IImageBufferES3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_RAW(int, char const*, NSCam::IImageBuffer*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule11getFile_RAWEiPKcPNS_12IImageBufferES3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule12isDumpEnableEPKc */
/* Demangled: NSCam::TuningUtils::FileReadRule::isDumpEnable(char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule12isDumpEnableEPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN5NSCam11TuningUtils10MakePrefixEPciiiii */
/* Demangled: NSCam::TuningUtils::MakePrefix(char*, int, int, int, int, int) */
int _ZN5NSCam11TuningUtils10MakePrefixEPciiiii(void);

/* Symbol: _ZN5NSCam11TuningUtils18genFileName_TUNINGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_TUNING(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils18genFileName_TUNINGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11getFile_LSCEiPKcPciS3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LSC(int, char const*, char*, int, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule11getFile_LSCEiPKcPciS3_(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5NSCam11TuningUtils17getIspProfileNameEN11NSIspTuning13EIspProfile_TE */
/* Demangled: NSCam::TuningUtils::getIspProfileName(NSIspTuning::EIspProfile_T) */
int _ZN5NSCam11TuningUtils17getIspProfileNameEN11NSIspTuning13EIspProfile_TE(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_JPGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_JPG(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_JPGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils17genFileName_LTMSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_LTMSO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils17genFileName_LTMSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_LSCEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_LSC(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_LSCEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZN5NSCam11TuningUtils21genFileName_face_infoEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_face_info(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils21genFileName_face_infoEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11getFile_MFBEiPKcPciS3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_MFB(int, char const*, char*, int, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule11getFile_MFBEiPKcPciS3_(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule17getFile_uniqueKeyEPKci */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_uniqueKey(char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule17getFile_uniqueKeyEPKci(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule18getFile_WarpingRawEiPKcPNS_12IImageBufferES3_S3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_WarpingRaw(int, char const*, NSCam::IImageBuffer*, char const*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule18getFile_WarpingRawEiPKcPNS_12IImageBufferES3_S3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils17genFileName_DCESOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_DCESO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils17genFileName_DCESOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_TSFEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_TSF(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_TSFEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils22genFileName_YNR_FD_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_YNR_FD_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils22genFileName_YNR_FD_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZN5NSCam11TuningUtils23extract_by_SensorOpenIdEPNS0_21FILE_DUMP_NAMING_HINTEi */
/* Demangled: NSCam::TuningUtils::extract_by_SensorOpenId(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, int) */
int _ZN5NSCam11TuningUtils23extract_by_SensorOpenIdEPNS0_21FILE_DUMP_NAMING_HINTEi(void);

/* Symbol: _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_12IImageBufferE */
/* Demangled: NSCam::TuningUtils::extract(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, NSCam::IImageBuffer const*) */
int _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam11TuningUtils21genFileName_LTM_CURVEEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_LTM_CURVE(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils21genFileName_LTM_CURVEEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11getFile_YUVEiPKcPNS_12IImageBufferES3_NS0_8YUV_PORTEi */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_YUV(int, char const*, NSCam::IImageBuffer*, char const*, NSCam::TuningUtils::YUV_PORT, int) */
int _ZN5NSCam11TuningUtils12FileReadRule11getFile_YUVEiPKcPNS_12IImageBufferES3_NS0_8YUV_PORTEi(void);

/* Symbol: _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_ */
/* Demangled: android::sp<NSCam::IFileCache>::operator=(android::sp<NSCam::IFileCache>&&) */
int _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule12getFile_RRZOEiPKcPNS_12IImageBufferES3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_RRZO(int, char const*, NSCam::IImageBuffer*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule12getFile_RRZOEiPKcPNS_12IImageBufferES3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule15getFile_YNR_MAPEiPKcPNS_12IImageBufferES3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_YNR_MAP(int, char const*, NSCam::IImageBuffer*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule15getFile_YNR_MAPEiPKcPNS_12IImageBufferES3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRuleC1Ev */
/* Demangled: NSCam::TuningUtils::FileReadRule::FileReadRule() */
int _ZN5NSCam11TuningUtils12FileReadRuleC1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC1Ev */
/* Demangled: NSCam::TuningUtils::FILE_DUMP_NAMING_HINT::FILE_DUMP_NAMING_HINT() */
int _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC1Ev(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule26on_device_dump_file_renameEiPKcPNS0_21FILE_DUMP_NAMING_HINTES3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::on_device_dump_file_rename(int, char const*, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule26on_device_dump_file_renameEiPKcPNS0_21FILE_DUMP_NAMING_HINTES3_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_YUVEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8YUV_PORTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_YUV(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, NSCam::TuningUtils::YUV_PORT, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_YUVEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8YUV_PORTEPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN5NSCam11TuningUtils25genFileName_YNR_ALPHA_MAPEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_YNR_ALPHA_MAP(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils25genFileName_YNR_ALPHA_MAPEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule11DumpP1ForDPEPKcS3_i */
/* Demangled: NSCam::TuningUtils::FileReadRule::DumpP1ForDP(char const*, char const*, int) */
int _ZN5NSCam11TuningUtils12FileReadRule11DumpP1ForDPEPKcS3_i(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule16getFile_LTMCURVEEiPKcPciS3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LTMCURVE(int, char const*, char*, int, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule16getFile_LTMCURVEEiPKcPciS3_(void);

/* Symbol: _ZN5NSCam11TuningUtils12FileReadRule20getFile_LPCNR_TUNINGEiPKcPciS3_ */
/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LPCNR_TUNING(int, char const*, char*, int, char const*) */
int _ZN5NSCam11TuningUtils12FileReadRule20getFile_LPCNR_TUNINGEiPKcPciS3_(void);

/* Symbol: _ZN5NSCam11TuningUtils14get_raw_strideEPKci */
/* Demangled: NSCam::TuningUtils::get_raw_stride(char const*, int) */
int _ZN5NSCam11TuningUtils14get_raw_strideEPKci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam11TuningUtils18genFileName_HW_AAOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_HW_AAO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils18genFileName_HW_AAOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: _ZN5NSCam11TuningUtils15genFileName_RegEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc */
/* Demangled: NSCam::TuningUtils::genFileName_Reg(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
int _ZN5NSCam11TuningUtils15genFileName_RegEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_TUNING_UTILS_H */
