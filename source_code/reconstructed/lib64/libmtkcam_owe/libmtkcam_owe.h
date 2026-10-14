/*
 * Reverse-Engineered ABI Specification for: libmtkcam_owe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_owe.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_OWE_H
#define BEGONIA_RE_LIBMTKCAM_OWE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9OccDrvImp9setRWModeE15OWE_DRV_RW_MODE */
/* Demangled: OccDrvImp::setRWMode(OWE_DRV_RW_MODE) */
int _ZN9OccDrvImp9setRWModeE15OWE_DRV_RW_MODE(void);

/* Symbol: _ZN10WmfeDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji */
/* Demangled: WmfeDrvImp::readRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN10WmfeDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN10WmfeDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji */
/* Demangled: WmfeDrvImp::writeRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN10WmfeDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EgnStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEC1EPKc(void);

/* Symbol: _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__list_imp<ECmd, std::__1::allocator<ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEE */
/* Demangled: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig> */
extern void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEE;

/* Symbol: EgnStream_DbgLogEnable_DEBUG */
/* Demangled: EgnStream_DbgLogEnable_DEBUG */
extern void* EgnStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mInitCountE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED1Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE;

/* Symbol: EgnStream_DbgLogEnable_WARN */
/* Demangled: EgnStream_DbgLogEnable_WARN */
extern void* EgnStream_DbgLogEnable_WARN;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_QueueEGNReqList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mModuleMtx */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE13mSemEgnThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mSemEgnThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE13mSemEgnThreadE;

/* Symbol: _ZN9EngineDrvIN5NSCam8NSIoPipe9OCCConfigEE14createInstanceEv */
/* Demangled: EngineDrv<NSCam::NSIoPipe::OCCConfig>::createInstance() */
int _ZN9EngineDrvIN5NSCam8NSIoPipe9OCCConfigEE14createInstanceEv(void);

/* Symbol: _ZN9OccDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE */
/* Demangled: OccDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >&) */
int _ZN9OccDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: occ_drv_DbgLogEnable_ERROR */
/* Demangled: occ_drv_DbgLogEnable_ERROR */
extern void* occ_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN10WmfeDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT */
/* Demangled: WmfeDrvImp::waitIrq(OWE_WAIT_IRQ_STRUCT*) */
int _ZN10WmfeDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT(void);

/* Symbol: wmfe_drv_DbgLogEnable_INFO */
/* Demangled: wmfe_drv_DbgLogEnable_INFO */
extern void* wmfe_drv_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void);

/* Symbol: _ZN10WmfeDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT */
/* Demangled: WmfeDrvImp::clearIrq(OWE_CLEAR_IRQ_STRUCT*) */
int _ZN10WmfeDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT(void);

/* Symbol: _ZN10WmfeDrvImp9getRWModeEv */
/* Demangled: WmfeDrvImp::getRWMode() */
int _ZN10WmfeDrvImp9getRWModeEv(void);

/* Symbol: _ZN9OccDrvImp15checkOCCSettingEPN5NSCam8NSIoPipe9OCCConfigE */
/* Demangled: OccDrvImp::checkOCCSetting(NSCam::NSIoPipe::OCCConfig*) */
int _ZN9OccDrvImp15checkOCCSettingEPN5NSCam8NSIoPipe9OCCConfigE(void);

/* Symbol: _ZN10WmfeDrvImp11m_regRWModeE */
/* Demangled: WmfeDrvImp::m_regRWMode */
extern void* _ZN10WmfeDrvImp11m_regRWModeE;

/* Symbol: _ZN10WmfeDrvImp4initEPKc */
/* Demangled: WmfeDrvImp::init(char const*) */
int _ZN10WmfeDrvImp4initEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_QueueEGNReqList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void);

/* Symbol: _ZN9OccDrvImp9getRWModeEv */
/* Demangled: OccDrvImp::getRWMode() */
int _ZN9OccDrvImp9getRWModeEv(void);

/* Symbol: _ZN10WmfeDrvImp6uninitEPKc */
/* Demangled: WmfeDrvImp::uninit(char const*) */
int _ZN10WmfeDrvImp6uninitEPKc(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE9push_backERKS6_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void);

