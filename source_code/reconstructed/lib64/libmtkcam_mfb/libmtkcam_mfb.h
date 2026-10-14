/*
 * Reverse-Engineered ABI Specification for: libmtkcam_mfb.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_mfb.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_MFB_H
#define BEGONIA_RE_LIBMTKCAM_MFB_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZGVZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*)::singleton */
extern void* _ZGVZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::MFBConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void);

/* Symbol: g_MfbImemDrv */
/* Demangled: g_MfbImemDrv */
extern void* g_MfbImemDrv;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE7mThreadE;

/* Symbol: _ZN9MfbDrvImp7waitIrqEP19MFB_WAIT_IRQ_STRUCT */
/* Demangled: MfbDrvImp::waitIrq(MFB_WAIT_IRQ_STRUCT*) */
int _ZN9MfbDrvImp7waitIrqEP19MFB_WAIT_IRQ_STRUCT(void);

/* Symbol: mfb_drv_DbgLogEnable_INFO */
/* Demangled: mfb_drv_DbgLogEnable_INFO */
extern void* mfb_drv_DbgLogEnable_INFO;

/* Symbol: MfbUtility_DbgLogEnable_WARN */
/* Demangled: MfbUtility_DbgLogEnable_WARN */
extern void* MfbUtility_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mInitCountE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_QueueEGNReqList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED1Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED1Ev(void);

/* Symbol: _ZN9MfbDrvImp11getInstanceEv */
/* Demangled: MfbDrvImp::getInstance() */
int _ZN9MfbDrvImp11getInstanceEv(void);

/* Symbol: _ZN9MfbDrvImp9m_UserCntE */
/* Demangled: MfbDrvImp::m_UserCnt */
extern void* _ZN9MfbDrvImp9m_UserCntE;

/* Symbol: EgnStream_DbgLogEnable_VERBOSE */
/* Demangled: EgnStream_DbgLogEnable_VERBOSE */
extern void* EgnStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_QueueEGNReqList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE4initEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::init() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE4initEv(void);

/* Symbol: Imem_Size */
/* Demangled: Imem_Size */
extern void* Imem_Size;

/* Symbol: _Z14MFB_Imem_allocjPiPPhPm */
/* Demangled: MFB_Imem_alloc(unsigned int, int*, unsigned char**, unsigned long*) */
int _Z14MFB_Imem_allocjPiPPhPm(void);

/* Symbol: _ZN9MfbDrvImpC1Ev */
/* Demangled: MfbDrvImp::MfbDrvImp() */
int _ZN9MfbDrvImpC1Ev(void);

/* Symbol: EgnStream_DbgLogEnable_DEBUG */
/* Demangled: EgnStream_DbgLogEnable_DEBUG */
extern void* EgnStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE;

/* Symbol: _ZN9MfbDrvImp14m_MfbInitMutexE */
/* Demangled: MfbDrvImp::m_MfbInitMutex */
extern void* _ZN9MfbDrvImp14m_MfbInitMutexE;

/* Symbol: _ZN9MfbDrvImp15m_pMfbHwRegAddrE */
/* Demangled: MfbDrvImp::m_pMfbHwRegAddr */
extern void* _ZN9MfbDrvImp15m_pMfbHwRegAddrE;

/* Symbol: EgnStream_DbgLogEnable_INFO */
/* Demangled: EgnStream_DbgLogEnable_INFO */
extern void* EgnStream_DbgLogEnable_INFO;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE;

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEE9push_backERKS6_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void);

/* Symbol: mfb_drv_DbgLogEnable_VERBOSE */
/* Demangled: mfb_drv_DbgLogEnable_VERBOSE */
extern void* mfb_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9MfbDrvImp10m_UserNameE */
/* Demangled: MfbDrvImp::m_UserName */
extern void* _ZN9MfbDrvImp10m_UserNameE;

/* Symbol: _ZN9EngineDrvIN5NSCam8NSIoPipe9MFBConfigEE14createInstanceEv */
/* Demangled: EngineDrv<NSCam::NSIoPipe::MFBConfig>::createInstance() */
int _ZN9EngineDrvIN5NSCam8NSIoPipe9MFBConfigEE14createInstanceEv(void);

/* Symbol: _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__list_imp<ECmd, std::__1::allocator<ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> > >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEE */
/* Demangled: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig> */
extern void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEE;

