/*
 * Reverse-Engineered ABI Specification for: libmtkcam_tsf.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_tsf.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_TSF_H
#define BEGONIA_RE_LIBMTKCAM_TSF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TSFdeque(NSCam::NSIoPipe::NSTsf::TSFParams&, long long) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx(void);

/* Symbol: _ZN6TsfDrv14createInstanceEv */
/* Demangled: TsfDrv::createInstance() */
int _ZN6TsfDrv14createInstanceEv(void);

/* Symbol: tsf_drv_DbgLogEnable_WARN */
/* Demangled: tsf_drv_DbgLogEnable_WARN */
extern void* tsf_drv_DbgLogEnable_WARN;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mModuleMtxE;

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSTsf9TsfStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSTsf::TsfStream */
extern void* _ZTVN5NSCam8NSIoPipe5NSTsf9TsfStreamE;

/* Symbol: _ZN9TsfDrvImp4initEPKc */
/* Demangled: TsfDrvImp::init(char const*) */
int _ZN9TsfDrvImp4initEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf10ITsfStream14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSTsf::ITsfStream::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSTsf10ITsfStream14createInstanceEPKc(void);

/* Symbol: _ZN9TsfDrvImp15m_pTsfHwRegAddrE */
/* Demangled: TsfDrvImp::m_pTsfHwRegAddr */
extern void* _ZN9TsfDrvImp15m_pTsfHwRegAddrE;