/* Symbol: occ_drv_DbgLogEnable_ASSERT */
/* Demangled: occ_drv_DbgLogEnable_ASSERT */
extern void* occ_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN10WmfeDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: WmfeDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >&) */
int _ZN10WmfeDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE15destroyInstanceEPKc(void);

/* Symbol: _ZN9OccDrvImp12m_pHwRegAddrE */
/* Demangled: OccDrvImp::m_pHwRegAddr */
extern void* _ZN9OccDrvImp12m_pHwRegAddrE;

/* Symbol: _ZN10WmfeDrvImp10mInitMutexE */
/* Demangled: WmfeDrvImp::mInitMutex */
extern void* _ZN10WmfeDrvImp10mInitMutexE;

/* Symbol: EgnStream_DbgLogEnable_VERBOSE */
/* Demangled: EgnStream_DbgLogEnable_VERBOSE */
extern void* EgnStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnCmdLock */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE15destroyInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE;

/* Symbol: _ZN9OccDrvImp10mInitMutexE */
/* Demangled: OccDrvImp::mInitMutex */
extern void* _ZN9OccDrvImp10mInitMutexE;

/* Symbol: wmfe_drv_DbgLogEnable_DEBUG */
/* Demangled: wmfe_drv_DbgLogEnable_DEBUG */
extern void* wmfe_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED0Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED0Ev(void);

/* Symbol: _ZN10WmfeDrvImp7readRegEji */
/* Demangled: WmfeDrvImp::readReg(unsigned int, int) */
int _ZN10WmfeDrvImp7readRegEji(void);

/* Symbol: wmfe_drv_DbgLogEnable_WARN */
/* Demangled: wmfe_drv_DbgLogEnable_WARN */
extern void* wmfe_drv_DbgLogEnable_WARN;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdListCond */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE;

/* Symbol: EgnStream_DbgLogEnable_ERROR */
/* Demangled: EgnStream_DbgLogEnable_ERROR */
extern void* EgnStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&, long) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void);

