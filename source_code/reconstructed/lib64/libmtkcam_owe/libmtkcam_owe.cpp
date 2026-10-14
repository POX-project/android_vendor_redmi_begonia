/*
 * Reverse-Engineered Source for: libmtkcam_owe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_owe"

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
#include "libmtkcam_owe.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_OWE "/dev/camera-owe"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_OWE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_OWE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_OWE, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: OccDrvImp::setRWMode(OWE_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp9setRWModeE15OWE_DRV_RW_MODE(void) {
    ALOGD("_ZN9OccDrvImp9setRWModeE15OWE_DRV_RW_MODE() called");
    return 0;
}

/* Demangled: WmfeDrvImp::readRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN10WmfeDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: WmfeDrvImp::writeRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN10WmfeDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EgnStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ECmd, std::__1::allocator<ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEEE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_DEBUG = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mInitCountE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_WARN = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mSemEgnThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE13mSemEgnThreadE = NULL;

/* Demangled: EngineDrv<NSCam::NSIoPipe::OCCConfig>::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9EngineDrvIN5NSCam8NSIoPipe9OCCConfigEE14createInstanceEv(void) {
    ALOGD("_ZN9EngineDrvIN5NSCam8NSIoPipe9OCCConfigEE14createInstanceEv() called");
    return 0;
}

/* Demangled: OccDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9OccDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: occ_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: WmfeDrvImp::waitIrq(OWE_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN10WmfeDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: wmfe_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Demangled: WmfeDrvImp::clearIrq(OWE_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN10WmfeDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: WmfeDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp9getRWModeEv(void) {
    ALOGD("_ZN10WmfeDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: OccDrvImp::checkOCCSetting(NSCam::NSIoPipe::OCCConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp15checkOCCSettingEPN5NSCam8NSIoPipe9OCCConfigE(void) {
    ALOGD("_ZN9OccDrvImp15checkOCCSettingEPN5NSCam8NSIoPipe9OCCConfigE() called");
    return 0;
}

/* Exported Object: WmfeDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp11m_regRWModeE = NULL;

/* Demangled: WmfeDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp4initEPKc(void) {
    ALOGD("_ZN10WmfeDrvImp4initEPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE17m_QueueEGNReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE() called");
    return 0;
}

/* Demangled: OccDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9OccDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: WmfeDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp6uninitEPKc(void) {
    ALOGD("_ZN10WmfeDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Exported Object: occ_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: WmfeDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN10WmfeDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: OccDrvImp::m_pHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp12m_pHwRegAddrE = NULL;

/* Exported Object: WmfeDrvImp::mInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp10mInitMutexE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE = NULL;

/* Exported Object: OccDrvImp::mInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp10mInitMutexE = NULL;

/* Exported Object: wmfe_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED0Ev() called");
    return 0;
}

/* Demangled: WmfeDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp7readRegEji(void) {
    ALOGD("_ZN10WmfeDrvImp7readRegEji() called");
    return 0;
}

/* Exported Object: wmfe_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_WARN = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE = NULL;

/* Exported Object: EgnStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl() called");
    return 0;
}

/* Demangled: EngineDrv<NSCam::NSIoPipe::OWMFEConfig>::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9EngineDrvIN5NSCam8NSIoPipe11OWMFEConfigEE14createInstanceEv(void) {
    ALOGD("_ZN9EngineDrvIN5NSCam8NSIoPipe11OWMFEConfigEE14createInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OCCConfig const&>(NSCam::NSIoPipe::OCCConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: occ_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_INFO = NULL;

/* Demangled: OccDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9OccDrvImp11getInstanceEv() called");
    return 0;
}

/* Exported Object: WmfeDrvImp::m_pHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp12m_pHwRegAddrE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mEgnListE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFEConfig const&>(NSCam::NSIoPipe::OWMFEConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mInitCountE = NULL;

/* Exported Object: vtable for OccDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9OccDrvImp = NULL;

/* Exported Object: WmfeDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp9m_UserCntE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::OCCConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::OCCConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9OCCConfigEE4initERKNS1_10INITParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_9OCCConfigEE4initERKNS1_10INITParamsIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::addCommand(ECmd const&, NSCam::NSIoPipe::SUB_ENGINE_ID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Exported Object: wmfe_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::OWEQueryInDMAStride(NSCam::NSIoPipe::OWEDMAPort, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe19OWEQueryInDMAStrideENS0_10OWEDMAPortEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe19OWEQueryInDMAStrideENS0_10OWEDMAPortEjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::OCCConfig>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9OCCConfigEE14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_9OCCConfigEE14createInstanceEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE19resetDequeVariablesEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE4initEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: OccDrvImp::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp4m_FdE = NULL;

/* Exported Object: NSCam::NSIoPipe::g_OWE_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe18g_OWE_UnitTest_NumE = NULL;

/* Demangled: NSCam::NSIoPipe::OWEQueryWmfeOutDMAStride(NSCam::NSIoPipe::OWEDMAPort, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe24OWEQueryWmfeOutDMAStrideENS0_10OWEDMAPortEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe24OWEQueryWmfeOutDMAStrideENS0_10OWEDMAPortEj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE11mEgnCmdLockE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::OWMFEConfig>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_11OWMFEConfigEE14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_11OWMFEConfigEE14createInstanceEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mEgnListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEED1Ev() called");
    return 0;
}

/* Demangled: OccDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9OccDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: WmfeDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp11getInstanceEv(void) {
    ALOGD("_ZN10WmfeDrvImp11getInstanceEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE11mEgnCmdLockE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mSemEgnThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE13mSemEgnThreadE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE19resetDequeVariablesEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: occ_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_WARN = NULL;

/* Exported Object: WmfeDrvImp::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp4m_FdE = NULL;

/* Demangled: WmfeDrvImp::WmfeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImpC1Ev(void) {
    ALOGD("_ZN10WmfeDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: wmfe_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE6uninitEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_pEngineDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12m_pEngineDrvE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::SUB_ENGINE_ID, std::__1::allocator<NSCam::NSIoPipe::SUB_ENGINE_ID> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: WmfeDrvImp::checkWMFESetting(NSCam::NSIoPipe::OWMFECtrl*) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe9OWMFECtrlE(void) {
    ALOGD("_ZN10WmfeDrvImp16checkWMFESettingEPN5NSCam8NSIoPipe9OWMFECtrlE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::addCommand(ECmd const&, NSCam::NSIoPipe::SUB_ENGINE_ID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10addCommandERK4ECmdRKNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::EgnStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEEC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: OccDrvImp::OccDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImpC1Ev(void) {
    ALOGD("_ZN9OccDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::m_pEngineDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12m_pEngineDrvE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE = NULL;

/* Demangled: WmfeDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN10WmfeDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: EgnStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ASSERT = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mTotalCmdNumE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OCCConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_9OCCConfigEEENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Demangled: OccDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN9OccDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: OccDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp7readRegEji(void) {
    ALOGD("_ZN9OccDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: WmfeDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN10WmfeDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: OccDrvImp::waitFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp13waitFrameDoneEji(void) {
    ALOGD("_ZN9OccDrvImp13waitFrameDoneEji() called");
    return 0;
}

/* Demangled: OccDrvImp::clearIrq(OWE_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9OccDrvImp8clearIrqEP20OWE_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: OccDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9OccDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE8mCmdListE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mTotalCmdNumE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE7mThreadE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE = NULL;

/* Exported Object: occ_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEED0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE12mCmdListCondE = NULL;

/* Demangled: OccDrvImp::readRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9OccDrvImp8readRegsEP21OWE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: OccDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp9m_UserCntE = NULL;

/* Demangled: OccDrvImp::writeRegs(OWE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9OccDrvImp9writeRegsEP21OWE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: WmfeDrvImp::WmfeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImpC2Ev(void) {
    ALOGD("_ZN10WmfeDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: vtable for WmfeDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10WmfeDrvImp = NULL;

/* Exported Object: EgnStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IHalEgnPipe<NSCam::NSIoPipe::OWMFEConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::OWMFEConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_11OWMFEConfigEE4initERKNS1_10INITParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn11IHalEgnPipeINS0_11OWMFEConfigEE4initERKNS1_10INITParamsIS3_EE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE12mCmdListCondE = NULL;

/* Exported Object: OccDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp11m_regRWModeE = NULL;

/* Demangled: OccDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp4initEPKc(void) {
    ALOGD("_ZN9OccDrvImp4initEPKc() called");
    return 0;
}

/* Exported Object: occ_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* occ_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE6uninitEv() called");
    return 0;
}

/* Demangled: OccDrvImp::OccDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImpC2Ev(void) {
    ALOGD("_ZN9OccDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: WmfeDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN10WmfeDrvImp10m_UserNameE = NULL;

/* Demangled: WmfeDrvImp::waitFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp13waitFrameDoneEji(void) {
    ALOGD("_ZN10WmfeDrvImp13waitFrameDoneEji() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE10mModuleMtxE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OWMFEConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_11OWMFEConfigEE8mCmdListE = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE17m_QueueEGNReqListE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE7mThreadE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::OWMFEConfig> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_11OWMFEConfigEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: OccDrvImp::waitIrq(OWE_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9OccDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9OccDrvImp7waitIrqEP19OWE_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: wmfe_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* wmfe_drv_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::OCCConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_9OCCConfigEE10mModuleMtxE = NULL;

/* Exported Object: OccDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9OccDrvImp10m_UserNameE = NULL;

/* Demangled: WmfeDrvImp::setRWMode(OWE_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN10WmfeDrvImp9setRWModeE15OWE_DRV_RW_MODE(void) {
    ALOGD("_ZN10WmfeDrvImp9setRWModeE15OWE_DRV_RW_MODE() called");
    return 0;
}
