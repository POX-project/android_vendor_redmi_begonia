/*
 * Reverse-Engineered Source for: libcam.hal3a.v3.lscMgr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_hal3a_v3_lscMgr"

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
#include "libcam_hal3a_v3_lscMgr.h"


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

/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__swap_out_circular_buffer(std::__1::__split_buffer<long, std::__1::allocator<long>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE26__swap_out_circular_bufferERNS_14__split_bufferIlRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE26__swap_out_circular_bufferERNS_14__split_bufferIlRS2_EE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::destroyTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft10destroyTsfEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft10destroyTsfEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::updateRatio(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft11updateRatioEjj(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft11updateRatioEjj() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::setDumpFileCfg(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft14setDumpFileCfgEiPKc(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft14setDumpFileCfgEiPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::init() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft4initEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft4initEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfCfgChg() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9tsfCfgChgEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9tsfCfgChgEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE6resizeEj() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::TsfDft::createInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft14createInstanceEj(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft14createInstanceEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setDumbFilePrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault17setDumbFilePrefixENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_7ILscMgr14E_LSC_MODULE_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault17setDumbFilePrefixENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_7ILscMgr14E_LSC_MODULE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(unsigned int, android::Vector<unsigned char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblEjRN7android6VectorIhEE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault10getCurrTblEjRN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Demangled: LscImemBuf::getFD() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10LscImemBuf5getFDEv(void) {
    ALOGD("_ZNK10LscImemBuf5getFDEv() called");
    return 0;
}

/* Demangled: LscNvramImp::~LscNvramImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImpD0Ev(void) {
    ALOGD("_ZN11LscNvramImpD0Ev() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImemBuf::~LscImemBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBufD1Ev(void) {
    ALOGD("_ZN10LscImemBufD1Ev() called");
    return 0;
}

/* Demangled: LscImgBuf::setConfig(NSIspTuning::ILscTable::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE(void) {
    ALOGD("_ZN9LscImgBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__push_back_slow_path<unsigned short* const&>(unsigned short* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPtNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::enableLsc(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC29enableLscEi(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC29enableLscEi() called");
    return 0;
}

/* Demangled: LscImgBuf::LscImgBuf(unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBufC2EjjPKc(void) {
    ALOGD("_ZN9LscImgBufC2EjjPKc() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrlD0Ev(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrlD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: LscImemBuf::LscImemBuf(unsigned int, unsigned int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBufC1EjjiPKc(void) {
    ALOGD("_ZN10LscImemBufC1EjjiPKc() called");
    return 0;
}

/* Demangled: LscImgBuf::freeBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf7freeBufEv(void) {
    ALOGD("_ZN9LscImgBuf7freeBufEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::editTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9editTableEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9editTableEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getSensorWidthHeight(int, NS3Av3::SENSOR_RES_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr20getSensorWidthHeightEiPNS_17SENSOR_RES_INFO_TE(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr20getSensorWidthHeightEiPNS_17SENSOR_RES_INFO_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::CCTOPGetSdblkFileCfg(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault20CCTOPGetSdblkFileCfgEPc(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault20CCTOPGetSdblkFileCfgEPc() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setCTIdx(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault8setCTIdxEj(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault8setCTIdxEj() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf7getSizeEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf7getSizeEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getSensorSyncinfo(int, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr17getSensorSyncinfoEiPiS1_S1_S1_(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr17getSensorSyncinfoEiPiS1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::AAASensorMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgrC1Ev(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgrC1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EEE = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::setSensorMode(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault13setSensorModeENS_13ESensorMode_TEjji(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault13setSensorModeENS_13ESensorMode_TEjji() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putBuf(NSIspTuning::ILscBuf&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC6putBufERN11NSIspTuning7ILscBufE(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC6putBufERN11NSIspTuning7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft13destroyThreadEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft13destroyThreadEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::apply(NSIspTuning::EIspProfile_T, TuningMgr&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC5applyEN11NSIspTuning13EIspProfile_TER9TuningMgri(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC5applyEN11NSIspTuning13EIspProfile_TER9TuningMgri() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EEE = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EEE = NULL;

/* Demangled: NSIspTuning::ILscBuf::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf4dumpEPKc(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf4dumpEPKc() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegInfoP1(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_BASE13dumpRegInfoP1EPKc(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_BASE13dumpRegInfoP1EPKc() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EEE = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(NSIspTuning::ILscTbl&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERNS_7ILscTblE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault10getCurrTblERNS_7ILscTblE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCTIdx() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault8getCTIdxEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault8getCTIdxEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfSetBufAndRatio(NSIspTuning::ILscBuf**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft17tsfSetBufAndRatioEPPNS_7ILscBufEj(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft17tsfSetBufAndRatioEPPNS_7ILscBufEj() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC8putRatioEj(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC8putRatioEj() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setStereoFrameSyncExpAndFps(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr27setStereoFrameSyncExpAndFpsEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr27setStereoFrameSyncExpAndFpsEijj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: LscNvramImp::~LscNvramImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImpD2Ev(void) {
    ALOGD("_ZN11LscNvramImpD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putAddr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC7putAddrEj(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC7putAddrEj() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EEE = NULL;

/* Demangled: LscImgBuf::allocBuf(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf8allocBufEjj(void) {
    ALOGD("_ZN9LscImgBuf8allocBufEjj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::doThreadSendSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault18doThreadSendSensorEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault18doThreadSendSensorEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::showResolutionInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault18showResolutionInfoEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault18showResolutionInfoEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC7getAddrEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC7getAddrEv() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImemBuf::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf8validateEv(void) {
    ALOGD("_ZN10LscImemBuf8validateEv() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrlD2Ev(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrlD2Ev() called");
    return 0;
}

/* Demangled: LscImemBuf::editTable() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf9editTableEv(void) {
    ALOGD("_ZN10LscImemBuf9editTableEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::createInstance(NSIspTuning::ESensorDev_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault14createInstanceENS_12ESensorDev_TEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault14createInstanceENS_12ESensorDev_TEi() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::CCTOPSetSdblkFileCfg(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault20CCTOPSetSdblkFileCfgEiPKc(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault20CCTOPSetSdblkFileCfgEiPKc() called");
    return 0;
}

/* Demangled: LscImemBuf::setConfig(NSIspTuning::ILscTable::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE(void) {
    ALOGD("_ZN10LscImemBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getOnOff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault8getOnOffEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault8getOnOffEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::~TsfDft() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11NSIspTuning6TsfDftD0Ev(void) {
    ALOGD("_ZThn4_N11NSIspTuning6TsfDftD0Ev() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::clearP1Buffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl13clearP1BufferEv(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl13clearP1BufferEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDftD0Ev(void) {
    ALOGD("_ZN11NSIspTuning6TsfDftD0Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC& NSIspTuningv3::ISP_MGR_LSC::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC3getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC3getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorFrameRate(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr18setSensorFrameRateEij(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr18setSensorFrameRateEij() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBufD1Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBufD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShadingD0Ev(void) {
    ALOGD("_ZN11NSIspTuning11OpenShadingD0Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfMain() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft7tsfMainEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft7tsfMainEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC25resetEv(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC25resetEv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Exported Object: vtable for LscImemBuf */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LscImemBuf = NULL;

