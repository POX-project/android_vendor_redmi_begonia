/*
 * Reverse-Engineered ABI Specification for: libcamdrv_twin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamdrv_twin.so
 */

#ifndef BEGONIA_RE_LIBCAMDRV_TWIN_H
#define BEGONIA_RE_LIBCAMDRV_TWIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN10TwinDrvImpC1Ev */
/* Demangled: TwinDrvImp::TwinDrvImp() */
int _ZN10TwinDrvImpC1Ev(void);

/* Symbol: _ZN10TwinDrvImpC2Ev */
/* Demangled: TwinDrvImp::TwinDrvImp() */
int _ZN10TwinDrvImpC2Ev(void);

/* Symbol: _ZN10TwinDrvImpD0Ev */
/* Demangled: TwinDrvImp::~TwinDrvImp() */
int _ZN10TwinDrvImpD0Ev(void);

/* Symbol: _ZN10TwinDrvImpD1Ev */
/* Demangled: TwinDrvImp::~TwinDrvImp() */
int _ZN10TwinDrvImpD1Ev(void);

/* Symbol: _ZN10TwinDrvImpD2Ev */
/* Demangled: TwinDrvImp::~TwinDrvImp() */
int _ZN10TwinDrvImpD2Ev(void);

/* Symbol: _ZTV10TwinDrvImp */
/* Demangled: vtable for TwinDrvImp */
extern void* _ZTV10TwinDrvImp;

/* Symbol: twin_drv_DbgLogEnable_VERBOSE */
/* Demangled: twin_drv_DbgLogEnable_VERBOSE */
extern void* twin_drv_DbgLogEnable_VERBOSE;

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _Z27dual_printf_platform_configPK21DUAL_IN_CONFIG_STRUCT */
/* Demangled: dual_printf_platform_config(DUAL_IN_CONFIG_STRUCT const*) */
int _Z27dual_printf_platform_configPK21DUAL_IN_CONFIG_STRUCT(void);

/* Symbol: _ZN10TwinDrvImp11getInstanceE13ISP_HW_MODULE */
/* Demangled: TwinDrvImp::getInstance(ISP_HW_MODULE) */
int _ZN10TwinDrvImp11getInstanceE13ISP_HW_MODULE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z13dual_cal_mainPK21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT */
/* Demangled: dual_cal_main(DUAL_IN_CONFIG_STRUCT const*, DUAL_OUT_CONFIG_STRUCT*) */
int _Z13dual_cal_mainPK21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _Z17dual_cal_platformP18ISP_REG_PTR_STRUCTP21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT */
/* Demangled: dual_cal_platform(ISP_REG_PTR_STRUCT*, DUAL_IN_CONFIG_STRUCT*, DUAL_OUT_CONFIG_STRUCT*) */
int _Z17dual_cal_platformP18ISP_REG_PTR_STRUCTP21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT(void);

/* Symbol: _ZN7TwinDrv14createInstanceE13ISP_HW_MODULE */
/* Demangled: TwinDrv::createInstance(ISP_HW_MODULE) */
int _ZN7TwinDrv14createInstanceE13ISP_HW_MODULE(void);

/* Symbol: _Z22dual_sel_check_supporti */
/* Demangled: dual_sel_check_support(int) */
int _Z22dual_sel_check_supporti(void);

/* Symbol: dual_cal_DbgLogEnable_VERBOSE */
/* Demangled: dual_cal_DbgLogEnable_VERBOSE */
extern void* dual_cal_DbgLogEnable_VERBOSE;

/* Symbol: twin_drv_DbgLogEnable_WARN */
/* Demangled: twin_drv_DbgLogEnable_WARN */
extern void* twin_drv_DbgLogEnable_WARN;

/* Symbol: dual_cal_DbgLogEnable_ASSERT */
/* Demangled: dual_cal_DbgLogEnable_ASSERT */
extern void* dual_cal_DbgLogEnable_ASSERT;

/* Symbol: _Z18dual_convert_inputiPK18ISP_REG_PTR_STRUCTP21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT */
/* Demangled: dual_convert_input(int, ISP_REG_PTR_STRUCT const*, DUAL_IN_CONFIG_STRUCT*, DUAL_OUT_CONFIG_STRUCT*) */
int _Z18dual_convert_inputiPK18ISP_REG_PTR_STRUCTP21DUAL_IN_CONFIG_STRUCTP22DUAL_OUT_CONFIG_STRUCT(void);

