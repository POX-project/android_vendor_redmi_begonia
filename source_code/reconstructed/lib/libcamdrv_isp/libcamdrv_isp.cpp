/*
 * Reverse-Engineered Source for: libcamdrv_isp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamdrv_isp"

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
#include "libcamdrv_isp.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_ISP "/dev/camera-isp"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_ISP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_ISP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_ISP, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ISP_DRV_CAM::twinPath_CQ_Ctrl(unsigned int, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM16twinPath_CQ_CtrlEj13ISP_HW_MODULE(void) {
    ALOGD("_ZN11ISP_DRV_CAM16twinPath_CQ_CtrlEj13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM4initEPKc(void) {
    ALOGD("_ZN11ISP_DRV_CAM4initEPKc() called");
    return 0;
}

/* Demangled: IspDrvCamsv::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv13setDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN11IspDrvCamsv13setDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: IspDrvImp::waitIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp7waitIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN9IspDrvImp7waitIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getIspVirRegSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM16getIspVirRegSizeEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM16getIspVirRegSizeEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::readCQModuleInfo(unsigned int, void**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM16readCQModuleInfoEjPPvj(void) {
    ALOGD("_ZN11ISP_DRV_CAM16readCQModuleInfoEjPPvj() called");
    return 0;
}

/* Demangled: IspDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9IspDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCQModuleInfo(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM15getCQModuleInfoEjRjS0_(void) {
    ALOGD("_ZN11ISP_DRV_CAM15getCQModuleInfoEjRjS0_() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM7readRegEji(void) {
    ALOGD("_ZN11ISP_DRV_CAM7readRegEji() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_ASSERT = NULL;

/* Exported Object: IspDrv::RegRWMacro */
extern "C" __attribute__((visibility("default"))) void* _ZN6IspDrv10RegRWMacroE = NULL;

/* Demangled: ISP_DRV_CAM::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Exported Object: gPageTbl */
extern "C" __attribute__((visibility("default"))) void* gPageTbl = NULL;

/* Demangled: IspDrvCamsv::FSM_CHK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv7FSM_CHKEj(void) {
    ALOGD("_ZN11IspDrvCamsv7FSM_CHKEj() called");
    return 0;
}

/* Demangled: IspDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp7readRegEji(void) {
    ALOGD("_ZN9IspDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: UniDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9UniDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: uni_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int, unsigned int, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqAddModuleEjj13ISP_HW_MODULE(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqAddModuleEjj13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCurObjInfo(ISP_HW_MODULE*, E_ISP_CAM_CQ*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM13getCurObjInfoEP13ISP_HW_MODULEP12E_ISP_CAM_CQPj(void) {
    ALOGD("_ZN11ISP_DRV_CAM13getCurObjInfoEP13ISP_HW_MODULEP12E_ISP_CAM_CQPj() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::clearIrq(ISP_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST() called");
    return 0;
}

/* Exported Object: uni_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: ISP_DRV_CAM::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::flushCmdQ() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM9flushCmdQEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM9flushCmdQEv() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_VERBOSE = NULL;

/* Demangled: ISP_DRV_CAM::updateEnqCqRingBuf(CQ_RingBuf_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM18updateEnqCqRingBufEP13CQ_RingBuf_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM18updateEnqCqRingBufEP13CQ_RingBuf_ST() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM4initEPKc(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM4initEPKc() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: ISP_DRV_CAM::VirReg_ValidRW() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM14VirReg_ValidRWEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM14VirReg_ValidRWEv() called");
    return 0;
}

/* Demangled: IspDrvCamsv::waitIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv7waitIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN11IspDrvCamsv7waitIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::start() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM5startEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM5startEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::signalIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Demangled: IspDrvCamsv::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv7readRegEji(void) {
    ALOGD("_ZN11IspDrvCamsv7readRegEji() called");
    return 0;
}

/* Exported Object: isp_drv_camsv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_ERROR = NULL;

/* Exported Object: isp_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_ERROR = NULL;

/* Exported Object: uni_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_WARN = NULL;

/* Demangled: ISP_DRV_CAM::dumpCQTable() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11dumpCQTableEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM11dumpCQTableEv() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_ERROR = NULL;

/* Exported Object: isp_drv_camsv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_DEBUG = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Exported Object: IspDrvImp::usrkey_3a */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp9usrkey_3aE = NULL;

