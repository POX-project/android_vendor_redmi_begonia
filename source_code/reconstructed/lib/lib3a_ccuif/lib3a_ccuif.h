/*
 * Reverse-Engineered ABI Specification for: lib3a.ccuif.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.ccuif.so
 */

#ifndef BEGONIA_RE_LIB3A_CCUIF_H
#define BEGONIA_RE_LIB3A_CCUIF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7NSCcuIf25ccu_drv_DbgLogEnable_INFOE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_INFO */
extern void* _ZN7NSCcuIf25ccu_drv_DbgLogEnable_INFOE;

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe12fillUpAeInfoEP9AE_INFO_TP10CCU_AeAlgoP12AE_CORE_INIT */
/* Demangled: NSCcuIf::CcuCtrlAe::fillUpAeInfo(AE_INFO_T*, CCU_AeAlgo*, AE_CORE_INIT*) */
int _ZN7NSCcuIf9CcuCtrlAe12fillUpAeInfoEP9AE_INFO_TP10CCU_AeAlgoP12AE_CORE_INIT(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync12getCcuTgInfoEv */
/* Demangled: NSCcuIf::CcuCtrl3ASync::getCcuTgInfo() */
int _ZN7NSCcuIf13CcuCtrl3ASync12getCcuTgInfoEv(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr15_checkCcuEnableEv */
/* Demangled: NSCcuIf::CcuMgr::_checkCcuEnable() */
int _ZN7NSCcuIf6CcuMgr15_checkCcuEnableEv(void);

/* Symbol: _ZThn4_N7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info */
/* Demangled: non-virtual thunk to NSCcuIf::CcuMgr::returnCcuBufferList(ccu_feature_type, ccu_tg_info) */
int _ZThn4_N7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase20send_ccu_command_ipcE10ccu_msg_idjj */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::send_ccu_command_ipc(ccu_msg_id, unsigned int, unsigned int) */
int _ZN7NSCcuIf14AbsCcuCtrlBase20send_ccu_command_ipcE10ccu_msg_idjj(void);

/* Symbol: _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv */
/* Demangled: NSCcuIf::CcuDrvUtil::getTimeUs() */
int _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv(void);

/* Symbol: _ZTVN7NSCcuIf9CcuCtrlAfE */
/* Demangled: vtable for NSCcuIf::CcuCtrlAf */
extern void* _ZTVN7NSCcuIf9CcuCtrlAfE;

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv */
/* Demangled: NSCcuIf::CcuCtrl3ASync::isSupportFrameSync() */
int _ZN7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync33ccuCtrlPreprocess_SyncAeSetteingsEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess_SyncAeSetteings(void*, void*) */
int _ZN7NSCcuIf13CcuCtrl3ASync33ccuCtrlPreprocess_SyncAeSetteingsEPvS1_(void);

/* Symbol: _ZTCN7NSCcuIf13CcuCtrl3ASyncE0_NS_14AbsCcuCtrlBaseE */
/* Demangled: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrl3ASync */
extern void* _ZTCN7NSCcuIf13CcuCtrl3ASyncE0_NS_14AbsCcuCtrlBaseE;

/* Symbol: _ZThn28_N7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::isSupport3ASync() */
int _ZThn28_N7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv(void);

/* Symbol: _ZTVN7NSCcuIf15CcuAeBufferListE */
/* Demangled: vtable for NSCcuIf::CcuAeBufferList */
extern void* _ZTVN7NSCcuIf15CcuAeBufferListE;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe17ccuCtrlPreprocessE10ccu_msg_idPvS2_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess(ccu_msg_id, void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe17ccuCtrlPreprocessE10ccu_msg_idPvS2_(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZTv0_n24_N7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_ */
/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::ccuControl(ccu_msg_id, void*, void*) */
int _ZTv0_n24_N7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_deque_afo_buffer(AFAcquireBuf_Reg_INFO_OUT_AP*) */
int _ZN7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr9ccuUninitEv */
/* Demangled: NSCcuIf::CcuMgr::ccuUninit() */
int _ZN7NSCcuIf6CcuMgr9ccuUninitEv(void);

/* Symbol: _ZN7NSCcuIf10ICcuCtrlAf14createInstanceEPKhN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSCcuIf::ICcuCtrlAf::createInstance(unsigned char const*, NSIspTuning::ESensorDev_T) */
int _ZN7NSCcuIf10ICcuCtrlAf14createInstanceEPKhN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync17ccuCtrlPreprocessE10ccu_msg_idPvS2_ */
/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess(ccu_msg_id, void*, void*) */
int _ZN7NSCcuIf13CcuCtrl3ASync17ccuCtrlPreprocessE10ccu_msg_idPvS2_(void);

/* Symbol: _ZTv0_n16_N7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: virtual thunk to NSCcuIf::CcuCtrl3ASync::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZTv0_n16_N7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info */
/* Demangled: NSCcuIf::CcuMgr::returnCcuBufferList(ccu_feature_type, ccu_tg_info) */
int _ZN7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr7ccuBootEv */
/* Demangled: NSCcuIf::CcuMgr::ccuBoot() */
int _ZN7NSCcuIf6CcuMgr7ccuBootEv(void);

/* Symbol: _ZTv0_n20_N7NSCcuIf14AbsCcuCtrlBase6uninitEv */
/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::uninit() */
int _ZTv0_n20_N7NSCcuIf14AbsCcuCtrlBase6uninitEv(void);

/* Symbol: _ZTTN7NSCcuIf9CcuCtrlAeE */
/* Demangled: VTT for NSCcuIf::CcuCtrlAe */
extern void* _ZTTN7NSCcuIf9CcuCtrlAeE;

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_enque_afo_buffer(void*) */
int _ZN7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv(void);

/* Symbol: _ZTv0_n16_N7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: virtual thunk to NSCcuIf::CcuCtrlAe::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZTv0_n16_N7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN7NSCcuIf10ICcuCtrlAe14createInstanceEv */
/* Demangled: NSCcuIf::ICcuCtrlAe::createInstance() */
int _ZN7NSCcuIf10ICcuCtrlAe14createInstanceEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe17fillUpAeDebugInfoEP15AE_DEBUG_INFO_TP10CCU_AeAlgoP12AE_CORE_INITP27AE_CORE_CTRL_CCU_VSYNC_INFO */
/* Demangled: NSCcuIf::CcuCtrlAe::fillUpAeDebugInfo(AE_DEBUG_INFO_T*, CCU_AeAlgo*, AE_CORE_INIT*, AE_CORE_CTRL_CCU_VSYNC_INFO*) */
int _ZN7NSCcuIf9CcuCtrlAe17fillUpAeDebugInfoEP15AE_DEBUG_INFO_TP10CCU_AeAlgoP12AE_CORE_INITP27AE_CORE_CTRL_CCU_VSYNC_INFO(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_suspend() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv(void);

/* Symbol: _ZN7NSCcuIf9CcuBuffer14_ccuFreeBufferEiiiPc */
/* Demangled: NSCcuIf::CcuBuffer::_ccuFreeBuffer(int, int, int, char*) */
int _ZN7NSCcuIf9CcuBuffer14_ccuFreeBufferEiiiPc(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T */
/* Demangled: NSCcuIf::CcuCtrlAe::getAeInfoForIsp(AE_INFO_T*) */
int _ZN7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe24ccuCtrlPreprocess_AeInitEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_AeInit(void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe24ccuCtrlPreprocess_AeInitEPvS1_(void);

/* Symbol: _ZTVN7NSCcuIf9CcuCtrlAeE */
/* Demangled: vtable for NSCcuIf::CcuCtrlAe */
extern void* _ZTVN7NSCcuIf9CcuCtrlAeE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf15destroyInstanceEv */
/* Demangled: NSCcuIf::CcuCtrlAf::destroyInstance() */
int _ZN7NSCcuIf9CcuCtrlAf15destroyInstanceEv(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_abortEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_abort() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_abortEv(void);

/* Symbol: _ZThn28_N7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::getDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*) */
int _ZThn28_N7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE(void);

/* Symbol: _ZN7NSCcuIf6CcuMgrC1Ev */
/* Demangled: NSCcuIf::CcuMgr::CcuMgr() */
int _ZN7NSCcuIf6CcuMgrC1Ev(void);

/* Symbol: _ZN7NSCcuIf9CcuBuffer8_mmapMvaEiPiPjjj */
/* Demangled: NSCcuIf::CcuBuffer::_mmapMva(int, int*, unsigned int*, unsigned int, unsigned int) */
int _ZN7NSCcuIf9CcuBuffer8_mmapMvaEiPiPjjj(void);

/* Symbol: _ZN7NSCcuIf15CcuAfBufferList4initEi */
/* Demangled: NSCcuIf::CcuAfBufferList::init(int) */
int _ZN7NSCcuIf15CcuAfBufferList4initEi(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T */
/* Demangled: NSCcuIf::CcuCtrlAe::getDebugInfo(AE_DEBUG_INFO_T*) */
int _ZN7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_deque_afo_buffer(AFAcquireBuf_Reg_INFO_OUT_AP*) */
int _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP(void);

/* Symbol: _ZTVN7NSCcuIf13CcuCtrl3ASyncE */
/* Demangled: vtable for NSCcuIf::CcuCtrl3ASync */
extern void* _ZTVN7NSCcuIf13CcuCtrl3ASyncE;

/* Symbol: _ZN7NSCcuIf6CcuMgr22_importBuffersToKernelEv */
/* Demangled: NSCcuIf::CcuMgr::_importBuffersToKernel() */
int _ZN7NSCcuIf6CcuMgr22_importBuffersToKernelEv(void);

/* Symbol: _ZTVN7NSCcuIf13CcuBufferListE */
/* Demangled: vtable for NSCcuIf::CcuBufferList */
extern void* _ZTVN7NSCcuIf13CcuBufferListE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv */
/* Demangled: NSCcuIf::CcuCtrl3ASync::isSupport3ASync() */
int _ZN7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSCcuIf::CcuCtrl3ASync::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZN7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf9CcuBuffer5resetEv */
/* Demangled: NSCcuIf::CcuBuffer::reset() */
int _ZN7NSCcuIf9CcuBuffer5resetEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe28ccuCtrlPreprocess_SensorInitEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_SensorInit(void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe28ccuCtrlPreprocess_SensorInitEPvS1_(void);

/* Symbol: _ZTVN7NSCcuIf8ICcuCtrlE */
/* Demangled: vtable for NSCcuIf::ICcuCtrl */
extern void* _ZTVN7NSCcuIf8ICcuCtrlE;

/* Symbol: _ZN7NSCcuIf7AFO_BUFE */
/* Demangled: NSCcuIf::AFO_BUF */
extern void* _ZN7NSCcuIf7AFO_BUFE;

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv */
/* Demangled: NSCcuIf::CcuCtrl3ASync::destroyInstance() */
int _ZN7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync20fillUpN3AedDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TEP22CCU_N3D_AE_INIT_STRUCTP16CCU_N3DAE_STRUCTP15CCU_strAEOutput */
/* Demangled: NSCcuIf::CcuCtrl3ASync::fillUpN3AedDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*, CCU_N3D_AE_INIT_STRUCT*, CCU_N3DAE_STRUCT*, CCU_strAEOutput*) */
int _ZN7NSCcuIf13CcuCtrl3ASync20fillUpN3AedDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TEP22CCU_N3D_AE_INIT_STRUCTP16CCU_N3DAE_STRUCTP15CCU_strAEOutput(void);

/* Symbol: _ZN7NSCcuIf11ICcuMgrPriv14createInstanceEv */
/* Demangled: NSCcuIf::ICcuMgrPriv::createInstance() */
int _ZN7NSCcuIf11ICcuMgrPriv14createInstanceEv(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr18_uninitBufferListsEv */
/* Demangled: NSCcuIf::CcuMgr::_uninitBufferLists() */
int _ZN7NSCcuIf6CcuMgr18_uninitBufferListsEv(void);

/* Symbol: _ZN7NSCcuIf15CcuAfBufferList6uninitEv */
/* Demangled: NSCcuIf::CcuAfBufferList::uninit() */
int _ZN7NSCcuIf15CcuAfBufferList6uninitEv(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_ */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::ccuControl(ccu_msg_id, void*, void*) */
int _ZN7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZN7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf12ccu_af_abortEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_abort() */
int _ZN7NSCcuIf9CcuCtrlAf12ccu_af_abortEv(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr15IsCcuMgrEnabledE */
/* Demangled: NSCcuIf::CcuMgr::IsCcuMgrEnabled */
extern void* _ZN7NSCcuIf6CcuMgr15IsCcuMgrEnabledE;

/* Symbol: _ZTVN7NSCcuIf14AbsCcuCtrlBaseE */
/* Demangled: vtable for NSCcuIf::AbsCcuCtrlBase */
extern void* _ZTVN7NSCcuIf14AbsCcuCtrlBaseE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZTCN7NSCcuIf9CcuCtrlAfE28_NS_10ICcuCtrlAfE */
/* Demangled: construction vtable for NSCcuIf::ICcuCtrlAf-in-NSCcuIf::CcuCtrlAf */
extern void* _ZTCN7NSCcuIf9CcuCtrlAfE28_NS_10ICcuCtrlAfE;

/* Symbol: _ZN7NSCcuIf10ICcuMgrExt14createInstanceEPKc */
/* Demangled: NSCcuIf::ICcuMgrExt::createInstance(char const*) */
int _ZN7NSCcuIf10ICcuMgrExt14createInstanceEPKc(void);

/* Symbol: _ZTv0_n16_N7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: virtual thunk to NSCcuIf::CcuCtrlAf::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZTv0_n16_N7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj */
/* Demangled: NSCcuIf::CcuDrvUtil::sensorDevToTgInfo(NSIspTuning::ESensorDev_T, unsigned int) */
int _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr9ccuResumeEN11NSIspTuning12ESensorDev_TEj */
/* Demangled: NSCcuIf::CcuMgr::ccuResume(NSIspTuning::ESensorDev_T, unsigned int) */
int _ZN7NSCcuIf6CcuMgr9ccuResumeEN11NSIspTuning12ESensorDev_TEj(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferListC1Ev */
/* Demangled: NSCcuIf::CcuBufferList::CcuBufferList() */
int _ZN7NSCcuIf13CcuBufferListC1Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN7NSCcuIf19CCU_DEFUALT_LOG_LV3E */
/* Demangled: NSCcuIf::CCU_DEFUALT_LOG_LV3 */
extern void* _ZN7NSCcuIf19CCU_DEFUALT_LOG_LV3E;

/* Symbol: _ZN7NSCcuIf9CcuBuffer15_ccuAllocBufferEiiPiPPcb */
/* Demangled: NSCcuIf::CcuBuffer::_ccuAllocBuffer(int, int, int*, char**, bool) */
int _ZN7NSCcuIf9CcuBuffer15_ccuAllocBufferEiiPiPPcb(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_enque_afo_buffer(void*) */
int _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZTCN7NSCcuIf9CcuCtrlAeE28_NS_10ICcuCtrlAeE */
/* Demangled: construction vtable for NSCcuIf::ICcuCtrlAe-in-NSCcuIf::CcuCtrlAe */
extern void* _ZTCN7NSCcuIf9CcuCtrlAeE28_NS_10ICcuCtrlAeE;

/* Symbol: _ZN7NSCcuIf13CcuBufferList19_initControlBuffersEv */
/* Demangled: NSCcuIf::CcuBufferList::_initControlBuffers() */
int _ZN7NSCcuIf13CcuBufferList19_initControlBuffersEv(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase12getCcuTgInfoEv */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::getCcuTgInfo() */
int _ZN7NSCcuIf14AbsCcuCtrlBase12getCcuTgInfoEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe15_getFeatureTypeEv */
/* Demangled: NSCcuIf::CcuCtrlAe::_getFeatureType() */
int _ZN7NSCcuIf9CcuCtrlAe15_getFeatureTypeEv(void);

/* Symbol: _ZTCN7NSCcuIf9CcuCtrlAeE0_NS_14AbsCcuCtrlBaseE */
/* Demangled: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrlAe */
extern void* _ZTCN7NSCcuIf9CcuCtrlAeE0_NS_14AbsCcuCtrlBaseE;

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE */
/* Demangled: NSCcuIf::CcuCtrl3ASync::getDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*) */
int _ZN7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE(void);

/* Symbol: _ZTCN7NSCcuIf13CcuCtrl3ASyncE28_NS_14ICcuCtrl3ASyncE */
/* Demangled: construction vtable for NSCcuIf::ICcuCtrl3ASync-in-NSCcuIf::CcuCtrl3ASync */
extern void* _ZTCN7NSCcuIf13CcuCtrl3ASyncE28_NS_14ICcuCtrl3ASyncE;

/* Symbol: _ZN7NSCcuIf9CcuBuffer10_munmapMvaEi */
/* Demangled: NSCcuIf::CcuBuffer::_munmapMva(int) */
int _ZN7NSCcuIf9CcuBuffer10_munmapMvaEi(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe18ccuCtrlPostprocessE10ccu_msg_idPvS2_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPostprocess(ccu_msg_id, void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe18ccuCtrlPostprocessE10ccu_msg_idPvS2_(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase24ccu_control_handle_inputE10ccu_msg_idPKNS_22CcuCtrlParamDescriptorEPvS5_ */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::ccu_control_handle_input(ccu_msg_id, NSCcuIf::CcuCtrlParamDescriptor const*, void*, void*) */
int _ZN7NSCcuIf14AbsCcuCtrlBase24ccu_control_handle_inputE10ccu_msg_idPKNS_22CcuCtrlParamDescriptorEPvS5_(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAe15destroyInstanceEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::destroyInstance() */
int _ZThn28_N7NSCcuIf9CcuCtrlAe15destroyInstanceEv(void);

/* Symbol: _ZTCN7NSCcuIf9CcuCtrlAfE0_NS_14AbsCcuCtrlBaseE */
/* Demangled: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrlAf */
extern void* _ZTCN7NSCcuIf9CcuCtrlAfE0_NS_14AbsCcuCtrlBaseE;

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_resume() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv(void);

/* Symbol: _ZN7NSCcuIf11ICcuMgrPriv15destroyInstanceEv */
/* Demangled: NSCcuIf::ICcuMgrPriv::destroyInstance() */
int _ZN7NSCcuIf11ICcuMgrPriv15destroyInstanceEv(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferList15doIonCacheFlushEiNS_18eIONCacheFlushTypeE */
/* Demangled: NSCcuIf::CcuBufferList::doIonCacheFlush(int, NSCcuIf::eIONCacheFlushType) */
int _ZN7NSCcuIf13CcuBufferList15doIonCacheFlushEiNS_18eIONCacheFlushTypeE(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBaseC2Ev */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::AbsCcuCtrlBase() */
int _ZN7NSCcuIf14AbsCcuCtrlBaseC2Ev(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_suspend() */
int _ZN7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase6uninitEv */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::uninit() */
int _ZN7NSCcuIf14AbsCcuCtrlBase6uninitEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSCcuIf::CcuCtrlAe::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZN7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf10ICcuMgrExt15destroyInstanceEv */
/* Demangled: NSCcuIf::ICcuMgrExt::destroyInstance() */
int _ZN7NSCcuIf10ICcuMgrExt15destroyInstanceEv(void);

/* Symbol: _ZTVN7NSCcuIf6CcuMgrE */
/* Demangled: vtable for NSCcuIf::CcuMgr */
extern void* _ZTVN7NSCcuIf6CcuMgrE;

/* Symbol: _ZN7NSCcuIf15CcuAfBufferList14_initAFBuffersEv */
/* Demangled: NSCcuIf::CcuAfBufferList::_initAFBuffers() */
int _ZN7NSCcuIf15CcuAfBufferList14_initAFBuffersEv(void);

/* Symbol: _ZN7NSCcuIf27ccu_drv_DbgLogEnable_ASSERTE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_ASSERT */
extern void* _ZN7NSCcuIf27ccu_drv_DbgLogEnable_ASSERTE;

/* Symbol: _ZN7NSCcuIf6CcuMgr16_initBufferListsEi */
/* Demangled: NSCcuIf::CcuMgr::_initBufferLists(int) */
int _ZN7NSCcuIf6CcuMgr16_initBufferListsEi(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr7ccuInitEv */
/* Demangled: NSCcuIf::CcuMgr::ccuInit() */
int _ZN7NSCcuIf6CcuMgr7ccuInitEv(void);

/* Symbol: _ZTVN7NSCcuIf15CcuAfBufferListE */
/* Demangled: vtable for NSCcuIf::CcuAfBufferList */
extern void* _ZTVN7NSCcuIf15CcuAfBufferListE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::getAeInfoForIsp(AE_INFO_T*) */
int _ZThn28_N7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7NSCcuIf26ccu_drv_DbgLogEnable_DEBUGE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_DEBUG */
extern void* _ZN7NSCcuIf26ccu_drv_DbgLogEnable_DEBUGE;

/* Symbol: _ZThn28_N7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::isSupportFrameSync() */
int _ZThn28_N7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::getDebugInfo(AE_DEBUG_INFO_T*) */
int _ZThn28_N7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T(void);

/* Symbol: _ZTTN7NSCcuIf13CcuCtrl3ASyncE */
/* Demangled: VTT for NSCcuIf::CcuCtrl3ASync */
extern void* _ZTTN7NSCcuIf13CcuCtrl3ASyncE;

/* Symbol: _ZN7NSCcuIf6CcuMgr11ccuShutdownEv */
/* Demangled: NSCcuIf::CcuMgr::ccuShutdown() */
int _ZN7NSCcuIf6CcuMgr11ccuShutdownEv(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferList4initEi */
/* Demangled: NSCcuIf::CcuBufferList::init(int) */
int _ZN7NSCcuIf13CcuBufferList4initEi(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr25_importBufferListToKernelEPNS_13CcuBufferListEP12import_mem_sPj */
/* Demangled: NSCcuIf::CcuMgr::_importBufferListToKernel(NSCcuIf::CcuBufferList*, import_mem_s*, unsigned int*) */
int _ZN7NSCcuIf6CcuMgr25_importBufferListToKernelEPNS_13CcuBufferListEP12import_mem_sPj(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase15resolveCmdIOBufEPKNS_22CcuCtrlParamDescriptorEPNS0_12CcuIOBufInfoES5_ */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::resolveCmdIOBuf(NSCcuIf::CcuCtrlParamDescriptor const*, NSCcuIf::AbsCcuCtrlBase::CcuIOBufInfo*, NSCcuIf::AbsCcuCtrlBase::CcuIOBufInfo*) */
int _ZN7NSCcuIf14AbsCcuCtrlBase15resolveCmdIOBufEPKNS_22CcuCtrlParamDescriptorEPNS0_12CcuIOBufInfoES5_(void);

/* Symbol: _ZN7NSCcuIf14AbsCcuCtrlBase20m_CcuccuControlMutexE */
/* Demangled: NSCcuIf::AbsCcuCtrlBase::m_CcuccuControlMutex */
extern void* _ZN7NSCcuIf14AbsCcuCtrlBase20m_CcuccuControlMutexE;

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe29ccuCtrlPostprocess_SensorInitEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPostprocess_SensorInit(void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe29ccuCtrlPostprocess_SensorInitEPvS1_(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf11ccu_af_stopEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_stop() */
int _ZN7NSCcuIf9CcuCtrlAf11ccu_af_stopEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_resume() */
int _ZN7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf11ccu_af_stopEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_stop() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf11ccu_af_stopEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe30ccuCtrlPreprocess_OnchangeDataEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_OnchangeData(void*, void*) */
int _ZN7NSCcuIf9CcuCtrlAe30ccuCtrlPreprocess_OnchangeDataEPvS1_(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf13afCtrlInitBufEiPj */
/* Demangled: NSCcuIf::CcuCtrlAf::afCtrlInitBuf(int, unsigned int*) */
int _ZN7NSCcuIf9CcuCtrlAf13afCtrlInitBufEiPj(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_set_hw_regs(void*) */
int _ZThn28_N7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv(void);

/* Symbol: _ZThn4_N7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info */
/* Demangled: non-virtual thunk to NSCcuIf::CcuMgr::getCcuBufferList(ccu_feature_type, ccu_tg_info) */
int _ZThn4_N7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_set_hw_regs(void*) */
int _ZN7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: NSCcuIf::CcuCtrlAf::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZN7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf23_CcuCtrl3ASyncSingletonE */
/* Demangled: NSCcuIf::_CcuCtrl3ASyncSingleton */
extern void* _ZN7NSCcuIf23_CcuCtrl3ASyncSingletonE;

/* Symbol: _ZN7NSCcuIf6CcuMgrC2Ev */
/* Demangled: NSCcuIf::CcuMgr::CcuMgr() */
int _ZN7NSCcuIf6CcuMgrC2Ev(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferList21_uninitControlBuffersEv */
/* Demangled: NSCcuIf::CcuBufferList::_uninitControlBuffers() */
int _ZN7NSCcuIf13CcuBufferList21_uninitControlBuffersEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAe15destroyInstanceEv */
/* Demangled: NSCcuIf::CcuCtrlAe::destroyInstance() */
int _ZN7NSCcuIf9CcuCtrlAe15destroyInstanceEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_initialize() */
int _ZN7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv(void);

/* Symbol: _ZN7NSCcuIf26ccu_drv_DbgLogEnable_ERRORE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_ERROR */
extern void* _ZN7NSCcuIf26ccu_drv_DbgLogEnable_ERRORE;

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_startEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_start() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_startEv(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferList6uninitEv */
/* Demangled: NSCcuIf::CcuBufferList::uninit() */
int _ZN7NSCcuIf13CcuBufferList6uninitEv(void);

/* Symbol: _ZN7NSCcuIf9CcuBuffer4initEibjj */
/* Demangled: NSCcuIf::CcuBuffer::init(int, bool, unsigned int, unsigned int) */
int _ZN7NSCcuIf9CcuBuffer4initEibjj(void);

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_initialize() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync15_getFeatureTypeEv */
/* Demangled: NSCcuIf::CcuCtrl3ASync::_getFeatureType() */
int _ZN7NSCcuIf13CcuCtrl3ASync15_getFeatureTypeEv(void);

/* Symbol: _ZN7NSCcuIf10ICcuMgrExt20ccuIsSupportSecurityEv */
/* Demangled: NSCcuIf::ICcuMgrExt::ccuIsSupportSecurity() */
int _ZN7NSCcuIf10ICcuMgrExt20ccuIsSupportSecurityEv(void);

/* Symbol: _ZN7NSCcuIf25ccu_drv_DbgLogEnable_WARNE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_WARN */
extern void* _ZN7NSCcuIf25ccu_drv_DbgLogEnable_WARNE;

/* Symbol: _ZN7NSCcuIf28ccu_drv_DbgLogEnable_VERBOSEE */
/* Demangled: NSCcuIf::ccu_drv_DbgLogEnable_VERBOSE */
extern void* _ZN7NSCcuIf28ccu_drv_DbgLogEnable_VERBOSEE;

/* Symbol: _ZTTN7NSCcuIf14AbsCcuCtrlBaseE */
/* Demangled: VTT for NSCcuIf::AbsCcuCtrlBase */
extern void* _ZTTN7NSCcuIf14AbsCcuCtrlBaseE;

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf15_getFeatureTypeEv */
/* Demangled: NSCcuIf::CcuCtrlAf::_getFeatureType() */
int _ZN7NSCcuIf9CcuCtrlAf15_getFeatureTypeEv(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr10ccuSuspendEN11NSIspTuning12ESensorDev_TEj */
/* Demangled: NSCcuIf::CcuMgr::ccuSuspend(NSIspTuning::ESensorDev_T, unsigned int) */
int _ZN7NSCcuIf6CcuMgr10ccuSuspendEN11NSIspTuning12ESensorDev_TEj(void);

/* Symbol: _ZN7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info */
/* Demangled: NSCcuIf::CcuMgr::getCcuBufferList(ccu_feature_type, ccu_tg_info) */
int _ZN7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info(void);

/* Symbol: _ZTVN7NSCcuIf19Ccu3ASyncBufferListE */
/* Demangled: vtable for NSCcuIf::Ccu3ASyncBufferList */
extern void* _ZTVN7NSCcuIf19Ccu3ASyncBufferListE;

/* Symbol: _ZTv0_n16_N7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE */
/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::init(unsigned int, NSIspTuning::ESensorDev_T) */
int _ZTv0_n16_N7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf7vaTomvaEiPc */
/* Demangled: NSCcuIf::CcuCtrlAf::vaTomva(int, char*) */
int _ZN7NSCcuIf9CcuCtrlAf7vaTomvaEiPc(void);

/* Symbol: _ZN7NSCcuIf13CcuCtrl3ASync30ccuCtrlPreprocess_SetSyncStateEPvS1_ */
/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess_SetSyncState(void*, void*) */
int _ZN7NSCcuIf13CcuCtrl3ASync30ccuCtrlPreprocess_SetSyncStateEPvS1_(void);

/* Symbol: _ZN7NSCcuIf11ICcuMgrPriv11isCcuBootedEv */
/* Demangled: NSCcuIf::ICcuMgrPriv::isCcuBooted() */
int _ZN7NSCcuIf11ICcuMgrPriv11isCcuBootedEv(void);

/* Symbol: _ZN7NSCcuIf15CcuAfBufferList16_uninitAFBuffersEv */
/* Demangled: NSCcuIf::CcuAfBufferList::_uninitAFBuffers() */
int _ZN7NSCcuIf15CcuAfBufferList16_uninitAFBuffersEv(void);

/* Symbol: _ZN7NSCcuIf9CcuCtrlAf12ccu_af_startEv */
/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_start() */
int _ZN7NSCcuIf9CcuCtrlAf12ccu_af_startEv(void);

/* Symbol: _ZTTN7NSCcuIf9CcuCtrlAfE */
/* Demangled: VTT for NSCcuIf::CcuCtrlAf */
extern void* _ZTTN7NSCcuIf9CcuCtrlAfE;

/* Symbol: _ZThn28_N7NSCcuIf9CcuCtrlAf15destroyInstanceEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::destroyInstance() */
int _ZThn28_N7NSCcuIf9CcuCtrlAf15destroyInstanceEv(void);

/* Symbol: _ZN7NSCcuIf13CcuBufferListC2Ev */
/* Demangled: NSCcuIf::CcuBufferList::CcuBufferList() */
int _ZN7NSCcuIf13CcuBufferListC2Ev(void);

/* Symbol: _ZN7NSCcuIf9CcuBuffer6uninitEv */
/* Demangled: NSCcuIf::CcuBuffer::uninit() */
int _ZN7NSCcuIf9CcuBuffer6uninitEv(void);

/* Symbol: _ZN7NSCcuIf14ICcuCtrl3ASync14createInstanceEv */
/* Demangled: NSCcuIf::ICcuCtrl3ASync::createInstance() */
int _ZN7NSCcuIf14ICcuCtrl3ASync14createInstanceEv(void);

/* Symbol: _ZThn28_N7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv */
/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::destroyInstance() */
int _ZThn28_N7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_CCUIF_H */
