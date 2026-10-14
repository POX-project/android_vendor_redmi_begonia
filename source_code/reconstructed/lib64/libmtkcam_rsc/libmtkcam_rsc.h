/*
 * Reverse-Engineered ABI Specification for: libmtkcam_rsc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_rsc.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_RSC_H
#define BEGONIA_RE_LIBMTKCAM_RSC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9RscDrvImp8dequeRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE */
/* Demangled: RscDrvImp::dequeRSC(std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >&) */
int _ZN9RscDrvImp8dequeRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: rsc_drv_DbgLogEnable_INFO */
/* Demangled: rsc_drv_DbgLogEnable_INFO */
extern void* rsc_drv_DbgLogEnable_INFO;

/* Symbol: RscThread_DbgLogEnable_WARN */
/* Demangled: RscThread_DbgLogEnable_WARN */
extern void* RscThread_DbgLogEnable_WARN;

/* Symbol: RscStream_DbgLogEnable_INFO */
/* Demangled: RscStream_DbgLogEnable_INFO */
extern void* RscStream_DbgLogEnable_INFO;

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mTotalCmdNumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream19resetDequeVariablesEv(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe5NSRsc9RscStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSRsc::RscStream */
extern void* _ZTTN5NSCam8NSIoPipe5NSRsc9RscStreamE;

/* Symbol: _ZN9RscDrvImp9writeRegsEP21RSC_DRV_REG_IO_STRUCTji */
/* Demangled: RscDrvImp::writeRegs(RSC_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9RscDrvImp9writeRegsEP21RSC_DRV_REG_IO_STRUCTji(void);

/* Symbol: RscUtility_DbgLogEnable_VERBOSE */
/* Demangled: RscUtility_DbgLogEnable_VERBOSE */
extern void* RscUtility_DbgLogEnable_VERBOSE;

/* Symbol: RscThread_DbgLogEnable_ERROR */
/* Demangled: RscThread_DbgLogEnable_ERROR */
extern void* RscThread_DbgLogEnable_ERROR;

/* Symbol: _ZTV9RscDrvImp */
/* Demangled: vtable for RscDrvImp */
extern void* _ZTV9RscDrvImp;

/* Symbol: rsc_drv_DbgLogEnable_DEBUG */
/* Demangled: rsc_drv_DbgLogEnable_DEBUG */
extern void* rsc_drv_DbgLogEnable_DEBUG;

/* Symbol: RscUtility_DbgLogEnable_DEBUG */
/* Demangled: RscUtility_DbgLogEnable_DEBUG */
extern void* RscUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZTCN5NSCam8NSIoPipe5NSRsc9RscStreamE0_NS1_10IRscStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSRsc::IRscStream-in-NSCam::NSIoPipe::NSRsc::RscStream */
extern void* _ZTCN5NSCam8NSIoPipe5NSRsc9RscStreamE0_NS1_10IRscStreamE;

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSRsc9RscStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSRsc::RscStream */
extern void* _ZTVN5NSCam8NSIoPipe5NSRsc9RscStreamE;

/* Symbol: RscUtility_DbgLogEnable_WARN */
/* Demangled: RscUtility_DbgLogEnable_WARN */
extern void* RscUtility_DbgLogEnable_WARN;

/* Symbol: RscThread_DbgLogEnable_INFO */
/* Demangled: RscThread_DbgLogEnable_INFO */
extern void* RscThread_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream5getUsEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getUs() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream5getUsEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mInitCountE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC2EPKc */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RscStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC2EPKc(void);

/* Symbol: _ZN6RscDrv4m_FdE */
/* Demangled: RscDrv::m_Fd */
extern void* _ZN6RscDrv4m_FdE;

/* Symbol: _ZN9RscDrvImp8writeRegEjmi */
/* Demangled: RscDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9RscDrvImp8writeRegEjmi(void);

/* Symbol: _ZN9RscDrvImp9m_UserCntE */
/* Demangled: RscDrvImp::m_UserCnt */
extern void* _ZN9RscDrvImp9m_UserCntE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream7mThreadE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD2Ev(void);

/* Symbol: _ZN9RscDrvImp15m_pRscHwRegAddrE */
/* Demangled: RscDrvImp::m_pRscHwRegAddr */
extern void* _ZN9RscDrvImp15m_pRscHwRegAddrE;

/* Symbol: rsc_drv_DbgLogEnable_ASSERT */
/* Demangled: rsc_drv_DbgLogEnable_ASSERT */
extern void* rsc_drv_DbgLogEnable_ASSERT;

/* Symbol: RscThread_DbgLogEnable_VERBOSE */
/* Demangled: RscThread_DbgLogEnable_VERBOSE */
extern void* RscThread_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream10getCommandERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getCommand(NSCam::NSIoPipe::NSRsc::ECmd&) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10getCommandERNS1_4ECmdE(void);

/* Symbol: RscStream_DbgLogEnable_ERROR */
/* Demangled: RscStream_DbgLogEnable_ERROR */
extern void* RscStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RSCdeque(NSCam::NSIoPipe::NSRsc::RSCParams&, long) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl(void);

/* Symbol: _ZTv0_n48_N5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::uninit() */
int _ZTv0_n48_N5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream4initEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::init() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RSCenque(NSCam::NSIoPipe::NSRsc::RSCParams const&) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSRsc::RSCRequest, std::__1::allocator<NSCam::NSIoPipe::NSRsc::RSCRequest> >::push_back(NSCam::NSIoPipe::NSRsc::RSCRequest const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::destroyInstance(char const*) */
int _ZTv0_n32_N5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc(void);

/* Symbol: _ZTv0_n64_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::RSCenque(NSCam::NSIoPipe::NSRsc::RSCParams const&) */
int _ZTv0_n64_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE(void);

/* Symbol: _ZN9RscDrvImp7readRegEji */
/* Demangled: RscDrvImp::readReg(unsigned int, int) */
int _ZN9RscDrvImp7readRegEji(void);

/* Symbol: RscUtility_DbgLogEnable_INFO */
/* Demangled: RscUtility_DbgLogEnable_INFO */
extern void* RscUtility_DbgLogEnable_INFO;

/* Symbol: _ZN9RscDrvImp11getInstanceEv */
/* Demangled: RscDrvImp::getInstance() */
int _ZN9RscDrvImp11getInstanceEv(void);

/* Symbol: _ZN9RscDrvImp7waitIrqEP19RSC_WAIT_IRQ_STRUCT */
/* Demangled: RscDrvImp::waitIrq(RSC_WAIT_IRQ_STRUCT*) */
int _ZN9RscDrvImp7waitIrqEP19RSC_WAIT_IRQ_STRUCT(void);

/* Symbol: _ZN9RscDrvImp9getRWModeEv */
/* Demangled: RscDrvImp::getRWMode() */
int _ZN9RscDrvImp9getRWModeEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream12onThreadLoopEPv(void);

/* Symbol: _ZN9RscDrvImp8readRegsEP21RSC_DRV_REG_IO_STRUCTji */
/* Demangled: RscDrvImp::readRegs(RSC_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9RscDrvImp8readRegsEP21RSC_DRV_REG_IO_STRUCTji(void);

/* Symbol: rsc_drv_DbgLogEnable_VERBOSE */
/* Demangled: rsc_drv_DbgLogEnable_VERBOSE */
extern void* rsc_drv_DbgLogEnable_VERBOSE;

/* Symbol: RscThread_DbgLogEnable_ASSERT */
/* Demangled: RscThread_DbgLogEnable_ASSERT */
extern void* RscThread_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc15getRscStreamImpEPKc */
/* Demangled: NSCam::NSIoPipe::NSRsc::getRscStreamImp(char const*) */
int _ZN5NSCam8NSIoPipe5NSRsc15getRscStreamImpEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe19RSCQueryInDMAStrideENS0_10RSCDMAPortEjj */
/* Demangled: NSCam::NSIoPipe::RSCQueryInDMAStride(NSCam::NSIoPipe::RSCDMAPort, unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe19RSCQueryInDMAStrideENS0_10RSCDMAPortEjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::RSCConfig const&>(NSCam::NSIoPipe::RSCConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe18g_RSC_UnitTest_NumE */
/* Demangled: NSCam::NSIoPipe::g_RSC_UnitTest_Num */
extern void* _ZN5NSCam8NSIoPipe18g_RSC_UnitTest_NumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::uninit() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv(void);

/* Symbol: _ZN6RscDrv11m_regRWModeE */
/* Demangled: RscDrv::m_regRWMode */
extern void* _ZN6RscDrv11m_regRWModeE;

/* Symbol: _ZN5NSCam8NSIoPipe23RSCQueryRscOutDMAStrideENS0_10RSCDMAPortEj */
/* Demangled: NSCam::NSIoPipe::RSCQueryRscOutDMAStride(NSCam::NSIoPipe::RSCDMAPort, unsigned int) */
int _ZN5NSCam8NSIoPipe23RSCQueryRscOutDMAStrideENS0_10RSCDMAPortEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream11mRscCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mRscCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream11mRscCmdLockE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mCmdListCondE;

/* Symbol: _ZTv0_n72_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::RSCdeque(NSCam::NSIoPipe::NSRsc::RSCParams&, long) */
int _ZTv0_n72_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl(void);

/* Symbol: _ZN9RscDrvImp8clearIrqEP20RSC_CLEAR_IRQ_STRUCT */
/* Demangled: RscDrvImp::clearIrq(RSC_CLEAR_IRQ_STRUCT*) */
int _ZN9RscDrvImp8clearIrqEP20RSC_CLEAR_IRQ_STRUCT(void);

/* Symbol: _ZN9RscDrvImpC1Ev */
/* Demangled: RscDrvImp::RscDrvImp() */
int _ZN9RscDrvImpC1Ev(void);

/* Symbol: rsc_drv_DbgLogEnable_ERROR */
/* Demangled: rsc_drv_DbgLogEnable_ERROR */
extern void* rsc_drv_DbgLogEnable_ERROR;

/* Symbol: RscUtility_DbgLogEnable_ERROR */
/* Demangled: RscUtility_DbgLogEnable_ERROR */
extern void* RscUtility_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mModuleMtxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream8mCmdListE;

/* Symbol: _ZN9RscDrvImp6uninitEPKc */
/* Demangled: RscDrvImp::uninit(char const*) */
int _ZN9RscDrvImp6uninitEPKc(void);

/* Symbol: RscThread_DbgLogEnable_DEBUG */
/* Demangled: RscThread_DbgLogEnable_DEBUG */
extern void* RscThread_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream13mSemRscThreadE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::mSemRscThread */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream13mSemRscThreadE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream7getLockEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getLock() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream7getLockEv(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSRsc::RSCRequest, std::__1::allocator<NSCam::NSIoPipe::NSRsc::RSCRequest> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev(void);

/* Symbol: _ZN9RscDrvImp10m_UserNameE */
/* Demangled: RscDrvImp::m_UserName */
extern void* _ZN9RscDrvImp10m_UserNameE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream10saveToFileEPKcPNS0_10RSCBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::saveToFile(char const*, NSCam::NSIoPipe::RSCBufInfo*) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10saveToFileEPKcPNS0_10RSCBufInfoE(void);

/* Symbol: _ZTv0_n40_N5NSCam8NSIoPipe5NSRsc9RscStream4initEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::init() */
int _ZTv0_n40_N5NSCam8NSIoPipe5NSRsc9RscStream4initEv(void);

/* Symbol: _ZN9RscDrvImp4initEPKc */
/* Demangled: RscDrvImp::init(char const*) */
int _ZN9RscDrvImp4initEPKc(void);

/* Symbol: _ZN9RscDrvImp8enqueRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE */
/* Demangled: RscDrvImp::enqueRSC(std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >&) */
int _ZN9RscDrvImp8enqueRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream10addCommandERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::addCommand(NSCam::NSIoPipe::NSRsc::ECmd const&) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10addCommandERKNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream9m_pRscDrvE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::m_pRscDrv */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream9m_pRscDrvE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc4ECmdENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSRsc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSRsc::ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc4ECmdENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: RscStream_DbgLogEnable_VERBOSE */
/* Demangled: RscStream_DbgLogEnable_VERBOSE */
extern void* RscStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream11releaseLockEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::releaseLock() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream11releaseLockEv(void);

/* Symbol: RscStream_DbgLogEnable_DEBUG */
/* Demangled: RscStream_DbgLogEnable_DEBUG */
extern void* RscStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RscStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC1EPKc(void);

/* Symbol: _ZN9RscDrvImp14m_RscInitMutexE */
/* Demangled: RscDrvImp::m_RscInitMutex */
extern void* _ZN9RscDrvImp14m_RscInitMutexE;

/* Symbol: _ZN9RscDrvImp16waitRSCFrameDoneEji */
/* Demangled: RscDrvImp::waitRSCFrameDone(unsigned int, int) */
int _ZN9RscDrvImp16waitRSCFrameDoneEji(void);

/* Symbol: _ZN9RscDrvImp9setRWModeE15RSC_DRV_RW_MODE */
/* Demangled: RscDrvImp::setRWMode(RSC_DRV_RW_MODE) */
int _ZN9RscDrvImp9setRWModeE15RSC_DRV_RW_MODE(void);

/* Symbol: rsc_drv_DbgLogEnable_WARN */
/* Demangled: rsc_drv_DbgLogEnable_WARN */
extern void* rsc_drv_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream13clearCommandsEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::clearCommands() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream13clearCommandsEv(void);

/* Symbol: RscStream_DbgLogEnable_WARN */
/* Demangled: RscStream_DbgLogEnable_WARN */
extern void* RscStream_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::destroyThread() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream13destroyThreadEv(void);

/* Symbol: RscUtility_DbgLogEnable_ASSERT */
/* Demangled: RscUtility_DbgLogEnable_ASSERT */
extern void* RscUtility_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::createThread() */
int _ZN5NSCam8NSIoPipe5NSRsc9RscStream12createThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc9RscStream17m_QueueRSCReqListE */
/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::m_QueueRSCReqList */
extern void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream17m_QueueRSCReqListE;

/* Symbol: RscStream_DbgLogEnable_ASSERT */
/* Demangled: RscStream_DbgLogEnable_ASSERT */
extern void* RscStream_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSRsc10IRscStream14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSRsc::IRscStream::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSRsc10IRscStream14createInstanceEPKc(void);

/* Symbol: _ZN6RscDrv14createInstanceEv */
/* Demangled: RscDrv::createInstance() */
int _ZN6RscDrv14createInstanceEv(void);

/* Symbol: _ZN9RscDrvImpC2Ev */
/* Demangled: RscDrvImp::RscDrvImp() */
int _ZN9RscDrvImpC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_RSC_H */