/* Symbol: _ZN9EngineDrvIN5NSCam8NSIoPipe11OWMFEConfigEE14createInstanceEv */
/* Demangled: EngineDrv<NSCam::NSIoPipe::OWMFEConfig>::createInstance() */
int _ZN9EngineDrvIN5NSCam8NSIoPipe11OWMFEConfigEE14createInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OCCConfig const&>(NSCam::NSIoPipe::OCCConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: occ_drv_DbgLogEnable_INFO */
/* Demangled: occ_drv_DbgLogEnable_INFO */
extern void* occ_drv_DbgLogEnable_INFO;

/* Symbol: _ZN9OccDrvImp11getInstanceEv */
/* Demangled: OccDrvImp::getInstance() */
int _ZN9OccDrvImp11getInstanceEv(void);

/* Symbol: _ZN10WmfeDrvImp12m_pHwRegAddrE */
/* Demangled: WmfeDrvImp::m_pHwRegAddr */
extern void* _ZN10WmfeDrvImp12m_pHwRegAddrE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFEConfig const&>(NSCam::NSIoPipe::OWMFEConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEE */
/* Demangled: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig> */
extern void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mInitCountE;

/* Symbol: _ZTV9OccDrvImp */
/* Demangled: vtable for OccDrvImp */
extern void* _ZTV9OccDrvImp;

/* Symbol: _ZN10WmfeDrvImp9m_UserCntE */
/* Demangled: WmfeDrvImp::m_UserCnt */
extern void* _ZN10WmfeDrvImp9m_UserCntE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9OCCConfigEE4initERKNS1_10INITParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::OCCConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::OCCConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9OCCConfigEE4initERKNS1_10INITParamsIS3_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::addCommand(ECmd const&, NSCam::NSIoPipe::SUB_ENGINE_ID const&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE(void);

/* Symbol: wmfe_drv_DbgLogEnable_ASSERT */
/* Demangled: wmfe_drv_DbgLogEnable_ASSERT */
extern void* wmfe_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe19OWEQueryInDMAStrideENS0_10OWEDMAPortEjj */
/* Demangled: NSCam::NSIoPipe::OWEQueryInDMAStride(NSCam::NSIoPipe::OWEDMAPort, unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe19OWEQueryInDMAStrideENS0_10OWEDMAPortEjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9OCCConfigEE14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::OCCConfig>::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9OCCConfigEE14createInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE19resetDequeVariablesEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE4initEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::init() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE4initEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN9OccDrvImp4m_FdE */
/* Demangled: OccDrvImp::m_Fd */
extern void* _ZN9OccDrvImp4m_FdE;

/* Symbol: _ZN5NSCam8NSIoPipe18g_OWE_UnitTest_NumE */
/* Demangled: NSCam::NSIoPipe::g_OWE_UnitTest_Num */
extern void* _ZN5NSCam8NSIoPipe18g_OWE_UnitTest_NumE;

/* Symbol: _ZN5NSCam8NSIoPipe24OWEQueryWmfeOutDMAStrideENS0_10OWEDMAPortEj */
/* Demangled: NSCam::NSIoPipe::OWEQueryWmfeOutDMAStride(NSCam::NSIoPipe::OWEDMAPort, unsigned int) */
int _ZN5NSCam8NSIoPipe24OWEQueryWmfeOutDMAStrideENS0_10OWEDMAPortEj(void);

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnCmdLock */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_11OWMFEConfigEE14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::OWMFEConfig>::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_11OWMFEConfigEE14createInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED1Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED1Ev(void);

/* Symbol: _ZN9OccDrvImp6uninitEPKc */
/* Demangled: OccDrvImp::uninit(char const*) */
int _ZN9OccDrvImp6uninitEPKc(void);

/* Symbol: _ZN10WmfeDrvImp11getInstanceEv */
/* Demangled: WmfeDrvImp::getInstance() */
int _ZN10WmfeDrvImp11getInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE13mSemEgnThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mSemEgnThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE13mSemEgnThreadE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE19resetDequeVariablesEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: occ_drv_DbgLogEnable_WARN */
/* Demangled: occ_drv_DbgLogEnable_WARN */
extern void* occ_drv_DbgLogEnable_WARN;

/* Symbol: _ZN10WmfeDrvImp4m_FdE */
/* Demangled: WmfeDrvImp::m_Fd */
extern void* _ZN10WmfeDrvImp4m_FdE;

/* Symbol: _ZN10WmfeDrvImpC1Ev */
/* Demangled: WmfeDrvImp::WmfeDrvImp() */
int _ZN10WmfeDrvImpC1Ev(void);

/* Symbol: wmfe_drv_DbgLogEnable_ERROR */
/* Demangled: wmfe_drv_DbgLogEnable_ERROR */
extern void* wmfe_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::uninit() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE6uninitEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12m_pEngineDrvE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_pEngineDrv */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12m_pEngineDrvE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::SUB_ENGINE_ID, std::__1::allocator<NSCam::NSIoPipe::SUB_ENGINE_ID> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN10WmfeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe9OWMFECtrlE */
/* Demangled: WmfeDrvImp::checkWMFESetting(NSCam::NSIoPipe::OWMFECtrl*) */
int _ZN10WmfeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe9OWMFECtrlE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::addCommand(ECmd const&, NSCam::NSIoPipe::SUB_ENGINE_ID const&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&, long) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EgnStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEC1EPKc(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> > >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN9OccDrvImpC1Ev */
/* Demangled: OccDrvImp::OccDrvImp() */
int _ZN9OccDrvImpC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12m_pEngineDrvE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_pEngineDrv */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12m_pEngineDrvE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_QueueEGNReqList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZN10WmfeDrvImp8writeRegEjmi */
/* Demangled: WmfeDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN10WmfeDrvImp8writeRegEjmi(void);

/* Symbol: EgnStream_DbgLogEnable_ASSERT */
/* Demangled: EgnStream_DbgLogEnable_ASSERT */
extern void* EgnStream_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mTotalCmdNumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12onThreadLoopEPv(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEE9push_backERKS6_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void);

/* Symbol: _ZN9OccDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE */
/* Demangled: OccDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >&) */
int _ZN9OccDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN9OccDrvImp7readRegEji */
/* Demangled: OccDrvImp::readReg(unsigned int, int) */
int _ZN9OccDrvImp7readRegEji(void);

/* Symbol: _ZN10WmfeDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: WmfeDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >&) */
int _ZN10WmfeDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN9OccDrvImp13waitFrameDoneEji */
/* Demangled: OccDrvImp::waitFrameDone(unsigned int, int) */
int _ZN9OccDrvImp13waitFrameDoneEji(void);

/* Symbol: _ZN9OccDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT */
/* Demangled: OccDrvImp::clearIrq(OWE_CLEAR_IRQ_STRUCT*) */
int _ZN9OccDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT(void);

/* Symbol: _ZN9OccDrvImp8writeRegEjmi */
/* Demangled: OccDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9OccDrvImp8writeRegEjmi(void);

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mTotalCmdNumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE7mThreadE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE;

/* Symbol: occ_drv_DbgLogEnable_DEBUG */
/* Demangled: occ_drv_DbgLogEnable_DEBUG */
extern void* occ_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE4initEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::init() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED0Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED0Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdListCond */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE;

/* Symbol: _ZN9OccDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji */
/* Demangled: OccDrvImp::readRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9OccDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN9OccDrvImp9m_UserCntE */
/* Demangled: OccDrvImp::m_UserCnt */
extern void* _ZN9OccDrvImp9m_UserCntE;

/* Symbol: _ZN9OccDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji */
/* Demangled: OccDrvImp::writeRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9OccDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN10WmfeDrvImpC2Ev */
/* Demangled: WmfeDrvImp::WmfeDrvImp() */
int _ZN10WmfeDrvImpC2Ev(void);

/* Symbol: _ZTV10WmfeDrvImp */
/* Demangled: vtable for WmfeDrvImp */
extern void* _ZTV10WmfeDrvImp;

/* Symbol: EgnStream_DbgLogEnable_INFO */
/* Demangled: EgnStream_DbgLogEnable_INFO */
extern void* EgnStream_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_11OWMFEConfigEE4initERKNS1_10INITParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::OWMFEConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::OWMFEConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_11OWMFEConfigEE4initERKNS1_10INITParamsIS3_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE;

/* Symbol: _ZN9OccDrvImp11m_regRWModeE */
/* Demangled: OccDrvImp::m_regRWMode */
extern void* _ZN9OccDrvImp11m_regRWModeE;

/* Symbol: _ZN9OccDrvImp4initEPKc */
/* Demangled: OccDrvImp::init(char const*) */
int _ZN9OccDrvImp4initEPKc(void);

/* Symbol: occ_drv_DbgLogEnable_VERBOSE */
/* Demangled: occ_drv_DbgLogEnable_VERBOSE */
extern void* occ_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::uninit() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE6uninitEv(void);

/* Symbol: _ZN9OccDrvImpC2Ev */
/* Demangled: OccDrvImp::OccDrvImp() */
int _ZN9OccDrvImpC2Ev(void);

/* Symbol: _ZN10WmfeDrvImp10m_UserNameE */
/* Demangled: WmfeDrvImp::m_UserName */
extern void* _ZN10WmfeDrvImp10m_UserNameE;

/* Symbol: _ZN10WmfeDrvImp13waitFrameDoneEji */
/* Demangled: WmfeDrvImp::waitFrameDone(unsigned int, int) */
int _ZN10WmfeDrvImp13waitFrameDoneEji(void);

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mModuleMtx */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_QueueEGNReqList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE7mThreadE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN9OccDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT */
/* Demangled: OccDrvImp::waitIrq(OWE_WAIT_IRQ_STRUCT*) */
int _ZN9OccDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT(void);

/* Symbol: wmfe_drv_DbgLogEnable_VERBOSE */
/* Demangled: wmfe_drv_DbgLogEnable_VERBOSE */
extern void* wmfe_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE;

/* Symbol: _ZN9OccDrvImp10m_UserNameE */
/* Demangled: OccDrvImp::m_UserName */
extern void* _ZN9OccDrvImp10m_UserNameE;

/* Symbol: _ZN10WmfeDrvImp9setRWModeE15OWE_DRV_RW_MODE */
/* Demangled: WmfeDrvImp::setRWMode(OWE_DRV_RW_MODE) */
int _ZN10WmfeDrvImp9setRWModeE15OWE_DRV_RW_MODE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_OWE_H */