/* Symbol: g_isMFBLogEnable */
/* Demangled: g_isMFBLogEnable */
extern void* g_isMFBLogEnable;

/* Symbol: MfbUtility_DbgLogEnable_ERROR */
/* Demangled: MfbUtility_DbgLogEnable_ERROR */
extern void* MfbUtility_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKc(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::SUB_ENGINE_ID, std::__1::allocator<NSCam::NSIoPipe::SUB_ENGINE_ID> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: Imem_MemID */
/* Demangled: Imem_MemID */
extern void* Imem_MemID;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mTotalCmdNumE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE13mSemEgnThreadE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mSemEgnThread */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE13mSemEgnThreadE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: Mfb_Imem_AllocNum */
/* Demangled: Mfb_Imem_AllocNum */
extern void* Mfb_Imem_AllocNum;

/* Symbol: _Z11configTPIPEPN5NSCam8NSIoPipe9MFBConfigENS0_6SrzCfgE21MFB_DRV_DMA_EN_STRUCT */
/* Demangled: configTPIPE(NSCam::NSIoPipe::MFBConfig*, NSCam::NSIoPipe::SrzCfg, MFB_DRV_DMA_EN_STRUCT) */
int _Z11configTPIPEPN5NSCam8NSIoPipe9MFBConfigENS0_6SrzCfgE21MFB_DRV_DMA_EN_STRUCT(void);

/* Symbol: _Z20MFB_dumpTPipeCfgInfoP23ISP_TPIPE_CONFIG_STRUCT */
/* Demangled: MFB_dumpTPipeCfgInfo(ISP_TPIPE_CONFIG_STRUCT*) */
int _Z20MFB_dumpTPipeCfgInfoP23ISP_TPIPE_CONFIG_STRUCT(void);

/* Symbol: _ZN9MfbDrvImp11m_regRWModeE */
/* Demangled: MfbDrvImp::m_regRWMode */
extern void* _ZN9MfbDrvImp11m_regRWModeE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE15destroyInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE;

/* Symbol: mfb_drv_DbgLogEnable_DEBUG */
/* Demangled: mfb_drv_DbgLogEnable_DEBUG */
extern void* mfb_drv_DbgLogEnable_DEBUG;

/* Symbol: EgnStream_DbgLogEnable_ASSERT */
/* Demangled: EgnStream_DbgLogEnable_ASSERT */
extern void* EgnStream_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9MFBConfigEE4initERKNS1_10INITParamsIS3_EE */
/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::MFBConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::MFBConfig> const&) */
int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9MFBConfigEE4initERKNS1_10INITParamsIS3_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEC1EPKc */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EgnStream(char const*) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEC1EPKc(void);

/* Symbol: _ZN9MfbDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE */
/* Demangled: MfbDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >&) */
int _ZN9MfbDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: mfb_drv_DbgLogEnable_WARN */
/* Demangled: mfb_drv_DbgLogEnable_WARN */
extern void* mfb_drv_DbgLogEnable_WARN;

/* Symbol: pTpipeCfgInfo */
/* Demangled: pTpipeCfgInfo */
extern void* pTpipeCfgInfo;

/* Symbol: MfbUtility_DbgLogEnable_VERBOSE */
/* Demangled: MfbUtility_DbgLogEnable_VERBOSE */
extern void* MfbUtility_DbgLogEnable_VERBOSE;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdListCond */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE;

/* Symbol: _Z10configSRZ5PN5NSCam8NSIoPipe6SrzCfgENS0_11SRZSizeInfoE */
/* Demangled: configSRZ5(NSCam::NSIoPipe::SrzCfg*, NSCam::NSIoPipe::SRZSizeInfo) */
int _Z10configSRZ5PN5NSCam8NSIoPipe6SrzCfgENS0_11SRZSizeInfoE(void);

/* Symbol: _ZTV9MfbDrvImp */
/* Demangled: vtable for MfbDrvImp */
extern void* _ZTV9MfbDrvImp;

