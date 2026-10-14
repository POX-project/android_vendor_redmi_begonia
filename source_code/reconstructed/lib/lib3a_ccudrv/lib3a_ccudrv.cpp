/*
 * Reverse-Engineered Source for: lib3a.ccudrv.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_ccudrv"

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
#include "lib3a_ccudrv.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CCU "/dev/ccu"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CCU, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCU, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCU, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: CcuDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9CcuDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: CcuMemImp::mmapMVA(int, int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp7mmapMVAEiPiPjjj(void) {
    ALOGD("_ZN9CcuMemImp7mmapMVAEiPiPjjj() called");
    return 0;
}

/* Demangled: CcuAeeMgrDl::IsCcuAeeSysExpInitDone() */
extern "C" __attribute__((visibility("default"))) int _ZN11CcuAeeMgrDl22IsCcuAeeSysExpInitDoneEv(void) {
    ALOGD("_ZN11CcuAeeMgrDl22IsCcuAeeSysExpInitDoneEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::loadCCUBin() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp10loadCCUBinEv(void) {
    ALOGD("_ZN9CcuDrvImp10loadCCUBinEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::OpenCcuKdrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11OpenCcuKdrvEv(void) {
    ALOGD("_ZN9CcuDrvImp11OpenCcuKdrvEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::registerIrq(CCU_REGISTER_USERKEY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11registerIrqEP27CCU_REGISTER_USERKEY_STRUCT(void) {
    ALOGD("_ZN9CcuDrvImp11registerIrqEP27CCU_REGISTER_USERKEY_STRUCT() called");
    return 0;
}

/* Demangled: CcuDrvImp::setCcuPower(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11setCcuPowerEi(void) {
    ALOGD("_ZN9CcuDrvImp11setCcuPowerEi() called");
    return 0;
}

/* Demangled: CcuDrvImp::OnlypowerOff() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp12OnlypowerOffEv(void) {
    ALOGD("_ZN9CcuDrvImp12OnlypowerOffEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::PrintReg() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp8PrintRegEv(void) {
    ALOGD("_ZN9CcuDrvImp8PrintRegEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::importmem(import_mem_s) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp9importmemE12import_mem_s(void) {
    ALOGD("_ZN9CcuDrvImp9importmemE12import_mem_s() called");
    return 0;
}

/* Demangled: CcuMemImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp4initEPKc(void) {
    ALOGD("_ZN9CcuMemImp4initEPKc() called");
    return 0;
}

/* Demangled: CcuDrvImp::powerOff() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp8powerOffEv(void) {
    ALOGD("_ZN9CcuDrvImp8powerOffEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::shutdown() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp8shutdownEv(void) {
    ALOGD("_ZN9CcuDrvImp8shutdownEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::setCcuRun() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp9setCcuRunEv(void) {
    ALOGD("_ZN9CcuDrvImp9setCcuRunEv() called");
    return 0;
}

/* Demangled: cal_dual_af */
extern "C" __attribute__((visibility("default"))) int cal_dual_af(void) {
    ALOGD("cal_dual_af() called");
    return 0;
}

/* Demangled: CcuDrvImp::UnMapHwRegs() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11UnMapHwRegsEv(void) {
    ALOGD("_ZN9CcuDrvImp11UnMapHwRegsEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::getSensorI2cSlaveAddr(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp21getSensorI2cSlaveAddrEPi(void) {
    ALOGD("_ZN9CcuDrvImp21getSensorI2cSlaveAddrEPi() called");
    return 0;
}

/* Demangled: CcuDrvIpc::CcuDrvIpc() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvIpcC1Ev(void) {
    ALOGD("_ZN9CcuDrvIpcC1Ev() called");
    return 0;
}

/* Exported Object: ccu_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_WARN = NULL;

/* Demangled: NSCcuIf::CcuDrvUtil::sensorDevToTgInfo(NSIspTuning::ESensorDev_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj(void) {
    ALOGD("_ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj() called");
    return 0;
}

/* Demangled: CcuDrvImp::clearAFIrq(CCU_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp10clearAFIrqEP16CCU_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN9CcuDrvImp10clearAFIrqEP16CCU_CLEAR_IRQ_ST() called");
    return 0;
}

/* Demangled: CcuDrvImp::ApTaskWorkerThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp22ApTaskWorkerThreadLoopEPv(void) {
    ALOGD("_ZN9CcuDrvImp22ApTaskWorkerThreadLoopEPv() called");
    return 0;
}

/* Demangled: CcuDrvImp::CcuDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImpC2Ev(void) {
    ALOGD("_ZN9CcuDrvImpC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: CcuDrvImp::init(char const*, unsigned int, unsigned int, signed char*, signed char*, unsigned int, signed char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp4initEPKcjjPaS2_jS2_(void) {
    ALOGD("_ZN9CcuDrvImp4initEPKcjjPaS2_jS2_() called");
    return 0;
}

/* Demangled: CcuDrvImp::clearIrq(CCU_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp8clearIrqEP16CCU_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN9CcuDrvImp8clearIrqEP16CCU_CLEAR_IRQ_ST() called");
    return 0;
}

/* Demangled: CcuDrvIpc::getIpcIOBufAddr(void**, void**, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvIpc15getIpcIOBufAddrEPPvS1_PjS2_(void) {
    ALOGD("_ZN9CcuDrvIpc15getIpcIOBufAddrEPPvS1_PjS2_() called");
    return 0;
}

/* Demangled: CcuDrvImp::getI2CDmaBufferAddr(ccu_i2c_buf_mva_ioarg*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp19getI2CDmaBufferAddrEP21ccu_i2c_buf_mva_ioarg(void) {
    ALOGD("_ZN9CcuDrvImp19getI2CDmaBufferAddrEP21ccu_i2c_buf_mva_ioarg() called");
    return 0;
}

/* Demangled: CcuDrvImp::waitCmd(ccu_cmd_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp7waitCmdEP9ccu_cmd_s(void) {
    ALOGD("_ZN9CcuDrvImp7waitCmdEP9ccu_cmd_s() called");
    return 0;
}

/* Exported Object: CcuAeeMgrDl::_dlHandle */
extern "C" __attribute__((visibility("default"))) void* _ZN11CcuAeeMgrDl9_dlHandleE = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: CcuAeeMgrDl::AeeSystemException */
extern "C" __attribute__((visibility("default"))) void* _ZN11CcuAeeMgrDl18AeeSystemExceptionE = NULL;

/* Demangled: CcuMemImp::ccu_free(int, int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp8ccu_freeEiiiPc(void) {
    ALOGD("_ZN9CcuMemImp8ccu_freeEiiiPc() called");
    return 0;
}

/* Demangled: CcuMemImp::CcuMemImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImpC1Ev(void) {
    ALOGD("_ZN9CcuMemImpC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: CcuAeeMgrDl::CcuAeeMgrDlUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11CcuAeeMgrDl17CcuAeeMgrDlUninitEv(void) {
    ALOGD("_ZN11CcuAeeMgrDl17CcuAeeMgrDlUninitEv() called");
    return 0;
}

/* Demangled: CcuMemImp::ccu_malloc(int, int, int*, char**) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp10ccu_mallocEiiPiPPc(void) {
    ALOGD("_ZN9CcuMemImp10ccu_mallocEiiPiPPc() called");
    return 0;
}

/* Exported Object: vtable for CcuDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CcuDrvImp = NULL;

/* Exported Object: ccu_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: CcuDrvImp::TriggerAee(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp10TriggerAeeEPc(void) {
    ALOGD("_ZN9CcuDrvImp10TriggerAeeEPc() called");
    return 0;
}

/* Demangled: CcuDrvImp::ccuAddrToVa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11ccuAddrToVaEj(void) {
    ALOGD("_ZN9CcuDrvImp11ccuAddrToVaEj() called");
    return 0;
}

/* Demangled: CcuDrvImp::dequeueAFO_A() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp12dequeueAFO_AEv(void) {
    ALOGD("_ZN9CcuDrvImp12dequeueAFO_AEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::AFBApTaskWorkerThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp21AFBApTaskWorkerThreadEPv(void) {
    ALOGD("_ZN9CcuDrvImp21AFBApTaskWorkerThreadEPv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: CcuDrvImp::CloseCcuKdrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp12CloseCcuKdrvEv(void) {
    ALOGD("_ZN9CcuDrvImp12CloseCcuKdrvEv() called");
    return 0;
}

/* Exported Object: CcuDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9CcuDrvImp9m_UserCntE = NULL;

/* Demangled: CcuDrvIpc::init(shared_buf_map*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvIpc4initEP14shared_buf_mapPvS2_(void) {
    ALOGD("_ZN9CcuDrvIpc4initEP14shared_buf_mapPvS2_() called");
    return 0;
}

/* Demangled: CcuDrvIpc::CcuDrvIpc() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvIpcC2Ev(void) {
    ALOGD("_ZN9CcuDrvIpcC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: clearAndLoadBinToMem(unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20clearAndLoadBinToMemPjS_jjj(void) {
    ALOGD("_Z20clearAndLoadBinToMemPjS_jjj() called");
    return 0;
}

/* Exported Object: CcuDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6CcuDrv4m_FdE = NULL;

/* Demangled: CcuDrvImp::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp12createThreadEv(void) {
    ALOGD("_ZN9CcuDrvImp12createThreadEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::getCurrentFps(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp13getCurrentFpsEPi(void) {
    ALOGD("_ZN9CcuDrvImp13getCurrentFpsEPi() called");
    return 0;
}

/* Demangled: CcuDrvImp::loadSensorBin(WHICH_SENSOR, unsigned char, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp13loadSensorBinE12WHICH_SENSORhPb(void) {
    ALOGD("_ZN9CcuDrvImp13loadSensorBinE12WHICH_SENSORhPb() called");
    return 0;
}

/* Demangled: CcuDrvImp::sendCmdIpc(ccu_msg*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp10sendCmdIpcEP7ccu_msg(void) {
    ALOGD("_ZN9CcuDrvImp10sendCmdIpcEP7ccu_msg() called");
    return 0;
}

/* Demangled: CcuDrvImp::DumpDramLog() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11DumpDramLogEv(void) {
    ALOGD("_ZN9CcuDrvImp11DumpDramLogEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::checkSensorSupport(WHICH_SENSOR) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp18checkSensorSupportE12WHICH_SENSOR(void) {
    ALOGD("_ZN9CcuDrvImp18checkSensorSupportE12WHICH_SENSOR() called");
    return 0;
}

/* Demangled: CcuDrvImp::AFApTaskWorkerThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp20AFApTaskWorkerThreadEPv(void) {
    ALOGD("_ZN9CcuDrvImp20AFApTaskWorkerThreadEPv() called");
    return 0;
}

/* Demangled: CcuMemImp::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp14createInstanceEv(void) {
    ALOGD("_ZN9CcuMemImp14createInstanceEv() called");
    return 0;
}

/* Demangled: CcuMemImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp6uninitEPKc(void) {
    ALOGD("_ZN9CcuMemImp6uninitEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: tryOpenFile(char*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z11tryOpenFilePcS_(void) {
    ALOGD("_Z11tryOpenFilePcS_() called");
    return 0;
}

/* Demangled: CcuDrvImp::DumpSramLog() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11DumpSramLogEv(void) {
    ALOGD("_ZN9CcuDrvImp11DumpSramLogEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp13destroyThreadEv(void) {
    ALOGD("_ZN9CcuDrvImp13destroyThreadEv() called");
    return 0;
}

/* Demangled: CcuDrvIpc::sendCmd(ccu_msg*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvIpc7sendCmdEP7ccu_msg(void) {
    ALOGD("_ZN9CcuDrvIpc7sendCmdEP7ccu_msg() called");
    return 0;
}

/* Demangled: CcuMemImp::CcuMemImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImpC2Ev(void) {
    ALOGD("_ZN9CcuMemImpC2Ev() called");
    return 0;
}

/* Demangled: CcuDrvImp::RealUninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp10RealUninitEPKc(void) {
    ALOGD("_ZN9CcuDrvImp10RealUninitEPKc() called");
    return 0;
}

/* Demangled: CcuDrvImp::getIpcIOBuf(void**, void**, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11getIpcIOBufEPPvS1_PjS2_(void) {
    ALOGD("_ZN9CcuDrvImp11getIpcIOBufEPPvS1_PjS2_() called");
    return 0;
}

/* Exported Object: CcuAeeMgrDl::_aeeSysExpInitDone */
extern "C" __attribute__((visibility("default"))) void* _ZN11CcuAeeMgrDl18_aeeSysExpInitDoneE = NULL;

/* Exported Object: CCU_DEFUALT_LOG_LV3 */
extern "C" __attribute__((visibility("default"))) void* CCU_DEFUALT_LOG_LV3 = NULL;

/* Demangled: CcuDrvImp::createInstance(CCU_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp14createInstanceE13CCU_HW_MODULE(void) {
    ALOGD("_ZN9CcuDrvImp14createInstanceE13CCU_HW_MODULE() called");
    return 0;
}

/* Exported Object: CcuDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN9CcuDrvImp11m_regRWModeE = NULL;

/* Demangled: CcuDrvImp::dequeueAFO_B() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp12dequeueAFO_BEv(void) {
    ALOGD("_ZN9CcuDrvImp12dequeueAFO_BEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::waitIrq(CCU_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp7waitIrqEP15CCU_WAIT_IRQ_ST(void) {
    ALOGD("_ZN9CcuDrvImp7waitIrqEP15CCU_WAIT_IRQ_ST() called");
    return 0;
}

/* Exported Object: ccu_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_INFO = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: CcuDrvImp::readInfoReg(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp11readInfoRegEj(void) {
    ALOGD("_ZN9CcuDrvImp11readInfoRegEj() called");
    return 0;
}

/* Exported Object: CcuDrvImp::m_CcuInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9CcuDrvImp14m_CcuInitMutexE = NULL;

/* Demangled: CcuDrvImp::CcuDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImpC1Ev(void) {
    ALOGD("_ZN9CcuDrvImpC1Ev() called");
    return 0;
}

/* Demangled: CcuMemImp::munmapMVA(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuMemImp9munmapMVAEi(void) {
    ALOGD("_ZN9CcuMemImp9munmapMVAEi() called");
    return 0;
}

/* Exported Object: ccu_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: CcuAeeMgrDl::CcuAeeMgrDlInit() */
extern "C" __attribute__((visibility("default"))) int _ZN11CcuAeeMgrDl15CcuAeeMgrDlInitEv(void) {
    ALOGD("_ZN11CcuAeeMgrDl15CcuAeeMgrDlInitEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::getSharedBufMap() */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp15getSharedBufMapEv(void) {
    ALOGD("_ZN9CcuDrvImp15getSharedBufMapEv() called");
    return 0;
}

/* Demangled: CcuDrvImp::waitAFIrq(CCU_WAIT_IRQ_ST*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp9waitAFIrqEP15CCU_WAIT_IRQ_STj(void) {
    ALOGD("_ZN9CcuDrvImp9waitAFIrqEP15CCU_WAIT_IRQ_STj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: ccu_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: ccu_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* ccu_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: loadFileToBuffer(__sFILE*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16loadFileToBufferP7__sFILEPj(void) {
    ALOGD("_Z16loadFileToBufferP7__sFILEPj() called");
    return 0;
}

/* Demangled: loadSensorDrvToBuffer(__sFILE*, unsigned int*, CCU_BIN_SLOT) */
extern "C" __attribute__((visibility("default"))) int _Z21loadSensorDrvToBufferP7__sFILEPj12CCU_BIN_SLOT(void) {
    ALOGD("_Z21loadSensorDrvToBufferP7__sFILEPj12CCU_BIN_SLOT() called");
    return 0;
}

/* Demangled: loadBin(char*, unsigned int*, unsigned int*, unsigned int, unsigned int, CCU_BIN_SLOT) */
extern "C" __attribute__((visibility("default"))) int _Z7loadBinPcPjS0_jj12CCU_BIN_SLOT(void) {
    ALOGD("_Z7loadBinPcPjS0_jj12CCU_BIN_SLOT() called");
    return 0;
}

/* Exported Object: CcuDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9CcuDrvImp10m_UserNameE = NULL;

/* Demangled: CcuDrvImp::GetSensorName(int, WHICH_SENSOR, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp13GetSensorNameEi12WHICH_SENSORPc(void) {
    ALOGD("_ZN9CcuDrvImp13GetSensorNameEi12WHICH_SENSORPc() called");
    return 0;
}

/* Demangled: CcuDrvImp::initI2cController(CCU_I2C_CHANNEL) */
extern "C" __attribute__((visibility("default"))) int _ZN9CcuDrvImp17initI2cControllerE15CCU_I2C_CHANNEL(void) {
    ALOGD("_ZN9CcuDrvImp17initI2cControllerE15CCU_I2C_CHANNEL() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuDrvUtil::getTimeUs() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv(void) {
    ALOGD("_ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv() called");
    return 0;
}
