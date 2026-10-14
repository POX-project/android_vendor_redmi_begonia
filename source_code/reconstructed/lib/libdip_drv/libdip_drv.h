/*
 * Reverse-Engineered ABI Specification for: libdip_drv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdip_drv.so
 */

#ifndef BEGONIA_RE_LIBDIP_DRV_H
#define BEGONIA_RE_LIBDIP_DRV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12VirDipDrvImp15getCQModuleInfoEjRjS0_ */
/* Demangled: VirDipDrvImp::getCQModuleInfo(unsigned int, unsigned int&, unsigned int&) */
int _ZN12VirDipDrvImp15getCQModuleInfoEjRjS0_(void);

/* Symbol: _ZN12VirDipDrvImp19getCQDescBufVirAddrEv */
/* Demangled: VirDipDrvImp::getCQDescBufVirAddr() */
int _ZN12VirDipDrvImp19getCQDescBufVirAddrEv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_INFO */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_INFO */
extern void* isp_drv_dip_phy_DbgLogEnable_INFO;

/* Symbol: _ZN9WpeDrvImp7readRegEji */
/* Demangled: WpeDrvImp::readReg(unsigned int, int) */
int _ZN9WpeDrvImp7readRegEji(void);

/* Symbol: _ZN12VirDipDrvImp15getCQDescBufOftEv */
/* Demangled: VirDipDrvImp::getCQDescBufOft() */
int _ZN12VirDipDrvImp15getCQDescBufOftEv(void);

/* Symbol: _ZN12VirDipDrvImp19setIspVirRegVirAddrEPj */
/* Demangled: VirDipDrvImp::setIspVirRegVirAddr(unsigned int*) */
int _ZN12VirDipDrvImp19setIspVirRegVirAddrEPj(void);

/* Symbol: crz_drv_DbgLogEnable_INFO */
/* Demangled: crz_drv_DbgLogEnable_INFO */
extern void* crz_drv_DbgLogEnable_INFO;

/* Symbol: _ZN12VirDipDrvImp11cqDelModuleEj */
/* Demangled: VirDipDrvImp::cqDelModule(unsigned int) */
int _ZN12VirDipDrvImp11cqDelModuleEj(void);

/* Symbol: _ZN9CrzDrvImp11CDRZ_ConfigE17CRZ_DRV_MODE_ENUM23CRZ_DRV_IMG_SIZE_STRUCTS1_23CRZ_DRV_IMG_CROP_STRUCT */
/* Demangled: CrzDrvImp::CDRZ_Config(CRZ_DRV_MODE_ENUM, CRZ_DRV_IMG_SIZE_STRUCT, CRZ_DRV_IMG_SIZE_STRUCT, CRZ_DRV_IMG_CROP_STRUCT) */
int _ZN9CrzDrvImp11CDRZ_ConfigE17CRZ_DRV_MODE_ENUM23CRZ_DRV_IMG_SIZE_STRUCTS1_23CRZ_DRV_IMG_CROP_STRUCT(void);

/* Symbol: wpe_drv_DbgLogEnable_DEBUG */
/* Demangled: wpe_drv_DbgLogEnable_DEBUG */
extern void* wpe_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZTV9CrzDrvImp */
/* Demangled: vtable for CrzDrvImp */
extern void* _ZTV9CrzDrvImp;

/* Symbol: _ZN9WpeDrvImp4initEPKc */
/* Demangled: WpeDrvImp::init(char const*) */
int _ZN9WpeDrvImp4initEPKc(void);

/* Symbol: wpe_drv_DbgLogEnable_WARN */
/* Demangled: wpe_drv_DbgLogEnable_WARN */
extern void* wpe_drv_DbgLogEnable_WARN;

/* Symbol: _ZN9CrzDrvImpD0Ev */
/* Demangled: CrzDrvImp::~CrzDrvImp() */
int _ZN9CrzDrvImpD0Ev(void);

/* Symbol: crz_drv_DbgLogEnable_VERBOSE */
/* Demangled: crz_drv_DbgLogEnable_VERBOSE */
extern void* crz_drv_DbgLogEnable_VERBOSE;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: isp_drv_dip_DbgLogEnable_WARN */
/* Demangled: isp_drv_dip_DbgLogEnable_WARN */
extern void* isp_drv_dip_DbgLogEnable_WARN;