/* Symbol: _ZN9TsfDrvImp7waitIrqEP19TSF_WAIT_IRQ_STRUCT */
/* Demangled: TsfDrvImp::waitIrq(TSF_WAIT_IRQ_STRUCT*) */
int _ZN9TsfDrvImp7waitIrqEP19TSF_WAIT_IRQ_STRUCT(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream17m_QueueTsfReqListE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::m_QueueTsfReqList */
extern void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream17m_QueueTsfReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TsfStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC1EPKc(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::TSFenque(NSCam::NSIoPipe::NSTsf::TSFParams const&) */
int _ZTv0_n32_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE(void);

/* Symbol: _ZN9TsfDrvImp9getRWModeEv */
/* Demangled: TsfDrvImp::getRWMode() */
int _ZN9TsfDrvImp9getRWModeEv(void);

/* Symbol: TsfStream_DbgLogEnable_ERROR */
/* Demangled: TsfStream_DbgLogEnable_ERROR */
extern void* TsfStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TSFenque(NSCam::NSIoPipe::NSTsf::TSFParams const&) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD2Ev(void);

/* Symbol: _ZN9TsfDrvImp9writeRegsEP21TSF_DRV_REG_IO_STRUCTji */
/* Demangled: TsfDrvImp::writeRegs(TSF_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9TsfDrvImp9writeRegsEP21TSF_DRV_REG_IO_STRUCTji(void);

/* Symbol: TsfStream_DbgLogEnable_DEBUG */
/* Demangled: TsfStream_DbgLogEnable_DEBUG */
extern void* TsfStream_DbgLogEnable_DEBUG;

/* Symbol: _ZTCN5NSCam8NSIoPipe5NSTsf9TsfStreamE0_NS1_10ITsfStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSTsf::ITsfStream-in-NSCam::NSIoPipe::NSTsf::TsfStream */
extern void* _ZTCN5NSCam8NSIoPipe5NSTsf9TsfStreamE0_NS1_10ITsfStreamE;

/* Symbol: TsfUtility_DbgLogEnable_WARN */
/* Demangled: TsfUtility_DbgLogEnable_WARN */
extern void* TsfUtility_DbgLogEnable_WARN;

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev(void);

/* Symbol: _ZN9TsfDrvImp8readRegsEP21TSF_DRV_REG_IO_STRUCTji */
/* Demangled: TsfDrvImp::readRegs(TSF_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9TsfDrvImp8readRegsEP21TSF_DRV_REG_IO_STRUCTji(void);

/* Symbol: tsf_drv_DbgLogEnable_ERROR */
/* Demangled: tsf_drv_DbgLogEnable_ERROR */
extern void* tsf_drv_DbgLogEnable_ERROR;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11DrvMakePathEPKcj */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::DrvMakePath(char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11DrvMakePathEPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream4initEv */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::init() */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev(void);

/* Symbol: _ZN9TsfDrvImp11getInstanceEv */
/* Demangled: TsfDrvImp::getInstance() */
int _ZN9TsfDrvImp11getInstanceEv(void);

/* Symbol: _ZN9TsfDrvImp9m_UserCntE */
/* Demangled: TsfDrvImp::m_UserCnt */
extern void* _ZN9TsfDrvImp9m_UserCntE;

/* Symbol: tsf_drv_DbgLogEnable_DEBUG */
/* Demangled: tsf_drv_DbgLogEnable_DEBUG */
extern void* tsf_drv_DbgLogEnable_DEBUG;

/* Symbol: tsf_drv_DbgLogEnable_INFO */
/* Demangled: tsf_drv_DbgLogEnable_INFO */
extern void* tsf_drv_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe17TSFQueryDMAStrideENS0_10TSFDMAPortEj */
/* Demangled: NSCam::NSIoPipe::TSFQueryDMAStride(NSCam::NSIoPipe::TSFDMAPort, unsigned int) */
int _ZN5NSCam8NSIoPipe17TSFQueryDMAStrideENS0_10TSFDMAPortEj(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::uninit() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: TsfStream_DbgLogEnable_WARN */
/* Demangled: TsfStream_DbgLogEnable_WARN */
extern void* TsfStream_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::uninit() */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev(void);

/* Symbol: TsfStream_DbgLogEnable_ASSERT */
/* Demangled: TsfStream_DbgLogEnable_ASSERT */
extern void* TsfStream_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev(void);

/* Symbol: _ZN9TsfDrvImp16waitTSFFrameDoneEji */
/* Demangled: TsfDrvImp::waitTSFFrameDone(unsigned int, int) */
int _ZN9TsfDrvImp16waitTSFFrameDoneEji(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSTsf::TSFRequest, std::__1::allocator<NSCam::NSIoPipe::NSTsf::TSFRequest> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe5NSTsf9TsfStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSTsf::TsfStream */
extern void* _ZTTN5NSCam8NSIoPipe5NSTsf9TsfStreamE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC2EPKc */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TsfStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC2EPKc(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN9TsfDrvImp6uninitEPKc */
/* Demangled: TsfDrvImp::uninit(char const*) */
int _ZN9TsfDrvImp6uninitEPKc(void);

/* Symbol: _ZN9TsfDrvImp8enqueTSFERKN5NSCam8NSIoPipe9TSFConfigE */
/* Demangled: TsfDrvImp::enqueTSF(NSCam::NSIoPipe::TSFConfig const&) */
int _ZN9TsfDrvImp8enqueTSFERKN5NSCam8NSIoPipe9TSFConfigE(void);

/* Symbol: _ZN9TsfDrvImpC2Ev */
/* Demangled: TsfDrvImp::TsfDrvImp() */
int _ZN9TsfDrvImpC2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: TsfUtility_DbgLogEnable_INFO */
/* Demangled: TsfUtility_DbgLogEnable_INFO */
extern void* TsfUtility_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::setCryption(int, int) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_ */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::getTSFKey(unsigned int&, unsigned int&) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9m_pTsfDrvE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::m_pTsfDrv */
extern void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9m_pTsfDrvE;

/* Symbol: _ZTv0_n20_N5NSCam8NSIoPipe5NSTsf9TsfStream4initEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::init() */
int _ZTv0_n20_N5NSCam8NSIoPipe5NSTsf9TsfStream4initEv(void);

/* Symbol: _ZTv0_n44_N5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::setCryption(int, int) */
int _ZTv0_n44_N5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii(void);

/* Symbol: _ZTV9TsfDrvImp */
/* Demangled: vtable for TsfDrvImp */
extern void* _ZTV9TsfDrvImp;

/* Symbol: TsfUtility_DbgLogEnable_ERROR */
/* Demangled: TsfUtility_DbgLogEnable_ERROR */
extern void* TsfUtility_DbgLogEnable_ERROR;

/* Symbol: TsfUtility_DbgLogEnable_VERBOSE */
/* Demangled: TsfUtility_DbgLogEnable_VERBOSE */
extern void* TsfUtility_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8DrvMkdirEPKcj */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::DrvMkdir(char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8DrvMkdirEPKcj(void);

/* Symbol: _ZTv0_n40_N5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_ */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::getTSFKey(unsigned int&, unsigned int&) */
int _ZTv0_n40_N5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_(void);

/* Symbol: _ZN9TsfDrvImp7readRegEji */
/* Demangled: TsfDrvImp::readReg(unsigned int, int) */
int _ZN9TsfDrvImp7readRegEji(void);

/* Symbol: _ZN9TsfDrvImp8clearIrqEP20TSF_CLEAR_IRQ_STRUCT */
/* Demangled: TsfDrvImp::clearIrq(TSF_CLEAR_IRQ_STRUCT*) */
int _ZN9TsfDrvImp8clearIrqEP20TSF_CLEAR_IRQ_STRUCT(void);

/* Symbol: TsfUtility_DbgLogEnable_DEBUG */
/* Demangled: TsfUtility_DbgLogEnable_DEBUG */
extern void* TsfUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZTv0_n36_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::TSFdeque(NSCam::NSIoPipe::NSTsf::TSFParams&, long long) */
int _ZTv0_n36_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx(void);

/* Symbol: _ZN6TsfDrv4m_FdE */
/* Demangled: TsfDrv::m_Fd */
extern void* _ZN6TsfDrv4m_FdE;

/* Symbol: _ZN9TsfDrvImp10m_UserNameE */
/* Demangled: TsfDrvImp::m_UserName */
extern void* _ZN9TsfDrvImp10m_UserNameE;

/* Symbol: _ZN9TsfDrvImpC1Ev */
/* Demangled: TsfDrvImp::TsfDrvImp() */
int _ZN9TsfDrvImpC1Ev(void);

/* Symbol: TsfStream_DbgLogEnable_INFO */
/* Demangled: TsfStream_DbgLogEnable_INFO */
extern void* TsfStream_DbgLogEnable_INFO;

/* Symbol: _ZN6TsfDrv11m_regRWModeE */
/* Demangled: TsfDrv::m_regRWMode */
extern void* _ZN6TsfDrv11m_regRWModeE;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: TsfUtility_DbgLogEnable_ASSERT */
/* Demangled: TsfUtility_DbgLogEnable_ASSERT */
extern void* TsfUtility_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe17QueryTSFHWSupportEv */
/* Demangled: NSCam::NSIoPipe::QueryTSFHWSupport() */
int _ZN5NSCam8NSIoPipe17QueryTSFHWSupportEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc(void);

/* Symbol: _ZTv0_n16_N5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::destroyInstance(char const*) */
int _ZTv0_n16_N5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc(void);

/* Symbol: _ZN9TsfDrvImp8writeRegEjmi */
/* Demangled: TsfDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9TsfDrvImp8writeRegEjmi(void);

/* Symbol: TsfStream_DbgLogEnable_VERBOSE */
/* Demangled: TsfStream_DbgLogEnable_VERBOSE */
extern void* TsfStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mInitCountE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSTsf::TSFRequest, std::__1::allocator<NSCam::NSIoPipe::NSTsf::TSFRequest> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN9TsfDrvImp14m_TsfInitMutexE */
/* Demangled: TsfDrvImp::m_TsfInitMutex */
extern void* _ZN9TsfDrvImp14m_TsfInitMutexE;

/* Symbol: tsf_drv_DbgLogEnable_ASSERT */
/* Demangled: tsf_drv_DbgLogEnable_ASSERT */
extern void* tsf_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10saveToFileEPKcPNS0_10TSFBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::saveToFile(char const*, NSCam::NSIoPipe::TSFBufInfo*) */
int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10saveToFileEPKcPNS0_10TSFBufInfoE(void);

/* Symbol: _ZN9TsfDrvImp9setRWModeE15TSF_DRV_RW_MODE */
/* Demangled: TsfDrvImp::setRWMode(TSF_DRV_RW_MODE) */
int _ZN9TsfDrvImp9setRWModeE15TSF_DRV_RW_MODE(void);

/* Symbol: tsf_drv_DbgLogEnable_VERBOSE */
/* Demangled: tsf_drv_DbgLogEnable_VERBOSE */
extern void* tsf_drv_DbgLogEnable_VERBOSE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_TSF_H */
