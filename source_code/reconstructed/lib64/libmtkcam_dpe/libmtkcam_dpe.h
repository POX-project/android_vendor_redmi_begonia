/*
 * Reverse-Engineered ABI Specification for: libmtkcam_dpe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_dpe.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_DPE_H
#define BEGONIA_RE_LIBMTKCAM_DPE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: DpeThread_DbgLogEnable_ERROR */
/* Demangled: DpeThread_DbgLogEnable_ERROR */
extern void* DpeThread_DbgLogEnable_ERROR;

/* Symbol: _ZTv0_n48_N5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::uninit() */
int _ZTv0_n48_N5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv(void);

/* Symbol: _ZN9DpeDrvImp8clearIrqEP20DPE_CLEAR_IRQ_STRUCT */
/* Demangled: DpeDrvImp::clearIrq(DPE_CLEAR_IRQ_STRUCT*) */
int _ZN9DpeDrvImp8clearIrqEP20DPE_CLEAR_IRQ_STRUCT(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11mDpeCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mDpeCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11mDpeCmdLockE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::DVERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::DVERequest> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe10IDpeStream14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSDpe::IDpeStream::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSDpe10IDpeStream14createInstanceEPKc(void);

/* Symbol: _ZN6DpeDrv14createInstanceEv */
/* Demangled: DpeDrv::createInstance() */
int _ZN6DpeDrv14createInstanceEv(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev(void);

/* Symbol: _ZN9DpeDrvImp15checkDVESettingEPN5NSCam8NSIoPipe9DVEConfigE */
/* Demangled: DpeDrvImp::checkDVESetting(NSCam::NSIoPipe::DVEConfig*) */
int _ZN9DpeDrvImp15checkDVESettingEPN5NSCam8NSIoPipe9DVEConfigE(void);

/* Symbol: _ZN9DpeDrvImpC1Ev */
/* Demangled: DpeDrvImp::DpeDrvImp() */
int _ZN9DpeDrvImpC1Ev(void);

/* Symbol: DpeThread_DbgLogEnable_VERBOSE */
/* Demangled: DpeThread_DbgLogEnable_VERBOSE */
extern void* DpeThread_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev(void);

/* Symbol: _ZN9DpeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe8WMFECtrlE */
/* Demangled: DpeDrvImp::checkWMFESetting(NSCam::NSIoPipe::WMFECtrl*) */
int _ZN9DpeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe8WMFECtrlE(void);

/* Symbol: _ZN9DpeDrvImp16waitDPEFrameDoneEji */
/* Demangled: DpeDrvImp::waitDPEFrameDone(unsigned int, int) */
int _ZN9DpeDrvImp16waitDPEFrameDoneEji(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc(void);

/* Symbol: _ZTCN5NSCam8NSIoPipe5NSDpe9DpeStreamE0_NS1_10IDpeStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSDpe::IDpeStream-in-NSCam::NSIoPipe::NSDpe::DpeStream */
extern void* _ZTCN5NSCam8NSIoPipe5NSDpe9DpeStreamE0_NS1_10IDpeStreamE;

/* Symbol: _ZN6DpeDrv11m_regRWModeE */
/* Demangled: DpeDrv::m_regRWMode */
extern void* _ZN6DpeDrv11m_regRWModeE;

/* Symbol: DpeThread_DbgLogEnable_WARN */
/* Demangled: DpeThread_DbgLogEnable_WARN */
extern void* DpeThread_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::createThread() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12createThreadEv(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe4ECmdENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSDpe::ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe4ECmdENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _Z8DrvMkdirPKcj */
/* Demangled: DrvMkdir(char const*, unsigned int) */
int _Z8DrvMkdirPKcj(void);

/* Symbol: _ZN9DpeDrvImp7readRegEji */
/* Demangled: DpeDrvImp::readReg(unsigned int, int) */
int _ZN9DpeDrvImp7readRegEji(void);

/* Symbol: _ZN9DpeDrvImp9getRWModeEv */
/* Demangled: DpeDrvImp::getRWMode() */
int _ZN9DpeDrvImp9getRWModeEv(void);

/* Symbol: _ZN9DpeDrvImp9writeRegsEP21DPE_DRV_REG_IO_STRUCTji */
/* Demangled: DpeDrvImp::writeRegs(DPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9DpeDrvImp9writeRegsEP21DPE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mModuleMtxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7mThreadE;

/* Symbol: DpeStream_DbgLogEnable_ASSERT */
/* Demangled: DpeStream_DbgLogEnable_ASSERT */
extern void* DpeStream_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mInitCountE;

/* Symbol: _ZTv0_n64_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::DVEenque(NSCam::NSIoPipe::NSDpe::DVEParams const&) */
int _ZTv0_n64_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE(void);

/* Symbol: _ZTv0_n80_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::WMFEenque(NSCam::NSIoPipe::NSDpe::WMFEParams const&) */
int _ZTv0_n80_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE(void);

/* Symbol: _ZN9DpeDrvImp10m_UserNameE */
/* Demangled: DpeDrvImp::m_UserName */
extern void* _ZN9DpeDrvImp10m_UserNameE;

/* Symbol: _ZN9DpeDrvImp9dequeWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: DpeDrvImp::dequeWMFE(std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >&) */
int _ZN9DpeDrvImp9dequeWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZTV9DpeDrvImp */
/* Demangled: vtable for DpeDrvImp */
extern void* _ZTV9DpeDrvImp;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8mCmdListE;

/* Symbol: DpeStream_DbgLogEnable_INFO */
/* Demangled: DpeStream_DbgLogEnable_INFO */
extern void* DpeStream_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream4initEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::init() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream4initEv(void);

/* Symbol: _ZTv0_n72_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::DVEdeque(NSCam::NSIoPipe::NSDpe::DVEParams&, long) */
int _ZTv0_n72_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl(void);

/* Symbol: dpe_drv_DbgLogEnable_DEBUG */
/* Demangled: dpe_drv_DbgLogEnable_DEBUG */
extern void* dpe_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10addCommandERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::addCommand(NSCam::NSIoPipe::NSDpe::ECmd const&) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10addCommandERKNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12onThreadLoopEPv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::WMFECtrl, std::__1::allocator<NSCam::NSIoPipe::WMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::WMFECtrl const&>(NSCam::NSIoPipe::WMFECtrl const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: dpe_drv_DbgLogEnable_INFO */
/* Demangled: dpe_drv_DbgLogEnable_INFO */
extern void* dpe_drv_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9m_pDpeDrvE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::m_pDpeDrv */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9m_pDpeDrvE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::WMFEdeque(NSCam::NSIoPipe::NSDpe::WMFEParams&, long) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSDpe9DpeStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSDpe::DpeStream */
extern void* _ZTVN5NSCam8NSIoPipe5NSDpe9DpeStreamE;

/* Symbol: _ZN9DpeDrvImp6uninitEPKc */
/* Demangled: DpeDrvImp::uninit(char const*) */
int _ZN9DpeDrvImp6uninitEPKc(void);

/* Symbol: _ZN9DpeDrvImp9setRWModeE15DPE_DRV_RW_MODE */
/* Demangled: DpeDrvImp::setRWMode(DPE_DRV_RW_MODE) */
int _ZN9DpeDrvImp9setRWModeE15DPE_DRV_RW_MODE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream17m_QueueDVEReqListE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::m_QueueDVEReqList */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream17m_QueueDVEReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::WMFEenque(NSCam::NSIoPipe::NSDpe::WMFEParams const&) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev(void);

/* Symbol: _ZN9DpeDrvImp14m_DpeInitMutexE */
/* Demangled: DpeDrvImp::m_DpeInitMutex */
extern void* _ZN9DpeDrvImp14m_DpeInitMutexE;

/* Symbol: _ZN9DpeDrvImp4initEPKc */
/* Demangled: DpeDrvImp::init(char const*) */
int _ZN9DpeDrvImp4initEPKc(void);

/* Symbol: _ZN9DpeDrvImpC2Ev */
/* Demangled: DpeDrvImp::DpeDrvImp() */
int _ZN9DpeDrvImpC2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::destroyThread() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13destroyThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::push_back(NSCam::NSIoPipe::NSDpe::WMFERequest const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZN9DpeDrvImp11getInstanceEv */
/* Demangled: DpeDrvImp::getInstance() */
int _ZN9DpeDrvImp11getInstanceEv(void);

/* Symbol: _ZN9DpeDrvImp7waitIrqEP19DPE_WAIT_IRQ_STRUCT */
/* Demangled: DpeDrvImp::waitIrq(DPE_WAIT_IRQ_STRUCT*) */
int _ZN9DpeDrvImp7waitIrqEP19DPE_WAIT_IRQ_STRUCT(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10getCommandERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getCommand(NSCam::NSIoPipe::NSDpe::ECmd&) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10getCommandERNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11releaseLockEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::releaseLock() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11releaseLockEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: DpeStream_DbgLogEnable_DEBUG */
/* Demangled: DpeStream_DbgLogEnable_DEBUG */
extern void* DpeStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DVEenque(NSCam::NSIoPipe::NSDpe::DVEParams const&) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mCmdListCondE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mTotalCmdNumE;

/* Symbol: DpeThread_DbgLogEnable_DEBUG */
/* Demangled: DpeThread_DbgLogEnable_DEBUG */
extern void* DpeThread_DbgLogEnable_DEBUG;

/* Symbol: DpeStream_DbgLogEnable_VERBOSE */
/* Demangled: DpeStream_DbgLogEnable_VERBOSE */
extern void* DpeStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DpeStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC1EPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC2EPKc */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DpeStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC2EPKc(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::WMFEConfig const&>(NSCam::NSIoPipe::WMFEConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN9DpeDrvImp9enqueWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: DpeDrvImp::enqueWMFE(std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >&) */
int _ZN9DpeDrvImp9enqueWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: DpeThread_DbgLogEnable_ASSERT */
/* Demangled: DpeThread_DbgLogEnable_ASSERT */
extern void* DpeThread_DbgLogEnable_ASSERT;

/* Symbol: DpeStream_DbgLogEnable_WARN */
/* Demangled: DpeStream_DbgLogEnable_WARN */
extern void* DpeStream_DbgLogEnable_WARN;

/* Symbol: _ZN9DpeDrvImp8dequeDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: DpeDrvImp::dequeDVE(std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
int _ZN9DpeDrvImp8dequeDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN9DpeDrvImp8enqueDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE */
/* Demangled: DpeDrvImp::enqueDVE(std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
int _ZN9DpeDrvImp8enqueDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13clearCommandsEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::clearCommands() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13clearCommandsEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream5getUsEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getUs() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream5getUsEv(void);

/* Symbol: _ZTv0_n88_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::WMFEdeque(NSCam::NSIoPipe::NSDpe::WMFEParams&, long) */
int _ZTv0_n88_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl(void);

/* Symbol: _ZN9DpeDrvImp8readRegsEP21DPE_DRV_REG_IO_STRUCTji */
/* Demangled: DpeDrvImp::readRegs(DPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9DpeDrvImp8readRegsEP21DPE_DRV_REG_IO_STRUCTji(void);

/* Symbol: dpe_drv_DbgLogEnable_WARN */
/* Demangled: dpe_drv_DbgLogEnable_WARN */
extern void* dpe_drv_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe24DPEQueryWmfeOutDMAStrideENS0_10DPEDMAPortEj */
/* Demangled: NSCam::NSIoPipe::DPEQueryWmfeOutDMAStride(NSCam::NSIoPipe::DPEDMAPort, unsigned int) */
int _ZN5NSCam8NSIoPipe24DPEQueryWmfeOutDMAStrideENS0_10DPEDMAPortEj(void);

/* Symbol: _Z11DrvMakePathPKcj */
/* Demangled: DrvMakePath(char const*, unsigned int) */
int _Z11DrvMakePathPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe18g_DPE_UnitTest_NumE */
/* Demangled: NSCam::NSIoPipe::g_DPE_UnitTest_Num */
extern void* _ZN5NSCam8NSIoPipe18g_DPE_UnitTest_NumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DVEdeque(NSCam::NSIoPipe::NSDpe::DVEParams&, long) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl(void);

/* Symbol: dpe_drv_DbgLogEnable_ASSERT */
/* Demangled: dpe_drv_DbgLogEnable_ASSERT */
extern void* dpe_drv_DbgLogEnable_ASSERT;

/* Symbol: dpe_drv_DbgLogEnable_ERROR */
/* Demangled: dpe_drv_DbgLogEnable_ERROR */
extern void* dpe_drv_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::DVEConfig const&>(NSCam::NSIoPipe::DVEConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN9DpeDrvImp15m_pDpeHwRegAddrE */
/* Demangled: DpeDrvImp::m_pDpeHwRegAddr */
extern void* _ZN9DpeDrvImp15m_pDpeHwRegAddrE;

/* Symbol: _ZN9DpeDrvImp9m_UserCntE */
/* Demangled: DpeDrvImp::m_UserCnt */
extern void* _ZN9DpeDrvImp9m_UserCntE;

/* Symbol: _ZN5NSCam8NSIoPipe19DPEQueryInDMAStrideENS0_10DPEDMAPortEjj */
/* Demangled: NSCam::NSIoPipe::DPEQueryInDMAStride(NSCam::NSIoPipe::DPEDMAPort, unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe19DPEQueryInDMAStrideENS0_10DPEDMAPortEjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe23DPEQueryDveOutDMAStrideENS0_10DPEDMAPortENS0_15DVE_HORZ_DSMODEEj */
/* Demangled: NSCam::NSIoPipe::DPEQueryDveOutDMAStride(NSCam::NSIoPipe::DPEDMAPort, NSCam::NSIoPipe::DVE_HORZ_DSMODE, unsigned int) */
int _ZN5NSCam8NSIoPipe23DPEQueryDveOutDMAStrideENS0_10DPEDMAPortENS0_15DVE_HORZ_DSMODEEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7getLockEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getLock() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7getLockEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD2Ev(void);

/* Symbol: dpe_drv_DbgLogEnable_VERBOSE */
/* Demangled: dpe_drv_DbgLogEnable_VERBOSE */
extern void* dpe_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream18m_QueueWMFEReqListE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::m_QueueWMFEReqList */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream18m_QueueWMFEReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream19resetDequeVariablesEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10saveToFileEPKcPNS0_10DPEBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::saveToFile(char const*, NSCam::NSIoPipe::DPEBufInfo*) */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10saveToFileEPKcPNS0_10DPEBufInfoE(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSDpe::DVERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::DVERequest> >::push_back(NSCam::NSIoPipe::NSDpe::DVERequest const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::destroyInstance(char const*) */
int _ZTv0_n32_N5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc(void);

/* Symbol: _ZTv0_n40_N5NSCam8NSIoPipe5NSDpe9DpeStream4initEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::init() */
int _ZTv0_n40_N5NSCam8NSIoPipe5NSDpe9DpeStream4initEv(void);

/* Symbol: _ZN9DpeDrvImp8writeRegEjmi */
/* Demangled: DpeDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9DpeDrvImp8writeRegEjmi(void);

/* Symbol: DpeStream_DbgLogEnable_ERROR */
/* Demangled: DpeStream_DbgLogEnable_ERROR */
extern void* DpeStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::uninit() */
int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe5NSDpe9DpeStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSDpe::DpeStream */
extern void* _ZTTN5NSCam8NSIoPipe5NSDpe9DpeStreamE;

/* Symbol: _ZN6DpeDrv4m_FdE */
/* Demangled: DpeDrv::m_Fd */
extern void* _ZN6DpeDrv4m_FdE;

/* Symbol: DpeThread_DbgLogEnable_INFO */
/* Demangled: DpeThread_DbgLogEnable_INFO */
extern void* DpeThread_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13mSemDpeThreadE */
/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::mSemDpeThread */
extern void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13mSemDpeThreadE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_DPE_H */