/* Symbol: _ZN12PhyDipDrvImp9writeRegsEjjPji */
/* Demangled: PhyDipDrvImp::writeRegs(unsigned int, unsigned int, unsigned int*, int) */
int _ZN12PhyDipDrvImp9writeRegsEjjPji(void);

/* Symbol: _ZN9CrzDrvImpD1Ev */
/* Demangled: CrzDrvImp::~CrzDrvImp() */
int _ZN9CrzDrvImpD1Ev(void);

/* Symbol: _ZN9WpeDrvImp9waitDequeEv */
/* Demangled: WpeDrvImp::waitDeque() */
int _ZN9WpeDrvImp9waitDequeEv(void);

/* Symbol: _ZN9WpeDrvImpC1Ev */
/* Demangled: WpeDrvImp::WpeDrvImp() */
int _ZN9WpeDrvImpC1Ev(void);

/* Symbol: _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >::__push_back_slow_path<WPE_Config const&>(WPE_Config const&) */
int _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN12VirDipDrvImp15setCQDescBufOftEj */
/* Demangled: VirDipDrvImp::setCQDescBufOft(unsigned int) */
int _ZN12VirDipDrvImp15setCQDescBufOftEj(void);

/* Symbol: _ZN12VirDipDrvImp19getIspVirRegVirAddrEv */
/* Demangled: VirDipDrvImp::getIspVirRegVirAddr() */
int _ZN12VirDipDrvImp19getIspVirRegVirAddrEv(void);

/* Symbol: _ZN9CrzDrvImpC1Ev */
/* Demangled: CrzDrvImp::CrzDrvImp() */
int _ZN9CrzDrvImpC1Ev(void);

/* Symbol: _ZN9CrzDrvImpD2Ev */
/* Demangled: CrzDrvImp::~CrzDrvImp() */
int _ZN9CrzDrvImpD2Ev(void);

/* Symbol: crz_drv_DbgLogEnable_ASSERT */
/* Demangled: crz_drv_DbgLogEnable_ASSERT */
extern void* crz_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN6WpeDrv4m_FdE */
/* Demangled: WpeDrv::m_Fd */
extern void* _ZN6WpeDrv4m_FdE;

/* Symbol: _ZN9WpeDrvImp9getRWModeEv */
/* Demangled: WpeDrvImp::getRWMode() */
int _ZN9WpeDrvImp9getRWModeEv(void);

