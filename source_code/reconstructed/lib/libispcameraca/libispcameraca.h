/*
 * Reverse-Engineered ABI Specification for: libispcameraca.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libispcameraca.so
 */

#ifndef BEGONIA_RE_LIBISPCAMERACA_H
#define BEGONIA_RE_LIBISPCAMERACA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MtkSecISP_tlcGetSecCam */
/* Demangled: MtkSecISP_tlcGetSecCam */
int MtkSecISP_tlcGetSecCam(void);

/* Symbol: MtkSecISP_tlcMigrateTable */
/* Demangled: MtkSecISP_tlcMigrateTable */
int MtkSecISP_tlcMigrateTable(void);

/* Symbol: MtkSecISP_tlcQueryPAFromHandle */
/* Demangled: MtkSecISP_tlcQueryPAFromHandle */
int MtkSecISP_tlcQueryPAFromHandle(void);

/* Symbol: _Z17updateTimeProfilei23E_MTKSECISP_TA_FUNC_IDXP14SecMgr_SecInfo */
/* Demangled: updateTimeProfile(int, E_MTKSECISP_TA_FUNC_IDX, SecMgr_SecInfo*) */
int _Z17updateTimeProfilei23E_MTKSECISP_TA_FUNC_IDXP14SecMgr_SecInfo(void);

/* Symbol: gSecISPInit */
/* Demangled: gSecISPInit */
extern void* gSecISPInit;

/* Symbol: MtkSecISP_tlcInit */
/* Demangled: MtkSecISP_tlcInit */
int MtkSecISP_tlcInit(void);

/* Symbol: MtkSecISP_tlcQueryMVAFromHandle */
/* Demangled: MtkSecISP_tlcQueryMVAFromHandle */
int MtkSecISP_tlcQueryMVAFromHandle(void);

/* Symbol: MtkSecISP_tlcReadReg */
/* Demangled: MtkSecISP_tlcReadReg */
int MtkSecISP_tlcReadReg(void);

/* Symbol: gISPHandle */
/* Demangled: gISPHandle */
extern void* gISPHandle;

/* Symbol: g_ion_fd */
/* Demangled: g_ion_fd */
extern void* g_ion_fd;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: MtkSecISP_tlcQueryFHPA */
/* Demangled: MtkSecISP_tlcQueryFHPA */
int MtkSecISP_tlcQueryFHPA(void);

/* Symbol: MtkSecISP_tlcWriteReg */
/* Demangled: MtkSecISP_tlcWriteReg */
int MtkSecISP_tlcWriteReg(void);

/* Symbol: g_sys_data */
/* Demangled: g_sys_data */
extern void* g_sys_data;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: MtkSecISP_tlcDumpReg */
/* Demangled: MtkSecISP_tlcDumpReg */
int MtkSecISP_tlcDumpReg(void);

/* Symbol: MtkSecISP_tlcOpen */
/* Demangled: MtkSecISP_tlcOpen */
int MtkSecISP_tlcOpen(void);

/* Symbol: MtkSecISP_tlcMigrateFromTable */
/* Demangled: MtkSecISP_tlcMigrateFromTable */
int MtkSecISP_tlcMigrateFromTable(void);

/* Symbol: MtkSecISP_tlcQueryHWInfo */
/* Demangled: MtkSecISP_tlcQueryHWInfo */
int MtkSecISP_tlcQueryHWInfo(void);

/* Symbol: _Z10image_dumpPcPvi */
/* Demangled: image_dump(char*, void*, int) */
int _Z10image_dumpPcPvi(void);

/* Symbol: global_mem_session */
/* Demangled: global_mem_session */
extern void* global_mem_session;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: MtkSecISP_registerShareMemTest */
/* Demangled: MtkSecISP_registerShareMemTest */
int MtkSecISP_registerShareMemTest(void);

/* Symbol: MtkSecISP_tlcHandleCreate */
/* Demangled: MtkSecISP_tlcHandleCreate */
int MtkSecISP_tlcHandleCreate(void);

/* Symbol: MtkSecISP_tlcUnregisterShareMem */
/* Demangled: MtkSecISP_tlcUnregisterShareMem */
int MtkSecISP_tlcUnregisterShareMem(void);

/* Symbol: gSecMasterCam */
/* Demangled: gSecMasterCam */
extern void* gSecMasterCam;

/* Symbol: MtkSecISP_tlcSecConfig */
/* Demangled: MtkSecISP_tlcSecConfig */
int MtkSecISP_tlcSecConfig(void);

/* Symbol: MtkSecISP_tlcUnInit */
/* Demangled: MtkSecISP_tlcUnInit */
int MtkSecISP_tlcUnInit(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: MtkSecISP_tlcClose */
/* Demangled: MtkSecISP_tlcClose */
int MtkSecISP_tlcClose(void);

/* Symbol: MtkSecISP_tlcDumpSecmem */
/* Demangled: MtkSecISP_tlcDumpSecmem */
int MtkSecISP_tlcDumpSecmem(void);

/* Symbol: MtkSecISP_tlcSetSecCam */
/* Demangled: MtkSecISP_tlcSetSecCam */
int MtkSecISP_tlcSetSecCam(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: g_ion_handle */
/* Demangled: g_ion_handle */
extern void* g_ion_handle;

/* Symbol: global_function_session */
/* Demangled: global_function_session */
extern void* global_function_session;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: MtkSecISP_tlcRegisterShareMem */
/* Demangled: MtkSecISP_tlcRegisterShareMem */
int MtkSecISP_tlcRegisterShareMem(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBISPCAMERACA_H */
