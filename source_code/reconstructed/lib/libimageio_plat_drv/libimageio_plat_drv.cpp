/*
 * Reverse-Engineered Source for: libimageio_plat_drv.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libimageio_plat_drv"

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
#include "libimageio_plat_drv.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: CamPathPass1::config(CamPathPass1Parameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass16configEP21CamPathPass1Parameter(void) {
    ALOGD("_ZN12CamPathPass16configEP21CamPathPass1Parameter() called");
    return 0;
}

/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::push_back(_stISP_BUF_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_() called");
    return 0;
}

/* Demangled: CAM_TOP_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL7_enableEPv(void) {
    ALOGD("_ZN12CAM_TOP_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getIsInitTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP13getIsInitTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP13getIsInitTwinEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgrImp1_imme() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_immeC1Ev(void) {
    ALOGD("_ZN16CmdQMgrImp1_immeC1Ev() called");
    return 0;
}

/* Demangled: CamPathPass1::setP1ImgoCfg(std::__1::list<DMACfg, std::__1::allocator<DMACfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass112setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN12CamPathPass112setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::list(std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: CAMSV_TOP_CTRL::CAMSV_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRLC2Ev(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRLC2Ev() called");
    return 0;
}

/* Demangled: RlbMgr::getInstance(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6RlbMgr11getInstanceE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6RlbMgr11getInstanceE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CamPathPass1::_config(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass17_configEPv(void) {
    ALOGD("_ZN12CamPathPass17_configEPv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_IMGO = NULL;

/* Exported Object: vtable for DMA_RRZO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_RRZO = NULL;

/* Exported Object: func_twin_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_WARN = NULL;

/* Demangled: DMAO_CAMSV_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN12DMAO_CAMSV_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::startTwin(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9startTwinEi(void) {
    ALOGD("_ZN11TwinMgr_IMP9startTwinEi() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE7_configEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE7_configEv() called");
    return 0;
}

/* Exported Object: vtable for CAM_AMX_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_AMX_CTRL = NULL;

/* Demangled: CAMSV_TG_CTRL::CAMSV_TG_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_TG_CTRLC1Ev(void) {
    ALOGD("_ZN13CAMSV_TG_CTRLC1Ev() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::C_FSM::GetFSM() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL5C_FSM6GetFSMEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL5C_FSM6GetFSMEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::PipeCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL9PipeCheckEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL9PipeCheckEv() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL7_configEv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL7_configEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: DMA_CQ4::setCQTriggerMode(DMA_CQ4::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ416setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN7DMA_CQ416setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Exported Object: function_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_ERROR = NULL;

/* Exported Object: vtable for CAMSV_BUF_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV14CAMSV_BUF_CTRL = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_GetDuqQIdx() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp18CmdQMgr_GetDuqQIdxEv(void) {
    ALOGD("_ZN10CmdQMgrImp18CmdQMgr_GetDuqQIdxEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void) {
    ALOGD("_ZN12CAM_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::push_back(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_back(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr19CmdQMgr_clearCQModeEPS_j(void) {
    ALOGD("_ZN10DupCmdQMgr19CmdQMgr_clearCQModeEPS_j() called");
    return 0;
}

/* Exported Object: vtable for CmdQMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CmdQMgrImp = NULL;

/* Demangled: CAM_BUF_CTRL::updateState(CAM_BUF_CTRL::E_CAM_STATE, ISP_HW_MODULE, CAM_BUF_CTRL::E_CAM_DMA_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL11updateStateENS_11E_CAM_STATEE13ISP_HW_MODULENS_14E_CAM_DMA_TYPEE(void) {
    ALOGD("_ZN12CAM_BUF_CTRL11updateStateENS_11E_CAM_STATEE13ISP_HW_MODULENS_14E_CAM_DMA_TYPEE() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::enque_drop() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl10enque_dropEv(void) {
    ALOGD("_ZN15CamPath_BufCtrl10enque_dropEv() called");
    return 0;
}

/* Demangled: CAM_DPD_CTRL::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_DPD_CTRL9_write2CQEv(void) {
    ALOGD("_ZN12CAM_DPD_CTRL9_write2CQEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP12getCurModuleEv(void) {
    ALOGD("_ZN11TwinMgr_IMP12getCurModuleEv() called");
    return 0;
}

/* Demangled: DMA_CQ0::SetCQupdateCnt() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ014SetCQupdateCntEv(void) {
    ALOGD("_ZN7DMA_CQ014SetCQupdateCntEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: PIPE_CHECK::m_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN10PIPE_CHECK6m_lockE = NULL;

/* Demangled: RlbMgrImp::acquire(ISP_HW_MODULE, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImp7acquireE13ISP_HW_MODULEjPj(void) {
    ALOGD("_ZN9RlbMgrImp7acquireE13ISP_HW_MODULEjPj() called");
    return 0;
}

/* Demangled: CamPathPass1::suspend(CamPathPass1::E_CAMPATH_SUSPEND_OP) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass17suspendENS_20E_CAMPATH_SUSPEND_OPE(void) {
    ALOGD("_ZN12CamPathPass17suspendENS_20E_CAMPATH_SUSPEND_OPE() called");
    return 0;
}

/* Demangled: Header_UFGO::GetRegInfo(unsigned int, IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFGO10GetRegInfoEjP6IspDrv(void) {
    ALOGD("_ZN11Header_UFGO10GetRegInfoEjP6IspDrv() called");
    return 0;
}

/* Exported Object: func_twin_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for BUF_CTRL_CAMSV_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV19BUF_CTRL_CAMSV_IMGO = NULL;

/* Exported Object: TwinMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_INFO = NULL;

/* Demangled: TwinMgr::ModuleName(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7TwinMgr10ModuleNameE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7TwinMgr10ModuleNameE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned long long, std::__1::allocator<unsigned long long>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE26__swap_out_circular_bufferERNS_14__split_bufferIyRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE26__swap_out_circular_bufferERNS_14__split_bufferIyRS2_EE() called");
    return 0;
}

/* Exported Object: g_isp_ca_init */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_init = NULL;

/* Demangled: CAM_RAW_PIPE::setIMG_SEL() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE10setIMG_SELEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE10setIMG_SELEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_LMVO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_LMVO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_LMVO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::FSM_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9FSM_CHECKEj(void) {
    ALOGD("_ZN11TwinMgr_IMP9FSM_CHECKEj() called");
    return 0;
}

/* Exported Object: vtable for CAM_SPS_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_SPS_CTRL = NULL;

/* Demangled: TwinMgr_IMP::HW_recover(E_CAMPATH_STEP) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10HW_recoverE14E_CAMPATH_STEP(void) {
    ALOGD("_ZN11TwinMgr_IMP10HW_recoverE14E_CAMPATH_STEP() called");
    return 0;
}

/* Exported Object: RlbMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_ERROR = NULL;

/* Demangled: DMA_CQ10::IO2CQ(DMA_CQ10::E_Write2CQ, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ105IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN8DMA_CQ105IO2CQENS_10E_Write2CQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::push_back(_stISP_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Exported Object: vtable for DMA_LCSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_LCSO = NULL;

/* Demangled: CAM_TWIN_PIPE::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE7_configEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE7_configEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getIsTwin(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9getIsTwinEi(void) {
    ALOGD("_ZN11TwinMgr_IMP9getIsTwinEi() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_attach_ext(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr18CmdQMgr_attach_extEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10DupCmdQMgr18CmdQMgr_attach_extEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to CAM_MAGIC_CTRL::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZThn264_N14CAM_MAGIC_CTRL9_write2CQEv(void) {
    ALOGD("_ZThn264_N14CAM_MAGIC_CTRL9_write2CQEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::C_FSM::SetFSM(CAMSV_BUF_CTRL::C_FSM::E_STATE, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL5C_FSM6SetFSMENS0_7E_STATEEi(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL5C_FSM6SetFSMENS0_7E_STATEEi() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::PBC_Start() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl9PBC_StartEv(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl9PBC_StartEv() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_ERROR = NULL;

/* Exported Object: vtable for DMA_CQ10 */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_CQ10 = NULL;

/* Demangled: Header_IMGO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_IMGO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_IMGO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: DMA_CQ0::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ09_write2CQEv(void) {
    ALOGD("_ZN7DMA_CQ09_write2CQEv() called");
    return 0;
}

/* Exported Object: g_isp_ca_registersharemem */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_registersharemem = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10CmdQMgrImp18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ11 */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_CQ11 = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: CAM_RCP_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RCP_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_RCP_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: vtable for CAMSV_DFS_Mgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV13CAMSV_DFS_Mgr = NULL;

/* Exported Object: vtable for DMA_CQ12 */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_CQ12 = NULL;

/* Demangled: CamPathPass1::enqueueBuf(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass110enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN12CamPathPass110enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: CAM_MAGIC_CTRL::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_MAGIC_CTRL9_write2CQEv(void) {
    ALOGD("_ZN14CAM_MAGIC_CTRL9_write2CQEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to CAM_MAGIC_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZThn264_N14CAM_MAGIC_CTRL7_configEv(void) {
    ALOGD("_ZThn264_N14CAM_MAGIC_CTRL7_configEv() called");
    return 0;
}

/* Demangled: UniMgrImp::FSM_CHK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp7FSM_CHKEj(void) {
    ALOGD("_ZN9UniMgrImp7FSM_CHKEj() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: CmdQMgrImp3_imme::CmdQMgrImp3_imme() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_immeC1Ev(void) {
    ALOGD("_ZN16CmdQMgrImp3_immeC1Ev() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_detach(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp13UniMgr_detachE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp13UniMgr_detachE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: capibility::GetRRZSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility10GetRRZSizeEv(void) {
    ALOGD("_ZN10capibility10GetRRZSizeEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_stop(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr11UniMgr_stopE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr11UniMgr_stopE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::CAM_TIMESTAMP() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMPC1Ev(void) {
    ALOGD("_ZN13CAM_TIMESTAMPC1Ev() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::dumpCQReg() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE9dumpCQRegEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE9dumpCQRegEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::PBC_config(void*, std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, NSImageio::NSIspio::PortID const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_FSM_CHECK(CAM_DFS_Mgr::E_FSM) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr17CAM_DFS_FSM_CHECKENS_5E_FSME(void) {
    ALOGD("_ZN11CAM_DFS_Mgr17CAM_DFS_FSM_CHECKENS_5E_FSME() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<ST_BUF_INFO__> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrI13ST_BUF_INFO__E = NULL;

/* Demangled: CAM_XMX_CTRL::config(CAM_RAW_PIPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_XMX_CTRL6configEP12CAM_RAW_PIPE(void) {
    ALOGD("_ZN12CAM_XMX_CTRL6configEP12CAM_RAW_PIPE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::enqueTwin(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9enqueTwinEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP9enqueTwinEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<IspDrvVir*, std::__1::allocator<IspDrvVir*> >::__push_back_slow_path<IspDrvVir*>(IspDrvVir*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_specialCQCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme21CmdQMgr_specialCQCtrlEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme21CmdQMgr_specialCQCtrlEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73> std::__1::move<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73, ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__14moveI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Demangled: std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::splice(std::__1::__list_const_iterator<CAM_TWIN_PIPE::T_TWIN_DMA, void*>, std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE6spliceENS_21__list_const_iteratorIS2_PvEERS5_(void) {
    ALOGD("_ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE6spliceENS_21__list_const_iteratorIS2_PvEERS5_() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: IspFunction_B::IspFunction_B() */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_BC1Ev(void) {
    ALOGD("_ZN13IspFunction_BC1Ev() called");
    return 0;
}

/* Demangled: PIPE_CHECK::InPutSize_TG(unsigned int&, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK12InPutSize_TGERjS0_i(void) {
    ALOGD("_ZN10PIPE_CHECK12InPutSize_TGERjS0_i() called");
    return 0;
}

/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::erase(std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>, std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_() called");
    return 0;
}

/* Demangled: BUF_CTRL_PSO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PSO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN12BUF_CTRL_PSO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: BUF_CTRL_RSSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_RSSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_RSSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL7suspendEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL7suspendEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::TwinMgr_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMPC2Ev(void) {
    ALOGD("_ZN11TwinMgr_IMPC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_front(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_CheckSecReg(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp18SecMgr_CheckSecRegE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN9SecMgrImp18SecMgr_CheckSecRegE13ISP_HW_MODULEj() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp13CmdQMgr_startEv(void) {
    ALOGD("_ZN10CmdQMgrImp13CmdQMgr_startEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPED2Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::TimeStamp_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP15TimeStamp_resetEv(void) {
    ALOGD("_ZN13CAM_TIMESTAMP15TimeStamp_resetEv() called");
    return 0;
}

/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: CAM_DMX_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_DMX_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_DMX_CTRL7_configEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_LoadCA() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp13SecMgr_LoadCAEv(void) {
    ALOGD("_ZN9SecMgrImp13SecMgr_LoadCAEv() called");
    return 0;
}

/* Demangled: CamPathPass1::dynamicPakFmtMapping(NSCam::EImageFormat, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass120dynamicPakFmtMappingEN5NSCam12EImageFormatEPj(void) {
    ALOGD("_ZN12CamPathPass120dynamicPakFmtMappingEN5NSCam12EImageFormatEPj() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::uninitTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10uninitTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP10uninitTwinEv() called");
    return 0;
}

/* Exported Object: g_isp_ca_migratetable */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_migratetable = NULL;

