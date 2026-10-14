/*
 * Reverse-Engineered ABI Specification for: libcamdrv_tuning_mgr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamdrv_tuning_mgr.so
 */

#ifndef BEGONIA_RE_LIBCAMDRV_TUNING_MGR_H
#define BEGONIA_RE_LIBCAMDRV_TUNING_MGR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12TuningMgrImp11enqueBufferEv */
/* Demangled: TuningMgrImp::enqueBuffer() */
int _ZN12TuningMgrImp11enqueBufferEv(void);

/* Symbol: _ZN12TuningMgrImp12enableEngineE14ETuningMgrFuncij */
/* Demangled: TuningMgrImp::enableEngine(ETuningMgrFunc, int, unsigned int) */
int _ZN12TuningMgrImp12enableEngineE14ETuningMgrFuncij(void);

/* Symbol: _ZN12TuningMgrImp14updateEngineFDE14ETuningMgrFuncjij */
/* Demangled: TuningMgrImp::updateEngineFD(ETuningMgrFunc, unsigned int, int, unsigned int) */
int _ZN12TuningMgrImp14updateEngineFDE14ETuningMgrFuncjij(void);

/* Symbol: _ZN12TuningMgrImp20tuningMgrReadReg_UniEjj */
/* Demangled: TuningMgrImp::tuningMgrReadReg_Uni(unsigned int, unsigned int) */
int _ZN12TuningMgrImp20tuningMgrReadReg_UniEjj(void);

/* Symbol: _ZN9TuningMgr11getInstanceEj */
/* Demangled: TuningMgr::getInstance(unsigned int) */
int _ZN9TuningMgr11getInstanceEj(void);

/* Symbol: tuning_mgr_DbgLogEnable_ASSERT */
/* Demangled: tuning_mgr_DbgLogEnable_ASSERT */
extern void* tuning_mgr_DbgLogEnable_ASSERT;

/* Symbol: tuning_drv_DbgLogEnable_DEBUG */
/* Demangled: tuning_drv_DbgLogEnable_DEBUG */
extern void* tuning_drv_DbgLogEnable_DEBUG;

/* Symbol: tuning_drv_DbgLogEnable_INFO */
/* Demangled: tuning_drv_DbgLogEnable_INFO */
extern void* tuning_drv_DbgLogEnable_INFO;

/* Symbol: _ZN12TuningMgrImp11dequeBufferEPiS0_ */
/* Demangled: TuningMgrImp::dequeBuffer(int*, int*) */
int _ZN12TuningMgrImp11dequeBufferEPiS0_(void);

/* Symbol: tuning_drv_DbgLogEnable_VERBOSE */
/* Demangled: tuning_drv_DbgLogEnable_VERBOSE */
extern void* tuning_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN12TuningMgrImpC1Ev */
/* Demangled: TuningMgrImp::TuningMgrImp() */
int _ZN12TuningMgrImpC1Ev(void);

/* Symbol: tuning_mgr_DbgLogEnable_INFO */
/* Demangled: tuning_mgr_DbgLogEnable_INFO */
extern void* tuning_mgr_DbgLogEnable_INFO;

/* Symbol: _ZNSt3__16vectorIP14stTuningNode_tNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<stTuningNode_t*, std::__1::allocator<stTuningNode_t*> >::__swap_out_circular_buffer(std::__1::__split_buffer<stTuningNode_t*, std::__1::allocator<stTuningNode_t*>&>&) */
int _ZNSt3__16vectorIP14stTuningNode_tNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN12TuningMgrImp18tuningMgrWriteRegsEP24TUNING_MGR_REG_IO_STRUCTij */
/* Demangled: TuningMgrImp::tuningMgrWriteRegs(TUNING_MGR_REG_IO_STRUCT*, int, unsigned int) */
int _ZN12TuningMgrImp18tuningMgrWriteRegsEP24TUNING_MGR_REG_IO_STRUCTij(void);

/* Symbol: _ZN12TuningMgrImpD0Ev */
/* Demangled: TuningMgrImp::~TuningMgrImp() */
int _ZN12TuningMgrImpD0Ev(void);

/* Symbol: _ZN12TuningDrvImp15searchTuningQueE14ETuningDrvUserPi */
/* Demangled: TuningDrvImp::searchTuningQue(ETuningDrvUser, int*) */
int _ZN12TuningDrvImp15searchTuningQueE14ETuningDrvUserPi(void);

/* Symbol: _ZN12TuningDrvImp16getIsApplyTuningE14ETuningDrvUser */
/* Demangled: TuningDrvImp::getIsApplyTuning(ETuningDrvUser) */
int _ZN12TuningDrvImp16getIsApplyTuningE14ETuningDrvUser(void);

