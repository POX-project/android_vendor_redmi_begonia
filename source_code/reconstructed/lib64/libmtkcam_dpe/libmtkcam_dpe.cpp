/*
 * Reverse-Engineered Source for: libmtkcam_dpe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_dpe"

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
#include "libmtkcam_dpe.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_DPE "/dev/camera-dpe"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_DPE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_DPE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_DPE, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: DpeThread_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_ERROR = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv(void) {
    ALOGD("_ZTv0_n48_N5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv() called");
    return 0;
}

/* Demangled: DpeDrvImp::clearIrq(DPE_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp8clearIrqEP20DPE_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9DpeDrvImp8clearIrqEP20DPE_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mDpeCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11mDpeCmdLockE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::DVERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::DVERequest> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::IDpeStream::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe10IDpeStream14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe10IDpeStream14createInstanceEPKc() called");
    return 0;
}

/* Demangled: DpeDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpeDrv14createInstanceEv(void) {
    ALOGD("_ZN6DpeDrv14createInstanceEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev() called");
    return 0;
}

/* Demangled: DpeDrvImp::checkDVESetting(NSCam::NSIoPipe::DVEConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp15checkDVESettingEPN5NSCam8NSIoPipe9DVEConfigE(void) {
    ALOGD("_ZN9DpeDrvImp15checkDVESettingEPN5NSCam8NSIoPipe9DVEConfigE() called");
    return 0;
}

/* Demangled: DpeDrvImp::DpeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImpC1Ev(void) {
    ALOGD("_ZN9DpeDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: DpeThread_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD0Ev() called");
    return 0;
}

/* Demangled: DpeDrvImp::checkWMFESetting(NSCam::NSIoPipe::WMFECtrl*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe8WMFECtrlE(void) {
    ALOGD("_ZN9DpeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe8WMFECtrlE() called");
    return 0;
}

/* Demangled: DpeDrvImp::waitDPEFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp16waitDPEFrameDoneEji(void) {
    ALOGD("_ZN9DpeDrvImp16waitDPEFrameDoneEji() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSDpe::IDpeStream-in-NSCam::NSIoPipe::NSDpe::DpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe5NSDpe9DpeStreamE0_NS1_10IDpeStreamE = NULL;

/* Exported Object: DpeDrv::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN6DpeDrv11m_regRWModeE = NULL;

/* Exported Object: DpeThread_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream12createThreadEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSDpe::ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe4ECmdENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe4ECmdENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: DrvMkdir(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8DrvMkdirPKcj(void) {
    ALOGD("_Z8DrvMkdirPKcj() called");
    return 0;
}

/* Demangled: DpeDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp7readRegEji(void) {
    ALOGD("_ZN9DpeDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: DpeDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9DpeDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: DpeDrvImp::writeRegs(DPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp9writeRegsEP21DPE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9DpeDrvImp9writeRegsEP21DPE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mModuleMtxE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7mThreadE = NULL;

/* Exported Object: DpeStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_ASSERT = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10mInitCountE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::DVEenque(NSCam::NSIoPipe::NSDpe::DVEParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE(void) {
    ALOGD("_ZTv0_n64_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::WMFEenque(NSCam::NSIoPipe::NSDpe::WMFEParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE(void) {
    ALOGD("_ZTv0_n80_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE() called");
    return 0;
}

/* Exported Object: DpeDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9DpeDrvImp10m_UserNameE = NULL;

/* Demangled: DpeDrvImp::dequeWMFE(std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp9dequeWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9DpeDrvImp9dequeWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: vtable for DpeDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9DpeDrvImp = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8mCmdListE = NULL;

/* Exported Object: DpeStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream4initEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::DVEdeque(NSCam::NSIoPipe::NSDpe::DVEParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl(void) {
    ALOGD("_ZTv0_n72_N5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl() called");
    return 0;
}

/* Exported Object: dpe_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::addCommand(NSCam::NSIoPipe::NSDpe::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10addCommandERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream10addCommandERKNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::WMFECtrl, std::__1::allocator<NSCam::NSIoPipe::WMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::WMFECtrl const&>(NSCam::NSIoPipe::WMFECtrl const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: dpe_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::m_pDpeDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9m_pDpeDrvE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::WMFEdeque(NSCam::NSIoPipe::NSDpe::WMFEParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSDpe::DpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSDpe9DpeStreamE = NULL;

/* Demangled: DpeDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9DpeDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: DpeDrvImp::setRWMode(DPE_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp9setRWModeE15DPE_DRV_RW_MODE(void) {
    ALOGD("_ZN9DpeDrvImp9setRWModeE15DPE_DRV_RW_MODE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::m_QueueDVEReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream17m_QueueDVEReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::WMFEenque(NSCam::NSIoPipe::NSDpe::WMFEParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEenqueERKNS1_10WMFEParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev() called");
    return 0;
}

/* Exported Object: DpeDrvImp::m_DpeInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9DpeDrvImp14m_DpeInitMutexE = NULL;

/* Demangled: DpeDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp4initEPKc(void) {
    ALOGD("_ZN9DpeDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: DpeDrvImp::DpeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImpC2Ev(void) {
    ALOGD("_ZN9DpeDrvImpC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream13destroyThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD1Ev() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::push_back(NSCam::NSIoPipe::NSDpe::WMFERequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: DpeDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9DpeDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: DpeDrvImp::waitIrq(DPE_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp7waitIrqEP19DPE_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9DpeDrvImp7waitIrqEP19DPE_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getCommand(NSCam::NSIoPipe::NSDpe::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10getCommandERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream10getCommandERNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::releaseLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream11releaseLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream11releaseLockEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe8WMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: DpeStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DVEenque(NSCam::NSIoPipe::NSDpe::DVEParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEenqueERKNS1_9DVEParamsE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mCmdListCondE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream12mTotalCmdNumE = NULL;

/* Exported Object: DpeThread_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_DEBUG = NULL;

/* Exported Object: DpeStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DpeStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DpeStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC2EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStreamC2EPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::WMFEConfig const&>(NSCam::NSIoPipe::WMFEConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: DpeDrvImp::enqueWMFE(std::__1::vector<NSCam::NSIoPipe::WMFEConfig, std::__1::allocator<NSCam::NSIoPipe::WMFEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp9enqueWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9DpeDrvImp9enqueWMFEERNSt3__16vectorIN5NSCam8NSIoPipe10WMFEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: DpeThread_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_ASSERT = NULL;

/* Exported Object: DpeStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_WARN = NULL;

/* Demangled: DpeDrvImp::dequeDVE(std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp8dequeDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9DpeDrvImp8dequeDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: DpeDrvImp::enqueDVE(std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp8enqueDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9DpeDrvImp8enqueDVEERNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::clearCommands() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13clearCommandsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream13clearCommandsEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getUs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream5getUsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream5getUsEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::WMFEdeque(NSCam::NSIoPipe::NSDpe::WMFEParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl(void) {
    ALOGD("_ZTv0_n88_N5NSCam8NSIoPipe5NSDpe9DpeStream9WMFEdequeERNS1_10WMFEParamsEl() called");
    return 0;
}

/* Demangled: DpeDrvImp::readRegs(DPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp8readRegsEP21DPE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9DpeDrvImp8readRegsEP21DPE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: dpe_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::DPEQueryWmfeOutDMAStride(NSCam::NSIoPipe::DPEDMAPort, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe24DPEQueryWmfeOutDMAStrideENS0_10DPEDMAPortEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe24DPEQueryWmfeOutDMAStrideENS0_10DPEDMAPortEj() called");
    return 0;
}

/* Demangled: DrvMakePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11DrvMakePathPKcj(void) {
    ALOGD("_Z11DrvMakePathPKcj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::g_DPE_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe18g_DPE_UnitTest_NumE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::DVEdeque(NSCam::NSIoPipe::NSDpe::DVEParams&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream8DVEdequeERNS1_9DVEParamsEl() called");
    return 0;
}

/* Exported Object: dpe_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: dpe_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::DVEConfig const&>(NSCam::NSIoPipe::DVEConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: DpeDrvImp::m_pDpeHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9DpeDrvImp15m_pDpeHwRegAddrE = NULL;

/* Exported Object: DpeDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9DpeDrvImp9m_UserCntE = NULL;

/* Demangled: NSCam::NSIoPipe::DPEQueryInDMAStride(NSCam::NSIoPipe::DPEDMAPort, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe19DPEQueryInDMAStrideENS0_10DPEDMAPortEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe19DPEQueryInDMAStrideENS0_10DPEDMAPortEjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::DPEQueryDveOutDMAStride(NSCam::NSIoPipe::DPEDMAPort, NSCam::NSIoPipe::DVE_HORZ_DSMODE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe23DPEQueryDveOutDMAStrideENS0_10DPEDMAPortENS0_15DVE_HORZ_DSMODEEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe23DPEQueryDveOutDMAStrideENS0_10DPEDMAPortENS0_15DVE_HORZ_DSMODEEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::getLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream7getLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream7getLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::~DpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStreamD2Ev() called");
    return 0;
}

/* Exported Object: dpe_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* dpe_drv_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::m_QueueWMFEReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream18m_QueueWMFEReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream19resetDequeVariablesEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::saveToFile(char const*, NSCam::NSIoPipe::DPEBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream10saveToFileEPKcPNS0_10DPEBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream10saveToFileEPKcPNS0_10DPEBufInfoE() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSDpe::WMFERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::WMFERequest> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSDpe11WMFERequestENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSDpe::DVERequest, std::__1::allocator<NSCam::NSIoPipe::NSDpe::DVERequest> >::push_back(NSCam::NSIoPipe::NSDpe::DVERequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSDpe10DVERequestENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe5NSDpe9DpeStream15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSDpe::DpeStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam8NSIoPipe5NSDpe9DpeStream4initEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam8NSIoPipe5NSDpe9DpeStream4initEv() called");
    return 0;
}

/* Demangled: DpeDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpeDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9DpeDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: DpeStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DpeStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSDpe::DpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSDpe9DpeStream6uninitEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSDpe::DpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe5NSDpe9DpeStreamE = NULL;

/* Exported Object: DpeDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6DpeDrv4m_FdE = NULL;

/* Exported Object: DpeThread_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DpeThread_DbgLogEnable_INFO = NULL;

/* Exported Object: NSCam::NSIoPipe::NSDpe::DpeStream::mSemDpeThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSDpe9DpeStream13mSemDpeThreadE = NULL;
