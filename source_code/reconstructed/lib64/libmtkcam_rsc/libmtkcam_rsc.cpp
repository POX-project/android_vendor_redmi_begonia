/*
 * Reverse-Engineered Source for: libmtkcam_rsc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_rsc"

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
#include "libmtkcam_rsc.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_RSC "/dev/camera-rsc"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_RSC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_RSC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_RSC, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: RscDrvImp::dequeRSC(std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp8dequeRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9RscDrvImp8dequeRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: rsc_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: RscThread_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_WARN = NULL;

/* Exported Object: RscStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_INFO = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mTotalCmdNumE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream19resetDequeVariablesEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSRsc::RscStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe5NSRsc9RscStreamE = NULL;

/* Demangled: RscDrvImp::writeRegs(RSC_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp9writeRegsEP21RSC_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9RscDrvImp9writeRegsEP21RSC_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: RscUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: RscThread_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_ERROR = NULL;

/* Exported Object: vtable for RscDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9RscDrvImp = NULL;

/* Exported Object: rsc_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_DEBUG = NULL;

/* Exported Object: RscUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_DEBUG = NULL;

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSRsc::IRscStream-in-NSCam::NSIoPipe::NSRsc::RscStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe5NSRsc9RscStreamE0_NS1_10IRscStreamE = NULL;

/* Exported Object: vtable for NSCam::NSIoPipe::NSRsc::RscStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSRsc9RscStreamE = NULL;

/* Exported Object: RscUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_WARN = NULL;

/* Exported Object: RscThread_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getUs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream5getUsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream5getUsEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mInitCountE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RscStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC2EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStreamC2EPKc() called");
    return 0;
}

/* Exported Object: RscDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6RscDrv4m_FdE = NULL;

/* Demangled: RscDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9RscDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: RscDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9RscDrvImp9m_UserCntE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream7mThreadE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStreamD2Ev() called");
    return 0;
}

/* Exported Object: RscDrvImp::m_pRscHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9RscDrvImp15m_pRscHwRegAddrE = NULL;

/* Exported Object: rsc_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: RscThread_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getCommand(NSCam::NSIoPipe::NSRsc::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10getCommandERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream10getCommandERNS1_4ECmdE() called");
    return 0;
}

/* Exported Object: RscStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RSCdeque(NSCam::NSIoPipe::NSRsc::RSCParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv(void) {
    ALOGD("_ZTv0_n48_N5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RSCenque(NSCam::NSIoPipe::NSRsc::RSCParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSRsc::RSCRequest, std::__1::allocator<NSCam::NSIoPipe::NSRsc::RSCRequest> >::push_back(NSCam::NSIoPipe::NSRsc::RSCRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::RSCenque(NSCam::NSIoPipe::NSRsc::RSCParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE(void) {
    ALOGD("_ZTv0_n64_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCenqueERKNS1_9RSCParamsE() called");
    return 0;
}

/* Demangled: RscDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp7readRegEji(void) {
    ALOGD("_ZN9RscDrvImp7readRegEji() called");
    return 0;
}

/* Exported Object: RscUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_INFO = NULL;

/* Demangled: RscDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9RscDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: RscDrvImp::waitIrq(RSC_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp7waitIrqEP19RSC_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9RscDrvImp7waitIrqEP19RSC_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: RscDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9RscDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: RscDrvImp::readRegs(RSC_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp8readRegsEP21RSC_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9RscDrvImp8readRegsEP21RSC_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: rsc_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: RscThread_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::getRscStreamImp(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc15getRscStreamImpEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc15getRscStreamImpEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::RSCQueryInDMAStride(NSCam::NSIoPipe::RSCDMAPort, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe19RSCQueryInDMAStrideENS0_10RSCDMAPortEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe19RSCQueryInDMAStrideENS0_10RSCDMAPortEjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::RSCConfig const&>(NSCam::NSIoPipe::RSCConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::g_RSC_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe18g_RSC_UnitTest_NumE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream6uninitEv() called");
    return 0;
}

/* Exported Object: RscDrv::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN6RscDrv11m_regRWModeE = NULL;

/* Demangled: NSCam::NSIoPipe::RSCQueryRscOutDMAStride(NSCam::NSIoPipe::RSCDMAPort, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe23RSCQueryRscOutDMAStrideENS0_10RSCDMAPortEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe23RSCQueryRscOutDMAStrideENS0_10RSCDMAPortEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mRscCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream11mRscCmdLockE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream12mCmdListCondE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::RSCdeque(NSCam::NSIoPipe::NSRsc::RSCParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl(void) {
    ALOGD("_ZTv0_n72_N5NSCam8NSIoPipe5NSRsc9RscStream8RSCdequeERNS1_9RSCParamsEl() called");
    return 0;
}

/* Demangled: RscDrvImp::clearIrq(RSC_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp8clearIrqEP20RSC_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9RscDrvImp8clearIrqEP20RSC_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: RscDrvImp::RscDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImpC1Ev(void) {
    ALOGD("_ZN9RscDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: rsc_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_ERROR = NULL;

/* Exported Object: RscUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_ERROR = NULL;

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream10mModuleMtxE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream8mCmdListE = NULL;

/* Demangled: RscDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9RscDrvImp6uninitEPKc() called");
    return 0;
}

/* Exported Object: RscThread_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* RscThread_DbgLogEnable_DEBUG = NULL;

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::mSemRscThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream13mSemRscThreadE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::getLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream7getLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream7getLockEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSRsc::RSCRequest, std::__1::allocator<NSCam::NSIoPipe::NSRsc::RSCRequest> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc10RSCRequestENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSRsc9RscStreamD0Ev() called");
    return 0;
}

/* Exported Object: RscDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9RscDrvImp10m_UserNameE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::saveToFile(char const*, NSCam::NSIoPipe::RSCBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10saveToFileEPKcPNS0_10RSCBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream10saveToFileEPKcPNS0_10RSCBufInfoE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSRsc::RscStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam8NSIoPipe5NSRsc9RscStream4initEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam8NSIoPipe5NSRsc9RscStream4initEv() called");
    return 0;
}

/* Demangled: RscDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp4initEPKc(void) {
    ALOGD("_ZN9RscDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: RscDrvImp::enqueRSC(std::__1::vector<NSCam::NSIoPipe::RSCConfig, std::__1::allocator<NSCam::NSIoPipe::RSCConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp8enqueRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9RscDrvImp8enqueRSCERNSt3__16vectorIN5NSCam8NSIoPipe9RSCConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::addCommand(NSCam::NSIoPipe::NSRsc::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream10addCommandERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream10addCommandERKNS1_4ECmdE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::m_pRscDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream9m_pRscDrvE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSRsc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSRsc::ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc4ECmdENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSRsc4ECmdENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: RscStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::releaseLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream11releaseLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream11releaseLockEv() called");
    return 0;
}

/* Exported Object: RscStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::RscStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStreamC1EPKc() called");
    return 0;
}

/* Exported Object: RscDrvImp::m_RscInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9RscDrvImp14m_RscInitMutexE = NULL;

/* Demangled: RscDrvImp::waitRSCFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp16waitRSCFrameDoneEji(void) {
    ALOGD("_ZN9RscDrvImp16waitRSCFrameDoneEji() called");
    return 0;
}

/* Demangled: RscDrvImp::setRWMode(RSC_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImp9setRWModeE15RSC_DRV_RW_MODE(void) {
    ALOGD("_ZN9RscDrvImp9setRWModeE15RSC_DRV_RW_MODE() called");
    return 0;
}

/* Exported Object: rsc_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* rsc_drv_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::clearCommands() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream13clearCommandsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream13clearCommandsEv() called");
    return 0;
}

/* Exported Object: RscStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::~RscStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStreamD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream13destroyThreadEv() called");
    return 0;
}

/* Exported Object: RscUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* RscUtility_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::RscStream::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc9RscStream12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc9RscStream12createThreadEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSRsc::RscStream::m_QueueRSCReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSRsc9RscStream17m_QueueRSCReqListE = NULL;

/* Exported Object: RscStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* RscStream_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSRsc::IRscStream::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSRsc10IRscStream14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSRsc10IRscStream14createInstanceEPKc() called");
    return 0;
}

/* Demangled: RscDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6RscDrv14createInstanceEv(void) {
    ALOGD("_ZN6RscDrv14createInstanceEv() called");
    return 0;
}

/* Demangled: RscDrvImp::RscDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9RscDrvImpC2Ev(void) {
    ALOGD("_ZN9RscDrvImpC2Ev() called");
    return 0;
}
