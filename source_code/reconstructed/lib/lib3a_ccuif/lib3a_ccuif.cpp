/*
 * Reverse-Engineered Source for: lib3a.ccuif.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_ccuif"

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
#include "lib3a_ccuif.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf25ccu_drv_DbgLogEnable_INFOE = NULL;

/* Demangled: NSCcuIf::CcuCtrlAe::fillUpAeInfo(AE_INFO_T*, CCU_AeAlgo*, AE_CORE_INIT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe12fillUpAeInfoEP9AE_INFO_TP10CCU_AeAlgoP12AE_CORE_INIT(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe12fillUpAeInfoEP9AE_INFO_TP10CCU_AeAlgoP12AE_CORE_INIT() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::getCcuTgInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync12getCcuTgInfoEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync12getCcuTgInfoEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::_checkCcuEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr15_checkCcuEnableEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr15_checkCcuEnableEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuMgr::returnCcuBufferList(ccu_feature_type, ccu_tg_info) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info(void) {
    ALOGD("_ZThn4_N7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::send_ccu_command_ipc(ccu_msg_id, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase20send_ccu_command_ipcE10ccu_msg_idjj(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase20send_ccu_command_ipcE10ccu_msg_idjj() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuDrvUtil::getTimeUs() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv(void) {
    ALOGD("_ZN7NSCcuIf10CcuDrvUtil9getTimeUsEv() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuCtrlAf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf9CcuCtrlAfE = NULL;

/* Demangled: NSCcuIf::CcuCtrl3ASync::isSupportFrameSync() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess_SyncAeSetteings(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync33ccuCtrlPreprocess_SyncAeSetteingsEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync33ccuCtrlPreprocess_SyncAeSetteingsEPvS1_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrl3ASync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf13CcuCtrl3ASyncE0_NS_14AbsCcuCtrlBaseE = NULL;

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::isSupport3ASync() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuAeBufferList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf15CcuAeBufferListE = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess(ccu_msg_id, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe17ccuCtrlPreprocessE10ccu_msg_idPvS2_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe17ccuCtrlPreprocessE10ccu_msg_idPvS2_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::ccuControl(ccu_msg_id, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_(void) {
    ALOGD("_ZTv0_n24_N7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_deque_afo_buffer(AFAcquireBuf_Reg_INFO_OUT_AP*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::ccuUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr9ccuUninitEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr9ccuUninitEv() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuCtrlAf::createInstance(unsigned char const*, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10ICcuCtrlAf14createInstanceEPKhN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7NSCcuIf10ICcuCtrlAf14createInstanceEPKhN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess(ccu_msg_id, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync17ccuCtrlPreprocessE10ccu_msg_idPvS2_(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync17ccuCtrlPreprocessE10ccu_msg_idPvS2_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCcuIf::CcuCtrl3ASync::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZTv0_n16_N7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::returnCcuBufferList(ccu_feature_type, ccu_tg_info) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr19returnCcuBufferListE16ccu_feature_type11ccu_tg_info() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::ccuBoot() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr7ccuBootEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr7ccuBootEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N7NSCcuIf14AbsCcuCtrlBase6uninitEv(void) {
    ALOGD("_ZTv0_n20_N7NSCcuIf14AbsCcuCtrlBase6uninitEv() called");
    return 0;
}

/* Exported Object: VTT for NSCcuIf::CcuCtrlAe */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7NSCcuIf9CcuCtrlAeE = NULL;

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_enque_afo_buffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCcuIf::CcuCtrlAe::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZTv0_n16_N7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuCtrlAe::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10ICcuCtrlAe14createInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf10ICcuCtrlAe14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::fillUpAeDebugInfo(AE_DEBUG_INFO_T*, CCU_AeAlgo*, AE_CORE_INIT*, AE_CORE_CTRL_CCU_VSYNC_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe17fillUpAeDebugInfoEP15AE_DEBUG_INFO_TP10CCU_AeAlgoP12AE_CORE_INITP27AE_CORE_CTRL_CCU_VSYNC_INFO(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe17fillUpAeDebugInfoEP15AE_DEBUG_INFO_TP10CCU_AeAlgoP12AE_CORE_INITP27AE_CORE_CTRL_CCU_VSYNC_INFO() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_suspend() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBuffer::_ccuFreeBuffer(int, int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer14_ccuFreeBufferEiiiPc(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer14_ccuFreeBufferEiiiPc() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::getAeInfoForIsp(AE_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_AeInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe24ccuCtrlPreprocess_AeInitEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe24ccuCtrlPreprocess_AeInitEPvS1_() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuCtrlAe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf9CcuCtrlAeE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf15destroyInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf15destroyInstanceEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_abort() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_abortEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_abortEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::getDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE(void) {
    ALOGD("_ZThn28_N7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::CcuMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgrC1Ev(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgrC1Ev() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBuffer::_mmapMva(int, int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer8_mmapMvaEiPiPjjj(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer8_mmapMvaEiPiPjjj() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuAfBufferList::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf15CcuAfBufferList4initEi(void) {
    ALOGD("_ZN7NSCcuIf15CcuAfBufferList4initEi() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::getDebugInfo(AE_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_deque_afo_buffer(AFAcquireBuf_Reg_INFO_OUT_AP*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_deque_afo_bufferEP28AFAcquireBuf_Reg_INFO_OUT_AP() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuCtrl3ASync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf13CcuCtrl3ASyncE = NULL;

/* Demangled: NSCcuIf::CcuMgr::_importBuffersToKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr22_importBuffersToKernelEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr22_importBuffersToKernelEv() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuBufferList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf13CcuBufferListE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::isSupport3ASync() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync15isSupport3ASyncEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBuffer::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer5resetEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer5resetEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_SensorInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe28ccuCtrlPreprocess_SensorInitEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe28ccuCtrlPreprocess_SensorInitEPvS1_() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::ICcuCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf8ICcuCtrlE = NULL;

/* Exported Object: NSCcuIf::AFO_BUF */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf7AFO_BUFE = NULL;

/* Demangled: NSCcuIf::CcuCtrl3ASync::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::fillUpN3AedDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*, CCU_N3D_AE_INIT_STRUCT*, CCU_N3DAE_STRUCT*, CCU_strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync20fillUpN3AedDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TEP22CCU_N3D_AE_INIT_STRUCTP16CCU_N3DAE_STRUCTP15CCU_strAEOutput(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync20fillUpN3AedDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TEP22CCU_N3D_AE_INIT_STRUCTP16CCU_N3DAE_STRUCTP15CCU_strAEOutput() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuMgrPriv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf11ICcuMgrPriv14createInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf11ICcuMgrPriv14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::_uninitBufferLists() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr18_uninitBufferListsEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr18_uninitBufferListsEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuAfBufferList::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf15CcuAfBufferList6uninitEv(void) {
    ALOGD("_ZN7NSCcuIf15CcuAfBufferList6uninitEv() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::ccuControl(ccu_msg_id, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase10ccuControlE10ccu_msg_idPvS2_() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_abort() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf12ccu_af_abortEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf12ccu_af_abortEv() called");
    return 0;
}

/* Exported Object: NSCcuIf::CcuMgr::IsCcuMgrEnabled */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf6CcuMgr15IsCcuMgrEnabledE = NULL;

/* Exported Object: vtable for NSCcuIf::AbsCcuCtrlBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf14AbsCcuCtrlBaseE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::ICcuCtrlAf-in-NSCcuIf::CcuCtrlAf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf9CcuCtrlAfE28_NS_10ICcuCtrlAfE = NULL;

/* Demangled: NSCcuIf::ICcuMgrExt::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10ICcuMgrExt14createInstanceEPKc(void) {
    ALOGD("_ZN7NSCcuIf10ICcuMgrExt14createInstanceEPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCcuIf::CcuCtrlAf::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZTv0_n16_N7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCcuIf::CcuDrvUtil::sensorDevToTgInfo(NSIspTuning::ESensorDev_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj(void) {
    ALOGD("_ZN7NSCcuIf10CcuDrvUtil17sensorDevToTgInfoEN11NSIspTuning12ESensorDev_TEj() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::ccuResume(NSIspTuning::ESensorDev_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr9ccuResumeEN11NSIspTuning12ESensorDev_TEj(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr9ccuResumeEN11NSIspTuning12ESensorDev_TEj() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::CcuBufferList() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferListC1Ev(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferListC1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: NSCcuIf::CCU_DEFUALT_LOG_LV3 */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf19CCU_DEFUALT_LOG_LV3E = NULL;

/* Demangled: NSCcuIf::CcuBuffer::_ccuAllocBuffer(int, int, int*, char**, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer15_ccuAllocBufferEiiPiPPcb(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer15_ccuAllocBufferEiiPiPPcb() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_enque_afo_buffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf23ccu_af_enque_afo_bufferEPv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::ICcuCtrlAe-in-NSCcuIf::CcuCtrlAe */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf9CcuCtrlAeE28_NS_10ICcuCtrlAeE = NULL;

/* Demangled: NSCcuIf::CcuBufferList::_initControlBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferList19_initControlBuffersEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferList19_initControlBuffersEv() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::getCcuTgInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase12getCcuTgInfoEv(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase12getCcuTgInfoEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::_getFeatureType() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe15_getFeatureTypeEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe15_getFeatureTypeEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrlAe */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf9CcuCtrlAeE0_NS_14AbsCcuCtrlBaseE = NULL;

/* Demangled: NSCcuIf::CcuCtrl3ASync::getDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync12getDebugInfoEPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::ICcuCtrl3ASync-in-NSCcuIf::CcuCtrl3ASync */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf13CcuCtrl3ASyncE28_NS_14ICcuCtrl3ASyncE = NULL;

/* Demangled: NSCcuIf::CcuBuffer::_munmapMva(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer10_munmapMvaEi(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer10_munmapMvaEi() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPostprocess(ccu_msg_id, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe18ccuCtrlPostprocessE10ccu_msg_idPvS2_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe18ccuCtrlPostprocessE10ccu_msg_idPvS2_() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::ccu_control_handle_input(ccu_msg_id, NSCcuIf::CcuCtrlParamDescriptor const*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase24ccu_control_handle_inputE10ccu_msg_idPKNS_22CcuCtrlParamDescriptorEPvS5_(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase24ccu_control_handle_inputE10ccu_msg_idPKNS_22CcuCtrlParamDescriptorEPvS5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAe15destroyInstanceEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAe15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCcuIf::AbsCcuCtrlBase-in-NSCcuIf::CcuCtrlAf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7NSCcuIf9CcuCtrlAfE0_NS_14AbsCcuCtrlBaseE = NULL;

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_resume() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuMgrPriv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf11ICcuMgrPriv15destroyInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf11ICcuMgrPriv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::doIonCacheFlush(int, NSCcuIf::eIONCacheFlushType) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferList15doIonCacheFlushEiNS_18eIONCacheFlushTypeE(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferList15doIonCacheFlushEiNS_18eIONCacheFlushTypeE() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::AbsCcuCtrlBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBaseC2Ev(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBaseC2Ev() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf14ccu_af_suspendEv() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase6uninitEv(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase6uninitEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuMgrExt::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10ICcuMgrExt15destroyInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf10ICcuMgrExt15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf6CcuMgrE = NULL;

/* Demangled: NSCcuIf::CcuAfBufferList::_initAFBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf15CcuAfBufferList14_initAFBuffersEv(void) {
    ALOGD("_ZN7NSCcuIf15CcuAfBufferList14_initAFBuffersEv() called");
    return 0;
}

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf27ccu_drv_DbgLogEnable_ASSERTE = NULL;

/* Demangled: NSCcuIf::CcuMgr::_initBufferLists(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr16_initBufferListsEi(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr16_initBufferListsEi() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::ccuInit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr7ccuInitEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr7ccuInitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::CcuAfBufferList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf15CcuAfBufferListE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::getAeInfoForIsp(AE_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAe15getAeInfoForIspEP9AE_INFO_T() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf26ccu_drv_DbgLogEnable_DEBUGE = NULL;

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::isSupportFrameSync() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf13CcuCtrl3ASync18isSupportFrameSyncEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAe::getDebugInfo(AE_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAe12getDebugInfoEP15AE_DEBUG_INFO_T() called");
    return 0;
}

/* Exported Object: VTT for NSCcuIf::CcuCtrl3ASync */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7NSCcuIf13CcuCtrl3ASyncE = NULL;

/* Demangled: NSCcuIf::CcuMgr::ccuShutdown() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr11ccuShutdownEv(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr11ccuShutdownEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferList4initEi(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferList4initEi() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::_importBufferListToKernel(NSCcuIf::CcuBufferList*, import_mem_s*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr25_importBufferListToKernelEPNS_13CcuBufferListEP12import_mem_sPj(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr25_importBufferListToKernelEPNS_13CcuBufferListEP12import_mem_sPj() called");
    return 0;
}

/* Demangled: NSCcuIf::AbsCcuCtrlBase::resolveCmdIOBuf(NSCcuIf::CcuCtrlParamDescriptor const*, NSCcuIf::AbsCcuCtrlBase::CcuIOBufInfo*, NSCcuIf::AbsCcuCtrlBase::CcuIOBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14AbsCcuCtrlBase15resolveCmdIOBufEPKNS_22CcuCtrlParamDescriptorEPNS0_12CcuIOBufInfoES5_(void) {
    ALOGD("_ZN7NSCcuIf14AbsCcuCtrlBase15resolveCmdIOBufEPKNS_22CcuCtrlParamDescriptorEPNS0_12CcuIOBufInfoES5_() called");
    return 0;
}

/* Exported Object: NSCcuIf::AbsCcuCtrlBase::m_CcuccuControlMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf14AbsCcuCtrlBase20m_CcuccuControlMutexE = NULL;

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPostprocess_SensorInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe29ccuCtrlPostprocess_SensorInitEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe29ccuCtrlPostprocess_SensorInitEPvS1_() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf11ccu_af_stopEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf11ccu_af_stopEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf13ccu_af_resumeEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_stop() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf11ccu_af_stopEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf11ccu_af_stopEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::ccuCtrlPreprocess_OnchangeData(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe30ccuCtrlPreprocess_OnchangeDataEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe30ccuCtrlPreprocess_OnchangeDataEPvS1_() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::afCtrlInitBuf(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf13afCtrlInitBufEiPj(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf13afCtrlInitBufEiPj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_set_hw_regs(void*) */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuMgr::getCcuBufferList(ccu_feature_type, ccu_tg_info) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info(void) {
    ALOGD("_ZThn4_N7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_set_hw_regs(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf18ccu_af_set_hw_regsEPv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Exported Object: NSCcuIf::_CcuCtrl3ASyncSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf23_CcuCtrl3ASyncSingletonE = NULL;

/* Demangled: NSCcuIf::CcuMgr::CcuMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgrC2Ev(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgrC2Ev() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::_uninitControlBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferList21_uninitControlBuffersEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferList21_uninitControlBuffersEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAe15destroyInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAe15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv() called");
    return 0;
}

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf26ccu_drv_DbgLogEnable_ERRORE = NULL;

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_start() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_startEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf12ccu_af_startEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferList6uninitEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferList6uninitEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBuffer::init(int, bool, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer4initEibjj(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer4initEibjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::ccu_af_initialize() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf17ccu_af_initializeEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::_getFeatureType() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync15_getFeatureTypeEv(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync15_getFeatureTypeEv() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuMgrExt::ccuIsSupportSecurity() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf10ICcuMgrExt20ccuIsSupportSecurityEv(void) {
    ALOGD("_ZN7NSCcuIf10ICcuMgrExt20ccuIsSupportSecurityEv() called");
    return 0;
}

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf25ccu_drv_DbgLogEnable_WARNE = NULL;

/* Exported Object: NSCcuIf::ccu_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7NSCcuIf28ccu_drv_DbgLogEnable_VERBOSEE = NULL;

/* Exported Object: VTT for NSCcuIf::AbsCcuCtrlBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7NSCcuIf14AbsCcuCtrlBaseE = NULL;

/* Demangled: NSCcuIf::CcuCtrlAf::_getFeatureType() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf15_getFeatureTypeEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf15_getFeatureTypeEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::ccuSuspend(NSIspTuning::ESensorDev_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr10ccuSuspendEN11NSIspTuning12ESensorDev_TEj(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr10ccuSuspendEN11NSIspTuning12ESensorDev_TEj() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuMgr::getCcuBufferList(ccu_feature_type, ccu_tg_info) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info(void) {
    ALOGD("_ZN7NSCcuIf6CcuMgr16getCcuBufferListE16ccu_feature_type11ccu_tg_info() called");
    return 0;
}

/* Exported Object: vtable for NSCcuIf::Ccu3ASyncBufferList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCcuIf19Ccu3ASyncBufferListE = NULL;

/* Demangled: virtual thunk to NSCcuIf::AbsCcuCtrlBase::init(unsigned int, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZTv0_n16_N7NSCcuIf14AbsCcuCtrlBase4initEjN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::vaTomva(int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf7vaTomvaEiPc(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf7vaTomvaEiPc() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrl3ASync::ccuCtrlPreprocess_SetSyncState(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuCtrl3ASync30ccuCtrlPreprocess_SetSyncStateEPvS1_(void) {
    ALOGD("_ZN7NSCcuIf13CcuCtrl3ASync30ccuCtrlPreprocess_SetSyncStateEPvS1_() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuMgrPriv::isCcuBooted() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf11ICcuMgrPriv11isCcuBootedEv(void) {
    ALOGD("_ZN7NSCcuIf11ICcuMgrPriv11isCcuBootedEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuAfBufferList::_uninitAFBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf15CcuAfBufferList16_uninitAFBuffersEv(void) {
    ALOGD("_ZN7NSCcuIf15CcuAfBufferList16_uninitAFBuffersEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuCtrlAf::ccu_af_start() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuCtrlAf12ccu_af_startEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuCtrlAf12ccu_af_startEv() called");
    return 0;
}

/* Exported Object: VTT for NSCcuIf::CcuCtrlAf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7NSCcuIf9CcuCtrlAfE = NULL;

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrlAf::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf9CcuCtrlAf15destroyInstanceEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf9CcuCtrlAf15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBufferList::CcuBufferList() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf13CcuBufferListC2Ev(void) {
    ALOGD("_ZN7NSCcuIf13CcuBufferListC2Ev() called");
    return 0;
}

/* Demangled: NSCcuIf::CcuBuffer::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf9CcuBuffer6uninitEv(void) {
    ALOGD("_ZN7NSCcuIf9CcuBuffer6uninitEv() called");
    return 0;
}

/* Demangled: NSCcuIf::ICcuCtrl3ASync::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCcuIf14ICcuCtrl3ASync14createInstanceEv(void) {
    ALOGD("_ZN7NSCcuIf14ICcuCtrl3ASync14createInstanceEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCcuIf::CcuCtrl3ASync::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZThn28_N7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv(void) {
    ALOGD("_ZThn28_N7NSCcuIf13CcuCtrl3ASync15destroyInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