/* Exported Object: isp_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: UniDrvImp::init(char const*, IspDrvImp*) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp4initEPKcP9IspDrvImp(void) {
    ALOGD("_ZN9UniDrvImp4initEPKcP9IspDrvImp() called");
    return 0;
}

/* Demangled: UniDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9UniDrvImp8writeRegEjmi() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::cqDelModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqDelModuleEj(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqDelModuleEj() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getPhyObj() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM9getPhyObjEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM9getPhyObjEv() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_DEBUG = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_INFO = NULL;

/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqAddModuleEj13ISP_HW_MODULE(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqAddModuleEj13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM6uninitEPKc(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM6uninitEPKc() called");
    return 0;
}

/* Demangled: IspDrvCamsv::createInstance(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv14createInstanceE13ISP_HW_MODULE(void) {
    ALOGD("_ZN11IspDrvCamsv14createInstanceE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: IspDrvCamsv::clearIrq(ISP_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv8clearIrqEP16ISP_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN11IspDrvCamsv8clearIrqEP16ISP_CLEAR_IRQ_ST() called");
    return 0;
}

/* Exported Object: vtable for UniDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9UniDrvImp = NULL;

/* Demangled: ISP_DRV_CAM::getIspVirRegPhyAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19getIspVirRegPhyAddrEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM19getIspVirRegPhyAddrEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Exported Object: IspDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6IspDrv4m_FdE = NULL;

/* Exported Object: IspDrvImp::m_DapcReg */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp9m_DapcRegE = NULL;

/* Demangled: UniDrvImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp15destroyInstanceEv(void) {
    ALOGD("_ZN9UniDrvImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getIspVirRegVirAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19getIspVirRegVirAddrEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM19getIspVirRegVirAddrEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM8writeRegEjmi(void) {
    ALOGD("_ZN11ISP_DRV_CAM8writeRegEjmi() called");
    return 0;
}

/* Demangled: IspDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9IspDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getIspVirIonFD() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM14getIspVirIonFDEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM14getIspVirIonFDEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::update_FH_Spare(CQ_RingBuf_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM15update_FH_SpareEP13CQ_RingBuf_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM15update_FH_SpareEP13CQ_RingBuf_ST() called");
    return 0;
}

/* Demangled: IspDrvImp::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp13getDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN9IspDrvImp13getDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: UniDrvImp::getCurObjInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp13getCurObjInfoEv(void) {
    ALOGD("_ZN9UniDrvImp13getCurObjInfoEv() called");
    return 0;
}

/* Demangled: UniDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9UniDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: IspDrvCamsv::signalIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv9signalIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN11IspDrvCamsv9signalIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Exported Object: isp_drv_camsv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_INFO = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: IspDrv::m_pIspRegMap */
extern "C" __attribute__((visibility("default"))) void* _ZN6IspDrv12m_pIspRegMapE = NULL;

/* Demangled: ISP_DRV_CAM::CQ_SetContent(ISP_DRV_REG_IO_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM13CQ_SetContentEP21ISP_DRV_REG_IO_STRUCTj(void) {
    ALOGD("_ZN11ISP_DRV_CAM13CQ_SetContentEP21ISP_DRV_REG_IO_STRUCTj() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::cqRingBuf(CQ_RingBuf_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM9cqRingBufEP13CQ_RingBuf_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM9cqRingBufEP13CQ_RingBuf_ST() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::waitIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Demangled: IspDrvCamsv::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv8writeRegEjmi(void) {
    ALOGD("_ZN11IspDrvCamsv8writeRegEjmi() called");
    return 0;
}

/* Demangled: IspDrvImp::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp13setDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN9IspDrvImp13setDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: IspDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9IspDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqAddModuleEj(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqAddModuleEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: mIspCQModuleInfo_SpecialCQ */
extern "C" __attribute__((visibility("default"))) void* mIspCQModuleInfo_SpecialCQ = NULL;

/* Exported Object: IspDrvImp::m_User */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp6m_UserE = NULL;