/* Symbol: _ZN12TuningDrvImp21searchVerifyTuningQueE14ETuningDrvUseriRP14stTuningNode_t */
/* Demangled: TuningDrvImp::searchVerifyTuningQue(ETuningDrvUser, int, stTuningNode_t*&) */
int _ZN12TuningDrvImp21searchVerifyTuningQueE14ETuningDrvUseriRP14stTuningNode_t(void);

/* Symbol: _ZN12TuningDrvImpC2Ev */
/* Demangled: TuningDrvImp::TuningDrvImp() */
int _ZN12TuningDrvImpC2Ev(void);

/* Symbol: _ZTV12TuningDrvImp */
/* Demangled: vtable for TuningDrvImp */
extern void* _ZTV12TuningDrvImp;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN12TuningMgrImp12tuningEngineE14ETuningMgrFuncij */
/* Demangled: TuningMgrImp::tuningEngine(ETuningMgrFunc, int, unsigned int) */
int _ZN12TuningMgrImp12tuningEngineE14ETuningMgrFuncij(void);

/* Symbol: _ZN12TuningMgrImp6uninitEPKc */
/* Demangled: TuningMgrImp::uninit(char const*) */
int _ZN12TuningMgrImp6uninitEPKc(void);

/* Symbol: _ZN12TuningDrvImp11deTuningQueE14ETuningDrvUserPiS1_RNSt3__16vectorIP14stTuningNode_tNS2_9allocatorIS5_EEEE */
/* Demangled: TuningDrvImp::deTuningQue(ETuningDrvUser, int*, int*, std::__1::vector<stTuningNode_t*, std::__1::allocator<stTuningNode_t*> >&) */
int _ZN12TuningDrvImp11deTuningQueE14ETuningDrvUserPiS1_RNSt3__16vectorIP14stTuningNode_tNS2_9allocatorIS5_EEEE(void);

/* Symbol: _ZN12TuningDrvImp4initEPKc14ETuningDrvUserj */
/* Demangled: TuningDrvImp::init(char const*, ETuningDrvUser, unsigned int) */
int _ZN12TuningDrvImp4initEPKc14ETuningDrvUserj(void);

/* Symbol: _ZN12TuningMgrImp14dumpTuningInfoEii */
/* Demangled: TuningMgrImp::dumpTuningInfo(int, int) */
int _ZN12TuningMgrImp14dumpTuningInfoEii(void);

/* Symbol: _ZN12TuningMgrImp16tuningMgrReadRegEjj */
/* Demangled: TuningMgrImp::tuningMgrReadReg(unsigned int, unsigned int) */
int _ZN12TuningMgrImp16tuningMgrReadRegEjj(void);

/* Symbol: _ZN12TuningMgrImp22tuningMgrWriteRegs_UniEP24TUNING_MGR_REG_IO_STRUCTij */
/* Demangled: TuningMgrImp::tuningMgrWriteRegs_Uni(TUNING_MGR_REG_IO_STRUCT*, int, unsigned int) */
int _ZN12TuningMgrImp22tuningMgrWriteRegs_UniEP24TUNING_MGR_REG_IO_STRUCTij(void);

/* Symbol: _ZN12TuningDrvImp11enTuningQueE14ETuningDrvUser */
/* Demangled: TuningDrvImp::enTuningQue(ETuningDrvUser) */
int _ZN12TuningDrvImp11enTuningQueE14ETuningDrvUser(void);

/* Symbol: _ZN12TuningDrvImp16deTuningQueByDrvE14ETuningDrvUserPiRNSt3__16vectorIP14stTuningNode_tNS2_9allocatorIS5_EEEE */
/* Demangled: TuningDrvImp::deTuningQueByDrv(ETuningDrvUser, int*, std::__1::vector<stTuningNode_t*, std::__1::allocator<stTuningNode_t*> >&) */
int _ZN12TuningDrvImp16deTuningQueByDrvE14ETuningDrvUserPiRNSt3__16vectorIP14stTuningNode_tNS2_9allocatorIS5_EEEE(void);

/* Symbol: _ZN12TuningDrvImp16enTuningQueByDrvE14ETuningDrvUser */
/* Demangled: TuningDrvImp::enTuningQueByDrv(ETuningDrvUser) */
int _ZN12TuningDrvImp16enTuningQueByDrvE14ETuningDrvUser(void);