/* Symbol: g_MfbTileBuffer */
/* Demangled: g_MfbTileBuffer */
extern void* g_MfbTileBuffer;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED0Ev */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::~EgnStream() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >::__push_back_slow_path<NSCam::NSIoPipe::MFBConfig const&>(NSCam::NSIoPipe::MFBConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: MfbUtility_DbgLogEnable_INFO */
/* Demangled: MfbUtility_DbgLogEnable_INFO */
extern void* MfbUtility_DbgLogEnable_INFO;

/* Symbol: Mfb_Imem_Buf_Info */
/* Demangled: Mfb_Imem_Buf_Info */
extern void* Mfb_Imem_Buf_Info;

/* Symbol: _ZN9MfbDrvImpC2Ev */
/* Demangled: MfbDrvImp::MfbDrvImp() */
int _ZN9MfbDrvImpC2Ev(void);

/* Symbol: EgnStream_DbgLogEnable_ERROR */
/* Demangled: EgnStream_DbgLogEnable_ERROR */
extern void* EgnStream_DbgLogEnable_ERROR;

/* Symbol: EgnStream_DbgLogEnable_WARN */
/* Demangled: EgnStream_DbgLogEnable_WARN */
extern void* EgnStream_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE;

/* Symbol: _ZN9MfbDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE */
/* Demangled: MfbDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >&) */
int _ZN9MfbDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZN9MfbDrvImp13waitFrameDoneEji */
/* Demangled: MfbDrvImp::waitFrameDone(unsigned int, int) */
int _ZN9MfbDrvImp13waitFrameDoneEji(void);

/* Symbol: Imem_pLogVir */
/* Demangled: Imem_pLogVir */
extern void* Imem_pLogVir;

/* Symbol: _ZN5NSCam8NSIoPipe18g_MFB_UnitTest_NumE */
/* Demangled: NSCam::NSIoPipe::g_MFB_UnitTest_Num */
extern void* _ZN5NSCam8NSIoPipe18g_MFB_UnitTest_NumE;

/* Symbol: MfbUtility_DbgLogEnable_ASSERT */
/* Demangled: MfbUtility_DbgLogEnable_ASSERT */
extern void* MfbUtility_DbgLogEnable_ASSERT;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnCmdLock */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12m_pEngineDrvE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_pEngineDrv */
extern void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12m_pEngineDrvE;

/* Symbol: _ZN9MfbDrvImp8clearIrqEP20MFB_CLEAR_IRQ_STRUCT */
/* Demangled: MfbDrvImp::clearIrq(MFB_CLEAR_IRQ_STRUCT*) */
int _ZN9MfbDrvImp8clearIrqEP20MFB_CLEAR_IRQ_STRUCT(void);

/* Symbol: MfbUtility_DbgLogEnable_DEBUG */
/* Demangled: MfbUtility_DbgLogEnable_DEBUG */
extern void* MfbUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mModuleMtx */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE;

/* Symbol: _ZZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton */
/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*)::singleton */
extern void* _ZZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton;

/* Symbol: _Z13MFB_Imem_freePhmji */
/* Demangled: MFB_Imem_free(unsigned char*, unsigned long, unsigned int, int) */
int _Z13MFB_Imem_freePhmji(void);

/* Symbol: _ZN9MfbDrvImp4initEPKc */
/* Demangled: MfbDrvImp::init(char const*) */
int _ZN9MfbDrvImp4initEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::uninit() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE6uninitEv(void);

/* Symbol: _ZN9MfbDrvImp6uninitEPKc */
/* Demangled: MfbDrvImp::uninit(char const*) */
int _ZN9MfbDrvImp6uninitEPKc(void);

/* Symbol: tpipeDesc */
/* Demangled: tpipeDesc */
extern void* tpipeDesc;

/* Symbol: _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE */
/* Demangled: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnList */
extern void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE19resetDequeVariablesEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl */
/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::MFBConfig>&, long) */
int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void);

/* Symbol: _ZN9MfbDrvImp4m_FdE */
/* Demangled: MfbDrvImp::m_Fd */
extern void* _ZN9MfbDrvImp4m_FdE;

/* Symbol: mfb_drv_DbgLogEnable_ASSERT */
/* Demangled: mfb_drv_DbgLogEnable_ASSERT */
extern void* mfb_drv_DbgLogEnable_ASSERT;

/* Symbol: mfb_drv_DbgLogEnable_ERROR */
/* Demangled: mfb_drv_DbgLogEnable_ERROR */
extern void* mfb_drv_DbgLogEnable_ERROR;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_MFB_H */
