/*
 * Reverse-Engineered ABI Specification for: libvcodec_utility.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvcodec_utility.so
 */

#ifndef BEGONIA_RE_LIBVCODEC_UTILITY_H
#define BEGONIA_RE_LIBVCODEC_UTILITY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: VCodecDrvPthread_attr_getdetachstate */
/* Demangled: VCodecDrvPthread_attr_getdetachstate */
int VCodecDrvPthread_attr_getdetachstate(void);

/* Symbol: VCodecDrvPthread_create */
/* Demangled: VCodecDrvPthread_create */
int VCodecDrvPthread_create(void);

/* Symbol: VENC_gceWaitEventThread */
/* Demangled: VENC_gceWaitEventThread */
int VENC_gceWaitEventThread(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: eVideoGCEAddCmdSecWrite */
/* Demangled: eVideoGCEAddCmdSecWrite */
int eVideoGCEAddCmdSecWrite(void);

/* Symbol: VCodecDrvPthread_mutex_lock */
/* Demangled: VCodecDrvPthread_mutex_lock */
int VCodecDrvPthread_mutex_lock(void);

/* Symbol: eVideoGceResetCmdBuf */
/* Demangled: eVideoGceResetCmdBuf */
int eVideoGceResetCmdBuf(void);

/* Symbol: eVideoMMPath */
/* Demangled: eVideoMMPath */
int eVideoMMPath(void);

/* Symbol: eVideoOpenIonDevFd */
/* Demangled: eVideoOpenIonDevFd */
int eVideoOpenIonDevFd(void);

/* Symbol: eHalGetMMAP */
/* Demangled: eHalGetMMAP */
int eHalGetMMAP(void);

/* Symbol: eBufEnable */
/* Demangled: eBufEnable */
int eBufEnable(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: gTempMem */
/* Demangled: gTempMem */
extern void* gTempMem;

/* Symbol: eBufGetSEGolomb */
/* Demangled: eBufGetSEGolomb */
int eBufGetSEGolomb(void);

/* Symbol: comhal_log_level */
/* Demangled: comhal_log_level */
extern void* comhal_log_level;

/* Symbol: VENC_ManageInputBuffer */
/* Demangled: VENC_ManageInputBuffer */
int VENC_ManageInputBuffer(void);

/* Symbol: VCodecDrvIntMalloc */
/* Demangled: VCodecDrvIntMalloc */
int VCodecDrvIntMalloc(void);

/* Symbol: VCodecDrvPthread_condattr_init */
/* Demangled: VCodecDrvPthread_condattr_init */
int VCodecDrvPthread_condattr_init(void);

/* Symbol: VCodecDrv_sem_destroy */
/* Demangled: VCodecDrv_sem_destroy */
int VCodecDrv_sem_destroy(void);

/* Symbol: _Z14cqueue_averageP11_CirQueue_siPd */
/* Demangled: cqueue_average(_CirQueue_s*, int, double*) */
int _Z14cqueue_averageP11_CirQueue_siPd(void);

/* Symbol: test_config */
/* Demangled: test_config */
extern void* test_config;

/* Symbol: eVideoMemFreeEx */
/* Demangled: eVideoMemFreeEx */
int eVideoMemFreeEx(void);

/* Symbol: mIonBufRefLock */
/* Demangled: mIonBufRefLock */
extern void* mIonBufRefLock;

/* Symbol: VCodecConfigMCIPort */
/* Demangled: VCodecConfigMCIPort */
int VCodecConfigMCIPort(void);

/* Symbol: mt_sched_setaffinity */
/* Demangled: mt_sched_setaffinity */
int mt_sched_setaffinity(void);

/* Symbol: _Z10cqueue_covP11_CirQueue_siPd */
/* Demangled: cqueue_cov(_CirQueue_s*, int, double*) */
int _Z10cqueue_covP11_CirQueue_siPd(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: eVideoGCEAddCmdWrite */
/* Demangled: eVideoGCEAddCmdWrite */
int eVideoGCEAddCmdWrite(void);

/* Symbol: VCodecDrvPthread_mutexattr_init */
/* Demangled: VCodecDrvPthread_mutexattr_init */
int VCodecDrvPthread_mutexattr_init(void);

/* Symbol: CirQueue_Create */
/* Demangled: CirQueue_Create */
int CirQueue_Create(void);

/* Symbol: _Z11clist_printP7_Node_s */
/* Demangled: clist_print(_Node_s*) */
int _Z11clist_printP7_Node_s(void);

/* Symbol: vVCCheckTargetType */
/* Demangled: vVCCheckTargetType */
int vVCCheckTargetType(void);

/* Symbol: VENC_DebugInit */
/* Demangled: VENC_DebugInit */
int VENC_DebugInit(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _Z16VCodecDrvRegSyncijm */
/* Demangled: VCodecDrvRegSync(int, unsigned int, unsigned long) */
int _Z16VCodecDrvRegSyncijm(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: eVideoMemUnMAP */
/* Demangled: eVideoMemUnMAP */
int eVideoMemUnMAP(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: eHalGetM4UModuleID */
/* Demangled: eHalGetM4UModuleID */
int eHalGetM4UModuleID(void);

/* Symbol: eVideoMemSet */
/* Demangled: eVideoMemSet */
int eVideoMemSet(void);

/* Symbol: VCodecDrvMemSet */
/* Demangled: VCodecDrvMemSet */
int VCodecDrvMemSet(void);

/* Symbol: VCodecDrvUnLockHW */
/* Demangled: VCodecDrvUnLockHW */
int VCodecDrvUnLockHW(void);

/* Symbol: _Z16cqueue_type_diffP11_CirQueue_sdii */
/* Demangled: cqueue_type_diff(_CirQueue_s*, double, int, int) */
int _Z16cqueue_type_diffP11_CirQueue_sdii(void);

/* Symbol: VENC_GetIdxOfGOP */
/* Demangled: VENC_GetIdxOfGOP */
int VENC_GetIdxOfGOP(void);

/* Symbol: eHalEMICtrl */
/* Demangled: eHalEMICtrl */
int eHalEMICtrl(void);

/* Symbol: eVideo_MutexunLock */
/* Demangled: eVideo_MutexunLock */
int eVideo_MutexunLock(void);

/* Symbol: VCodecDrvPaused */
/* Demangled: VCodecDrvPaused */
int VCodecDrvPaused(void);

/* Symbol: VCodecDrv_sem_wait */
/* Demangled: VCodecDrv_sem_wait */
int VCodecDrv_sem_wait(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: VCodecDrvDeInitHWLock */
/* Demangled: VCodecDrvDeInitHWLock */
int VCodecDrvDeInitHWLock(void);

/* Symbol: VCodecDrvPthread_mutex_init */
/* Demangled: VCodecDrvPthread_mutex_init */
int VCodecDrvPthread_mutex_init(void);

/* Symbol: VCodecDrv_sem_post */
/* Demangled: VCodecDrv_sem_post */
int VCodecDrv_sem_post(void);

/* Symbol: _Z16cqueue_push_typeP11_CirQueue_sdi */
/* Demangled: cqueue_push_type(_CirQueue_s*, double, int) */
int _Z16cqueue_push_typeP11_CirQueue_sdi(void);

/* Symbol: _Z21cqueue_timestamp_typeP11_CirQueue_si */
/* Demangled: cqueue_timestamp_type(_CirQueue_s*, int) */
int _Z21cqueue_timestamp_typeP11_CirQueue_si(void);

/* Symbol: VENC_BitRateAdjustment */
/* Demangled: VENC_BitRateAdjustment */
int VENC_BitRateAdjustment(void);

/* Symbol: VENC_PollHW */
/* Demangled: VENC_PollHW */
int VENC_PollHW(void);

/* Symbol: _Z14getTickCountMsv */
/* Demangled: getTickCountMs() */
int _Z14getTickCountMsv(void);

/* Symbol: eVideoGCEDeinit */
/* Demangled: eVideoGCEDeinit */
int eVideoGCEDeinit(void);

/* Symbol: eVideoStrStr */
/* Demangled: eVideoStrStr */
int eVideoStrStr(void);

/* Symbol: VENC_DumpMem */
/* Demangled: VENC_DumpMem */
int VENC_DumpMem(void);

/* Symbol: VENC_Profile */
/* Demangled: VENC_Profile */
int VENC_Profile(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: VCodecDrvPthread_cond_wait */
/* Demangled: VCodecDrvPthread_cond_wait */
int VCodecDrvPthread_cond_wait(void);

/* Symbol: VCodecDrvPthread_mutex_unlock */
/* Demangled: VCodecDrvPthread_mutex_unlock */
int VCodecDrvPthread_mutex_unlock(void);

/* Symbol: _Z20VDecCodecGetTotalYUVPv */
/* Demangled: VDecCodecGetTotalYUV(void*) */
int _Z20VDecCodecGetTotalYUVPv(void);

/* Symbol: _Z13cqueue_stddevP11_CirQueue_siPd */
/* Demangled: cqueue_stddev(_CirQueue_s*, int, double*) */
int _Z13cqueue_stddevP11_CirQueue_siPd(void);

/* Symbol: VENC_IsNonRefP */
/* Demangled: VENC_IsNonRefP */
int VENC_IsNonRefP(void);

/* Symbol: eVideoConfigMCIPort */
/* Demangled: eVideoConfigMCIPort */
int eVideoConfigMCIPort(void);

/* Symbol: VMPEG4EncCodecDrvUnLockHW */
/* Demangled: VMPEG4EncCodecDrvUnLockHW */
int VMPEG4EncCodecDrvUnLockHW(void);

/* Symbol: CirQueue_Destroy */
/* Demangled: CirQueue_Destroy */
int CirQueue_Destroy(void);

/* Symbol: eBufGetUEGolomb */
/* Demangled: eBufGetUEGolomb */
int eBufGetUEGolomb(void);

/* Symbol: drv_getchipname */
/* Demangled: drv_getchipname */
int drv_getchipname(void);

/* Symbol: VCodecDrvPthread_cond_broadcast */
/* Demangled: VCodecDrvPthread_cond_broadcast */
int VCodecDrvPthread_cond_broadcast(void);

/* Symbol: _Z20cqueue_peek_internalP11_CirQueue_sPdii */
/* Demangled: cqueue_peek_internal(_CirQueue_s*, double*, int, int) */
int _Z20cqueue_peek_internalP11_CirQueue_sPdii(void);

/* Symbol: VENC_gceEncodeEnd */
/* Demangled: VENC_gceEncodeEnd */
int VENC_gceEncodeEnd(void);

/* Symbol: eVideoMemAlloc */
/* Demangled: eVideoMemAlloc */
int eVideoMemAlloc(void);

/* Symbol: VCodecDrvInvalidateCachedBufferAll */
/* Demangled: VCodecDrvInvalidateCachedBufferAll */
int VCodecDrvInvalidateCachedBufferAll(void);

/* Symbol: VCodecDrvMemCopy */
/* Demangled: VCodecDrvMemCopy */
int VCodecDrvMemCopy(void);

/* Symbol: _Z17cqueue_type_deltaP11_CirQueue_sdi */
/* Demangled: cqueue_type_delta(_CirQueue_s*, double, int) */
int _Z17cqueue_type_deltaP11_CirQueue_sdi(void);

/* Symbol: VENC_DumpWorkBufAddr */
/* Demangled: VENC_DumpWorkBufAddr */
int VENC_DumpWorkBufAddr(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: VCodecDrvPthread_exit */
/* Demangled: VCodecDrvPthread_exit */
int VCodecDrvPthread_exit(void);

/* Symbol: VCodecDrvPthread_mutex_trylock */
/* Demangled: VCodecDrvPthread_mutex_trylock */
int VCodecDrvPthread_mutex_trylock(void);

/* Symbol: VENC_FlushRangeForIon */
/* Demangled: VENC_FlushRangeForIon */
int VENC_FlushRangeForIon(void);

/* Symbol: _Z17eSetVideoScenarioP23_VAL_CURRENT_SCENARIO_T */
/* Demangled: eSetVideoScenario(_VAL_CURRENT_SCENARIO_T*) */
int _Z17eSetVideoScenarioP23_VAL_CURRENT_SCENARIO_T(void);

/* Symbol: eHalDVFSDCMCtrl */
/* Demangled: eHalDVFSDCMCtrl */
int eHalDVFSDCMCtrl(void);

/* Symbol: OAL_SMP_BindingCore */
/* Demangled: OAL_SMP_BindingCore */
int OAL_SMP_BindingCore(void);

/* Symbol: _Z10clist_findP7_Node_si */
/* Demangled: clist_find(_Node_s*, int) */
int _Z10clist_findP7_Node_si(void);

/* Symbol: _Z12cqueue_printP11_CirQueue_s */
/* Demangled: cqueue_print(_CirQueue_s*) */
int _Z12cqueue_printP11_CirQueue_s(void);

/* Symbol: eVCodecDrvGetChipName */
/* Demangled: eVCodecDrvGetChipName */
int eVCodecDrvGetChipName(void);

/* Symbol: eVideoGcePutBuf2List */
/* Demangled: eVideoGcePutBuf2List */
int eVideoGcePutBuf2List(void);

/* Symbol: VCodecDrvInvalidateCachedBuffer */
/* Demangled: VCodecDrvInvalidateCachedBuffer */
int VCodecDrvInvalidateCachedBuffer(void);

/* Symbol: VCodecDrvSleep */
/* Demangled: VCodecDrvSleep */
int VCodecDrvSleep(void);

/* Symbol: _Z22VCodecDrvRegSyncWriteWjm */
/* Demangled: VCodecDrvRegSyncWriteW(unsigned int, unsigned long) */
int _Z22VCodecDrvRegSyncWriteWjm(void);

/* Symbol: eVideoGCEAddCmdMemMove */
/* Demangled: eVideoGCEAddCmdMemMove */
int eVideoGCEAddCmdMemMove(void);

/* Symbol: eVideoIntMemFree */
/* Demangled: eVideoIntMemFree */
int eVideoIntMemFree(void);

/* Symbol: VCodecDrvQueryPhysicalAddr */
/* Demangled: VCodecDrvQueryPhysicalAddr */
int VCodecDrvQueryPhysicalAddr(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: eVideoInitInputList */
/* Demangled: eVideoInitInputList */
int eVideoInitInputList(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: eVideoIncLogCount */
/* Demangled: eVideoIncLogCount */
int eVideoIncLogCount(void);

/* Symbol: eVideoIntMemAlloc */
/* Demangled: eVideoIntMemAlloc */
int eVideoIntMemAlloc(void);

/* Symbol: VCodecDrvSignal_SIGUSR1 */
/* Demangled: VCodecDrvSignal_SIGUSR1 */
int VCodecDrvSignal_SIGUSR1(void);

/* Symbol: _Z17cqueue_empty_typeP11_CirQueue_si */
/* Demangled: cqueue_empty_type(_CirQueue_s*, int) */
int _Z17cqueue_empty_typeP11_CirQueue_si(void);

/* Symbol: eBufDeinit */
/* Demangled: eBufDeinit */
int eBufDeinit(void);

/* Symbol: eBufGetBitStream */
/* Demangled: eBufGetBitStream */
int eBufGetBitStream(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z10cqueue_iqrP11_CirQueue_siPd */
/* Demangled: cqueue_iqr(_CirQueue_s*, int, double*) */
int _Z10cqueue_iqrP11_CirQueue_siPd(void);

/* Symbol: eBufGetBits */
/* Demangled: eBufGetBits */
int eBufGetBits(void);

/* Symbol: eVideoGCEInit */
/* Demangled: eVideoGCEInit */
int eVideoGCEInit(void);

/* Symbol: eVideoMMAP */
/* Demangled: eVideoMMAP */
int eVideoMMAP(void);

/* Symbol: _Z10clist_sizeP7_Node_s */
/* Demangled: clist_size(_Node_s*) */
int _Z10clist_sizeP7_Node_s(void);

/* Symbol: VPUD_VENC_fd */
/* Demangled: VPUD_VENC_fd */
extern void* VPUD_VENC_fd;

/* Symbol: VCodec_ValFd */
/* Demangled: VCodec_ValFd */
extern void* VCodec_ValFd;

/* Symbol: VCodecDrvAssertFail */
/* Demangled: VCodecDrvAssertFail */
int VCodecDrvAssertFail(void);

/* Symbol: VCodecDrvMemAllocAligned */
/* Demangled: VCodecDrvMemAllocAligned */
int VCodecDrvMemAllocAligned(void);

/* Symbol: memory_test */
/* Demangled: memory_test */
extern void* memory_test;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: getPA */
/* Demangled: getPA */
int getPA(void);

/* Symbol: VENC_ViLTE_Customize */
/* Demangled: VENC_ViLTE_Customize */
int VENC_ViLTE_Customize(void);

/* Symbol: eVideoBWLimit */
/* Demangled: eVideoBWLimit */
int eVideoBWLimit(void);

/* Symbol: VCodecDrvCoreNumber */
/* Demangled: VCodecDrvCoreNumber */
int VCodecDrvCoreNumber(void);

/* Symbol: VCodecDrvFlushInvalidateCacheBufferAll */
/* Demangled: VCodecDrvFlushInvalidateCacheBufferAll */
int VCodecDrvFlushInvalidateCacheBufferAll(void);

/* Symbol: _Z22VCodecDrvRegSyncWriteBjm */
/* Demangled: VCodecDrvRegSyncWriteB(unsigned int, unsigned long) */
int _Z22VCodecDrvRegSyncWriteBjm(void);

/* Symbol: _Z11cqueue_lastP11_CirQueue_sPd */
/* Demangled: cqueue_last(_CirQueue_s*, double*) */
int _Z11cqueue_lastP11_CirQueue_sPd(void);

/* Symbol: TransToMMGRoup */
/* Demangled: TransToMMGRoup */
int TransToMMGRoup(void);

/* Symbol: _Z17eVideoMemAllocSecP13_VAL_MEMORY_Tj */
/* Demangled: eVideoMemAllocSec(_VAL_MEMORY_T*, unsigned int) */
int _Z17eVideoMemAllocSecP13_VAL_MEMORY_Tj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: eVideoCloseIonDevFd */
/* Demangled: eVideoCloseIonDevFd */
int eVideoCloseIonDevFd(void);

/* Symbol: mmap_array */
/* Demangled: mmap_array */
extern void* mmap_array;

/* Symbol: _Z19cqueue_pop_internalP11_CirQueue_sPdiPi */
/* Demangled: cqueue_pop_internal(_CirQueue_s*, double*, int, int*) */
int _Z19cqueue_pop_internalP11_CirQueue_sPdiPi(void);

/* Symbol: eBufGetPAddr */
/* Demangled: eBufGetPAddr */
int eBufGetPAddr(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: eVideoGCEAddCmdPollAddr */
/* Demangled: eVideoGCEAddCmdPollAddr */
int eVideoGCEAddCmdPollAddr(void);

/* Symbol: eVideoVCodecCoreNumber */
/* Demangled: eVideoVCodecCoreNumber */
int eVideoVCodecCoreNumber(void);

/* Symbol: VCodecDrvPthread_mutexattr_destroy */
/* Demangled: VCodecDrvPthread_mutexattr_destroy */
int VCodecDrvPthread_mutexattr_destroy(void);

/* Symbol: mt_sched_exitaffinity */
/* Demangled: mt_sched_exitaffinity */
int mt_sched_exitaffinity(void);

/* Symbol: _Z13get_timestampd */
/* Demangled: get_timestamp(double) */
int _Z13get_timestampd(void);

/* Symbol: VENC_Is10BitMode */
/* Demangled: VENC_Is10BitMode */
int VENC_Is10BitMode(void);

/* Symbol: VENC_IsAFBCMode */
/* Demangled: VENC_IsAFBCMode */
int VENC_IsAFBCMode(void);

/* Symbol: VCodecDrvMemFree */
/* Demangled: VCodecDrvMemFree */
int VCodecDrvMemFree(void);

/* Symbol: eVideoInitOutputList */
/* Demangled: eVideoInitOutputList */
int eVideoInitOutputList(void);

/* Symbol: set_inst_tid */
/* Demangled: set_inst_tid */
int set_inst_tid(void);

/* Symbol: VENC_ReEncPrePost */
/* Demangled: VENC_ReEncPrePost */
int VENC_ReEncPrePost(void);

/* Symbol: VENC_SetParam_Scenario */
/* Demangled: VENC_SetParam_Scenario */
int VENC_SetParam_Scenario(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: VCodecDrvPthread_spin_unlock */
/* Demangled: VCodecDrvPthread_spin_unlock */
int VCodecDrvPthread_spin_unlock(void);

/* Symbol: VENC_gceEncodeFinal */
/* Demangled: VENC_gceEncodeFinal */
int VENC_gceEncodeFinal(void);

/* Symbol: eVideoGceAquireBuf */
/* Demangled: eVideoGceAquireBuf */
int eVideoGceAquireBuf(void);

/* Symbol: eVideoGetParam */
/* Demangled: eVideoGetParam */
int eVideoGetParam(void);

/* Symbol: eValDeInit */
/* Demangled: eValDeInit */
int eValDeInit(void);

/* Symbol: eVideoDeInitLockHW */
/* Demangled: eVideoDeInitLockHW */
int eVideoDeInitLockHW(void);

/* Symbol: eBufReadRegister */
/* Demangled: eBufReadRegister */
int eBufReadRegister(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: eValInit */
/* Demangled: eValInit */
int eValInit(void);

/* Symbol: eBufGetBitCnt */
/* Demangled: eBufGetBitCnt */
int eBufGetBitCnt(void);

/* Symbol: VENC_GetConfigMode */
/* Demangled: VENC_GetConfigMode */
int VENC_GetConfigMode(void);

/* Symbol: eVideoSetParam */
/* Demangled: eVideoSetParam */
int eVideoSetParam(void);

/* Symbol: VCodecDrvMMAP */
/* Demangled: VCodecDrvMMAP */
int VCodecDrvMMAP(void);

/* Symbol: _Z11cqueue_sizeP11_CirQueue_s */
/* Demangled: cqueue_size(_CirQueue_s*) */
int _Z11cqueue_sizeP11_CirQueue_s(void);

/* Symbol: VENC_DumpReg */
/* Demangled: VENC_DumpReg */
int VENC_DumpReg(void);

/* Symbol: VCodecDrvMemAllocAligned_NC */
/* Demangled: VCodecDrvMemAllocAligned_NC */
int VCodecDrvMemAllocAligned_NC(void);

/* Symbol: eVideoGceCopyCmdBuf */
/* Demangled: eVideoGceCopyCmdBuf */
int eVideoGceCopyCmdBuf(void);

/* Symbol: VCodecDrvCoreLoading */
/* Demangled: VCodecDrvCoreLoading */
int VCodecDrvCoreLoading(void);

/* Symbol: _Z15cqueue_pop_typeP11_CirQueue_sPdi */
/* Demangled: cqueue_pop_type(_CirQueue_s*, double*, int) */
int _Z15cqueue_pop_typeP11_CirQueue_sPdi(void);

/* Symbol: VPUD_OAL_fd */
/* Demangled: VPUD_OAL_fd */
extern void* VPUD_OAL_fd;

/* Symbol: _Z16clist_delete_keyPP7_Node_si */
/* Demangled: clist_delete_key(_Node_s**, int) */
int _Z16clist_delete_keyPP7_Node_si(void);

/* Symbol: _Z16cqueue_peek_typeP11_CirQueue_sPdi */
/* Demangled: cqueue_peek_type(_CirQueue_s*, double*, int) */
int _Z16cqueue_peek_typeP11_CirQueue_sPdi(void);

/* Symbol: eHalInit */
/* Demangled: eHalInit */
int eHalInit(void);

/* Symbol: VCodecDrvMemFree_NC */
/* Demangled: VCodecDrvMemFree_NC */
int VCodecDrvMemFree_NC(void);

/* Symbol: VCodecPrintf */
/* Demangled: VCodecPrintf */
int VCodecPrintf(void);

/* Symbol: VMPEG4EncCodecDrvLockHW */
/* Demangled: VMPEG4EncCodecDrvLockHW */
int VMPEG4EncCodecDrvLockHW(void);

/* Symbol: _Z21cqueue_empty_internalP11_CirQueue_si */
/* Demangled: cqueue_empty_internal(_CirQueue_s*, int) */
int _Z21cqueue_empty_internalP11_CirQueue_si(void);

/* Symbol: eHalDeInit */
/* Demangled: eHalDeInit */
int eHalDeInit(void);

/* Symbol: eBufInitBS */
/* Demangled: eBufInitBS */
int eBufInitBS(void);

/* Symbol: VCodecDrvAllocateBitstreamBuffer */
/* Demangled: VCodecDrvAllocateBitstreamBuffer */
int VCodecDrvAllocateBitstreamBuffer(void);

/* Symbol: _Z25cqueue_timestamp_internalP11_CirQueue_si */
/* Demangled: cqueue_timestamp_internal(_CirQueue_s*, int) */
int _Z25cqueue_timestamp_internalP11_CirQueue_si(void);

/* Symbol: eBufDisable */
/* Demangled: eBufDisable */
int eBufDisable(void);

/* Symbol: WaitISR */
/* Demangled: WaitISR */
int WaitISR(void);

/* Symbol: VCodecDrvPthread_mutex_destroy */
/* Demangled: VCodecDrvPthread_mutex_destroy */
int VCodecDrvPthread_mutex_destroy(void);

/* Symbol: tmphandle */
/* Demangled: tmphandle */
extern void* tmphandle;

/* Symbol: eVideoDeQueueOutput */
/* Demangled: eVideoDeQueueOutput */
int eVideoDeQueueOutput(void);

/* Symbol: eVideoQueueOutput */
/* Demangled: eVideoQueueOutput */
int eVideoQueueOutput(void);

/* Symbol: eVideoWaitGCECallBack */
/* Demangled: eVideoWaitGCECallBack */
int eVideoWaitGCECallBack(void);

/* Symbol: VCodecDrvPthread_condattr_destroy */
/* Demangled: VCodecDrvPthread_condattr_destroy */
int VCodecDrvPthread_condattr_destroy(void);

/* Symbol: i4IonDevFd */
/* Demangled: i4IonDevFd */
extern void* i4IonDevFd;

/* Symbol: eVideoUnMMAP */
/* Demangled: eVideoUnMMAP */
int eVideoUnMMAP(void);

/* Symbol: VCodecDrvPthread_spin_trylock */
/* Demangled: VCodecDrvPthread_spin_trylock */
int VCodecDrvPthread_spin_trylock(void);

/* Symbol: _Z24VDecCodecGetAvailableYUVPv */
/* Demangled: VDecCodecGetAvailableYUV(void*) */
int _Z24VDecCodecGetAvailableYUVPv(void);

/* Symbol: VENC_List_Dump */
/* Demangled: VENC_List_Dump */
int VENC_List_Dump(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: VH264DecCodecDrvUnLockHW */
/* Demangled: VH264DecCodecDrvUnLockHW */
int VH264DecCodecDrvUnLockHW(void);

/* Symbol: _Z16cqueue_timestampP11_CirQueue_s */
/* Demangled: cqueue_timestamp(_CirQueue_s*) */
int _Z16cqueue_timestampP11_CirQueue_s(void);

/* Symbol: VCodecDrvFlushCachedBuffer */
/* Demangled: VCodecDrvFlushCachedBuffer */
int VCodecDrvFlushCachedBuffer(void);

/* Symbol: eVideoMemCmp */
/* Demangled: eVideoMemCmp */
int eVideoMemCmp(void);

/* Symbol: eVideoMemDebugDeInit */
/* Demangled: eVideoMemDebugDeInit */
int eVideoMemDebugDeInit(void);

/* Symbol: VCodecDrvPthread_join */
/* Demangled: VCodecDrvPthread_join */
int VCodecDrvPthread_join(void);

/* Symbol: VCodecDrvUpdateBitstreamWP */
/* Demangled: VCodecDrvUpdateBitstreamWP */
int VCodecDrvUpdateBitstreamWP(void);

/* Symbol: VCodecDrv_sem_init */
/* Demangled: VCodecDrv_sem_init */
int VCodecDrv_sem_init(void);

/* Symbol: VENC_WriteHW */
/* Demangled: VENC_WriteHW */
int VENC_WriteHW(void);

/* Symbol: eVideoFlushCache */
/* Demangled: eVideoFlushCache */
int eVideoFlushCache(void);

/* Symbol: a_hHandle */
/* Demangled: a_hHandle */
extern void* a_hHandle;

/* Symbol: eHalEMICtrlForRecordSize */
/* Demangled: eHalEMICtrlForRecordSize */
int eHalEMICtrlForRecordSize(void);

/* Symbol: VCodecDrvCheck_Version */
/* Demangled: VCodecDrvCheck_Version */
int VCodecDrvCheck_Version(void);

/* Symbol: VCodecDrvPthread_kill */
/* Demangled: VCodecDrvPthread_kill */
int VCodecDrvPthread_kill(void);

/* Symbol: _Z22cqueue_update_internalP11_CirQueue_sdii */
/* Demangled: cqueue_update_internal(_CirQueue_s*, double, int, int) */
int _Z22cqueue_update_internalP11_CirQueue_sdii(void);

/* Symbol: eBufHwGetBits */
/* Demangled: eBufHwGetBits */
int eBufHwGetBits(void);

/* Symbol: VPUD_VDEC_fd */
/* Demangled: VPUD_VDEC_fd */
extern void* VPUD_VDEC_fd;

/* Symbol: VENC_GetHWRegBase */
/* Demangled: VENC_GetHWRegBase */
int VENC_GetHWRegBase(void);

/* Symbol: mutex_HwLock */
/* Demangled: mutex_HwLock */
extern void* mutex_HwLock;

/* Symbol: VCodecDrvPthread_cond_init */
/* Demangled: VCodecDrvPthread_cond_init */
int VCodecDrvPthread_cond_init(void);

/* Symbol: _Z16cqueue_serializeP11_CirQueue_sPKci */
/* Demangled: cqueue_serialize(_CirQueue_s*, char const*, int) */
int _Z16cqueue_serializeP11_CirQueue_sPKci(void);

/* Symbol: VENC_PrependHeader */
/* Demangled: VENC_PrependHeader */
int VENC_PrependHeader(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: vpud_log_level */
/* Demangled: vpud_log_level */
extern void* vpud_log_level;

/* Symbol: VENC_Get10BitSetting */
/* Demangled: VENC_Get10BitSetting */
int VENC_Get10BitSetting(void);

/* Symbol: eVideoVcodecGetCpuLoadingInfo */
/* Demangled: eVideoVcodecGetCpuLoadingInfo */
int eVideoVcodecGetCpuLoadingInfo(void);

/* Symbol: VENC_ManageFrameRef */
/* Demangled: VENC_ManageFrameRef */
int VENC_ManageFrameRef(void);

/* Symbol: eVideoAtoi */
/* Demangled: eVideoAtoi */
int eVideoAtoi(void);

/* Symbol: eVideoInvalidateCache */
/* Demangled: eVideoInvalidateCache */
int eVideoInvalidateCache(void);

/* Symbol: VENC_ReEncPreProc */
/* Demangled: VENC_ReEncPreProc */
int VENC_ReEncPreProc(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _Z15compare_descendPKvS0_ */
/* Demangled: compare_descend(void const*, void const*) */
int _Z15compare_descendPKvS0_(void);

/* Symbol: eBufGetBufSize */
/* Demangled: eBufGetBufSize */
int eBufGetBufSize(void);

/* Symbol: VH264DecCodecDrvWaitISR */
/* Demangled: VH264DecCodecDrvWaitISR */
int VH264DecCodecDrvWaitISR(void);

/* Symbol: eVideoDeInitInputList */
/* Demangled: eVideoDeInitInputList */
int eVideoDeInitInputList(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: VCodecDrvGetAffinity */
/* Demangled: VCodecDrvGetAffinity */
int VCodecDrvGetAffinity(void);

/* Symbol: _g_memalloc_init */
/* Demangled: _g_memalloc_init */
extern void* _g_memalloc_init;

/* Symbol: _Z12clist_insertPP7_Node_sS1_i7_Elem_s */
/* Demangled: clist_insert(_Node_s**, _Node_s**, int, _Elem_s) */
int _Z12clist_insertPP7_Node_sS1_i7_Elem_s(void);

/* Symbol: _Z16cqueue_type_markP11_CirQueue_sdi */
/* Demangled: cqueue_type_mark(_CirQueue_s*, double, int) */
int _Z16cqueue_type_markP11_CirQueue_sdi(void);

/* Symbol: eVideoGceReleaseBuf */
/* Demangled: eVideoGceReleaseBuf */
int eVideoGceReleaseBuf(void);

/* Symbol: _Z11cqueue_peekP11_CirQueue_sPd */
/* Demangled: cqueue_peek(_CirQueue_s*, double*) */
int _Z11cqueue_peekP11_CirQueue_sPd(void);

/* Symbol: _Z16cqueue_last_typeP11_CirQueue_sPdi */
/* Demangled: cqueue_last_type(_CirQueue_s*, double*, int) */
int _Z16cqueue_last_typeP11_CirQueue_sPdi(void);

/* Symbol: _Z28VDecCodecGetAvailableDisplayPv */
/* Demangled: VDecCodecGetAvailableDisplay(void*) */
int _Z28VDecCodecGetAvailableDisplayPv(void);

/* Symbol: _Z20cqueue_size_internalP11_CirQueue_si */
/* Demangled: cqueue_size_internal(_CirQueue_s*, int) */
int _Z20cqueue_size_internalP11_CirQueue_si(void);

/* Symbol: VENC_gceResourceInit */
/* Demangled: VENC_gceResourceInit */
int VENC_gceResourceInit(void);

/* Symbol: VCodecDrvQueryMemType */
/* Demangled: VCodecDrvQueryMemType */
int VCodecDrvQueryMemType(void);

/* Symbol: eValRet */
/* Demangled: eValRet */
extern void* eValRet;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: VCodecDrvBindingCore */
/* Demangled: VCodecDrvBindingCore */
int VCodecDrvBindingCore(void);

/* Symbol: VCodecDrvUnMMAP */
/* Demangled: VCodecDrvUnMMAP */
int VCodecDrvUnMMAP(void);

/* Symbol: VMPEG4EncCodecDrvWaitISR */
/* Demangled: VMPEG4EncCodecDrvWaitISR */
int VMPEG4EncCodecDrvWaitISR(void);

/* Symbol: VENC_DumpEncParam */
/* Demangled: VENC_DumpEncParam */
int VENC_DumpEncParam(void);

/* Symbol: VENC_WriteHWSEC */
/* Demangled: VENC_WriteHWSEC */
int VENC_WriteHWSEC(void);

/* Symbol: _Z10cqueue_popP11_CirQueue_sPdPi */
/* Demangled: cqueue_pop(_CirQueue_s*, double*, int*) */
int _Z10cqueue_popP11_CirQueue_sPdPi(void);

/* Symbol: VENC_GetSourceScanType */
/* Demangled: VENC_GetSourceScanType */
int VENC_GetSourceScanType(void);

/* Symbol: getIONhandle */
/* Demangled: getIONhandle */
int getIONhandle(void);

/* Symbol: _Z21cqueue_timestamp_markP11_CirQueue_sPdi */
/* Demangled: cqueue_timestamp_mark(_CirQueue_s*, double*, int) */
int _Z21cqueue_timestamp_markP11_CirQueue_sPdi(void);

/* Symbol: vcodec_get_log_obj */
/* Demangled: vcodec_get_log_obj */
int vcodec_get_log_obj(void);

/* Symbol: VENC_PollHWAddr */
/* Demangled: VENC_PollHWAddr */
int VENC_PollHWAddr(void);

/* Symbol: VCodecDrvPthread_attr_destroy */
/* Demangled: VCodecDrvPthread_attr_destroy */
int VCodecDrvPthread_attr_destroy(void);

/* Symbol: VCodecDrvPthread_spin_lock */
/* Demangled: VCodecDrvPthread_spin_lock */
int VCodecDrvPthread_spin_lock(void);

/* Symbol: VCodecDrvWaitISR */
/* Demangled: VCodecDrvWaitISR */
int VCodecDrvWaitISR(void);

/* Symbol: eBufNextBits */
/* Demangled: eBufNextBits */
int eBufNextBits(void);

/* Symbol: CirQueue_Clone */
/* Demangled: CirQueue_Clone */
int CirQueue_Clone(void);

/* Symbol: _Z12clist_deleteP7_Node_s */
/* Demangled: clist_delete(_Node_s*) */
int _Z12clist_deleteP7_Node_s(void);

/* Symbol: _Z20cqueue_push_internalP11_CirQueue_sdi */
/* Demangled: cqueue_push_internal(_CirQueue_s*, double, int) */
int _Z20cqueue_push_internalP11_CirQueue_sdi(void);

/* Symbol: VENC_GetRefPDistance */
/* Demangled: VENC_GetRefPDistance */
int VENC_GetRefPDistance(void);

/* Symbol: VENC_gceResourceDeInit */
/* Demangled: VENC_gceResourceDeInit */
int VENC_gceResourceDeInit(void);

/* Symbol: i4IonBufRefCnt */
/* Demangled: i4IonBufRefCnt */
extern void* i4IonBufRefCnt;

/* Symbol: VCodecDrvPthread_spin_destroy */
/* Demangled: VCodecDrvPthread_spin_destroy */
int VCodecDrvPthread_spin_destroy(void);

/* Symbol: eBufCheckEOF */
/* Demangled: eBufCheckEOF */
int eBufCheckEOF(void);

/* Symbol: eVideoVcodecSetThreadID */
/* Demangled: eVideoVcodecSetThreadID */
int eVideoVcodecSetThreadID(void);

/* Symbol: eVideo_MutexLock */
/* Demangled: eVideo_MutexLock */
int eVideo_MutexLock(void);

/* Symbol: _Z14compare_ascendPKvS0_ */
/* Demangled: compare_ascend(void const*, void const*) */
int _Z14compare_ascendPKvS0_(void);

/* Symbol: eVideoMemAllocEx */
/* Demangled: eVideoMemAllocEx */
int eVideoMemAllocEx(void);

/* Symbol: eVideoMemCpy */
/* Demangled: eVideoMemCpy */
int eVideoMemCpy(void);

/* Symbol: vcodec_public_dbg_level */
/* Demangled: vcodec_public_dbg_level */
extern void* vcodec_public_dbg_level;

/* Symbol: eVideoVCodecCoreLoading */
/* Demangled: eVideoVCodecCoreLoading */
int eVideoVCodecCoreLoading(void);

/* Symbol: VCodecDrvFlushCachedBufferAll */
/* Demangled: VCodecDrvFlushCachedBufferAll */
int VCodecDrvFlushCachedBufferAll(void);

/* Symbol: eVideoInitLockHW */
/* Demangled: eVideoInitLockHW */
int eVideoInitLockHW(void);

/* Symbol: CirQueue_CreateByMemory */
/* Demangled: CirQueue_CreateByMemory */
int CirQueue_CreateByMemory(void);

/* Symbol: _Z11cqueue_pushP11_CirQueue_sd */
/* Demangled: cqueue_push(_CirQueue_s*, double) */
int _Z11cqueue_pushP11_CirQueue_sd(void);

/* Symbol: eHalCmdProc */
/* Demangled: eHalCmdProc */
int eHalCmdProc(void);

/* Symbol: eVideoGetM4UModuleID */
/* Demangled: eVideoGetM4UModuleID */
int eVideoGetM4UModuleID(void);

/* Symbol: eVideoSetGCECmdFlush */
/* Demangled: eVideoSetGCECmdFlush */
int eVideoSetGCECmdFlush(void);

/* Symbol: get_dev_fd */
/* Demangled: get_dev_fd */
int get_dev_fd(void);

/* Symbol: VCodecDrvPthread_self */
/* Demangled: VCodecDrvPthread_self */
int VCodecDrvPthread_self(void);

/* Symbol: NextBytesAlignment */
/* Demangled: NextBytesAlignment */
int NextBytesAlignment(void);

/* Symbol: eVideoGCEAddCmdRead */
/* Demangled: eVideoGCEAddCmdRead */
int eVideoGCEAddCmdRead(void);

/* Symbol: VCodecDrvPthread_once */
/* Demangled: VCodecDrvPthread_once */
int VCodecDrvPthread_once(void);

/* Symbol: vcodec_vpud_dbg_log */
/* Demangled: vcodec_vpud_dbg_log */
extern void* vcodec_vpud_dbg_log;

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: eVideoGetTimeOfDay */
/* Demangled: eVideoGetTimeOfDay */
int eVideoGetTimeOfDay(void);

/* Symbol: VCodecDrvPthread_spin_init */
/* Demangled: VCodecDrvPthread_spin_init */
int VCodecDrvPthread_spin_init(void);

/* Symbol: VDecCodecQueryInfo */
/* Demangled: VDecCodecQueryInfo */
int VDecCodecQueryInfo(void);

/* Symbol: _Z12cqueue_emptyP11_CirQueue_s */
/* Demangled: cqueue_empty(_CirQueue_s*) */
int _Z12cqueue_emptyP11_CirQueue_s(void);

/* Symbol: _Z14cqueue_isemptyP11_CirQueue_s */
/* Demangled: cqueue_isempty(_CirQueue_s*) */
int _Z14cqueue_isemptyP11_CirQueue_s(void);

/* Symbol: VENC_DebugDump */
/* Demangled: VENC_DebugDump */
int VENC_DebugDump(void);

/* Symbol: _Z16eVideoMemFreeSecP13_VAL_MEMORY_Tj */
/* Demangled: eVideoMemFreeSec(_VAL_MEMORY_T*, unsigned int) */
int _Z16eVideoMemFreeSecP13_VAL_MEMORY_Tj(void);

/* Symbol: eVideoUnLockHW */
/* Demangled: eVideoUnLockHW */
int eVideoUnLockHW(void);

/* Symbol: VCodecDrvPthread_attr_setdetachstate */
/* Demangled: VCodecDrvPthread_attr_setdetachstate */
int VCodecDrvPthread_attr_setdetachstate(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: eVideoMemDebugInit */
/* Demangled: eVideoMemDebugInit */
int eVideoMemDebugInit(void);

/* Symbol: VCodecDrvPthread_cond_destroy */
/* Demangled: VCodecDrvPthread_cond_destroy */
int VCodecDrvPthread_cond_destroy(void);

/* Symbol: _Z15cqueue_capacityP11_CirQueue_s */
/* Demangled: cqueue_capacity(_CirQueue_s*) */
int _Z15cqueue_capacityP11_CirQueue_s(void);

/* Symbol: eBufInit */
/* Demangled: eBufInit */
int eBufInit(void);

/* Symbol: VENC_ReadHW */
/* Demangled: VENC_ReadHW */
int VENC_ReadHW(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: eVideoGCESetWaitDoneCB */
/* Demangled: eVideoGCESetWaitDoneCB */
int eVideoGCESetWaitDoneCB(void);

/* Symbol: VCodecDrvPthread_attr_init */
/* Demangled: VCodecDrvPthread_attr_init */
int VCodecDrvPthread_attr_init(void);

/* Symbol: _Z21cqueue_timestamp_diffP11_CirQueue_sii */
/* Demangled: cqueue_timestamp_diff(_CirQueue_s*, int, int) */
int _Z21cqueue_timestamp_diffP11_CirQueue_sii(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: eBufReInite */
/* Demangled: eBufReInite */
int eBufReInite(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: eVideoGCEAddCmdPollReg */
/* Demangled: eVideoGCEAddCmdPollReg */
int eVideoGCEAddCmdPollReg(void);

/* Symbol: eVideoMemMAP */
/* Demangled: eVideoMemMAP */
int eVideoMemMAP(void);

/* Symbol: intmemorysize */
/* Demangled: intmemorysize */
extern void* intmemorysize;

/* Symbol: VENC_DebugDeinit */
/* Demangled: VENC_DebugDeinit */
int VENC_DebugDeinit(void);

/* Symbol: eVideoLockHW */
/* Demangled: eVideoLockHW */
int eVideoLockHW(void);

/* Symbol: VCodecDrvLockHW */
/* Demangled: VCodecDrvLockHW */
int VCodecDrvLockHW(void);

/* Symbol: VH264DecCodecDrvLockHW */
/* Demangled: VH264DecCodecDrvLockHW */
int VH264DecCodecDrvLockHW(void);

/* Symbol: mt_sched_getaffinity */
/* Demangled: mt_sched_getaffinity */
int mt_sched_getaffinity(void);

/* Symbol: _Z19cqueue_average_typeP11_CirQueue_siPdi */
/* Demangled: cqueue_average_type(_CirQueue_s*, int, double*, int) */
int _Z19cqueue_average_typeP11_CirQueue_siPdi(void);

/* Symbol: eVideoDeInitOutputList */
/* Demangled: eVideoDeInitOutputList */
int eVideoDeInitOutputList(void);

/* Symbol: eVideoGCEAddCmdWaitEvent */
/* Demangled: eVideoGCEAddCmdWaitEvent */
int eVideoGCEAddCmdWaitEvent(void);

/* Symbol: VCodecDrvIntFree */
/* Demangled: VCodecDrvIntFree */
int VCodecDrvIntFree(void);

/* Symbol: VCodecDrvReleaseYUV */
/* Demangled: VCodecDrvReleaseYUV */
int VCodecDrvReleaseYUV(void);

/* Symbol: VCodecDrvSwitchMemType */
/* Demangled: VCodecDrvSwitchMemType */
int VCodecDrvSwitchMemType(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: VCodecDrvPthread_cond_signal */
/* Demangled: VCodecDrvPthread_cond_signal */
int VCodecDrvPthread_cond_signal(void);

/* Symbol: _Z22VCodecDrvRegSyncWriteLjm */
/* Demangled: VCodecDrvRegSyncWriteL(unsigned int, unsigned long) */
int _Z22VCodecDrvRegSyncWriteLjm(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: eVideoMemFree */
/* Demangled: eVideoMemFree */
int eVideoMemFree(void);

/* Symbol: VCodecDrvDeBindingCore */
/* Demangled: VCodecDrvDeBindingCore */
int VCodecDrvDeBindingCore(void);

/* Symbol: _Z32VDecCodecGetRealAvailableDisplayPv */
/* Demangled: VDecCodecGetRealAvailableDisplay(void*) */
int _Z32VDecCodecGetRealAvailableDisplayPv(void);

/* Symbol: _Z18clist_delete_indexPP7_Node_si */
/* Demangled: clist_delete_index(_Node_s**, int) */
int _Z18clist_delete_indexPP7_Node_si(void);

/* Symbol: _Z25cqueue_serialize_internalP11_CirQueue_sPKcii */
/* Demangled: cqueue_serialize_internal(_CirQueue_s*, char const*, int, int) */
int _Z25cqueue_serialize_internalP11_CirQueue_sPKcii(void);

/* Symbol: Prepare32BitsForH264 */
/* Demangled: Prepare32BitsForH264 */
int Prepare32BitsForH264(void);

/* Symbol: eHalMCDICtrl */
/* Demangled: eHalMCDICtrl */
int eHalMCDICtrl(void);

/* Symbol: Prepare32BitsNormal */
/* Demangled: Prepare32BitsNormal */
int Prepare32BitsNormal(void);

/* Symbol: vcodec_ipi_log_handler */
/* Demangled: vcodec_ipi_log_handler */
int vcodec_ipi_log_handler(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: VCodecDrvInitHWLock */
/* Demangled: VCodecDrvInitHWLock */
int VCodecDrvInitHWLock(void);

/* Symbol: mutex_MEMLock */
/* Demangled: mutex_MEMLock */
extern void* mutex_MEMLock;

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVCODEC_UTILITY_H */