/* Demangled: CAM_DFS_Mgr::CAM_DFS_STOP() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr12CAM_DFS_STOPEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr12CAM_DFS_STOPEv() called");
    return 0;
}

/* Demangled: Header_RSSO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RSSO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_RSSO12Header_FlashEj() called");
    return 0;
}

/* Demangled: BUF_CTRL_RRZO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_RRZO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_RRZO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: DMAO_B::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B4InitEv(void) {
    ALOGD("_ZN6DMAO_B4InitEv() called");
    return 0;
}

/* Demangled: capibility::GetCapibility(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, _tCAM_rst&, E_CAM_Query_OP) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst14E_CAM_Query_OP(void) {
    ALOGD("_ZN10capibility13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst14E_CAM_Query_OP() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B7_enableEPv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B7_enableEPv() called");
    return 0;
}

/* Demangled: CAMSV_PIPE_CHECK::DMAO_STATUS() */
extern "C" __attribute__((visibility("default"))) int _ZN16CAMSV_PIPE_CHECK11DMAO_STATUSEv(void) {
    ALOGD("_ZN16CAMSV_PIPE_CHECK11DMAO_STATUSEv() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_suspend(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr14UniMgr_suspendE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr14UniMgr_suspendE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: capibility::m_DTwin */
extern "C" __attribute__((visibility("default"))) void* _ZN10capibility7m_DTwinE = NULL;

/* Exported Object: vtable for QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE = NULL;

/* Demangled: UniMgrImp::UniMgr_suspend(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp14UniMgr_suspendE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp14UniMgr_suspendE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp18SecMgr_sendCommandEiiii(void) {
    ALOGD("_ZN9SecMgrImp18SecMgr_sendCommandEiiii() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj() called");
    return 0;
}

/* Exported Object: vtable for DMAO_CAMSV_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DMAO_CAMSV_B = NULL;

/* Demangled: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::__push_back_slow_path<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&>(std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_QueryFHSecMVA(SecMgr_SecInfo, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp20SecMgr_QueryFHSecMVAE14SecMgr_SecInfoPj(void) {
    ALOGD("_ZN9SecMgrImp20SecMgr_QueryFHSecMVAE14SecMgr_SecInfoPj() called");
    return 0;
}

/* Exported Object: g_EnDbgCfg */
extern "C" __attribute__((visibility("default"))) void* g_EnDbgCfg = NULL;

/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAMSV_DFS_Mgr(char const*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_MgrC1EPKc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13CAMSV_DFS_MgrC1EPKc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::configNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE12configNotifyEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE12configNotifyEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE9setTuningEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE9setTuningEv() called");
    return 0;
}

/* Demangled: Header_RRZO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RRZO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_RRZO12Header_FlashEj() called");
    return 0;
}

/* Exported Object: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeMinS */
extern "C" __attribute__((visibility("default"))) void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeMinS = NULL;

/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_rlb(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE23update_afterRunTwin_rlbEjjj(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE23update_afterRunTwin_rlbEjjj() called");
    return 0;
}

/* Demangled: PIPE_CHECK::LMV_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9LMV_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9LMV_CHECKEv() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_FH(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE22update_afterRunTwin_FHEj(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE22update_afterRunTwin_FHEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getTwinHeaderSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP17getTwinHeaderSizeEj(void) {
    ALOGD("_ZN11TwinMgr_IMP17getTwinHeaderSizeEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::dropTwin(TWIN_MGR_PATH_CFG_IN_PARAM const&, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP8dropTwinERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_(void) {
    ALOGD("_ZN11TwinMgr_IMP8dropTwinERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_() called");
    return 0;
}

/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: DMA_CQ4::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ46TrigCQEv(void) {
    ALOGD("_ZN7DMA_CQ46TrigCQEv() called");
    return 0;
}

/* Exported Object: vtable for Path_BufCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTV12Path_BufCtrl = NULL;

/* Exported Object: vtable for BUF_CTRL_PSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV12BUF_CTRL_PSO = NULL;

/* Demangled: CAM_TWIN_PIPE::CAM_TWIN_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPEC2Ev(void) {
    ALOGD("_ZN13CAM_TWIN_PIPEC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE() called");
    return 0;
}

/* Demangled: QueueMgr<ST_BUF_INFO__>::sendCmd(QueueMgr<ST_BUF_INFO__>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrI13ST_BUF_INFO__E7sendCmdENS1_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrI13ST_BUF_INFO__E7sendCmdENS1_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::push_back(ST_BUF_INFO__ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9push_backERKS1_(void) {
    ALOGD("_ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9push_backERKS1_() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_INFO = NULL;

/* Demangled: TwinMgr_IMP::stopTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP8stopTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP8stopTwinEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme13CmdQMgr_startEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme13CmdQMgr_startEv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_RRZO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_RRZO = NULL;

/* Demangled: CmdQMgrImp2::CmdQMgr_detach() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp214CmdQMgr_detachEv(void) {
    ALOGD("_ZN11CmdQMgrImp214CmdQMgr_detachEv() called");
    return 0;
}

/* Demangled: CAM_TOP_CTRL::HW_recover(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL10HW_recoverEj(void) {
    ALOGD("_ZN12CAM_TOP_CTRL10HW_recoverEj() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: Header_UFGO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFGO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_UFGO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::TimeStamp_calibration(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP21TimeStamp_calibrationE13ISP_HW_MODULE(void) {
    ALOGD("_ZN13CAM_TIMESTAMP21TimeStamp_calibrationE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: BUF_CTRL_AFO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AFO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN12BUF_CTRL_AFO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::createInstance(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP14createInstanceE13ISP_HW_MODULE(void) {
    ALOGD("_ZN11TwinMgr_IMP14createInstanceE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::CQ_cfg(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP6CQ_cfgEii(void) {
    ALOGD("_ZN11TwinMgr_IMP6CQ_cfgEii() called");
    return 0;
}

/* Demangled: RlbMgrImp::release(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImp7releaseE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9RlbMgrImp7releaseE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: SENINF_DBG::m_fp_Sen */
extern "C" __attribute__((visibility("default"))) void* _ZN10SENINF_DBG8m_fp_SenE = NULL;

/* Exported Object: SENINF_DBG::m_fp_Sen_Camsv */
extern "C" __attribute__((visibility("default"))) void* _ZN10SENINF_DBG14m_fp_Sen_CamsvE = NULL;

/* Demangled: std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31> std::__1::move_backward<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31, _stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__113move_backwardI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Demangled: Header_UFGO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFGO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_UFGO12Header_FlashEj() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_AFO */
extern "C" __attribute__((visibility("default"))) void* _ZTV12BUF_CTRL_AFO = NULL;

/* Exported Object: vtable for DMA_AAO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_AAO = NULL;

/* Demangled: std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >::__swap_out_circular_buffer(std::__1::__split_buffer<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Exported Object: g_isp_ca_close */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_close = NULL;

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCurCycleObj(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme22CmdQMgr_GetCurCycleObjEj(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme22CmdQMgr_GetCurCycleObjEj() called");
    return 0;
}

/* Demangled: DMAI_B::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_B9_write2CQEv(void) {
    ALOGD("_ZN6DMAI_B9_write2CQEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::erase(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const* const*, int, 341>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RS9_PKSA_iLi341EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RS9_PKSA_iLi341EEE() called");
    return 0;
}

/* Exported Object: path_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_ERROR = NULL;

/* Demangled: TwinMgr_IMP::twinInfoUpdate(TWIN_MGR_PATH_CFG_IN_PARAM const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP14twinInfoUpdateERK26TWIN_MGR_PATH_CFG_IN_PARAMi(void) {
    ALOGD("_ZN11TwinMgr_IMP14twinInfoUpdateERK26TWIN_MGR_PATH_CFG_IN_PARAMi() called");
    return 0;
}

/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::updateFrameTime(unsigned int, unsigned int, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE(void) {
    ALOGD("_ZN12CAM_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL8_disableEPv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: Header_LCSO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LCSO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_LCSO12Header_FlashEj() called");
    return 0;
}

/* Demangled: capibility::GetRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility8GetRatioEj(void) {
    ALOGD("_ZN10capibility8GetRatioEj() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImpC2Ev(void) {
    ALOGD("_ZN10CmdQMgrImpC2Ev() called");
    return 0;
}

/* Demangled: DMA_CQ5::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ56TrigCQEv(void) {
    ALOGD("_ZN7DMA_CQ56TrigCQEv() called");
    return 0;
}

/* Demangled: DMA_CQ11::setCQTriggerMode(DMA_CQ11::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1116setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN8DMA_CQ1116setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::dynamicPak(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE10dynamicPakEj(void) {
    ALOGD("_ZN12CAM_RAW_PIPE10dynamicPakEj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned long long, std::__1::allocator<unsigned long long>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<unsigned long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIyRNS_9allocatorIyEEEC2EjjS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIyRNS_9allocatorIyEEEC2EjjS3_() called");
    return 0;
}

/* Demangled: capibility::GetPipeSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility11GetPipeSizeEv(void) {
    ALOGD("_ZN10capibility11GetPipeSizeEv() called");
    return 0;
}

/* Exported Object: cam_cap_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_INFO = NULL;

/* Demangled: DMAI_B::DMAI_B() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_BC2Ev(void) {
    ALOGD("_ZN6DMAI_BC2Ev() called");
    return 0;
}

/* Demangled: CAM_RRZ_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RRZ_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_RRZ_CTRL7_configEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp37FSM_CHKEjPKc(void) {
    ALOGD("_ZN11CmdQMgrImp37FSM_CHKEjPKc() called");
    return 0;
}

/* Demangled: CamPathPass1::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass16uninitEv(void) {
    ALOGD("_ZN12CamPathPass16uninitEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12CAM_BUF_CTRL12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::HW_recover(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE10HW_recoverEj(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE10HW_recoverEj() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73> std::__1::move_backward<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73, ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__113move_backwardI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Exported Object: func_twin_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_VERBOSE = NULL;

/* Demangled: DMAO_CAMSV_B::DMAO_CAMSV_B() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_BC2Ev(void) {
    ALOGD("_ZN12DMAO_CAMSV_BC2Ev() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme7FSM_CHKEjPKc(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme7FSM_CHKEjPKc() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgr_GetCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp320CmdQMgr_GetCurModuleEv(void) {
    ALOGD("_ZN11CmdQMgrImp320CmdQMgr_GetCurModuleEv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_LCSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_LCSO = NULL;

/* Demangled: DMA_UFEO::check(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_UFEO5checkERi(void) {
    ALOGD("_ZN8DMA_UFEO5checkERi() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_specialCQCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp21CmdQMgr_specialCQCtrlEv(void) {
    ALOGD("_ZN10CmdQMgrImp21CmdQMgr_specialCQCtrlEv() called");
    return 0;
}

/* Exported Object: vtable for Header_FLKO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_FLKO = NULL;

/* Demangled: CmdQMgrImp3::CmdQMgrImp3() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp3C1Ev(void) {
    ALOGD("_ZN11CmdQMgrImp3C1Ev() called");
    return 0;
}

/* Exported Object: g_isp_ca_handlecreate */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_handlecreate = NULL;

/* Demangled: capibility::GetFormat(unsigned int, _tCAM_rst&) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility9GetFormatEjR9_tCAM_rst(void) {
    ALOGD("_ZN10capibility9GetFormatEjR9_tCAM_rst() called");
    return 0;
}

/* Demangled: CAM_TG_CTRL::CAM_TG_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_TG_CTRLC1Ev(void) {
    ALOGD("_ZN11CAM_TG_CTRLC1Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: DMA_CQ0::setLoadMode(DMA_CQ0::E_LoadMode, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ011setLoadModeENS_10E_LoadModeEi(void) {
    ALOGD("_ZN7DMA_CQ011setLoadModeENS_10E_LoadModeEi() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: TwinMgr_IMP::dequeueBuf(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN11TwinMgr_IMP10dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_WARN = NULL;

/* Demangled: IspFunction_B::write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_B8write2CQEv(void) {
    ALOGD("_ZN13IspFunction_B8write2CQEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgrImp1_imme() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_immeC2Ev(void) {
    ALOGD("_ZN16CmdQMgrImp1_immeC2Ev() called");
    return 0;
}

/* Exported Object: func_twin_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_ERROR = NULL;

/* Demangled: CAMSV_BUF_CTRL::waitBufReady() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL12waitBufReadyEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL12waitBufReadyEv() called");
    return 0;
}

/* Demangled: QueueMgr<int>::sendCmd(QueueMgr<int>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrIiE7sendCmdENS0_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrIiE7sendCmdENS0_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: CamPathPass1::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass16resumeEv(void) {
    ALOGD("_ZN12CamPathPass16resumeEv() called");
    return 0;
}

/* Demangled: CAM_TOP_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_TOP_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: vtable for CmdQMgrImp1_imme */
extern "C" __attribute__((visibility("default"))) void* _ZTV16CmdQMgrImp1_imme = NULL;

/* Demangled: CAM_TIMESTAMP::getInstance(ISP_HW_MODULE, ISP_DRV_CAM const*, IspDrvCamsv const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP11getInstanceE13ISP_HW_MODULEPK11ISP_DRV_CAMPK11IspDrvCamsv(void) {
    ALOGD("_ZN13CAM_TIMESTAMP11getInstanceE13ISP_HW_MODULEPK11ISP_DRV_CAMPK11IspDrvCamsv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_PDO */
extern "C" __attribute__((visibility("default"))) void* _ZTV12BUF_CTRL_PDO = NULL;

/* Exported Object: vtable for DMAO_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV6DMAO_B = NULL;

/* Demangled: CAMSV_TG_CTRL::CAMSV_TG_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_TG_CTRLC2Ev(void) {
    ALOGD("_ZN13CAMSV_TG_CTRLC2Ev() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_detach() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme14CmdQMgr_detachEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme14CmdQMgr_detachEv() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::setSGG2() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE7setSGG2Ev(void) {
    ALOGD("_ZN12CAM_YUV_PIPE7setSGG2Ev() called");
    return 0;
}

/* Demangled: QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > >::sendCmd(QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > >::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE7sendCmdENS6_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE7sendCmdENS6_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: cam_cap_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_ASSERT = NULL;

/* Demangled: SecMgr::SecMgr_GetSecureCamStatus(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6SecMgr25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6SecMgr25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::_init() */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL5_initEv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL5_initEv() called");
    return 0;
}

/* Exported Object: PIPE_CHECK::m_PDI_VA */
extern "C" __attribute__((visibility("default"))) void* _ZN10PIPE_CHECK8m_PDI_VAE = NULL;

/* Demangled: CAMSV_TG_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_TG_CTRL7_enableEPv(void) {
    ALOGD("_ZN13CAMSV_TG_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::setP1Update(P1_TUNING_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11setP1UpdateEP16P1_TUNING_NOTIFY(void) {
    ALOGD("_ZN11TwinMgr_IMP11setP1UpdateEP16P1_TUNING_NOTIFY() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_GetSecurePortStatus(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN9SecMgrImp26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj() called");
    return 0;
}

/* Exported Object: svdfs_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_DEBUG = NULL;

/* Exported Object: function_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_VERBOSE = NULL;

/* Demangled: BUF_CTRL_RRZO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_RRZO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_RRZO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: SecMgr::SecMgr_GetMgrObj() */
extern "C" __attribute__((visibility("default"))) int _ZN6SecMgr16SecMgr_GetMgrObjEv(void) {
    ALOGD("_ZN6SecMgr16SecMgr_GetMgrObjEv() called");
    return 0;
}

/* Demangled: DMA_CQ0::DummyDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ015DummyDescriptorEv(void) {
    ALOGD("_ZN7DMA_CQ015DummyDescriptorEv() called");
    return 0;
}

/* Exported Object: cam_ts_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_INFO = NULL;

/* Demangled: Header_RRZO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RRZO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_RRZO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFGO::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFGO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void) {
    ALOGD("_ZN13BUF_CTRL_UFGO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr15destroyInstanceEPKc(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_ERROR = NULL;

/* Demangled: DMA_CQ0::setBaseAddr_byCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ016setBaseAddr_byCQEv(void) {
    ALOGD("_ZN7DMA_CQ016setBaseAddr_byCQEv() called");
    return 0;
}

/* Demangled: DMA_CQ7::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ76TrigCQEv(void) {
    ALOGD("_ZN7DMA_CQ76TrigCQEv() called");
    return 0;
}

/* Demangled: DMA_CQ8::setCQTriggerMode(DMA_CQ8::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ816setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN7DMA_CQ816setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_WARN = NULL;

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::vector(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_() called");
    return 0;
}

/* Exported Object: vtable for Header_RSSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_RSSO = NULL;

/* Demangled: Header_CAMSV_IMGO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN17Header_CAMSV_IMGO12Header_DequeEjPv(void) {
    ALOGD("_ZN17Header_CAMSV_IMGO12Header_DequeEjPv() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_DEBUG = NULL;

/* Demangled: TwinMgr_IMP::popTwinRst(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10popTwinRstEj(void) {
    ALOGD("_ZN11TwinMgr_IMP10popTwinRstEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getTwinALLCropinfo(std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >*, std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP18getTwinALLCropinfoEPNSt3__16vectorINS1_I13ISP_HW_MODULENS0_9allocatorIS2_EEEENS3_IS5_EEEEPNS1_INS1_IN9NSImageio7NSIspio9STImgCropENS3_ISB_EEEENS3_ISD_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP18getTwinALLCropinfoEPNSt3__16vectorINS1_I13ISP_HW_MODULENS0_9allocatorIS2_EEEENS3_IS5_EEEEPNS1_INS1_IN9NSImageio7NSIspio9STImgCropENS3_ISB_EEEENS3_ISD_EEEE() called");
    return 0;
}

/* Exported Object: svdfs_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_WARN = NULL;

/* Demangled: CamPathPass1::updatePath(UpdatePathParam) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass110updatePathE15UpdatePathParam(void) {
    ALOGD("_ZN12CamPathPass110updatePathE15UpdatePathParam() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_TwinEn(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE13update_TwinEnEi(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE13update_TwinEnEi() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::splice(std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6spliceENS_21__list_const_iteratorIS1_PvEERS4_(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6spliceENS_21__list_const_iteratorIS1_PvEERS4_() called");
    return 0;
}

/* Exported Object: vtable for DMA_FLKO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_FLKO = NULL;

/* Demangled: CAM_TWIN_PIPE::clr_RunTwinRst(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE14clr_RunTwinRstEj(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE14clr_RunTwinRstEj() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_GetSupportPort(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp21SecMgr_GetSupportPortEi(void) {
    ALOGD("_ZN9SecMgrImp21SecMgr_GetSupportPortEi() called");
    return 0;
}

/* Demangled: Header_LMVO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LMVO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_LMVO12Header_DequeEjPv() called");
    return 0;
}

/* Exported Object: vtable for Header_AAO */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Header_AAO = NULL;

/* Exported Object: func_twin_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_INFO = NULL;

/* Demangled: CAMSV_BUF_CTRL::updateFrameTime(unsigned int, unsigned int, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: PIPE_CHECK::PATH_CHECK(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK10PATH_CHECKEi(void) {
    ALOGD("_ZN10PIPE_CHECK10PATH_CHECKEi() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_Dma() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE23update_afterRunTwin_DmaEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE23update_afterRunTwin_DmaEv() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_WARN = NULL;

/* Demangled: IspFunction_B::config() */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_B6configEv(void) {
    ALOGD("_ZN13IspFunction_B6configEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: CAMSV_BUF_CTRL::m_fps */
extern "C" __attribute__((visibility("default"))) void* _ZN14CAMSV_BUF_CTRL5m_fpsE = NULL;

/* Demangled: SecMgrImp::SecMgr_P1MigrateTable(SecMgr_SecInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp21SecMgr_P1MigrateTableEP14SecMgr_SecInfo(void) {
    ALOGD("_ZN9SecMgrImp21SecMgr_P1MigrateTableEP14SecMgr_SecInfo() called");
    return 0;
}

/* Demangled: DMA_CQ8::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ86TrigCQEv(void) {
    ALOGD("_ZN7DMA_CQ86TrigCQEv() called");
    return 0;
}

/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::erase(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__ const*, ST_BUF_INFO__ const&, ST_BUF_INFO__ const* const*, int, 73>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi73EEE(void) {
    ALOGD("_ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi73EEE() called");
    return 0;
}

/* Demangled: CAM_TG_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_TG_CTRL7_enableEPv(void) {
    ALOGD("_ZN11CAM_TG_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: PIPE_CHECK::BNR_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9BNR_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9BNR_CHECKEv() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_cq() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE9update_cqEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE9update_cqEv() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B4InitEv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B4InitEv() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_STOP() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr12CAM_DFS_STOPEv(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr12CAM_DFS_STOPEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgrImp3_imme() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_immeC2Ev(void) {
    ALOGD("_ZN16CmdQMgrImp3_immeC2Ev() called");
    return 0;
}

/* Exported Object: Header_RRZO::m_tagAddrLock */
extern "C" __attribute__((visibility("default"))) void* _ZN11Header_RRZO13m_tagAddrLockE = NULL;

/* Demangled: SecMgrImp::SecMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp12SecMgr_startEv(void) {
    ALOGD("_ZN9SecMgrImp12SecMgr_startEv() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_Mgr(char const*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_MgrC1EPKc13ISP_HW_MODULE(void) {
    ALOGD("_ZN11CAM_DFS_MgrC1EPKc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setLCS() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE6setLCSEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE6setLCSEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: PIPE_CHECK::LSC_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9LSC_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9LSC_CHECKEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::setP1RrzCfg(std::__1::list<IspRrzCfg, std::__1::allocator<IspRrzCfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP11setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: Header_PDO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PDO12Header_FlashEj(void) {
    ALOGD("_ZN10Header_PDO12Header_FlashEj() called");
    return 0;
}

/* Demangled: BUF_CTRL_AFO::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AFO12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12BUF_CTRL_AFO12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Exported Object: vtable for CAM_RCP_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_RCP_CTRL = NULL;

/* Demangled: TwinMgr_IMP::resumeTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10resumeTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP10resumeTwinEv() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::CAM_TIMESTAMP() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMPC2Ev(void) {
    ALOGD("_ZN13CAM_TIMESTAMPC2Ev() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_Cfg(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme11CmdQMgr_CfgEjj(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme11CmdQMgr_CfgEjj() called");
    return 0;
}

/* Demangled: BUF_CTRL_PDO::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PDO12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12BUF_CTRL_PDO12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::CQ_Trig() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP7CQ_TrigEv(void) {
    ALOGD("_ZN11TwinMgr_IMP7CQ_TrigEv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::deque(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN15CamPath_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::GetTwinRegAddr(ISP_HW_MODULE, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE14GetTwinRegAddrE13ISP_HW_MODULEPj(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE14GetTwinRegAddrE13ISP_HW_MODULEPj() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE8_disableEPv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE8_disableEPv() called");
    return 0;
}

/* Exported Object: UniMgr::m_module */
extern "C" __attribute__((visibility("default"))) void* _ZN6UniMgr8m_moduleE = NULL;

/* Demangled: UniMgrImp::UniMgr_resume(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp13UniMgr_resumeE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp13UniMgr_resumeE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: PIPE_CHECK::InPutSize_DMX(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK13InPutSize_DMXERjS0_(void) {
    ALOGD("_ZN10PIPE_CHECK13InPutSize_DMXERjS0_() called");
    return 0;
}

/* Demangled: PIPE_CHECK::PD_TABLE_CHECK(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK14PD_TABLE_CHECKEjj(void) {
    ALOGD("_ZN10PIPE_CHECK14PD_TABLE_CHECKEjj() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_stop(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp11UniMgr_stopE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp11UniMgr_stopE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: capibility::GetHeaderSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility13GetHeaderSizeEv(void) {
    ALOGD("_ZN10capibility13GetHeaderSizeEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::CAM_BUF_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRLC1Ev(void) {
    ALOGD("_ZN12CAM_BUF_CTRLC1Ev() called");
    return 0;
}

/* Demangled: IspFunction_B::IspFunction_B() */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_BC2Ev(void) {
    ALOGD("_ZN13IspFunction_BC2Ev() called");
    return 0;
}

/* Exported Object: TwinMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: UniMgrImp::UniMgr_start(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp12UniMgr_startE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp12UniMgr_startE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_Vsync() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr13CAM_DBS_VsyncEv(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr13CAM_DBS_VsyncEv() called");
    return 0;
}

/* Demangled: DMAO_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN6DMAO_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::push_front(_stISP_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: PIPE_CHECK::PDO_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9PDO_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9PDO_CHECKEv() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_GetCurLv() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr16CAM_DFS_GetCurLvEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr16CAM_DFS_GetCurLvEv() called");
    return 0;
}

/* Demangled: Header_LCSO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LCSO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_LCSO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: CAM_TG_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_TG_CTRL8_disableEPv(void) {
    ALOGD("_ZN11CAM_TG_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: Header_CAMSV_IMGO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17Header_CAMSV_IMGO12Header_FlashEj(void) {
    ALOGD("_ZN17Header_CAMSV_IMGO12Header_FlashEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::dequeTwin(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9dequeTwinEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN11TwinMgr_IMP9dequeTwinEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Exported Object: vtable for TwinMgr_IMP */
extern "C" __attribute__((visibility("default"))) void* _ZTV11TwinMgr_IMP = NULL;

/* Demangled: SecMgrImp::SecMgr_attach_twin(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp18SecMgr_attach_twinE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9SecMgrImp18SecMgr_attach_twinE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CamPathPass1::recoverSingle(E_CAMPATH_STEP) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass113recoverSingleE14E_CAMPATH_STEP(void) {
    ALOGD("_ZN12CamPathPass113recoverSingleE14E_CAMPATH_STEP() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::PBC_Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl8PBC_StopEv(void) {
    ALOGD("_ZN15CamPath_BufCtrl8PBC_StopEv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::CamPath_BufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrlC1Ev(void) {
    ALOGD("_ZN15CamPath_BufCtrlC1Ev() called");
    return 0;
}

/* Exported Object: vtable for DMA_RSSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_RSSO = NULL;

/* Demangled: UniMgr::UniMgr_detach(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr13UniMgr_detachE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr13UniMgr_detachE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_detach() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp14CmdQMgr_detachEv(void) {
    ALOGD("_ZN10CmdQMgrImp14CmdQMgr_detachEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: svdfs_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_VERBOSE = NULL;

/* Demangled: CAM_BUF_CTRL::resume(ISP_HW_MODULE, ISP_DRV_CAM*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL6resumeE13ISP_HW_MODULEP11ISP_DRV_CAM(void) {
    ALOGD("_ZN12CAM_BUF_CTRL6resumeE13ISP_HW_MODULEP11ISP_DRV_CAM() called");
    return 0;
}

/* Demangled: DMAO_B::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B8_disableEPv(void) {
    ALOGD("_ZN6DMAO_B8_disableEPv() called");
    return 0;
}

/* Exported Object: PIPE_CHECK::m_BPCI_VA */
extern "C" __attribute__((visibility("default"))) void* _ZN10PIPE_CHECK9m_BPCI_VAE = NULL;

/* Exported Object: vtable for DMA_EISO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_EISO = NULL;

/* Demangled: CAM_TWIN_PIPE::updateTwinInfo(int, CAM_TWIN_PIPE::E_TWIN_UPDATE_OP) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE14updateTwinInfoEiNS_16E_TWIN_UPDATE_OPE(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE14updateTwinInfoEiNS_16E_TWIN_UPDATE_OPE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: BUF_CTRL_LMVO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_LMVO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_LMVO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: g_isp_ca_querypa */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_querypa = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_GetBurstQIdx() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp20CmdQMgr_GetBurstQIdxEv(void) {
    ALOGD("_ZN10CmdQMgrImp20CmdQMgr_GetBurstQIdxEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE6resumeEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE6resumeEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::start(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP5startEPv(void) {
    ALOGD("_ZN11TwinMgr_IMP5startEPv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::HeaderUpdate(_stISP_BUF_INFO&, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl12HeaderUpdateER15_stISP_BUF_INFO13ISP_HW_MODULE(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl12HeaderUpdateER15_stISP_BUF_INFO13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DMA_CQ0::setDoneSubSample(ISP_DRV_CAM*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ016setDoneSubSampleEP11ISP_DRV_CAMij(void) {
    ALOGD("_ZN7DMA_CQ016setDoneSubSampleEP11ISP_DRV_CAMij() called");
    return 0;
}

/* Demangled: Header_LCSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LCSO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_LCSO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: PIPE_CHECK::RMB_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9RMB_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9RMB_CHECKEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::updatePath(UpdatePathParam) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10updatePathE15UpdatePathParam(void) {
    ALOGD("_ZN11TwinMgr_IMP10updatePathE15UpdatePathParam() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::updateTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10updateTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP10updateTwinEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::sendCommand(E_TWIN_CMD, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11sendCommandE10E_TWIN_CMDiii(void) {
    ALOGD("_ZN11TwinMgr_IMP11sendCommandE10E_TWIN_CMDiii() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::config(CamPathPass1Parameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP6configEP21CamPathPass1Parameter(void) {
    ALOGD("_ZN11TwinMgr_IMP6configEP21CamPathPass1Parameter() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::setLCS() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE6setLCSEv(void) {
    ALOGD("_ZN12CAM_YUV_PIPE6setLCSEv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::enque_UF_patch(std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN15CamPath_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: DMAO_B::setBaseAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B11setBaseAddrEv(void) {
    ALOGD("_ZN6DMAO_B11setBaseAddrEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<Path_BufCtrl::T_UF>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN12Path_BufCtrl4T_UFERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN12Path_BufCtrl4T_UFERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_GetCurObj() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp16UniMgr_GetCurObjEv(void) {
    ALOGD("_ZN9UniMgrImp16UniMgr_GetCurObjEv() called");
    return 0;
}

/* Exported Object: IspFunction_B::fbcPhyLock */
extern "C" __attribute__((visibility("default"))) void* _ZN13IspFunction_B10fbcPhyLockE = NULL;

/* Exported Object: vtable for QueueMgr<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIiE = NULL;

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: Cam_path_sel::Path_sel(int, int, int, E_CamPattern) */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_sel8Path_selEiii12E_CamPattern(void) {
    ALOGD("_ZN12Cam_path_sel8Path_selEiii12E_CamPattern() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::estimateTimeout(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL15estimateTimeoutEj(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL15estimateTimeoutEj() called");
    return 0;
}

/* Exported Object: vtable for CmdQMgrImp3_imme */
extern "C" __attribute__((visibility("default"))) void* _ZTV16CmdQMgrImp3_imme = NULL;

/* Demangled: CamPathPass1::setP1Update() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass111setP1UpdateEv(void) {
    ALOGD("_ZN12CamPathPass111setP1UpdateEv() called");
    return 0;
}

/* Demangled: PIPE_CHECK::AA_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK8AA_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK8AA_CHECKEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAMSV_DFS_Mgr(char const*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_MgrC2EPKc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13CAMSV_DFS_MgrC2EPKc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_MgrD0Ev(void) {
    ALOGD("_ZN11CAM_DFS_MgrD0Ev() called");
    return 0;
}

/* Demangled: PIPE_CHECK::XCPN_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK10XCPN_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK10XCPN_CHECKEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme13CmdQMgr_startEv(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme13CmdQMgr_startEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: capibility::GetXMXLineBuffer(_tXmx*) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility16GetXMXLineBufferEP5_tXmx(void) {
    ALOGD("_ZN10capibility16GetXMXLineBufferEP5_tXmx() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<int, std::__1::allocator<int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIiNS_9allocatorIiEEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIiNS_9allocatorIiEEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::push_front(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*>&>::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Exported Object: vtable for CamPath_BufCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTV15CamPath_BufCtrl = NULL;

/* Demangled: Header_PSO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PSO12Header_DequeEjPv(void) {
    ALOGD("_ZN10Header_PSO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFGO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_UFGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAMSV_TG_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_TG_CTRL7_configEv(void) {
    ALOGD("_ZN13CAMSV_TG_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: TwinMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: cam_ts_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for CAM_TOP_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_TOP_CTRL = NULL;

/* Exported Object: dfs_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_WARN = NULL;

/* Demangled: CAM_RAW_PIPE::getCurPixMode(_isp_dma_enum_) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE13getCurPixModeE14_isp_dma_enum_(void) {
    ALOGD("_ZN12CAM_RAW_PIPE13getCurPixModeE14_isp_dma_enum_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31> std::__1::move<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31, _stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__14moveI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Demangled: PIPE_CHECK::QBN1_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK10QBN1_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK10QBN1_CHECKEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::enque_push(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE() called");
    return 0;
}

/* Demangled: DMA_CQ7::setCQTriggerMode(DMA_CQ7::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ716setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN7DMA_CQ716setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Demangled: BUF_CTRL_AAO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AAO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN12BUF_CTRL_AAO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Exported Object: CAM_BUF_CTRL::m_SttState */
extern "C" __attribute__((visibility("default"))) void* _ZN12CAM_BUF_CTRL10m_SttStateE = NULL;

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<int, int*, int&, int**, int, 1024> std::__1::move_backward<int, int*, int&, int**, int, 1024, int, int*, int&, int**, int, 1024>(std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_(void) {
    ALOGD("_ZNSt3__113move_backwardIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_() called");
    return 0;
}

/* Demangled: DMA_CQ1::setSlaveAddr_byCQ(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ117setSlaveAddr_byCQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7DMA_CQ117setSlaveAddr_byCQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: Header_UFGO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFGO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_UFGO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: CAM_RRZ_CTRL::calCoefStep(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RRZ_CTRL11calCoefStepEjjjjj(void) {
    ALOGD("_ZN12CAM_RRZ_CTRL11calCoefStepEjjjjj() called");
    return 0;
}

/* Demangled: CAM_RRZ_CTRL::getCoefNNIRTbl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RRZ_CTRL14getCoefNNIRTblEj(void) {
    ALOGD("_ZN12CAM_RRZ_CTRL14getCoefNNIRTblEj() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_GetSecureTwinStatus(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp26SecMgr_GetSecureTwinStatusE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9SecMgrImp26SecMgr_GetSecureTwinStatusE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DMA_CQ10::TrigCQ(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ106TrigCQEi(void) {
    ALOGD("_ZN8DMA_CQ106TrigCQEi() called");
    return 0;
}

/* Demangled: Header_FLKO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_FLKO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_FLKO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL8_disableEPv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<int, int*, int&, int**, int, 1024> std::__1::move<int, int*, int&, int**, int, 1024, int, int*, int&, int**, int, 1024>(std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_(void) {
    ALOGD("_ZNSt3__14moveIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_() called");
    return 0;
}

/* Exported Object: vtable for UNI_TOP_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12UNI_TOP_CTRL = NULL;

/* Demangled: CamPathPass1::dequeueBuf(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass110dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12CamPathPass110dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*>&>::push_back(_stISP_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: SecMgr::SecMgr_Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6SecMgr11SecMgr_InitEv(void) {
    ALOGD("_ZN6SecMgr11SecMgr_InitEv() called");
    return 0;
}

/* Exported Object: cam_cap_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_DEBUG = NULL;

/* Exported Object: CAM_DFS_Mgr::m_moduleTargetLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN11CAM_DFS_Mgr19m_moduleTargetLevelE = NULL;

/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL7_configEv() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE7_configEv(void) {
    ALOGD("_ZN12CAM_YUV_PIPE7_configEv() called");
    return 0;
}

/* Exported Object: svdfs_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_ERROR = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_FLKO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_FLKO = NULL;

/* Demangled: std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: capibility::D_TWIN_CFG::GetDTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility10D_TWIN_CFG8GetDTwinEv(void) {
    ALOGD("_ZN10capibility10D_TWIN_CFG8GetDTwinEv() called");
    return 0;
}

/* Demangled: Cam_path_sel::Path_sel_RAW(int, int, int, E_CamPattern) */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_sel12Path_sel_RAWEiii12E_CamPattern(void) {
    ALOGD("_ZN12Cam_path_sel12Path_sel_RAWEiii12E_CamPattern() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE7_enableEPv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE7_enableEPv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgrImp3() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp3C2Ev(void) {
    ALOGD("_ZN11CmdQMgrImp3C2Ev() called");
    return 0;
}

/* Demangled: CAMSV_TOP_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRL7_configEv(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRL7_configEv() called");
    return 0;
}

/* Demangled: DMAO_B::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B7_configEv(void) {
    ALOGD("_ZN6DMAO_B7_configEv() called");
    return 0;
}

/* Demangled: Header_RRZO::GetRegInfo(unsigned int, IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RRZO10GetRegInfoEjP6IspDrv(void) {
    ALOGD("_ZN11Header_RRZO10GetRegInfoEjP6IspDrv() called");
    return 0;
}

/* Demangled: CAM_TG_CTRL::CAM_TG_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_TG_CTRLC2Ev(void) {
    ALOGD("_ZN11CAM_TG_CTRLC2Ev() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::suspend(ISP_HW_MODULE, ISP_DRV_CAM*, CAM_BUF_CTRL::E_SUSPEND_OP) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL7suspendE13ISP_HW_MODULEP11ISP_DRV_CAMNS_12E_SUSPEND_OPE(void) {
    ALOGD("_ZN12CAM_BUF_CTRL7suspendE13ISP_HW_MODULEP11ISP_DRV_CAMNS_12E_SUSPEND_OPE() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::enqueHW(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl7enqueHWEj(void) {
    ALOGD("_ZN15CamPath_BufCtrl7enqueHWEj() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetBurstQIdx() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme20CmdQMgr_GetBurstQIdxEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme20CmdQMgr_GetBurstQIdxEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_FLKO::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_FLKO12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN13BUF_CTRL_FLKO12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: DMA_UFGO::check(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_UFGO5checkERi(void) {
    ALOGD("_ZN8DMA_UFGO5checkERi() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP7suspendEv(void) {
    ALOGD("_ZN11TwinMgr_IMP7suspendEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEEC2EjjS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEEC2EjjS9_() called");
    return 0;
}

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::push_back(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE9push_backERKi(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE9push_backERKi() called");
    return 0;
}

/* Exported Object: vtable for RlbMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9RlbMgrImp = NULL;

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__move_assign(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DMA_B::DMA_BW>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5DMA_B6DMA_BWERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5DMA_B6DMA_BWERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_ERROR = NULL;

/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE6resizeEj() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_GetCounter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp18CmdQMgr_GetCounterEi(void) {
    ALOGD("_ZN10CmdQMgrImp18CmdQMgr_GetCounterEi() called");
    return 0;
}

/* Exported Object: RlbMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_WARN = NULL;

/* Demangled: CAM_TUNING_CTRL::update_end() */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL10update_endEv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL10update_endEv() called");
    return 0;
}

/* Demangled: CAM_TG_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_TG_CTRL7_configEv(void) {
    ALOGD("_ZN11CAM_TG_CTRL7_configEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getIsTwin(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP9getIsTwinEji(void) {
    ALOGD("_ZN11TwinMgr_IMP9getIsTwinEji() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_GetCurObj() */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr16UniMgr_GetCurObjEv(void) {
    ALOGD("_ZN6UniMgr16UniMgr_GetCurObjEv() called");
    return 0;
}

/* Demangled: TwinMgr::createInstance(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7TwinMgr14createInstanceE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7TwinMgr14createInstanceE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::list<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::erase(std::__1::__list_const_iterator<ISP_HW_MODULE, void*>, std::__1::__list_const_iterator<ISP_HW_MODULE, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_(void) {
    ALOGD("_ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE const&>(ISP_HW_MODULE const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__push_back_slow_path<NSImageio::NSIspio::STImgCrop const&>(NSImageio::NSIspio::STImgCrop const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: PIPE_CHECK::AF_CHECK(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK8AF_CHECKEi(void) {
    ALOGD("_ZN10PIPE_CHECK8AF_CHECKEi() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::pathControl(TWIN_MGR_PATH_CFG_IN_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11pathControlER26TWIN_MGR_PATH_CFG_IN_PARAM(void) {
    ALOGD("_ZN11TwinMgr_IMP11pathControlER26TWIN_MGR_PATH_CFG_IN_PARAM() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::PortID>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe6PortIDERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe6PortIDERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp212CmdQMgr_stopEv(void) {
    ALOGD("_ZN11CmdQMgrImp212CmdQMgr_stopEv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::enque_pop() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl9enque_popEv(void) {
    ALOGD("_ZN15CamPath_BufCtrl9enque_popEv() called");
    return 0;
}

/* Demangled: Header_FLKO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_FLKO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_FLKO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B7_configEv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B7_configEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::FSM_UPDATE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10FSM_UPDATEEj(void) {
    ALOGD("_ZN11TwinMgr_IMP10FSM_UPDATEEj() called");
    return 0;
}

/* Exported Object: UniMgrImp::m_op */
extern "C" __attribute__((visibility("default"))) void* _ZN9UniMgrImp4m_opE = NULL;

/* Demangled: DMA_CQ1::setCQTriggerMode(DMA_CQ1::E_MODE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ116setCQTriggerModeENS_6E_MODEEPv(void) {
    ALOGD("_ZN7DMA_CQ116setCQTriggerModeENS_6E_MODEEPv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::vector(std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEC2ERKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEC2ERKS6_() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr15destroyInstanceEPKc(void) {
    ALOGD("_ZN11CAM_DFS_Mgr15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: cam_ts_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_ASSERT = NULL;

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_detach() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme14CmdQMgr_detachEv(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme14CmdQMgr_detachEv() called");
    return 0;
}

/* Exported Object: vtable for Header_UFEO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_UFEO = NULL;

/* Demangled: BUF_CTRL_LCSO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_LCSO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_LCSO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: TwinFlowCheck::perFrameCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN13TwinFlowCheck13perFrameCheckEv(void) {
    ALOGD("_ZN13TwinFlowCheck13perFrameCheckEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_SetDapcReg() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp17SecMgr_SetDapcRegEv(void) {
    ALOGD("_ZN9SecMgrImp17SecMgr_SetDapcRegEv() called");
    return 0;
}

/* Demangled: DMA_CQ0::IO2CQ(DMA_CQ0::E_Write2CQ, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ05IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7DMA_CQ05IO2CQENS_10E_Write2CQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CamPathPass1::CamPathPass1() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass1C1Ev(void) {
    ALOGD("_ZN12CamPathPass1C1Ev() called");
    return 0;
}

/* Demangled: PIPE_CHECK::ME_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK8ME_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK8ME_CHECKEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getTwinCmdQ(ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11getTwinCmdQE13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN11TwinMgr_IMP11getTwinCmdQE13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_RSSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_RSSO = NULL;

/* Demangled: CAM_BUF_CTRL::dropEnqueueHwBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL16dropEnqueueHwBufEv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL16dropEnqueueHwBufEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::erase(std::__1::__deque_iterator<int, int const*, int const&, int const* const*, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE5eraseENS_16__deque_iteratorIiPKiRS5_PKS6_iLi1024EEE(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE5eraseENS_16__deque_iteratorIiPKiRS5_PKS6_iLi1024EEE() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE9_write2CQEv(void) {
    ALOGD("_ZN12CAM_YUV_PIPE9_write2CQEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_back(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_attach(UNI_HW_MODULE, DupCmdQMgr*, IspDMACfg*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg(void) {
    ALOGD("_ZN6UniMgr13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_INFO = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp15CmdQMgr_suspendEv(void) {
    ALOGD("_ZN10CmdQMgrImp15CmdQMgr_suspendEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_update_IMME(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme19CmdQMgr_update_IMMEEj(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme19CmdQMgr_update_IMMEEj() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIjE = NULL;

/* Demangled: CAM_TWIN_PIPE::update_before_twindrv_request() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE29update_before_twindrv_requestEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE29update_before_twindrv_requestEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetDuqQIdx() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme18CmdQMgr_GetDuqQIdxEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme18CmdQMgr_GetDuqQIdxEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp312CmdQMgr_stopEv(void) {
    ALOGD("_ZN11CmdQMgrImp312CmdQMgr_stopEv() called");
    return 0;
}

/* Demangled: DMA_CQ11::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ116TrigCQEv(void) {
    ALOGD("_ZN8DMA_CQ116TrigCQEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: capibility::GetSupportBurstNum() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility18GetSupportBurstNumEv(void) {
    ALOGD("_ZN10capibility18GetSupportBurstNumEv() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_VERBOSE = NULL;

/* Demangled: SecMgrImp::SecMgr_GetSecureCamStatus(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9SecMgrImp25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setRSS() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE6setRSSEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE6setRSSEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZThn264_N15CAM_TUNING_CTRL7_configEv(void) {
    ALOGD("_ZThn264_N15CAM_TUNING_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: vtable for CAMSV_TOP_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV14CAMSV_TOP_CTRL = NULL;

/* Exported Object: cam_cap_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_VERBOSE = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_GetCurMgrObj(E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp20CmdQMgr_GetCurMgrObjE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10CmdQMgrImp20CmdQMgr_GetCurMgrObjE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::enqueueHwBuf(_stISP_BUF_INFO&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi(void) {
    ALOGD("_ZN12CAM_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi() called");
    return 0;
}

/* Demangled: PIPE_CHECK::Check_Start() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK11Check_StartEv(void) {
    ALOGD("_ZN10PIPE_CHECK11Check_StartEv() called");
    return 0;
}

/* Demangled: PIPE_CHECK::ENQUE_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK11ENQUE_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK11ENQUE_CHECKEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DBS_Vsync() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DBS_VsyncEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DBS_VsyncEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341> std::__1::move_backward<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_attach(unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, unsigned int, unsigned int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp13SecMgr_attachEjjNSt3__16vectorIjNS0_9allocatorIjEEEEjjy(void) {
    ALOGD("_ZN9SecMgrImp13SecMgr_attachEjjNSt3__16vectorIjNS0_9allocatorIjEEEEjjy() called");
    return 0;
}

/* Exported Object: g_EnDbgCfgMutex */
extern "C" __attribute__((visibility("default"))) void* g_EnDbgCfgMutex = NULL;

/* Exported Object: vtable for DMA_LSCI */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_LSCI = NULL;

/* Demangled: std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >::__swap_out_circular_buffer(std::__1::__split_buffer<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: DMA_CQ10::setCQTriggerMode(DMA_CQ10::E_MODE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1016setCQTriggerModeENS_6E_MODEEPv(void) {
    ALOGD("_ZN8DMA_CQ1016setCQTriggerModeENS_6E_MODEEPv() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::_uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL7_uninitEv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL7_uninitEv() called");
    return 0;
}

/* Demangled: Header_AAO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AAO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN10Header_AAO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: PIPE_CHECK::TG_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK8TG_CHECKEj(void) {
    ALOGD("_ZN10PIPE_CHECK8TG_CHECKEj() called");
    return 0;
}

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE8pop_backEv() called");
    return 0;
}

/* Exported Object: vtable for TwinMgr_BufCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTV15TwinMgr_BufCtrl = NULL;

/* Demangled: CAMSV_BUF_CTRL::CAMSV_BUF_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRLC1Ev(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRLC1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: DMA_CQ12::TrigCQ() */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ126TrigCQEv(void) {
    ALOGD("_ZN8DMA_CQ126TrigCQEv() called");
    return 0;
}

/* Demangled: CamPathPass1::getCamPathState() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass115getCamPathStateEv(void) {
    ALOGD("_ZN12CamPathPass115getCamPathStateEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_INFO = NULL;

/* Demangled: CAM_TWIN_PIPE::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE7suspendEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE7suspendEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::cvtDupCmdQRegtoDualIspReg(std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP25cvtDupCmdQRegtoDualIspRegERNSt3__16vectorIP11ISP_DRV_CAMNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP25cvtDupCmdQRegtoDualIspRegERNSt3__16vectorIP11ISP_DRV_CAMNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: BUF_CTRL_PSO::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PSO12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12BUF_CTRL_PSO12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_AAO */
extern "C" __attribute__((visibility("default"))) void* _ZTV12BUF_CTRL_AAO = NULL;

/* Demangled: CAMSV_BUF_CTRL::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL6resumeEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL6resumeEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::suspendTwin(TwinMgr::E_SUSPEND_OP) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11suspendTwinEN7TwinMgr12E_SUSPEND_OPE(void) {
    ALOGD("_ZN11TwinMgr_IMP11suspendTwinEN7TwinMgr12E_SUSPEND_OPE() called");
    return 0;
}

/* Exported Object: svdfs_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_INFO = NULL;

/* Exported Object: vtable for DMA_CQ0 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ0 = NULL;

/* Demangled: DMA_CQ0::setSlaveAddr_byCQ(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ017setSlaveAddr_byCQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7DMA_CQ017setSlaveAddr_byCQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: Header_UFEO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFEO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_UFEO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::CAM_BUF_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRLC2Ev(void) {
    ALOGD("_ZN12CAM_BUF_CTRLC2Ev() called");
    return 0;
}

/* Exported Object: vtable for CAM_MAGIC_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV14CAM_MAGIC_CTRL = NULL;

/* Exported Object: vtable for DMA_UFEO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_UFEO = NULL;

/* Demangled: CmdQMgrImp3::CmdQMgr_detach() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp314CmdQMgr_detachEv(void) {
    ALOGD("_ZN11CmdQMgrImp314CmdQMgr_detachEv() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ1 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ1 = NULL;

/* Demangled: UNI_TOP_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRL8_disableEPv(void) {
    ALOGD("_ZN12UNI_TOP_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::prepareDualInCfg() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP16prepareDualInCfgEv(void) {
    ALOGD("_ZN11TwinMgr_IMP16prepareDualInCfgEv() called");
    return 0;
}

/* Exported Object: path_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_ASSERT = NULL;

/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZThn264_N15CAM_TUNING_CTRL8_disableEPv(void) {
    ALOGD("_ZThn264_N15CAM_TUNING_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_SetCB(ISP_HW_MODULE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp12UniMgr_SetCBE13ISP_HW_MODULEjPv(void) {
    ALOGD("_ZN9UniMgrImp12UniMgr_SetCBE13ISP_HW_MODULEjPv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::CamPath_BufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrlC2Ev(void) {
    ALOGD("_ZN15CamPath_BufCtrlC2Ev() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getIsStartTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP14getIsStartTwinEv(void) {
    ALOGD("_ZN11TwinMgr_IMP14getIsStartTwinEv() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_INFO = NULL;

/* Exported Object: RlbMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: CAM_DFS_Mgr::CAM_DFS_FSM_STR(CAM_DFS_Mgr::E_FSM) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr15CAM_DFS_FSM_STRENS_5E_FSME(void) {
    ALOGD("_ZN11CAM_DFS_Mgr15CAM_DFS_FSM_STRENS_5E_FSME() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ4 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ4 = NULL;

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__push_back_slow_path<ST_BUF_INFO__ const&>(ST_BUF_INFO__ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: CAM_TOP_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL8_disableEPv(void) {
    ALOGD("_ZN12CAM_TOP_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::enqueHW(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl7enqueHWEj(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl7enqueHWEj() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ5 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ5 = NULL;

/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::push_back(_stISP_BUF_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void) {
    ALOGD("_ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_() called");
    return 0;
}

/* Demangled: PIPE_CHECK::PS_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK8PS_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK8PS_CHECKEv() called");
    return 0;
}

/* Demangled: PIPE_CHECK::LCS_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9LCS_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9LCS_CHECKEv() called");
    return 0;
}

/* Demangled: DMA_CQ10::setSlaveAddr_byCQ(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1017setSlaveAddr_byCQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN8DMA_CQ1017setSlaveAddr_byCQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_AAO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AAO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN12BUF_CTRL_AAO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: BUF_CTRL_IMGO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_IMGO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_IMGO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_ERROR = NULL;

/* Exported Object: cam_ts_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_VERBOSE = NULL;

/* Demangled: DMA_CQ0::GetCQupdateCnt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ014GetCQupdateCntEi(void) {
    ALOGD("_ZN7DMA_CQ014GetCQupdateCntEi() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ7 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ7 = NULL;

/* Demangled: CAM_YUV_PIPE::setRSS() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE6setRSSEv(void) {
    ALOGD("_ZN12CAM_YUV_PIPE6setRSSEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_PSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN12BUF_CTRL_PSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::setP1ImgoCfg(std::__1::list<DMACfg, std::__1::allocator<DMACfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP12setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP12setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Exported Object: support_dma_port */
extern "C" __attribute__((visibility("default"))) void* support_dma_port = NULL;

/* Demangled: CmdQMgrImp2::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp218CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN11CmdQMgrImp218CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Exported Object: vtable for DMA_CQ8 */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_CQ8 = NULL;

/* Demangled: Header_AFO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AFO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN10Header_AFO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_resume(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr13UniMgr_resumeE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr13UniMgr_resumeE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: cam_ts_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_ERROR = NULL;

/* Demangled: CAM_TOP_CTRL::CAM_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRLC1Ev(void) {
    ALOGD("_ZN12CAM_TOP_CTRLC1Ev() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_attach(UNI_HW_MODULE, DupCmdQMgr*, IspDMACfg*) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg(void) {
    ALOGD("_ZN9UniMgrImp13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg() called");
    return 0;
}

/* Demangled: capibility::GetCapibility_drv(unsigned int, E_CAM_Query_OP, _tCAM_rst&, NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility17GetCapibility_drvEj14E_CAM_Query_OPR9_tCAM_rstN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE(void) {
    ALOGD("_ZN10capibility17GetCapibility_drvEj14E_CAM_Query_OPR9_tCAM_rstN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE() called");
    return 0;
}

/* Demangled: BUF_CTRL_PDO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PDO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN12BUF_CTRL_PDO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: vtable for Header_LMVO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_LMVO = NULL;

/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZThn264_N15CAM_TUNING_CTRL7_enableEPv(void) {
    ALOGD("_ZThn264_N15CAM_TUNING_CTRL7_enableEPv() called");
    return 0;
}

/* Exported Object: vtable for SecMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9SecMgrImp = NULL;

/* Demangled: CamPathPass1::init(DupCmdQMgr*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass14initEP10DupCmdQMgr(void) {
    ALOGD("_ZN12CamPathPass14initEP10DupCmdQMgr() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__swap_out_circular_buffer(std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: BUF_CTRL_LCSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_LCSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_LCSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CAM_BMX_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BMX_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_BMX_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: CAMSV_BUF_CTRL::m_recentFrmTimeMs */
extern "C" __attribute__((visibility("default"))) void* _ZN14CAMSV_BUF_CTRL17m_recentFrmTimeMsE = NULL;

/* Demangled: capibility::capibility(NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibilityC1EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void) {
    ALOGD("_ZN10capibilityC1EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_update_IMME(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr19CmdQMgr_update_IMMEEj(void) {
    ALOGD("_ZN10DupCmdQMgr19CmdQMgr_update_IMMEEj() called");
    return 0;
}

/* Demangled: Header_IMGO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_IMGO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_IMGO12Header_FlashEj() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::TwinMgr_BufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrlC1Ev(void) {
    ALOGD("_ZN15TwinMgr_BufCtrlC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__push_back_slow_path<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&>(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL7_enableEPv(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: SecMgr::SecMgr_GetSecurePortStatus(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6SecMgr26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN6SecMgr26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj() called");
    return 0;
}

/* Exported Object: vtable for CamPathPass1 */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CamPathPass1 = NULL;

/* Exported Object: vtable for CAM_DPD_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_DPD_CTRL = NULL;

/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE19update_afterRunTwinEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE19update_afterRunTwinEv() called");
    return 0;
}

/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::assign(unsigned int, DupCmdQMgr* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignEjRKS2_(void) {
    ALOGD("_ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignEjRKS2_() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_Mgr(char const*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_MgrC2EPKc13ISP_HW_MODULE(void) {
    ALOGD("_ZN11CAM_DFS_MgrC2EPKc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__push_back_slow_path<NSImageio::NSIspio::BufInfo const&>(NSImageio::NSIspio::BufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: CAM_RRZ_CTRL::getCoefTbl(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RRZ_CTRL10getCoefTblEjj(void) {
    ALOGD("_ZN12CAM_RRZ_CTRL10getCoefTblEjj() called");
    return 0;
}

/* Demangled: CAM_SPS_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_SPS_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_SPS_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeSecS */
extern "C" __attribute__((visibility("default"))) void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeSecS = NULL;

/* Demangled: PIPE_CHECK::UFEG_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK10UFEG_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK10UFEG_CHECKEv() called");
    return 0;
}

/* Demangled: TwinFlowCheck::resumeInit(std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, CAM_TWIN_PIPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TwinFlowCheck10resumeInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE(void) {
    ALOGD("_ZN13TwinFlowCheck10resumeInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_MgrD1Ev(void) {
    ALOGD("_ZN11CAM_DFS_MgrD1Ev() called");
    return 0;
}

/* Demangled: IspFunction_B::enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_B6enableEPv(void) {
    ALOGD("_ZN13IspFunction_B6enableEPv() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgr_GetCurCycleObj(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp222CmdQMgr_GetCurCycleObjEj(void) {
    ALOGD("_ZN11CmdQMgrImp222CmdQMgr_GetCurCycleObjEj() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::CAM_RAW_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPEC1Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPEC1Ev() called");
    return 0;
}

/* Exported Object: vtable for CAM_TG_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV11CAM_TG_CTRL = NULL;

/* Exported Object: cam_cap_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_ERROR = NULL;

/* Exported Object: svdfs_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* svdfs_DbgLogEnable_ASSERT = NULL;

/* Demangled: CAMSV_TG_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_TG_CTRL8_disableEPv(void) {
    ALOGD("_ZN13CAMSV_TG_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_GetCB(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp12UniMgr_GetCBE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN9UniMgrImp12UniMgr_GetCBE13ISP_HW_MODULEj() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::setBaseAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B11setBaseAddrEv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B11setBaseAddrEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_CAMSV_IMGO::FBC_STATUS() */
extern "C" __attribute__((visibility("default"))) int _ZN19BUF_CTRL_CAMSV_IMGO10FBC_STATUSEv(void) {
    ALOGD("_ZN19BUF_CTRL_CAMSV_IMGO10FBC_STATUSEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: RlbMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_WARN = NULL;

/* Demangled: DupCmdQMgr::CmdQMgr_GetCurMgrObj(ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr20CmdQMgr_GetCurMgrObjE13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10DupCmdQMgr20CmdQMgr_GetCurMgrObjE13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: Header_FLKO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_FLKO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_FLKO12Header_FlashEj() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_DEBUG = NULL;

/* Demangled: UNI_TOP_CTRL::UNI_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRLC1Ev(void) {
    ALOGD("_ZN12UNI_TOP_CTRLC1Ev() called");
    return 0;
}

/* Exported Object: TwinMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE9pop_frontEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE>(ISP_HW_MODULE&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: Cam_path_sel::Path_sel_YUV(int, int, int, E_CamPattern) */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_sel12Path_sel_YUVEiii12E_CamPattern(void) {
    ALOGD("_ZN12Cam_path_sel12Path_sel_YUVEiii12E_CamPattern() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*>&>::push_front(ST_BUF_INFO__* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgrImp2() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp2C1Ev(void) {
    ALOGD("_ZN11CmdQMgrImp2C1Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9push_backERKS5_(void) {
    ALOGD("_ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9push_backERKS5_() called");
    return 0;
}

/* Demangled: CAM_DPD_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_DPD_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_DPD_CTRL7_configEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<int, std::__1::allocator<int> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIiNS_9allocatorIiEEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIiNS_9allocatorIiEEED2Ev() called");
    return 0;
}

/* Demangled: CamPathPass1::updateSuspendDone() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass117updateSuspendDoneEv(void) {
    ALOGD("_ZN12CamPathPass117updateSuspendDoneEv() called");
    return 0;
}

/* Exported Object: function_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_ASSERT = NULL;

/* Demangled: DMAO_B::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B9_write2CQEv(void) {
    ALOGD("_ZN6DMAO_B9_write2CQEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::estimateTimeout(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL15estimateTimeoutEj(void) {
    ALOGD("_ZN12CAM_BUF_CTRL15estimateTimeoutEj() called");
    return 0;
}

/* Demangled: BUF_CTRL_IMGO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_IMGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_IMGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DMA_UFGO::update_AU() */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_UFGO9update_AUEv(void) {
    ALOGD("_ZN8DMA_UFGO9update_AUEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL7_configEv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL7_configEv() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImpC1Ev(void) {
    ALOGD("_ZN9UniMgrImpC1Ev() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_SetLv(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DFS_SetLvEi(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DFS_SetLvEi() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgr_recover(E_UNI_STEP, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImp14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE(void) {
    ALOGD("_ZN9UniMgrImp14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj() called");
    return 0;
}

/* Demangled: BUF_CTRL_PDO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_PDO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN12BUF_CTRL_PDO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp313CmdQMgr_startEv(void) {
    ALOGD("_ZN11CmdQMgrImp313CmdQMgr_startEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: function_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_WARN = NULL;

/* Demangled: CAM_TOP_CTRL::checkBusy(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL9checkBusyEj(void) {
    ALOGD("_ZN12CAM_TOP_CTRL9checkBusyEj() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL8_disableEPv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: CAMSV_PIPE_CHECK::ENQUE_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN16CAMSV_PIPE_CHECK11ENQUE_CHECKEv(void) {
    ALOGD("_ZN16CAMSV_PIPE_CHECK11ENQUE_CHECKEv() called");
    return 0;
}

/* Exported Object: vtable for CAM_DMX_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_DMX_CTRL = NULL;

/* Demangled: capibility::GetPipelineMinSize(_minSize*, NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility18GetPipelineMinSizeEP8_minSizeN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE(void) {
    ALOGD("_ZN10capibility18GetPipelineMinSizeEP8_minSizeN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE() called");
    return 0;
}

/* Demangled: CamPathPass1::setP1RrzCfg(std::__1::list<IspRrzCfg, std::__1::allocator<IspRrzCfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass111setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN12CamPathPass111setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: Header_UFEO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFEO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_UFEO12Header_FlashEj() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::updateSuspendDone() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP17updateSuspendDoneEv(void) {
    ALOGD("_ZN11TwinMgr_IMP17updateSuspendDoneEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEED2Ev() called");
    return 0;
}

/* Demangled: capibility::GetSupportPattern() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility17GetSupportPatternEv(void) {
    ALOGD("_ZN10capibility17GetSupportPatternEv() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_GetCurMgrObj_ext(ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr24CmdQMgr_GetCurMgrObj_extE13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10DupCmdQMgr24CmdQMgr_GetCurMgrObj_extE13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: Header_AAO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AAO12Header_DequeEjPv(void) {
    ALOGD("_ZN10Header_AAO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: RlbMgrImp::RlbMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImpC1Ev(void) {
    ALOGD("_ZN9RlbMgrImpC1Ev() called");
    return 0;
}

/* Exported Object: CAM_BUF_CTRL::m_fps */
extern "C" __attribute__((visibility("default"))) void* _ZN12CAM_BUF_CTRL5m_fpsE = NULL;

/* Demangled: SecMgrImp::SecMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp11SecMgr_stopEv(void) {
    ALOGD("_ZN9SecMgrImp11SecMgr_stopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_GetCurStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr20CmdQMgr_GetCurStatusEv(void) {
    ALOGD("_ZN10DupCmdQMgr20CmdQMgr_GetCurStatusEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: Header_PDO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PDO12Header_DequeEjPv(void) {
    ALOGD("_ZN10Header_PDO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: DMA_CQ0::setCQTriggerMode(DMA_CQ0::E_MODE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ016setCQTriggerModeENS_6E_MODEEPv(void) {
    ALOGD("_ZN7DMA_CQ016setCQTriggerModeENS_6E_MODEEPv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_update() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme14CmdQMgr_updateEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme14CmdQMgr_updateEv() called");
    return 0;
}

/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: DMAO_B::DMAO_B() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_BC1Ev(void) {
    ALOGD("_ZN6DMAO_BC1Ev() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE9_write2CQEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE9_write2CQEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::deque(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_SetBw() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEv(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: Header_RRZO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RRZO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_RRZO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: Header_RSSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RSSO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_RSSO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Exported Object: dfs_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_INFO = NULL;

/* Demangled: CamPath_BufCtrl::PBC_Start() */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl9PBC_StartEv(void) {
    ALOGD("_ZN15CamPath_BufCtrl9PBC_StartEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPED0Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPED0Ev() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: CmdQMgrImp2::CmdQMgr_suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp215CmdQMgr_suspendEv(void) {
    ALOGD("_ZN11CmdQMgrImp215CmdQMgr_suspendEv() called");
    return 0;
}

/* Demangled: capibility::capibility(NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibilityC2EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void) {
    ALOGD("_ZN10capibilityC2EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getTwinStatuts() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP14getTwinStatutsEv(void) {
    ALOGD("_ZN11TwinMgr_IMP14getTwinStatutsEv() called");
    return 0;
}

/* Demangled: capibility::GetRLB_SRAM_Alignment() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility21GetRLB_SRAM_AlignmentEv(void) {
    ALOGD("_ZN10capibility21GetRLB_SRAM_AlignmentEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme12CmdQMgr_stopEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme12CmdQMgr_stopEv() called");
    return 0;
}

/* Demangled: CAM_TUNING_CTRL::update(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15CAM_TUNING_CTRL6updateEi(void) {
    ALOGD("_ZN15CAM_TUNING_CTRL6updateEi() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Demangled: Header_RRZO::GetTagAddr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RRZO10GetTagAddrEj(void) {
    ALOGD("_ZN11Header_RRZO10GetTagAddrEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::__push_back_slow_path<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&>(std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::runTwinDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10runTwinDrvEv(void) {
    ALOGD("_ZN11TwinMgr_IMP10runTwinDrvEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::PBC_Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl8PBC_StopEv(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl8PBC_StopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >::__push_back_slow_path<Path_BufCtrl::T_UF const&>(Path_BufCtrl::T_UF const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp318CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN11CmdQMgrImp318CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: Path_BufCtrl::FSM_UPDATE(Path_BufCtrl::_E_FSM) */
extern "C" __attribute__((visibility("default"))) int _ZN12Path_BufCtrl10FSM_UPDATEENS_6_E_FSME(void) {
    ALOGD("_ZN12Path_BufCtrl10FSM_UPDATEENS_6_E_FSME() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341> std::__1::move<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__14moveINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Demangled: Header_LMVO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LMVO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_LMVO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Exported Object: path_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_WARN = NULL;

/* Demangled: std::__1::__list_imp<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_UFEO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_UFEO = NULL;

/* Demangled: CAM_RCP3_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_RCP3_CTRL7_configEv(void) {
    ALOGD("_ZN13CAM_RCP3_CTRL7_configEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_OpenCA() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp13SecMgr_OpenCAEv(void) {
    ALOGD("_ZN9SecMgrImp13SecMgr_OpenCAEv() called");
    return 0;
}

/* Exported Object: g_isp_ca_open */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_open = NULL;

/* Exported Object: vtable for CAM_RMX_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_RMX_CTRL = NULL;

/* Demangled: CamPathPass1::CamPathPass1() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass1C2Ev(void) {
    ALOGD("_ZN12CamPathPass1C2Ev() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::updateFrameTime(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP15updateFrameTimeEjj(void) {
    ALOGD("_ZN11TwinMgr_IMP15updateFrameTimeEjj() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: BUF_CTRL_FLKO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_FLKO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_FLKO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: PIPE_CHECK::FLK_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9FLK_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9FLK_CHECKEv() called");
    return 0;
}

/* Demangled: DupCmdQMgr::DupCmdQMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgrC2Ev(void) {
    ALOGD("_ZN10DupCmdQMgrC2Ev() called");
    return 0;
}

/* Demangled: IspFunction_B::disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13IspFunction_B7disableEPv(void) {
    ALOGD("_ZN13IspFunction_B7disableEPv() called");
    return 0;
}

/* Demangled: Header_IMGO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_IMGO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN11Header_IMGO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::BusSizeCal() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B10BusSizeCalEv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B10BusSizeCalEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImpC1Ev(void) {
    ALOGD("_ZN9SecMgrImpC1Ev() called");
    return 0;
}

/* Exported Object: dfs_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for CAM_RRZ_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_RRZ_CTRL = NULL;

/* Demangled: CAMSV_BUF_CTRL::enqueueHwBuf(_stISP_BUF_INFO&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi() called");
    return 0;
}

/* Demangled: CAMSV_TOP_CTRL::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRL8_disableEPv(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRL8_disableEPv() called");
    return 0;
}

/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__swap_out_circular_buffer(std::__1::__split_buffer<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_INFO = NULL;

/* Demangled: CAM_RAW_PIPE::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE9_write2CQEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE9_write2CQEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_GetHWCapability() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp22SecMgr_GetHWCapabilityEv(void) {
    ALOGD("_ZN9SecMgrImp22SecMgr_GetHWCapabilityEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_RSSO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_RSSO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_RSSO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFEO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFEO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_UFEO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Exported Object: vtable for Header_UFGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_UFGO = NULL;

/* Demangled: PIPE_CHECK::RRZ_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9RRZ_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9RRZ_CHECKEv() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_setLv() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DFS_setLvEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DFS_setLvEv() called");
    return 0;
}

/* Demangled: DMA_CQ11::setCQContent(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1112setCQContentEjj(void) {
    ALOGD("_ZN8DMA_CQ1112setCQContentEjj() called");
    return 0;
}

/* Demangled: void std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >::__push_back_slow_path<DMA_B::DMA_BW>(DMA_B::DMA_BW&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: CamPathPass1::updateFrameTime(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass115updateFrameTimeEjj(void) {
    ALOGD("_ZN12CamPathPass115updateFrameTimeEjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::push_front(ST_BUF_INFO__*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: PIPE_CHECK::UFE_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9UFE_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9UFE_CHECKEv() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: g_isp_ca_queryinfo */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_queryinfo = NULL;

/* Demangled: _ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimehourS */
extern "C" __attribute__((visibility("default"))) void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE9TimehourS = NULL;

/* Exported Object: CAM_DFS_Mgr::m_Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN11CAM_DFS_Mgr6m_LockE = NULL;

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_cq_suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE17update_cq_suspendEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE17update_cq_suspendEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::CAMSV_BUF_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRLC2Ev(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRLC2Ev() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_SetCB(ISP_HW_MODULE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr12UniMgr_SetCBE13ISP_HW_MODULEjPv(void) {
    ALOGD("_ZN6UniMgr12UniMgr_SetCBE13ISP_HW_MODULEjPv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_QuerySecMVAFromHandle(unsigned long long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp28SecMgr_QuerySecMVAFromHandleEyPj(void) {
    ALOGD("_ZN9SecMgrImp28SecMgr_QuerySecMVAFromHandleEyPj() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgr_resume() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp214CmdQMgr_resumeEv(void) {
    ALOGD("_ZN11CmdQMgrImp214CmdQMgr_resumeEv() called");
    return 0;
}

/* Exported Object: CAM_BUF_CTRL::m_CamState */
extern "C" __attribute__((visibility("default"))) void* _ZN12CAM_BUF_CTRL10m_CamStateE = NULL;

/* Demangled: CAM_RAW_PIPE::setNotifyDone() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE13setNotifyDoneEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE13setNotifyDoneEv() called");
    return 0;
}

/* Demangled: CamPathPass1::P1Notify_Mapping(unsigned int, P1_TUNING_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass116P1Notify_MappingEjP16P1_TUNING_NOTIFY(void) {
    ALOGD("_ZN12CamPathPass116P1Notify_MappingEjP16P1_TUNING_NOTIFY() called");
    return 0;
}

/* Exported Object: vtable for CAM_RAW_PIPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_RAW_PIPE = NULL;

/* Demangled: TwinMgr_IMP::recoverTwin(E_CAMPATH_STEP) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11recoverTwinE14E_CAMPATH_STEP(void) {
    ALOGD("_ZN11TwinMgr_IMP11recoverTwinE14E_CAMPATH_STEP() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio9STImgCropERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio9STImgCropERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_front(int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Exported Object: vtable for CAM_DFS_Mgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV11CAM_DFS_Mgr = NULL;

/* Demangled: CamPathPass1::start(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass15startEPv(void) {
    ALOGD("_ZN12CamPathPass15startEPv() called");
    return 0;
}

/* Demangled: Cam_path_sel::~Cam_path_sel() */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_selD1Ev(void) {
    ALOGD("_ZN12Cam_path_selD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: Header_AFO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AFO12Header_FlashEj(void) {
    ALOGD("_ZN10Header_AFO12Header_FlashEj() called");
    return 0;
}

/* Exported Object: SecMgrImp::Num_SecCam */
extern "C" __attribute__((visibility("default"))) void* _ZN9SecMgrImp10Num_SecCamE = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_GetBurstQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp17CmdQMgr_GetBurstQEv(void) {
    ALOGD("_ZN10CmdQMgrImp17CmdQMgr_GetBurstQEv() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL9_write2CQEv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL9_write2CQEv() called");
    return 0;
}

/* Demangled: BUF_CTRL_FLKO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_FLKO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_FLKO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: CAM_AMX_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_AMX_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_AMX_CTRL7_configEv() called");
    return 0;
}

/* Exported Object: DMA_CQ0::Addr */
extern "C" __attribute__((visibility("default"))) void* _ZN7DMA_CQ04AddrE = NULL;

/* Demangled: CAMSV_PIPE_CHECK::TG_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CAMSV_PIPE_CHECK8TG_CHECKEj(void) {
    ALOGD("_ZN16CAMSV_PIPE_CHECK8TG_CHECKEj() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_ASSERT = NULL;

/* Demangled: CAM_RAW_PIPE::setRRZ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE6setRRZEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE6setRRZEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_GetCurCycleObj(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp22CmdQMgr_GetCurCycleObjEj(void) {
    ALOGD("_ZN10CmdQMgrImp22CmdQMgr_GetCurCycleObjEj() called");
    return 0;
}

/* Demangled: UNI_TOP_CTRL::ClrUniFunc() */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRL10ClrUniFuncEv(void) {
    ALOGD("_ZN12UNI_TOP_CTRL10ClrUniFuncEv() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_start(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr12UniMgr_startE13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr12UniMgr_startE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: g_isp_ca_queryfhpa */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_queryfhpa = NULL;

/* Demangled: std::__1::__deque_base<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEED2Ev() called");
    return 0;
}

/* Demangled: Header_RSSO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_RSSO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_RSSO12Header_DequeEjPv() called");
    return 0;
}

/* Exported Object: TwinMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_WARN = NULL;

/* Demangled: std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: capibility::GetMaxSenNum() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility12GetMaxSenNumEv(void) {
    ALOGD("_ZN10capibility12GetMaxSenNumEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::setP1TuneCfg(std::__1::list<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP12setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP12setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Exported Object: vtable for CmdQMgrImp2 */
extern "C" __attribute__((visibility("default"))) void* _ZTV11CmdQMgrImp2 = NULL;

/* Demangled: Cam_path_sel::Cam_path_sel(CamPathPass1Parameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_selC2EP21CamPathPass1Parameter(void) {
    ALOGD("_ZN12Cam_path_selC2EP21CamPathPass1Parameter() called");
    return 0;
}

/* Demangled: PIPE_CHECK::RSS_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK9RSS_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK9RSS_CHECKEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::init(DupCmdQMgr*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP4initEP10DupCmdQMgr(void) {
    ALOGD("_ZN11TwinMgr_IMP4initEP10DupCmdQMgr() called");
    return 0;
}

/* Demangled: capibility::GetXMXSramSize(_tXmx*) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility14GetXMXSramSizeEP5_tXmx(void) {
    ALOGD("_ZN10capibility14GetXMXSramSizeEP5_tXmx() called");
    return 0;
}

/* Exported Object: vtable for CmdQMgrImp3 */
extern "C" __attribute__((visibility("default"))) void* _ZTV11CmdQMgrImp3 = NULL;

/* Demangled: CamPathPass1::setP1Notify() */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass111setP1NotifyEv(void) {
    ALOGD("_ZN12CamPathPass111setP1NotifyEv() called");
    return 0;
}

/* Demangled: CAMSV_TOP_CTRL::CAMSV_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRLC1Ev(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRLC1Ev() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::setP1Notify() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP11setP1NotifyEv(void) {
    ALOGD("_ZN11TwinMgr_IMP11setP1NotifyEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::initTwin(DupCmdQMgr*, NSImageio::NSIspio::PortID const*, unsigned int, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP8initTwinEP10DupCmdQMgrPKN9NSImageio7NSIspio6PortIDEjPNSt3__14listIjNS7_9allocatorIjEEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP8initTwinEP10DupCmdQMgrPKN9NSImageio7NSIspio6PortIDEjPNSt3__14listIjNS7_9allocatorIjEEEE() called");
    return 0;
}

/* Exported Object: g_isp_ca_dumpsecbuffer */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_dumpsecbuffer = NULL;

/* Exported Object: g_isp_ca_setcaminfo */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_setcaminfo = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: DMA_CQ0::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ04InitEv(void) {
    ALOGD("_ZN7DMA_CQ04InitEv() called");
    return 0;
}

/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_InitCA() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp13SecMgr_InitCAEv(void) {
    ALOGD("_ZN9SecMgrImp13SecMgr_InitCAEv() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_SetBw(T_BW_INPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT() called");
    return 0;
}

/* Exported Object: vtable for Header_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_IMGO = NULL;

/* Exported Object: twinAddr */
extern "C" __attribute__((visibility("default"))) void* twinAddr = NULL;

/* Exported Object: vtable for DMA_PSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_PSO = NULL;

/* Demangled: std::__1::vector<IspDrvVir*, std::__1::allocator<IspDrvVir*> >::__swap_out_circular_buffer(std::__1::__split_buffer<IspDrvVir*, std::__1::allocator<IspDrvVir*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_START() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr13CAM_DFS_STARTEv(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr13CAM_DFS_STARTEv() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_ERROR = NULL;

/* Exported Object: TwinMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* TwinMgr_DbgLogEnable_ERROR = NULL;

/* Demangled: TwinMgr_IMP::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP6uninitEv(void) {
    ALOGD("_ZN11TwinMgr_IMP6uninitEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::enque_UF_patch(std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Exported Object: g_isp_ca_config */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_config = NULL;

/* Exported Object: vtable for BUF_CTRL_LMVO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_LMVO = NULL;

/* Exported Object: vtable for DMA_UFGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_UFGO = NULL;

/* Demangled: CAM_TOP_CTRL::CAM_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRLC2Ev(void) {
    ALOGD("_ZN12CAM_TOP_CTRLC2Ev() called");
    return 0;
}

/* Demangled: DMA_CQ10::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ109_write2CQEv(void) {
    ALOGD("_ZN8DMA_CQ109_write2CQEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: capibility::D_TWIN_CFG::SetDTwin(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility10D_TWIN_CFG8SetDTwinEi(void) {
    ALOGD("_ZN10capibility10D_TWIN_CFG8SetDTwinEi() called");
    return 0;
}

/* Demangled: Header_UFEO::GetRegInfo(unsigned int, IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFEO10GetRegInfoEjP6IspDrv(void) {
    ALOGD("_ZN11Header_UFEO10GetRegInfoEjP6IspDrv() called");
    return 0;
}

/* Demangled: DMA_CQ1::setCQContent(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ112setCQContentEjj(void) {
    ALOGD("_ZN7DMA_CQ112setCQContentEjj() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::TwinMgr_BufCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrlC2Ev(void) {
    ALOGD("_ZN15TwinMgr_BufCtrlC2Ev() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_SecConfig(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp16SecMgr_SecConfigEjj(void) {
    ALOGD("_ZN9SecMgrImp16SecMgr_SecConfigEjj() called");
    return 0;
}

/* Demangled: DMA_CQ5::setCQTriggerMode(DMA_CQ5::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ516setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN7DMA_CQ516setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Exported Object: vtable for DMA_AFO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_AFO = NULL;

/* Demangled: TwinMgr_IMP::stop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP4stopEPv(void) {
    ALOGD("_ZN11TwinMgr_IMP4stopEPv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3::CmdQMgr_Cfg(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp311CmdQMgr_CfgEjj(void) {
    ALOGD("_ZN11CmdQMgrImp311CmdQMgr_CfgEjj() called");
    return 0;
}

/* Demangled: Header_PSO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PSO12Header_FlashEj(void) {
    ALOGD("_ZN10Header_PSO12Header_FlashEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<_CAM_THRU_PUT>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI13_CAM_THRU_PUTRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI13_CAM_THRU_PUTRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_MgrD2Ev(void) {
    ALOGD("_ZN11CAM_DFS_MgrD2Ev() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::CAM_RAW_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPEC2Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPEC2Ev() called");
    return 0;
}

/* Demangled: CAM_RRZ_CTRL::setDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RRZ_CTRL10setDefaultEv(void) {
    ALOGD("_ZN12CAM_RRZ_CTRL10setDefaultEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::enqueueBuf(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP10enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::vector(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEEC2ERKS4_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEEC2ERKS4_() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgr_P1RegisterShareMem(SecMgr_SecInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp25SecMgr_P1RegisterShareMemEP14SecMgr_SecInfo(void) {
    ALOGD("_ZN9SecMgrImp25SecMgr_P1RegisterShareMemEP14SecMgr_SecInfo() called");
    return 0;
}

/* Exported Object: g_isp_ca_uninit */
extern "C" __attribute__((visibility("default"))) void* g_isp_ca_uninit = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_update() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp14CmdQMgr_updateEv(void) {
    ALOGD("_ZN10CmdQMgrImp14CmdQMgr_updateEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setSGG2() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE7setSGG2Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPE7setSGG2Ev() called");
    return 0;
}

/* Demangled: UNI_TOP_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRL7_enableEPv(void) {
    ALOGD("_ZN12UNI_TOP_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP6resumeEv(void) {
    ALOGD("_ZN11TwinMgr_IMP6resumeEv() called");
    return 0;
}

/* Demangled: DMAI_B::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_B8_disableEPv(void) {
    ALOGD("_ZN6DMAI_B8_disableEPv() called");
    return 0;
}

/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv() called");
    return 0;
}

/* Exported Object: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeUsS */
extern "C" __attribute__((visibility("default"))) void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE7TimeUsS = NULL;

/* Demangled: UNI_TOP_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRL7_configEv(void) {
    ALOGD("_ZN12UNI_TOP_CTRL7_configEv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::getTwinReg(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP10getTwinRegEPNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPNS1_IjNS3_IjEEEE(void) {
    ALOGD("_ZN11TwinMgr_IMP10getTwinRegEPNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPNS1_IjNS3_IjEEEE() called");
    return 0;
}

/* Demangled: capibility::GetPipelineBitdepth() */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility19GetPipelineBitdepthEv(void) {
    ALOGD("_ZN10capibility19GetPipelineBitdepthEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setAWB() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE6setAWBEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE6setAWBEv() called");
    return 0;
}

/* Demangled: CAM_MAGIC_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_MAGIC_CTRL7_configEv(void) {
    ALOGD("_ZN14CAM_MAGIC_CTRL7_configEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<ST_BUF_INFO__>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: Header_PDO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PDO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN10Header_PDO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: UNI_TOP_CTRL::UNI_TOP_CTRL() */
extern "C" __attribute__((visibility("default"))) int _ZN12UNI_TOP_CTRLC2Ev(void) {
    ALOGD("_ZN12UNI_TOP_CTRLC2Ev() called");
    return 0;
}

/* Exported Object: function_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_DEBUG = NULL;

/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Exported Object: SecMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* SecMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: CmdQMgrImp2::CmdQMgrImp2() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp2C2Ev(void) {
    ALOGD("_ZN11CmdQMgrImp2C2Ev() called");
    return 0;
}

/* Demangled: DMAI_B::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_B7_configEv(void) {
    ALOGD("_ZN6DMAI_B7_configEv() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::getCurPixMode(_isp_dma_enum_) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE13getCurPixModeE14_isp_dma_enum_(void) {
    ALOGD("_ZN12CAM_YUV_PIPE13getCurPixModeE14_isp_dma_enum_() called");
    return 0;
}

/* Demangled: CAM_BUF_CTRL::PipeCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL9PipeCheckEv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL9PipeCheckEv() called");
    return 0;
}

/* Exported Object: vtable for DMA_RAWI */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_RAWI = NULL;

/* Exported Object: vtable for DupCmdQMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV10DupCmdQMgr = NULL;

/* Demangled: CmdQMgrImp3_imme::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme7FSM_CHKEjPKc(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme7FSM_CHKEjPKc() called");
    return 0;
}

/* Exported Object: vtable for DMA_PDI */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_PDI = NULL;

/* Demangled: void std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >::__push_back_slow_path<ISP_DRV_CAM* const&>(ISP_DRV_CAM* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: UniMgrImp::UniMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9UniMgrImpC2Ev(void) {
    ALOGD("_ZN9UniMgrImpC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr20CmdQMgr_updateCQModeEPS_j(void) {
    ALOGD("_ZN10DupCmdQMgr20CmdQMgr_updateCQModeEPS_j() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp27FSM_CHKEjPKc(void) {
    ALOGD("_ZN11CmdQMgrImp27FSM_CHKEjPKc() called");
    return 0;
}

/* Exported Object: vtable for CAMSV_TG_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV13CAMSV_TG_CTRL = NULL;

/* Demangled: CAM_DFS_Mgr::CAM_DBS_SetBw() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEv() called");
    return 0;
}

/* Exported Object: vtable for DMA_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_IMGO = NULL;

/* Demangled: TwinMgr_BufCtrl::enque_drop() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl10enque_dropEv(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl10enque_dropEv() called");
    return 0;
}

/* Demangled: TwinMgr_BufCtrl::enque_pop() */
extern "C" __attribute__((visibility("default"))) int _ZN15TwinMgr_BufCtrl9enque_popEv(void) {
    ALOGD("_ZN15TwinMgr_BufCtrl9enque_popEv() called");
    return 0;
}

/* Demangled: RlbMgrImp::sendCommand(ISP_HW_MODULE, RlbMgr::E_RlbCmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImp11sendCommandE13ISP_HW_MODULEN6RlbMgr8E_RlbCmdEjj(void) {
    ALOGD("_ZN9RlbMgrImp11sendCommandE13ISP_HW_MODULEN6RlbMgr8E_RlbCmdEjj() called");
    return 0;
}

/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::erase(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO const*, _stISP_BUF_INFO const&, _stISP_BUF_INFO const* const*, int, 31>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi31EEE(void) {
    ALOGD("_ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi31EEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::createInstance(char const*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr14createInstanceEPKc13ISP_HW_MODULE(void) {
    ALOGD("_ZN11CAM_DFS_Mgr14createInstanceEPKc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_GetCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp20CmdQMgr_GetCurModuleEv(void) {
    ALOGD("_ZN10CmdQMgrImp20CmdQMgr_GetCurModuleEv() called");
    return 0;
}

/* Demangled: CAM_RMX_CTRL::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RMX_CTRL7_configEv(void) {
    ALOGD("_ZN12CAM_RMX_CTRL7_configEv() called");
    return 0;
}

/* Demangled: PIPE_CHECK::TWIN_CHECK() */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK10TWIN_CHECKEv(void) {
    ALOGD("_ZN10PIPE_CHECK10TWIN_CHECKEv() called");
    return 0;
}

/* Demangled: CAMSV_BUF_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_BUF_CTRL7_enableEPv(void) {
    ALOGD("_ZN14CAMSV_BUF_CTRL7_enableEPv() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP15destroyInstanceEv(void) {
    ALOGD("_ZN11TwinMgr_IMP15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgr_GetCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp220CmdQMgr_GetCurModuleEv(void) {
    ALOGD("_ZN11CmdQMgrImp220CmdQMgr_GetCurModuleEv() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::setLMV() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPE6setLMVEv(void) {
    ALOGD("_ZN12CAM_RAW_PIPE6setLMVEv() called");
    return 0;
}

/* Exported Object: vtable for CAM_BMX_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_BMX_CTRL = NULL;

/* Demangled: CAMSV_TOP_CTRL::checkBusy(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRL9checkBusyEj(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRL9checkBusyEj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: RlbMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_DEBUG = NULL;

/* Exported Object: CAM_DFS_Mgr::m_SupportedClk */
extern "C" __attribute__((visibility("default"))) void* _ZN11CAM_DFS_Mgr14m_SupportedClkE = NULL;

/* Exported Object: vtable for IspFunction_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV13IspFunction_B = NULL;

/* Demangled: CamPathPass1::dropEnqueueBuf(std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass114dropEnqueueBufEPNSt3__14listIjNS0_9allocatorIjEEEES5_(void) {
    ALOGD("_ZN12CamPathPass114dropEnqueueBufEPNSt3__14listIjNS0_9allocatorIjEEEES5_() called");
    return 0;
}

/* Demangled: BUF_CTRL_AFO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AFO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN12BUF_CTRL_AFO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Exported Object: vtable for DMA_PDO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_PDO = NULL;

/* Demangled: RlbMgrImp::RlbMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImpC2Ev(void) {
    ALOGD("_ZN9RlbMgrImpC2Ev() called");
    return 0;
}

/* Demangled: capibility::GetConstrainedSize(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, _tCAM_rst&) */
extern "C" __attribute__((visibility("default"))) int _ZN10capibility18GetConstrainedSizeEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst(void) {
    ALOGD("_ZN10capibility18GetConstrainedSizeEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst() called");
    return 0;
}

/* Demangled: CmdQMgrImp2::CmdQMgr_start() */
extern "C" __attribute__((visibility("default"))) int _ZN11CmdQMgrImp213CmdQMgr_startEv(void) {
    ALOGD("_ZN11CmdQMgrImp213CmdQMgr_startEv() called");
    return 0;
}

/* Exported Object: path_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_VERBOSE = NULL;

/* Demangled: Header_AAO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AAO12Header_FlashEj(void) {
    ALOGD("_ZN10Header_AAO12Header_FlashEj() called");
    return 0;
}

/* Demangled: Header_LMVO::Header_Flash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_LMVO12Header_FlashEj(void) {
    ALOGD("_ZN11Header_LMVO12Header_FlashEj() called");
    return 0;
}

/* Exported Object: UniMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* UniMgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: SecMgrImp::SecMgr_detach(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp13SecMgr_detachEj(void) {
    ALOGD("_ZN9SecMgrImp13SecMgr_detachEj() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFEO::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFEO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void) {
    ALOGD("_ZN13BUF_CTRL_UFEO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE() called");
    return 0;
}

/* Exported Object: RlbMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* RlbMgr_DbgLogEnable_INFO = NULL;

/* Demangled: SecMgrImp::SecMgr_DumpSecBuffer(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp20SecMgr_DumpSecBufferEyPvj(void) {
    ALOGD("_ZN9SecMgrImp20SecMgr_DumpSecBufferEyPvj() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj() called");
    return 0;
}

/* Demangled: DMAO_B::DMAO_B() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_BC2Ev(void) {
    ALOGD("_ZN6DMAO_BC2Ev() called");
    return 0;
}

/* Exported Object: func_camsv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* func_camsv_DbgLogEnable_WARN = NULL;

/* Demangled: TwinMgr_IMP::TwinMgr_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMPC1Ev(void) {
    ALOGD("_ZN11TwinMgr_IMPC1Ev() called");
    return 0;
}

/* Demangled: UniMgr::UniMgr_recover(E_UNI_STEP, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE(void) {
    ALOGD("_ZN6UniMgr14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: vtable for UniMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV6UniMgr = NULL;

/* Demangled: CAM_DFS_Mgr::CAM_DFS_INIT(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN11CAM_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Exported Object: func_cam_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* func_cam_DbgLogEnable_ASSERT = NULL;

/* Demangled: std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::erase(std::__1::__wrap_iter<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const*>, std::__1::__wrap_iter<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE5eraseENS_11__wrap_iterIPKS6_EESC_(void) {
    ALOGD("_ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE5eraseENS_11__wrap_iterIPKS6_EESC_() called");
    return 0;
}

/* Exported Object: vtable for UniMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9UniMgrImp = NULL;

/* Demangled: RlbMgrImp::FSM_CHK(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RlbMgrImp7FSM_CHKE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN9RlbMgrImp7FSM_CHKE13ISP_HW_MODULEj() called");
    return 0;
}

/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_RAW_PIPED1Ev(void) {
    ALOGD("_ZN12CAM_RAW_PIPED1Ev() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::TimeStamp_SrcClk(unsigned int, TSTMP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP16TimeStamp_SrcClkEj10TSTMP_MODE(void) {
    ALOGD("_ZN13CAM_TIMESTAMP16TimeStamp_SrcClkEj10TSTMP_MODE() called");
    return 0;
}

/* Exported Object: dfs_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_VERBOSE = NULL;

/* Demangled: Header_AFO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_AFO12Header_DequeEjPv(void) {
    ALOGD("_ZN10Header_AFO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE8pop_backEv() called");
    return 0;
}

/* Exported Object: vtable for Header_PSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Header_PSO = NULL;

/* Exported Object: CAM_DFS_Mgr::m_curClkLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN11CAM_DFS_Mgr13m_curClkLevelE = NULL;

/* Demangled: CAM_BUF_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_BUF_CTRL7_enableEPv(void) {
    ALOGD("_ZN12CAM_BUF_CTRL7_enableEPv() called");
    return 0;
}

/* Exported Object: func_twin_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* func_twin_DbgLogEnable_ASSERT = NULL;

/* Exported Object: dfs_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_ERROR = NULL;

/* Demangled: CmdQMgrImp::FSM_CHK(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp7FSM_CHKEjPKc(void) {
    ALOGD("_ZN10CmdQMgrImp7FSM_CHKEjPKc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*>&>::push_back(ST_BUF_INFO__*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: DMA_CQ11::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ118_disableEPv(void) {
    ALOGD("_ZN8DMA_CQ118_disableEPv() called");
    return 0;
}

/* Demangled: CAMSV_TOP_CTRL::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAMSV_TOP_CTRL7_enableEPv(void) {
    ALOGD("_ZN14CAMSV_TOP_CTRL7_enableEPv() called");
    return 0;
}

/* Exported Object: CmdQMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* CmdQMgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: CmdQMgrImp::CmdQMgr_GetDuqQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp15CmdQMgr_GetDuqQEv(void) {
    ALOGD("_ZN10CmdQMgrImp15CmdQMgr_GetDuqQEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetDuqQ() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme15CmdQMgr_GetDuqQEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme15CmdQMgr_GetDuqQEv() called");
    return 0;
}

/* Demangled: DMAI_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN6DMAI_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for CAM_BUF_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_BUF_CTRL = NULL;

/* Demangled: CAM_TOP_CTRL::_write2CQ() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_TOP_CTRL9_write2CQEv(void) {
    ALOGD("_ZN12CAM_TOP_CTRL9_write2CQEv() called");
    return 0;
}

/* Exported Object: vtable for DMAI_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV6DMAI_B = NULL;

/* Demangled: SecMgrImp::SecMgr_SecCamEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImp19SecMgr_SecCamEnableEv(void) {
    ALOGD("_ZN9SecMgrImp19SecMgr_SecCamEnableEv() called");
    return 0;
}

/* Exported Object: dfs_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* dfs_DbgLogEnable_ASSERT = NULL;

/* Exported Object: function_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* function_DbgLogEnable_INFO = NULL;

/* Demangled: _ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: vtable for CAM_YUV_PIPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CAM_YUV_PIPE = NULL;

/* Demangled: TwinMgr_IMP::P1Notify_Mapping(unsigned int, P1_TUNING_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP16P1Notify_MappingEjP16P1_TUNING_NOTIFY(void) {
    ALOGD("_ZN11TwinMgr_IMP16P1Notify_MappingEjP16P1_TUNING_NOTIFY() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DBS_SetBw(T_BW_INPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT() called");
    return 0;
}

/* Exported Object: vtable for Header_AFO */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Header_AFO = NULL;

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_() called");
    return 0;
}

/* Exported Object: cam_cap_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* cam_cap_DbgLogEnable_WARN = NULL;

/* Demangled: CamPathPass1::stop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass14stopEPv(void) {
    ALOGD("_ZN12CamPathPass14stopEPv() called");
    return 0;
}

/* Demangled: Header_PSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Header_PSO12Header_EnqueEjP11ISP_DRV_CAMj(void) {
    ALOGD("_ZN10Header_PSO12Header_EnqueEjP11ISP_DRV_CAMj() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::TimeStamp_mapping(unsigned long long*, unsigned long long*, _isp_dma_enum_, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyS0_14_isp_dma_enum_13ISP_HW_MODULE(void) {
    ALOGD("_ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyS0_14_isp_dma_enum_13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_resume() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp14CmdQMgr_resumeEv(void) {
    ALOGD("_ZN10CmdQMgrImp14CmdQMgr_resumeEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCounter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme18CmdQMgr_GetCounterEi(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme18CmdQMgr_GetCounterEi() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::enque_push(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE(void) {
    ALOGD("_ZN15CamPath_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*>&>::push_front(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFEO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFEO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void) {
    ALOGD("_ZN13BUF_CTRL_UFEO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DMAO_B::BusSizeCal(E_PIX&) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B10BusSizeCalER5E_PIX(void) {
    ALOGD("_ZN6DMAO_B10BusSizeCalER5E_PIX() called");
    return 0;
}

/* Exported Object: vtable for Header_CAMSV_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV17Header_CAMSV_IMGO = NULL;

/* Demangled: UniMgr::UniMgr_GetCB(ISP_HW_MODULE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UniMgr12UniMgr_GetCBE13ISP_HW_MODULEj(void) {
    ALOGD("_ZN6UniMgr12UniMgr_GetCBE13ISP_HW_MODULEj() called");
    return 0;
}

/* Demangled: CAM_YUV_PIPE::setLMV() */
extern "C" __attribute__((visibility("default"))) int _ZN12CAM_YUV_PIPE6setLMVEv(void) {
    ALOGD("_ZN12CAM_YUV_PIPE6setLMVEv() called");
    return 0;
}

/* Exported Object: vtable for CAM_RCP3_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV13CAM_RCP3_CTRL = NULL;

/* Demangled: CAM_TWIN_PIPE::get_RunTwinRst(unsigned int, std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE14get_RunTwinRstEjRNSt3__16vectorINS0_4listINS_10T_TWIN_DMAENS0_9allocatorIS3_EEEENS4_IS6_EEEEi(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE14get_RunTwinRstEjRNSt3__16vectorINS0_4listINS_10T_TWIN_DMAENS0_9allocatorIS3_EEEENS4_IS6_EEEEi() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::update_beforeRunTwin() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPE20update_beforeRunTwinEv(void) {
    ALOGD("_ZN13CAM_TWIN_PIPE20update_beforeRunTwinEv() called");
    return 0;
}

/* Demangled: CAM_TWIN_PIPE::CAM_TWIN_PIPE() */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TWIN_PIPEC1Ev(void) {
    ALOGD("_ZN13CAM_TWIN_PIPEC1Ev() called");
    return 0;
}

/* Demangled: CAM_TIMESTAMP::TimeStamp_mapping(unsigned long long*, unsigned int*, _isp_dma_enum_, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyPj14_isp_dma_enum_13ISP_HW_MODULE(void) {
    ALOGD("_ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyPj14_isp_dma_enum_13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DupCmdQMgr::CmdQMgr_attach(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN10DupCmdQMgr14CmdQMgr_attachEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void) {
    ALOGD("_ZN10DupCmdQMgr14CmdQMgr_attachEjj13ISP_HW_MODULE12E_ISP_CAM_CQ() called");
    return 0;
}

/* Demangled: Header_UFEO::Header_Deque(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_UFEO12Header_DequeEjPv(void) {
    ALOGD("_ZN11Header_UFEO12Header_DequeEjPv() called");
    return 0;
}

/* Demangled: BUF_CTRL_AAO::waitBufReady(_CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN12BUF_CTRL_AAO12waitBufReadyEP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN12BUF_CTRL_AAO12waitBufReadyEP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Exported Object: DMA_CQ0::pDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN7DMA_CQ04pDrvE = NULL;

/* Demangled: DMA_UFEO::update_AU() */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_UFEO9update_AUEv(void) {
    ALOGD("_ZN8DMA_UFEO9update_AUEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >::__push_back_slow_path<_CAM_THRU_PUT const&>(_CAM_THRU_PUT const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: SecMgrImp::SecMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9SecMgrImpC2Ev(void) {
    ALOGD("_ZN9SecMgrImpC2Ev() called");
    return 0;
}

/* Exported Object: vtable for Header_RRZO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_RRZO = NULL;

/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_INIT(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CAMSV_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN13CAMSV_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for BUF_CTRL_UFGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13BUF_CTRL_UFGO = NULL;

/* Exported Object: vtable for CAM_TUNING_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV15CAM_TUNING_CTRL = NULL;

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::push_back(ST_BUF_INFO__*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Exported Object: vtable for DMA_BPCI */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_BPCI = NULL;

/* Demangled: PIPE_CHECK::DMAO_STATUS(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PIPE_CHECK11DMAO_STATUSEj(void) {
    ALOGD("_ZN10PIPE_CHECK11DMAO_STATUSEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::_disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_B8_disableEPv(void) {
    ALOGD("_ZN12DMAO_CAMSV_B8_disableEPv() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme20CmdQMgr_GetCurModuleEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme20CmdQMgr_GetCurModuleEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: BUF_CTRL_UFGO::FBC_STATUS(IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN13BUF_CTRL_UFGO10FBC_STATUSEP6IspDrv(void) {
    ALOGD("_ZN13BUF_CTRL_UFGO10FBC_STATUSEP6IspDrv() called");
    return 0;
}

/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__push_back_slow_path<NSCam::EImageFormat>(NSCam::EImageFormat&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImp12CmdQMgr_stopEv(void) {
    ALOGD("_ZN10CmdQMgrImp12CmdQMgr_stopEv() called");
    return 0;
}

/* Demangled: DMA_CQ0::TrigCQ(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ06TrigCQEi(void) {
    ALOGD("_ZN7DMA_CQ06TrigCQEi() called");
    return 0;
}

/* Demangled: DMAI_B::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_B7_enableEPv(void) {
    ALOGD("_ZN6DMAI_B7_enableEPv() called");
    return 0;
}

/* Demangled: CamPathPass1::setP1TuneCfg(std::__1::list<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CamPathPass112setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN12CamPathPass112setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*>&>::push_front(_stISP_BUF_INFO* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<_stISP_BUF_INFO> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrI15_stISP_BUF_INFOE = NULL;

/* Exported Object: path_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_INFO = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: CmdQMgrImp::CmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CmdQMgrImpC1Ev(void) {
    ALOGD("_ZN10CmdQMgrImpC1Ev() called");
    return 0;
}

/* Demangled: QueueMgr<_stISP_BUF_INFO>::sendCmd(QueueMgr<_stISP_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrI15_stISP_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrI15_stISP_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetBurstQ() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp1_imme17CmdQMgr_GetBurstQEv(void) {
    ALOGD("_ZN16CmdQMgrImp1_imme17CmdQMgr_GetBurstQEv() called");
    return 0;
}

/* Exported Object: CAM_BUF_CTRL::m_recentFrmTimeMs */
extern "C" __attribute__((visibility("default"))) void* _ZN12CAM_BUF_CTRL17m_recentFrmTimeMsE = NULL;

/* Demangled: Cam_path_sel::Cam_path_sel(CamPathPass1Parameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_selC1EP21CamPathPass1Parameter(void) {
    ALOGD("_ZN12Cam_path_selC1EP21CamPathPass1Parameter() called");
    return 0;
}

/* Demangled: DMAO_B::_enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAO_B7_enableEPv(void) {
    ALOGD("_ZN6DMAO_B7_enableEPv() called");
    return 0;
}

/* Demangled: DMA_CQ10::setCQContent(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1012setCQContentEjj(void) {
    ALOGD("_ZN8DMA_CQ1012setCQContentEjj() called");
    return 0;
}

/* Demangled: DMAI_B::DMAI_B() */
extern "C" __attribute__((visibility("default"))) int _ZN6DMAI_BC1Ev(void) {
    ALOGD("_ZN6DMAI_BC1Ev() called");
    return 0;
}

/* Demangled: Cam_path_sel::~Cam_path_sel() */
extern "C" __attribute__((visibility("default"))) int _ZN12Cam_path_selD2Ev(void) {
    ALOGD("_ZN12Cam_path_selD2Ev() called");
    return 0;
}

/* Exported Object: vtable for Header_PDO */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Header_PDO = NULL;

/* Demangled: TwinFlowCheck::suspendInit(std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, CAM_TWIN_PIPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TwinFlowCheck11suspendInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE(void) {
    ALOGD("_ZN13TwinFlowCheck11suspendInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE() called");
    return 0;
}

/* Exported Object: cam_ts_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* cam_ts_DbgLogEnable_WARN = NULL;

/* Demangled: DMA_CQ12::setCQTriggerMode(DMA_CQ12::E_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN8DMA_CQ1216setCQTriggerModeENS_6E_MODEE(void) {
    ALOGD("_ZN8DMA_CQ1216setCQTriggerModeENS_6E_MODEE() called");
    return 0;
}

/* Demangled: DMA_CQ1::IO2CQ(DMA_CQ1::E_Write2CQ, ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ15IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7DMA_CQ15IO2CQENS_10E_Write2CQE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: DMAO_CAMSV_B::DMAO_CAMSV_B() */
extern "C" __attribute__((visibility("default"))) int _ZN12DMAO_CAMSV_BC1Ev(void) {
    ALOGD("_ZN12DMAO_CAMSV_BC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__push_back_slow_path<DupCmdQMgr* const&>(DupCmdQMgr* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: CAM_DFS_Mgr::CAM_DFS_START() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAM_DFS_Mgr13CAM_DFS_STARTEv(void) {
    ALOGD("_ZN11CAM_DFS_Mgr13CAM_DFS_STARTEv() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme12CmdQMgr_stopEv(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme12CmdQMgr_stopEv() called");
    return 0;
}

/* Demangled: CamPath_BufCtrl::PBC_config(void*, std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, NSImageio::NSIspio::PortID const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CamPath_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE(void) {
    ALOGD("_ZN15CamPath_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE() called");
    return 0;
}

/* Demangled: TwinMgr_IMP::dropEnqueueBuf(TWIN_MGR_PATH_CFG_IN_PARAM const&, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11TwinMgr_IMP14dropEnqueueBufERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_(void) {
    ALOGD("_ZN11TwinMgr_IMP14dropEnqueueBufERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_() called");
    return 0;
}

/* Demangled: CmdQMgrImp3_imme::CmdQMgr_GetCurModule() */
extern "C" __attribute__((visibility("default"))) int _ZN16CmdQMgrImp3_imme20CmdQMgr_GetCurModuleEv(void) {
    ALOGD("_ZN16CmdQMgrImp3_imme20CmdQMgr_GetCurModuleEv() called");
    return 0;
}

/* Exported Object: vtable for Header_LCSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV11Header_LCSO = NULL;

/* Exported Object: vtable for CAM_TWIN_PIPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV13CAM_TWIN_PIPE = NULL;

/* Demangled: Header_IMGO::GetRegInfo(unsigned int, IspDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN11Header_IMGO10GetRegInfoEjP6IspDrv(void) {
    ALOGD("_ZN11Header_IMGO10GetRegInfoEjP6IspDrv() called");
    return 0;
}

/* Demangled: DMA_CQ1::TrigCQ(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ16TrigCQEi(void) {
    ALOGD("_ZN7DMA_CQ16TrigCQEi() called");
    return 0;
}

/* Exported Object: path_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* path_DbgLogEnable_DEBUG = NULL;

/* Demangled: DMA_CQ0::_config() */
extern "C" __attribute__((visibility("default"))) int _ZN7DMA_CQ07_configEv(void) {
    ALOGD("_ZN7DMA_CQ07_configEv() called");
    return 0;
}

/* Demangled: std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >::__swap_out_circular_buffer(std::__1::__split_buffer<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}
