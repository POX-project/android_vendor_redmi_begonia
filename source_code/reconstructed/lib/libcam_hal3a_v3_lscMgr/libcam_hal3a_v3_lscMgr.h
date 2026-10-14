/*
 * Reverse-Engineered ABI Specification for: libcam.hal3a.v3.lscMgr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.hal3a.v3.lscMgr.so
 */

#ifndef BEGONIA_RE_LIBCAM_HAL3A_V3_LSCMGR_H
#define BEGONIA_RE_LIBCAM_HAL3A_V3_LSCMGR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE26__swap_out_circular_bufferERNS_14__split_bufferIlRS2_EE */
/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__swap_out_circular_buffer(std::__1::__split_buffer<long, std::__1::allocator<long>&>&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE26__swap_out_circular_bufferERNS_14__split_bufferIlRS2_EE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft10destroyTsfEv */
/* Demangled: NSIspTuning::TsfDft::destroyTsf() */
int _ZN11NSIspTuning6TsfDft10destroyTsfEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft11updateRatioEjj */
/* Demangled: NSIspTuning::TsfDft::updateRatio(unsigned int, unsigned int) */
int _ZN11NSIspTuning6TsfDft11updateRatioEjj(void);

/* Symbol: _ZN11NSIspTuning6TsfDft14setDumpFileCfgEiPKc */
/* Demangled: NSIspTuning::TsfDft::setDumpFileCfg(int, char const*) */
int _ZN11NSIspTuning6TsfDft14setDumpFileCfgEiPKc(void);

/* Symbol: _ZN11NSIspTuning6TsfDft4initEv */
/* Demangled: NSIspTuning::TsfDft::init() */
int _ZN11NSIspTuning6TsfDft4initEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9tsfCfgChgEv */
/* Demangled: NSIspTuning::TsfDft::tsfCfgChg() */
int _ZN11NSIspTuning6TsfDft9tsfCfgChgEv(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE6resizeEj */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::resize(unsigned int) */
int _ZNSt3__16vectorItNS_9allocatorItEEE6resizeEj(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning6TsfDft14createInstanceEj */
/* Demangled: NSIspTuning::TsfDft::createInstance(unsigned int) */
int _ZN11NSIspTuning6TsfDft14createInstanceEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault17setDumbFilePrefixENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_7ILscMgr14E_LSC_MODULE_TE */
/* Demangled: NSIspTuning::LscMgrDefault::setDumbFilePrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
int _ZN11NSIspTuning13LscMgrDefault17setDumbFilePrefixENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_7ILscMgr14E_LSC_MODULE_TE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault10getCurrTblEjRN7android6VectorIhEE */
/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(unsigned int, android::Vector<unsigned char>&) const */
int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblEjRN7android6VectorIhEE(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZNK10LscImemBuf5getFDEv */
/* Demangled: LscImemBuf::getFD() const */
int _ZNK10LscImemBuf5getFDEv(void);

/* Symbol: _ZN11LscNvramImpD0Ev */
/* Demangled: LscNvramImp::~LscNvramImp() */
int _ZN11LscNvramImpD0Ev(void);

/* Symbol: _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZN10LscImemBufD1Ev */
/* Demangled: LscImemBuf::~LscImemBuf() */
int _ZN10LscImemBufD1Ev(void);

/* Symbol: _ZN9LscImgBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE */
/* Demangled: LscImgBuf::setConfig(NSIspTuning::ILscTable::Config) */
int _ZN9LscImgBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE(void);

/* Symbol: _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__push_back_slow_path<unsigned short* const&>(unsigned short* const&) */
int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC29enableLscEi */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::enableLsc(int) */
int _ZN13NSIspTuningv312ISP_MGR_LSC29enableLscEi(void);

/* Symbol: _ZN9LscImgBufC2EjjPKc */
/* Demangled: LscImgBuf::LscImgBuf(unsigned int, unsigned int, char const*) */
int _ZN9LscImgBufC2EjjPKc(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrlD0Ev */
/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
int _ZN6NS3Av316IspTuningBufCtrlD0Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN10LscImemBufC1EjjiPKc */
/* Demangled: LscImemBuf::LscImemBuf(unsigned int, unsigned int, int, char const*) */
int _ZN10LscImemBufC1EjjiPKc(void);

/* Symbol: _ZN9LscImgBuf7freeBufEv */
/* Demangled: LscImgBuf::freeBuf() */
int _ZN9LscImgBuf7freeBufEv(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning7ILscBuf9editTableEv */
/* Demangled: NSIspTuning::ILscBuf::editTable() */
int _ZN11NSIspTuning7ILscBuf9editTableEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr20getSensorWidthHeightEiPNS_17SENSOR_RES_INFO_TE */
/* Demangled: NS3Av3::AAASensorMgr::getSensorWidthHeight(int, NS3Av3::SENSOR_RES_INFO_T*) */
int _ZN6NS3Av312AAASensorMgr20getSensorWidthHeightEiPNS_17SENSOR_RES_INFO_TE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault20CCTOPGetSdblkFileCfgEPc */
/* Demangled: NSIspTuning::LscMgrDefault::CCTOPGetSdblkFileCfg(char*) */
int _ZN11NSIspTuning13LscMgrDefault20CCTOPGetSdblkFileCfgEPc(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault8setCTIdxEj */
/* Demangled: NSIspTuning::LscMgrDefault::setCTIdx(unsigned int) */
int _ZN11NSIspTuning13LscMgrDefault8setCTIdxEj(void);

/* Symbol: _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZNK11NSIspTuning7ILscBuf7getSizeEv */
/* Demangled: NSIspTuning::ILscBuf::getSize() const */
int _ZNK11NSIspTuning7ILscBuf7getSizeEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr17getSensorSyncinfoEiPiS1_S1_S1_ */
/* Demangled: NS3Av3::AAASensorMgr::getSensorSyncinfo(int, int*, int*, int*, int*) */
int _ZN6NS3Av312AAASensorMgr17getSensorSyncinfoEiPiS1_S1_S1_(void);

/* Symbol: _ZN6NS3Av312AAASensorMgrC1Ev */
/* Demangled: NS3Av3::AAASensorMgr::AAASensorMgr() */
int _ZN6NS3Av312AAASensorMgrC1Ev(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EEE;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault13setSensorModeENS_13ESensorMode_TEjji */
/* Demangled: NSIspTuning::LscMgrDefault::setSensorMode(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
int _ZN11NSIspTuning13LscMgrDefault13setSensorModeENS_13ESensorMode_TEjji(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC6putBufERN11NSIspTuning7ILscBufE */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putBuf(NSIspTuning::ILscBuf&) */
int _ZN13NSIspTuningv311ISP_MGR_LSC6putBufERN11NSIspTuning7ILscBufE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft13destroyThreadEv */
/* Demangled: NSIspTuning::TsfDft::destroyThread() */
int _ZN11NSIspTuning6TsfDft13destroyThreadEv(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC5applyEN11NSIspTuning13EIspProfile_TER9TuningMgri */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::apply(NSIspTuning::EIspProfile_T, TuningMgr&, int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC5applyEN11NSIspTuning13EIspProfile_TER9TuningMgri(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EEE;

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EEE;

/* Symbol: _ZNK11NSIspTuning7ILscBuf4dumpEPKc */
/* Demangled: NSIspTuning::ILscBuf::dump(char const*) const */
int _ZNK11NSIspTuning7ILscBuf4dumpEPKc(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_BASE13dumpRegInfoP1EPKc */
/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegInfoP1(char const*) */
int _ZN13NSIspTuningv312ISP_MGR_BASE13dumpRegInfoP1EPKc(void);

/* Symbol: _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EEE;

/* Symbol: _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERNS_7ILscTblE */
/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(NSIspTuning::ILscTbl&) const */
int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERNS_7ILscTblE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault8getCTIdxEv */
/* Demangled: NSIspTuning::LscMgrDefault::getCTIdx() */
int _ZN11NSIspTuning13LscMgrDefault8getCTIdxEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft17tsfSetBufAndRatioEPPNS_7ILscBufEj */
/* Demangled: NSIspTuning::TsfDft::tsfSetBufAndRatio(NSIspTuning::ILscBuf**, unsigned int) */
int _ZN11NSIspTuning6TsfDft17tsfSetBufAndRatioEPPNS_7ILscBufEj(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC8putRatioEj */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putRatio(unsigned int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC8putRatioEj(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr27setStereoFrameSyncExpAndFpsEijj */
/* Demangled: NS3Av3::AAASensorMgr::setStereoFrameSyncExpAndFps(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr27setStereoFrameSyncExpAndFpsEijj(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN11LscNvramImpD2Ev */
/* Demangled: LscNvramImp::~LscNvramImp() */
int _ZN11LscNvramImpD2Ev(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC7putAddrEj */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putAddr(unsigned int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC7putAddrEj(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EEE;

/* Symbol: _ZN9LscImgBuf8allocBufEjj */
/* Demangled: LscImgBuf::allocBuf(unsigned int, unsigned int) */
int _ZN9LscImgBuf8allocBufEjj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault18doThreadSendSensorEv */
/* Demangled: NSIspTuning::LscMgrDefault::doThreadSendSensor() */
int _ZN11NSIspTuning13LscMgrDefault18doThreadSendSensorEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault18showResolutionInfoEv */
/* Demangled: NSIspTuning::LscMgrDefault::showResolutionInfo() */
int _ZN11NSIspTuning13LscMgrDefault18showResolutionInfoEv(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC7getAddrEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getAddr() */
int _ZN13NSIspTuningv311ISP_MGR_LSC7getAddrEv(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZN10LscImemBuf8validateEv */
/* Demangled: LscImemBuf::validate() */
int _ZN10LscImemBuf8validateEv(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrlD2Ev */
/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
int _ZN6NS3Av316IspTuningBufCtrlD2Ev(void);

/* Symbol: _ZN10LscImemBuf9editTableEv */
/* Demangled: LscImemBuf::editTable() */
int _ZN10LscImemBuf9editTableEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault14createInstanceENS_12ESensorDev_TEi */
/* Demangled: NSIspTuning::LscMgrDefault::createInstance(NSIspTuning::ESensorDev_T, int) */
int _ZN11NSIspTuning13LscMgrDefault14createInstanceENS_12ESensorDev_TEi(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault20CCTOPSetSdblkFileCfgEiPKc */
/* Demangled: NSIspTuning::LscMgrDefault::CCTOPSetSdblkFileCfg(int, char const*) */
int _ZN11NSIspTuning13LscMgrDefault20CCTOPSetSdblkFileCfgEiPKc(void);

/* Symbol: _ZN10LscImemBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE */
/* Demangled: LscImemBuf::setConfig(NSIspTuning::ILscTable::Config) */
int _ZN10LscImemBuf9setConfigEN11NSIspTuning9ILscTable6ConfigE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault8getOnOffEv */
/* Demangled: NSIspTuning::LscMgrDefault::getOnOff() const */
int _ZNK11NSIspTuning13LscMgrDefault8getOnOffEv(void);

/* Symbol: _ZThn4_N11NSIspTuning6TsfDftD0Ev */
/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::~TsfDft() */
int _ZThn4_N11NSIspTuning6TsfDftD0Ev(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl13clearP1BufferEv */
/* Demangled: NS3Av3::IspTuningBufCtrl::clearP1Buffer() */
int _ZN6NS3Av316IspTuningBufCtrl13clearP1BufferEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDftD0Ev */
/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
int _ZN11NSIspTuning6TsfDftD0Ev(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC3getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC& NSIspTuningv3::ISP_MGR_LSC::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&) */
int _ZN13NSIspTuningv311ISP_MGR_LSC3getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr18setSensorFrameRateEij */
/* Demangled: NS3Av3::AAASensorMgr::setSensorFrameRate(int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr18setSensorFrameRateEij(void);

/* Symbol: _ZN11NSIspTuning7ILscBufD1Ev */
/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
int _ZN11NSIspTuning7ILscBufD1Ev(void);

/* Symbol: _ZN11NSIspTuning11OpenShadingD0Ev */
/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
int _ZN11NSIspTuning11OpenShadingD0Ev(void);

/* Symbol: _ZN11NSIspTuning6TsfDft7tsfMainEv */
/* Demangled: NSIspTuning::TsfDft::tsfMain() */
int _ZN11NSIspTuning6TsfDft7tsfMainEv(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC25resetEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::reset() */
int _ZN13NSIspTuningv312ISP_MGR_LSC25resetEv(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZTV10LscImemBuf */
/* Demangled: vtable for LscImemBuf */
extern void* _ZTV10LscImemBuf;

/* Symbol: _ZTVN11NSIspTuning13LscMgrDefaultE */
/* Demangled: vtable for NSIspTuning::LscMgrDefault */
extern void* _ZTVN11NSIspTuning13LscMgrDefaultE;

/* Symbol: _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EEE;

/* Symbol: _ZN11NSIspTuning7ILscBuf8setTableEPKvj */
/* Demangled: NSIspTuning::ILscBuf::setTable(void const*, unsigned int) */
int _ZN11NSIspTuning7ILscBuf8setTableEPKvj(void);

/* Symbol: _ZN11LscNvramImp16importEEPromDataEv */
/* Demangled: LscNvramImp::importEEPromData() */
int _ZN11LscNvramImp16importEEPromDataEv(void);

/* Symbol: _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TE */
/* Demangled: LscNvramImp::getLut(NSIspTuning::ESensorMode_T) const */
int _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft12createThreadEv */
/* Demangled: NSIspTuning::TsfDft::createThread() */
int _ZN11NSIspTuning6TsfDft12createThreadEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr24setCaptureLineBaseParamsEijj */
/* Demangled: NS3Av3::AAASensorMgr::setCaptureLineBaseParams(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr24setCaptureLineBaseParamsEijj(void);

/* Symbol: _ZN13NSIspTuningv316convertCcmFormatEPKiRN11NSIspTuning15ISP_NVRAM_CCM_TE */
/* Demangled: NSIspTuningv3::convertCcmFormat(int const*, NSIspTuning::ISP_NVRAM_CCM_T&) */
int _ZN13NSIspTuningv316convertCcmFormatEPKiRN11NSIspTuning15ISP_NVRAM_CCM_TE(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning6TsfDft6tsfRunERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufEPS5_S6_ */
/* Demangled: NSIspTuning::TsfDft::tsfRun(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf**, NSIspTuning::ILscBuf**) */
int _ZN11NSIspTuning6TsfDft6tsfRunERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufEPS5_S6_(void);

/* Symbol: _ZN9LscImgBufD1Ev */
/* Demangled: LscImgBuf::~LscImgBuf() */
int _ZN9LscImgBufD1Ev(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault6uninitEv */
/* Demangled: NSIspTuning::LscMgrDefault::uninit() */
int _ZN11NSIspTuning13LscMgrDefault6uninitEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault7syncBufEPNS_7ILscBufENS_7ILscMgr14E_LSC_MODULE_TE */
/* Demangled: NSIspTuning::LscMgrDefault::syncBuf(NSIspTuning::ILscBuf*, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
int _ZN11NSIspTuning13LscMgrDefault7syncBufEPNS_7ILscBufENS_7ILscMgr14E_LSC_MODULE_TE(void);

/* Symbol: _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZGVZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NS3Av3::IspTuningBufCtrlDev<2>::getInstance()::singleton */
extern void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton;

/* Symbol: _ZN10LscImemBuf10initMemBufEi */
/* Demangled: LscImemBuf::initMemBuf(int) */
int _ZN10LscImemBuf10initMemBufEi(void);

/* Symbol: _ZN11NSIspTuning11OpenShading4initEv */
/* Demangled: NSIspTuning::OpenShading::init() */
int _ZN11NSIspTuning11OpenShading4initEv(void);

/* Symbol: AAA_TRACE_LEVEL */
/* Demangled: AAA_TRACE_LEVEL */
extern void* AAA_TRACE_LEVEL;

/* Symbol: _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning13LscMgrDefaultC1ENS_12ESensorDev_TEi */
/* Demangled: NSIspTuning::LscMgrDefault::LscMgrDefault(NSIspTuning::ESensorDev_T, int) */
int _ZN11NSIspTuning13LscMgrDefaultC1ENS_12ESensorDev_TEi(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault8getP2BufEv */
/* Demangled: NSIspTuning::LscMgrDefault::getP2Buf() const */
int _ZNK11NSIspTuning13LscMgrDefault8getP2BufEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr18getSensorModeDelayEiPi */
/* Demangled: NS3Av3::AAASensorMgr::getSensorModeDelay(int, int*) */
int _ZN6NS3Av312AAASensorMgr18getSensorModeDelayEiPi(void);

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault14setFactoryModeEi */
/* Demangled: NSIspTuning::LscMgrDefault::setFactoryMode(int) */
int _ZN11NSIspTuning13LscMgrDefault14setFactoryModeEi(void);

/* Symbol: _ZN11NSIspTuning6TsfDft8setOnOffEi */
/* Demangled: NSIspTuning::TsfDft::setOnOff(int) */
int _ZN11NSIspTuning6TsfDft8setOnOffEi(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr15setSensorOBLockEii */
/* Demangled: NS3Av3::AAASensorMgr::setSensorOBLock(int, int) */
int _ZN6NS3Av312AAASensorMgr15setSensorOBLockEii(void);

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERN7android6VectorIhEE */
/* Demangled: NSIspTuning::LscMgrDefault::getCurrTbl(android::Vector<unsigned char>&) const */
int _ZNK11NSIspTuning13LscMgrDefault10getCurrTblERN7android6VectorIhEE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16disableFrameSyncEv */
/* Demangled: NS3Av3::AAASensorMgr::disableFrameSync() */
int _ZN6NS3Av312AAASensorMgr16disableFrameSyncEv(void);

/* Symbol: _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P211getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P211getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN11LscNvramImp12doThreadFuncEv */
/* Demangled: LscNvramImp::doThreadFunc() */
int _ZN11LscNvramImp12doThreadFuncEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft15destroyInstanceEv */
/* Demangled: NSIspTuning::TsfDft::destroyInstance() */
int _ZN11NSIspTuning6TsfDft15destroyInstanceEv(void);

/* Symbol: _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EEE;

/* Symbol: _ZGVZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NS3Av3::IspTuningBufCtrlDev<1>::getInstance()::singleton */
extern void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN6NS3Av319IspTuningBufCtrlDevILi8EEE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrlDev<8> */
extern void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi8EEE;

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf9getConfigEv */
/* Demangled: NSIspTuning::ILscBuf::getConfig() const */
int _ZNK11NSIspTuning7ILscBuf9getConfigEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE */
/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) const */
int _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN11NSIspTuning11OpenShading6uninitEv */
/* Demangled: NSIspTuning::OpenShading::uninit() */
int _ZN11NSIspTuning11OpenShading6uninitEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDftD2Ev */
/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
int _ZN11NSIspTuning6TsfDftD2Ev(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault8setOnOffEi */
/* Demangled: NSIspTuning::LscMgrDefault::setOnOff(int) */
int _ZN11NSIspTuning13LscMgrDefault8setOnOffEi(void);

/* Symbol: _ZN11NSIspTuning11OpenShadingD2Ev */
/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
int _ZN11NSIspTuning11OpenShadingD2Ev(void);

/* Symbol: _ZN11NSIspTuning6TsfDft17loadOtpDataForTsfEv */
/* Demangled: NSIspTuning::TsfDft::loadOtpDataForTsf() */
int _ZN11NSIspTuning6TsfDft17loadOtpDataForTsfEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault13getCurTrfmCfgEv */
/* Demangled: NSIspTuning::LscMgrDefault::getCurTrfmCfg() const */
int _ZNK11NSIspTuning13LscMgrDefault13getCurTrfmCfgEv(void);

/* Symbol: _ZThn4_N11NSIspTuning6TsfDft10doNotifyCbEi */
/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::doNotifyCb(int) */
int _ZThn4_N11NSIspTuning6TsfDft10doNotifyCbEi(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN6NS3Av319IspTuningBufCtrlDevILi16EEE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrlDev<16> */
extern void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi16EEE;

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC14putBufAndRatioERN11NSIspTuning7ILscBufEj */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::putBufAndRatio(NSIspTuning::ILscBuf&, unsigned int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC14putBufAndRatioERN11NSIspTuning7ILscBufEj(void);

/* Symbol: _ZNK11NSIspTuning6TsfDft7convertERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufER28MTK_TSF_SET_PROC_INFO_STRUCT */
/* Demangled: NSIspTuning::TsfDft::convert(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, MTK_TSF_SET_PROC_INFO_STRUCT&) const */
int _ZNK11NSIspTuning6TsfDft7convertERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufER28MTK_TSF_SET_PROC_INFO_STRUCT(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf8showInfoEv */
/* Demangled: NSIspTuning::ILscBuf::showInfo() const */
int _ZNK11NSIspTuning7ILscBuf8showInfoEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgrD1Ev */
/* Demangled: NS3Av3::AAASensorMgr::~AAASensorMgr() */
int _ZN6NS3Av312AAASensorMgrD1Ev(void);

/* Symbol: _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EEE;

/* Symbol: _ZTVN6NS3Av319IspTuningBufCtrlDevILi4EEE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrlDev<4> */
extern void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi4EEE;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault9updateTsfERKNS_7ILscMgr16TSF_INPUT_INFO_TE */
/* Demangled: NSIspTuning::LscMgrDefault::updateTsf(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
int _ZN11NSIspTuning13LscMgrDefault9updateTsfERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr11getInstanceEv */
/* Demangled: NS3Av3::AAASensorMgr::getInstance() */
int _ZN6NS3Av312AAASensorMgr11getInstanceEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr21getSensorMaxFrameRateEiPj */
/* Demangled: NS3Av3::AAASensorMgr::getSensorMaxFrameRate(int, unsigned int*) */
int _ZN6NS3Av312AAASensorMgr21getSensorMaxFrameRateEiPj(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_BASE11dumpRegInfoEPKc */
/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegInfo(char const*) */
int _ZN13NSIspTuningv312ISP_MGR_BASE11dumpRegInfoEPKc(void);

/* Symbol: _ZZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton */
/* Demangled: NS3Av3::IspTuningBufCtrlDev<4>::getInstance()::singleton */
extern void* _ZZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11setTsfOnOffEi */
/* Demangled: NSIspTuning::LscMgrDefault::setTsfOnOff(int) */
int _ZN11NSIspTuning13LscMgrDefault11setTsfOnOffEi(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefaultD0Ev */
/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
int _ZN11NSIspTuning13LscMgrDefaultD0Ev(void);

/* Symbol: _ZN11NSIspTuning6TsfDft12setDebugInfoEPv */
/* Demangled: NSIspTuning::TsfDft::setDebugInfo(void*) */
int _ZN11NSIspTuning6TsfDft12setDebugInfoEPv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9createTsfEv */
/* Demangled: NSIspTuning::TsfDft::createTsf() */
int _ZN11NSIspTuning6TsfDft9createTsfEv(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf8setRatioEj */
/* Demangled: NSIspTuning::ILscBuf::setRatio(unsigned int) */
int _ZN11NSIspTuning7ILscBuf8setRatioEj(void);

/* Symbol: _ZN11NSIspTuning6TsfDft6uninitEv */
/* Demangled: NSIspTuning::TsfDft::uninit() */
int _ZN11NSIspTuning6TsfDft6uninitEv(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN6NS3Av316IspTuningBufCtrlC1Ev */
/* Demangled: NS3Av3::IspTuningBufCtrl::IspTuningBufCtrl() */
int _ZN6NS3Av316IspTuningBufCtrlC1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZN10LscImemBuf10freeMemBufER13IMEM_BUF_INFO */
/* Demangled: LscImemBuf::freeMemBuf(IMEM_BUF_INFO&) */
int _ZN10LscImemBuf10freeMemBufER13IMEM_BUF_INFO(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault8setRatioEj */
/* Demangled: NSIspTuning::LscMgrDefault::setRatio(unsigned int) */
int _ZN11NSIspTuning13LscMgrDefault8setRatioEj(void);

/* Symbol: _ZN11NSIspTuning11OpenShading12setIsFactoryEi */
/* Demangled: NSIspTuning::OpenShading::setIsFactory(int) */
int _ZN11NSIspTuning11OpenShading12setIsFactoryEi(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr22setPreviewMaxFrameRateEijj */
/* Demangled: NS3Av3::AAASensorMgr::setPreviewMaxFrameRate(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr22setPreviewMaxFrameRateEijj(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault4initEv */
/* Demangled: NSIspTuning::LscMgrDefault::init() */
int _ZN11NSIspTuning13LscMgrDefault4initEv(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC5isBinEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::isBin() */
int _ZN13NSIspTuningv311ISP_MGR_LSC5isBinEv(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC28isEnableEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::isEnable() */
int _ZN13NSIspTuningv312ISP_MGR_LSC28isEnableEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDftC1Ej */
/* Demangled: NSIspTuning::TsfDft::TsfDft(unsigned int) */
int _ZN11NSIspTuning6TsfDftC1Ej(void);

/* Symbol: _ZNK11NSIspTuning6TsfDft11getRsvdDataEv */
/* Demangled: NSIspTuning::TsfDft::getRsvdData() const */
int _ZNK11NSIspTuning6TsfDft11getRsvdDataEv(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11getSensorIdEv */
/* Demangled: NSIspTuning::LscMgrDefault::getSensorId() */
int _ZN11NSIspTuning13LscMgrDefault11getSensorIdEv(void);

/* Symbol: _ZN11NSIspTuning11OpenShadingC1Ej */
/* Demangled: NSIspTuning::OpenShading::OpenShading(unsigned int) */
int _ZN11NSIspTuning11OpenShadingC1Ej(void);

/* Symbol: _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZN10LscImemBuf8setTableEPKvj */
/* Demangled: LscImemBuf::setTable(void const*, unsigned int) */
int _ZN10LscImemBuf8setTableEPKvj(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf9LscBufImpD0Ev */
/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
int _ZN11NSIspTuning7ILscBuf9LscBufImpD0Ev(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr19setSensorShadingTblEiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEEj */
/* Demangled: NS3Av3::AAASensorMgr::setSensorShadingTbl(int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) */
int _ZN6NS3Av312AAASensorMgr19setSensorShadingTblEiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEEj(void);

/* Symbol: _ZN11NSIspTuning11OpenShading8setOnOffEi */
/* Demangled: NSIspTuning::OpenShading::setOnOff(int) */
int _ZN11NSIspTuning11OpenShading8setOnOffEi(void);

/* Symbol: _ZN11NSIspTuning6TsfDft14getDumpFileCfgEPc */
/* Demangled: NSIspTuning::TsfDft::getDumpFileCfg(char*) */
int _ZN11NSIspTuning6TsfDft14getDumpFileCfgEPc(void);

/* Symbol: _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: _ZN10LscImemBuf12uninitMemBufEv */
/* Demangled: LscImemBuf::uninitMemBuf() */
int _ZN10LscImemBuf12uninitMemBufEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9tsfSetBufEPNS_7ILscBufE */
/* Demangled: NSIspTuning::TsfDft::tsfSetBuf(NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning6TsfDft9tsfSetBufEPNS_7ILscBufE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16setSensorExpTimeEij */
/* Demangled: NS3Av3::AAASensorMgr::setSensorExpTime(int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr16setSensorExpTimeEij(void);

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11getInstanceENS_12ESensorDev_TE */
/* Demangled: NSIspTuning::LscMgrDefault::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN11NSIspTuning13LscMgrDefault11getInstanceENS_12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft6isInitEv */
/* Demangled: NSIspTuning::TsfDft::isInit() */
int _ZN11NSIspTuning6TsfDft6isInitEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft7tsfInitEv */
/* Demangled: NSIspTuning::TsfDft::tsfInit() */
int _ZN11NSIspTuning6TsfDft7tsfInitEv(void);

/* Symbol: _ZTVN13NSIspTuningv312ISP_MGR_BASEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_BASE */
extern void* _ZTVN13NSIspTuningv312ISP_MGR_BASEE;

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EEE;

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TEj */
/* Demangled: LscNvramImp::getLut(NSIspTuning::ESensorMode_T, unsigned int) const */
int _ZNK11LscNvramImp6getLutEN11NSIspTuning13ESensorMode_TEj(void);

/* Symbol: _ZN11NSIspTuning6TsfDft8waitDoneEv */
/* Demangled: NSIspTuning::TsfDft::waitDone() */
int _ZN11NSIspTuning6TsfDft8waitDoneEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr17set2ShutterParamsEijjj */
/* Demangled: NS3Av3::AAASensorMgr::set2ShutterParams(int, unsigned int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr17set2ShutterParamsEijjj(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr24updateStereoFrameSyncFpsEiijj */
/* Demangled: NS3Av3::AAASensorMgr::updateStereoFrameSyncFps(int, int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr24updateStereoFrameSyncFpsEiijj(void);

/* Symbol: _ZZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton */
/* Demangled: NS3Av3::IspTuningBufCtrlDev<2>::getInstance()::singleton */
extern void* _ZZN6NS3Av319IspTuningBufCtrlDevILi2EE11getInstanceEvE9singleton;

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _ZN11NSIspTuning7ILscTsf14createInstanceEjNS0_16E_LSC_TSF_TYPE_TE */
/* Demangled: NSIspTuning::ILscTsf::createInstance(unsigned int, NSIspTuning::ILscTsf::E_LSC_TSF_TYPE_T) */
int _ZN11NSIspTuning7ILscTsf14createInstanceEjNS0_16E_LSC_TSF_TYPE_TE(void);

/* Symbol: _ZZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton */
/* Demangled: NS3Av3::IspTuningBufCtrlDev<16>::getInstance()::singleton */
extern void* _ZZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault16setSensorTblFlowEv */
/* Demangled: NSIspTuning::LscMgrDefault::setSensorTblFlow() */
int _ZN11NSIspTuning13LscMgrDefault16setSensorTblFlowEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft12tsfGetResultEPNS_7ILscBufE */
/* Demangled: NSIspTuning::TsfDft::tsfGetResult(NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning6TsfDft12tsfGetResultEPNS_7ILscBufE(void);

/* Symbol: _ZNK11NSIspTuning6TsfDft8getOnOffEv */
/* Demangled: NSIspTuning::TsfDft::getOnOff() const */
int _ZNK11NSIspTuning6TsfDft8getOnOffEv(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_BASE8dumpRegsEv */
/* Demangled: NSIspTuningv3::ISP_MGR_BASE::dumpRegs() */
int _ZN13NSIspTuningv312ISP_MGR_BASE8dumpRegsEv(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZGVZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NS3Av3::IspTuningBufCtrlDev<16>::getInstance()::singleton */
extern void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi16EE11getInstanceEvE9singleton;

/* Symbol: _ZNK11NSIspTuning7ILscBuf5getFDEv */
/* Demangled: NSIspTuning::ILscBuf::getFD() const */
int _ZNK11NSIspTuning7ILscBuf5getFDEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault13doShadingTrfmEv */
/* Demangled: NSIspTuning::LscMgrDefault::doShadingTrfm() */
int _ZN11NSIspTuning13LscMgrDefault13doShadingTrfmEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefaultD2Ev */
/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
int _ZN11NSIspTuning13LscMgrDefaultD2Ev(void);

/* Symbol: _ZNK11NSIspTuning11OpenShading8getOnOffEv */
/* Demangled: NSIspTuning::OpenShading::getOnOff() const */
int _ZNK11NSIspTuning11OpenShading8getOnOffEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr19setSensorHDRTriGainEijjj */
/* Demangled: NS3Av3::AAASensorMgr::setSensorHDRTriGain(int, unsigned int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr19setSensorHDRTriGainEijjj(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_BASE17addressErrorCheckEPKc */
/* Demangled: NSIspTuningv3::ISP_MGR_BASE::addressErrorCheck(char const*) */
int _ZN13NSIspTuningv312ISP_MGR_BASE17addressErrorCheckEPKc(void);

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _ZN10LscImemBuf11allocMemBufER13IMEM_BUF_INFOj */
/* Demangled: LscImemBuf::allocMemBuf(IMEM_BUF_INFO&, unsigned int) */
int _ZN10LscImemBuf11allocMemBufER13IMEM_BUF_INFOj(void);

/* Symbol: _ZNK10LscImemBuf10getPhyAddrEv */
/* Demangled: LscImemBuf::getPhyAddr() const */
int _ZNK10LscImemBuf10getPhyAddrEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16setPreviewParamsEijj */
/* Demangled: NS3Av3::AAASensorMgr::setPreviewParams(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr16setPreviewParamsEijj(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZNK13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEEiRT_PVK13_dip_x_reg_t_ */
/* Demangled: int NSIspTuningv3::ISP_MGR_LSC2::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&, _dip_x_reg_t_ const volatile*) const */
int _ZNK13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEEiRT_PVK13_dip_x_reg_t_(void);

/* Symbol: _ZZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton */
/* Demangled: NS3Av3::IspTuningBufCtrlDev<1>::getInstance()::singleton */
extern void* _ZZN6NS3Av319IspTuningBufCtrlDevILi1EE11getInstanceEvE9singleton;

/* Symbol: _ZN10LscImemBufD0Ev */
/* Demangled: LscImemBuf::~LscImemBuf() */
int _ZN10LscImemBufD0Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscBufC1EjjiPKcNS0_12E_BUF_MODE_TE */
/* Demangled: NSIspTuning::ILscBuf::ILscBuf(unsigned int, unsigned int, int, char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
int _ZN11NSIspTuning7ILscBufC1EjjiPKcNS0_12E_BUF_MODE_TE(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf8getTableEv */
/* Demangled: NSIspTuning::ILscBuf::getTable() const */
int _ZNK11NSIspTuning7ILscBuf8getTableEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault9getCapLutEj */
/* Demangled: NSIspTuning::LscMgrDefault::getCapLut(unsigned int) const */
int _ZNK11NSIspTuning13LscMgrDefault9getCapLutEj(void);

/* Symbol: _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC12getBinConfigEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getBinConfig() */
int _ZN13NSIspTuningv311ISP_MGR_LSC12getBinConfigEv(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault10getRawSizeENS_13ESensorMode_TERjS2_ */
/* Demangled: NSIspTuning::LscMgrDefault::getRawSize(NSIspTuning::ESensorMode_T, unsigned int&, unsigned int&) const */
int _ZNK11NSIspTuning13LscMgrDefault10getRawSizeENS_13ESensorMode_TERjS2_(void);

/* Symbol: _ZN11NSIspTuning6TsfDft12tsfReformTblEv */
/* Demangled: NSIspTuning::TsfDft::tsfReformTbl() */
int _ZN11NSIspTuning6TsfDft12tsfReformTblEv(void);

/* Symbol: _ZTVN13NSIspTuningv312ISP_MGR_LSC2E */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2 */
extern void* _ZTVN13NSIspTuningv312ISP_MGR_LSC2E;

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf9LscBufImpD2Ev */
/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
int _ZN11NSIspTuning7ILscBuf9LscBufImpD2Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscBufC2EjjiPKcNS0_12E_BUF_MODE_TE */
/* Demangled: NSIspTuning::ILscBuf::ILscBuf(unsigned int, unsigned int, int, char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
int _ZN11NSIspTuning7ILscBufC2EjjiPKcNS0_12E_BUF_MODE_TE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault6configEN6NS3Av315shadingConfig_TE */
/* Demangled: NSIspTuning::LscMgrDefault::config(NS3Av3::shadingConfig_T) */
int _ZN11NSIspTuning13LscMgrDefault6configEN6NS3Av315shadingConfig_TE(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC8setIsBinEi */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::setIsBin(int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC8setIsBinEi(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16setSensorExpLineEij */
/* Demangled: NS3Av3::AAASensorMgr::setSensorExpLine(int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr16setSensorExpLineEij(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE8EEE;

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: _ZN11LscNvramImp11getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: LscNvramImp::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN11LscNvramImp11getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning7ILscMgr11getInstanceENS_12ESensorDev_TE */
/* Demangled: NSIspTuning::ILscMgr::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN11NSIspTuning7ILscMgr11getInstanceENS_12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault10CCTOPResetEv */
/* Demangled: NSIspTuning::LscMgrDefault::CCTOPReset() */
int _ZN11NSIspTuning13LscMgrDefault10CCTOPResetEv(void);

/* Symbol: _ZN11NSIspTuning11OpenShading9setConfigENS_13ESensorMode_TEjji */
/* Demangled: NSIspTuning::OpenShading::setConfig(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
int _ZN11NSIspTuning11OpenShading9setConfigENS_13ESensorMode_TEjji(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault7syncTblERKNS_7ILscTblENS_7ILscMgr14E_LSC_MODULE_TE */
/* Demangled: NSIspTuning::LscMgrDefault::syncTbl(NSIspTuning::ILscTbl const&, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
int _ZN11NSIspTuning13LscMgrDefault7syncTblERKNS_7ILscTblENS_7ILscMgr14E_LSC_MODULE_TE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault8getRatioEv */
/* Demangled: NSIspTuning::LscMgrDefault::getRatio() const */
int _ZNK11NSIspTuning13LscMgrDefault8getRatioEv(void);

/* Symbol: _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN11NSIspTuning11OpenShadingE */
/* Demangled: vtable for NSIspTuning::OpenShading */
extern void* _ZTVN11NSIspTuning11OpenShadingE;

/* Symbol: _ZNK9LscImgBuf5getFDEv */
/* Demangled: LscImgBuf::getFD() const */
int _ZNK9LscImgBuf5getFDEv(void);

/* Symbol: _ZNSt3__110__list_impIPN11NSIspTuning7ILscBufENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSIspTuning::ILscBuf*, std::__1::allocator<NSIspTuning::ILscBuf*> >::clear() */
int _ZNSt3__110__list_impIPN11NSIspTuning7ILscBufENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr15getSensorVCinfoEiPNS_16SENSOR_VC_INFO_TEi */
/* Demangled: NS3Av3::AAASensorMgr::getSensorVCinfo(int, NS3Av3::SENSOR_VC_INFO_T*, int) */
int _ZN6NS3Av312AAASensorMgr15getSensorVCinfoEiPNS_16SENSOR_VC_INFO_TEi(void);

/* Symbol: _ZN11NSIspTuning6TsfDft14tsfSetProcInfoERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufE */
/* Demangled: NSIspTuning::TsfDft::tsfSetProcInfo(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning6TsfDft14tsfSetProcInfoERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16setSensorAWBGainEiP16strSensorAWBGain */
/* Demangled: NS3Av3::AAASensorMgr::setSensorAWBGain(int, strSensorAWBGain*) */
int _ZN6NS3Av312AAASensorMgr16setSensorAWBGainEiP16strSensorAWBGain(void);

/* Symbol: _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN9LscImgBuf8validateEv */
/* Demangled: LscImgBuf::validate() */
int _ZN9LscImgBuf8validateEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault17convertSensorCropEiRKNS0_16SensorCropInfo_TES3_RNS_9ILscTable14TransformCfg_TE */
/* Demangled: NSIspTuning::LscMgrDefault::convertSensorCrop(int, NSIspTuning::LscMgrDefault::SensorCropInfo_T const&, NSIspTuning::LscMgrDefault::SensorCropInfo_T const&, NSIspTuning::ILscTable::TransformCfg_T&) */
int _ZN11NSIspTuning13LscMgrDefault17convertSensorCropEiRKNS0_16SensorCropInfo_TES3_RNS_9ILscTable14TransformCfg_TE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_13ESensorMode_TERNS0_16SensorCropInfo_TE */
/* Demangled: NSIspTuning::LscMgrDefault::getResolution(NSIspTuning::ESensorMode_T, NSIspTuning::LscMgrDefault::SensorCropInfo_T&) const */
int _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_13ESensorMode_TERNS0_16SensorCropInfo_TE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault6getLutEj */
/* Demangled: NSIspTuning::LscMgrDefault::getLut(unsigned int) const */
int _ZNK11NSIspTuning13LscMgrDefault6getLutEj(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr23enableSensorTestPatternEi */
/* Demangled: NS3Av3::AAASensorMgr::enableSensorTestPattern(int) */
int _ZN6NS3Av312AAASensorMgr23enableSensorTestPatternEi(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EEE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNK9LscImgBuf8getTableEv */
/* Demangled: LscImgBuf::getTable() const */
int _ZNK9LscImgBuf8getTableEv(void);

/* Symbol: _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P13getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P1_TEEERS0_RT_ */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1& NSIspTuningv3::ISP_MGR_CTL_EN_P1::get<NSIspTuning::ISP_NVRAM_CTL_EN_P1_T>(NSIspTuning::ISP_NVRAM_CTL_EN_P1_T&) */
int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P13getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P1_TEEERS0_RT_(void);

/* Symbol: _ZN11LscNvramImpD1Ev */
/* Demangled: LscNvramImp::~LscNvramImp() */
int _ZN11LscNvramImpD1Ev(void);

/* Symbol: _ZN10LscImemBufD2Ev */
/* Demangled: LscImemBuf::~LscImemBuf() */
int _ZN10LscImemBufD2Ev(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11resetLscTblEv */
/* Demangled: NSIspTuning::LscMgrDefault::resetLscTbl() */
int _ZN11NSIspTuning13LscMgrDefault11resetLscTblEv(void);

/* Symbol: _ZN11LscNvramImp10threadLoopEPv */
/* Demangled: LscNvramImp::threadLoop(void*) */
int _ZN11LscNvramImp10threadLoopEPv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault12calSl2ConfigEjjRNS_7ILscMgr9SL2_CFG_TE */
/* Demangled: NSIspTuning::LscMgrDefault::calSl2Config(unsigned int, unsigned int, NSIspTuning::ILscMgr::SL2_CFG_T&) const */
int _ZNK11NSIspTuning13LscMgrDefault12calSl2ConfigEjjRNS_7ILscMgr9SL2_CFG_TE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr26getPreviewDefaultFrameRateEij */
/* Demangled: NS3Av3::AAASensorMgr::getPreviewDefaultFrameRate(int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr26getPreviewDefaultFrameRateEij(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrlD1Ev */
/* Demangled: NS3Av3::IspTuningBufCtrl::~IspTuningBufCtrl() */
int _ZN6NS3Av316IspTuningBufCtrlD1Ev(void);

/* Symbol: _ZN11NSIspTuning9ILscNvram11getInstanceENS_12ESensorDev_TE */
/* Demangled: NSIspTuning::ILscNvram::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN11NSIspTuning9ILscNvram11getInstanceENS_12ESensorDev_TE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr17setSensorDualGainEijj */
/* Demangled: NS3Av3::AAASensorMgr::setSensorDualGain(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr17setSensorDualGainEijj(void);

/* Symbol: _ZTVN11NSIspTuning7ILscBufE */
/* Demangled: vtable for NSIspTuning::ILscBuf */
extern void* _ZTVN11NSIspTuning7ILscBufE;

/* Symbol: _ZN11NSIspTuning6TsfDft12doThreadFuncEv */
/* Demangled: NSIspTuning::TsfDft::doThreadFunc() */
int _ZN11NSIspTuning6TsfDft12doThreadFuncEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft6configEN6NS3Av315shadingConfig_TE */
/* Demangled: NSIspTuning::TsfDft::config(NS3Av3::shadingConfig_T) */
int _ZN11NSIspTuning6TsfDft6configEN6NS3Av315shadingConfig_TE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr18set2ShutterControlEijji */
/* Demangled: NS3Av3::AAASensorMgr::set2ShutterControl(int, unsigned int, unsigned int, int) */
int _ZN6NS3Av312AAASensorMgr18set2ShutterControlEijji(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr4initEi */
/* Demangled: NS3Av3::AAASensorMgr::init(int) */
int _ZN6NS3Av312AAASensorMgr4initEi(void);

/* Symbol: _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE8EEE;

/* Symbol: _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EEE;

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN6NS3Av319IspTuningBufCtrlDevILi1EEE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrlDev<1> */
extern void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi1EEE;

/* Symbol: _ZN11NSIspTuning6TsfDft10threadLoopEPv */
/* Demangled: NSIspTuning::TsfDft::threadLoop(void*) */
int _ZN11NSIspTuning6TsfDft10threadLoopEPv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr16setCaptureParamsEijj */
/* Demangled: NS3Av3::AAASensorMgr::setCaptureParams(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr16setCaptureParamsEijj(void);

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZN11NSIspTuning7ILscBufD0Ev */
/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
int _ZN11NSIspTuning7ILscBufD0Ev(void);

/* Symbol: _ZN6NS3Av312AAASensorMgrC2Ev */
/* Demangled: NS3Av3::AAASensorMgr::AAASensorMgr() */
int _ZN6NS3Av312AAASensorMgrC2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short*, std::__1::allocator<unsigned short*>&>&) */
int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZN9LscImgBufC1EjjPKc */
/* Demangled: LscImgBuf::LscImgBuf(unsigned int, unsigned int, char const*) */
int _ZN9LscImgBufC1EjjPKc(void);

/* Symbol: _ZNK10LscImemBuf7getSizeEv */
/* Demangled: LscImemBuf::getSize() const */
int _ZNK10LscImemBuf7getSizeEv(void);

/* Symbol: _ZNK13NSIspTuningv317ISP_MGR_CTL_EN_P23getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P2_TEEEiRT_PVK13_dip_x_reg_t_ */
/* Demangled: int NSIspTuningv3::ISP_MGR_CTL_EN_P2::get<NSIspTuning::ISP_NVRAM_CTL_EN_P2_T>(NSIspTuning::ISP_NVRAM_CTL_EN_P2_T&, _dip_x_reg_t_ const volatile*) const */
int _ZNK13NSIspTuningv317ISP_MGR_CTL_EN_P23getIN11NSIspTuning21ISP_NVRAM_CTL_EN_P2_TEEEiRT_PVK13_dip_x_reg_t_(void);

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf9LscBufImpC2EjjPKc */
/* Demangled: NSIspTuning::ILscBuf::LscBufImp::LscBufImp(unsigned int, unsigned int, char const*) */
int _ZN11NSIspTuning7ILscBuf9LscBufImpC2EjjPKc(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault12getDebugInfoER20SHADING_DEBUG_INFO_S */
/* Demangled: NSIspTuning::LscMgrDefault::getDebugInfo(SHADING_DEBUG_INFO_S&) */
int _ZN11NSIspTuning13LscMgrDefault12getDebugInfoER20SHADING_DEBUG_INFO_S(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault16threadSendSensorEPv */
/* Demangled: NSIspTuning::LscMgrDefault::threadSendSensor(void*) */
int _ZN11NSIspTuning13LscMgrDefault16threadSendSensorEPv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNS_7ILscTblE */
/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, int, NSIspTuning::ILscTbl&) const */
int _ZNK11NSIspTuning13LscMgrDefault12getGainTableEjiRNS_7ILscTblE(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr24setPreviewLineBaseParamsEijj */
/* Demangled: NS3Av3::AAASensorMgr::setPreviewLineBaseParams(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr24setPreviewLineBaseParamsEijj(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EEE;

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZN9LscImgBufD0Ev */
/* Demangled: LscImgBuf::~LscImgBuf() */
int _ZN9LscImgBufD0Ev(void);

/* Symbol: _ZN11LscNvramImpC1EN11NSIspTuning12ESensorDev_TE */
/* Demangled: LscNvramImp::LscNvramImp(NSIspTuning::ESensorDev_T) */
int _ZN11LscNvramImpC1EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE4EEE;

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC26putBufERN11NSIspTuning7ILscBufE */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::putBuf(NSIspTuning::ILscBuf&) */
int _ZN13NSIspTuningv312ISP_MGR_LSC26putBufERN11NSIspTuning7ILscBufE(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC23putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2& NSIspTuningv3::ISP_MGR_LSC2::put<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T const&) */
int _ZN13NSIspTuningv312ISP_MGR_LSC23putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_(void);

/* Symbol: _ZNK9LscImgBuf8showInfoEv */
/* Demangled: LscImgBuf::showInfo() const */
int _ZNK9LscImgBuf8showInfoEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_7ILscMgr14ELscScenario_TERNS0_16SensorCropInfo_TE */
/* Demangled: NSIspTuning::LscMgrDefault::getResolution(NSIspTuning::ILscMgr::ELscScenario_T, NSIspTuning::LscMgrDefault::SensorCropInfo_T&) const */
int _ZNK11NSIspTuning13LscMgrDefault13getResolutionENS_7ILscMgr14ELscScenario_TERNS0_16SensorCropInfo_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9setConfigENS_13ESensorMode_TEjji */
/* Demangled: NSIspTuning::TsfDft::setConfig(NSIspTuning::ESensorMode_T, unsigned int, unsigned int, int) */
int _ZN11NSIspTuning6TsfDft9setConfigENS_13ESensorMode_TEjji(void);

/* Symbol: _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZGVZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NS3Av3::IspTuningBufCtrlDev<8>::getInstance()::singleton */
extern void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning7ILscBuf6getBufEv */
/* Demangled: NSIspTuning::ILscBuf::getBuf() */
int _ZN11NSIspTuning7ILscBuf6getBufEv(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC211getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN13NSIspTuningv312ISP_MGR_LSC211getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft8tsfBatchERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_ */
/* Demangled: NSIspTuning::TsfDft::tsfBatch(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning6TsfDft8tsfBatchERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_(void);

/* Symbol: _ZNK9LscImgBuf7getSizeEv */
/* Demangled: LscImgBuf::getSize() const */
int _ZNK9LscImgBuf7getSizeEv(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC9enableLscEi */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::enableLsc(int) */
int _ZN13NSIspTuningv311ISP_MGR_LSC9enableLscEi(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11getDebugTblER23DEBUG_SHAD_ARRAY_INFO_SR20DEBUG_SHAD_ARRAY_2_S */
/* Demangled: NSIspTuning::LscMgrDefault::getDebugTbl(DEBUG_SHAD_ARRAY_INFO_S&, DEBUG_SHAD_ARRAY_2_S&) */
int _ZN11NSIspTuning13LscMgrDefault11getDebugTblER23DEBUG_SHAD_ARRAY_INFO_SR20DEBUG_SHAD_ARRAY_2_S(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault9updateLscEv */
/* Demangled: NSIspTuning::LscMgrDefault::updateLsc() */
int _ZN11NSIspTuning13LscMgrDefault9updateLscEv(void);

/* Symbol: _ZThn4_N11NSIspTuning6TsfDftD1Ev */
/* Demangled: non-virtual thunk to NSIspTuning::TsfDft::~TsfDft() */
int _ZThn4_N11NSIspTuning6TsfDftD1Ev(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC3putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC& NSIspTuningv3::ISP_MGR_LSC::put<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T const&) */
int _ZN13NSIspTuningv311ISP_MGR_LSC3putIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RKT_(void);

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZNK11LscNvramImp15check123InNvramEv */
/* Demangled: LscNvramImp::check123InNvram() const */
int _ZNK11LscNvramImp15check123InNvramEv(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault9createBufEPKcNS_7ILscBuf12E_BUF_MODE_TE */
/* Demangled: NSIspTuning::LscMgrDefault::createBuf(char const*, NSIspTuning::ILscBuf::E_BUF_MODE_T) */
int _ZN11NSIspTuning13LscMgrDefault9createBufEPKcNS_7ILscBuf12E_BUF_MODE_TE(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC12getRawConfigEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getRawConfig() */
int _ZN13NSIspTuningv311ISP_MGR_LSC12getRawConfigEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDftD1Ev */
/* Demangled: NSIspTuning::TsfDft::~TsfDft() */
int _ZN11NSIspTuning6TsfDftD1Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscBufD2Ev */
/* Demangled: NSIspTuning::ILscBuf::~ILscBuf() */
int _ZN11NSIspTuning7ILscBufD2Ev(void);

/* Symbol: _ZN11NSIspTuning11OpenShadingD1Ev */
/* Demangled: NSIspTuning::OpenShading::~OpenShading() */
int _ZN11NSIspTuning11OpenShadingD1Ev(void);

/* Symbol: _ZN11NSIspTuning6TsfDft16TSF_INPUT_STAT_T3putERKNS_7ILscMgr16TSF_INPUT_INFO_TEjh */
/* Demangled: NSIspTuning::TsfDft::TSF_INPUT_STAT_T::put(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&, unsigned int, unsigned char) */
int _ZN11NSIspTuning6TsfDft16TSF_INPUT_STAT_T3putERKNS_7ILscMgr16TSF_INPUT_INFO_TEjh(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9tsfSetTblERKNS_7ILscTblE */
/* Demangled: NSIspTuning::TsfDft::tsfSetTbl(NSIspTuning::ILscTbl const&) */
int _ZN11NSIspTuning6TsfDft9tsfSetTblERKNS_7ILscTblE(void);

/* Symbol: _ZTVN11NSIspTuning6TsfDftE */
/* Demangled: vtable for NSIspTuning::TsfDft */
extern void* _ZTVN11NSIspTuning6TsfDftE;

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void);

/* Symbol: _ZN11NSIspTuning7ILscMgr14createInstanceENS_12ESensorDev_TEi */
/* Demangled: NSIspTuning::ILscMgr::createInstance(NSIspTuning::ESensorDev_T, int) */
int _ZN11NSIspTuning7ILscMgr14createInstanceENS_12ESensorDev_TEi(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr23enableSensorI2CBuffModeEii */
/* Demangled: NS3Av3::AAASensorMgr::enableSensorI2CBuffMode(int, int) */
int _ZN6NS3Av312AAASensorMgr23enableSensorI2CBuffModeEii(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN10LscImemBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE */
/* Demangled: LscImemBuf::setConfig(NSIspTuning::ILscBuf::Config) */
int _ZN10LscImemBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf8validateEv */
/* Demangled: NSIspTuning::ILscBuf::validate() */
int _ZN11NSIspTuning7ILscBuf8validateEv(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC17setLSCconfigParamERN11NSIspTuning9ILscTable6ConfigES4_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::setLSCconfigParam(NSIspTuning::ILscTable::Config&, NSIspTuning::ILscTable::Config&) */
int _ZN13NSIspTuningv311ISP_MGR_LSC17setLSCconfigParamERN11NSIspTuning9ILscTable6ConfigES4_(void);

/* Symbol: _ZNK11NSIspTuning6TsfDft16TSF_INPUT_STAT_T4dumpEPKc */
/* Demangled: NSIspTuning::TsfDft::TSF_INPUT_STAT_T::dump(char const*) const */
int _ZNK11NSIspTuning6TsfDft16TSF_INPUT_STAT_T4dumpEPKc(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault15getCurrTblIndexEv */
/* Demangled: NSIspTuning::LscMgrDefault::getCurrTblIndex() const */
int _ZNK11NSIspTuning13LscMgrDefault15getCurrTblIndexEv(void);

/* Symbol: _ZTVN6NS3Av316IspTuningBufCtrlE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrl */
extern void* _ZTVN6NS3Av316IspTuningBufCtrlE;

/* Symbol: _ZN9LscImgBufD2Ev */
/* Demangled: LscImgBuf::~LscImgBuf() */
int _ZN9LscImgBufD2Ev(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault17CCTOPSetBypass123Ei */
/* Demangled: NSIspTuning::LscMgrDefault::CCTOPSetBypass123(int) */
int _ZN11NSIspTuning13LscMgrDefault17CCTOPSetBypass123Ei(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault6getSl2Ev */
/* Demangled: NSIspTuning::LscMgrDefault::getSl2() const */
int _ZNK11NSIspTuning13LscMgrDefault6getSl2Ev(void);

/* Symbol: _ZN11NSIspTuning6TsfDft19changeThreadSettingEv */
/* Demangled: NSIspTuning::TsfDft::changeThreadSetting() */
int _ZN11NSIspTuning6TsfDft19changeThreadSettingEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE */
/* Demangled: NSIspTuning::TsfDft::update(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
int _ZN11NSIspTuning6TsfDft6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void);

/* Symbol: _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning13LscMgrDefaultC2ENS_12ESensorDev_TEi */
/* Demangled: NSIspTuning::LscMgrDefault::LscMgrDefault(NSIspTuning::ESensorDev_T, int) */
int _ZN11NSIspTuning13LscMgrDefaultC2ENS_12ESensorDev_TEi(void);

/* Symbol: _ZN11NSIspTuning11OpenShading6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE */
/* Demangled: NSIspTuning::OpenShading::update(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
int _ZN11NSIspTuning11OpenShading6updateERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void);

/* Symbol: _ZNK10LscImemBuf8getTableEv */
/* Demangled: LscImemBuf::getTable() const */
int _ZNK10LscImemBuf8getTableEv(void);

/* Symbol: _ZN11LscNvramImp13writeNvramTblEv */
/* Demangled: LscNvramImp::writeNvramTbl() */
int _ZN11LscNvramImp13writeNvramTblEv(void);

/* Symbol: _ZTV11LscNvramImp */
/* Demangled: vtable for LscNvramImp */
extern void* _ZTV11LscNvramImp;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault12getGainTableEjjjPf */
/* Demangled: NSIspTuning::LscMgrDefault::getGainTable(unsigned int, unsigned int, unsigned int, float*) */
int _ZN11NSIspTuning13LscMgrDefault12getGainTableEjjjPf(void);

/* Symbol: _ZN11NSIspTuning11OpenShading8perframeERKNS_7ILscMgr16TSF_INPUT_INFO_TE */
/* Demangled: NSIspTuning::OpenShading::perframe(NSIspTuning::ILscMgr::TSF_INPUT_INFO_T const&) */
int _ZN11NSIspTuning11OpenShading8perframeERKNS_7ILscMgr16TSF_INPUT_INFO_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft9tsfSetSL2ERK24MTK_TSF_SL2_PARAM_STRUCT */
/* Demangled: NSIspTuning::TsfDft::tsfSetSL2(MTK_TSF_SL2_PARAM_STRUCT const&) */
int _ZN11NSIspTuning6TsfDft9tsfSetSL2ERK24MTK_TSF_SL2_PARAM_STRUCT(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr18set3ShutterControlEijjj */
/* Demangled: NS3Av3::AAASensorMgr::set3ShutterControl(int, unsigned int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr18set3ShutterControlEijjj(void);

/* Symbol: _ZN11NSIspTuning6TsfDft11tsfBatchCapERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_ */
/* Demangled: NSIspTuning::TsfDft::tsfBatchCap(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf*, NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning6TsfDft11tsfBatchCapERKNS0_16TSF_INPUT_STAT_TEPNS_7ILscBufES5_(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf10getPhyAddrEv */
/* Demangled: NSIspTuning::ILscBuf::getPhyAddr() const */
int _ZNK11NSIspTuning7ILscBuf10getPhyAddrEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr6uninitEv */
/* Demangled: NS3Av3::AAASensorMgr::uninit() */
int _ZN6NS3Av312AAASensorMgr6uninitEv(void);

/* Symbol: _ZTVN13NSIspTuningv311ISP_MGR_LSCE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC */
extern void* _ZTVN13NSIspTuningv311ISP_MGR_LSCE;

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _ZN11LscNvramImp12getTsfCfgTblEv */
/* Demangled: LscNvramImp::getTsfCfgTbl() */
int _ZN11LscNvramImp12getTsfCfgTblEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr25setFlickerFrameRateActiveEii */
/* Demangled: NS3Av3::AAASensorMgr::setFlickerFrameRateActive(int, int) */
int _ZN6NS3Av312AAASensorMgr25setFlickerFrameRateActiveEii(void);

/* Symbol: _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault10destroyBufEPNS_7ILscBufE */
/* Demangled: NSIspTuning::LscMgrDefault::destroyBuf(NSIspTuning::ILscBuf*) */
int _ZN11NSIspTuning13LscMgrDefault10destroyBufEPNS_7ILscBufE(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault11getTsfOnOffEv */
/* Demangled: NSIspTuning::LscMgrDefault::getTsfOnOff() const */
int _ZNK11NSIspTuning13LscMgrDefault11getTsfOnOffEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr12setSensorATREijj */
/* Demangled: NS3Av3::AAASensorMgr::setSensorATR(int, unsigned int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr12setSensorATREijj(void);

/* Symbol: _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZN9LscImgBuf8setTableEPKvj */
/* Demangled: LscImgBuf::setTable(void const*, unsigned int) */
int _ZN9LscImgBuf8setTableEPKvj(void);

/* Symbol: _ZTV9LscImgBuf */
/* Demangled: vtable for LscImgBuf */
extern void* _ZTV9LscImgBuf;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault15waitTsfExecDoneEv */
/* Demangled: NSIspTuning::LscMgrDefault::waitTsfExecDone() */
int _ZN11NSIspTuning13LscMgrDefault15waitTsfExecDoneEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault15getTransformCfgENS_13ESensorMode_TE */
/* Demangled: NSIspTuning::LscMgrDefault::getTransformCfg(NSIspTuning::ESensorMode_T) const */
int _ZNK11NSIspTuning13LscMgrDefault15getTransformCfgENS_13ESensorMode_TE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNK6NS3Av312AAASensorMgr17getRollingShutterEiRjS1_ */
/* Demangled: NS3Av3::AAASensorMgr::getRollingShutter(int, unsigned int&, unsigned int&) const */
int _ZNK6NS3Av312AAASensorMgr17getRollingShutterEiRjS1_(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC8reconfigEPvS1_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::reconfig(void*, void*) */
int _ZN13NSIspTuningv311ISP_MGR_LSC8reconfigEPvS1_(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC27putAddrEj */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::putAddr(unsigned int) */
int _ZN13NSIspTuningv312ISP_MGR_LSC27putAddrEj(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)2>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEvE9singleton;

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl11getP1BufferEv */
/* Demangled: NS3Av3::IspTuningBufCtrl::getP1Buffer() */
int _ZN6NS3Av316IspTuningBufCtrl11getP1BufferEv(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl14dumpP1CbBufferEPvS1_i */
/* Demangled: NS3Av3::IspTuningBufCtrl::dumpP1CbBuffer(void*, void*, int) */
int _ZN6NS3Av316IspTuningBufCtrl14dumpP1CbBufferEPvS1_i(void);

/* Symbol: _ZTVN7android4ListIN6NS3Av316IspTuningBufCtrl12BufferInfo_TEEE */
/* Demangled: vtable for android::List<NS3Av3::IspTuningBufCtrl::BufferInfo_T> */
extern void* _ZTVN7android4ListIN6NS3Av316IspTuningBufCtrl12BufferInfo_TEEE;

/* Symbol: _ZN9LscImgBuf9editTableEv */
/* Demangled: LscImgBuf::editTable() */
int _ZN9LscImgBuf9editTableEv(void);

/* Symbol: _ZN6NS3Av312AAASensorMgr13setSensorGainEij */
/* Demangled: NS3Av3::AAASensorMgr::setSensorGain(int, unsigned int) */
int _ZN6NS3Av312AAASensorMgr13setSensorGainEij(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl11getInstanceEi */
/* Demangled: NS3Av3::IspTuningBufCtrl::getInstance(int) */
int _ZN6NS3Av316IspTuningBufCtrl11getInstanceEi(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC27getAddrEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::getAddr() */
int _ZN13NSIspTuningv312ISP_MGR_LSC27getAddrEv(void);

/* Symbol: _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE2EEE;

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE1EEE;

/* Symbol: _ZTVN6NS3Av319IspTuningBufCtrlDevILi2EEE */
/* Demangled: vtable for NS3Av3::IspTuningBufCtrlDev<2> */
extern void* _ZTVN6NS3Av319IspTuningBufCtrlDevILi2EEE;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault19sendGainTblToSensorEii */
/* Demangled: NSIspTuning::LscMgrDefault::sendGainTblToSensor(int, int) */
int _ZN11NSIspTuning13LscMgrDefault19sendGainTblToSensorEii(void);

/* Symbol: _ZN11NSIspTuning6TsfDft7tsfKeepERKNS0_16TSF_INPUT_STAT_TEPPNS_7ILscBufES6_ */
/* Demangled: NSIspTuning::TsfDft::tsfKeep(NSIspTuning::TsfDft::TSF_INPUT_STAT_T const&, NSIspTuning::ILscBuf**, NSIspTuning::ILscBuf**) */
int _ZN11NSIspTuning6TsfDft7tsfKeepERKNS0_16TSF_INPUT_STAT_TEPPNS_7ILscBufES6_(void);

/* Symbol: _ZGVZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NS3Av3::IspTuningBufCtrlDev<4>::getInstance()::singleton */
extern void* _ZGVZN6NS3Av319IspTuningBufCtrlDevILi4EE11getInstanceEvE9singleton;

/* Symbol: _ZNK11NSIspTuning7ILscBuf7getNameEv */
/* Demangled: NSIspTuning::ILscBuf::getName() const */
int _ZNK11NSIspTuning7ILscBuf7getNameEv(void);

/* Symbol: _ZN11NSIspTuning6TsfDft10doNotifyCbEi */
/* Demangled: NSIspTuning::TsfDft::doNotifyCb(int) */
int _ZN11NSIspTuning6TsfDft10doNotifyCbEi(void);

/* Symbol: _ZN6NS3Av312AAASensorMgrD2Ev */
/* Demangled: NS3Av3::AAASensorMgr::~AAASensorMgr() */
int _ZN6NS3Av312AAASensorMgrD2Ev(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2& NSIspTuningv3::ISP_MGR_LSC2::get<NSIspTuning::ISP_NVRAM_LSC_T>(NSIspTuning::ISP_NVRAM_LSC_T&) */
int _ZN13NSIspTuningv312ISP_MGR_LSC23getIN11NSIspTuning15ISP_NVRAM_LSC_TEEERS0_RT_(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl15getP1BufferSizeEv */
/* Demangled: NS3Av3::IspTuningBufCtrl::getP1BufferSize() */
int _ZN6NS3Av316IspTuningBufCtrl15getP1BufferSizeEv(void);

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault15syncBufAndRatioEPPNS_7ILscBufEjNS_7ILscMgr14E_LSC_MODULE_TE */
/* Demangled: NSIspTuning::LscMgrDefault::syncBufAndRatio(NSIspTuning::ILscBuf**, unsigned int, NSIspTuning::ILscMgr::E_LSC_MODULE_T) */
int _ZN11NSIspTuning13LscMgrDefault15syncBufAndRatioEPPNS_7ILscBufEjNS_7ILscMgr14E_LSC_MODULE_TE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault21doShadingToSensorGainEjjRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE */
/* Demangled: NSIspTuning::LscMgrDefault::doShadingToSensorGain(unsigned int, unsigned int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) */
int _ZN11NSIspTuning13LscMgrDefault21doShadingToSensorGainEjjRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC11getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN13NSIspTuningv311ISP_MGR_LSC11getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDft8dumpDataEv */
/* Demangled: NSIspTuning::TsfDft::dumpData() */
int _ZN11NSIspTuning6TsfDft8dumpDataEv(void);

/* Symbol: _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P25applyERKN11NSIspTuning13RAWIspCamInfoEPV13_dip_x_reg_t_ */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2::apply(NSIspTuning::RAWIspCamInfo const&, _dip_x_reg_t_ volatile*) */
int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P25applyERKN11NSIspTuning13RAWIspCamInfoEPV13_dip_x_reg_t_(void);

/* Symbol: _ZN10LscImemBufC2EjjiPKc */
/* Demangled: LscImemBuf::LscImemBuf(unsigned int, unsigned int, int, char const*) */
int _ZN10LscImemBufC2EjjiPKc(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault14doShadingAlignEv */
/* Demangled: NSIspTuning::LscMgrDefault::doShadingAlign() */
int _ZN11NSIspTuning13LscMgrDefault14doShadingAlignEv(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)1>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEvE9singleton;

/* Symbol: _ZZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton */
/* Demangled: NS3Av3::IspTuningBufCtrlDev<8>::getInstance()::singleton */
extern void* _ZZN6NS3Av319IspTuningBufCtrlDevILi8EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning13LscMgrDefault19getSensorResolutionEv */
/* Demangled: NSIspTuning::LscMgrDefault::getSensorResolution() */
int _ZN11NSIspTuning13LscMgrDefault19getSensorResolutionEv(void);

/* Symbol: _ZNK10LscImemBuf8showInfoEv */
/* Demangled: LscImemBuf::showInfo() const */
int _ZNK10LscImemBuf8showInfoEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault13loadTableFlowEi */
/* Demangled: NSIspTuning::LscMgrDefault::loadTableFlow(int) */
int _ZN11NSIspTuning13LscMgrDefault13loadTableFlowEi(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefaultD1Ev */
/* Demangled: NSIspTuning::LscMgrDefault::~LscMgrDefault() */
int _ZN11NSIspTuning13LscMgrDefaultD1Ev(void);

/* Symbol: _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P111getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P111getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P15applyERN11NSIspTuning13RAWIspCamInfoER9TuningMgri */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P1::apply(NSIspTuning::RAWIspCamInfo&, TuningMgr&, int) */
int _ZN13NSIspTuningv317ISP_MGR_CTL_EN_P15applyERN11NSIspTuning13RAWIspCamInfoER9TuningMgri(void);

/* Symbol: _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton */
/* Demangled: NSIspTuningv3::ISP_MGR_CTL_EN_P2_DEV<(NSIspTuning::ESensorDev_T)8>::getInstance()::singleton */
extern void* _ZZN13NSIspTuningv321ISP_MGR_CTL_EN_P2_DEVILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning7ILscBuf9setConfigENS0_6ConfigE */
/* Demangled: NSIspTuning::ILscBuf::setConfig(NSIspTuning::ILscBuf::Config) */
int _ZN11NSIspTuning7ILscBuf9setConfigENS0_6ConfigE(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf8getRatioEv */
/* Demangled: NSIspTuning::ILscBuf::getRatio() const */
int _ZNK11NSIspTuning7ILscBuf8getRatioEv(void);

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault13getSensorModeEv */
/* Demangled: NSIspTuning::LscMgrDefault::getSensorMode() const */
int _ZNK11NSIspTuning13LscMgrDefault13getSensorModeEv(void);

/* Symbol: _ZN11NSIspTuning11OpenShading15destroyInstanceEv */
/* Demangled: NSIspTuning::OpenShading::destroyInstance() */
int _ZN11NSIspTuning11OpenShading15destroyInstanceEv(void);

/* Symbol: _ZN11NSIspTuning11OpenShading5startEv */
/* Demangled: NSIspTuning::OpenShading::start() */
int _ZN11NSIspTuning11OpenShading5startEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN13NSIspTuningv312ISP_MGR_LSC25applyEN11NSIspTuning13EIspProfile_TEPV13_dip_x_reg_t_ */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC2::apply(NSIspTuning::EIspProfile_T, _dip_x_reg_t_ volatile*) */
int _ZN13NSIspTuningv312ISP_MGR_LSC25applyEN11NSIspTuning13EIspProfile_TEPV13_dip_x_reg_t_(void);

/* Symbol: _ZN6NS3Av316IspTuningBufCtrlC2Ev */
/* Demangled: NS3Av3::IspTuningBufCtrl::IspTuningBufCtrl() */
int _ZN6NS3Av316IspTuningBufCtrlC2Ev(void);

/* Symbol: _ZN9LscImgBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE */
/* Demangled: LscImgBuf::setConfig(NSIspTuning::ILscBuf::Config) */
int _ZN9LscImgBuf9setConfigEN11NSIspTuning7ILscBuf6ConfigE(void);

/* Symbol: _ZN11NSIspTuning13LscMgrDefault11updateRatioEij */
/* Demangled: NSIspTuning::LscMgrDefault::updateRatio(int, unsigned int) */
int _ZN11NSIspTuning13LscMgrDefault11updateRatioEij(void);

/* Symbol: _ZN11NSIspTuning6TsfDft10getGainTblEjjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE */
/* Demangled: NSIspTuning::TsfDft::getGainTbl(unsigned int, unsigned int, int, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&) */
int _ZN11NSIspTuning6TsfDft10getGainTblEjjiRNSt3__16vectorIPtNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZNK11NSIspTuning13LscMgrDefault12getP1BinSizeERjS1_ */
/* Demangled: NSIspTuning::LscMgrDefault::getP1BinSize(unsigned int&, unsigned int&) const */
int _ZNK11NSIspTuning13LscMgrDefault12getP1BinSizeERjS1_(void);

/* Symbol: _ZN11NSIspTuning6TsfDft12setIsFactoryEi */
/* Demangled: NSIspTuning::TsfDft::setIsFactory(int) */
int _ZN11NSIspTuning6TsfDft12setIsFactoryEi(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__append(unsigned int) */
int _ZNSt3__16vectorItNS_9allocatorItEEE8__appendEj(void);

/* Symbol: _ZN11LscNvramImpC2EN11NSIspTuning12ESensorDev_TE */
/* Demangled: LscNvramImp::LscNvramImp(NSIspTuning::ESensorDev_T) */
int _ZN11LscNvramImpC2EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN11NSIspTuning6TsfDftC2Ej */
/* Demangled: NSIspTuning::TsfDft::TsfDft(unsigned int) */
int _ZN11NSIspTuning6TsfDftC2Ej(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC8isEnableEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::isEnable() */
int _ZN13NSIspTuningv311ISP_MGR_LSC8isEnableEv(void);

/* Symbol: _ZTVN11NSIspTuning7ILscBuf9LscBufImpE */
/* Demangled: vtable for NSIspTuning::ILscBuf::LscBufImp */
extern void* _ZTVN11NSIspTuning7ILscBuf9LscBufImpE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZN11NSIspTuning11OpenShadingC2Ej */
/* Demangled: NSIspTuning::OpenShading::OpenShading(unsigned int) */
int _ZN11NSIspTuning11OpenShadingC2Ej(void);

/* Symbol: _ZN13NSIspTuningv311ISP_MGR_LSC5resetEv */
/* Demangled: NSIspTuningv3::ISP_MGR_LSC::reset() */
int _ZN13NSIspTuningv311ISP_MGR_LSC5resetEv(void);

/* Symbol: _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEvE9singleton;

/* Symbol: _ZN11NSIspTuning7ILscBuf9LscBufImpD1Ev */
/* Demangled: NSIspTuning::ILscBuf::LscBufImp::~LscBufImp() */
int _ZN11NSIspTuning7ILscBuf9LscBufImpD1Ev(void);

/* Symbol: _ZN13NSIspTuningv316convertCcmFormatERKN11NSIspTuning15ISP_NVRAM_CCM_TEPi */
/* Demangled: NSIspTuningv3::convertCcmFormat(NSIspTuning::ISP_NVRAM_CCM_T const&, int*) */
int _ZN13NSIspTuningv316convertCcmFormatERKN11NSIspTuning15ISP_NVRAM_CCM_TEPi(void);

/* Symbol: _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC_DEV<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTVN13NSIspTuningv315ISP_MGR_LSC_DEVILN11NSIspTuning12ESensorDev_TE1EEE;

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscBuf9setConfigENS_9ILscTable6ConfigE */
/* Demangled: NSIspTuning::ILscBuf::setConfig(NSIspTuning::ILscTable::Config) */
int _ZN11NSIspTuning7ILscBuf9setConfigENS_9ILscTable6ConfigE(void);

/* Symbol: _ZNK9LscImgBuf10getPhyAddrEv */
/* Demangled: LscImgBuf::getPhyAddr() const */
int _ZNK9LscImgBuf10getPhyAddrEv(void);

/* Symbol: _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTVN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE16EEE;

/* Symbol: _ZN11LscNvramImp12readNvramTblEi */
/* Demangled: LscNvramImp::readNvramTbl(int) */
int _ZN11LscNvramImp12readNvramTblEi(void);

/* Symbol: _ZN11NSIspTuning6TsfDft11tsfResetTblENS_13ESensorMode_TEi */
/* Demangled: NSIspTuning::TsfDft::tsfResetTbl(NSIspTuning::ESensorMode_T, int) */
int _ZN11NSIspTuning6TsfDft11tsfResetTblENS_13ESensorMode_TEi(void);

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void);

/* Symbol: _ZN11LscNvramImp12getNvramDataEv */
/* Demangled: LscNvramImp::getNvramData() */
int _ZN11LscNvramImp12getNvramDataEv(void);

/* Symbol: _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton */
/* Demangled: guard variable for NSIspTuningv3::ISP_MGR_LSC2_DEV<(NSIspTuning::ESensorDev_T)4>::getInstance()::singleton */
extern void* _ZGVZN13NSIspTuningv316ISP_MGR_LSC2_DEVILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEvE9singleton;

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: _ZNK11NSIspTuning7ILscBuf9LscBufImp4dumpEPKc */
/* Demangled: NSIspTuning::ILscBuf::LscBufImp::dump(char const*) const */
int _ZNK11NSIspTuning7ILscBuf9LscBufImp4dumpEPKc(void);

/* Symbol: _ZN11NSIspTuning11OpenShading14createInstanceEj */
/* Demangled: NSIspTuning::OpenShading::createInstance(unsigned int) */
int _ZN11NSIspTuning11OpenShading14createInstanceEj(void);

/* Symbol: _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EEE */
/* Demangled: vtable for NSIspTuningv3::ISP_MGR_CTL_EN_P1_DEV<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTVN13NSIspTuningv321ISP_MGR_CTL_EN_P1_DEVILN11NSIspTuning12ESensorDev_TE16EEE;

/* Symbol: _ZN6NS3Av316IspTuningBufCtrl10updateHintEPvi */
/* Demangled: NS3Av3::IspTuningBufCtrl::updateHint(void*, int) */
int _ZN6NS3Av316IspTuningBufCtrl10updateHintEPvi(void);

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HAL3A_V3_LSCMGR_H */