/* Symbol: _ZN9WpeDrvImpC2Ev */
/* Demangled: WpeDrvImp::WpeDrvImp() */
int _ZN9WpeDrvImpC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferI10WPE_ConfigRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<WPE_Config, std::__1::allocator<WPE_Config>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<WPE_Config>&) */
int _ZNSt3__114__split_bufferI10WPE_ConfigRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZN12VirDipDrvImp7readRegEji */
/* Demangled: VirDipDrvImp::readReg(unsigned int, int) */
int _ZN12VirDipDrvImp7readRegEji(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_ERROR */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_ERROR */
extern void* isp_drv_dip_phy_DbgLogEnable_ERROR;

/* Symbol: _ZN9CrzDrvImpC2Ev */
/* Demangled: CrzDrvImp::CrzDrvImp() */
int _ZN9CrzDrvImpC2Ev(void);

/* Symbol: _ZN9WpeDrvImp9setRWModeE15WPE_DRV_RW_MODE */
/* Demangled: WpeDrvImp::setRWMode(WPE_DRV_RW_MODE) */
int _ZN9WpeDrvImp9setRWModeE15WPE_DRV_RW_MODE(void);

/* Symbol: _ZN9WpeDrvImp9writeRegsEP21WPE_DRV_REG_IO_STRUCTji */
/* Demangled: WpeDrvImp::writeRegs(WPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9WpeDrvImp9writeRegsEP21WPE_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZN12VirDipDrvImp19getIspVirRegPhyAddrEv */
/* Demangled: VirDipDrvImp::getIspVirRegPhyAddr() */
int _ZN12VirDipDrvImp19getIspVirRegPhyAddrEv(void);

/* Symbol: _ZN12PhyDipDrvImp13setDeviceInfoE13E_DEVICE_INFOPh */
/* Demangled: PhyDipDrvImp::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
int _ZN12PhyDipDrvImp13setDeviceInfoE13E_DEVICE_INFOPh(void);

/* Symbol: _ZN12PhyDipDrvImp8writeRegEjmi */
/* Demangled: PhyDipDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN12PhyDipDrvImp8writeRegEjmi(void);

/* Symbol: _ZN9CrzDrvImp9SetIspDrvEP6DipDrv */
/* Demangled: CrzDrvImp::SetIspDrv(DipDrv*) */
int _ZN9CrzDrvImp9SetIspDrvEP6DipDrv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9CrzDrvImp12ResetDefaultEv */
/* Demangled: CrzDrvImp::ResetDefault() */
int _ZN9CrzDrvImp12ResetDefaultEv(void);

/* Symbol: crz_drv_DbgLogEnable_DEBUG */
/* Demangled: crz_drv_DbgLogEnable_DEBUG */
extern void* crz_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN9WpeDrvImp8dequeWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE */
/* Demangled: WpeDrvImp::dequeWPE(std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >&) */
int _ZN9WpeDrvImp8dequeWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE(void);

/* Symbol: wpe_drv_DbgLogEnable_INFO */
/* Demangled: wpe_drv_DbgLogEnable_INFO */
extern void* wpe_drv_DbgLogEnable_INFO;

/* Symbol: wpe_drv_DbgLogEnable_VERBOSE */
/* Demangled: wpe_drv_DbgLogEnable_VERBOSE */
extern void* wpe_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN6DipDrv20getVirDipDrvInstanceE13DIP_HW_MODULEPv */
/* Demangled: DipDrv::getVirDipDrvInstance(DIP_HW_MODULE, void*) */
int _ZN6DipDrv20getVirDipDrvInstanceE13DIP_HW_MODULEPv(void);

/* Symbol: _ZTV12PhyDipDrvImp */
/* Demangled: vtable for PhyDipDrvImp */
extern void* _ZTV12PhyDipDrvImp;

/* Symbol: _ZN12PhyDipDrvImp14createInstanceE13DIP_HW_MODULE */
/* Demangled: PhyDipDrvImp::createInstance(DIP_HW_MODULE) */
int _ZN12PhyDipDrvImp14createInstanceE13DIP_HW_MODULE(void);

/* Symbol: _ZN6DipDrv14createInstanceE13DIP_HW_MODULE */
/* Demangled: DipDrv::createInstance(DIP_HW_MODULE) */
int _ZN6DipDrv14createInstanceE13DIP_HW_MODULE(void);

/* Symbol: _ZN12VirDipDrvImp19setCQDescBufPhyAddrEPj */
/* Demangled: VirDipDrvImp::setCQDescBufPhyAddr(unsigned int*) */
int _ZN12VirDipDrvImp19setCQDescBufPhyAddrEPj(void);

/* Symbol: isp_drv_dip_DbgLogEnable_INFO */
/* Demangled: isp_drv_dip_DbgLogEnable_INFO */
extern void* isp_drv_dip_DbgLogEnable_INFO;

/* Symbol: _ZN12PhyDipDrvImp12dumpDipHwRegEP23IspDumpDbgLogDipPackage */
/* Demangled: PhyDipDrvImp::dumpDipHwReg(IspDumpDbgLogDipPackage*) */
int _ZN12PhyDipDrvImp12dumpDipHwRegEP23IspDumpDbgLogDipPackage(void);

/* Symbol: _ZN6CrzDrv14CreateInstanceEv */
/* Demangled: CrzDrv::CreateInstance() */
int _ZN6CrzDrv14CreateInstanceEv(void);

/* Symbol: _ZN9WpeDrvImp11getInstanceEv */
/* Demangled: WpeDrvImp::getInstance() */
int _ZN9WpeDrvImp11getInstanceEv(void);

/* Symbol: _ZN12VirDipDrvImp9writeRegsEjjPji */
/* Demangled: VirDipDrvImp::writeRegs(unsigned int, unsigned int, unsigned int*, int) */
int _ZN12VirDipDrvImp9writeRegsEjjPji(void);

/* Symbol: _ZN9CrzDrvImp11GetInstanceEb */
/* Demangled: CrzDrvImp::GetInstance(bool) */
int _ZN9CrzDrvImp11GetInstanceEb(void);

/* Symbol: _ZN9WpeDrvImp8enqueWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE */
/* Demangled: WpeDrvImp::enqueWPE(std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >&) */
int _ZN9WpeDrvImp8enqueWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN9CrzDrvImp5ResetEv */
/* Demangled: CrzDrvImp::Reset() */
int _ZN9CrzDrvImp5ResetEv(void);

/* Symbol: _ZN9WpeDrvImp9m_UserCntE */
/* Demangled: WpeDrvImp::m_UserCnt */
extern void* _ZN9WpeDrvImp9m_UserCntE;

/* Symbol: _ZN12VirDipDrvImp11dumpCQTableEv */
/* Demangled: VirDipDrvImp::dumpCQTable() */
int _ZN12VirDipDrvImp11dumpCQTableEv(void);

/* Symbol: _ZN12VirDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: VirDipDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN12VirDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: isp_drv_dip_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_dip_DbgLogEnable_VERBOSE */
extern void* isp_drv_dip_DbgLogEnable_VERBOSE;

/* Symbol: _ZN12PhyDipDrvImp9setRWModeE15ISP_DRV_RW_MODE */
/* Demangled: PhyDipDrvImp::setRWMode(ISP_DRV_RW_MODE) */
int _ZN12PhyDipDrvImp9setRWModeE15ISP_DRV_RW_MODE(void);

/* Symbol: _ZN9CrzDrvImp13CDRZ_UnconfigEv */
/* Demangled: CrzDrvImp::CDRZ_Unconfig() */
int _ZN9CrzDrvImp13CDRZ_UnconfigEv(void);

/* Symbol: _ZN12VirDipDrvImp19setIspVirRegPhyAddrEPj */
/* Demangled: VirDipDrvImp::setIspVirRegPhyAddr(unsigned int*) */
int _ZN12VirDipDrvImp19setIspVirRegPhyAddrEPj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN9CrzDrvImp4InitEv */
/* Demangled: CrzDrvImp::Init() */
int _ZN9CrzDrvImp4InitEv(void);

/* Symbol: _ZN9CrzDrvImp9CalOffsetE17CRZ_DRV_ALGO_ENUMijfPjS1_S1_S1_ */
/* Demangled: CrzDrvImp::CalOffset(CRZ_DRV_ALGO_ENUM, int, unsigned int, float, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN9CrzDrvImp9CalOffsetE17CRZ_DRV_ALGO_ENUMijfPjS1_S1_S1_(void);

/* Symbol: isp_drv_DbgLogEnable_ERROR */
/* Demangled: isp_drv_DbgLogEnable_ERROR */
extern void* isp_drv_DbgLogEnable_ERROR;

/* Symbol: isp_drv_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_DbgLogEnable_VERBOSE */
extern void* isp_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN12VirDipDrvImp15getIspVirRegOftEv */
/* Demangled: VirDipDrvImp::getIspVirRegOft() */
int _ZN12VirDipDrvImp15getIspVirRegOftEv(void);

/* Symbol: isp_drv_dip_DbgLogEnable_ERROR */
/* Demangled: isp_drv_dip_DbgLogEnable_ERROR */
extern void* isp_drv_dip_DbgLogEnable_ERROR;

/* Symbol: _ZN9WpeDrvImp16waitWPEFrameDoneEji */
/* Demangled: WpeDrvImp::waitWPEFrameDone(unsigned int, int) */
int _ZN9WpeDrvImp16waitWPEFrameDoneEji(void);

/* Symbol: wpe_drv_DbgLogEnable_ASSERT */
/* Demangled: wpe_drv_DbgLogEnable_ASSERT */
extern void* wpe_drv_DbgLogEnable_ASSERT;

/* Symbol: _ZN12PhyDipDrvImp10setMemInfoEjmPjj */
/* Demangled: PhyDipDrvImp::setMemInfo(unsigned int, unsigned long, unsigned int*, unsigned int) */
int _ZN12PhyDipDrvImp10setMemInfoEjmPjj(void);

/* Symbol: _ZN9CrzDrvImp10CheckReadyEv */
/* Demangled: CrzDrvImp::CheckReady() */
int _ZN9CrzDrvImp10CheckReadyEv(void);

/* Symbol: _ZN12VirDipDrvImp19getCQDescBufPhyAddrEv */
/* Demangled: VirDipDrvImp::getCQDescBufPhyAddr() */
int _ZN12VirDipDrvImp19getCQDescBufPhyAddrEv(void);

/* Symbol: _ZN12VirDipDrvImp19setCQDescBufVirAddrEP9cq_desc_t */
/* Demangled: VirDipDrvImp::setCQDescBufVirAddr(cq_desc_t*) */
int _ZN12VirDipDrvImp19setCQDescBufVirAddrEP9cq_desc_t(void);

/* Symbol: _ZN12PhyDipDrvImp15loadInitSettingEv */
/* Demangled: PhyDipDrvImp::loadInitSetting() */
int _ZN12PhyDipDrvImp15loadInitSettingEv(void);

/* Symbol: _ZN12PhyDipDrvImp7readRegEji */
/* Demangled: PhyDipDrvImp::readReg(unsigned int, int) */
int _ZN12PhyDipDrvImp7readRegEji(void);

/* Symbol: _ZN12PhyDipDrvImp7waitIrqEP15DIP_WAIT_IRQ_ST */
/* Demangled: PhyDipDrvImp::waitIrq(DIP_WAIT_IRQ_ST*) */
int _ZN12PhyDipDrvImp7waitIrqEP15DIP_WAIT_IRQ_ST(void);

/* Symbol: _ZN12PhyDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: PhyDipDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN12PhyDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_VERBOSE */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_VERBOSE */
extern void* isp_drv_dip_phy_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe18g_WPE_UnitTest_NumE */
/* Demangled: NSCam::NSIoPipe::g_WPE_UnitTest_Num */
extern void* _ZN5NSCam8NSIoPipe18g_WPE_UnitTest_NumE;

/* Symbol: _ZN12PhyDipDrvImp17getCurHWRegValuesEv */
/* Demangled: PhyDipDrvImp::getCurHWRegValues() */
int _ZN12PhyDipDrvImp17getCurHWRegValuesEv(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_DEBUG */
extern void* isp_drv_dip_phy_DbgLogEnable_DEBUG;

/* Symbol: _ZN6WpeDrv14createInstanceEv */
/* Demangled: WpeDrv::createInstance() */
int _ZN6WpeDrv14createInstanceEv(void);

/* Symbol: _ZN9WpeDrvImp6uninitEPKc */
/* Demangled: WpeDrvImp::uninit(char const*) */
int _ZN9WpeDrvImp6uninitEPKc(void);

/* Symbol: _ZN12VirDipDrvImpC1Ev */
/* Demangled: VirDipDrvImp::VirDipDrvImp() */
int _ZN12VirDipDrvImpC1Ev(void);

/* Symbol: _ZN12PhyDipDrvImp4initEPKc */
/* Demangled: PhyDipDrvImp::init(char const*) */
int _ZN12PhyDipDrvImp4initEPKc(void);

/* Symbol: _ZN9CrzDrvImp15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_ */
/* Demangled: CrzDrvImp::CalAlgoAndCStep(CRZ_DRV_MODE_ENUM, CRZ_DRV_RZ_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CRZ_DRV_ALGO_ENUM*, CRZ_DRV_ALGO_ENUM*, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN9CrzDrvImp15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_(void);

/* Symbol: _ZN12VirDipDrvImpC2Ev */
/* Demangled: VirDipDrvImp::VirDipDrvImp() */
int _ZN12VirDipDrvImpC2Ev(void);

/* Symbol: _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >::__swap_out_circular_buffer(std::__1::__split_buffer<WPE_Config, std::__1::allocator<WPE_Config>&>&) */
int _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: isp_drv_DbgLogEnable_WARN */
/* Demangled: isp_drv_DbgLogEnable_WARN */
extern void* isp_drv_DbgLogEnable_WARN;

/* Symbol: _ZN12VirDipDrvImp15setIspVirRegOftEj */
/* Demangled: VirDipDrvImp::setIspVirRegOft(unsigned int) */
int _ZN12VirDipDrvImp15setIspVirRegOftEj(void);

/* Symbol: _ZN9CrzDrvImp6UninitEv */
/* Demangled: CrzDrvImp::Uninit() */
int _ZN9CrzDrvImp6UninitEv(void);

/* Symbol: _ZN9WpeDrvImp8readRegsEP21WPE_DRV_REG_IO_STRUCTji */
/* Demangled: WpeDrvImp::readRegs(WPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN9WpeDrvImp8readRegsEP21WPE_DRV_REG_IO_STRUCTji(void);

/* Symbol: wpe_drv_DbgLogEnable_ERROR */
/* Demangled: wpe_drv_DbgLogEnable_ERROR */
extern void* wpe_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN12VirDipDrvImp11cqAddModuleEj */
/* Demangled: VirDipDrvImp::cqAddModule(unsigned int) */
int _ZN12VirDipDrvImp11cqAddModuleEj(void);

/* Symbol: _ZN12PhyDipDrvImp6uninitEPKc */
/* Demangled: PhyDipDrvImp::uninit(char const*) */
int _ZN12PhyDipDrvImp6uninitEPKc(void);

/* Symbol: _ZN12VirDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: VirDipDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN12VirDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_ASSERT */
extern void* isp_drv_dip_phy_DbgLogEnable_ASSERT;

/* Symbol: _ZN9CrzDrvImp15DestroyInstanceEv */
/* Demangled: CrzDrvImp::DestroyInstance() */
int _ZN9CrzDrvImp15DestroyInstanceEv(void);

/* Symbol: _ZN9CrzDrvImp7DumpRegEv */
/* Demangled: CrzDrvImp::DumpReg() */
int _ZN9CrzDrvImp7DumpRegEv(void);

/* Symbol: _ZN9WpeDrvImp13setDeviceInfoE17E_WPE_DEVICE_INFOPh */
/* Demangled: WpeDrvImp::setDeviceInfo(E_WPE_DEVICE_INFO, unsigned char*) */
int _ZN9WpeDrvImp13setDeviceInfoE17E_WPE_DEVICE_INFOPh(void);

/* Symbol: _ZN9WpeDrvImp10m_UserNameE */
/* Demangled: WpeDrvImp::m_UserName */
extern void* _ZN9WpeDrvImp10m_UserNameE;

/* Symbol: _ZN9WpeDrvImp7waitIrqEP19WPE_WAIT_IRQ_STRUCT */
/* Demangled: WpeDrvImp::waitIrq(WPE_WAIT_IRQ_STRUCT*) */
int _ZN9WpeDrvImp7waitIrqEP19WPE_WAIT_IRQ_STRUCT(void);

/* Symbol: _ZN9WpeDrvImp8writeRegEjmi */
/* Demangled: WpeDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN9WpeDrvImp8writeRegEjmi(void);

/* Symbol: _ZTV9WpeDrvImp */
/* Demangled: vtable for WpeDrvImp */
extern void* _ZTV9WpeDrvImp;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN12PhyDipDrvImp14getDipDumpInfoERjS0_S0_ */
/* Demangled: PhyDipDrvImp::getDipDumpInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN12PhyDipDrvImp14getDipDumpInfoERjS0_S0_(void);

/* Symbol: _ZN12PhyDipDrvImp8clearIrqEP16DIP_CLEAR_IRQ_ST */
/* Demangled: PhyDipDrvImp::clearIrq(DIP_CLEAR_IRQ_ST*) */
int _ZN12PhyDipDrvImp8clearIrqEP16DIP_CLEAR_IRQ_ST(void);

/* Symbol: isp_drv_dip_phy_DbgLogEnable_WARN */
/* Demangled: isp_drv_dip_phy_DbgLogEnable_WARN */
extern void* isp_drv_dip_phy_DbgLogEnable_WARN;

/* Symbol: _ZN9WpeDrvImp14m_WpeInitMutexE */
/* Demangled: WpeDrvImp::m_WpeInitMutex */
extern void* _ZN9WpeDrvImp14m_WpeInitMutexE;

/* Symbol: _ZN9WpeDrvImp15m_pWpeHwRegAddrE */
/* Demangled: WpeDrvImp::m_pWpeHwRegAddr */
extern void* _ZN9WpeDrvImp15m_pWpeHwRegAddrE;

/* Symbol: _ZN12VirDipDrvImp8writeRegEjmi */
/* Demangled: VirDipDrvImp::writeReg(unsigned int, unsigned long, int) */
int _ZN12VirDipDrvImp8writeRegEjmi(void);

/* Symbol: _ZN12PhyDipDrvImp9signalIrqEP15DIP_WAIT_IRQ_ST */
/* Demangled: PhyDipDrvImp::signalIrq(DIP_WAIT_IRQ_ST*) */
int _ZN12PhyDipDrvImp9signalIrqEP15DIP_WAIT_IRQ_ST(void);

/* Symbol: crz_drv_DbgLogEnable_WARN */
/* Demangled: crz_drv_DbgLogEnable_WARN */
extern void* crz_drv_DbgLogEnable_WARN;

/* Symbol: _ZN12VirDipDrvImp14createInstanceE13DIP_HW_MODULEPv */
/* Demangled: VirDipDrvImp::createInstance(DIP_HW_MODULE, void*) */
int _ZN12VirDipDrvImp14createInstanceE13DIP_HW_MODULEPv(void);

/* Symbol: isp_drv_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_DbgLogEnable_ASSERT */
extern void* isp_drv_DbgLogEnable_ASSERT;

/* Symbol: isp_drv_DbgLogEnable_INFO */
/* Demangled: isp_drv_DbgLogEnable_INFO */
extern void* isp_drv_DbgLogEnable_INFO;

/* Symbol: isp_drv_dip_DbgLogEnable_ASSERT */
/* Demangled: isp_drv_dip_DbgLogEnable_ASSERT */
extern void* isp_drv_dip_DbgLogEnable_ASSERT;

/* Symbol: _ZN12PhyDipDrvImpC1Ev */
/* Demangled: PhyDipDrvImp::PhyDipDrvImp() */
int _ZN12PhyDipDrvImpC1Ev(void);

/* Symbol: _ZN9WpeDrvImp8clearIrqEP20WPE_CLEAR_IRQ_STRUCT */
/* Demangled: WpeDrvImp::clearIrq(WPE_CLEAR_IRQ_STRUCT*) */
int _ZN9WpeDrvImp8clearIrqEP20WPE_CLEAR_IRQ_STRUCT(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: isp_drv_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_DbgLogEnable_DEBUG */
extern void* isp_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN12VirDipDrvImp15destroyInstanceEv */
/* Demangled: VirDipDrvImp::destroyInstance() */
int _ZN12VirDipDrvImp15destroyInstanceEv(void);

/* Symbol: isp_drv_dip_DbgLogEnable_DEBUG */
/* Demangled: isp_drv_dip_DbgLogEnable_DEBUG */
extern void* isp_drv_dip_DbgLogEnable_DEBUG;

/* Symbol: _ZN12PhyDipDrvImp9getRWModeEv */
/* Demangled: PhyDipDrvImp::getRWMode() */
int _ZN12PhyDipDrvImp9getRWModeEv(void);

/* Symbol: _ZN12PhyDipDrvImpC2Ev */
/* Demangled: PhyDipDrvImp::PhyDipDrvImp() */
int _ZN12PhyDipDrvImpC2Ev(void);

/* Symbol: crz_drv_DbgLogEnable_ERROR */
/* Demangled: crz_drv_DbgLogEnable_ERROR */
extern void* crz_drv_DbgLogEnable_ERROR;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN12PhyDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji */
/* Demangled: PhyDipDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
int _ZN12PhyDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void);

/* Symbol: _ZTV12VirDipDrvImp */
/* Demangled: vtable for VirDipDrvImp */
extern void* _ZTV12VirDipDrvImp;

/* Symbol: _ZN6WpeDrv11m_regRWModeE */
/* Demangled: WpeDrv::m_regRWMode */
extern void* _ZN6WpeDrv11m_regRWModeE;

__END_DECLS

#endif /* BEGONIA_RE_LIBDIP_DRV_H */
