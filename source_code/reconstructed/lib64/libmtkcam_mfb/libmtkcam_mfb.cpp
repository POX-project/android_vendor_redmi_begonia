/*
 * Reverse-Engineered Source for: libmtkcam_mfb.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_mfb"

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
#include "libmtkcam_mfb.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_MFB "/dev/camera-mfb"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_MFB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_MFB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_MFB, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::MFBConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE() called");
    return 0;
}

/* Exported Object: g_MfbImemDrv */
extern "C" __attribute__((visibility("default"))) void* g_MfbImemDrv = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE7mThreadE = NULL;

/* Demangled: MfbDrvImp::waitIrq(MFB_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp7waitIrqEP19MFB_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9MfbDrvImp7waitIrqEP19MFB_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: mfb_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: MfbUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_WARN = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mInitCountE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED1Ev() called");
    return 0;
}

/* Demangled: MfbDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9MfbDrvImp11getInstanceEv() called");
    return 0;
}

/* Exported Object: MfbDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp9m_UserCntE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE17m_QueueEGNReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE4initEv() called");
    return 0;
}

/* Exported Object: Imem_Size */
extern "C" __attribute__((visibility("default"))) void* Imem_Size = NULL;

/* Demangled: MFB_Imem_alloc(unsigned int, int*, unsigned char**, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z14MFB_Imem_allocjPiPPhPm(void) {
    ALOGD("_Z14MFB_Imem_allocjPiPPhPm() called");
    return 0;
}

/* Demangled: MfbDrvImp::MfbDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImpC1Ev(void) {
    ALOGD("_ZN9MfbDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: EgnStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_DEBUG = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE = NULL;

/* Exported Object: MfbDrvImp::m_MfbInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp14m_MfbInitMutexE = NULL;

/* Exported Object: MfbDrvImp::m_pMfbHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp15m_pMfbHwRegAddrE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_INFO = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE = NULL;

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Exported Object: mfb_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: MfbDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp10m_UserNameE = NULL;

/* Demangled: EngineDrv<NSCam::NSIoPipe::MFBConfig>::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9EngineDrvIN5NSCam8NSIoPipe9MFBConfigEE14createInstanceEv(void) {
    ALOGD("_ZN9EngineDrvIN5NSCam8NSIoPipe9MFBConfigEE14createInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ECmd, std::__1::allocator<ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::MFBConfig> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9MFBConfigEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEE = NULL;

/* Exported Object: g_isMFBLogEnable */
extern "C" __attribute__((visibility("default"))) void* g_isMFBLogEnable = NULL;

/* Exported Object: MfbUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKc() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::SUB_ENGINE_ID, std::__1::allocator<NSCam::NSIoPipe::SUB_ENGINE_ID> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: Imem_MemID */
extern "C" __attribute__((visibility("default"))) void* Imem_MemID = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mTotalCmdNumE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mSemEgnThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE13mSemEgnThreadE = NULL;

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: Mfb_Imem_AllocNum */
extern "C" __attribute__((visibility("default"))) void* Mfb_Imem_AllocNum = NULL;

/* Demangled: configTPIPE(NSCam::NSIoPipe::MFBConfig*, NSCam::NSIoPipe::SrzCfg, MFB_DRV_DMA_EN_STRUCT) */
extern "C" __attribute__((visibility("default"))) int _Z11configTPIPEPN5NSCam8NSIoPipe9MFBConfigENS0_6SrzCfgE21MFB_DRV_DMA_EN_STRUCT(void) {
    ALOGD("_Z11configTPIPEPN5NSCam8NSIoPipe9MFBConfigENS0_6SrzCfgE21MFB_DRV_DMA_EN_STRUCT() called");
    return 0;
}