/* Demangled: IspDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9IspDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM15destroyInstanceEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM15destroyInstanceEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM6uninitEPKc(void) {
    ALOGD("_ZN11ISP_DRV_CAM6uninitEPKc() called");
    return 0;
}

/* Demangled: IspDrvCamsv::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN11IspDrvCamsv8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCQDescBufVirAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19getCQDescBufVirAddrEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM19getCQDescBufVirAddrEv() called");
    return 0;
}

/* Demangled: IspDrvImp::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void) {
    ALOGD("_ZN9IspDrvImp11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCQDescBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM16getCQDescBufSizeEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM16getCQDescBufSizeEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCQDescBufPhyAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19getCQDescBufPhyAddrEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM19getCQDescBufPhyAddrEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM8writeRegEjmi(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM8writeRegEjmi() called");
    return 0;
}

/* Demangled: IspDrvCamsv::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv6uninitEPKc(void) {
    ALOGD("_ZN11IspDrvCamsv6uninitEPKc() called");
    return 0;
}

/* Demangled: UniDrvImp::createInstance(UNI_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp14createInstanceE13UNI_HW_MODULE(void) {
    ALOGD("_ZN9UniDrvImp14createInstanceE13UNI_HW_MODULE() called");
    return 0;
}

/* Demangled: UniDrvImp::DumpReg() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp7DumpRegEv(void) {
    ALOGD("_ZN9UniDrvImp7DumpRegEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::ISP_DRV_CAM(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAMC1E13ISP_HW_MODULE12E_ISP_CAM_CQj(void) {
    ALOGD("_ZN11ISP_DRV_CAMC1E13ISP_HW_MODULE12E_ISP_CAM_CQj() called");
    return 0;
}

/* Demangled: IspDrvCamsv::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN11IspDrvCamsv9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: isp_drv_camsv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: isp_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_WARN = NULL;

/* Exported Object: uni_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: ISP_DRV_CAM::ISP_DRV_CAM(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAMC2E13ISP_HW_MODULE12E_ISP_CAM_CQj(void) {
    ALOGD("_ZN11ISP_DRV_CAMC2E13ISP_HW_MODULE12E_ISP_CAM_CQj() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_INFO = NULL;

/* Demangled: IspDrvCamsv::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void) {
    ALOGD("_ZN11IspDrvCamsv11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT() called");
    return 0;
}

/* Demangled: IspDrvImp::setDapcReg(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp10setDapcRegENSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN9IspDrvImp10setDapcRegENSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Exported Object: vtable for ISP_DRV_CAM */
extern "C" __attribute__((visibility("default"))) void* _ZTV11ISP_DRV_CAM = NULL;

/* Demangled: IspDrvCamsv::DumpReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv7DumpRegEi(void) {
    ALOGD("_ZN11IspDrvCamsv7DumpRegEi() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: UniDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9UniDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: IspDrvImp::IspDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImpC2Ev(void) {
    ALOGD("_ZN9IspDrvImpC2Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::waitIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Exported Object: gMutex */
extern "C" __attribute__((visibility("default"))) void* gMutex = NULL;

/* Exported Object: IspDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp11m_regRWModeE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM15destroyInstanceEv(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM15destroyInstanceEv() called");
    return 0;
}

/* Demangled: IspDrvCamsv::IspDrvCamsv() */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsvC2Ev(void) {
    ALOGD("_ZN11IspDrvCamsvC2Ev() called");
    return 0;
}

/* Exported Object: vtable for IspDrvCamsv */
extern "C" __attribute__((visibility("default"))) void* _ZTV11IspDrvCamsv = NULL;

/* Demangled: ISP_DRV_CAM::cqNopModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqNopModuleEj(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqNopModuleEj() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void) {
    ALOGD("_ZN11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT() called");
    return 0;
}

/* Exported Object: isp_drv_camsv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_WARN = NULL;

/* Demangled: IspDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp4initEPKc(void) {
    ALOGD("_ZN9IspDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: IspDrvImp::IspDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImpC1Ev(void) {
    ALOGD("_ZN9IspDrvImpC1Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: UniDrvImp::UniDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImpC2Ev(void) {
    ALOGD("_ZN9UniDrvImpC2Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::createInstance(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM14createInstanceE13ISP_HW_MODULE12E_ISP_CAM_CQjPKc(void) {
    ALOGD("_ZN11ISP_DRV_CAM14createInstanceE13ISP_HW_MODULE12E_ISP_CAM_CQjPKc() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::clearIrq(ISP_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST() called");
    return 0;
}

/* Demangled: IspDrvCamsv::IspDrvCamsv() */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsvC1Ev(void) {
    ALOGD("_ZN11IspDrvCamsvC1Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM4stopEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM4stopEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::signalIrq(ISP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST() called");
    return 0;
}

