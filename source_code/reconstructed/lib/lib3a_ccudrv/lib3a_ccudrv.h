/*
 * Reverse-Engineered ABI Specification for: lib3a.ccudrv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.ccudrv.so
 */

#ifndef BEGONIA_RE_LIB3A_CCUDRV_H
#define BEGONIA_RE_LIB3A_CCUDRV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9CcuDrvImp6uninitEPKc */
/* Demangled: CcuDrvImp::uninit(char const*) */
int _ZN9CcuDrvImp6uninitEPKc(void);

/* Symbol: _ZN9CcuMemImp7mmapMVAEiPiPjjj */
/* Demangled: CcuMemImp::mmapMVA(int, int*, unsigned int*, unsigned int, unsigned int) */
int _ZN9CcuMemImp7mmapMVAEiPiPjjj(void);

/* Symbol: _ZN11CcuAeeMgrDl22IsCcuAeeSysExpInitDoneEv */
/* Demangled: CcuAeeMgrDl::IsCcuAeeSysExpInitDone() */
int _ZN11CcuAeeMgrDl22IsCcuAeeSysExpInitDoneEv(void);

/* Symbol: _ZN9CcuDrvImp10loadCCUBinEv */
/* Demangled: CcuDrvImp::loadCCUBin() */
int _ZN9CcuDrvImp10loadCCUBinEv(void);

/* Symbol: _ZN9CcuDrvImp11OpenCcuKdrvEv */
/* Demangled: CcuDrvImp::OpenCcuKdrv() */
int _ZN9CcuDrvImp11OpenCcuKdrvEv(void);

/* Symbol: _ZN9CcuDrvImp11registerIrqEP27CCU_REGISTER_USERKEY_STRUCT */
/* Demangled: CcuDrvImp::registerIrq(CCU_REGISTER_USERKEY_STRUCT*) */
int _ZN9CcuDrvImp11registerIrqEP27CCU_REGISTER_USERKEY_STRUCT(void);

/* Symbol: _ZN9CcuDrvImp11setCcuPowerEi */
/* Demangled: CcuDrvImp::setCcuPower(int) */
int _ZN9CcuDrvImp11setCcuPowerEi(void);

/* Symbol: _ZN9CcuDrvImp12OnlypowerOffEv */
/* Demangled: CcuDrvImp::OnlypowerOff() */
int _ZN9CcuDrvImp12OnlypowerOffEv(void);

/* Symbol: _ZN9CcuDrvImp8PrintRegEv */
/* Demangled: CcuDrvImp::PrintReg() */
int _ZN9CcuDrvImp8PrintRegEv(void);

/* Symbol: _ZN9CcuDrvImp9importmemE12import_mem_s */
/* Demangled: CcuDrvImp::importmem(import_mem_s) */
int _ZN9CcuDrvImp9importmemE12import_mem_s(void);

/* Symbol: _ZN9CcuMemImp4initEPKc */
/* Demangled: CcuMemImp::init(char const*) */
int _ZN9CcuMemImp4initEPKc(void);

/* Symbol: _ZN9CcuDrvImp8powerOffEv */
/* Demangled: CcuDrvImp::powerOff() */
int _ZN9CcuDrvImp8powerOffEv(void);

/* Symbol: _ZN9CcuDrvImp8shutdownEv */
/* Demangled: CcuDrvImp::shutdown() */
int _ZN9CcuDrvImp8shutdownEv(void);

/* Symbol: _ZN9CcuDrvImp9setCcuRunEv */
/* Demangled: CcuDrvImp::setCcuRun() */
int _ZN9CcuDrvImp9setCcuRunEv(void);

/* Symbol: cal_dual_af */
/* Demangled: cal_dual_af */
int cal_dual_af(void);

/* Symbol: _ZN9CcuDrvImp11UnMapHwRegsEv */
/* Demangled: CcuDrvImp::UnMapHwRegs() */
int _ZN9CcuDrvImp11UnMapHwRegsEv(void);

/* Symbol: _ZN9CcuDrvImp21getSensorI2cSlaveAddrEPi */
/* Demangled: CcuDrvImp::getSensorI2cSlaveAddr(int*) */
int _ZN9CcuDrvImp21getSensorI2cSlaveAddrEPi(void);