/* Symbol: _ZN10TwinDrvImp14configTwinParaEv */
/* Demangled: TwinDrvImp::configTwinPara() */
int _ZN10TwinDrvImp14configTwinParaEv(void);

/* Symbol: twin_drv_DbgLogEnable_INFO */
/* Demangled: twin_drv_DbgLogEnable_INFO */
extern void* twin_drv_DbgLogEnable_INFO;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _Z22dual_fprintf_in_configiPK21DUAL_IN_CONFIG_STRUCT */
/* Demangled: dual_fprintf_in_config(int, DUAL_IN_CONFIG_STRUCT const*) */
int _Z22dual_fprintf_in_configiPK21DUAL_IN_CONFIG_STRUCT(void);

/* Symbol: _ZN10TwinDrvImp4initE11E_TWIN_MODE */
/* Demangled: TwinDrvImp::init(E_TWIN_MODE) */
int _ZN10TwinDrvImp4initE11E_TWIN_MODE(void);

/* Symbol: _ZN10TwinDrvImp6uninitEv */
/* Demangled: TwinDrvImp::uninit() */
int _ZN10TwinDrvImp6uninitEv(void);

/* Symbol: dual_cal_DbgLogEnable_WARN */
/* Demangled: dual_cal_DbgLogEnable_WARN */
extern void* dual_cal_DbgLogEnable_WARN;

/* Symbol: _Z24dual_printf_platform_regPK18ISP_REG_PTR_STRUCT */
/* Demangled: dual_printf_platform_reg(ISP_REG_PTR_STRUCT const*) */
int _Z24dual_printf_platform_regPK18ISP_REG_PTR_STRUCT(void);

/* Symbol: _ZN10TwinDrvImp15destroyInstanceEv */
/* Demangled: TwinDrvImp::destroyInstance() */
int _ZN10TwinDrvImp15destroyInstanceEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: twin_drv_DbgLogEnable_ASSERT */
/* Demangled: twin_drv_DbgLogEnable_ASSERT */
extern void* twin_drv_DbgLogEnable_ASSERT;

/* Symbol: twin_drv_DbgLogEnable_DEBUG */
/* Demangled: twin_drv_DbgLogEnable_DEBUG */
extern void* twin_drv_DbgLogEnable_DEBUG;

/* Symbol: twin_drv_DbgLogEnable_ERROR */
/* Demangled: twin_drv_DbgLogEnable_ERROR */
extern void* twin_drv_DbgLogEnable_ERROR;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: dual_cal_DbgLogEnable_DEBUG */
/* Demangled: dual_cal_DbgLogEnable_DEBUG */
extern void* dual_cal_DbgLogEnable_DEBUG;

/* Symbol: dual_cal_DbgLogEnable_ERROR */
/* Demangled: dual_cal_DbgLogEnable_ERROR */
extern void* dual_cal_DbgLogEnable_ERROR;

/* Symbol: dual_cal_DbgLogEnable_INFO */
/* Demangled: dual_cal_DbgLogEnable_INFO */
extern void* dual_cal_DbgLogEnable_INFO;

/* Symbol: _Z19dual_convert_outputiP18ISP_REG_PTR_STRUCTPK21DUAL_IN_CONFIG_STRUCTPK22DUAL_OUT_CONFIG_STRUCT */
/* Demangled: dual_convert_output(int, ISP_REG_PTR_STRUCT*, DUAL_IN_CONFIG_STRUCT const*, DUAL_OUT_CONFIG_STRUCT const*) */
int _Z19dual_convert_outputiP18ISP_REG_PTR_STRUCTPK21DUAL_IN_CONFIG_STRUCTPK22DUAL_OUT_CONFIG_STRUCT(void);

/* Symbol: _Z21dual_fprintf_reg_dumpiPK18ISP_REG_PTR_STRUCT */
/* Demangled: dual_fprintf_reg_dump(int, ISP_REG_PTR_STRUCT const*) */
int _Z21dual_fprintf_reg_dumpiPK18ISP_REG_PTR_STRUCT(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMDRV_TWIN_H */