/* Symbol: _ZNSt3__16vectorIP14stTuningNode_tNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<stTuningNode_t*, std::__1::allocator<stTuningNode_t*> >::__push_back_slow_path<stTuningNode_t*>(stTuningNode_t*&&) */
int _ZNSt3__16vectorIP14stTuningNode_tNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN12TuningMgrImpD2Ev */
/* Demangled: TuningMgrImp::~TuningMgrImp() */
int _ZN12TuningMgrImpD2Ev(void);

/* Symbol: _ZTV12TuningMgrImp */
/* Demangled: vtable for TuningMgrImp */
extern void* _ZTV12TuningMgrImp;

/* Symbol: _ZN12TuningDrvImp6uninitEPKc14ETuningDrvUser */
/* Demangled: TuningDrvImp::uninit(char const*, ETuningDrvUser) */
int _ZN12TuningDrvImp6uninitEPKc14ETuningDrvUser(void);

/* Symbol: _ZN12TuningDrvImp8getBQNumEv */
/* Demangled: TuningDrvImp::getBQNum() */
int _ZN12TuningDrvImp8getBQNumEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN12TuningMgrImp4initEPKcj */
/* Demangled: TuningMgrImp::init(char const*, unsigned int) */
int _ZN12TuningMgrImp4initEPKcj(void);

/* Symbol: tuning_mgr_DbgLogEnable_VERBOSE */
/* Demangled: tuning_mgr_DbgLogEnable_VERBOSE */
extern void* tuning_mgr_DbgLogEnable_VERBOSE;

/* Symbol: tuning_drv_DbgLogEnable_ASSERT */
/* Demangled: tuning_drv_DbgLogEnable_ASSERT */
extern void* tuning_drv_DbgLogEnable_ASSERT;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN12TuningMgrImp17tuningMgrWriteRegEjjj */
/* Demangled: TuningMgrImp::tuningMgrWriteReg(unsigned int, unsigned int, unsigned int) */
int _ZN12TuningMgrImp17tuningMgrWriteRegEjjj(void);

/* Symbol: tuning_mgr_DbgLogEnable_ERROR */
/* Demangled: tuning_mgr_DbgLogEnable_ERROR */
extern void* tuning_mgr_DbgLogEnable_ERROR;

/* Symbol: _ZN12TuningMgrImp21tuningMgrWriteReg_UniEjjj */
/* Demangled: TuningMgrImp::tuningMgrWriteReg_Uni(unsigned int, unsigned int, unsigned int) */
int _ZN12TuningMgrImp21tuningMgrWriteReg_UniEjjj(void);

/* Symbol: _ZN12TuningMgrImpC2Ev */
/* Demangled: TuningMgrImp::TuningMgrImp() */
int _ZN12TuningMgrImpC2Ev(void);

/* Symbol: _ZTV9TuningMgr */
/* Demangled: vtable for TuningMgr */
extern void* _ZTV9TuningMgr;

/* Symbol: tuning_mgr_DbgLogEnable_DEBUG */
/* Demangled: tuning_mgr_DbgLogEnable_DEBUG */
extern void* tuning_mgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN12TuningDrvImpC1Ev */
/* Demangled: TuningDrvImp::TuningDrvImp() */
int _ZN12TuningDrvImpC1Ev(void);

/* Symbol: tuning_drv_DbgLogEnable_WARN */
/* Demangled: tuning_drv_DbgLogEnable_WARN */
extern void* tuning_drv_DbgLogEnable_WARN;

/* Symbol: _ZN12TuningMgrImp12updateEngineE14ETuningMgrFuncij */
/* Demangled: TuningMgrImp::updateEngine(ETuningMgrFunc, int, unsigned int) */
int _ZN12TuningMgrImp12updateEngineE14ETuningMgrFuncij(void);

/* Symbol: _ZN9TuningDrv11getInstanceEj */
/* Demangled: TuningDrv::getInstance(unsigned int) */
int _ZN9TuningDrv11getInstanceEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: tuning_mgr_DbgLogEnable_WARN */
/* Demangled: tuning_mgr_DbgLogEnable_WARN */
extern void* tuning_mgr_DbgLogEnable_WARN;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN12TuningMgrImpD1Ev */
/* Demangled: TuningMgrImp::~TuningMgrImp() */
int _ZN12TuningMgrImpD1Ev(void);

/* Symbol: mQueueTopAccessLock */
/* Demangled: mQueueTopAccessLock */
extern void* mQueueTopAccessLock;

/* Symbol: tuning_drv_DbgLogEnable_ERROR */
/* Demangled: tuning_drv_DbgLogEnable_ERROR */
extern void* tuning_drv_DbgLogEnable_ERROR;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMDRV_TUNING_MGR_H */