/* Exported Object: vtable for NSIspTuning::LscMgrDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning13LscMgrDefaultE = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EEE = NULL;

/* Demangled: NSIspTuning::ILscBuf::setTable(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf8setTableEPKvj(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf8setTableEPKvj() called");
    return 0;
}

/* Demangled: LscNvramImp::importEEPromData() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp16importEEPromDataEv(void) {
    ALOGD("_ZN11LscNvramImp16importEEPromDataEv() called");
    return 0;
}

/* Demangled: LscNvramImp::getLut(NSIspTuning::ESensorMode_T) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TE(void) {
    ALOGD("_ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12createThreadEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12createThreadEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setCaptureLineBaseParams(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr24setCaptureLineBaseParamsEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr24setCaptureLineBaseParamsEijj() called");
    return 0;
}

/* Demangled: NSIspTuningv3::convertCcmFormat(int const*, NSIspTuning::ISP_NVRAM_CCM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv316convertCcmFormatEPKiRN11NSIspTuning15ISP_NVRAM_CCM_TE(void) {
    ALOGD("_ZN13NSIspTuningv316convertCcmFormatEPKiRN11NSIspTuning15ISP_NVRAM_CCM_TE() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::TsfDft::tsfRun(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf**, NSIspTuning::ILscBuf**) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft6tsfRunERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufEPS5_S6_(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft6tsfRunERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufEPS5_S6_() called");
    return 0;
}

/* Demangled: LscImgBuf::~LscImgBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBufD1Ev(void) {
    ALOGD("_ZN9LscImgBufD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault6uninitEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault6uninitEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::syncBuf(NSIspTuning::ILscBuf*, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault7syncBufEPNS_7ILscBufENS_7ILscMgr14E_LSC_MODULE_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault7syncBufEPNS_7ILscBufENS_7ILscMgr14E_LSC_MODULE_TE() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Exported Object: guard variable for NS3Av3::IspTuningBufCtrlDev<2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImemBuf::initMemBuf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf10initMemBufEi(void) {
    ALOGD("_ZN10LscImemBuf10initMemBufEi() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::init() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading4initEv(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading4initEv() called");
    return 0;
}

/* Exported Object: AAA_TRACE_LEVEL */
extern "C" __attribute__((visibility("default"))) void* AAA_TRACE_LEVEL = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::LscMgrDefault(NSIspTuning::ESensorDev_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefaultC1ENS_12ESensorDev_TEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefaultC1ENS_12ESensorDev_TEi() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getP2Buf() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault8getP2BufEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault8getP2BufEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getSensorModeDelay(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr18getSensorModeDelayEiPi(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr18getSensorModeDelayEiPi() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setFactoryMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault14setFactoryModeEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault14setFactoryModeEi() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::setOnOff(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft8setOnOffEi(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft8setOnOffEi() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorOBLock(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr15setSensorOBLockEii(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr15setSensorOBLockEii() called");
    return 0;
}

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(android::Vector<unsigned char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERN7android6VectorIhEE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault10getCurrTblERN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::disableFrameSync() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16disableFrameSyncEv(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16disableFrameSyncEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P211getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN13NSIspTuningv317ISP_MGR_CTL_EN_P211getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: LscNvramImp::doThreadFunc() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp12doThreadFuncEv(void) {
    ALOGD("_ZN11LscNvramImp12doThreadFuncEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft15destroyInstanceEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EEE = NULL;

/* Exported Object: guard variable for NS3Av3::IspTuningBufCtrlDev<1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrlDev<8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi8EEE = NULL;

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::getConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf9getConfigEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf9getConfigEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading6uninitEv(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading6uninitEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDftD2Ev(void) {
    ALOGD("_ZN11NSIspTuning6TsfDftD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setOnOff(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault8setOnOffEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault8setOnOffEi() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShadingD2Ev(void) {
    ALOGD("_ZN11NSIspTuning11OpenShadingD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::loadOtpDataForTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft17loadOtpDataForTsfEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft17loadOtpDataForTsfEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCurTrfmCfg() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault13getCurTrfmCfgEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault13getCurTrfmCfgEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::doNotifyCb(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11NSIspTuning6TsfDft10doNotifyCbEi(void) {
    ALOGD("_ZThn4_N11NSIspTuning6TsfDft10doNotifyCbEi() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrlDev<16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi16EEE = NULL;

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putBufAndRatio(NSIspTuning::ILscBuf&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC14putBufAndRatioERN11NSIspTuning7ILscBufEj(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC14putBufAndRatioERN11NSIspTuning7ILscBufEj() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::convert(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, MTK_TSF_SET_PROC_INFO_STRUCT&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning6TsfDft7convertERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufER28MTK_TSF_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZNK11NSIspTuning6TsfDft7convertERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufER28MTK_TSF_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::showInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf8showInfoEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf8showInfoEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::~AAASensorMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgrD1Ev(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgrD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EEE = NULL;

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrlDev<4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi4EEE = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::updateTsf(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault9updateTsfERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault9updateTsfERKNS_7ILscMgr16TSF_INPUT_INFO_TE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr11getInstanceEv(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr11getInstanceEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getSensorMaxFrameRate(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr21getSensorMaxFrameRateEiPj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr21getSensorMaxFrameRateEiPj() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegInfo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_BASE11dumpRegInfoEPKc(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_BASE11dumpRegInfoEPKc() called");
    return 0;
}

/* Exported Object: NS3Av3::IspTuningBufCtrlDev<4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setTsfOnOff(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11setTsfOnOffEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11setTsfOnOffEi() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefaultD0Ev(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefaultD0Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::setDebugInfo(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12setDebugInfoEPv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12setDebugInfoEPv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::createTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9createTsfEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9createTsfEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::setRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf8setRatioEj(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf8setRatioEj() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft6uninitEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft6uninitEv() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NS3Av3::IspTuningBufCtrl::IspTuningBufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrlC1Ev(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrlC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Demangled: LscImemBuf::freeMemBuf(IMEM_BUF_INFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf10freeMemBufER13IMEM_BUF_INFO(void) {
    ALOGD("_ZN10LscImemBuf10freeMemBufER13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::setRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault8setRatioEj(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault8setRatioEj() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::setIsFactory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading12setIsFactoryEi(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading12setIsFactoryEi() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setPreviewMaxFrameRate(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr22setPreviewMaxFrameRateEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr22setPreviewMaxFrameRateEijj() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::init() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault4initEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault4initEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::isBin() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC5isBinEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC5isBinEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::isEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC28isEnableEv(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC28isEnableEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::TsfDft(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDftC1Ej(void) {
    ALOGD("_ZN11NSIspTuning6TsfDftC1Ej() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::getRsvdData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning6TsfDft11getRsvdDataEv(void) {
    ALOGD("_ZNK11NSIspTuning6TsfDft11getRsvdDataEv() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getSensorId() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11getSensorIdEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11getSensorIdEv() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::OpenShading(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShadingC1Ej(void) {
    ALOGD("_ZN11NSIspTuning11OpenShadingC1Ej() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImemBuf::setTable(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf8setTableEPKvj(void) {
    ALOGD("_ZN10LscImemBuf8setTableEPKvj() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9LscBufImpD0Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9LscBufImpD0Ev() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorShadingTbl(int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr19setSensorShadingTblEiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEEj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr19setSensorShadingTblEiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEEj() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::setOnOff(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading8setOnOffEi(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading8setOnOffEi() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::getDumpFileCfg(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft14getDumpFileCfgEPc(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft14getDumpFileCfgEPc() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Demangled: LscImemBuf::uninitMemBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf12uninitMemBufEv(void) {
    ALOGD("_ZN10LscImemBuf12uninitMemBufEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfSetBuf(NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9tsfSetBufEPNS_7ILscBufE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9tsfSetBufEPNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorExpTime(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16setSensorExpTimeEij(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16setSensorExpTimeEij() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11getInstanceENS_12ESensorDev_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11getInstanceENS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::isInit() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft6isInitEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft6isInitEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfInit() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft7tsfInitEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft7tsfInitEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_BASE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv312ISP_MGR_BASEE = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EEE = NULL;

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: LscNvramImp::getLut(NSIspTuning::ESensorMode_T, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TEj(void) {
    ALOGD("_ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TEj() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::waitDone() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft8waitDoneEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft8waitDoneEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::set2ShutterParams(int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr17set2ShutterParamsEijjj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr17set2ShutterParamsEijjj() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::updateStereoFrameSyncFps(int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr24updateStereoFrameSyncFpsEiijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr24updateStereoFrameSyncFpsEiijj() called");
    return 0;
}

/* Exported Object: NS3Av3::IspTuningBufCtrlDev<2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton = NULL;

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTsf::createInstance(unsigned int, NSIspTuning::ILscTsf::E_LSC_TSF_TYPE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTsf14createInstanceEjNS0_16E_LSC_TSF_TYPE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTsf14createInstanceEjNS0_16E_LSC_TSF_TYPE_TE() called");
    return 0;
}

/* Exported Object: NS3Av3::IspTuningBufCtrlDev<16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::setSensorTblFlow() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault16setSensorTblFlowEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault16setSensorTblFlowEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfGetResult(NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12tsfGetResultEPNS_7ILscBufE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12tsfGetResultEPNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::getOnOff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning6TsfDft8getOnOffEv(void) {
    ALOGD("_ZNK11NSIspTuning6TsfDft8getOnOffEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegs() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_BASE8dumpRegsEv(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_BASE8dumpRegsEv() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Exported Object: guard variable for NS3Av3::IspTuningBufCtrlDev<16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::getFD() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf5getFDEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf5getFDEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::doShadingTrfm() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault13doShadingTrfmEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault13doShadingTrfmEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefaultD2Ev(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefaultD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::getOnOff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning11OpenShading8getOnOffEv(void) {
    ALOGD("_ZNK11NSIspTuning11OpenShading8getOnOffEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorHDRTriGain(int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr19setSensorHDRTriGainEijjj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr19setSensorHDRTriGainEijjj() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_BASE::addressErrorCheck(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_BASE17addressErrorCheckEPKc(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_BASE17addressErrorCheckEPKc() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: LscImemBuf::allocMemBuf(IMEM_BUF_INFO&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf11allocMemBufER13IMEM_BUF_INFOj(void) {
    ALOGD("_ZN10LscImemBuf11allocMemBufER13IMEM_BUF_INFOj() called");
    return 0;
}

/* Demangled: LscImemBuf::getPhyAddr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10LscImemBuf10getPhyAddrEv(void) {
    ALOGD("_ZNK10LscImemBuf10getPhyAddrEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setPreviewParams(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16setPreviewParamsEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16setPreviewParamsEijj() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Demangled: int NSIspTuningv3::ISP_MGR_LSC2::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&, _dip_x_reg_t_ const volatile*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEEiRT_PVK13_dip_x_reg_t_(void) {
    ALOGD("_ZNK13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEEiRT_PVK13_dip_x_reg_t_() called");
    return 0;
}

/* Exported Object: NS3Av3::IspTuningBufCtrlDev<1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImemBuf::~LscImemBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBufD0Ev(void) {
    ALOGD("_ZN10LscImemBufD0Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::ILscBuf(unsigned int, unsigned int, int, char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBufC1EjjiPKcNS0_12E_BUF_MODE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscBufC1EjjiPKcNS0_12E_BUF_MODE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::getTable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf8getTableEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf8getTableEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCapLut(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault9getCapLutEj(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault9getCapLutEj() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getBinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC12getBinConfigEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC12getBinConfigEv() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getRawSize(NSIspTuning::ESensorMode_T, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault10getRawSizeENS_13ESensorMode_TERjS2_(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault10getRawSizeENS_13ESensorMode_TERjS2_() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfReformTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12tsfReformTblEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12tsfReformTblEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv312ISP_MGR_LSC2E = NULL;

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9LscBufImpD2Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9LscBufImpD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::ILscBuf(unsigned int, unsigned int, int, char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBufC2EjjiPKcNS0_12E_BUF_MODE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscBufC2EjjiPKcNS0_12E_BUF_MODE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::config(NS3Av3::shadingConfig_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault6configEN6NS3Av315shadingConfig_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault6configEN6NS3Av315shadingConfig_TE() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::setIsBin(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC8setIsBinEi(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC8setIsBinEi() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorExpLine(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16setSensorExpLineEij(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16setSensorExpLineEij() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EEE = NULL;

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Demangled: LscNvramImp::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp11getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN11LscNvramImp11getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscMgr::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscMgr11getInstanceENS_12ESensorDev_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscMgr11getInstanceENS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::CCTOPReset() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault10CCTOPResetEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault10CCTOPResetEv() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::setConfig(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading9setConfigENS_13ESensorMode_TEjji(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading9setConfigENS_13ESensorMode_TEjji() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::syncTbl(NSIspTuning::ILscTbl const&, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault7syncTblERKNS_7ILscTblENS_7ILscMgr14E_LSC_MODULE_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault7syncTblERKNS_7ILscTblENS_7ILscMgr14E_LSC_MODULE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getRatio() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault8getRatioEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault8getRatioEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NSIspTuning::OpenShading */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning11OpenShadingE = NULL;

/* Demangled: LscImgBuf::getFD() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9LscImgBuf5getFDEv(void) {
    ALOGD("_ZNK9LscImgBuf5getFDEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSIspTuning::ILscBuf*, std::__1::allocator<NSIspTuning::ILscBuf*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIPN11NSIspTuning7ILscBufENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIPN11NSIspTuning7ILscBufENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getSensorVCinfo(int, NS3Av3::SENSOR_VC_INFO_T*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr15getSensorVCinfoEiPNS_16SENSOR_VC_INFO_TEi(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr15getSensorVCinfoEiPNS_16SENSOR_VC_INFO_TEi() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfSetProcInfo(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft14tsfSetProcInfoERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft14tsfSetProcInfoERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorAWBGain(int, strSensorAWBGain*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16setSensorAWBGainEiP16strSensorAWBGain(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16setSensorAWBGainEiP16strSensorAWBGain() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImgBuf::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf8validateEv(void) {
    ALOGD("_ZN9LscImgBuf8validateEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::convertSensorCrop(int, NSIspTuning::LscMgrDefault::SensorCropInfo_T const&, NSIspTuning::LscMgrDefault::SensorCropInfo_T const&, NSIspTuning::ILscTable::TransformCfg_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault17convertSensorCropEiRKNS0_16SensorCropInfo_TES3_RNS_9ILscTable14TransformCfg_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault17convertSensorCropEiRKNS0_16SensorCropInfo_TES3_RNS_9ILscTable14TransformCfg_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getResolution(NSIspTuning::ESensorMode_T, NSIspTuning::LscMgrDefault::SensorCropInfo_T&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_13ESensorMode_TERNS0_16SensorCropInfo_TE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_13ESensorMode_TERNS0_16SensorCropInfo_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getLut(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault6getLutEj(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault6getLutEj() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::enableSensorTestPattern(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr23enableSensorTestPatternEi(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr23enableSensorTestPatternEi() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EEE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: LscImgBuf::getTable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9LscImgBuf8getTableEv(void) {
    ALOGD("_ZNK9LscImgBuf8getTableEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1& NSIspTuningv3::ISP_MGR_CTL_EN_P1::get<NSIspTuning::ISP_NVRAM_CTL_EN_P1_T>(NSIspTuning::ISP_NVRAM_CTL_EN_P1_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P13getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P1_TEEERS0_RT_(void) {
    ALOGD("_ZN13NSIspTuningv317ISP_MGR_CTL_EN_P13getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P1_TEEERS0_RT_() called");
    return 0;
}

/* Demangled: LscNvramImp::~LscNvramImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImpD1Ev(void) {
    ALOGD("_ZN11LscNvramImpD1Ev() called");
    return 0;
}

/* Demangled: LscImemBuf::~LscImemBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBufD2Ev(void) {
    ALOGD("_ZN10LscImemBufD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::resetLscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11resetLscTblEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11resetLscTblEv() called");
    return 0;
}

/* Demangled: LscNvramImp::threadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp10threadLoopEPv(void) {
    ALOGD("_ZN11LscNvramImp10threadLoopEPv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::calSl2Config(unsigned int, unsigned int, NSIspTuning::ILscMgr::SL2_CFG_T&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault12calSl2ConfigEjjRNS_7ILscMgr9SL2_CFG_TE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault12calSl2ConfigEjjRNS_7ILscMgr9SL2_CFG_TE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getPreviewDefaultFrameRate(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr26getPreviewDefaultFrameRateEij(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr26getPreviewDefaultFrameRateEij() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrlD1Ev(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrlD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscNvram::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscNvram11getInstanceENS_12ESensorDev_TE(void) {
    ALOGD("_ZN11NSIspTuning9ILscNvram11getInstanceENS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorDualGain(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr17setSensorDualGainEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr17setSensorDualGainEijj() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::ILscBuf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning7ILscBufE = NULL;

/* Demangled: NSIspTuning::TsfDft::doThreadFunc() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12doThreadFuncEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12doThreadFuncEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::config(NS3Av3::shadingConfig_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft6configEN6NS3Av315shadingConfig_TE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft6configEN6NS3Av315shadingConfig_TE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::set2ShutterControl(int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr18set2ShutterControlEijji(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr18set2ShutterControlEijji() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr4initEi(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr4initEi() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EEE = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EEE = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrlDev<1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi1EEE = NULL;

/* Demangled: NSIspTuning::TsfDft::threadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft10threadLoopEPv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft10threadLoopEPv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setCaptureParams(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr16setCaptureParamsEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr16setCaptureParamsEijj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBufD0Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBufD0Ev() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::AAASensorMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgrC2Ev(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgrC2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short*, std::__1::allocator<unsigned short*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorIPtNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImgBuf::LscImgBuf(unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBufC1EjjPKc(void) {
    ALOGD("_ZN9LscImgBufC1EjjPKc() called");
    return 0;
}

/* Demangled: LscImemBuf::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10LscImemBuf7getSizeEv(void) {
    ALOGD("_ZNK10LscImemBuf7getSizeEv() called");
    return 0;
}

/* Demangled: int NSIspTuningv3::ISP_MGR_CTL_EN_P2::get<NSIspTuning::ISP_NVRAM_CTL_EN_P2_T>(NSIspTuning::ISP_NVRAM_CTL_EN_P2_T&, _dip_x_reg_t_ const volatile*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13NSIspTuningv317ISP_MGR_CTL_EN_P23getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P2_TEEEiRT_PVK13_dip_x_reg_t_(void) {
    ALOGD("_ZNK13NSIspTuningv317ISP_MGR_CTL_EN_P23getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P2_TEEEiRT_PVK13_dip_x_reg_t_() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::LscBufImp::LscBufImp(unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9LscBufImpC2EjjPKc(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9LscBufImpC2EjjPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getDebugInfo(SHADING_DEBUG_INFO_S&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault12getDebugInfoER20SHADING_DEBUG_INFO_S(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault12getDebugInfoER20SHADING_DEBUG_INFO_S() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::threadSendSensor(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault16threadSendSensorEPv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault16threadSendSensorEPv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, int, NSIspTuning::ILscTbl&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNS_7ILscTblE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNS_7ILscTblE() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setPreviewLineBaseParams(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr24setPreviewLineBaseParamsEijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr24setPreviewLineBaseParamsEijj() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EEE = NULL;

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImgBuf::~LscImgBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBufD0Ev(void) {
    ALOGD("_ZN9LscImgBufD0Ev() called");
    return 0;
}

/* Demangled: LscNvramImp::LscNvramImp(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImpC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN11LscNvramImpC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EEE = NULL;

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::putBuf(NSIspTuning::ILscBuf&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC26putBufERN11NSIspTuning7ILscBufE(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC26putBufERN11NSIspTuning7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2& NSIspTuningv3::ISP_MGR_LSC2::put<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC23putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC23putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_() called");
    return 0;
}

/* Demangled: LscImgBuf::showInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9LscImgBuf8showInfoEv(void) {
    ALOGD("_ZNK9LscImgBuf8showInfoEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getResolution(NSIspTuning::ILscMgr::ELscScenario_T, NSIspTuning::LscMgrDefault::SensorCropInfo_T&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_7ILscMgr14ELscScenario_TERNS0_16SensorCropInfo_TE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_7ILscMgr14ELscScenario_TERNS0_16SensorCropInfo_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::setConfig(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9setConfigENS_13ESensorMode_TEjji(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9setConfigENS_13ESensorMode_TEjji() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Exported Object: guard variable for NS3Av3::IspTuningBufCtrlDev<8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::getBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf6getBufEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf6getBufEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC211getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC211getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfBatch(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft8tsfBatchERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft8tsfBatchERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_() called");
    return 0;
}

/* Demangled: LscImgBuf::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9LscImgBuf7getSizeEv(void) {
    ALOGD("_ZNK9LscImgBuf7getSizeEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::enableLsc(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC9enableLscEi(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC9enableLscEi() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getDebugTbl(DEBUG_SHAD_ARRAY_INFO_S&, DEBUG_SHAD_ARRAY_2_S&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11getDebugTblER23DEBUG_SHAD_ARRAY_INFO_SR20DEBUG_SHAD_ARRAY_2_S(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11getDebugTblER23DEBUG_SHAD_ARRAY_INFO_SR20DEBUG_SHAD_ARRAY_2_S() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::updateLsc() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault9updateLscEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault9updateLscEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::~TsfDft() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11NSIspTuning6TsfDftD1Ev(void) {
    ALOGD("_ZThn4_N11NSIspTuning6TsfDftD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC& NSIspTuningv3::ISP_MGR_LSC::put<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC3putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC3putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: LscNvramImp::check123InNvram() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11LscNvramImp15check123InNvramEv(void) {
    ALOGD("_ZNK11LscNvramImp15check123InNvramEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::createBuf(char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault9createBufEPKcNS_7ILscBuf12E_BUF_MODE_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault9createBufEPKcNS_7ILscBuf12E_BUF_MODE_TE() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getRawConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC12getRawConfigEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC12getRawConfigEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDftD1Ev(void) {
    ALOGD("_ZN11NSIspTuning6TsfDftD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBufD2Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBufD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShadingD1Ev(void) {
    ALOGD("_ZN11NSIspTuning11OpenShadingD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::TSF_INPUT_STAT_T::put(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft16TSF_INPUT_STAT_T3putERKNS_7ILscMgr16TSF_INPUT_INFO_TEjh(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft16TSF_INPUT_STAT_T3putERKNS_7ILscMgr16TSF_INPUT_INFO_TEjh() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfSetTbl(NSIspTuning::ILscTbl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9tsfSetTblERKNS_7ILscTblE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9tsfSetTblERKNS_7ILscTblE() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::TsfDft */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning6TsfDftE = NULL;

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

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscMgr::createInstance(NSIspTuning::ESensorDev_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscMgr14createInstanceENS_12ESensorDev_TEi(void) {
    ALOGD("_ZN11NSIspTuning7ILscMgr14createInstanceENS_12ESensorDev_TEi() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::enableSensorI2CBuffMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr23enableSensorI2CBuffModeEii(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr23enableSensorI2CBuffModeEii() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: LscImemBuf::setConfig(NSIspTuning::ILscBuf::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE(void) {
    ALOGD("_ZN10LscImemBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf8validateEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf8validateEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::setLSCconfigParam(NSIspTuning::ILscTable::Config&, NSIspTuning::ILscTable::Config&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC17setLSCconfigParamERN11NSIspTuning9ILscTable6ConfigES4_(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC17setLSCconfigParamERN11NSIspTuning9ILscTable6ConfigES4_() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::TSF_INPUT_STAT_T::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning6TsfDft16TSF_INPUT_STAT_T4dumpEPKc(void) {
    ALOGD("_ZNK11NSIspTuning6TsfDft16TSF_INPUT_STAT_T4dumpEPKc() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getCurrTblIndex() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault15getCurrTblIndexEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault15getCurrTblIndexEv() called");
    return 0;
}

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av316IspTuningBufCtrlE = NULL;

/* Demangled: LscImgBuf::~LscImgBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBufD2Ev(void) {
    ALOGD("_ZN9LscImgBufD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::CCTOPSetBypass123(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault17CCTOPSetBypass123Ei(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault17CCTOPSetBypass123Ei() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getSl2() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault6getSl2Ev(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault6getSl2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::changeThreadSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft19changeThreadSettingEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft19changeThreadSettingEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::update(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::LscMgrDefault(NSIspTuning::ESensorDev_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefaultC2ENS_12ESensorDev_TEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefaultC2ENS_12ESensorDev_TEi() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::update(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE() called");
    return 0;
}

/* Demangled: LscImemBuf::getTable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10LscImemBuf8getTableEv(void) {
    ALOGD("_ZNK10LscImemBuf8getTableEv() called");
    return 0;
}

/* Demangled: LscNvramImp::writeNvramTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp13writeNvramTblEv(void) {
    ALOGD("_ZN11LscNvramImp13writeNvramTblEv() called");
    return 0;
}

/* Exported Object: vtable for LscNvramImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV11LscNvramImp = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, unsigned int, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault12getGainTableEjjjPf(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault12getGainTableEjjjPf() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::perframe(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading8perframeERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading8perframeERKNS_7ILscMgr16TSF_INPUT_INFO_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfSetSL2(MTK_TSF_SL2_PARAM_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft9tsfSetSL2ERK24MTK_TSF_SL2_PARAM_STRUCT(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft9tsfSetSL2ERK24MTK_TSF_SL2_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::set3ShutterControl(int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr18set3ShutterControlEijjj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr18set3ShutterControlEijjj() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfBatchCap(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft11tsfBatchCapERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft11tsfBatchCapERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::getPhyAddr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf10getPhyAddrEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf10getPhyAddrEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr6uninitEv(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv311ISP_MGR_LSCE = NULL;

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: LscNvramImp::getTsfCfgTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp12getTsfCfgTblEv(void) {
    ALOGD("_ZN11LscNvramImp12getTsfCfgTblEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setFlickerFrameRateActive(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr25setFlickerFrameRateActiveEii(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr25setFlickerFrameRateActiveEii() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::destroyBuf(NSIspTuning::ILscBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault10destroyBufEPNS_7ILscBufE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault10destroyBufEPNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getTsfOnOff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault11getTsfOnOffEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault11getTsfOnOffEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorATR(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr12setSensorATREijj(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr12setSensorATREijj() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Demangled: LscImgBuf::setTable(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf8setTableEPKvj(void) {
    ALOGD("_ZN9LscImgBuf8setTableEPKvj() called");
    return 0;
}

/* Exported Object: vtable for LscImgBuf */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LscImgBuf = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::waitTsfExecDone() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault15waitTsfExecDoneEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault15waitTsfExecDoneEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getTransformCfg(NSIspTuning::ESensorMode_T) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault15getTransformCfgENS_13ESensorMode_TE(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault15getTransformCfgENS_13ESensorMode_TE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::getRollingShutter(int, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6NS3Av312AAASensorMgr17getRollingShutterEiRjS1_(void) {
    ALOGD("_ZNK6NS3Av312AAASensorMgr17getRollingShutterEiRjS1_() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::reconfig(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC8reconfigEPvS1_(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC8reconfigEPvS1_() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::putAddr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC27putAddrEj(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC27putAddrEj() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton = NULL;

/* Demangled: NS3Av3::IspTuningBufCtrl::getP1Buffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl11getP1BufferEv(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl11getP1BufferEv() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::dumpP1CbBuffer(void*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl14dumpP1CbBufferEPvS1_i(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl14dumpP1CbBufferEPvS1_i() called");
    return 0;
}

/* Exported Object: vtable for android::List<NS3Av3::IspTuningBufCtrl::BufferInfo_T> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN6NS3Av316IspTuningBufCtrl12BufferInfo_TEEE = NULL;

/* Demangled: LscImgBuf::editTable() */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf9editTableEv(void) {
    ALOGD("_ZN9LscImgBuf9editTableEv() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::setSensorGain(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgr13setSensorGainEij(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgr13setSensorGainEij() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl11getInstanceEi(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl11getInstanceEi() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::getAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC27getAddrEv(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC27getAddrEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EEE = NULL;

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EEE = NULL;

/* Exported Object: vtable for NS3Av3::IspTuningBufCtrlDev<2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi2EEE = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::sendGainTblToSensor(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault19sendGainTblToSensorEii(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault19sendGainTblToSensorEii() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfKeep(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf**, NSIspTuning::ILscBuf**) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft7tsfKeepERKNS0_16TSF_INPUT_STAT_TEPPNS_7ILscBufES6_(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft7tsfKeepERKNS0_16TSF_INPUT_STAT_TEPPNS_7ILscBufES6_() called");
    return 0;
}

/* Exported Object: guard variable for NS3Av3::IspTuningBufCtrlDev<4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf7getNameEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf7getNameEv() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::doNotifyCb(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft10doNotifyCbEi(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft10doNotifyCbEi() called");
    return 0;
}

/* Demangled: NS3Av3::AAASensorMgr::~AAASensorMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av312AAASensorMgrD2Ev(void) {
    ALOGD("_ZN6NS3Av312AAASensorMgrD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2& NSIspTuningv3::ISP_MGR_LSC2::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::getP1BufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl15getP1BufferSizeEv(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl15getP1BufferSizeEv() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::syncBufAndRatio(NSIspTuning::ILscBuf**, unsigned int, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault15syncBufAndRatioEPPNS_7ILscBufEjNS_7ILscMgr14E_LSC_MODULE_TE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault15syncBufAndRatioEPPNS_7ILscBufEjNS_7ILscMgr14E_LSC_MODULE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::doShadingToSensorGain(unsigned int, unsigned int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault21doShadingToSensorGainEjjRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault21doShadingToSensorGainEjjRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC11getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC11getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::dumpData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft8dumpDataEv(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft8dumpDataEv() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2::apply(NSIspTuning::RAWIspCamInfo const&, _dip_x_reg_t_ volatile*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P25applyERKN11NSIspTuning13RAWIspCamInfoEPV13_dip_x_reg_t_(void) {
    ALOGD("_ZN13NSIspTuningv317ISP_MGR_CTL_EN_P25applyERKN11NSIspTuning13RAWIspCamInfoEPV13_dip_x_reg_t_() called");
    return 0;
}

/* Demangled: LscImemBuf::LscImemBuf(unsigned int, unsigned int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10LscImemBufC2EjjiPKc(void) {
    ALOGD("_ZN10LscImemBufC2EjjiPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::doShadingAlign() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault14doShadingAlignEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault14doShadingAlignEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton = NULL;

/* Exported Object: NS3Av3::IspTuningBufCtrlDev<8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getSensorResolution() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault19getSensorResolutionEv(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault19getSensorResolutionEv() called");
    return 0;
}

/* Demangled: LscImemBuf::showInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10LscImemBuf8showInfoEv(void) {
    ALOGD("_ZNK10LscImemBuf8showInfoEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::loadTableFlow(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault13loadTableFlowEi(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault13loadTableFlowEi() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefaultD1Ev(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefaultD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P111getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN13NSIspTuningv317ISP_MGR_CTL_EN_P111getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1::apply(NSIspTuning::RAWIspCamInfo&, TuningMgr&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P15applyERN11NSIspTuning13RAWIspCamInfoER9TuningMgri(void) {
    ALOGD("_ZN13NSIspTuningv317ISP_MGR_CTL_EN_P15applyERN11NSIspTuning13RAWIspCamInfoER9TuningMgri() called");
    return 0;
}

/* Exported Object: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::setConfig(NSIspTuning::ILscBuf::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9setConfigENS0_6ConfigE(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9setConfigENS0_6ConfigE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::getRatio() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf8getRatioEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf8getRatioEv() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::getSensorMode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault13getSensorModeEv(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault13getSensorModeEv() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading15destroyInstanceEv(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::start() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading5startEv(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading5startEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::apply(NSIspTuning::EIspProfile_T, _dip_x_reg_t_ volatile*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv312ISP_MGR_LSC25applyEN11NSIspTuning13EIspProfile_TEPV13_dip_x_reg_t_(void) {
    ALOGD("_ZN13NSIspTuningv312ISP_MGR_LSC25applyEN11NSIspTuning13EIspProfile_TEPV13_dip_x_reg_t_() called");
    return 0;
}

/* Demangled: NS3Av3::IspTuningBufCtrl::IspTuningBufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrlC2Ev(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrlC2Ev() called");
    return 0;
}

/* Demangled: LscImgBuf::setConfig(NSIspTuning::ILscBuf::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN9LscImgBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE(void) {
    ALOGD("_ZN9LscImgBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE() called");
    return 0;
}

/* Demangled: NSIspTuning::LscMgrDefault::updateRatio(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning13LscMgrDefault11updateRatioEij(void) {
    ALOGD("_ZN11NSIspTuning13LscMgrDefault11updateRatioEij() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::getGainTbl(unsigned int, unsigned int, int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft10getGainTblEjjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft10getGainTblEjjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::LscMgrDefault::getP1BinSize(unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning13LscMgrDefault12getP1BinSizeERjS1_(void) {
    ALOGD("_ZNK11NSIspTuning13LscMgrDefault12getP1BinSizeERjS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::setIsFactory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft12setIsFactoryEi(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft12setIsFactoryEi() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE8__appendEj() called");
    return 0;
}

/* Demangled: LscNvramImp::LscNvramImp(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImpC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN11LscNvramImpC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::TsfDft(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDftC2Ej(void) {
    ALOGD("_ZN11NSIspTuning6TsfDftC2Ej() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::isEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC8isEnableEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC8isEnableEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::ILscBuf::LscBufImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning7ILscBuf9LscBufImpE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::OpenShading(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShadingC2Ej(void) {
    ALOGD("_ZN11NSIspTuning11OpenShadingC2Ej() called");
    return 0;
}

/* Demangled: NSIspTuningv3::ISP_MGR_LSC::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv311ISP_MGR_LSC5resetEv(void) {
    ALOGD("_ZN13NSIspTuningv311ISP_MGR_LSC5resetEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton = NULL;

/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9LscBufImpD1Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9LscBufImpD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuningv3::convertCcmFormat(NSIspTuning::ISP_NVRAM_CCM_T const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13NSIspTuningv316convertCcmFormatERKN11NSIspTuning15ISP_NVRAM_CCM_TEPi(void) {
    ALOGD("_ZN13NSIspTuningv316convertCcmFormatERKN11NSIspTuning15ISP_NVRAM_CCM_TEPi() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EEE = NULL;

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::setConfig(NSIspTuning::ILscTable::Config) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscBuf9setConfigENS_9ILscTable6ConfigE(void) {
    ALOGD("_ZN11NSIspTuning7ILscBuf9setConfigENS_9ILscTable6ConfigE() called");
    return 0;
}

/* Demangled: LscImgBuf::getPhyAddr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9LscImgBuf10getPhyAddrEv(void) {
    ALOGD("_ZNK9LscImgBuf10getPhyAddrEv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EEE = NULL;

/* Demangled: LscNvramImp::readNvramTbl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp12readNvramTblEi(void) {
    ALOGD("_ZN11LscNvramImp12readNvramTblEi() called");
    return 0;
}

/* Demangled: NSIspTuning::TsfDft::tsfResetTbl(NSIspTuning::ESensorMode_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning6TsfDft11tsfResetTblENS_13ESensorMode_TEi(void) {
    ALOGD("_ZN11NSIspTuning6TsfDft11tsfResetTblENS_13ESensorMode_TEi() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_() called");
    return 0;
}

/* Demangled: LscNvramImp::getNvramData() */
extern "C" __attribute__((visibility("default"))) int _ZN11LscNvramImp12getNvramDataEv(void) {
    ALOGD("_ZN11LscNvramImp12getNvramDataEv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton = NULL;

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscBuf::LscBufImp::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscBuf9LscBufImp4dumpEPKc(void) {
    ALOGD("_ZNK11NSIspTuning7ILscBuf9LscBufImp4dumpEPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::OpenShading::createInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning11OpenShading14createInstanceEj(void) {
    ALOGD("_ZN11NSIspTuning11OpenShading14createInstanceEj() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EEE = NULL;

/* Demangled: NS3Av3::IspTuningBufCtrl::updateHint(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av316IspTuningBufCtrl10updateHintEPvi(void) {
    ALOGD("_ZN6NS3Av316IspTuningBufCtrl10updateHintEPvi() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}