/* Demangled: MFB_dumpTPipeCfgInfo(ISP_TPIPE_CONFIG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20MFB_dumpTPipeCfgInfoP23ISP_TPIPE_CONFIG_STRUCT(void) {
    ALOGD("_Z20MFB_dumpTPipeCfgInfoP23ISP_TPIPE_CONFIG_STRUCT() called");
    return 0;
}

/* Exported Object: MfbDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp11m_regRWModeE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mCmdListE = NULL;

/* Exported Object: mfb_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_DEBUG = NULL;

/* Exported Object: EgnStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::MFBConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::MFBConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9MFBConfigEE4initERKNS1_10INITParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9MFBConfigEE4initERKNS1_10INITParamsIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EgnStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEEC1EPKc() called");
    return 0;
}

/* Demangled: MfbDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9MfbDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: mfb_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_WARN = NULL;

/* Exported Object: pTpipeCfgInfo */
extern "C" __attribute__((visibility("default"))) void* pTpipeCfgInfo = NULL;

/* Exported Object: MfbUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE = NULL;

/* Demangled: configSRZ5(NSCam::NSIoPipe::SrzCfg*, NSCam::NSIoPipe::SRZSizeInfo) */
extern "C" __attribute__((visibility("default"))) int _Z10configSRZ5PN5NSCam8NSIoPipe6SrzCfgENS0_11SRZSizeInfoE(void) {
    ALOGD("_Z10configSRZ5PN5NSCam8NSIoPipe6SrzCfgENS0_11SRZSizeInfoE() called");
    return 0;
}

/* Exported Object: vtable for MfbDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9MfbDrvImp = NULL;

/* Exported Object: g_MfbTileBuffer */
extern "C" __attribute__((visibility("default"))) void* g_MfbTileBuffer = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12mCmdListCondE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEED0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >::__push_back_slow_path<NSCam::NSIoPipe::MFBConfig const&>(NSCam::NSIoPipe::MFBConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: MfbUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_INFO = NULL;

/* Exported Object: Mfb_Imem_Buf_Info */
extern "C" __attribute__((visibility("default"))) void* Mfb_Imem_Buf_Info = NULL;

/* Demangled: MfbDrvImp::MfbDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImpC2Ev(void) {
    ALOGD("_ZN9MfbDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: EgnStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ERROR = NULL;

/* Exported Object: EgnStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_WARN = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE = NULL;

/* Demangled: MfbDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9MfbDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: MfbDrvImp::waitFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp13waitFrameDoneEji(void) {
    ALOGD("_ZN9MfbDrvImp13waitFrameDoneEji() called");
    return 0;
}

/* Exported Object: Imem_pLogVir */
extern "C" __attribute__((visibility("default"))) void* Imem_pLogVir = NULL;

/* Exported Object: NSCam::NSIoPipe::g_MFB_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe18g_MFB_UnitTest_NumE = NULL;

/* Exported Object: MfbUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_ASSERT = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE11mEgnCmdLockE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::m_pEngineDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE12m_pEngineDrvE = NULL;

/* Demangled: MfbDrvImp::clearIrq(MFB_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp8clearIrqEP20MFB_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9MfbDrvImp8clearIrqEP20MFB_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: MfbUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* MfbUtility_DbgLogEnable_DEBUG = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10mModuleMtxE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::MFBConfig>::createInstance(char const*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9MFBConfigEE14createInstanceEPKcE9singleton = NULL;

/* Demangled: MFB_Imem_free(unsigned char*, unsigned long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13MFB_Imem_freePhmji(void) {
    ALOGD("_Z13MFB_Imem_freePhmji() called");
    return 0;
}

/* Demangled: MfbDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp4initEPKc(void) {
    ALOGD("_ZN9MfbDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE6uninitEv() called");
    return 0;
}

/* Demangled: MfbDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MfbDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9MfbDrvImp6uninitEPKc() called");
    return 0;
}

/* Exported Object: tpipeDesc */
extern "C" __attribute__((visibility("default"))) void* tpipeDesc = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8mEgnListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE19resetDequeVariablesEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::MFBConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::MFBConfig>&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9MFBConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl() called");
    return 0;
}

/* Exported Object: MfbDrvImp::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN9MfbDrvImp4m_FdE = NULL;

/* Exported Object: mfb_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: mfb_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* mfb_drv_DbgLogEnable_ERROR = NULL;
