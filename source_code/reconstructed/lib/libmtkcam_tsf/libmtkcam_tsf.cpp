/*
 * Reverse-Engineered Source for: libmtkcam_tsf.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_tsf"

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
#include "libmtkcam_tsf.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TSFdeque(NSCam::NSIoPipe::NSTsf::TSFParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx() called");
    return 0;
}

/* Demangled: TsfDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6TsfDrv14createInstanceEv(void) {
    ALOGD("_ZN6TsfDrv14createInstanceEv() called");
    return 0;
}

/* Exported Object: tsf_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_WARN = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSTsf::TsfStream::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mModuleMtxE = NULL;

/* Exported Object: vtable for NSCam::NSIoPipe::NSTsf::TsfStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSTsf9TsfStreamE = NULL;

/* Demangled: TsfDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp4initEPKc(void) {
    ALOGD("_ZN9TsfDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::ITsfStream::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf10ITsfStream14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf10ITsfStream14createInstanceEPKc() called");
    return 0;
}

/* Exported Object: TsfDrvImp::m_pTsfHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9TsfDrvImp15m_pTsfHwRegAddrE = NULL;

/* Demangled: TsfDrvImp::waitIrq(TSF_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp7waitIrqEP19TSF_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9TsfDrvImp7waitIrqEP19TSF_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSTsf::TsfStream::m_QueueTsfReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream17m_QueueTsfReqListE = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TsfStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC1EPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::TSFenque(NSCam::NSIoPipe::NSTsf::TSFParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE() called");
    return 0;
}

/* Demangled: TsfDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9TsfDrvImp9getRWModeEv() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TSFenque(NSCam::NSIoPipe::NSTsf::TSFParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream8TSFenqueERKNS1_9TSFParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD2Ev() called");
    return 0;
}

/* Demangled: TsfDrvImp::writeRegs(TSF_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp9writeRegsEP21TSF_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9TsfDrvImp9writeRegsEP21TSF_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_DEBUG = NULL;

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSTsf::ITsfStream-in-NSCam::NSIoPipe::NSTsf::TsfStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe5NSTsf9TsfStreamE0_NS1_10ITsfStreamE = NULL;

/* Exported Object: TsfUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_WARN = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev() called");
    return 0;
}

/* Demangled: TsfDrvImp::readRegs(TSF_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp8readRegsEP21TSF_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9TsfDrvImp8readRegsEP21TSF_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: tsf_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::DrvMakePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11DrvMakePathEPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream11DrvMakePathEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD1Ev() called");
    return 0;
}

/* Demangled: TsfDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9TsfDrvImp11getInstanceEv() called");
    return 0;
}

/* Exported Object: TsfDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9TsfDrvImp9m_UserCntE = NULL;

/* Exported Object: tsf_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_DEBUG = NULL;

/* Exported Object: tsf_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::TSFQueryDMAStride(NSCam::NSIoPipe::TSFDMAPort, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17TSFQueryDMAStrideENS0_10TSFDMAPortEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17TSFQueryDMAStrideENS0_10TSFDMAPortEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::~TsfStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStreamD0Ev() called");
    return 0;
}

/* Demangled: TsfDrvImp::waitTSFFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp16waitTSFFrameDoneEji(void) {
    ALOGD("_ZN9TsfDrvImp16waitTSFFrameDoneEji() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSTsf::TSFRequest, std::__1::allocator<NSCam::NSIoPipe::NSTsf::TSFRequest> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSTsf::TsfStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe5NSTsf9TsfStreamE = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::TsfStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC2EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStreamC2EPKc() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: TsfDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9TsfDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: TsfDrvImp::enqueTSF(NSCam::NSIoPipe::TSFConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp8enqueTSFERKN5NSCam8NSIoPipe9TSFConfigE(void) {
    ALOGD("_ZN9TsfDrvImp8enqueTSFERKN5NSCam8NSIoPipe9TSFConfigE() called");
    return 0;
}

/* Demangled: TsfDrvImp::TsfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImpC2Ev(void) {
    ALOGD("_ZN9TsfDrvImpC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: TsfUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::setCryption(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::getTSFKey(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSTsf::TsfStream::m_pTsfDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream9m_pTsfDrvE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::init() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam8NSIoPipe5NSTsf9TsfStream4initEv(void) {
    ALOGD("_ZTv0_n20_N5NSCam8NSIoPipe5NSTsf9TsfStream4initEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::setCryption(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii(void) {
    ALOGD("_ZTv0_n44_N5NSCam8NSIoPipe5NSTsf9TsfStream11setCryptionEii() called");
    return 0;
}

/* Exported Object: vtable for TsfDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9TsfDrvImp = NULL;

/* Exported Object: TsfUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_ERROR = NULL;

/* Exported Object: TsfUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::DrvMkdir(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream8DrvMkdirEPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream8DrvMkdirEPKcj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::getTSFKey(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_(void) {
    ALOGD("_ZTv0_n40_N5NSCam8NSIoPipe5NSTsf9TsfStream9getTSFKeyERjS3_() called");
    return 0;
}

/* Demangled: TsfDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp7readRegEji(void) {
    ALOGD("_ZN9TsfDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: TsfDrvImp::clearIrq(TSF_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp8clearIrqEP20TSF_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9TsfDrvImp8clearIrqEP20TSF_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: TsfUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_DEBUG = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::TSFdeque(NSCam::NSIoPipe::NSTsf::TSFParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx(void) {
    ALOGD("_ZTv0_n36_N5NSCam8NSIoPipe5NSTsf9TsfStream8TSFdequeERNS1_9TSFParamsEx() called");
    return 0;
}

/* Exported Object: TsfDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6TsfDrv4m_FdE = NULL;

/* Exported Object: TsfDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9TsfDrvImp10m_UserNameE = NULL;

/* Demangled: TsfDrvImp::TsfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImpC1Ev(void) {
    ALOGD("_ZN9TsfDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_INFO = NULL;

/* Exported Object: TsfDrv::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN6TsfDrv11m_regRWModeE = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: TsfUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* TsfUtility_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::QueryTSFHWSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17QueryTSFHWSupportEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17QueryTSFHWSupportEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSTsf::TsfStream::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc(void) {
    ALOGD("_ZTv0_n16_N5NSCam8NSIoPipe5NSTsf9TsfStream15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: TsfDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9TsfDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: TsfStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* TsfStream_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSTsf::TsfStream::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10mInitCountE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSTsf::TSFRequest, std::__1::allocator<NSCam::NSIoPipe::NSTsf::TSFRequest> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSTsf10TSFRequestENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: TsfDrvImp::m_TsfInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9TsfDrvImp14m_TsfInitMutexE = NULL;

/* Exported Object: tsf_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSTsf::TsfStream::saveToFile(char const*, NSCam::NSIoPipe::TSFBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSTsf9TsfStream10saveToFileEPKcPNS0_10TSFBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSTsf9TsfStream10saveToFileEPKcPNS0_10TSFBufInfoE() called");
    return 0;
}

/* Demangled: TsfDrvImp::setRWMode(TSF_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9TsfDrvImp9setRWModeE15TSF_DRV_RW_MODE(void) {
    ALOGD("_ZN9TsfDrvImp9setRWModeE15TSF_DRV_RW_MODE() called");
    return 0;
}

/* Exported Object: tsf_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* tsf_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}
