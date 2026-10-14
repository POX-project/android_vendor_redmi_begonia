/*
 * Reverse-Engineered Source for: libmtkcam_tuning_utils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_tuning_utils"

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
#include "libmtkcam_tuning_utils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::DumpP2ForDP(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11DumpP2ForDPEPKcS3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11DumpP2ForDPEPKcS3_i() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::TuningUtils::extract_by_SensorDev(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils20extract_by_SensorDevEPNS0_21FILE_DUMP_NAMING_HINTEi(void) {
    ALOGD("_ZN5NSCam11TuningUtils20extract_by_SensorDevEPNS0_21FILE_DUMP_NAMING_HINTEi() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_VSDOF_BUFFER(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils24genFileName_VSDOF_BUFFEREPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils24genFileName_VSDOF_BUFFEREPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_YNR_INT_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils23genFileName_YNR_INT_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils23genFileName_YNR_INT_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LCSO(int, char const*, NSCam::IImageBuffer*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule12getFile_LCSOEiPKcPNS_12IImageBufferES3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule12getFile_LCSOEiPKcPNS_12IImageBufferES3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::extract(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::FileReadRule() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRuleC2Ev(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRuleC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: NSCam::TuningUtils::FILE_DUMP_NAMING_HINT::FILE_DUMP_NAMING_HINT() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC2Ev(void) {
    ALOGD("_ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC2Ev() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_LSC2(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils16genFileName_LSC2EPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils16genFileName_LSC2EPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_RAW(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, NSCam::TuningUtils::RAW_PORT, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_RAWEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8RAW_PORTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_RAWEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8RAW_PORTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::isREADEnable(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule12isREADEnableEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule12isREADEnableEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_requestNo(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule17getFile_requestNoEPKci(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule17getFile_requestNoEPKci() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_LCSO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils16genFileName_LCSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils16genFileName_LCSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_BPC_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils19genFileName_BPC_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils19genFileName_BPC_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::DumpMfbForDP(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule12DumpMfbForDPEPKcS3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule12DumpMfbForDPEPKcS3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_P2TUNING(int, char const*, char*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule16getFile_P2TUNINGEiPKcPciS3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule16getFile_P2TUNINGEiPKcPciS3_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_RAW(int, char const*, NSCam::IImageBuffer*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11getFile_RAWEiPKcPNS_12IImageBufferES3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11getFile_RAWEiPKcPNS_12IImageBufferES3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::isDumpEnable(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule12isDumpEnableEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule12isDumpEnableEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::MakePrefix(char*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils10MakePrefixEPciiiii(void) {
    ALOGD("_ZN5NSCam11TuningUtils10MakePrefixEPciiiii() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_TUNING(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils18genFileName_TUNINGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils18genFileName_TUNINGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LSC(int, char const*, char*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11getFile_LSCEiPKcPciS3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11getFile_LSCEiPKcPciS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::getIspProfileName(NSIspTuning::EIspProfile_T) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils17getIspProfileNameEN11NSIspTuning13EIspProfile_TE(void) {
    ALOGD("_ZN5NSCam11TuningUtils17getIspProfileNameEN11NSIspTuning13EIspProfile_TE() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_JPG(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_JPGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_JPGEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_LTMSO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils17genFileName_LTMSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils17genFileName_LTMSOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_LSC(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_LSCEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_LSCEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_face_info(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils21genFileName_face_infoEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils21genFileName_face_infoEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_MFB(int, char const*, char*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11getFile_MFBEiPKcPciS3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11getFile_MFBEiPKcPciS3_() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_uniqueKey(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule17getFile_uniqueKeyEPKci(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule17getFile_uniqueKeyEPKci() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_WarpingRaw(int, char const*, NSCam::IImageBuffer*, char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule18getFile_WarpingRawEiPKcPNS_12IImageBufferES3_S3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule18getFile_WarpingRawEiPKcPNS_12IImageBufferES3_S3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_DCESO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils17genFileName_DCESOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils17genFileName_DCESOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_TSF(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_TSFEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_TSFEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_YNR_FD_TBL(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils22genFileName_YNR_FD_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils22genFileName_YNR_FD_TBLEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::extract_by_SensorOpenId(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils23extract_by_SensorOpenIdEPNS0_21FILE_DUMP_NAMING_HINTEi(void) {
    ALOGD("_ZN5NSCam11TuningUtils23extract_by_SensorOpenIdEPNS0_21FILE_DUMP_NAMING_HINTEi() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::extract(NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam11TuningUtils7extractEPNS0_21FILE_DUMP_NAMING_HINTEPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_LTM_CURVE(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils21genFileName_LTM_CURVEEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils21genFileName_LTM_CURVEEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_YUV(int, char const*, NSCam::IImageBuffer*, char const*, NSCam::TuningUtils::YUV_PORT, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11getFile_YUVEiPKcPNS_12IImageBufferES3_NS0_8YUV_PORTEi(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11getFile_YUVEiPKcPNS_12IImageBufferES3_NS0_8YUV_PORTEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFileCache>::operator=(android::sp<NSCam::IFileCache>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_RRZO(int, char const*, NSCam::IImageBuffer*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule12getFile_RRZOEiPKcPNS_12IImageBufferES3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule12getFile_RRZOEiPKcPNS_12IImageBufferES3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_YNR_MAP(int, char const*, NSCam::IImageBuffer*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule15getFile_YNR_MAPEiPKcPNS_12IImageBufferES3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule15getFile_YNR_MAPEiPKcPNS_12IImageBufferES3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::FileReadRule() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRuleC1Ev(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRuleC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FILE_DUMP_NAMING_HINT::FILE_DUMP_NAMING_HINT() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC1Ev(void) {
    ALOGD("_ZN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTC1Ev() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::on_device_dump_file_rename(int, char const*, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule26on_device_dump_file_renameEiPKcPNS0_21FILE_DUMP_NAMING_HINTES3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule26on_device_dump_file_renameEiPKcPNS0_21FILE_DUMP_NAMING_HINTES3_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_YUV(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, NSCam::TuningUtils::YUV_PORT, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_YUVEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8YUV_PORTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_YUVEPciPKNS0_21FILE_DUMP_NAMING_HINTENS0_8YUV_PORTEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_YNR_ALPHA_MAP(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils25genFileName_YNR_ALPHA_MAPEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils25genFileName_YNR_ALPHA_MAPEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::DumpP1ForDP(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule11DumpP1ForDPEPKcS3_i(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule11DumpP1ForDPEPKcS3_i() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LTMCURVE(int, char const*, char*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule16getFile_LTMCURVEEiPKcPciS3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule16getFile_LTMCURVEEiPKcPciS3_() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::FileReadRule::getFile_LPCNR_TUNING(int, char const*, char*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils12FileReadRule20getFile_LPCNR_TUNINGEiPKcPciS3_(void) {
    ALOGD("_ZN5NSCam11TuningUtils12FileReadRule20getFile_LPCNR_TUNINGEiPKcPciS3_() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::get_raw_stride(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils14get_raw_strideEPKci(void) {
    ALOGD("_ZN5NSCam11TuningUtils14get_raw_strideEPKci() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::TuningUtils::genFileName_HW_AAO(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils18genFileName_HW_AAOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils18genFileName_HW_AAOEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: NSCam::TuningUtils::genFileName_Reg(char*, int, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11TuningUtils15genFileName_RegEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc(void) {
    ALOGD("_ZN5NSCam11TuningUtils15genFileName_RegEPciPKNS0_21FILE_DUMP_NAMING_HINTEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
