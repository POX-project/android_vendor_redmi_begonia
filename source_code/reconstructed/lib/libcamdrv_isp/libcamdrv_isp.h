/*
 * Reverse-Engineered ABI Specification for: libcamdrv_isp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamdrv_isp.so
 */

#ifndef BEGONIA_RE_LIBCAMDRV_ISP_H
#define BEGONIA_RE_LIBCAMDRV_ISP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11ISP_DRV_CAM16twinPath_CQ_CtrlEj13ISP_HW_MODULE */
/* Demangled: ISP_DRV_CAM::twinPath_CQ_Ctrl(unsigned int, ISP_HW_MODULE) */
int _ZN11ISP_DRV_CAM16twinPath_CQ_CtrlEj13ISP_HW_MODULE(void);

/* Symbol: _ZN11ISP_DRV_CAM4initEPKc */
/* Demangled: ISP_DRV_CAM::init(char const*) */
int _ZN11ISP_DRV_CAM4initEPKc(void);

/* Symbol: _ZN11IspDrvCamsv13setDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: IspDrvCamsv::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN11IspDrvCamsv13setDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZN9IspDrvImp7waitIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: IspDrvImp::waitIrq(ISP_WAIT_IRQ_ST*) */
int _ZN9IspDrvImp7waitIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: _ZN11ISP_DRV_CAM16getIspVirRegSizeEv */
/* Demangled: ISP_DRV_CAM::getIspVirRegSize() */
int _ZN11ISP_DRV_CAM16getIspVirRegSizeEv(void);

/* Symbol: _ZN11ISP_DRV_CAM16readCQModuleInfoEjPPvj */
/* Demangled: ISP_DRV_CAM::readCQModuleInfo(unsigned int, void**, unsigned int) */
int _ZN11ISP_DRV_CAM16readCQModuleInfoEjPPvj(void);

/* Symbol: _ZN9IspDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: IspDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9IspDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN11ISP_DRV_CAM15getCQModuleInfoEjRjS0_ */
/* Demangled: ISP_DRV_CAM::getCQModuleInfo(unsigned int, unsigned int&, unsigned int&) */
int _ZN11ISP_DRV_CAM15getCQModuleInfoEjRjS0_(void);

/* Symbol: _ZN11ISP_DRV_CAM7readRegEji */
/* Demangled: ISP_DRV_CAM::readReg(unsigned int, int) */
int _ZN11ISP_DRV_CAM7readRegEji(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_CAM_DbgLogEnable_ASSERT */
extern void* isp_drv_CAM_DbgLogEnable_ASSERT;

/* Symbol: _ZN6IspDrv10RegRWMacroE */
/* Demangled: IspDrv::RegRWMacro */
extern void* _ZN6IspDrv10RegRWMacroE;

/* Symbol: _ZN11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: ISP_DRV_CAM::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: gPageTbl */
/* Demangled: gPageTbl */
extern void* gPageTbl;

/* Symbol: _ZN11IspDrvCamsv7FSM_CHKEj */
/* Demangled: IspDrvCamsv::FSM_CHK(unsigned int) */
int _ZN11IspDrvCamsv7FSM_CHKEj(void);

/* Symbol: _ZN9IspDrvImp7readRegEji */
/* Demangled: IspDrvImp::readReg(unsigned int, int) */
int _ZN9IspDrvImp7readRegEji(void);

/* Symbol: _ZN9UniDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: UniDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9UniDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: uni_drv_DbgLogEnable_ERROR */
/* Demangled: uni_drv_DbgLogEnable_ERROR */
extern void* uni_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN11ISP_DRV_CAM11cqAddModuleEjj13ISP_HW_MODULE */
/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int, unsigned int, ISP_HW_MODULE) */
int _ZN11ISP_DRV_CAM11cqAddModuleEjj13ISP_HW_MODULE(void);