/* Symbol: _ZN9CcuDrvIpcC1Ev */
/* Demangled: CcuDrvIpc::CcuDrvIpc() */
int _ZN9CcuDrvIpcC1Ev(void);

/* Symbol: ccu_drv_DbgLogEnable_WARN */
/* Demangled: ccu_drv_DbgLogEnable_WARN */
extern void* ccu_drv_DbgLogEnable_WARN;

/* Symbol: _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj */
/* Demangled: NSCcuIf::CcuDrvUtil::sensorDevToTgInfo(NSIspTuning::ESensorDev_T, unsigned int) */
int _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj(void);

/* Symbol: _ZN9CcuDrvImp10clearAFIrqEP16CCU_CLEAR_IRQ_ST */
/* Demangled: CcuDrvImp::clearAFIrq(CCU_CLEAR_IRQ_ST*) */
int _ZN9CcuDrvImp10clearAFIrqEP16CCU_CLEAR_IRQ_ST(void);

/* Symbol: _ZN9CcuDrvImp22ApTaskWorkerThreadLoopEPv */
/* Demangled: CcuDrvImp::ApTaskWorkerThreadLoop(void*) */
int _ZN9CcuDrvImp22ApTaskWorkerThreadLoopEPv(void);

/* Symbol: _ZN9CcuDrvImpC2Ev */
/* Demangled: CcuDrvImp::CcuDrvImp() */
int _ZN9CcuDrvImpC2Ev(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN9CcuDrvImp4initEPKcjjPaS2_jS2_ */
/* Demangled: CcuDrvImp::init(char const*, unsigned int, unsigned int, signed char*, signed char*, unsigned int, signed char*) */
int _ZN9CcuDrvImp4initEPKcjjPaS2_jS2_(void);

/* Symbol: _ZN9CcuDrvImp8clearIrqEP16CCU_CLEAR_IRQ_ST */
/* Demangled: CcuDrvImp::clearIrq(CCU_CLEAR_IRQ_ST*) */
int _ZN9CcuDrvImp8clearIrqEP16CCU_CLEAR_IRQ_ST(void);

/* Symbol: _ZN9CcuDrvIpc15getIpcIOBufAddrEPPvS1_PjS2_ */
/* Demangled: CcuDrvIpc::getIpcIOBufAddr(void**, void**, unsigned int*, unsigned int*) */
int _ZN9CcuDrvIpc15getIpcIOBufAddrEPPvS1_PjS2_(void);

/* Symbol: _ZN9CcuDrvImp19getI2CDmaBufferAddrEP21ccu_i2c_buf_mva_ioarg */
/* Demangled: CcuDrvImp::getI2CDmaBufferAddr(ccu_i2c_buf_mva_ioarg*) */
int _ZN9CcuDrvImp19getI2CDmaBufferAddrEP21ccu_i2c_buf_mva_ioarg(void);

/* Symbol: _ZN9CcuDrvImp7waitCmdEP9ccu_cmd_s */
/* Demangled: CcuDrvImp::waitCmd(ccu_cmd_s*) */
int _ZN9CcuDrvImp7waitCmdEP9ccu_cmd_s(void);

/* Symbol: _ZN11CcuAeeMgrDl9_dlHandleE */
/* Demangled: CcuAeeMgrDl::_dlHandle */
extern void* _ZN11CcuAeeMgrDl9_dlHandleE;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN11CcuAeeMgrDl18AeeSystemExceptionE */
/* Demangled: CcuAeeMgrDl::AeeSystemException */
extern void* _ZN11CcuAeeMgrDl18AeeSystemExceptionE;

/* Symbol: _ZN9CcuMemImp8ccu_freeEiiiPc */
/* Demangled: CcuMemImp::ccu_free(int, int, int, char*) */
int _ZN9CcuMemImp8ccu_freeEiiiPc(void);

/* Symbol: _ZN9CcuMemImpC1Ev */
/* Demangled: CcuMemImp::CcuMemImp() */
int _ZN9CcuMemImpC1Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN11CcuAeeMgrDl17CcuAeeMgrDlUninitEv */
/* Demangled: CcuAeeMgrDl::CcuAeeMgrDlUninit() */
int _ZN11CcuAeeMgrDl17CcuAeeMgrDlUninitEv(void);

/* Symbol: _ZN9CcuMemImp10ccu_mallocEiiPiPPc */
/* Demangled: CcuMemImp::ccu_malloc(int, int, int*, char**) */
int _ZN9CcuMemImp10ccu_mallocEiiPiPPc(void);

/* Symbol: _ZTV9CcuDrvImp */
/* Demangled: vtable for CcuDrvImp */
extern void* _ZTV9CcuDrvImp;

/* Symbol: ccu_drv_DbgLogEnable_DEBUG */
/* Demangled: ccu_drv_DbgLogEnable_DEBUG */
extern void* ccu_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN9CcuDrvImp10TriggerAeeEPc */
/* Demangled: CcuDrvImp::TriggerAee(char*) */
int _ZN9CcuDrvImp10TriggerAeeEPc(void);

/* Symbol: _ZN9CcuDrvImp11ccuAddrToVaEj */
/* Demangled: CcuDrvImp::ccuAddrToVa(unsigned int) */
int _ZN9CcuDrvImp11ccuAddrToVaEj(void);

/* Symbol: _ZN9CcuDrvImp12dequeueAFO_AEv */
/* Demangled: CcuDrvImp::dequeueAFO_A() */
int _ZN9CcuDrvImp12dequeueAFO_AEv(void);

/* Symbol: _ZN9CcuDrvImp21AFBApTaskWorkerThreadEPv */
/* Demangled: CcuDrvImp::AFBApTaskWorkerThread(void*) */
int _ZN9CcuDrvImp21AFBApTaskWorkerThreadEPv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9CcuDrvImp12CloseCcuKdrvEv */
/* Demangled: CcuDrvImp::CloseCcuKdrv() */
int _ZN9CcuDrvImp12CloseCcuKdrvEv(void);

/* Symbol: _ZN9CcuDrvImp9m_UserCntE */
/* Demangled: CcuDrvImp::m_UserCnt */
extern void* _ZN9CcuDrvImp9m_UserCntE;

/* Symbol: _ZN9CcuDrvIpc4initEP14shared_buf_mapPvS2_ */
/* Demangled: CcuDrvIpc::init(shared_buf_map*, void*, void*) */
int _ZN9CcuDrvIpc4initEP14shared_buf_mapPvS2_(void);

/* Symbol: _ZN9CcuDrvIpcC2Ev */
/* Demangled: CcuDrvIpc::CcuDrvIpc() */
int _ZN9CcuDrvIpcC2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z20clearAndLoadBinToMemPjS_jjj */
/* Demangled: clearAndLoadBinToMem(unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int) */
int _Z20clearAndLoadBinToMemPjS_jjj(void);

/* Symbol: _ZN6CcuDrv4m_FdE */
/* Demangled: CcuDrv::m_Fd */
extern void* _ZN6CcuDrv4m_FdE;

/* Symbol: _ZN9CcuDrvImp12createThreadEv */
/* Demangled: CcuDrvImp::createThread() */
int _ZN9CcuDrvImp12createThreadEv(void);

/* Symbol: _ZN9CcuDrvImp13getCurrentFpsEPi */
/* Demangled: CcuDrvImp::getCurrentFps(int*) */
int _ZN9CcuDrvImp13getCurrentFpsEPi(void);

/* Symbol: _ZN9CcuDrvImp13loadSensorBinE12WHICH_SENSORhPb */
/* Demangled: CcuDrvImp::loadSensorBin(WHICH_SENSOR, unsigned char, bool*) */
int _ZN9CcuDrvImp13loadSensorBinE12WHICH_SENSORhPb(void);

/* Symbol: _ZN9CcuDrvImp10sendCmdIpcEP7ccu_msg */
/* Demangled: CcuDrvImp::sendCmdIpc(ccu_msg*) */
int _ZN9CcuDrvImp10sendCmdIpcEP7ccu_msg(void);

/* Symbol: _ZN9CcuDrvImp11DumpDramLogEv */
/* Demangled: CcuDrvImp::DumpDramLog() */
int _ZN9CcuDrvImp11DumpDramLogEv(void);

/* Symbol: _ZN9CcuDrvImp18checkSensorSupportE12WHICH_SENSOR */
/* Demangled: CcuDrvImp::checkSensorSupport(WHICH_SENSOR) */
int _ZN9CcuDrvImp18checkSensorSupportE12WHICH_SENSOR(void);

/* Symbol: _ZN9CcuDrvImp20AFApTaskWorkerThreadEPv */
/* Demangled: CcuDrvImp::AFApTaskWorkerThread(void*) */
int _ZN9CcuDrvImp20AFApTaskWorkerThreadEPv(void);

/* Symbol: _ZN9CcuMemImp14createInstanceEv */
/* Demangled: CcuMemImp::createInstance() */
int _ZN9CcuMemImp14createInstanceEv(void);

/* Symbol: _ZN9CcuMemImp6uninitEPKc */
/* Demangled: CcuMemImp::uninit(char const*) */
int _ZN9CcuMemImp6uninitEPKc(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _Z11tryOpenFilePcS_ */
/* Demangled: tryOpenFile(char*, char*) */
int _Z11tryOpenFilePcS_(void);

/* Symbol: _ZN9CcuDrvImp11DumpSramLogEv */
/* Demangled: CcuDrvImp::DumpSramLog() */
int _ZN9CcuDrvImp11DumpSramLogEv(void);

/* Symbol: _ZN9CcuDrvImp13destroyThreadEv */
/* Demangled: CcuDrvImp::destroyThread() */
int _ZN9CcuDrvImp13destroyThreadEv(void);

/* Symbol: _ZN9CcuDrvIpc7sendCmdEP7ccu_msg */
/* Demangled: CcuDrvIpc::sendCmd(ccu_msg*) */
int _ZN9CcuDrvIpc7sendCmdEP7ccu_msg(void);

/* Symbol: _ZN9CcuMemImpC2Ev */
/* Demangled: CcuMemImp::CcuMemImp() */
int _ZN9CcuMemImpC2Ev(void);

/* Symbol: _ZN9CcuDrvImp10RealUninitEPKc */
/* Demangled: CcuDrvImp::RealUninit(char const*) */
int _ZN9CcuDrvImp10RealUninitEPKc(void);

/* Symbol: _ZN9CcuDrvImp11getIpcIOBufEPPvS1_PjS2_ */
/* Demangled: CcuDrvImp::getIpcIOBuf(void**, void**, unsigned int*, unsigned int*) */
int _ZN9CcuDrvImp11getIpcIOBufEPPvS1_PjS2_(void);

/* Symbol: _ZN11CcuAeeMgrDl18_aeeSysExpInitDoneE */
/* Demangled: CcuAeeMgrDl::_aeeSysExpInitDone */
extern void* _ZN11CcuAeeMgrDl18_aeeSysExpInitDoneE;

/* Symbol: CCU_DEFUALT_LOG_LV3 */
/* Demangled: CCU_DEFUALT_LOG_LV3 */
extern void* CCU_DEFUALT_LOG_LV3;

/* Symbol: _ZN9CcuDrvImp14createInstanceE13CCU_HW_MODULE */
/* Demangled: CcuDrvImp::createInstance(CCU_HW_MODULE) */
int _ZN9CcuDrvImp14createInstanceE13CCU_HW_MODULE(void);

/* Symbol: _ZN9CcuDrvImp11m_regRWModeE */
/* Demangled: CcuDrvImp::m_regRWMode */
extern void* _ZN9CcuDrvImp11m_regRWModeE;

/* Symbol: _ZN9CcuDrvImp12dequeueAFO_BEv */
/* Demangled: CcuDrvImp::dequeueAFO_B() */
int _ZN9CcuDrvImp12dequeueAFO_BEv(void);

/* Symbol: _ZN9CcuDrvImp7waitIrqEP15CCU_WAIT_IRQ_ST */
/* Demangled: CcuDrvImp::waitIrq(CCU_WAIT_IRQ_ST*) */
int _ZN9CcuDrvImp7waitIrqEP15CCU_WAIT_IRQ_ST(void);

/* Symbol: ccu_drv_DbgLogEnable_INFO */
/* Demangled: ccu_drv_DbgLogEnable_INFO */
extern void* ccu_drv_DbgLogEnable_INFO;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN9CcuDrvImp11readInfoRegEj */
/* Demangled: CcuDrvImp::readInfoReg(unsigned int) */
int _ZN9CcuDrvImp11readInfoRegEj(void);

/* Symbol: _ZN9CcuDrvImp14m_CcuInitMutexE */
/* Demangled: CcuDrvImp::m_CcuInitMutex */
extern void* _ZN9CcuDrvImp14m_CcuInitMutexE;

/* Symbol: _ZN9CcuDrvImpC1Ev */
/* Demangled: CcuDrvImp::CcuDrvImp() */
int _ZN9CcuDrvImpC1Ev(void);

/* Symbol: _ZN9CcuMemImp9munmapMVAEi */
/* Demangled: CcuMemImp::munmapMVA(int) */
int _ZN9CcuMemImp9munmapMVAEi(void);

/* Symbol: ccu_drv_DbgLogEnable_ERROR */
/* Demangled: ccu_drv_DbgLogEnable_ERROR */
extern void* ccu_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN11CcuAeeMgrDl15CcuAeeMgrDlInitEv */
/* Demangled: CcuAeeMgrDl::CcuAeeMgrDlInit() */
int _ZN11CcuAeeMgrDl15CcuAeeMgrDlInitEv(void);

/* Symbol: _ZN9CcuDrvImp15getSharedBufMapEv */
/* Demangled: CcuDrvImp::getSharedBufMap() */
int _ZN9CcuDrvImp15getSharedBufMapEv(void);

/* Symbol: _ZN9CcuDrvImp9waitAFIrqEP15CCU_WAIT_IRQ_STj */
/* Demangled: CcuDrvImp::waitAFIrq(CCU_WAIT_IRQ_ST*, unsigned int) */
int _ZN9CcuDrvImp9waitAFIrqEP15CCU_WAIT_IRQ_STj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: ccu_drv_DbgLogEnable_ASSERT */
/* Demangled: ccu_drv_DbgLogEnable_ASSERT */
extern void* ccu_drv_DbgLogEnable_ASSERT;

/* Symbol: ccu_drv_DbgLogEnable_VERBOSE */
/* Demangled: ccu_drv_DbgLogEnable_VERBOSE */
extern void* ccu_drv_DbgLogEnable_VERBOSE;

/* Symbol: _Z16loadFileToBufferP7__sFILEPj */
/* Demangled: loadFileToBuffer(__sFILE*, unsigned int*) */
int _Z16loadFileToBufferP7__sFILEPj(void);

/* Symbol: _Z21loadSensorDrvToBufferP7__sFILEPj12CCU_BIN_SLOT */
/* Demangled: loadSensorDrvToBuffer(__sFILE*, unsigned int*, CCU_BIN_SLOT) */
int _Z21loadSensorDrvToBufferP7__sFILEPj12CCU_BIN_SLOT(void);

/* Symbol: _Z7loadBinPcPjS0_jj12CCU_BIN_SLOT */
/* Demangled: loadBin(char*, unsigned int*, unsigned int*, unsigned int, unsigned int, CCU_BIN_SLOT) */
int _Z7loadBinPcPjS0_jj12CCU_BIN_SLOT(void);

/* Symbol: _ZN9CcuDrvImp10m_UserNameE */
/* Demangled: CcuDrvImp::m_UserName */
extern void* _ZN9CcuDrvImp10m_UserNameE;

/* Symbol: _ZN9CcuDrvImp13GetSensorNameEi12WHICH_SENSORPc */
/* Demangled: CcuDrvImp::GetSensorName(int, WHICH_SENSOR, char*) */
int _ZN9CcuDrvImp13GetSensorNameEi12WHICH_SENSORPc(void);

/* Symbol: _ZN9CcuDrvImp17initI2cControllerE15CCU_I2C_CHANNEL */
/* Demangled: CcuDrvImp::initI2cController(CCU_I2C_CHANNEL) */
int _ZN9CcuDrvImp17initI2cControllerE15CCU_I2C_CHANNEL(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv */
/* Demangled: NSCcuIf::CcuDrvUtil::getTimeUs() */
int _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_CCUDRV_H */