/* Exported Object: IspDrvImp::m_SecOn */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp7m_SecOnE = NULL;

/* Demangled: IspDrvImp::clearIrq(ISP_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp8clearIrqEP16ISP_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN9IspDrvImp8clearIrqEP16ISP_CLEAR_IRQ_ST() called");
    return 0;
}

/* Demangled: non-virtual thunk to ISP_DRV_CAM::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N11ISP_DRV_CAM7readRegEji(void) {
    ALOGD("_ZThn4_N11ISP_DRV_CAM7readRegEji() called");
    return 0;
}

/* Exported Object: isp_drv_camsv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_camsv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: IspDrvImp::setRWMode(ISP_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp9setRWModeE15ISP_DRV_RW_MODE(void) {
    ALOGD("_ZN9IspDrvImp9setRWModeE15ISP_DRV_RW_MODE() called");
    return 0;
}

/* Demangled: UniDrvImp::UniDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImpC1Ev(void) {
    ALOGD("_ZN9UniDrvImpC1Ev() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::CQ_Allocate_method2(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19CQ_Allocate_method2Ej(void) {
    ALOGD("_ZN11ISP_DRV_CAM19CQ_Allocate_method2Ej() called");
    return 0;
}

/* Exported Object: mIspCQModuleInfo */
extern "C" __attribute__((visibility("default"))) void* mIspCQModuleInfo = NULL;

/* Demangled: IspDrvCamsv::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv13getDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN11IspDrvCamsv13getDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: IspDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9IspDrvImp8writeRegEjmi() called");
    return 0;
}

/* Demangled: IspDrvCamsv::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv4initEPKc(void) {
    ALOGD("_ZN11IspDrvCamsv4initEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: UniDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp4initEPKc(void) {
    ALOGD("_ZN9UniDrvImp4initEPKc() called");
    return 0;
}

/* Exported Object: uni_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: uni_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* uni_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: IspDrvImp::createInstance(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9IspDrvImp14createInstanceE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9IspDrvImp14createInstanceE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: IspDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp9m_UserCntE = NULL;

/* Exported Object: vtable for IspDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9IspDrvImp = NULL;

/* Demangled: ISP_DRV_CAM::CQ_Allocate_method1(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM19CQ_Allocate_method1Ej(void) {
    ALOGD("_ZN11ISP_DRV_CAM19CQ_Allocate_method1Ej() called");
    return 0;
}

/* Exported Object: IspDrvImp::m_IspInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9IspDrvImp14m_IspInitMutexE = NULL;

/* Demangled: UniDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniDrvImp7readRegEji(void) {
    ALOGD("_ZN9UniDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::DumpReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM7DumpRegEi(void) {
    ALOGD("_ZN11ISP_DRV_CAM7DumpRegEi() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM7FSM_CHKEjPKc(void) {
    ALOGD("_ZN11ISP_DRV_CAM7FSM_CHKEjPKc() called");
    return 0;
}

/* Exported Object: isp_drv_CAM_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_CAM_DbgLogEnable_WARN = NULL;

/* Demangled: IspDrvCamsv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvCamsv15destroyInstanceEv(void) {
    ALOGD("_ZN11IspDrvCamsv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::getCQIonFD() */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM10getCQIonFDEv(void) {
    ALOGD("_ZN11ISP_DRV_CAM10getCQIonFDEv() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::cqApbModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM11cqApbModuleEj(void) {
    ALOGD("_ZN11ISP_DRV_CAM11cqApbModuleEj() called");
    return 0;
}

/* Demangled: ISP_DRV_CAM::VirReg_OFFSET(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ISP_DRV_CAM13VirReg_OFFSETEj(void) {
    ALOGD("_ZN11ISP_DRV_CAM13VirReg_OFFSETEj() called");
    return 0;
}