/* Symbol: _ZN11ISP_DRV_CAM13getCurObjInfoEP13ISP_HW_MODULEP12E_ISP_CAM_CQPj */
/* Demangled: ISP_DRV_CAM::getCurObjInfo(ISP_HW_MODULE*, E_ISP_CAM_CQ*, unsigned int*) */
int _ZN11ISP_DRV_CAM13getCurObjInfoEP13ISP_HW_MODULEP12E_ISP_CAM_CQPj(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::clearIrq(ISP_CLEAR_IRQ_ST*) */
int _ZThn4_N11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST(void);

/* Symbol: uni_drv_DbgLogEnable_DEBUG */
/* Demangled: uni_drv_DbgLogEnable_DEBUG */
extern void* uni_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: ISP_DRV_CAM::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZThn4_N11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN11ISP_DRV_CAM9flushCmdQEv */
/* Demangled: ISP_DRV_CAM::flushCmdQ() */
int _ZN11ISP_DRV_CAM9flushCmdQEv(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_CAM_DbgLogEnable_VERBOSE */
extern void* isp_drv_CAM_DbgLogEnable_VERBOSE;

/* Symbol: _ZN11ISP_DRV_CAM18updateEnqCqRingBufEP13CQ_RingBuf_ST */
/* Demangled: ISP_DRV_CAM::updateEnqCqRingBuf(CQ_RingBuf_ST*) */
int _ZN11ISP_DRV_CAM18updateEnqCqRingBufEP13CQ_RingBuf_ST(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM4initEPKc */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::init(char const*) */
int _ZThn4_N11ISP_DRV_CAM4initEPKc(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZThn4_N11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: isp_drv_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_DbgLogEnable_VERBOSE */
extern void* isp_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN11ISP_DRV_CAM14VirReg_ValidRWEv */
/* Demangled: ISP_DRV_CAM::VirReg_ValidRW() */
int _ZN11ISP_DRV_CAM14VirReg_ValidRWEv(void);

/* Symbol: _ZN11IspDrvCamsv7waitIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: IspDrvCamsv::waitIrq(ISP_WAIT_IRQ_ST*) */
int _ZN11IspDrvCamsv7waitIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN11ISP_DRV_CAM5startEv */
/* Demangled: ISP_DRV_CAM::start() */
int _ZN11ISP_DRV_CAM5startEv(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::signalIrq(ISP_WAIT_IRQ_ST*) */
int _ZThn4_N11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: _ZN11IspDrvCamsv7readRegEji */
/* Demangled: IspDrvCamsv::readReg(unsigned int, int) */
int _ZN11IspDrvCamsv7readRegEji(void);

/* Symbol: isp_drv_camsv_DbgLogEnable_ERROR */
/* Demangled: isp_drv_camsv_DbgLogEnable_ERROR */
extern void* isp_drv_camsv_DbgLogEnable_ERROR;

/* Symbol: isp_drv_DbgLogEnable_ERROR */
/* Demangled: isp_drv_DbgLogEnable_ERROR */
extern void* isp_drv_DbgLogEnable_ERROR;

/* Symbol: uni_drv_DbgLogEnable_WARN */
/* Demangled: uni_drv_DbgLogEnable_WARN */
extern void* uni_drv_DbgLogEnable_WARN;

/* Symbol: _ZN11ISP_DRV_CAM11dumpCQTableEv */
/* Demangled: ISP_DRV_CAM::dumpCQTable() */
int _ZN11ISP_DRV_CAM11dumpCQTableEv(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_ERROR */
/* Demangled: isp_drv_CAM_DbgLogEnable_ERROR */
extern void* isp_drv_CAM_DbgLogEnable_ERROR;

/* Symbol: isp_drv_camsv_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_camsv_DbgLogEnable_DEBUG */
extern void* isp_drv_camsv_DbgLogEnable_DEBUG;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN9IspDrvImp9usrkey_3aE */
/* Demangled: IspDrvImp::usrkey_3a */
extern void* _ZN9IspDrvImp9usrkey_3aE;

/* Symbol: isp_drv_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_DbgLogEnable_DEBUG */
extern void* isp_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN9UniDrvImp4initEPKcP9IspDrvImp */
/* Demangled: UniDrvImp::init(char const*, IspDrvImp*) */
int _ZN9UniDrvImp4initEPKcP9IspDrvImp(void);

/* Symbol: _ZN9UniDrvImp8writeRegEjmi */
/* Demangled: UniDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9UniDrvImp8writeRegEjmi(void);

/* Symbol: _ZN11ISP_DRV_CAM11cqDelModuleEj */
/* Demangled: ISP_DRV_CAM::cqDelModule(unsigned int) */
int _ZN11ISP_DRV_CAM11cqDelModuleEj(void);

/* Symbol: _ZN11ISP_DRV_CAM9getPhyObjEv */
/* Demangled: ISP_DRV_CAM::getPhyObj() */
int _ZN11ISP_DRV_CAM9getPhyObjEv(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_CAM_DbgLogEnable_DEBUG */
extern void* isp_drv_CAM_DbgLogEnable_DEBUG;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: isp_drv_DbgLogEnable_INFO */
/* Demangled: isp_drv_DbgLogEnable_INFO */
extern void* isp_drv_DbgLogEnable_INFO;

/* Symbol: _ZN11ISP_DRV_CAM11cqAddModuleEj13ISP_HW_MODULE */
/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int, ISP_HW_MODULE) */
int _ZN11ISP_DRV_CAM11cqAddModuleEj13ISP_HW_MODULE(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM6uninitEPKc */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::uninit(char const*) */
int _ZThn4_N11ISP_DRV_CAM6uninitEPKc(void);

/* Symbol: _ZN11IspDrvCamsv14createInstanceE13ISP_HW_MODULE */
/* Demangled: IspDrvCamsv::createInstance(ISP_HW_MODULE) */
int _ZN11IspDrvCamsv14createInstanceE13ISP_HW_MODULE(void);

/* Symbol: _ZN11IspDrvCamsv8clearIrqEP16ISP_CLEAR_IRQ_ST */
/* Demangled: IspDrvCamsv::clearIrq(ISP_CLEAR_IRQ_ST*) */
int _ZN11IspDrvCamsv8clearIrqEP16ISP_CLEAR_IRQ_ST(void);

/* Symbol: _ZTV9UniDrvImp */
/* Demangled: vtable for UniDrvImp */
extern void* _ZTV9UniDrvImp;

/* Symbol: _ZN11ISP_DRV_CAM19getIspVirRegPhyAddrEv */
/* Demangled: ISP_DRV_CAM::getIspVirRegPhyAddr() */
int _ZN11ISP_DRV_CAM19getIspVirRegPhyAddrEv(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZThn4_N11ISP_DRV_CAM13getDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN6IspDrv4m_FdE */
/* Demangled: IspDrv::m_Fd */
extern void* _ZN6IspDrv4m_FdE;

/* Symbol: _ZN9IspDrvImp9m_DapcRegE */
/* Demangled: IspDrvImp::m_DapcReg */
extern void* _ZN9IspDrvImp9m_DapcRegE;

/* Symbol: _ZN9UniDrvImp15destroyInstanceEv */
/* Demangled: UniDrvImp::destroyInstance() */
int _ZN9UniDrvImp15destroyInstanceEv(void);

/* Symbol: _ZN11ISP_DRV_CAM19getIspVirRegVirAddrEv */
/* Demangled: ISP_DRV_CAM::getIspVirRegVirAddr() */
int _ZN11ISP_DRV_CAM19getIspVirRegVirAddrEv(void);

/* Symbol: _ZN11ISP_DRV_CAM8writeRegEjmi */
/* Demangled: ISP_DRV_CAM::writeReg(unsigned int, unsigned long, int) */
int _ZN11ISP_DRV_CAM8writeRegEjmi(void);

/* Symbol: _ZN9IspDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: IspDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9IspDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN11ISP_DRV_CAM14getIspVirIonFDEv */
/* Demangled: ISP_DRV_CAM::getIspVirIonFD() */
int _ZN11ISP_DRV_CAM14getIspVirIonFDEv(void);

/* Symbol: _ZN11ISP_DRV_CAM15update_FH_SpareEP13CQ_RingBuf_ST */
/* Demangled: ISP_DRV_CAM::update_FH_Spare(CQ_RingBuf_ST*) */
int _ZN11ISP_DRV_CAM15update_FH_SpareEP13CQ_RingBuf_ST(void);

/* Symbol: _ZN9IspDrvImp13getDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: IspDrvImp::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN9IspDrvImp13getDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN9UniDrvImp13getCurObjInfoEv */
/* Demangled: UniDrvImp::getCurObjInfo() */
int _ZN9UniDrvImp13getCurObjInfoEv(void);

/* Symbol: _ZN9UniDrvImp6uninitEPKc */
/* Demangled: UniDrvImp::uninit(char const*) */
int _ZN9UniDrvImp6uninitEPKc(void);

/* Symbol: _ZN11IspDrvCamsv9signalIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: IspDrvCamsv::signalIrq(ISP_WAIT_IRQ_ST*) */
int _ZN11IspDrvCamsv9signalIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: isp_drv_camsv_DbgLogEnable_INFO */
/* Demangled: isp_drv_camsv_DbgLogEnable_INFO */
extern void* isp_drv_camsv_DbgLogEnable_INFO;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN6IspDrv12m_pIspRegMapE */
/* Demangled: IspDrv::m_pIspRegMap */
extern void* _ZN6IspDrv12m_pIspRegMapE;

/* Symbol: _ZN11ISP_DRV_CAM13CQ_SetContentEP21ISP_DRV_REG_IO_STRUCTj */
/* Demangled: ISP_DRV_CAM::CQ_SetContent(ISP_DRV_REG_IO_STRUCT*, unsigned int) */
int _ZN11ISP_DRV_CAM13CQ_SetContentEP21ISP_DRV_REG_IO_STRUCTj(void);

/* Symbol: _ZN11ISP_DRV_CAM9cqRingBufEP13CQ_RingBuf_ST */
/* Demangled: ISP_DRV_CAM::cqRingBuf(CQ_RingBuf_ST*) */
int _ZN11ISP_DRV_CAM9cqRingBufEP13CQ_RingBuf_ST(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::waitIrq(ISP_WAIT_IRQ_ST*) */
int _ZThn4_N11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: _ZN11IspDrvCamsv8writeRegEjmi */
/* Demangled: IspDrvCamsv::writeReg(unsigned int, unsigned long, int) */
int _ZN11IspDrvCamsv8writeRegEjmi(void);

/* Symbol: _ZN9IspDrvImp13setDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: IspDrvImp::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN9IspDrvImp13setDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZN9IspDrvImp6uninitEPKc */
/* Demangled: IspDrvImp::uninit(char const*) */
int _ZN9IspDrvImp6uninitEPKc(void);

/* Symbol: _ZN11ISP_DRV_CAM11cqAddModuleEj */
/* Demangled: ISP_DRV_CAM::cqAddModule(unsigned int) */
int _ZN11ISP_DRV_CAM11cqAddModuleEj(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZThn4_N11ISP_DRV_CAM13setDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: mIspCQModuleInfo_SpecialCQ */
/* Demangled: mIspCQModuleInfo_SpecialCQ */
extern void* mIspCQModuleInfo_SpecialCQ;

/* Symbol: _ZN9IspDrvImp6m_UserE */
/* Demangled: IspDrvImp::m_User */
extern void* _ZN9IspDrvImp6m_UserE;

/* Symbol: _ZN9IspDrvImp9getRWModeEv */
/* Demangled: IspDrvImp::getRWMode() */
int _ZN9IspDrvImp9getRWModeEv(void);

/* Symbol: _ZN11ISP_DRV_CAM15destroyInstanceEv */
/* Demangled: ISP_DRV_CAM::destroyInstance() */
int _ZN11ISP_DRV_CAM15destroyInstanceEv(void);

/* Symbol: _ZN11ISP_DRV_CAM6uninitEPKc */
/* Demangled: ISP_DRV_CAM::uninit(char const*) */
int _ZN11ISP_DRV_CAM6uninitEPKc(void);

/* Symbol: _ZN11IspDrvCamsv8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: IspDrvCamsv::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN11IspDrvCamsv8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN11ISP_DRV_CAM19getCQDescBufVirAddrEv */
/* Demangled: ISP_DRV_CAM::getCQDescBufVirAddr() */
int _ZN11ISP_DRV_CAM19getCQDescBufVirAddrEv(void);

/* Symbol: _ZN9IspDrvImp11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT */
/* Demangled: IspDrvImp::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
int _ZN9IspDrvImp11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM16getCQDescBufSizeEv */
/* Demangled: ISP_DRV_CAM::getCQDescBufSize() */
int _ZN11ISP_DRV_CAM16getCQDescBufSizeEv(void);

/* Symbol: _ZN11ISP_DRV_CAM19getCQDescBufPhyAddrEv */
/* Demangled: ISP_DRV_CAM::getCQDescBufPhyAddr() */
int _ZN11ISP_DRV_CAM19getCQDescBufPhyAddrEv(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM8writeRegEjmi */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::writeReg(unsigned int, unsigned long, int) */
int _ZThn4_N11ISP_DRV_CAM8writeRegEjmi(void);

/* Symbol: _ZN11IspDrvCamsv6uninitEPKc */
/* Demangled: IspDrvCamsv::uninit(char const*) */
int _ZN11IspDrvCamsv6uninitEPKc(void);

/* Symbol: _ZN9UniDrvImp14createInstanceE13UNI_HW_MODULE */
/* Demangled: UniDrvImp::createInstance(UNI_HW_MODULE) */
int _ZN9UniDrvImp14createInstanceE13UNI_HW_MODULE(void);

/* Symbol: _ZN9UniDrvImp7DumpRegEv */
/* Demangled: UniDrvImp::DumpReg() */
int _ZN9UniDrvImp7DumpRegEv(void);

/* Symbol: _ZN11ISP_DRV_CAMC1E13ISP_HW_MODULE12E_ISP_CAM_CQj */
/* Demangled: ISP_DRV_CAM::ISP_DRV_CAM(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int) */
int _ZN11ISP_DRV_CAMC1E13ISP_HW_MODULE12E_ISP_CAM_CQj(void);

/* Symbol: _ZN11IspDrvCamsv9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: IspDrvCamsv::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN11IspDrvCamsv9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: isp_drv_camsv_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_camsv_DbgLogEnable_ASSERT */
extern void* isp_drv_camsv_DbgLogEnable_ASSERT;

/* Symbol: isp_drv_DbgLogEnable_WARN */
/* Demangled: isp_drv_DbgLogEnable_WARN */
extern void* isp_drv_DbgLogEnable_WARN;

/* Symbol: uni_drv_DbgLogEnable_ASSERT */
/* Demangled: uni_drv_DbgLogEnable_ASSERT */
extern void* uni_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN11ISP_DRV_CAMC2E13ISP_HW_MODULE12E_ISP_CAM_CQj */
/* Demangled: ISP_DRV_CAM::ISP_DRV_CAM(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int) */
int _ZN11ISP_DRV_CAMC2E13ISP_HW_MODULE12E_ISP_CAM_CQj(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_INFO */
/* Demangled: isp_drv_CAM_DbgLogEnable_INFO */
extern void* isp_drv_CAM_DbgLogEnable_INFO;

/* Symbol: _ZN11IspDrvCamsv11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT */
/* Demangled: IspDrvCamsv::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
int _ZN11IspDrvCamsv11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void);

/* Symbol: _ZN9IspDrvImp10setDapcRegENSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: IspDrvImp::setDapcReg(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >) */
int _ZN9IspDrvImp10setDapcRegENSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZTV11ISP_DRV_CAM */
/* Demangled: vtable for ISP_DRV_CAM */
extern void* _ZTV11ISP_DRV_CAM;

/* Symbol: _ZN11IspDrvCamsv7DumpRegEi */
/* Demangled: IspDrvCamsv::DumpReg(int) */
int _ZN11IspDrvCamsv7DumpRegEi(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9UniDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: UniDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9UniDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN9IspDrvImpC2Ev */
/* Demangled: IspDrvImp::IspDrvImp() */
int _ZN9IspDrvImpC2Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: ISP_DRV_CAM::waitIrq(ISP_WAIT_IRQ_ST*) */
int _ZN11ISP_DRV_CAM7waitIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: gMutex */
/* Demangled: gMutex */
extern void* gMutex;

/* Symbol: _ZN9IspDrvImp11m_regRWModeE */
/* Demangled: IspDrvImp::m_regRWMode */
extern void* _ZN9IspDrvImp11m_regRWModeE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: ISP_DRV_CAM::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN11ISP_DRV_CAM9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM15destroyInstanceEv */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::destroyInstance() */
int _ZThn4_N11ISP_DRV_CAM15destroyInstanceEv(void);

/* Symbol: _ZN11IspDrvCamsvC2Ev */
/* Demangled: IspDrvCamsv::IspDrvCamsv() */
int _ZN11IspDrvCamsvC2Ev(void);

/* Symbol: _ZTV11IspDrvCamsv */
/* Demangled: vtable for IspDrvCamsv */
extern void* _ZTV11IspDrvCamsv;

/* Symbol: _ZN11ISP_DRV_CAM11cqNopModuleEj */
/* Demangled: ISP_DRV_CAM::cqNopModule(unsigned int) */
int _ZN11ISP_DRV_CAM11cqNopModuleEj(void);

/* Symbol: _ZN11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT */
/* Demangled: ISP_DRV_CAM::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
int _ZN11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void);

/* Symbol: isp_drv_camsv_DbgLogEnable_WARN */
/* Demangled: isp_drv_camsv_DbgLogEnable_WARN */
extern void* isp_drv_camsv_DbgLogEnable_WARN;

/* Symbol: _ZN9IspDrvImp4initEPKc */
/* Demangled: IspDrvImp::init(char const*) */
int _ZN9IspDrvImp4initEPKc(void);

/* Symbol: _ZN9IspDrvImpC1Ev */
/* Demangled: IspDrvImp::IspDrvImp() */
int _ZN9IspDrvImpC1Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: ISP_DRV_CAM::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN11ISP_DRV_CAM8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::registerIrq(ISP_REGISTER_USERKEY_STRUCT*) */
int _ZThn4_N11ISP_DRV_CAM11registerIrqEP27ISP_REGISTER_USERKEY_STRUCT(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN9UniDrvImpC2Ev */
/* Demangled: UniDrvImp::UniDrvImp() */
int _ZN9UniDrvImpC2Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM14createInstanceE13ISP_HW_MODULE12E_ISP_CAM_CQjPKc */
/* Demangled: ISP_DRV_CAM::createInstance(ISP_HW_MODULE, E_ISP_CAM_CQ, unsigned int, char const*) */
int _ZN11ISP_DRV_CAM14createInstanceE13ISP_HW_MODULE12E_ISP_CAM_CQjPKc(void);

/* Symbol: _ZN11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST */
/* Demangled: ISP_DRV_CAM::clearIrq(ISP_CLEAR_IRQ_ST*) */
int _ZN11ISP_DRV_CAM8clearIrqEP16ISP_CLEAR_IRQ_ST(void);

/* Symbol: _ZN11IspDrvCamsvC1Ev */
/* Demangled: IspDrvCamsv::IspDrvCamsv() */
int _ZN11IspDrvCamsvC1Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM4stopEv */
/* Demangled: ISP_DRV_CAM::stop() */
int _ZN11ISP_DRV_CAM4stopEv(void);

/* Symbol: _ZN11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST */
/* Demangled: ISP_DRV_CAM::signalIrq(ISP_WAIT_IRQ_ST*) */
int _ZN11ISP_DRV_CAM9signalIrqEP15ISP_WAIT_IRQ_ST(void);

/* Symbol: _ZN9IspDrvImp7m_SecOnE */
/* Demangled: IspDrvImp::m_SecOn */
extern void* _ZN9IspDrvImp7m_SecOnE;

/* Symbol: _ZN9IspDrvImp8clearIrqEP16ISP_CLEAR_IRQ_ST */
/* Demangled: IspDrvImp::clearIrq(ISP_CLEAR_IRQ_ST*) */
int _ZN9IspDrvImp8clearIrqEP16ISP_CLEAR_IRQ_ST(void);

/* Symbol: _ZThn4_N11ISP_DRV_CAM7readRegEji */
/* Demangled: non-virtual thunk to ISP_DRV_CAM::readReg(unsigned int, int) */
int _ZThn4_N11ISP_DRV_CAM7readRegEji(void);

/* Symbol: isp_drv_camsv_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_camsv_DbgLogEnable_VERBOSE */
extern void* isp_drv_camsv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9IspDrvImp9setRWModeE15ISP_DRV_RW_MODE */
/* Demangled: IspDrvImp::setRWMode(ISP_DRV_RW_MODE) */
int _ZN9IspDrvImp9setRWModeE15ISP_DRV_RW_MODE(void);

/* Symbol: _ZN9UniDrvImpC1Ev */
/* Demangled: UniDrvImp::UniDrvImp() */
int _ZN9UniDrvImpC1Ev(void);

/* Symbol: _ZN11ISP_DRV_CAM19CQ_Allocate_method2Ej */
/* Demangled: ISP_DRV_CAM::CQ_Allocate_method2(unsigned int) */
int _ZN11ISP_DRV_CAM19CQ_Allocate_method2Ej(void);

/* Symbol: mIspCQModuleInfo */
/* Demangled: mIspCQModuleInfo */
extern void* mIspCQModuleInfo;

/* Symbol: _ZN11IspDrvCamsv13getDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: IspDrvCamsv::getDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN11IspDrvCamsv13getDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZN9IspDrvImp8writeRegEjmi */
/* Demangled: IspDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9IspDrvImp8writeRegEjmi(void);

/* Symbol: _ZN11IspDrvCamsv4initEPKc */
/* Demangled: IspDrvCamsv::init(char const*) */
int _ZN11IspDrvCamsv4initEPKc(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: isp_drv_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_DbgLogEnable_ASSERT */
extern void* isp_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN9UniDrvImp4initEPKc */
/* Demangled: UniDrvImp::init(char const*) */
int _ZN9UniDrvImp4initEPKc(void);

/* Symbol: uni_drv_DbgLogEnable_INFO */
/* Demangled: uni_drv_DbgLogEnable_INFO */
extern void* uni_drv_DbgLogEnable_INFO;

/* Symbol: uni_drv_DbgLogEnable_VERBOSE */
/* Demangled: uni_drv_DbgLogEnable_VERBOSE */
extern void* uni_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9IspDrvImp14createInstanceE13ISP_HW_MODULE */
/* Demangled: IspDrvImp::createInstance(ISP_HW_MODULE) */
int _ZN9IspDrvImp14createInstanceE13ISP_HW_MODULE(void);

/* Symbol: _ZN9IspDrvImp9m_UserCntE */
/* Demangled: IspDrvImp::m_UserCnt */
extern void* _ZN9IspDrvImp9m_UserCntE;

/* Symbol: _ZTV9IspDrvImp */
/* Demangled: vtable for IspDrvImp */
extern void* _ZTV9IspDrvImp;

/* Symbol: _ZN11ISP_DRV_CAM19CQ_Allocate_method1Ej */
/* Demangled: ISP_DRV_CAM::CQ_Allocate_method1(unsigned int) */
int _ZN11ISP_DRV_CAM19CQ_Allocate_method1Ej(void);

/* Symbol: _ZN9IspDrvImp14m_IspInitMutexE */
/* Demangled: IspDrvImp::m_IspInitMutex */
extern void* _ZN9IspDrvImp14m_IspInitMutexE;

/* Symbol: _ZN9UniDrvImp7readRegEji */
/* Demangled: UniDrvImp::readReg(unsigned int, int) */
int _ZN9UniDrvImp7readRegEji(void);

/* Symbol: _ZN11ISP_DRV_CAM7DumpRegEi */
/* Demangled: ISP_DRV_CAM::DumpReg(int) */
int _ZN11ISP_DRV_CAM7DumpRegEi(void);

/* Symbol: _ZN11ISP_DRV_CAM7FSM_CHKEjPKc */
/* Demangled: ISP_DRV_CAM::FSM_CHK(unsigned int, char const*) */
int _ZN11ISP_DRV_CAM7FSM_CHKEjPKc(void);

/* Symbol: isp_drv_CAM_DbgLogEnable_WARN */
/* Demangled: isp_drv_CAM_DbgLogEnable_WARN */
extern void* isp_drv_CAM_DbgLogEnable_WARN;

/* Symbol: _ZN11IspDrvCamsv15destroyInstanceEv */
/* Demangled: IspDrvCamsv::destroyInstance() */
int _ZN11IspDrvCamsv15destroyInstanceEv(void);

/* Symbol: _ZN11ISP_DRV_CAM10getCQIonFDEv */
/* Demangled: ISP_DRV_CAM::getCQIonFD() */
int _ZN11ISP_DRV_CAM10getCQIonFDEv(void);

/* Symbol: _ZN11ISP_DRV_CAM11cqApbModuleEj */
/* Demangled: ISP_DRV_CAM::cqApbModule(unsigned int) */
int _ZN11ISP_DRV_CAM11cqApbModuleEj(void);

/* Symbol: _ZN11ISP_DRV_CAM13VirReg_OFFSETEj */
/* Demangled: ISP_DRV_CAM::VirReg_OFFSET(unsigned int) */
int _ZN11ISP_DRV_CAM13VirReg_OFFSETEj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMDRV_ISP_H */
