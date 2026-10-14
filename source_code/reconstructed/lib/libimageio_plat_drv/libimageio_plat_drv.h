/*
 * Reverse-Engineered ABI Specification for: libimageio_plat_drv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libimageio_plat_drv.so
 */

#ifndef BEGONIA_RE_LIBIMAGEIO_PLAT_DRV_H
#define BEGONIA_RE_LIBIMAGEIO_PLAT_DRV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12CamPathPass16configEP21CamPathPass1Parameter */
/* Demangled: CamPathPass1::config(CamPathPass1Parameter*) */
int _ZN12CamPathPass16configEP21CamPathPass1Parameter(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_ */
/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::push_back(_stISP_BUF_INFO const&) */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void);

/* Symbol: _ZN12CAM_TOP_CTRL7_enableEPv */
/* Demangled: CAM_TOP_CTRL::_enable(void*) */
int _ZN12CAM_TOP_CTRL7_enableEPv(void);

/* Symbol: _ZN11TwinMgr_IMP13getIsInitTwinEv */
/* Demangled: TwinMgr_IMP::getIsInitTwin() */
int _ZN11TwinMgr_IMP13getIsInitTwinEv(void);

/* Symbol: _ZN16CmdQMgrImp1_immeC1Ev */
/* Demangled: CmdQMgrImp1_imme::CmdQMgrImp1_imme() */
int _ZN16CmdQMgrImp1_immeC1Ev(void);

/* Symbol: _ZN12CamPathPass112setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE */
/* Demangled: CamPathPass1::setP1ImgoCfg(std::__1::list<DMACfg, std::__1::allocator<DMACfg> >*) */
int _ZN12CamPathPass112setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::list(std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&) */
int _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: _ZN14CAMSV_TOP_CTRLC2Ev */
/* Demangled: CAMSV_TOP_CTRL::CAMSV_TOP_CTRL() */
int _ZN14CAMSV_TOP_CTRLC2Ev(void);

/* Symbol: _ZN6RlbMgr11getInstanceE13ISP_HW_MODULE */
/* Demangled: RlbMgr::getInstance(ISP_HW_MODULE) */
int _ZN6RlbMgr11getInstanceE13ISP_HW_MODULE(void);

/* Symbol: _ZN12CamPathPass17_configEPv */
/* Demangled: CamPathPass1::_config(void*) */
int _ZN12CamPathPass17_configEPv(void);

/* Symbol: _ZTV13BUF_CTRL_IMGO */
/* Demangled: vtable for BUF_CTRL_IMGO */
extern void* _ZTV13BUF_CTRL_IMGO;

/* Symbol: _ZTV8DMA_RRZO */
/* Demangled: vtable for DMA_RRZO */
extern void* _ZTV8DMA_RRZO;

/* Symbol: func_twin_DbgLogEnable_WARN */
/* Demangled: func_twin_DbgLogEnable_WARN */
extern void* func_twin_DbgLogEnable_WARN;

/* Symbol: _ZN12DMAO_CAMSV_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE */
/* Demangled: DMAO_CAMSV_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
int _ZN12DMAO_CAMSV_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void);

/* Symbol: _ZN11TwinMgr_IMP9startTwinEi */
/* Demangled: TwinMgr_IMP::startTwin(int) */
int _ZN11TwinMgr_IMP9startTwinEi(void);

/* Symbol: _ZN12CAM_RAW_PIPE7_configEv */
/* Demangled: CAM_RAW_PIPE::_config() */
int _ZN12CAM_RAW_PIPE7_configEv(void);

/* Symbol: _ZTV12CAM_AMX_CTRL */
/* Demangled: vtable for CAM_AMX_CTRL */
extern void* _ZTV12CAM_AMX_CTRL;

/* Symbol: _ZN13CAMSV_TG_CTRLC1Ev */
/* Demangled: CAMSV_TG_CTRL::CAMSV_TG_CTRL() */
int _ZN13CAMSV_TG_CTRLC1Ev(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL5C_FSM6GetFSMEv */
/* Demangled: CAMSV_BUF_CTRL::C_FSM::GetFSM() */
int _ZN14CAMSV_BUF_CTRL5C_FSM6GetFSMEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL9PipeCheckEv */
/* Demangled: CAMSV_BUF_CTRL::PipeCheck() */
int _ZN14CAMSV_BUF_CTRL9PipeCheckEv(void);

/* Symbol: _ZN15CAM_TUNING_CTRL7_configEv */
/* Demangled: CAM_TUNING_CTRL::_config() */
int _ZN15CAM_TUNING_CTRL7_configEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN7DMA_CQ416setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ4::setCQTriggerMode(DMA_CQ4::E_MODE) */
int _ZN7DMA_CQ416setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: function_DbgLogEnable_ERROR */
/* Demangled: function_DbgLogEnable_ERROR */
extern void* function_DbgLogEnable_ERROR;

/* Symbol: _ZTV14CAMSV_BUF_CTRL */
/* Demangled: vtable for CAMSV_BUF_CTRL */
extern void* _ZTV14CAMSV_BUF_CTRL;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN10CmdQMgrImp18CmdQMgr_GetDuqQIdxEv */
/* Demangled: CmdQMgrImp::CmdQMgr_GetDuqQIdx() */
int _ZN10CmdQMgrImp18CmdQMgr_GetDuqQIdxEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE */
/* Demangled: CAM_BUF_CTRL::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
int _ZN12CAM_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::push_back(unsigned int const&) */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj(void);

/* Symbol: _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_back(int*&&) */
int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN10DupCmdQMgr19CmdQMgr_clearCQModeEPS_j */
/* Demangled: DupCmdQMgr::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
int _ZN10DupCmdQMgr19CmdQMgr_clearCQModeEPS_j(void);

/* Symbol: _ZTV10CmdQMgrImp */
/* Demangled: vtable for CmdQMgrImp */
extern void* _ZTV10CmdQMgrImp;

/* Symbol: _ZN12CAM_BUF_CTRL11updateStateENS_11E_CAM_STATEE13ISP_HW_MODULENS_14E_CAM_DMA_TYPEE */
/* Demangled: CAM_BUF_CTRL::updateState(CAM_BUF_CTRL::E_CAM_STATE, ISP_HW_MODULE, CAM_BUF_CTRL::E_CAM_DMA_TYPE) */
int _ZN12CAM_BUF_CTRL11updateStateENS_11E_CAM_STATEE13ISP_HW_MODULENS_14E_CAM_DMA_TYPEE(void);

/* Symbol: _ZN15CamPath_BufCtrl10enque_dropEv */
/* Demangled: CamPath_BufCtrl::enque_drop() */
int _ZN15CamPath_BufCtrl10enque_dropEv(void);

/* Symbol: _ZN12CAM_DPD_CTRL9_write2CQEv */
/* Demangled: CAM_DPD_CTRL::_write2CQ() */
int _ZN12CAM_DPD_CTRL9_write2CQEv(void);

/* Symbol: _ZN11TwinMgr_IMP12getCurModuleEv */
/* Demangled: TwinMgr_IMP::getCurModule() */
int _ZN11TwinMgr_IMP12getCurModuleEv(void);

/* Symbol: _ZN7DMA_CQ014SetCQupdateCntEv */
/* Demangled: DMA_CQ0::SetCQupdateCnt() */
int _ZN7DMA_CQ014SetCQupdateCntEv(void);

/* Symbol: _ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__14moveIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN10PIPE_CHECK6m_lockE */
/* Demangled: PIPE_CHECK::m_lock */
extern void* _ZN10PIPE_CHECK6m_lockE;

/* Symbol: _ZN9RlbMgrImp7acquireE13ISP_HW_MODULEjPj */
/* Demangled: RlbMgrImp::acquire(ISP_HW_MODULE, unsigned int, unsigned int*) */
int _ZN9RlbMgrImp7acquireE13ISP_HW_MODULEjPj(void);

/* Symbol: _ZN12CamPathPass17suspendENS_20E_CAMPATH_SUSPEND_OPE */
/* Demangled: CamPathPass1::suspend(CamPathPass1::E_CAMPATH_SUSPEND_OP) */
int _ZN12CamPathPass17suspendENS_20E_CAMPATH_SUSPEND_OPE(void);

/* Symbol: _ZN11Header_UFGO10GetRegInfoEjP6IspDrv */
/* Demangled: Header_UFGO::GetRegInfo(unsigned int, IspDrv*) */
int _ZN11Header_UFGO10GetRegInfoEjP6IspDrv(void);

/* Symbol: func_twin_DbgLogEnable_DEBUG */
/* Demangled: func_twin_DbgLogEnable_DEBUG */
extern void* func_twin_DbgLogEnable_DEBUG;

/* Symbol: _ZTV19BUF_CTRL_CAMSV_IMGO */
/* Demangled: vtable for BUF_CTRL_CAMSV_IMGO */
extern void* _ZTV19BUF_CTRL_CAMSV_IMGO;

/* Symbol: TwinMgr_DbgLogEnable_INFO */
/* Demangled: TwinMgr_DbgLogEnable_INFO */
extern void* TwinMgr_DbgLogEnable_INFO;

/* Symbol: _ZN7TwinMgr10ModuleNameE13ISP_HW_MODULE */
/* Demangled: TwinMgr::ModuleName(ISP_HW_MODULE) */
int _ZN7TwinMgr10ModuleNameE13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE26__swap_out_circular_bufferERNS_14__split_bufferIyRS2_EE */
/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned long long, std::__1::allocator<unsigned long long>&>&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE26__swap_out_circular_bufferERNS_14__split_bufferIyRS2_EE(void);

/* Symbol: g_isp_ca_init */
/* Demangled: g_isp_ca_init */
extern void* g_isp_ca_init;

/* Symbol: _ZN12CAM_RAW_PIPE10setIMG_SELEv */
/* Demangled: CAM_RAW_PIPE::setIMG_SEL() */
int _ZN12CAM_RAW_PIPE10setIMG_SELEv(void);

/* Symbol: _ZN13BUF_CTRL_LMVO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_LMVO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_LMVO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN11TwinMgr_IMP9FSM_CHECKEj */
/* Demangled: TwinMgr_IMP::FSM_CHECK(unsigned int) */
int _ZN11TwinMgr_IMP9FSM_CHECKEj(void);

/* Symbol: _ZTV12CAM_SPS_CTRL */
/* Demangled: vtable for CAM_SPS_CTRL */
extern void* _ZTV12CAM_SPS_CTRL;

/* Symbol: _ZN11TwinMgr_IMP10HW_recoverE14E_CAMPATH_STEP */
/* Demangled: TwinMgr_IMP::HW_recover(E_CAMPATH_STEP) */
int _ZN11TwinMgr_IMP10HW_recoverE14E_CAMPATH_STEP(void);

/* Symbol: RlbMgr_DbgLogEnable_ERROR */
/* Demangled: RlbMgr_DbgLogEnable_ERROR */
extern void* RlbMgr_DbgLogEnable_ERROR;

/* Symbol: _ZN8DMA_CQ105IO2CQENS_10E_Write2CQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ10::IO2CQ(DMA_CQ10::E_Write2CQ, ISP_HW_MODULE) */
int _ZN8DMA_CQ105IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::push_back(_stISP_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZTV8DMA_LCSO */
/* Demangled: vtable for DMA_LCSO */
extern void* _ZTV8DMA_LCSO;

/* Symbol: _ZN13CAM_TWIN_PIPE7_configEv */
/* Demangled: CAM_TWIN_PIPE::_config() */
int _ZN13CAM_TWIN_PIPE7_configEv(void);

/* Symbol: _ZN11TwinMgr_IMP9getIsTwinEi */
/* Demangled: TwinMgr_IMP::getIsTwin(int) */
int _ZN11TwinMgr_IMP9getIsTwinEi(void);

/* Symbol: _ZN10DupCmdQMgr18CmdQMgr_attach_extEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: DupCmdQMgr::CmdQMgr_attach_ext(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN10DupCmdQMgr18CmdQMgr_attach_extEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6assignINS_21__list_const_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZThn264_N14CAM_MAGIC_CTRL9_write2CQEv */
/* Demangled: non-virtual thunk to CAM_MAGIC_CTRL::_write2CQ() */
int _ZThn264_N14CAM_MAGIC_CTRL9_write2CQEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL5C_FSM6SetFSMENS0_7E_STATEEi */
/* Demangled: CAMSV_BUF_CTRL::C_FSM::SetFSM(CAMSV_BUF_CTRL::C_FSM::E_STATE, int) */
int _ZN14CAMSV_BUF_CTRL5C_FSM6SetFSMENS0_7E_STATEEi(void);

/* Symbol: _ZN15TwinMgr_BufCtrl9PBC_StartEv */
/* Demangled: TwinMgr_BufCtrl::PBC_Start() */
int _ZN15TwinMgr_BufCtrl9PBC_StartEv(void);

/* Symbol: UniMgr_DbgLogEnable_ERROR */
/* Demangled: UniMgr_DbgLogEnable_ERROR */
extern void* UniMgr_DbgLogEnable_ERROR;

/* Symbol: _ZTV8DMA_CQ10 */
/* Demangled: vtable for DMA_CQ10 */
extern void* _ZTV8DMA_CQ10;

/* Symbol: _ZN11Header_IMGO12Header_DequeEjPv */
/* Demangled: Header_IMGO::Header_Deque(unsigned int, void*) */
int _ZN11Header_IMGO12Header_DequeEjPv(void);

/* Symbol: _ZN7DMA_CQ09_write2CQEv */
/* Demangled: DMA_CQ0::_write2CQ() */
int _ZN7DMA_CQ09_write2CQEv(void);

/* Symbol: g_isp_ca_registersharemem */
/* Demangled: g_isp_ca_registersharemem */
extern void* g_isp_ca_registersharemem;

/* Symbol: _ZN10CmdQMgrImp18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN10CmdQMgrImp18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZTV8DMA_CQ11 */
/* Demangled: vtable for DMA_CQ11 */
extern void* _ZTV8DMA_CQ11;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN12CAM_RCP_CTRL7_configEv */
/* Demangled: CAM_RCP_CTRL::_config() */
int _ZN12CAM_RCP_CTRL7_configEv(void);

/* Symbol: _ZTV13CAMSV_DFS_Mgr */
/* Demangled: vtable for CAMSV_DFS_Mgr */
extern void* _ZTV13CAMSV_DFS_Mgr;

/* Symbol: _ZTV8DMA_CQ12 */
/* Demangled: vtable for DMA_CQ12 */
extern void* _ZTV8DMA_CQ12;

/* Symbol: _ZN12CamPathPass110enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE */
/* Demangled: CamPathPass1::enqueueBuf(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
int _ZN12CamPathPass110enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN14CAM_MAGIC_CTRL9_write2CQEv */
/* Demangled: CAM_MAGIC_CTRL::_write2CQ() */
int _ZN14CAM_MAGIC_CTRL9_write2CQEv(void);

/* Symbol: _ZThn264_N14CAM_MAGIC_CTRL7_configEv */
/* Demangled: non-virtual thunk to CAM_MAGIC_CTRL::_config() */
int _ZThn264_N14CAM_MAGIC_CTRL7_configEv(void);

/* Symbol: _ZN9UniMgrImp7FSM_CHKEj */
/* Demangled: UniMgrImp::FSM_CHK(unsigned int) */
int _ZN9UniMgrImp7FSM_CHKEj(void);

/* Symbol: CmdQMgr_DbgLogEnable_DEBUG */
/* Demangled: CmdQMgr_DbgLogEnable_DEBUG */
extern void* CmdQMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN16CmdQMgrImp3_immeC1Ev */
/* Demangled: CmdQMgrImp3_imme::CmdQMgrImp3_imme() */
int _ZN16CmdQMgrImp3_immeC1Ev(void);

/* Symbol: _ZN9UniMgrImp13UniMgr_detachE13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_detach(ISP_HW_MODULE) */
int _ZN9UniMgrImp13UniMgr_detachE13ISP_HW_MODULE(void);

/* Symbol: _ZN10capibility10GetRRZSizeEv */
/* Demangled: capibility::GetRRZSize() */
int _ZN10capibility10GetRRZSizeEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN6UniMgr11UniMgr_stopE13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_stop(ISP_HW_MODULE) */
int _ZN6UniMgr11UniMgr_stopE13ISP_HW_MODULE(void);

/* Symbol: _ZN13CAM_TIMESTAMPC1Ev */
/* Demangled: CAM_TIMESTAMP::CAM_TIMESTAMP() */
int _ZN13CAM_TIMESTAMPC1Ev(void);

/* Symbol: _ZN12CAM_RAW_PIPE9dumpCQRegEv */
/* Demangled: CAM_RAW_PIPE::dumpCQReg() */
int _ZN12CAM_RAW_PIPE9dumpCQRegEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE */
/* Demangled: TwinMgr_BufCtrl::PBC_config(void*, std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, NSImageio::NSIspio::PortID const*) */
int _ZN15TwinMgr_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE(void);

/* Symbol: _ZN11CAM_DFS_Mgr17CAM_DFS_FSM_CHECKENS_5E_FSME */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_FSM_CHECK(CAM_DFS_Mgr::E_FSM) */
int _ZN11CAM_DFS_Mgr17CAM_DFS_FSM_CHECKENS_5E_FSME(void);

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZTV8QueueMgrI13ST_BUF_INFO__E */
/* Demangled: vtable for QueueMgr<ST_BUF_INFO__> */
extern void* _ZTV8QueueMgrI13ST_BUF_INFO__E;

/* Symbol: _ZN12CAM_XMX_CTRL6configEP12CAM_RAW_PIPE */
/* Demangled: CAM_XMX_CTRL::config(CAM_RAW_PIPE*) */
int _ZN12CAM_XMX_CTRL6configEP12CAM_RAW_PIPE(void);

/* Symbol: _ZN11TwinMgr_IMP9enqueTwinEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE */
/* Demangled: TwinMgr_IMP::enqueTwin(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
int _ZN11TwinMgr_IMP9enqueTwinEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<IspDrvVir*, std::__1::allocator<IspDrvVir*> >::__push_back_slow_path<IspDrvVir*>(IspDrvVir*&&) */
int _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN16CmdQMgrImp1_imme21CmdQMgr_specialCQCtrlEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_specialCQCtrl() */
int _ZN16CmdQMgrImp1_imme21CmdQMgr_specialCQCtrlEv(void);

/* Symbol: _ZNSt3__14moveI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73> std::__1::move<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73, ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>) */
int _ZNSt3__14moveI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE6spliceENS_21__list_const_iteratorIS2_PvEERS5_ */
/* Demangled: std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::splice(std::__1::__list_const_iterator<CAM_TWIN_PIPE::T_TWIN_DMA, void*>, std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >&) */
int _ZNSt3__14listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE6spliceENS_21__list_const_iteratorIS2_PvEERS5_(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN13IspFunction_BC1Ev */
/* Demangled: IspFunction_B::IspFunction_B() */
int _ZN13IspFunction_BC1Ev(void);

/* Symbol: _ZN10PIPE_CHECK12InPutSize_TGERjS0_i */
/* Demangled: PIPE_CHECK::InPutSize_TG(unsigned int&, unsigned int&, int) */
int _ZN10PIPE_CHECK12InPutSize_TGERjS0_i(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_ */
/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::erase(std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>, std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>) */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_(void);

/* Symbol: _ZN12BUF_CTRL_PSO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_PSO::FBC_STATUS(IspDrv*) */
int _ZN12BUF_CTRL_PSO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN13BUF_CTRL_RSSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_RSSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_RSSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL7suspendEv */
/* Demangled: CAMSV_BUF_CTRL::suspend() */
int _ZN14CAMSV_BUF_CTRL7suspendEv(void);

/* Symbol: _ZN11TwinMgr_IMPC2Ev */
/* Demangled: TwinMgr_IMP::TwinMgr_IMP() */
int _ZN11TwinMgr_IMPC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_front(int*&&) */
int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZN9SecMgrImp18SecMgr_CheckSecRegE13ISP_HW_MODULEj */
/* Demangled: SecMgrImp::SecMgr_CheckSecReg(ISP_HW_MODULE, unsigned int) */
int _ZN9SecMgrImp18SecMgr_CheckSecRegE13ISP_HW_MODULEj(void);

/* Symbol: _ZN10CmdQMgrImp13CmdQMgr_startEv */
/* Demangled: CmdQMgrImp::CmdQMgr_start() */
int _ZN10CmdQMgrImp13CmdQMgr_startEv(void);

/* Symbol: _ZN12CAM_RAW_PIPED2Ev */
/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
int _ZN12CAM_RAW_PIPED2Ev(void);

/* Symbol: _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9pop_frontEv */
/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::pop_front() */
int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9pop_frontEv(void);

/* Symbol: _ZN13CAM_TIMESTAMP15TimeStamp_resetEv */
/* Demangled: CAM_TIMESTAMP::TimeStamp_reset() */
int _ZN13CAM_TIMESTAMP15TimeStamp_resetEv(void);

/* Symbol: _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__add_back_capacity() */
int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN12CAM_DMX_CTRL7_configEv */
/* Demangled: CAM_DMX_CTRL::_config() */
int _ZN12CAM_DMX_CTRL7_configEv(void);

/* Symbol: _ZN9SecMgrImp13SecMgr_LoadCAEv */
/* Demangled: SecMgrImp::SecMgr_LoadCA() */
int _ZN9SecMgrImp13SecMgr_LoadCAEv(void);

/* Symbol: _ZN12CamPathPass120dynamicPakFmtMappingEN5NSCam12EImageFormatEPj */
/* Demangled: CamPathPass1::dynamicPakFmtMapping(NSCam::EImageFormat, unsigned int*) */
int _ZN12CamPathPass120dynamicPakFmtMappingEN5NSCam12EImageFormatEPj(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZN11TwinMgr_IMP10uninitTwinEv */
/* Demangled: TwinMgr_IMP::uninitTwin() */
int _ZN11TwinMgr_IMP10uninitTwinEv(void);

/* Symbol: g_isp_ca_migratetable */
/* Demangled: g_isp_ca_migratetable */
extern void* g_isp_ca_migratetable;

/* Symbol: _ZN11CAM_DFS_Mgr12CAM_DFS_STOPEv */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_STOP() */
int _ZN11CAM_DFS_Mgr12CAM_DFS_STOPEv(void);

/* Symbol: _ZN11Header_RSSO12Header_FlashEj */
/* Demangled: Header_RSSO::Header_Flash(unsigned int) */
int _ZN11Header_RSSO12Header_FlashEj(void);

/* Symbol: _ZN13BUF_CTRL_RRZO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_RRZO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_RRZO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9pop_frontEv */
/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::pop_front() */
int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9pop_frontEv(void);

/* Symbol: _ZN6DMAO_B4InitEv */
/* Demangled: DMAO_B::Init() */
int _ZN6DMAO_B4InitEv(void);

/* Symbol: _ZN10capibility13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst14E_CAM_Query_OP */
/* Demangled: capibility::GetCapibility(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, _tCAM_rst&, E_CAM_Query_OP) */
int _ZN10capibility13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst14E_CAM_Query_OP(void);

/* Symbol: _ZN12DMAO_CAMSV_B7_enableEPv */
/* Demangled: DMAO_CAMSV_B::_enable(void*) */
int _ZN12DMAO_CAMSV_B7_enableEPv(void);

/* Symbol: _ZN16CAMSV_PIPE_CHECK11DMAO_STATUSEv */
/* Demangled: CAMSV_PIPE_CHECK::DMAO_STATUS() */
int _ZN16CAMSV_PIPE_CHECK11DMAO_STATUSEv(void);

/* Symbol: _ZN6UniMgr14UniMgr_suspendE13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_suspend(ISP_HW_MODULE) */
int _ZN6UniMgr14UniMgr_suspendE13ISP_HW_MODULE(void);

/* Symbol: _ZN10capibility7m_DTwinE */
/* Demangled: capibility::m_DTwin */
extern void* _ZN10capibility7m_DTwinE;

/* Symbol: _ZTV8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE */
/* Demangled: vtable for QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > */
extern void* _ZTV8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE;

/* Symbol: _ZN9UniMgrImp14UniMgr_suspendE13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_suspend(ISP_HW_MODULE) */
int _ZN9UniMgrImp14UniMgr_suspendE13ISP_HW_MODULE(void);

/* Symbol: _ZN9SecMgrImp18SecMgr_sendCommandEiiii */
/* Demangled: SecMgrImp::SecMgr_sendCommand(int, int, int, int) */
int _ZN9SecMgrImp18SecMgr_sendCommandEiiii(void);

/* Symbol: _ZN16CmdQMgrImp1_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
int _ZN16CmdQMgrImp1_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj(void);

/* Symbol: _ZTV12DMAO_CAMSV_B */
/* Demangled: vtable for DMAO_CAMSV_B */
extern void* _ZTV12DMAO_CAMSV_B;

/* Symbol: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE */
int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_15__list_iteratorIS1_PvEEEEvT_S9_PNS_9enable_ifIXsr19__is_input_iteratorIS9_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::__push_back_slow_path<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&>(std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&) */
int _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN9SecMgrImp20SecMgr_QueryFHSecMVAE14SecMgr_SecInfoPj */
/* Demangled: SecMgrImp::SecMgr_QueryFHSecMVA(SecMgr_SecInfo, unsigned int*) */
int _ZN9SecMgrImp20SecMgr_QueryFHSecMVAE14SecMgr_SecInfoPj(void);

/* Symbol: g_EnDbgCfg */
/* Demangled: g_EnDbgCfg */
extern void* g_EnDbgCfg;

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE11__vallocateEj(void);

/* Symbol: _ZN13CAMSV_DFS_MgrC1EPKc13ISP_HW_MODULE */
/* Demangled: CAMSV_DFS_Mgr::CAMSV_DFS_Mgr(char const*, ISP_HW_MODULE) */
int _ZN13CAMSV_DFS_MgrC1EPKc13ISP_HW_MODULE(void);

/* Symbol: _ZN12CAM_RAW_PIPE12configNotifyEv */
/* Demangled: CAM_RAW_PIPE::configNotify() */
int _ZN12CAM_RAW_PIPE12configNotifyEv(void);

/* Symbol: _ZN12CAM_RAW_PIPE9setTuningEv */
/* Demangled: CAM_RAW_PIPE::setTuning() */
int _ZN12CAM_RAW_PIPE9setTuningEv(void);

/* Symbol: _ZN11Header_RRZO12Header_FlashEj */
/* Demangled: Header_RRZO::Header_Flash(unsigned int) */
int _ZN11Header_RRZO12Header_FlashEj(void);

/* Symbol: _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeMinS */
/* Demangled: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeMinS */
extern void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeMinS;

/* Symbol: _ZN13CAM_TWIN_PIPE23update_afterRunTwin_rlbEjjj */
/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_rlb(unsigned int, unsigned int, unsigned int) */
int _ZN13CAM_TWIN_PIPE23update_afterRunTwin_rlbEjjj(void);

/* Symbol: _ZN10PIPE_CHECK9LMV_CHECKEv */
/* Demangled: PIPE_CHECK::LMV_CHECK() */
int _ZN10PIPE_CHECK9LMV_CHECKEv(void);

/* Symbol: _ZN13CAM_TWIN_PIPE22update_afterRunTwin_FHEj */
/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_FH(unsigned int) */
int _ZN13CAM_TWIN_PIPE22update_afterRunTwin_FHEj(void);

/* Symbol: _ZN11TwinMgr_IMP17getTwinHeaderSizeEj */
/* Demangled: TwinMgr_IMP::getTwinHeaderSize(unsigned int) */
int _ZN11TwinMgr_IMP17getTwinHeaderSizeEj(void);

/* Symbol: _ZN11TwinMgr_IMP8dropTwinERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_ */
/* Demangled: TwinMgr_IMP::dropTwin(TWIN_MGR_PATH_CFG_IN_PARAM const&, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN11TwinMgr_IMP8dropTwinERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_(void);

/* Symbol: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: _ZN7DMA_CQ46TrigCQEv */
/* Demangled: DMA_CQ4::TrigCQ() */
int _ZN7DMA_CQ46TrigCQEv(void);

/* Symbol: _ZTV12Path_BufCtrl */
/* Demangled: vtable for Path_BufCtrl */
extern void* _ZTV12Path_BufCtrl;

/* Symbol: _ZTV12BUF_CTRL_PSO */
/* Demangled: vtable for BUF_CTRL_PSO */
extern void* _ZTV12BUF_CTRL_PSO;

/* Symbol: _ZN13CAM_TWIN_PIPEC2Ev */
/* Demangled: CAM_TWIN_PIPE::CAM_TWIN_PIPE() */
int _ZN13CAM_TWIN_PIPEC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::clear() */
int _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE */
/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>&) */
int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE(void);

/* Symbol: _ZN8QueueMgrI13ST_BUF_INFO__E7sendCmdENS1_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<ST_BUF_INFO__>::sendCmd(QueueMgr<ST_BUF_INFO__>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrI13ST_BUF_INFO__E7sendCmdENS1_12QueueMgr_cmdEjj(void);

/* Symbol: _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9push_backERKS1_ */
/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::push_back(ST_BUF_INFO__ const&) */
int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE9push_backERKS1_(void);

/* Symbol: func_camsv_DbgLogEnable_INFO */
/* Demangled: func_camsv_DbgLogEnable_INFO */
extern void* func_camsv_DbgLogEnable_INFO;

/* Symbol: _ZN11TwinMgr_IMP8stopTwinEv */
/* Demangled: TwinMgr_IMP::stopTwin() */
int _ZN11TwinMgr_IMP8stopTwinEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme13CmdQMgr_startEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_start() */
int _ZN16CmdQMgrImp1_imme13CmdQMgr_startEv(void);

/* Symbol: _ZTV13BUF_CTRL_RRZO */
/* Demangled: vtable for BUF_CTRL_RRZO */
extern void* _ZTV13BUF_CTRL_RRZO;

/* Symbol: _ZN11CmdQMgrImp214CmdQMgr_detachEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_detach() */
int _ZN11CmdQMgrImp214CmdQMgr_detachEv(void);

/* Symbol: _ZN12CAM_TOP_CTRL10HW_recoverEj */
/* Demangled: CAM_TOP_CTRL::HW_recover(unsigned int) */
int _ZN12CAM_TOP_CTRL10HW_recoverEj(void);

/* Symbol: _ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEES5_S6_RS5_PS6_iLi341EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN11Header_UFGO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_UFGO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_UFGO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN13CAM_TIMESTAMP21TimeStamp_calibrationE13ISP_HW_MODULE */
/* Demangled: CAM_TIMESTAMP::TimeStamp_calibration(ISP_HW_MODULE) */
int _ZN13CAM_TIMESTAMP21TimeStamp_calibrationE13ISP_HW_MODULE(void);

/* Symbol: _ZN12BUF_CTRL_AFO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_AFO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN12BUF_CTRL_AFO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN11TwinMgr_IMP14createInstanceE13ISP_HW_MODULE */
/* Demangled: TwinMgr_IMP::createInstance(ISP_HW_MODULE) */
int _ZN11TwinMgr_IMP14createInstanceE13ISP_HW_MODULE(void);

/* Symbol: _ZN11TwinMgr_IMP6CQ_cfgEii */
/* Demangled: TwinMgr_IMP::CQ_cfg(int, int) */
int _ZN11TwinMgr_IMP6CQ_cfgEii(void);

/* Symbol: _ZN9RlbMgrImp7releaseE13ISP_HW_MODULE */
/* Demangled: RlbMgrImp::release(ISP_HW_MODULE) */
int _ZN9RlbMgrImp7releaseE13ISP_HW_MODULE(void);

/* Symbol: _ZN10SENINF_DBG8m_fp_SenE */
/* Demangled: SENINF_DBG::m_fp_Sen */
extern void* _ZN10SENINF_DBG8m_fp_SenE;

/* Symbol: _ZN10SENINF_DBG14m_fp_Sen_CamsvE */
/* Demangled: SENINF_DBG::m_fp_Sen_Camsv */
extern void* _ZN10SENINF_DBG14m_fp_Sen_CamsvE;

/* Symbol: _ZNSt3__113move_backwardI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31> std::__1::move_backward<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31, _stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>) */
int _ZNSt3__113move_backwardI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: _ZN11Header_UFGO12Header_FlashEj */
/* Demangled: Header_UFGO::Header_Flash(unsigned int) */
int _ZN11Header_UFGO12Header_FlashEj(void);

/* Symbol: _ZTV12BUF_CTRL_AFO */
/* Demangled: vtable for BUF_CTRL_AFO */
extern void* _ZTV12BUF_CTRL_AFO;

/* Symbol: _ZTV7DMA_AAO */
/* Demangled: vtable for DMA_AAO */
extern void* _ZTV7DMA_AAO;

/* Symbol: _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >::__swap_out_circular_buffer(std::__1::__split_buffer<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT>&>&) */
int _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: g_isp_ca_close */
/* Demangled: g_isp_ca_close */
extern void* g_isp_ca_close;

/* Symbol: _ZN16CmdQMgrImp1_imme22CmdQMgr_GetCurCycleObjEj */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCurCycleObj(unsigned int) */
int _ZN16CmdQMgrImp1_imme22CmdQMgr_GetCurCycleObjEj(void);

/* Symbol: _ZN6DMAI_B9_write2CQEv */
/* Demangled: DMAI_B::_write2CQ() */
int _ZN6DMAI_B9_write2CQEv(void);

/* Symbol: _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RS9_PKSA_iLi341EEE */
/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::erase(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const* const*, int, 341>) */
int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RS9_PKSA_iLi341EEE(void);

/* Symbol: path_DbgLogEnable_ERROR */
/* Demangled: path_DbgLogEnable_ERROR */
extern void* path_DbgLogEnable_ERROR;

/* Symbol: _ZN11TwinMgr_IMP14twinInfoUpdateERK26TWIN_MGR_PATH_CFG_IN_PARAMi */
/* Demangled: TwinMgr_IMP::twinInfoUpdate(TWIN_MGR_PATH_CFG_IN_PARAM const&, int) */
int _ZN11TwinMgr_IMP14twinInfoUpdateERK26TWIN_MGR_PATH_CFG_IN_PARAMi(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE>&>&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN12CAM_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE */
/* Demangled: CAM_BUF_CTRL::updateFrameTime(unsigned int, unsigned int, ISP_HW_MODULE) */
int _ZN12CAM_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE(void);

/* Symbol: _ZN15CAM_TUNING_CTRL8_disableEPv */
/* Demangled: CAM_TUNING_CTRL::_disable(void*) */
int _ZN15CAM_TUNING_CTRL8_disableEPv(void);

/* Symbol: _ZN11Header_LCSO12Header_FlashEj */
/* Demangled: Header_LCSO::Header_Flash(unsigned int) */
int _ZN11Header_LCSO12Header_FlashEj(void);

/* Symbol: _ZN10capibility8GetRatioEj */
/* Demangled: capibility::GetRatio(unsigned int) */
int _ZN10capibility8GetRatioEj(void);

/* Symbol: _ZN10CmdQMgrImpC2Ev */
/* Demangled: CmdQMgrImp::CmdQMgrImp() */
int _ZN10CmdQMgrImpC2Ev(void);

/* Symbol: _ZN7DMA_CQ56TrigCQEv */
/* Demangled: DMA_CQ5::TrigCQ() */
int _ZN7DMA_CQ56TrigCQEv(void);

/* Symbol: _ZN8DMA_CQ1116setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ11::setCQTriggerMode(DMA_CQ11::E_MODE) */
int _ZN8DMA_CQ1116setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: _ZN12CAM_RAW_PIPE10dynamicPakEj */
/* Demangled: CAM_RAW_PIPE::dynamicPak(unsigned int) */
int _ZN12CAM_RAW_PIPE10dynamicPakEj(void);

/* Symbol: _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE */
/* Demangled: std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>&) */
int _ZNSt3__16vectorINS0_IN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE(void);

/* Symbol: _ZNSt3__114__split_bufferIyRNS_9allocatorIyEEEC2EjjS3_ */
/* Demangled: std::__1::__split_buffer<unsigned long long, std::__1::allocator<unsigned long long>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<unsigned long long>&) */
int _ZNSt3__114__split_bufferIyRNS_9allocatorIyEEEC2EjjS3_(void);

/* Symbol: _ZN10capibility11GetPipeSizeEv */
/* Demangled: capibility::GetPipeSize() */
int _ZN10capibility11GetPipeSizeEv(void);

/* Symbol: cam_cap_DbgLogEnable_INFO */
/* Demangled: cam_cap_DbgLogEnable_INFO */
extern void* cam_cap_DbgLogEnable_INFO;

/* Symbol: _ZN6DMAI_BC2Ev */
/* Demangled: DMAI_B::DMAI_B() */
int _ZN6DMAI_BC2Ev(void);

/* Symbol: _ZN12CAM_RRZ_CTRL7_configEv */
/* Demangled: CAM_RRZ_CTRL::_config() */
int _ZN12CAM_RRZ_CTRL7_configEv(void);

/* Symbol: _ZN11CmdQMgrImp37FSM_CHKEjPKc */
/* Demangled: CmdQMgrImp3::FSM_CHK(unsigned int, char const*) */
int _ZN11CmdQMgrImp37FSM_CHKEjPKc(void);

/* Symbol: _ZN12CamPathPass16uninitEv */
/* Demangled: CamPathPass1::uninit() */
int _ZN12CamPathPass16uninitEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: CAM_BUF_CTRL::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN12CAM_BUF_CTRL12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN13CAM_TWIN_PIPE10HW_recoverEj */
/* Demangled: CAM_TWIN_PIPE::HW_recover(unsigned int) */
int _ZN13CAM_TWIN_PIPE10HW_recoverEj(void);

/* Symbol: _ZNSt3__113move_backwardI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73> std::__1::move_backward<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73, ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>, std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__*, ST_BUF_INFO__&, ST_BUF_INFO__**, int, 73>) */
int _ZNSt3__113move_backwardI13ST_BUF_INFO__PS1_RS1_PS2_iLi73ES1_S2_S3_S4_iLi73EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: func_twin_DbgLogEnable_VERBOSE */
/* Demangled: func_twin_DbgLogEnable_VERBOSE */
extern void* func_twin_DbgLogEnable_VERBOSE;

/* Symbol: _ZN12DMAO_CAMSV_BC2Ev */
/* Demangled: DMAO_CAMSV_B::DMAO_CAMSV_B() */
int _ZN12DMAO_CAMSV_BC2Ev(void);

/* Symbol: _ZN16CmdQMgrImp1_imme7FSM_CHKEjPKc */
/* Demangled: CmdQMgrImp1_imme::FSM_CHK(unsigned int, char const*) */
int _ZN16CmdQMgrImp1_imme7FSM_CHKEjPKc(void);

/* Symbol: _ZN11CmdQMgrImp320CmdQMgr_GetCurModuleEv */
/* Demangled: CmdQMgrImp3::CmdQMgr_GetCurModule() */
int _ZN11CmdQMgrImp320CmdQMgr_GetCurModuleEv(void);

/* Symbol: _ZTV13BUF_CTRL_LCSO */
/* Demangled: vtable for BUF_CTRL_LCSO */
extern void* _ZTV13BUF_CTRL_LCSO;

/* Symbol: _ZN8DMA_UFEO5checkERi */
/* Demangled: DMA_UFEO::check(int&) */
int _ZN8DMA_UFEO5checkERi(void);

/* Symbol: _ZN10CmdQMgrImp21CmdQMgr_specialCQCtrlEv */
/* Demangled: CmdQMgrImp::CmdQMgr_specialCQCtrl() */
int _ZN10CmdQMgrImp21CmdQMgr_specialCQCtrlEv(void);

/* Symbol: _ZTV11Header_FLKO */
/* Demangled: vtable for Header_FLKO */
extern void* _ZTV11Header_FLKO;

/* Symbol: _ZN11CmdQMgrImp3C1Ev */
/* Demangled: CmdQMgrImp3::CmdQMgrImp3() */
int _ZN11CmdQMgrImp3C1Ev(void);

/* Symbol: g_isp_ca_handlecreate */
/* Demangled: g_isp_ca_handlecreate */
extern void* g_isp_ca_handlecreate;

/* Symbol: _ZN10capibility9GetFormatEjR9_tCAM_rst */
/* Demangled: capibility::GetFormat(unsigned int, _tCAM_rst&) */
int _ZN10capibility9GetFormatEjR9_tCAM_rst(void);

/* Symbol: _ZN11CAM_TG_CTRLC1Ev */
/* Demangled: CAM_TG_CTRL::CAM_TG_CTRL() */
int _ZN11CAM_TG_CTRLC1Ev(void);

/* Symbol: _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE8pop_backEv */
/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::pop_back() */
int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE8pop_backEv(void);

/* Symbol: _ZN7DMA_CQ011setLoadModeENS_10E_LoadModeEi */
/* Demangled: DMA_CQ0::setLoadMode(DMA_CQ0::E_LoadMode, int) */
int _ZN7DMA_CQ011setLoadModeENS_10E_LoadModeEi(void);

/* Symbol: func_camsv_DbgLogEnable_VERBOSE */
/* Demangled: func_camsv_DbgLogEnable_VERBOSE */
extern void* func_camsv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN11TwinMgr_IMP10dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY */
/* Demangled: TwinMgr_IMP::dequeueBuf(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
int _ZN11TwinMgr_IMP10dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void);

/* Symbol: SecMgr_DbgLogEnable_WARN */
/* Demangled: SecMgr_DbgLogEnable_WARN */
extern void* SecMgr_DbgLogEnable_WARN;

/* Symbol: _ZN13IspFunction_B8write2CQEv */
/* Demangled: IspFunction_B::write2CQ() */
int _ZN13IspFunction_B8write2CQEv(void);

/* Symbol: _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: _ZN16CmdQMgrImp1_immeC2Ev */
/* Demangled: CmdQMgrImp1_imme::CmdQMgrImp1_imme() */
int _ZN16CmdQMgrImp1_immeC2Ev(void);

/* Symbol: func_twin_DbgLogEnable_ERROR */
/* Demangled: func_twin_DbgLogEnable_ERROR */
extern void* func_twin_DbgLogEnable_ERROR;

/* Symbol: _ZN14CAMSV_BUF_CTRL12waitBufReadyEv */
/* Demangled: CAMSV_BUF_CTRL::waitBufReady() */
int _ZN14CAMSV_BUF_CTRL12waitBufReadyEv(void);

/* Symbol: _ZN8QueueMgrIiE7sendCmdENS0_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<int>::sendCmd(QueueMgr<int>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrIiE7sendCmdENS0_12QueueMgr_cmdEjj(void);

/* Symbol: _ZN12CamPathPass16resumeEv */
/* Demangled: CamPathPass1::resume() */
int _ZN12CamPathPass16resumeEv(void);

/* Symbol: _ZN12CAM_TOP_CTRL7_configEv */
/* Demangled: CAM_TOP_CTRL::_config() */
int _ZN12CAM_TOP_CTRL7_configEv(void);

/* Symbol: _ZTV16CmdQMgrImp1_imme */
/* Demangled: vtable for CmdQMgrImp1_imme */
extern void* _ZTV16CmdQMgrImp1_imme;

/* Symbol: _ZN13CAM_TIMESTAMP11getInstanceE13ISP_HW_MODULEPK11ISP_DRV_CAMPK11IspDrvCamsv */
/* Demangled: CAM_TIMESTAMP::getInstance(ISP_HW_MODULE, ISP_DRV_CAM const*, IspDrvCamsv const*) */
int _ZN13CAM_TIMESTAMP11getInstanceE13ISP_HW_MODULEPK11ISP_DRV_CAMPK11IspDrvCamsv(void);

/* Symbol: _ZTV12BUF_CTRL_PDO */
/* Demangled: vtable for BUF_CTRL_PDO */
extern void* _ZTV12BUF_CTRL_PDO;

/* Symbol: _ZTV6DMAO_B */
/* Demangled: vtable for DMAO_B */
extern void* _ZTV6DMAO_B;

/* Symbol: _ZN13CAMSV_TG_CTRLC2Ev */
/* Demangled: CAMSV_TG_CTRL::CAMSV_TG_CTRL() */
int _ZN13CAMSV_TG_CTRLC2Ev(void);

/* Symbol: _ZN16CmdQMgrImp1_imme14CmdQMgr_detachEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_detach() */
int _ZN16CmdQMgrImp1_imme14CmdQMgr_detachEv(void);

/* Symbol: _ZN12CAM_YUV_PIPE7setSGG2Ev */
/* Demangled: CAM_YUV_PIPE::setSGG2() */
int _ZN12CAM_YUV_PIPE7setSGG2Ev(void);

/* Symbol: _ZN8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE7sendCmdENS6_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > >::sendCmd(QueueMgr<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > >::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrINSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEE7sendCmdENS6_12QueueMgr_cmdEjj(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: cam_cap_DbgLogEnable_ASSERT */
/* Demangled: cam_cap_DbgLogEnable_ASSERT */
extern void* cam_cap_DbgLogEnable_ASSERT;

/* Symbol: _ZN6SecMgr25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE */
/* Demangled: SecMgr::SecMgr_GetSecureCamStatus(ISP_HW_MODULE) */
int _ZN6SecMgr25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE(void);

/* Symbol: _ZN15CAM_TUNING_CTRL5_initEv */
/* Demangled: CAM_TUNING_CTRL::_init() */
int _ZN15CAM_TUNING_CTRL5_initEv(void);

/* Symbol: _ZN10PIPE_CHECK8m_PDI_VAE */
/* Demangled: PIPE_CHECK::m_PDI_VA */
extern void* _ZN10PIPE_CHECK8m_PDI_VAE;

/* Symbol: _ZN13CAMSV_TG_CTRL7_enableEPv */
/* Demangled: CAMSV_TG_CTRL::_enable(void*) */
int _ZN13CAMSV_TG_CTRL7_enableEPv(void);

/* Symbol: _ZN11TwinMgr_IMP11setP1UpdateEP16P1_TUNING_NOTIFY */
/* Demangled: TwinMgr_IMP::setP1Update(P1_TUNING_NOTIFY*) */
int _ZN11TwinMgr_IMP11setP1UpdateEP16P1_TUNING_NOTIFY(void);

/* Symbol: _ZN9SecMgrImp26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj */
/* Demangled: SecMgrImp::SecMgr_GetSecurePortStatus(ISP_HW_MODULE, unsigned int) */
int _ZN9SecMgrImp26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj(void);

/* Symbol: svdfs_DbgLogEnable_DEBUG */
/* Demangled: svdfs_DbgLogEnable_DEBUG */
extern void* svdfs_DbgLogEnable_DEBUG;

/* Symbol: function_DbgLogEnable_VERBOSE */
/* Demangled: function_DbgLogEnable_VERBOSE */
extern void* function_DbgLogEnable_VERBOSE;

/* Symbol: _ZN13BUF_CTRL_RRZO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_RRZO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_RRZO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN6SecMgr16SecMgr_GetMgrObjEv */
/* Demangled: SecMgr::SecMgr_GetMgrObj() */
int _ZN6SecMgr16SecMgr_GetMgrObjEv(void);

/* Symbol: _ZN7DMA_CQ015DummyDescriptorEv */
/* Demangled: DMA_CQ0::DummyDescriptor() */
int _ZN7DMA_CQ015DummyDescriptorEv(void);

/* Symbol: cam_ts_DbgLogEnable_INFO */
/* Demangled: cam_ts_DbgLogEnable_INFO */
extern void* cam_ts_DbgLogEnable_INFO;

/* Symbol: _ZN11Header_RRZO12Header_DequeEjPv */
/* Demangled: Header_RRZO::Header_Deque(unsigned int, void*) */
int _ZN11Header_RRZO12Header_DequeEjPv(void);

/* Symbol: _ZN13BUF_CTRL_UFGO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE */
/* Demangled: BUF_CTRL_UFGO::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
int _ZN13BUF_CTRL_UFGO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr15destroyInstanceEPKc */
/* Demangled: CAMSV_DFS_Mgr::destroyInstance(char const*) */
int _ZN13CAMSV_DFS_Mgr15destroyInstanceEPKc(void);

/* Symbol: CmdQMgr_DbgLogEnable_ERROR */
/* Demangled: CmdQMgr_DbgLogEnable_ERROR */
extern void* CmdQMgr_DbgLogEnable_ERROR;

/* Symbol: _ZN7DMA_CQ016setBaseAddr_byCQEv */
/* Demangled: DMA_CQ0::setBaseAddr_byCQ() */
int _ZN7DMA_CQ016setBaseAddr_byCQEv(void);

/* Symbol: _ZN7DMA_CQ76TrigCQEv */
/* Demangled: DMA_CQ7::TrigCQ() */
int _ZN7DMA_CQ76TrigCQEv(void);

/* Symbol: _ZN7DMA_CQ816setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ8::setCQTriggerMode(DMA_CQ8::E_MODE) */
int _ZN7DMA_CQ816setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: func_cam_DbgLogEnable_WARN */
/* Demangled: func_cam_DbgLogEnable_WARN */
extern void* func_cam_DbgLogEnable_WARN;

/* Symbol: _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::vector(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> > const&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZTV11Header_RSSO */
/* Demangled: vtable for Header_RSSO */
extern void* _ZTV11Header_RSSO;

/* Symbol: _ZN17Header_CAMSV_IMGO12Header_DequeEjPv */
/* Demangled: Header_CAMSV_IMGO::Header_Deque(unsigned int, void*) */
int _ZN17Header_CAMSV_IMGO12Header_DequeEjPv(void);

/* Symbol: func_camsv_DbgLogEnable_DEBUG */
/* Demangled: func_camsv_DbgLogEnable_DEBUG */
extern void* func_camsv_DbgLogEnable_DEBUG;

/* Symbol: _ZN11TwinMgr_IMP10popTwinRstEj */
/* Demangled: TwinMgr_IMP::popTwinRst(unsigned int) */
int _ZN11TwinMgr_IMP10popTwinRstEj(void);

/* Symbol: _ZN11TwinMgr_IMP18getTwinALLCropinfoEPNSt3__16vectorINS1_I13ISP_HW_MODULENS0_9allocatorIS2_EEEENS3_IS5_EEEEPNS1_INS1_IN9NSImageio7NSIspio9STImgCropENS3_ISB_EEEENS3_ISD_EEEE */
/* Demangled: TwinMgr_IMP::getTwinALLCropinfo(std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >*, std::__1::vector<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >*) */
int _ZN11TwinMgr_IMP18getTwinALLCropinfoEPNSt3__16vectorINS1_I13ISP_HW_MODULENS0_9allocatorIS2_EEEENS3_IS5_EEEEPNS1_INS1_IN9NSImageio7NSIspio9STImgCropENS3_ISB_EEEENS3_ISD_EEEE(void);

/* Symbol: svdfs_DbgLogEnable_WARN */
/* Demangled: svdfs_DbgLogEnable_WARN */
extern void* svdfs_DbgLogEnable_WARN;

/* Symbol: _ZN12CamPathPass110updatePathE15UpdatePathParam */
/* Demangled: CamPathPass1::updatePath(UpdatePathParam) */
int _ZN12CamPathPass110updatePathE15UpdatePathParam(void);

/* Symbol: _ZN13CAM_TWIN_PIPE13update_TwinEnEi */
/* Demangled: CAM_TWIN_PIPE::update_TwinEn(int) */
int _ZN13CAM_TWIN_PIPE13update_TwinEnEi(void);

/* Symbol: _ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
int _ZNSt3__14moveIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6spliceENS_21__list_const_iteratorIS1_PvEERS4_ */
/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::splice(std::__1::__list_const_iterator<_stISP_BUF_INFO, void*>, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6spliceENS_21__list_const_iteratorIS1_PvEERS4_(void);

/* Symbol: _ZTV8DMA_FLKO */
/* Demangled: vtable for DMA_FLKO */
extern void* _ZTV8DMA_FLKO;

/* Symbol: _ZN13CAM_TWIN_PIPE14clr_RunTwinRstEj */
/* Demangled: CAM_TWIN_PIPE::clr_RunTwinRst(unsigned int) */
int _ZN13CAM_TWIN_PIPE14clr_RunTwinRstEj(void);

/* Symbol: _ZN9SecMgrImp21SecMgr_GetSupportPortEi */
/* Demangled: SecMgrImp::SecMgr_GetSupportPort(int) */
int _ZN9SecMgrImp21SecMgr_GetSupportPortEi(void);

/* Symbol: _ZN11Header_LMVO12Header_DequeEjPv */
/* Demangled: Header_LMVO::Header_Deque(unsigned int, void*) */
int _ZN11Header_LMVO12Header_DequeEjPv(void);

/* Symbol: _ZTV10Header_AAO */
/* Demangled: vtable for Header_AAO */
extern void* _ZTV10Header_AAO;

/* Symbol: func_twin_DbgLogEnable_INFO */
/* Demangled: func_twin_DbgLogEnable_INFO */
extern void* func_twin_DbgLogEnable_INFO;

/* Symbol: _ZN14CAMSV_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE */
/* Demangled: CAMSV_BUF_CTRL::updateFrameTime(unsigned int, unsigned int, ISP_HW_MODULE) */
int _ZN14CAMSV_BUF_CTRL15updateFrameTimeEjj13ISP_HW_MODULE(void);

/* Symbol: _ZN10PIPE_CHECK10PATH_CHECKEi */
/* Demangled: PIPE_CHECK::PATH_CHECK(int) */
int _ZN10PIPE_CHECK10PATH_CHECKEi(void);

/* Symbol: _ZN13CAM_TWIN_PIPE23update_afterRunTwin_DmaEv */
/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin_Dma() */
int _ZN13CAM_TWIN_PIPE23update_afterRunTwin_DmaEv(void);

/* Symbol: UniMgr_DbgLogEnable_WARN */
/* Demangled: UniMgr_DbgLogEnable_WARN */
extern void* UniMgr_DbgLogEnable_WARN;

/* Symbol: _ZN13IspFunction_B6configEv */
/* Demangled: IspFunction_B::config() */
int _ZN13IspFunction_B6configEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL5m_fpsE */
/* Demangled: CAMSV_BUF_CTRL::m_fps */
extern void* _ZN14CAMSV_BUF_CTRL5m_fpsE;

/* Symbol: _ZN9SecMgrImp21SecMgr_P1MigrateTableEP14SecMgr_SecInfo */
/* Demangled: SecMgrImp::SecMgr_P1MigrateTable(SecMgr_SecInfo*) */
int _ZN9SecMgrImp21SecMgr_P1MigrateTableEP14SecMgr_SecInfo(void);

/* Symbol: _ZN7DMA_CQ86TrigCQEv */
/* Demangled: DMA_CQ8::TrigCQ() */
int _ZN7DMA_CQ86TrigCQEv(void);

/* Symbol: _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi73EEE */
/* Demangled: std::__1::deque<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::erase(std::__1::__deque_iterator<ST_BUF_INFO__, ST_BUF_INFO__ const*, ST_BUF_INFO__ const&, ST_BUF_INFO__ const* const*, int, 73>) */
int _ZNSt3__15dequeI13ST_BUF_INFO__NS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi73EEE(void);

/* Symbol: _ZN11CAM_TG_CTRL7_enableEPv */
/* Demangled: CAM_TG_CTRL::_enable(void*) */
int _ZN11CAM_TG_CTRL7_enableEPv(void);

/* Symbol: _ZN10PIPE_CHECK9BNR_CHECKEv */
/* Demangled: PIPE_CHECK::BNR_CHECK() */
int _ZN10PIPE_CHECK9BNR_CHECKEv(void);

/* Symbol: _ZN13CAM_TWIN_PIPE9update_cqEv */
/* Demangled: CAM_TWIN_PIPE::update_cq() */
int _ZN13CAM_TWIN_PIPE9update_cqEv(void);

/* Symbol: _ZN12DMAO_CAMSV_B4InitEv */
/* Demangled: DMAO_CAMSV_B::Init() */
int _ZN12DMAO_CAMSV_B4InitEv(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr12CAM_DFS_STOPEv */
/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_STOP() */
int _ZN13CAMSV_DFS_Mgr12CAM_DFS_STOPEv(void);

/* Symbol: _ZN16CmdQMgrImp3_immeC2Ev */
/* Demangled: CmdQMgrImp3_imme::CmdQMgrImp3_imme() */
int _ZN16CmdQMgrImp3_immeC2Ev(void);

/* Symbol: _ZN11Header_RRZO13m_tagAddrLockE */
/* Demangled: Header_RRZO::m_tagAddrLock */
extern void* _ZN11Header_RRZO13m_tagAddrLockE;

/* Symbol: _ZN9SecMgrImp12SecMgr_startEv */
/* Demangled: SecMgrImp::SecMgr_start() */
int _ZN9SecMgrImp12SecMgr_startEv(void);

/* Symbol: _ZN11CAM_DFS_MgrC1EPKc13ISP_HW_MODULE */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_Mgr(char const*, ISP_HW_MODULE) */
int _ZN11CAM_DFS_MgrC1EPKc13ISP_HW_MODULE(void);

/* Symbol: _ZN12CAM_RAW_PIPE6setLCSEv */
/* Demangled: CAM_RAW_PIPE::setLCS() */
int _ZN12CAM_RAW_PIPE6setLCSEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN10PIPE_CHECK9LSC_CHECKEv */
/* Demangled: PIPE_CHECK::LSC_CHECK() */
int _ZN10PIPE_CHECK9LSC_CHECKEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE */
/* Demangled: CAMSV_BUF_CTRL::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
int _ZN14CAMSV_BUF_CTRL12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void);

/* Symbol: _ZN11TwinMgr_IMP11setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE */
/* Demangled: TwinMgr_IMP::setP1RrzCfg(std::__1::list<IspRrzCfg, std::__1::allocator<IspRrzCfg> >*) */
int _ZN11TwinMgr_IMP11setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__deque_base<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
int _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZN10Header_PDO12Header_FlashEj */
/* Demangled: Header_PDO::Header_Flash(unsigned int) */
int _ZN10Header_PDO12Header_FlashEj(void);

/* Symbol: _ZN12BUF_CTRL_AFO12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: BUF_CTRL_AFO::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN12BUF_CTRL_AFO12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZTV12CAM_RCP_CTRL */
/* Demangled: vtable for CAM_RCP_CTRL */
extern void* _ZTV12CAM_RCP_CTRL;

/* Symbol: _ZN11TwinMgr_IMP10resumeTwinEv */
/* Demangled: TwinMgr_IMP::resumeTwin() */
int _ZN11TwinMgr_IMP10resumeTwinEv(void);

/* Symbol: _ZN13CAM_TIMESTAMPC2Ev */
/* Demangled: CAM_TIMESTAMP::CAM_TIMESTAMP() */
int _ZN13CAM_TIMESTAMPC2Ev(void);

/* Symbol: _ZN16CmdQMgrImp3_imme11CmdQMgr_CfgEjj */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_Cfg(unsigned int, unsigned int) */
int _ZN16CmdQMgrImp3_imme11CmdQMgr_CfgEjj(void);

/* Symbol: _ZN12BUF_CTRL_PDO12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: BUF_CTRL_PDO::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN12BUF_CTRL_PDO12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN11TwinMgr_IMP7CQ_TrigEv */
/* Demangled: TwinMgr_IMP::CQ_Trig() */
int _ZN11TwinMgr_IMP7CQ_TrigEv(void);

/* Symbol: _ZN15CamPath_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY */
/* Demangled: CamPath_BufCtrl::deque(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
int _ZN15CamPath_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN13CAM_TWIN_PIPE14GetTwinRegAddrE13ISP_HW_MODULEPj */
/* Demangled: CAM_TWIN_PIPE::GetTwinRegAddr(ISP_HW_MODULE, unsigned int*) */
int _ZN13CAM_TWIN_PIPE14GetTwinRegAddrE13ISP_HW_MODULEPj(void);

/* Symbol: _ZN13CAM_TWIN_PIPE8_disableEPv */
/* Demangled: CAM_TWIN_PIPE::_disable(void*) */
int _ZN13CAM_TWIN_PIPE8_disableEPv(void);

/* Symbol: _ZN6UniMgr8m_moduleE */
/* Demangled: UniMgr::m_module */
extern void* _ZN6UniMgr8m_moduleE;

/* Symbol: _ZN9UniMgrImp13UniMgr_resumeE13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_resume(ISP_HW_MODULE) */
int _ZN9UniMgrImp13UniMgr_resumeE13ISP_HW_MODULE(void);

/* Symbol: _ZN10PIPE_CHECK13InPutSize_DMXERjS0_ */
/* Demangled: PIPE_CHECK::InPutSize_DMX(unsigned int&, unsigned int&) */
int _ZN10PIPE_CHECK13InPutSize_DMXERjS0_(void);

/* Symbol: _ZN10PIPE_CHECK14PD_TABLE_CHECKEjj */
/* Demangled: PIPE_CHECK::PD_TABLE_CHECK(unsigned int, unsigned int) */
int _ZN10PIPE_CHECK14PD_TABLE_CHECKEjj(void);

/* Symbol: _ZN9UniMgrImp11UniMgr_stopE13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_stop(ISP_HW_MODULE) */
int _ZN9UniMgrImp11UniMgr_stopE13ISP_HW_MODULE(void);

/* Symbol: _ZN10capibility13GetHeaderSizeEv */
/* Demangled: capibility::GetHeaderSize() */
int _ZN10capibility13GetHeaderSizeEv(void);

/* Symbol: _ZN12CAM_BUF_CTRLC1Ev */
/* Demangled: CAM_BUF_CTRL::CAM_BUF_CTRL() */
int _ZN12CAM_BUF_CTRLC1Ev(void);

/* Symbol: _ZN13IspFunction_BC2Ev */
/* Demangled: IspFunction_B::IspFunction_B() */
int _ZN13IspFunction_BC2Ev(void);

/* Symbol: TwinMgr_DbgLogEnable_ASSERT */
/* Demangled: TwinMgr_DbgLogEnable_ASSERT */
extern void* TwinMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN9UniMgrImp12UniMgr_startE13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_start(ISP_HW_MODULE) */
int _ZN9UniMgrImp12UniMgr_startE13ISP_HW_MODULE(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr13CAM_DBS_VsyncEv */
/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_Vsync() */
int _ZN13CAMSV_DFS_Mgr13CAM_DBS_VsyncEv(void);

/* Symbol: _ZN6DMAO_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE */
/* Demangled: DMAO_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
int _ZN6DMAO_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::push_front(_stISP_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZN10PIPE_CHECK9PDO_CHECKEv */
/* Demangled: PIPE_CHECK::PDO_CHECK() */
int _ZN10PIPE_CHECK9PDO_CHECKEv(void);

/* Symbol: _ZN11CAM_DFS_Mgr16CAM_DFS_GetCurLvEv */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_GetCurLv() */
int _ZN11CAM_DFS_Mgr16CAM_DFS_GetCurLvEv(void);

/* Symbol: _ZN11Header_LCSO12Header_DequeEjPv */
/* Demangled: Header_LCSO::Header_Deque(unsigned int, void*) */
int _ZN11Header_LCSO12Header_DequeEjPv(void);

/* Symbol: _ZN11CAM_TG_CTRL8_disableEPv */
/* Demangled: CAM_TG_CTRL::_disable(void*) */
int _ZN11CAM_TG_CTRL8_disableEPv(void);

/* Symbol: _ZN17Header_CAMSV_IMGO12Header_FlashEj */
/* Demangled: Header_CAMSV_IMGO::Header_Flash(unsigned int) */
int _ZN17Header_CAMSV_IMGO12Header_FlashEj(void);

/* Symbol: _ZN11TwinMgr_IMP9dequeTwinEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY */
/* Demangled: TwinMgr_IMP::dequeTwin(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
int _ZN11TwinMgr_IMP9dequeTwinEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZTV11TwinMgr_IMP */
/* Demangled: vtable for TwinMgr_IMP */
extern void* _ZTV11TwinMgr_IMP;

/* Symbol: _ZN9SecMgrImp18SecMgr_attach_twinE13ISP_HW_MODULE */
/* Demangled: SecMgrImp::SecMgr_attach_twin(ISP_HW_MODULE) */
int _ZN9SecMgrImp18SecMgr_attach_twinE13ISP_HW_MODULE(void);

/* Symbol: _ZN12CamPathPass113recoverSingleE14E_CAMPATH_STEP */
/* Demangled: CamPathPass1::recoverSingle(E_CAMPATH_STEP) */
int _ZN12CamPathPass113recoverSingleE14E_CAMPATH_STEP(void);

/* Symbol: _ZN15CamPath_BufCtrl8PBC_StopEv */
/* Demangled: CamPath_BufCtrl::PBC_Stop() */
int _ZN15CamPath_BufCtrl8PBC_StopEv(void);

/* Symbol: _ZN15CamPath_BufCtrlC1Ev */
/* Demangled: CamPath_BufCtrl::CamPath_BufCtrl() */
int _ZN15CamPath_BufCtrlC1Ev(void);

/* Symbol: _ZTV8DMA_RSSO */
/* Demangled: vtable for DMA_RSSO */
extern void* _ZTV8DMA_RSSO;

/* Symbol: _ZN6UniMgr13UniMgr_detachE13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_detach(ISP_HW_MODULE) */
int _ZN6UniMgr13UniMgr_detachE13ISP_HW_MODULE(void);

/* Symbol: _ZN10CmdQMgrImp14CmdQMgr_detachEv */
/* Demangled: CmdQMgrImp::CmdQMgr_detach() */
int _ZN10CmdQMgrImp14CmdQMgr_detachEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEED2Ev(void);

/* Symbol: svdfs_DbgLogEnable_VERBOSE */
/* Demangled: svdfs_DbgLogEnable_VERBOSE */
extern void* svdfs_DbgLogEnable_VERBOSE;

/* Symbol: _ZN12CAM_BUF_CTRL6resumeE13ISP_HW_MODULEP11ISP_DRV_CAM */
/* Demangled: CAM_BUF_CTRL::resume(ISP_HW_MODULE, ISP_DRV_CAM*) */
int _ZN12CAM_BUF_CTRL6resumeE13ISP_HW_MODULEP11ISP_DRV_CAM(void);

/* Symbol: _ZN6DMAO_B8_disableEPv */
/* Demangled: DMAO_B::_disable(void*) */
int _ZN6DMAO_B8_disableEPv(void);

/* Symbol: _ZN10PIPE_CHECK9m_BPCI_VAE */
/* Demangled: PIPE_CHECK::m_BPCI_VA */
extern void* _ZN10PIPE_CHECK9m_BPCI_VAE;

/* Symbol: _ZTV8DMA_EISO */
/* Demangled: vtable for DMA_EISO */
extern void* _ZTV8DMA_EISO;

/* Symbol: _ZN13CAM_TWIN_PIPE14updateTwinInfoEiNS_16E_TWIN_UPDATE_OPE */
/* Demangled: CAM_TWIN_PIPE::updateTwinInfo(int, CAM_TWIN_PIPE::E_TWIN_UPDATE_OP) */
int _ZN13CAM_TWIN_PIPE14updateTwinInfoEiNS_16E_TWIN_UPDATE_OPE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__deque_base<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::~__deque_base() */
int _ZNSt3__112__deque_baseI15_stISP_BUF_INFONS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN13BUF_CTRL_LMVO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_LMVO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_LMVO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: g_isp_ca_querypa */
/* Demangled: g_isp_ca_querypa */
extern void* g_isp_ca_querypa;

/* Symbol: _ZN10CmdQMgrImp20CmdQMgr_GetBurstQIdxEv */
/* Demangled: CmdQMgrImp::CmdQMgr_GetBurstQIdx() */
int _ZN10CmdQMgrImp20CmdQMgr_GetBurstQIdxEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN13CAM_TWIN_PIPE6resumeEv */
/* Demangled: CAM_TWIN_PIPE::resume() */
int _ZN13CAM_TWIN_PIPE6resumeEv(void);

/* Symbol: _ZN11TwinMgr_IMP5startEPv */
/* Demangled: TwinMgr_IMP::start(void*) */
int _ZN11TwinMgr_IMP5startEPv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl12HeaderUpdateER15_stISP_BUF_INFO13ISP_HW_MODULE */
/* Demangled: TwinMgr_BufCtrl::HeaderUpdate(_stISP_BUF_INFO&, ISP_HW_MODULE) */
int _ZN15TwinMgr_BufCtrl12HeaderUpdateER15_stISP_BUF_INFO13ISP_HW_MODULE(void);

/* Symbol: _ZN7DMA_CQ016setDoneSubSampleEP11ISP_DRV_CAMij */
/* Demangled: DMA_CQ0::setDoneSubSample(ISP_DRV_CAM*, int, unsigned int) */
int _ZN7DMA_CQ016setDoneSubSampleEP11ISP_DRV_CAMij(void);

/* Symbol: _ZN11Header_LCSO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_LCSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_LCSO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN10PIPE_CHECK9RMB_CHECKEv */
/* Demangled: PIPE_CHECK::RMB_CHECK() */
int _ZN10PIPE_CHECK9RMB_CHECKEv(void);

/* Symbol: _ZN11TwinMgr_IMP10updatePathE15UpdatePathParam */
/* Demangled: TwinMgr_IMP::updatePath(UpdatePathParam) */
int _ZN11TwinMgr_IMP10updatePathE15UpdatePathParam(void);

/* Symbol: _ZN11TwinMgr_IMP10updateTwinEv */
/* Demangled: TwinMgr_IMP::updateTwin() */
int _ZN11TwinMgr_IMP10updateTwinEv(void);

/* Symbol: _ZN11TwinMgr_IMP11sendCommandE10E_TWIN_CMDiii */
/* Demangled: TwinMgr_IMP::sendCommand(E_TWIN_CMD, int, int, int) */
int _ZN11TwinMgr_IMP11sendCommandE10E_TWIN_CMDiii(void);

/* Symbol: _ZN11TwinMgr_IMP6configEP21CamPathPass1Parameter */
/* Demangled: TwinMgr_IMP::config(CamPathPass1Parameter*) */
int _ZN11TwinMgr_IMP6configEP21CamPathPass1Parameter(void);

/* Symbol: _ZN12CAM_YUV_PIPE6setLCSEv */
/* Demangled: CAM_YUV_PIPE::setLCS() */
int _ZN12CAM_YUV_PIPE6setLCSEv(void);

/* Symbol: _ZN15CamPath_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE */
/* Demangled: CamPath_BufCtrl::enque_UF_patch(std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >*) */
int _ZN15CamPath_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN6DMAO_B11setBaseAddrEv */
/* Demangled: DMAO_B::setBaseAddr() */
int _ZN6DMAO_B11setBaseAddrEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN12Path_BufCtrl4T_UFERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<Path_BufCtrl::T_UF>&) */
int _ZNSt3__114__split_bufferIN12Path_BufCtrl4T_UFERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZN9UniMgrImp16UniMgr_GetCurObjEv */
/* Demangled: UniMgrImp::UniMgr_GetCurObj() */
int _ZN9UniMgrImp16UniMgr_GetCurObjEv(void);

/* Symbol: _ZN13IspFunction_B10fbcPhyLockE */
/* Demangled: IspFunction_B::fbcPhyLock */
extern void* _ZN13IspFunction_B10fbcPhyLockE;

/* Symbol: _ZTV8QueueMgrIiE */
/* Demangled: vtable for QueueMgr<int> */
extern void* _ZTV8QueueMgrIiE;

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN16CmdQMgrImp1_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN16CmdQMgrImp1_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZN12Cam_path_sel8Path_selEiii12E_CamPattern */
/* Demangled: Cam_path_sel::Path_sel(int, int, int, E_CamPattern) */
int _ZN12Cam_path_sel8Path_selEiii12E_CamPattern(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL15estimateTimeoutEj */
/* Demangled: CAMSV_BUF_CTRL::estimateTimeout(unsigned int) */
int _ZN14CAMSV_BUF_CTRL15estimateTimeoutEj(void);

/* Symbol: _ZTV16CmdQMgrImp3_imme */
/* Demangled: vtable for CmdQMgrImp3_imme */
extern void* _ZTV16CmdQMgrImp3_imme;

/* Symbol: _ZN12CamPathPass111setP1UpdateEv */
/* Demangled: CamPathPass1::setP1Update() */
int _ZN12CamPathPass111setP1UpdateEv(void);

/* Symbol: _ZN10PIPE_CHECK8AA_CHECKEv */
/* Demangled: PIPE_CHECK::AA_CHECK() */
int _ZN10PIPE_CHECK8AA_CHECKEv(void);

/* Symbol: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN13CAMSV_DFS_MgrC2EPKc13ISP_HW_MODULE */
/* Demangled: CAMSV_DFS_Mgr::CAMSV_DFS_Mgr(char const*, ISP_HW_MODULE) */
int _ZN13CAMSV_DFS_MgrC2EPKc13ISP_HW_MODULE(void);

/* Symbol: _ZN11CAM_DFS_MgrD0Ev */
/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
int _ZN11CAM_DFS_MgrD0Ev(void);

/* Symbol: _ZN10PIPE_CHECK10XCPN_CHECKEv */
/* Demangled: PIPE_CHECK::XCPN_CHECK() */
int _ZN10PIPE_CHECK10XCPN_CHECKEv(void);

/* Symbol: _ZN16CmdQMgrImp3_imme13CmdQMgr_startEv */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_start() */
int _ZN16CmdQMgrImp3_imme13CmdQMgr_startEv(void);

/* Symbol: _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE */
/* Demangled: std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>&) */
int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE(void);

/* Symbol: SecMgr_DbgLogEnable_DEBUG */
/* Demangled: SecMgr_DbgLogEnable_DEBUG */
extern void* SecMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN10capibility16GetXMXLineBufferEP5_tXmx */
/* Demangled: capibility::GetXMXLineBuffer(_tXmx*) */
int _ZN10capibility16GetXMXLineBufferEP5_tXmx(void);

/* Symbol: _ZNSt3__112__deque_baseIiNS_9allocatorIiEEE5clearEv */
/* Demangled: std::__1::__deque_base<int, std::__1::allocator<int> >::clear() */
int _ZNSt3__112__deque_baseIiNS_9allocatorIiEEE5clearEv(void);

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::__add_back_capacity() */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::push_front(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*>&>::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE9push_backEOS6_(void);

/* Symbol: _ZTV15CamPath_BufCtrl */
/* Demangled: vtable for CamPath_BufCtrl */
extern void* _ZTV15CamPath_BufCtrl;

/* Symbol: _ZN10Header_PSO12Header_DequeEjPv */
/* Demangled: Header_PSO::Header_Deque(unsigned int, void*) */
int _ZN10Header_PSO12Header_DequeEjPv(void);

/* Symbol: _ZN13BUF_CTRL_UFGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_UFGO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_UFGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN13CAMSV_TG_CTRL7_configEv */
/* Demangled: CAMSV_TG_CTRL::_config() */
int _ZN13CAMSV_TG_CTRL7_configEv(void);

/* Symbol: TwinMgr_DbgLogEnable_VERBOSE */
/* Demangled: TwinMgr_DbgLogEnable_VERBOSE */
extern void* TwinMgr_DbgLogEnable_VERBOSE;

/* Symbol: cam_ts_DbgLogEnable_DEBUG */
/* Demangled: cam_ts_DbgLogEnable_DEBUG */
extern void* cam_ts_DbgLogEnable_DEBUG;

/* Symbol: _ZTV12CAM_TOP_CTRL */
/* Demangled: vtable for CAM_TOP_CTRL */
extern void* _ZTV12CAM_TOP_CTRL;

/* Symbol: dfs_DbgLogEnable_WARN */
/* Demangled: dfs_DbgLogEnable_WARN */
extern void* dfs_DbgLogEnable_WARN;

/* Symbol: _ZN12CAM_RAW_PIPE13getCurPixModeE14_isp_dma_enum_ */
/* Demangled: CAM_RAW_PIPE::getCurPixMode(_isp_dma_enum_) */
int _ZN12CAM_RAW_PIPE13getCurPixModeE14_isp_dma_enum_(void);

/* Symbol: _ZNSt3__14moveI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31> std::__1::move<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31, _stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>, std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO*, _stISP_BUF_INFO&, _stISP_BUF_INFO**, int, 31>) */
int _ZNSt3__14moveI15_stISP_BUF_INFOPS1_RS1_PS2_iLi31ES1_S2_S3_S4_iLi31EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: _ZN10PIPE_CHECK10QBN1_CHECKEv */
/* Demangled: PIPE_CHECK::QBN1_CHECK() */
int _ZN10PIPE_CHECK10QBN1_CHECKEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE */
/* Demangled: TwinMgr_BufCtrl::enque_push(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*) */
int _ZN15TwinMgr_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE(void);

/* Symbol: _ZN7DMA_CQ716setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ7::setCQTriggerMode(DMA_CQ7::E_MODE) */
int _ZN7DMA_CQ716setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: _ZN12BUF_CTRL_AAO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_AAO::FBC_STATUS(IspDrv*) */
int _ZN12BUF_CTRL_AAO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN12CAM_BUF_CTRL10m_SttStateE */
/* Demangled: CAM_BUF_CTRL::m_SttState */
extern void* _ZN12CAM_BUF_CTRL10m_SttStateE;

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__113move_backwardIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_ */
/* Demangled: std::__1::__deque_iterator<int, int*, int&, int**, int, 1024> std::__1::move_backward<int, int*, int&, int**, int, 1024, int, int*, int&, int**, int, 1024>(std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>) */
int _ZNSt3__113move_backwardIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_(void);

/* Symbol: _ZN7DMA_CQ117setSlaveAddr_byCQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ1::setSlaveAddr_byCQ(ISP_HW_MODULE) */
int _ZN7DMA_CQ117setSlaveAddr_byCQE13ISP_HW_MODULE(void);

/* Symbol: _ZN11Header_UFGO12Header_DequeEjPv */
/* Demangled: Header_UFGO::Header_Deque(unsigned int, void*) */
int _ZN11Header_UFGO12Header_DequeEjPv(void);

/* Symbol: _ZN12CAM_RRZ_CTRL11calCoefStepEjjjjj */
/* Demangled: CAM_RRZ_CTRL::calCoefStep(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12CAM_RRZ_CTRL11calCoefStepEjjjjj(void);

/* Symbol: _ZN12CAM_RRZ_CTRL14getCoefNNIRTblEj */
/* Demangled: CAM_RRZ_CTRL::getCoefNNIRTbl(unsigned int) */
int _ZN12CAM_RRZ_CTRL14getCoefNNIRTblEj(void);

/* Symbol: _ZN9SecMgrImp26SecMgr_GetSecureTwinStatusE13ISP_HW_MODULE */
/* Demangled: SecMgrImp::SecMgr_GetSecureTwinStatus(ISP_HW_MODULE) */
int _ZN9SecMgrImp26SecMgr_GetSecureTwinStatusE13ISP_HW_MODULE(void);

/* Symbol: _ZN8DMA_CQ106TrigCQEi */
/* Demangled: DMA_CQ10::TrigCQ(int) */
int _ZN8DMA_CQ106TrigCQEi(void);

/* Symbol: _ZN11Header_FLKO12Header_DequeEjPv */
/* Demangled: Header_FLKO::Header_Deque(unsigned int, void*) */
int _ZN11Header_FLKO12Header_DequeEjPv(void);

/* Symbol: _ZN12CAM_BUF_CTRL8_disableEPv */
/* Demangled: CAM_BUF_CTRL::_disable(void*) */
int _ZN12CAM_BUF_CTRL8_disableEPv(void);

/* Symbol: _ZNSt3__14moveIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_ */
/* Demangled: std::__1::__deque_iterator<int, int*, int&, int**, int, 1024> std::__1::move<int, int*, int&, int**, int, 1024, int, int*, int&, int**, int, 1024>(std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>, std::__1::__deque_iterator<int, int*, int&, int**, int, 1024>) */
int _ZNSt3__14moveIiPiRiPS1_iLi1024EiS1_S2_S3_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_(void);

/* Symbol: _ZTV12UNI_TOP_CTRL */
/* Demangled: vtable for UNI_TOP_CTRL */
extern void* _ZTV12UNI_TOP_CTRL;

/* Symbol: _ZN12CamPathPass110dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY */
/* Demangled: CamPathPass1::dequeueBuf(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
int _ZN12CamPathPass110dequeueBufEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*>&>::push_back(_stISP_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN6SecMgr11SecMgr_InitEv */
/* Demangled: SecMgr::SecMgr_Init() */
int _ZN6SecMgr11SecMgr_InitEv(void);

/* Symbol: cam_cap_DbgLogEnable_DEBUG */
/* Demangled: cam_cap_DbgLogEnable_DEBUG */
extern void* cam_cap_DbgLogEnable_DEBUG;

/* Symbol: _ZN11CAM_DFS_Mgr19m_moduleTargetLevelE */
/* Demangled: CAM_DFS_Mgr::m_moduleTargetLevel */
extern void* _ZN11CAM_DFS_Mgr19m_moduleTargetLevelE;

/* Symbol: _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL7_configEv */
/* Demangled: CAM_BUF_CTRL::_config() */
int _ZN12CAM_BUF_CTRL7_configEv(void);

/* Symbol: _ZN12CAM_YUV_PIPE7_configEv */
/* Demangled: CAM_YUV_PIPE::_config() */
int _ZN12CAM_YUV_PIPE7_configEv(void);

/* Symbol: svdfs_DbgLogEnable_ERROR */
/* Demangled: svdfs_DbgLogEnable_ERROR */
extern void* svdfs_DbgLogEnable_ERROR;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZTV13BUF_CTRL_FLKO */
/* Demangled: vtable for BUF_CTRL_FLKO */
extern void* _ZTV13BUF_CTRL_FLKO;

/* Symbol: _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > >&) */
int _ZNSt3__114__split_bufferINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZN10capibility10D_TWIN_CFG8GetDTwinEv */
/* Demangled: capibility::D_TWIN_CFG::GetDTwin() */
int _ZN10capibility10D_TWIN_CFG8GetDTwinEv(void);

/* Symbol: _ZN12Cam_path_sel12Path_sel_RAWEiii12E_CamPattern */
/* Demangled: Cam_path_sel::Path_sel_RAW(int, int, int, E_CamPattern) */
int _ZN12Cam_path_sel12Path_sel_RAWEiii12E_CamPattern(void);

/* Symbol: _ZN13CAM_TWIN_PIPE7_enableEPv */
/* Demangled: CAM_TWIN_PIPE::_enable(void*) */
int _ZN13CAM_TWIN_PIPE7_enableEPv(void);

/* Symbol: _ZN11CmdQMgrImp3C2Ev */
/* Demangled: CmdQMgrImp3::CmdQMgrImp3() */
int _ZN11CmdQMgrImp3C2Ev(void);

/* Symbol: _ZN14CAMSV_TOP_CTRL7_configEv */
/* Demangled: CAMSV_TOP_CTRL::_config() */
int _ZN14CAMSV_TOP_CTRL7_configEv(void);

/* Symbol: _ZN6DMAO_B7_configEv */
/* Demangled: DMAO_B::_config() */
int _ZN6DMAO_B7_configEv(void);

/* Symbol: _ZN11Header_RRZO10GetRegInfoEjP6IspDrv */
/* Demangled: Header_RRZO::GetRegInfo(unsigned int, IspDrv*) */
int _ZN11Header_RRZO10GetRegInfoEjP6IspDrv(void);

/* Symbol: _ZN11CAM_TG_CTRLC2Ev */
/* Demangled: CAM_TG_CTRL::CAM_TG_CTRL() */
int _ZN11CAM_TG_CTRLC2Ev(void);

/* Symbol: _ZN16CmdQMgrImp3_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
int _ZN16CmdQMgrImp3_imme20CmdQMgr_updateCQModeEP10DupCmdQMgrj(void);

/* Symbol: _ZN12CAM_BUF_CTRL7suspendE13ISP_HW_MODULEP11ISP_DRV_CAMNS_12E_SUSPEND_OPE */
/* Demangled: CAM_BUF_CTRL::suspend(ISP_HW_MODULE, ISP_DRV_CAM*, CAM_BUF_CTRL::E_SUSPEND_OP) */
int _ZN12CAM_BUF_CTRL7suspendE13ISP_HW_MODULEP11ISP_DRV_CAMNS_12E_SUSPEND_OPE(void);

/* Symbol: _ZN15CamPath_BufCtrl7enqueHWEj */
/* Demangled: CamPath_BufCtrl::enqueHW(unsigned int) */
int _ZN15CamPath_BufCtrl7enqueHWEj(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_front() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme20CmdQMgr_GetBurstQIdxEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetBurstQIdx() */
int _ZN16CmdQMgrImp1_imme20CmdQMgr_GetBurstQIdxEv(void);

/* Symbol: _ZN13BUF_CTRL_FLKO12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: BUF_CTRL_FLKO::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN13BUF_CTRL_FLKO12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN8DMA_UFGO5checkERi */
/* Demangled: DMA_UFGO::check(int&) */
int _ZN8DMA_UFGO5checkERi(void);

/* Symbol: _ZN11TwinMgr_IMP7suspendEv */
/* Demangled: TwinMgr_IMP::suspend() */
int _ZN11TwinMgr_IMP7suspendEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEEC2EjjS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&) */
int _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEEC2EjjS9_(void);

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE9push_backERKi */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::push_back(int const&) */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE9push_backERKi(void);

/* Symbol: _ZTV9RlbMgrImp */
/* Demangled: vtable for RlbMgrImp */
extern void* _ZTV9RlbMgrImp;

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__move_assign(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZNSt3__114__split_bufferIN5DMA_B6DMA_BWERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DMA_B::DMA_BW>&) */
int _ZNSt3__114__split_bufferIN5DMA_B6DMA_BWERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: func_camsv_DbgLogEnable_ERROR */
/* Demangled: func_camsv_DbgLogEnable_ERROR */
extern void* func_camsv_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE6resizeEj */
/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::resize(unsigned int) */
int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE6resizeEj(void);

/* Symbol: _ZN10CmdQMgrImp18CmdQMgr_GetCounterEi */
/* Demangled: CmdQMgrImp::CmdQMgr_GetCounter(int) */
int _ZN10CmdQMgrImp18CmdQMgr_GetCounterEi(void);

/* Symbol: RlbMgr_DbgLogEnable_ASSERT */
/* Demangled: RlbMgr_DbgLogEnable_ASSERT */
extern void* RlbMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: CmdQMgr_DbgLogEnable_WARN */
/* Demangled: CmdQMgr_DbgLogEnable_WARN */
extern void* CmdQMgr_DbgLogEnable_WARN;

/* Symbol: _ZN15CAM_TUNING_CTRL10update_endEv */
/* Demangled: CAM_TUNING_CTRL::update_end() */
int _ZN15CAM_TUNING_CTRL10update_endEv(void);

/* Symbol: _ZN11CAM_TG_CTRL7_configEv */
/* Demangled: CAM_TG_CTRL::_config() */
int _ZN11CAM_TG_CTRL7_configEv(void);

/* Symbol: _ZN11TwinMgr_IMP9getIsTwinEji */
/* Demangled: TwinMgr_IMP::getIsTwin(unsigned int, int) */
int _ZN11TwinMgr_IMP9getIsTwinEji(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN6UniMgr16UniMgr_GetCurObjEv */
/* Demangled: UniMgr::UniMgr_GetCurObj() */
int _ZN6UniMgr16UniMgr_GetCurObjEv(void);

/* Symbol: _ZN7TwinMgr14createInstanceE13ISP_HW_MODULE */
/* Demangled: TwinMgr::createInstance(ISP_HW_MODULE) */
int _ZN7TwinMgr14createInstanceE13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_ */
/* Demangled: std::__1::list<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::erase(std::__1::__list_const_iterator<ISP_HW_MODULE, void*>, std::__1::__list_const_iterator<ISP_HW_MODULE, void*>) */
int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE5eraseENS_21__list_const_iteratorIS1_PvEES7_(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE const&>(ISP_HW_MODULE const&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__push_back_slow_path<NSImageio::NSIspio::STImgCrop const&>(NSImageio::NSIspio::STImgCrop const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: UniMgr_DbgLogEnable_ASSERT */
/* Demangled: UniMgr_DbgLogEnable_ASSERT */
extern void* UniMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN10PIPE_CHECK8AF_CHECKEi */
/* Demangled: PIPE_CHECK::AF_CHECK(int) */
int _ZN10PIPE_CHECK8AF_CHECKEi(void);

/* Symbol: _ZN11TwinMgr_IMP11pathControlER26TWIN_MGR_PATH_CFG_IN_PARAM */
/* Demangled: TwinMgr_IMP::pathControl(TWIN_MGR_PATH_CFG_IN_PARAM&) */
int _ZN11TwinMgr_IMP11pathControlER26TWIN_MGR_PATH_CFG_IN_PARAM(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe6PortIDERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::PortID>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe6PortIDERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN11CmdQMgrImp212CmdQMgr_stopEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_stop() */
int _ZN11CmdQMgrImp212CmdQMgr_stopEv(void);

/* Symbol: _ZN15CamPath_BufCtrl9enque_popEv */
/* Demangled: CamPath_BufCtrl::enque_pop() */
int _ZN15CamPath_BufCtrl9enque_popEv(void);

/* Symbol: _ZN11Header_FLKO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_FLKO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_FLKO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN12DMAO_CAMSV_B7_configEv */
/* Demangled: DMAO_CAMSV_B::_config() */
int _ZN12DMAO_CAMSV_B7_configEv(void);

/* Symbol: _ZN11TwinMgr_IMP10FSM_UPDATEEj */
/* Demangled: TwinMgr_IMP::FSM_UPDATE(unsigned int) */
int _ZN11TwinMgr_IMP10FSM_UPDATEEj(void);

/* Symbol: _ZN9UniMgrImp4m_opE */
/* Demangled: UniMgrImp::m_op */
extern void* _ZN9UniMgrImp4m_opE;

/* Symbol: _ZN7DMA_CQ116setCQTriggerModeENS_6E_MODEEPv */
/* Demangled: DMA_CQ1::setCQTriggerMode(DMA_CQ1::E_MODE, void*) */
int _ZN7DMA_CQ116setCQTriggerModeENS_6E_MODEEPv(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEC2ERKS6_ */
/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::vector(std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEEC2ERKS6_(void);

/* Symbol: _ZN11CAM_DFS_Mgr15destroyInstanceEPKc */
/* Demangled: CAM_DFS_Mgr::destroyInstance(char const*) */
int _ZN11CAM_DFS_Mgr15destroyInstanceEPKc(void);

/* Symbol: cam_ts_DbgLogEnable_ASSERT */
/* Demangled: cam_ts_DbgLogEnable_ASSERT */
extern void* cam_ts_DbgLogEnable_ASSERT;

/* Symbol: _ZN16CmdQMgrImp3_imme14CmdQMgr_detachEv */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_detach() */
int _ZN16CmdQMgrImp3_imme14CmdQMgr_detachEv(void);

/* Symbol: _ZTV11Header_UFEO */
/* Demangled: vtable for Header_UFEO */
extern void* _ZTV11Header_UFEO;

/* Symbol: _ZN13BUF_CTRL_LCSO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_LCSO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_LCSO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN13TwinFlowCheck13perFrameCheckEv */
/* Demangled: TwinFlowCheck::perFrameCheck() */
int _ZN13TwinFlowCheck13perFrameCheckEv(void);

/* Symbol: _ZN9SecMgrImp17SecMgr_SetDapcRegEv */
/* Demangled: SecMgrImp::SecMgr_SetDapcReg() */
int _ZN9SecMgrImp17SecMgr_SetDapcRegEv(void);

/* Symbol: _ZN7DMA_CQ05IO2CQENS_10E_Write2CQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ0::IO2CQ(DMA_CQ0::E_Write2CQ, ISP_HW_MODULE) */
int _ZN7DMA_CQ05IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void);

/* Symbol: _ZN12CamPathPass1C1Ev */
/* Demangled: CamPathPass1::CamPathPass1() */
int _ZN12CamPathPass1C1Ev(void);

/* Symbol: _ZN10PIPE_CHECK8ME_CHECKEv */
/* Demangled: PIPE_CHECK::ME_CHECK() */
int _ZN10PIPE_CHECK8ME_CHECKEv(void);

/* Symbol: _ZN11TwinMgr_IMP11getTwinCmdQE13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: TwinMgr_IMP::getTwinCmdQ(ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN11TwinMgr_IMP11getTwinCmdQE13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat>&>&) */
int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZTV13BUF_CTRL_RSSO */
/* Demangled: vtable for BUF_CTRL_RSSO */
extern void* _ZTV13BUF_CTRL_RSSO;

/* Symbol: _ZN12CAM_BUF_CTRL16dropEnqueueHwBufEv */
/* Demangled: CAM_BUF_CTRL::dropEnqueueHwBuf() */
int _ZN12CAM_BUF_CTRL16dropEnqueueHwBufEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE5eraseENS_16__deque_iteratorIiPKiRS5_PKS6_iLi1024EEE */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::erase(std::__1::__deque_iterator<int, int const*, int const&, int const* const*, int, 1024>) */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE5eraseENS_16__deque_iteratorIiPKiRS5_PKS6_iLi1024EEE(void);

/* Symbol: _ZN12CAM_YUV_PIPE9_write2CQEv */
/* Demangled: CAM_YUV_PIPE::_write2CQ() */
int _ZN12CAM_YUV_PIPE9_write2CQEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_back(int*&&) */
int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN6UniMgr13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg */
/* Demangled: UniMgr::UniMgr_attach(UNI_HW_MODULE, DupCmdQMgr*, IspDMACfg*) */
int _ZN6UniMgr13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg(void);

/* Symbol: SecMgr_DbgLogEnable_INFO */
/* Demangled: SecMgr_DbgLogEnable_INFO */
extern void* SecMgr_DbgLogEnable_INFO;

/* Symbol: _ZN10CmdQMgrImp15CmdQMgr_suspendEv */
/* Demangled: CmdQMgrImp::CmdQMgr_suspend() */
int _ZN10CmdQMgrImp15CmdQMgr_suspendEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme19CmdQMgr_update_IMMEEj */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_update_IMME(unsigned int) */
int _ZN16CmdQMgrImp1_imme19CmdQMgr_update_IMMEEj(void);

/* Symbol: _ZTV8QueueMgrIjE */
/* Demangled: vtable for QueueMgr<unsigned int> */
extern void* _ZTV8QueueMgrIjE;

/* Symbol: _ZN13CAM_TWIN_PIPE29update_before_twindrv_requestEv */
/* Demangled: CAM_TWIN_PIPE::update_before_twindrv_request() */
int _ZN13CAM_TWIN_PIPE29update_before_twindrv_requestEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme18CmdQMgr_GetDuqQIdxEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetDuqQIdx() */
int _ZN16CmdQMgrImp1_imme18CmdQMgr_GetDuqQIdxEv(void);

/* Symbol: _ZN11CmdQMgrImp312CmdQMgr_stopEv */
/* Demangled: CmdQMgrImp3::CmdQMgr_stop() */
int _ZN11CmdQMgrImp312CmdQMgr_stopEv(void);

/* Symbol: _ZN8DMA_CQ116TrigCQEv */
/* Demangled: DMA_CQ11::TrigCQ() */
int _ZN8DMA_CQ116TrigCQEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZN10capibility18GetSupportBurstNumEv */
/* Demangled: capibility::GetSupportBurstNum() */
int _ZN10capibility18GetSupportBurstNumEv(void);

/* Symbol: func_cam_DbgLogEnable_VERBOSE */
/* Demangled: func_cam_DbgLogEnable_VERBOSE */
extern void* func_cam_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9SecMgrImp25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE */
/* Demangled: SecMgrImp::SecMgr_GetSecureCamStatus(ISP_HW_MODULE) */
int _ZN9SecMgrImp25SecMgr_GetSecureCamStatusE13ISP_HW_MODULE(void);

/* Symbol: _ZN12CAM_RAW_PIPE6setRSSEv */
/* Demangled: CAM_RAW_PIPE::setRSS() */
int _ZN12CAM_RAW_PIPE6setRSSEv(void);

/* Symbol: _ZThn264_N15CAM_TUNING_CTRL7_configEv */
/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_config() */
int _ZThn264_N15CAM_TUNING_CTRL7_configEv(void);

/* Symbol: _ZTV14CAMSV_TOP_CTRL */
/* Demangled: vtable for CAMSV_TOP_CTRL */
extern void* _ZTV14CAMSV_TOP_CTRL;

/* Symbol: cam_cap_DbgLogEnable_VERBOSE */
/* Demangled: cam_cap_DbgLogEnable_VERBOSE */
extern void* cam_cap_DbgLogEnable_VERBOSE;

/* Symbol: _ZN10CmdQMgrImp20CmdQMgr_GetCurMgrObjE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp::CmdQMgr_GetCurMgrObj(E_ISP_CAM_CQ) */
int _ZN10CmdQMgrImp20CmdQMgr_GetCurMgrObjE12E_ISP_CAM_CQ(void);

/* Symbol: _ZN12CAM_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi */
/* Demangled: CAM_BUF_CTRL::enqueueHwBuf(_stISP_BUF_INFO&, int) */
int _ZN12CAM_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi(void);

/* Symbol: _ZN10PIPE_CHECK11Check_StartEv */
/* Demangled: PIPE_CHECK::Check_Start() */
int _ZN10PIPE_CHECK11Check_StartEv(void);

/* Symbol: _ZN10PIPE_CHECK11ENQUE_CHECKEv */
/* Demangled: PIPE_CHECK::ENQUE_CHECK() */
int _ZN10PIPE_CHECK11ENQUE_CHECKEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void);

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DBS_VsyncEv */
/* Demangled: CAM_DFS_Mgr::CAM_DBS_Vsync() */
int _ZN11CAM_DFS_Mgr13CAM_DBS_VsyncEv(void);

/* Symbol: _ZNSt3__113move_backwardINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341> std::__1::move_backward<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>) */
int _ZNSt3__113move_backwardINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: _ZN9SecMgrImp13SecMgr_attachEjjNSt3__16vectorIjNS0_9allocatorIjEEEEjjy */
/* Demangled: SecMgrImp::SecMgr_attach(unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, unsigned int, unsigned int, unsigned long long) */
int _ZN9SecMgrImp13SecMgr_attachEjjNSt3__16vectorIjNS0_9allocatorIjEEEEjjy(void);

/* Symbol: g_EnDbgCfgMutex */
/* Demangled: g_EnDbgCfgMutex */
extern void* g_EnDbgCfgMutex;

/* Symbol: _ZTV8DMA_LSCI */
/* Demangled: vtable for DMA_LSCI */
extern void* _ZTV8DMA_LSCI;

/* Symbol: _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >::__swap_out_circular_buffer(std::__1::__split_buffer<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF>&>&) */
int _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN8DMA_CQ1016setCQTriggerModeENS_6E_MODEEPv */
/* Demangled: DMA_CQ10::setCQTriggerMode(DMA_CQ10::E_MODE, void*) */
int _ZN8DMA_CQ1016setCQTriggerModeENS_6E_MODEEPv(void);

/* Symbol: _ZN15CAM_TUNING_CTRL7_uninitEv */
/* Demangled: CAM_TUNING_CTRL::_uninit() */
int _ZN15CAM_TUNING_CTRL7_uninitEv(void);

/* Symbol: _ZN10Header_AAO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_AAO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN10Header_AAO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN10PIPE_CHECK8TG_CHECKEj */
/* Demangled: PIPE_CHECK::TG_CHECK(unsigned int) */
int _ZN10PIPE_CHECK8TG_CHECKEj(void);

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE8pop_backEv */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::pop_back() */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE8pop_backEv(void);

/* Symbol: _ZTV15TwinMgr_BufCtrl */
/* Demangled: vtable for TwinMgr_BufCtrl */
extern void* _ZTV15TwinMgr_BufCtrl;

/* Symbol: _ZN14CAMSV_BUF_CTRLC1Ev */
/* Demangled: CAMSV_BUF_CTRL::CAMSV_BUF_CTRL() */
int _ZN14CAMSV_BUF_CTRLC1Ev(void);

/* Symbol: _ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPiiS1_RiPS1_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SB_SA_PNS_9enable_ifIXsr27__is_random_access_iteratorISB_EE5valueEvE4typeE(void);

/* Symbol: _ZN8DMA_CQ126TrigCQEv */
/* Demangled: DMA_CQ12::TrigCQ() */
int _ZN8DMA_CQ126TrigCQEv(void);

/* Symbol: _ZN12CamPathPass115getCamPathStateEv */
/* Demangled: CamPathPass1::getCamPathState() */
int _ZN12CamPathPass115getCamPathStateEv(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: func_cam_DbgLogEnable_INFO */
/* Demangled: func_cam_DbgLogEnable_INFO */
extern void* func_cam_DbgLogEnable_INFO;

/* Symbol: _ZN13CAM_TWIN_PIPE7suspendEv */
/* Demangled: CAM_TWIN_PIPE::suspend() */
int _ZN13CAM_TWIN_PIPE7suspendEv(void);

/* Symbol: _ZN11TwinMgr_IMP25cvtDupCmdQRegtoDualIspRegERNSt3__16vectorIP11ISP_DRV_CAMNS0_9allocatorIS3_EEEE */
/* Demangled: TwinMgr_IMP::cvtDupCmdQRegtoDualIspReg(std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >&) */
int _ZN11TwinMgr_IMP25cvtDupCmdQRegtoDualIspRegERNSt3__16vectorIP11ISP_DRV_CAMNS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN12BUF_CTRL_PSO12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: BUF_CTRL_PSO::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN12BUF_CTRL_PSO12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZTV12BUF_CTRL_AAO */
/* Demangled: vtable for BUF_CTRL_AAO */
extern void* _ZTV12BUF_CTRL_AAO;

/* Symbol: _ZN14CAMSV_BUF_CTRL6resumeEv */
/* Demangled: CAMSV_BUF_CTRL::resume() */
int _ZN14CAMSV_BUF_CTRL6resumeEv(void);

/* Symbol: _ZN11TwinMgr_IMP11suspendTwinEN7TwinMgr12E_SUSPEND_OPE */
/* Demangled: TwinMgr_IMP::suspendTwin(TwinMgr::E_SUSPEND_OP) */
int _ZN11TwinMgr_IMP11suspendTwinEN7TwinMgr12E_SUSPEND_OPE(void);

/* Symbol: svdfs_DbgLogEnable_INFO */
/* Demangled: svdfs_DbgLogEnable_INFO */
extern void* svdfs_DbgLogEnable_INFO;

/* Symbol: _ZTV7DMA_CQ0 */
/* Demangled: vtable for DMA_CQ0 */
extern void* _ZTV7DMA_CQ0;

/* Symbol: _ZN7DMA_CQ017setSlaveAddr_byCQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ0::setSlaveAddr_byCQ(ISP_HW_MODULE) */
int _ZN7DMA_CQ017setSlaveAddr_byCQE13ISP_HW_MODULE(void);

/* Symbol: _ZN11Header_UFEO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_UFEO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_UFEO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN12CAM_BUF_CTRLC2Ev */
/* Demangled: CAM_BUF_CTRL::CAM_BUF_CTRL() */
int _ZN12CAM_BUF_CTRLC2Ev(void);

/* Symbol: _ZTV14CAM_MAGIC_CTRL */
/* Demangled: vtable for CAM_MAGIC_CTRL */
extern void* _ZTV14CAM_MAGIC_CTRL;

/* Symbol: _ZTV8DMA_UFEO */
/* Demangled: vtable for DMA_UFEO */
extern void* _ZTV8DMA_UFEO;

/* Symbol: _ZN11CmdQMgrImp314CmdQMgr_detachEv */
/* Demangled: CmdQMgrImp3::CmdQMgr_detach() */
int _ZN11CmdQMgrImp314CmdQMgr_detachEv(void);

/* Symbol: _ZTV7DMA_CQ1 */
/* Demangled: vtable for DMA_CQ1 */
extern void* _ZTV7DMA_CQ1;

/* Symbol: _ZN12UNI_TOP_CTRL8_disableEPv */
/* Demangled: UNI_TOP_CTRL::_disable(void*) */
int _ZN12UNI_TOP_CTRL8_disableEPv(void);

/* Symbol: _ZN11TwinMgr_IMP16prepareDualInCfgEv */
/* Demangled: TwinMgr_IMP::prepareDualInCfg() */
int _ZN11TwinMgr_IMP16prepareDualInCfgEv(void);

/* Symbol: path_DbgLogEnable_ASSERT */
/* Demangled: path_DbgLogEnable_ASSERT */
extern void* path_DbgLogEnable_ASSERT;

/* Symbol: _ZThn264_N15CAM_TUNING_CTRL8_disableEPv */
/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_disable(void*) */
int _ZThn264_N15CAM_TUNING_CTRL8_disableEPv(void);

/* Symbol: _ZN9UniMgrImp12UniMgr_SetCBE13ISP_HW_MODULEjPv */
/* Demangled: UniMgrImp::UniMgr_SetCB(ISP_HW_MODULE, unsigned int, void*) */
int _ZN9UniMgrImp12UniMgr_SetCBE13ISP_HW_MODULEjPv(void);

/* Symbol: _ZN15CamPath_BufCtrlC2Ev */
/* Demangled: CamPath_BufCtrl::CamPath_BufCtrl() */
int _ZN15CamPath_BufCtrlC2Ev(void);

/* Symbol: _ZN11TwinMgr_IMP14getIsStartTwinEv */
/* Demangled: TwinMgr_IMP::getIsStartTwin() */
int _ZN11TwinMgr_IMP14getIsStartTwinEv(void);

/* Symbol: UniMgr_DbgLogEnable_INFO */
/* Demangled: UniMgr_DbgLogEnable_INFO */
extern void* UniMgr_DbgLogEnable_INFO;

/* Symbol: RlbMgr_DbgLogEnable_VERBOSE */
/* Demangled: RlbMgr_DbgLogEnable_VERBOSE */
extern void* RlbMgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN11CAM_DFS_Mgr15CAM_DFS_FSM_STRENS_5E_FSME */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_FSM_STR(CAM_DFS_Mgr::E_FSM) */
int _ZN11CAM_DFS_Mgr15CAM_DFS_FSM_STRENS_5E_FSME(void);

/* Symbol: _ZTV7DMA_CQ4 */
/* Demangled: vtable for DMA_CQ4 */
extern void* _ZTV7DMA_CQ4;

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__push_back_slow_path<ST_BUF_INFO__ const&>(ST_BUF_INFO__ const&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN12CAM_TOP_CTRL8_disableEPv */
/* Demangled: CAM_TOP_CTRL::_disable(void*) */
int _ZN12CAM_TOP_CTRL8_disableEPv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl7enqueHWEj */
/* Demangled: TwinMgr_BufCtrl::enqueHW(unsigned int) */
int _ZN15TwinMgr_BufCtrl7enqueHWEj(void);

/* Symbol: _ZTV7DMA_CQ5 */
/* Demangled: vtable for DMA_CQ5 */
extern void* _ZTV7DMA_CQ5;

/* Symbol: _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_ */
/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::push_back(_stISP_BUF_INFO const&) */
int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void);

/* Symbol: _ZN10PIPE_CHECK8PS_CHECKEv */
/* Demangled: PIPE_CHECK::PS_CHECK() */
int _ZN10PIPE_CHECK8PS_CHECKEv(void);

/* Symbol: _ZN10PIPE_CHECK9LCS_CHECKEv */
/* Demangled: PIPE_CHECK::LCS_CHECK() */
int _ZN10PIPE_CHECK9LCS_CHECKEv(void);

/* Symbol: _ZN8DMA_CQ1017setSlaveAddr_byCQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ10::setSlaveAddr_byCQ(ISP_HW_MODULE) */
int _ZN8DMA_CQ1017setSlaveAddr_byCQE13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::__add_back_capacity() */
int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN12BUF_CTRL_AAO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_AAO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN12BUF_CTRL_AAO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN13BUF_CTRL_IMGO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_IMGO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_IMGO10FBC_STATUSEP6IspDrv(void);

/* Symbol: SecMgr_DbgLogEnable_ERROR */
/* Demangled: SecMgr_DbgLogEnable_ERROR */
extern void* SecMgr_DbgLogEnable_ERROR;

/* Symbol: cam_ts_DbgLogEnable_VERBOSE */
/* Demangled: cam_ts_DbgLogEnable_VERBOSE */
extern void* cam_ts_DbgLogEnable_VERBOSE;

/* Symbol: _ZN7DMA_CQ014GetCQupdateCntEi */
/* Demangled: DMA_CQ0::GetCQupdateCnt(int) */
int _ZN7DMA_CQ014GetCQupdateCntEi(void);

/* Symbol: _ZTV7DMA_CQ7 */
/* Demangled: vtable for DMA_CQ7 */
extern void* _ZTV7DMA_CQ7;

/* Symbol: _ZN12CAM_YUV_PIPE6setRSSEv */
/* Demangled: CAM_YUV_PIPE::setRSS() */
int _ZN12CAM_YUV_PIPE6setRSSEv(void);

/* Symbol: _ZN12BUF_CTRL_PSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_PSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN12BUF_CTRL_PSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN11TwinMgr_IMP12setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE */
/* Demangled: TwinMgr_IMP::setP1ImgoCfg(std::__1::list<DMACfg, std::__1::allocator<DMACfg> >*) */
int _ZN11TwinMgr_IMP12setP1ImgoCfgEPNSt3__14listI6DMACfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: support_dma_port */
/* Demangled: support_dma_port */
extern void* support_dma_port;

/* Symbol: _ZN11CmdQMgrImp218CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp2::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN11CmdQMgrImp218CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZTV7DMA_CQ8 */
/* Demangled: vtable for DMA_CQ8 */
extern void* _ZTV7DMA_CQ8;

/* Symbol: _ZN10Header_AFO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_AFO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN10Header_AFO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN6UniMgr13UniMgr_resumeE13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_resume(ISP_HW_MODULE) */
int _ZN6UniMgr13UniMgr_resumeE13ISP_HW_MODULE(void);

/* Symbol: cam_ts_DbgLogEnable_ERROR */
/* Demangled: cam_ts_DbgLogEnable_ERROR */
extern void* cam_ts_DbgLogEnable_ERROR;

/* Symbol: _ZN12CAM_TOP_CTRLC1Ev */
/* Demangled: CAM_TOP_CTRL::CAM_TOP_CTRL() */
int _ZN12CAM_TOP_CTRLC1Ev(void);

/* Symbol: _ZN9UniMgrImp13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg */
/* Demangled: UniMgrImp::UniMgr_attach(UNI_HW_MODULE, DupCmdQMgr*, IspDMACfg*) */
int _ZN9UniMgrImp13UniMgr_attachE13UNI_HW_MODULEP10DupCmdQMgrP9IspDMACfg(void);

/* Symbol: _ZN10capibility17GetCapibility_drvEj14E_CAM_Query_OPR9_tCAM_rstN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE */
/* Demangled: capibility::GetCapibility_drv(unsigned int, E_CAM_Query_OP, _tCAM_rst&, NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode) */
int _ZN10capibility17GetCapibility_drvEj14E_CAM_Query_OPR9_tCAM_rstN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE(void);

/* Symbol: _ZN12BUF_CTRL_PDO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_PDO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN12BUF_CTRL_PDO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZTV11Header_LMVO */
/* Demangled: vtable for Header_LMVO */
extern void* _ZTV11Header_LMVO;

/* Symbol: _ZThn264_N15CAM_TUNING_CTRL7_enableEPv */
/* Demangled: non-virtual thunk to CAM_TUNING_CTRL::_enable(void*) */
int _ZThn264_N15CAM_TUNING_CTRL7_enableEPv(void);

/* Symbol: _ZTV9SecMgrImp */
/* Demangled: vtable for SecMgrImp */
extern void* _ZTV9SecMgrImp;

/* Symbol: _ZN12CamPathPass14initEP10DupCmdQMgr */
/* Demangled: CamPathPass1::init(DupCmdQMgr*) */
int _ZN12CamPathPass14initEP10DupCmdQMgr(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__swap_out_circular_buffer(std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN13BUF_CTRL_LCSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_LCSO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_LCSO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN12CAM_BMX_CTRL7_configEv */
/* Demangled: CAM_BMX_CTRL::_config() */
int _ZN12CAM_BMX_CTRL7_configEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL17m_recentFrmTimeMsE */
/* Demangled: CAMSV_BUF_CTRL::m_recentFrmTimeMs */
extern void* _ZN14CAMSV_BUF_CTRL17m_recentFrmTimeMsE;

/* Symbol: _ZN10capibilityC1EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME */
/* Demangled: capibility::capibility(NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
int _ZN10capibilityC1EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void);

/* Symbol: _ZN10DupCmdQMgr19CmdQMgr_update_IMMEEj */
/* Demangled: DupCmdQMgr::CmdQMgr_update_IMME(unsigned int) */
int _ZN10DupCmdQMgr19CmdQMgr_update_IMMEEj(void);

/* Symbol: _ZN11Header_IMGO12Header_FlashEj */
/* Demangled: Header_IMGO::Header_Flash(unsigned int) */
int _ZN11Header_IMGO12Header_FlashEj(void);

/* Symbol: _ZN15TwinMgr_BufCtrlC1Ev */
/* Demangled: TwinMgr_BufCtrl::TwinMgr_BufCtrl() */
int _ZN15TwinMgr_BufCtrlC1Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__push_back_slow_path<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&>(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&) */
int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN15CAM_TUNING_CTRL7_enableEPv */
/* Demangled: CAM_TUNING_CTRL::_enable(void*) */
int _ZN15CAM_TUNING_CTRL7_enableEPv(void);

/* Symbol: _ZN6SecMgr26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj */
/* Demangled: SecMgr::SecMgr_GetSecurePortStatus(ISP_HW_MODULE, unsigned int) */
int _ZN6SecMgr26SecMgr_GetSecurePortStatusE13ISP_HW_MODULEj(void);

/* Symbol: _ZTV12CamPathPass1 */
/* Demangled: vtable for CamPathPass1 */
extern void* _ZTV12CamPathPass1;

/* Symbol: _ZTV12CAM_DPD_CTRL */
/* Demangled: vtable for CAM_DPD_CTRL */
extern void* _ZTV12CAM_DPD_CTRL;

/* Symbol: _ZN13CAM_TWIN_PIPE19update_afterRunTwinEv */
/* Demangled: CAM_TWIN_PIPE::update_afterRunTwin() */
int _ZN13CAM_TWIN_PIPE19update_afterRunTwinEv(void);

/* Symbol: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignEjRKS2_ */
/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::assign(unsigned int, DupCmdQMgr* const&) */
int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE6assignEjRKS2_(void);

/* Symbol: _ZN11CAM_DFS_MgrC2EPKc13ISP_HW_MODULE */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_Mgr(char const*, ISP_HW_MODULE) */
int _ZN11CAM_DFS_MgrC2EPKc13ISP_HW_MODULE(void);

/* Symbol: _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFONS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__push_back_slow_path<NSImageio::NSIspio::BufInfo const&>(NSImageio::NSIspio::BufInfo const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN12CAM_RRZ_CTRL10getCoefTblEjj */
/* Demangled: CAM_RRZ_CTRL::getCoefTbl(unsigned int, unsigned int) */
int _ZN12CAM_RRZ_CTRL10getCoefTblEjj(void);

/* Symbol: _ZN12CAM_SPS_CTRL7_configEv */
/* Demangled: CAM_SPS_CTRL::_config() */
int _ZN12CAM_SPS_CTRL7_configEv(void);

/* Symbol: _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeSecS */
/* Demangled: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeSecS */
extern void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE8TimeSecS;

/* Symbol: _ZN10PIPE_CHECK10UFEG_CHECKEv */
/* Demangled: PIPE_CHECK::UFEG_CHECK() */
int _ZN10PIPE_CHECK10UFEG_CHECKEv(void);

/* Symbol: _ZN13TwinFlowCheck10resumeInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE */
/* Demangled: TwinFlowCheck::resumeInit(std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, CAM_TWIN_PIPE*) */
int _ZN13TwinFlowCheck10resumeInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE(void);

/* Symbol: _ZN11CAM_DFS_MgrD1Ev */
/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
int _ZN11CAM_DFS_MgrD1Ev(void);

/* Symbol: _ZN13IspFunction_B6enableEPv */
/* Demangled: IspFunction_B::enable(void*) */
int _ZN13IspFunction_B6enableEPv(void);

/* Symbol: _ZN11CmdQMgrImp222CmdQMgr_GetCurCycleObjEj */
/* Demangled: CmdQMgrImp2::CmdQMgr_GetCurCycleObj(unsigned int) */
int _ZN11CmdQMgrImp222CmdQMgr_GetCurCycleObjEj(void);

/* Symbol: _ZN12CAM_RAW_PIPEC1Ev */
/* Demangled: CAM_RAW_PIPE::CAM_RAW_PIPE() */
int _ZN12CAM_RAW_PIPEC1Ev(void);

/* Symbol: _ZTV11CAM_TG_CTRL */
/* Demangled: vtable for CAM_TG_CTRL */
extern void* _ZTV11CAM_TG_CTRL;

/* Symbol: cam_cap_DbgLogEnable_ERROR */
/* Demangled: cam_cap_DbgLogEnable_ERROR */
extern void* cam_cap_DbgLogEnable_ERROR;

/* Symbol: svdfs_DbgLogEnable_ASSERT */
/* Demangled: svdfs_DbgLogEnable_ASSERT */
extern void* svdfs_DbgLogEnable_ASSERT;

/* Symbol: _ZN13CAMSV_TG_CTRL8_disableEPv */
/* Demangled: CAMSV_TG_CTRL::_disable(void*) */
int _ZN13CAMSV_TG_CTRL8_disableEPv(void);

/* Symbol: _ZN9UniMgrImp12UniMgr_GetCBE13ISP_HW_MODULEj */
/* Demangled: UniMgrImp::UniMgr_GetCB(ISP_HW_MODULE, unsigned int) */
int _ZN9UniMgrImp12UniMgr_GetCBE13ISP_HW_MODULEj(void);

/* Symbol: _ZN12DMAO_CAMSV_B11setBaseAddrEv */
/* Demangled: DMAO_CAMSV_B::setBaseAddr() */
int _ZN12DMAO_CAMSV_B11setBaseAddrEv(void);

/* Symbol: _ZN19BUF_CTRL_CAMSV_IMGO10FBC_STATUSEv */
/* Demangled: BUF_CTRL_CAMSV_IMGO::FBC_STATUS() */
int _ZN19BUF_CTRL_CAMSV_IMGO10FBC_STATUSEv(void);

/* Symbol: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
int _ZNSt3__14listI13ISP_HW_MODULENS_9allocatorIS1_EEE6insertINS_15__list_iteratorIS1_PvEEEES8_NS_21__list_const_iteratorIS1_S7_EET_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE(void);

/* Symbol: RlbMgr_DbgLogEnable_WARN */
/* Demangled: RlbMgr_DbgLogEnable_WARN */
extern void* RlbMgr_DbgLogEnable_WARN;

/* Symbol: _ZN10DupCmdQMgr20CmdQMgr_GetCurMgrObjE13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: DupCmdQMgr::CmdQMgr_GetCurMgrObj(ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN10DupCmdQMgr20CmdQMgr_GetCurMgrObjE13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE8pop_backEv */
/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::pop_back() */
int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE8pop_backEv(void);

/* Symbol: _ZN11Header_FLKO12Header_FlashEj */
/* Demangled: Header_FLKO::Header_Flash(unsigned int) */
int _ZN11Header_FLKO12Header_FlashEj(void);

/* Symbol: func_cam_DbgLogEnable_DEBUG */
/* Demangled: func_cam_DbgLogEnable_DEBUG */
extern void* func_cam_DbgLogEnable_DEBUG;

/* Symbol: _ZN12UNI_TOP_CTRLC1Ev */
/* Demangled: UNI_TOP_CTRL::UNI_TOP_CTRL() */
int _ZN12UNI_TOP_CTRLC1Ev(void);

/* Symbol: TwinMgr_DbgLogEnable_DEBUG */
/* Demangled: TwinMgr_DbgLogEnable_DEBUG */
extern void* TwinMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE9pop_frontEv */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::pop_front() */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE9pop_frontEv(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE>(ISP_HW_MODULE&&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN12Cam_path_sel12Path_sel_YUVEiii12E_CamPattern */
/* Demangled: Cam_path_sel::Path_sel_YUV(int, int, int, E_CamPattern) */
int _ZN12Cam_path_sel12Path_sel_YUVEiii12E_CamPattern(void);

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*>&>::push_front(ST_BUF_INFO__* const&) */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZN11CmdQMgrImp2C1Ev */
/* Demangled: CmdQMgrImp2::CmdQMgrImp2() */
int _ZN11CmdQMgrImp2C1Ev(void);

/* Symbol: _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9push_backERKS5_ */
/* Demangled: std::__1::deque<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > const&) */
int _ZNSt3__15dequeINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE9push_backERKS5_(void);

/* Symbol: _ZN12CAM_DPD_CTRL7_configEv */
/* Demangled: CAM_DPD_CTRL::_config() */
int _ZN12CAM_DPD_CTRL7_configEv(void);

/* Symbol: _ZNSt3__112__deque_baseIiNS_9allocatorIiEEED2Ev */
/* Demangled: std::__1::__deque_base<int, std::__1::allocator<int> >::~__deque_base() */
int _ZNSt3__112__deque_baseIiNS_9allocatorIiEEED2Ev(void);

/* Symbol: _ZN12CamPathPass117updateSuspendDoneEv */
/* Demangled: CamPathPass1::updateSuspendDone() */
int _ZN12CamPathPass117updateSuspendDoneEv(void);

/* Symbol: function_DbgLogEnable_ASSERT */
/* Demangled: function_DbgLogEnable_ASSERT */
extern void* function_DbgLogEnable_ASSERT;

/* Symbol: _ZN6DMAO_B9_write2CQEv */
/* Demangled: DMAO_B::_write2CQ() */
int _ZN6DMAO_B9_write2CQEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL15estimateTimeoutEj */
/* Demangled: CAM_BUF_CTRL::estimateTimeout(unsigned int) */
int _ZN12CAM_BUF_CTRL15estimateTimeoutEj(void);

/* Symbol: _ZN13BUF_CTRL_IMGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_IMGO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_IMGO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN8DMA_UFGO9update_AUEv */
/* Demangled: DMA_UFGO::update_AU() */
int _ZN8DMA_UFGO9update_AUEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL7_configEv */
/* Demangled: CAMSV_BUF_CTRL::_config() */
int _ZN14CAMSV_BUF_CTRL7_configEv(void);

/* Symbol: _ZN9UniMgrImpC1Ev */
/* Demangled: UniMgrImp::UniMgrImp() */
int _ZN9UniMgrImpC1Ev(void);

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DFS_SetLvEi */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_SetLv(int) */
int _ZN11CAM_DFS_Mgr13CAM_DFS_SetLvEi(void);

/* Symbol: _ZN9UniMgrImp14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE */
/* Demangled: UniMgrImp::UniMgr_recover(E_UNI_STEP, ISP_HW_MODULE) */
int _ZN9UniMgrImp14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE(void);

/* Symbol: _ZN16CmdQMgrImp1_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
int _ZN16CmdQMgrImp1_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj(void);

/* Symbol: _ZN12BUF_CTRL_PDO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_PDO::FBC_STATUS(IspDrv*) */
int _ZN12BUF_CTRL_PDO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN11CmdQMgrImp313CmdQMgr_startEv */
/* Demangled: CmdQMgrImp3::CmdQMgr_start() */
int _ZN11CmdQMgrImp313CmdQMgr_startEv(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE6insertINS_21__list_const_iteratorIS1_PvEEEENS_15__list_iteratorIS1_S7_EES8_T_SB_PNS_9enable_ifIXsr19__is_input_iteratorISB_EE5valueEvE4typeE(void);

/* Symbol: function_DbgLogEnable_WARN */
/* Demangled: function_DbgLogEnable_WARN */
extern void* function_DbgLogEnable_WARN;

/* Symbol: _ZN12CAM_TOP_CTRL9checkBusyEj */
/* Demangled: CAM_TOP_CTRL::checkBusy(unsigned int) */
int _ZN12CAM_TOP_CTRL9checkBusyEj(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL8_disableEPv */
/* Demangled: CAMSV_BUF_CTRL::_disable(void*) */
int _ZN14CAMSV_BUF_CTRL8_disableEPv(void);

/* Symbol: _ZN16CAMSV_PIPE_CHECK11ENQUE_CHECKEv */
/* Demangled: CAMSV_PIPE_CHECK::ENQUE_CHECK() */
int _ZN16CAMSV_PIPE_CHECK11ENQUE_CHECKEv(void);

/* Symbol: _ZTV12CAM_DMX_CTRL */
/* Demangled: vtable for CAM_DMX_CTRL */
extern void* _ZTV12CAM_DMX_CTRL;

/* Symbol: _ZN10capibility18GetPipelineMinSizeEP8_minSizeN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE */
/* Demangled: capibility::GetPipelineMinSize(_minSize*, NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode) */
int _ZN10capibility18GetPipelineMinSizeEP8_minSizeN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeE(void);

/* Symbol: _ZN12CamPathPass111setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE */
/* Demangled: CamPathPass1::setP1RrzCfg(std::__1::list<IspRrzCfg, std::__1::allocator<IspRrzCfg> >*) */
int _ZN12CamPathPass111setP1RrzCfgEPNSt3__14listI9IspRrzCfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::~__deque_base() */
int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN11Header_UFEO12Header_FlashEj */
/* Demangled: Header_UFEO::Header_Flash(unsigned int) */
int _ZN11Header_UFEO12Header_FlashEj(void);

/* Symbol: _ZN11TwinMgr_IMP17updateSuspendDoneEv */
/* Demangled: TwinMgr_IMP::updateSuspendDone() */
int _ZN11TwinMgr_IMP17updateSuspendDoneEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEERNS5_IS7_EEED2Ev(void);

/* Symbol: _ZN10capibility17GetSupportPatternEv */
/* Demangled: capibility::GetSupportPattern() */
int _ZN10capibility17GetSupportPatternEv(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN10DupCmdQMgr24CmdQMgr_GetCurMgrObj_extE13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: DupCmdQMgr::CmdQMgr_GetCurMgrObj_ext(ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN10DupCmdQMgr24CmdQMgr_GetCurMgrObj_extE13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZN10Header_AAO12Header_DequeEjPv */
/* Demangled: Header_AAO::Header_Deque(unsigned int, void*) */
int _ZN10Header_AAO12Header_DequeEjPv(void);

/* Symbol: _ZNSt3__110__list_impIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__list_imp<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >::clear() */
int _ZNSt3__110__list_impIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN9RlbMgrImpC1Ev */
/* Demangled: RlbMgrImp::RlbMgrImp() */
int _ZN9RlbMgrImpC1Ev(void);

/* Symbol: _ZN12CAM_BUF_CTRL5m_fpsE */
/* Demangled: CAM_BUF_CTRL::m_fps */
extern void* _ZN12CAM_BUF_CTRL5m_fpsE;

/* Symbol: _ZN9SecMgrImp11SecMgr_stopEv */
/* Demangled: SecMgrImp::SecMgr_stop() */
int _ZN9SecMgrImp11SecMgr_stopEv(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void);

/* Symbol: _ZN10DupCmdQMgr20CmdQMgr_GetCurStatusEv */
/* Demangled: DupCmdQMgr::CmdQMgr_GetCurStatus() */
int _ZN10DupCmdQMgr20CmdQMgr_GetCurStatusEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN10Header_PDO12Header_DequeEjPv */
/* Demangled: Header_PDO::Header_Deque(unsigned int, void*) */
int _ZN10Header_PDO12Header_DequeEjPv(void);

/* Symbol: _ZN7DMA_CQ016setCQTriggerModeENS_6E_MODEEPv */
/* Demangled: DMA_CQ0::setCQTriggerMode(DMA_CQ0::E_MODE, void*) */
int _ZN7DMA_CQ016setCQTriggerModeENS_6E_MODEEPv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme14CmdQMgr_updateEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_update() */
int _ZN16CmdQMgrImp1_imme14CmdQMgr_updateEv(void);

/* Symbol: _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE8pop_backEv */
/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_back() */
int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE8pop_backEv(void);

/* Symbol: _ZN6DMAO_BC1Ev */
/* Demangled: DMAO_B::DMAO_B() */
int _ZN6DMAO_BC1Ev(void);

/* Symbol: _ZN13CAM_TWIN_PIPE9_write2CQEv */
/* Demangled: CAM_TWIN_PIPE::_write2CQ() */
int _ZN13CAM_TWIN_PIPE9_write2CQEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY */
/* Demangled: TwinMgr_BufCtrl::deque(unsigned int, std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >&, _CAM_STATE_NOTIFY*) */
int _ZN15TwinMgr_BufCtrl5dequeEjRNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS0_9allocatorIS4_EEEEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEv */
/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_SetBw() */
int _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN11Header_RRZO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_RRZO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_RRZO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN11Header_RSSO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_RSSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_RSSO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: dfs_DbgLogEnable_INFO */
/* Demangled: dfs_DbgLogEnable_INFO */
extern void* dfs_DbgLogEnable_INFO;

/* Symbol: _ZN15CamPath_BufCtrl9PBC_StartEv */
/* Demangled: CamPath_BufCtrl::PBC_Start() */
int _ZN15CamPath_BufCtrl9PBC_StartEv(void);

/* Symbol: _ZN12CAM_RAW_PIPED0Ev */
/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
int _ZN12CAM_RAW_PIPED0Ev(void);

/* Symbol: CmdQMgr_DbgLogEnable_ASSERT */
/* Demangled: CmdQMgr_DbgLogEnable_ASSERT */
extern void* CmdQMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN11CmdQMgrImp215CmdQMgr_suspendEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_suspend() */
int _ZN11CmdQMgrImp215CmdQMgr_suspendEv(void);

/* Symbol: _ZN10capibilityC2EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME */
/* Demangled: capibility::capibility(NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
int _ZN10capibilityC2EN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void);

/* Symbol: _ZN11TwinMgr_IMP14getTwinStatutsEv */
/* Demangled: TwinMgr_IMP::getTwinStatuts() */
int _ZN11TwinMgr_IMP14getTwinStatutsEv(void);

/* Symbol: _ZN10capibility21GetRLB_SRAM_AlignmentEv */
/* Demangled: capibility::GetRLB_SRAM_Alignment() */
int _ZN10capibility21GetRLB_SRAM_AlignmentEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme12CmdQMgr_stopEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_stop() */
int _ZN16CmdQMgrImp1_imme12CmdQMgr_stopEv(void);

/* Symbol: _ZN15CAM_TUNING_CTRL6updateEi */
/* Demangled: CAM_TUNING_CTRL::update(int) */
int _ZN15CAM_TUNING_CTRL6updateEi(void);

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: _ZN11Header_RRZO10GetTagAddrEj */
/* Demangled: Header_RRZO::GetTagAddr(unsigned int) */
int _ZN11Header_RRZO10GetTagAddrEj(void);

/* Symbol: _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::__push_back_slow_path<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&>(std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const&) */
int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN11TwinMgr_IMP10runTwinDrvEv */
/* Demangled: TwinMgr_IMP::runTwinDrv() */
int _ZN11TwinMgr_IMP10runTwinDrvEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl8PBC_StopEv */
/* Demangled: TwinMgr_BufCtrl::PBC_Stop() */
int _ZN15TwinMgr_BufCtrl8PBC_StopEv(void);

/* Symbol: _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >::__push_back_slow_path<Path_BufCtrl::T_UF const&>(Path_BufCtrl::T_UF const&) */
int _ZNSt3__16vectorIN12Path_BufCtrl4T_UFENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN11CmdQMgrImp318CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp3::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN11CmdQMgrImp318CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZN12Path_BufCtrl10FSM_UPDATEENS_6_E_FSME */
/* Demangled: Path_BufCtrl::FSM_UPDATE(Path_BufCtrl::_E_FSM) */
int _ZN12Path_BufCtrl10FSM_UPDATEENS_6_E_FSME(void);

/* Symbol: _ZNSt3__14moveINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341> std::__1::move<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>(std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>, std::__1::__deque_iterator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >**, int, 341>) */
int _ZNSt3__14moveINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEEPS5_RS5_PS6_iLi341ES5_S6_S7_S8_iLi341EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: _ZN11Header_LMVO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_LMVO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_LMVO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: path_DbgLogEnable_WARN */
/* Demangled: path_DbgLogEnable_WARN */
extern void* path_DbgLogEnable_WARN;

/* Symbol: _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
int _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZTV13BUF_CTRL_UFEO */
/* Demangled: vtable for BUF_CTRL_UFEO */
extern void* _ZTV13BUF_CTRL_UFEO;

/* Symbol: _ZN13CAM_RCP3_CTRL7_configEv */
/* Demangled: CAM_RCP3_CTRL::_config() */
int _ZN13CAM_RCP3_CTRL7_configEv(void);

/* Symbol: _ZN9SecMgrImp13SecMgr_OpenCAEv */
/* Demangled: SecMgrImp::SecMgr_OpenCA() */
int _ZN9SecMgrImp13SecMgr_OpenCAEv(void);

/* Symbol: g_isp_ca_open */
/* Demangled: g_isp_ca_open */
extern void* g_isp_ca_open;

/* Symbol: _ZTV12CAM_RMX_CTRL */
/* Demangled: vtable for CAM_RMX_CTRL */
extern void* _ZTV12CAM_RMX_CTRL;

/* Symbol: _ZN12CamPathPass1C2Ev */
/* Demangled: CamPathPass1::CamPathPass1() */
int _ZN12CamPathPass1C2Ev(void);

/* Symbol: _ZN11TwinMgr_IMP15updateFrameTimeEjj */
/* Demangled: TwinMgr_IMP::updateFrameTime(unsigned int, unsigned int) */
int _ZN11TwinMgr_IMP15updateFrameTimeEjj(void);

/* Symbol: SecMgr_DbgLogEnable_VERBOSE */
/* Demangled: SecMgr_DbgLogEnable_VERBOSE */
extern void* SecMgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN13BUF_CTRL_FLKO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_FLKO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_FLKO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN10PIPE_CHECK9FLK_CHECKEv */
/* Demangled: PIPE_CHECK::FLK_CHECK() */
int _ZN10PIPE_CHECK9FLK_CHECKEv(void);

/* Symbol: _ZN10DupCmdQMgrC2Ev */
/* Demangled: DupCmdQMgr::DupCmdQMgr() */
int _ZN10DupCmdQMgrC2Ev(void);

/* Symbol: _ZN13IspFunction_B7disableEPv */
/* Demangled: IspFunction_B::disable(void*) */
int _ZN13IspFunction_B7disableEPv(void);

/* Symbol: _ZN11Header_IMGO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_IMGO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN11Header_IMGO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN12DMAO_CAMSV_B10BusSizeCalEv */
/* Demangled: DMAO_CAMSV_B::BusSizeCal() */
int _ZN12DMAO_CAMSV_B10BusSizeCalEv(void);

/* Symbol: _ZN9SecMgrImpC1Ev */
/* Demangled: SecMgrImp::SecMgrImp() */
int _ZN9SecMgrImpC1Ev(void);

/* Symbol: dfs_DbgLogEnable_DEBUG */
/* Demangled: dfs_DbgLogEnable_DEBUG */
extern void* dfs_DbgLogEnable_DEBUG;

/* Symbol: _ZTV12CAM_RRZ_CTRL */
/* Demangled: vtable for CAM_RRZ_CTRL */
extern void* _ZTV12CAM_RRZ_CTRL;

/* Symbol: _ZN14CAMSV_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi */
/* Demangled: CAMSV_BUF_CTRL::enqueueHwBuf(_stISP_BUF_INFO&, int) */
int _ZN14CAMSV_BUF_CTRL12enqueueHwBufER15_stISP_BUF_INFOi(void);

/* Symbol: _ZN14CAMSV_TOP_CTRL8_disableEPv */
/* Demangled: CAMSV_TOP_CTRL::_disable(void*) */
int _ZN14CAMSV_TOP_CTRL8_disableEPv(void);

/* Symbol: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__swap_out_circular_buffer(std::__1::__split_buffer<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*>&>&) */
int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: CmdQMgr_DbgLogEnable_INFO */
/* Demangled: CmdQMgr_DbgLogEnable_INFO */
extern void* CmdQMgr_DbgLogEnable_INFO;

/* Symbol: _ZN12CAM_RAW_PIPE9_write2CQEv */
/* Demangled: CAM_RAW_PIPE::_write2CQ() */
int _ZN12CAM_RAW_PIPE9_write2CQEv(void);

/* Symbol: _ZN9SecMgrImp22SecMgr_GetHWCapabilityEv */
/* Demangled: SecMgrImp::SecMgr_GetHWCapability() */
int _ZN9SecMgrImp22SecMgr_GetHWCapabilityEv(void);

/* Symbol: _ZN13BUF_CTRL_RSSO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_RSSO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_RSSO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN13BUF_CTRL_UFEO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_UFEO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_UFEO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZTV11Header_UFGO */
/* Demangled: vtable for Header_UFGO */
extern void* _ZTV11Header_UFGO;

/* Symbol: _ZN10PIPE_CHECK9RRZ_CHECKEv */
/* Demangled: PIPE_CHECK::RRZ_CHECK() */
int _ZN10PIPE_CHECK9RRZ_CHECKEv(void);

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DFS_setLvEv */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_setLv() */
int _ZN11CAM_DFS_Mgr13CAM_DFS_setLvEv(void);

/* Symbol: _ZN8DMA_CQ1112setCQContentEjj */
/* Demangled: DMA_CQ11::setCQContent(unsigned int, unsigned int) */
int _ZN8DMA_CQ1112setCQContentEjj(void);

/* Symbol: _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >::__push_back_slow_path<DMA_B::DMA_BW>(DMA_B::DMA_BW&&) */
int _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN12CamPathPass115updateFrameTimeEjj */
/* Demangled: CamPathPass1::updateFrameTime(unsigned int, unsigned int) */
int _ZN12CamPathPass115updateFrameTimeEjj(void);

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::push_front(ST_BUF_INFO__*&&) */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__14moveIP13ST_BUF_INFO__S1_S2_RS1_PS2_iLi73EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZN10PIPE_CHECK9UFE_CHECKEv */
/* Demangled: PIPE_CHECK::UFE_CHECK() */
int _ZN10PIPE_CHECK9UFE_CHECKEv(void);

/* Symbol: UniMgr_DbgLogEnable_VERBOSE */
/* Demangled: UniMgr_DbgLogEnable_VERBOSE */
extern void* UniMgr_DbgLogEnable_VERBOSE;

/* Symbol: g_isp_ca_queryinfo */
/* Demangled: g_isp_ca_queryinfo */
extern void* g_isp_ca_queryinfo;

/* Symbol: _ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE9TimehourS */
/* Demangled: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimehourS */
extern void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE9TimehourS;

/* Symbol: _ZN11CAM_DFS_Mgr6m_LockE */
/* Demangled: CAM_DFS_Mgr::m_Lock */
extern void* _ZN11CAM_DFS_Mgr6m_LockE;

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN13CAM_TWIN_PIPE17update_cq_suspendEv */
/* Demangled: CAM_TWIN_PIPE::update_cq_suspend() */
int _ZN13CAM_TWIN_PIPE17update_cq_suspendEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRLC2Ev */
/* Demangled: CAMSV_BUF_CTRL::CAMSV_BUF_CTRL() */
int _ZN14CAMSV_BUF_CTRLC2Ev(void);

/* Symbol: _ZN6UniMgr12UniMgr_SetCBE13ISP_HW_MODULEjPv */
/* Demangled: UniMgr::UniMgr_SetCB(ISP_HW_MODULE, unsigned int, void*) */
int _ZN6UniMgr12UniMgr_SetCBE13ISP_HW_MODULEjPv(void);

/* Symbol: _ZN9SecMgrImp28SecMgr_QuerySecMVAFromHandleEyPj */
/* Demangled: SecMgrImp::SecMgr_QuerySecMVAFromHandle(unsigned long long, unsigned int*) */
int _ZN9SecMgrImp28SecMgr_QuerySecMVAFromHandleEyPj(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN11CmdQMgrImp214CmdQMgr_resumeEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_resume() */
int _ZN11CmdQMgrImp214CmdQMgr_resumeEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL10m_CamStateE */
/* Demangled: CAM_BUF_CTRL::m_CamState */
extern void* _ZN12CAM_BUF_CTRL10m_CamStateE;

/* Symbol: _ZN12CAM_RAW_PIPE13setNotifyDoneEv */
/* Demangled: CAM_RAW_PIPE::setNotifyDone() */
int _ZN12CAM_RAW_PIPE13setNotifyDoneEv(void);

/* Symbol: _ZN12CamPathPass116P1Notify_MappingEjP16P1_TUNING_NOTIFY */
/* Demangled: CamPathPass1::P1Notify_Mapping(unsigned int, P1_TUNING_NOTIFY*) */
int _ZN12CamPathPass116P1Notify_MappingEjP16P1_TUNING_NOTIFY(void);

/* Symbol: _ZTV12CAM_RAW_PIPE */
/* Demangled: vtable for CAM_RAW_PIPE */
extern void* _ZTV12CAM_RAW_PIPE;

/* Symbol: _ZN11TwinMgr_IMP11recoverTwinE14E_CAMPATH_STEP */
/* Demangled: TwinMgr_IMP::recoverTwin(E_CAMPATH_STEP) */
int _ZN11TwinMgr_IMP11recoverTwinE14E_CAMPATH_STEP(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio9STImgCropERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio9STImgCropERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_front(int* const&) */
int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZTV11CAM_DFS_Mgr */
/* Demangled: vtable for CAM_DFS_Mgr */
extern void* _ZTV11CAM_DFS_Mgr;

/* Symbol: _ZN12CamPathPass15startEPv */
/* Demangled: CamPathPass1::start(void*) */
int _ZN12CamPathPass15startEPv(void);

/* Symbol: _ZN12Cam_path_selD1Ev */
/* Demangled: Cam_path_sel::~Cam_path_sel() */
int _ZN12Cam_path_selD1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::clear() */
int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZN10Header_AFO12Header_FlashEj */
/* Demangled: Header_AFO::Header_Flash(unsigned int) */
int _ZN10Header_AFO12Header_FlashEj(void);

/* Symbol: _ZN9SecMgrImp10Num_SecCamE */
/* Demangled: SecMgrImp::Num_SecCam */
extern void* _ZN9SecMgrImp10Num_SecCamE;

/* Symbol: _ZN10CmdQMgrImp17CmdQMgr_GetBurstQEv */
/* Demangled: CmdQMgrImp::CmdQMgr_GetBurstQ() */
int _ZN10CmdQMgrImp17CmdQMgr_GetBurstQEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL9_write2CQEv */
/* Demangled: CAM_BUF_CTRL::_write2CQ() */
int _ZN12CAM_BUF_CTRL9_write2CQEv(void);

/* Symbol: _ZN13BUF_CTRL_FLKO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_FLKO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_FLKO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZN12CAM_AMX_CTRL7_configEv */
/* Demangled: CAM_AMX_CTRL::_config() */
int _ZN12CAM_AMX_CTRL7_configEv(void);

/* Symbol: _ZN7DMA_CQ04AddrE */
/* Demangled: DMA_CQ0::Addr */
extern void* _ZN7DMA_CQ04AddrE;

/* Symbol: _ZN16CAMSV_PIPE_CHECK8TG_CHECKEj */
/* Demangled: CAMSV_PIPE_CHECK::TG_CHECK(unsigned int) */
int _ZN16CAMSV_PIPE_CHECK8TG_CHECKEj(void);

/* Symbol: func_camsv_DbgLogEnable_ASSERT */
/* Demangled: func_camsv_DbgLogEnable_ASSERT */
extern void* func_camsv_DbgLogEnable_ASSERT;

/* Symbol: _ZN12CAM_RAW_PIPE6setRRZEv */
/* Demangled: CAM_RAW_PIPE::setRRZ() */
int _ZN12CAM_RAW_PIPE6setRRZEv(void);

/* Symbol: _ZN10CmdQMgrImp22CmdQMgr_GetCurCycleObjEj */
/* Demangled: CmdQMgrImp::CmdQMgr_GetCurCycleObj(unsigned int) */
int _ZN10CmdQMgrImp22CmdQMgr_GetCurCycleObjEj(void);

/* Symbol: _ZN12UNI_TOP_CTRL10ClrUniFuncEv */
/* Demangled: UNI_TOP_CTRL::ClrUniFunc() */
int _ZN12UNI_TOP_CTRL10ClrUniFuncEv(void);

/* Symbol: _ZN6UniMgr12UniMgr_startE13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_start(ISP_HW_MODULE) */
int _ZN6UniMgr12UniMgr_startE13ISP_HW_MODULE(void);

/* Symbol: g_isp_ca_queryfhpa */
/* Demangled: g_isp_ca_queryfhpa */
extern void* g_isp_ca_queryfhpa;

/* Symbol: _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void);

/* Symbol: _ZN11Header_RSSO12Header_DequeEjPv */
/* Demangled: Header_RSSO::Header_Deque(unsigned int, void*) */
int _ZN11Header_RSSO12Header_DequeEjPv(void);

/* Symbol: TwinMgr_DbgLogEnable_WARN */
/* Demangled: TwinMgr_DbgLogEnable_WARN */
extern void* TwinMgr_DbgLogEnable_WARN;

/* Symbol: _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*>&>&) */
int _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN10capibility12GetMaxSenNumEv */
/* Demangled: capibility::GetMaxSenNum() */
int _ZN10capibility12GetMaxSenNumEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN11TwinMgr_IMP12setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE */
/* Demangled: TwinMgr_IMP::setP1TuneCfg(std::__1::list<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >*) */
int _ZN11TwinMgr_IMP12setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZTV11CmdQMgrImp2 */
/* Demangled: vtable for CmdQMgrImp2 */
extern void* _ZTV11CmdQMgrImp2;

/* Symbol: _ZN12Cam_path_selC2EP21CamPathPass1Parameter */
/* Demangled: Cam_path_sel::Cam_path_sel(CamPathPass1Parameter*) */
int _ZN12Cam_path_selC2EP21CamPathPass1Parameter(void);

/* Symbol: _ZN10PIPE_CHECK9RSS_CHECKEv */
/* Demangled: PIPE_CHECK::RSS_CHECK() */
int _ZN10PIPE_CHECK9RSS_CHECKEv(void);

/* Symbol: _ZN11TwinMgr_IMP4initEP10DupCmdQMgr */
/* Demangled: TwinMgr_IMP::init(DupCmdQMgr*) */
int _ZN11TwinMgr_IMP4initEP10DupCmdQMgr(void);

/* Symbol: _ZN10capibility14GetXMXSramSizeEP5_tXmx */
/* Demangled: capibility::GetXMXSramSize(_tXmx*) */
int _ZN10capibility14GetXMXSramSizeEP5_tXmx(void);

/* Symbol: _ZTV11CmdQMgrImp3 */
/* Demangled: vtable for CmdQMgrImp3 */
extern void* _ZTV11CmdQMgrImp3;

/* Symbol: _ZN12CamPathPass111setP1NotifyEv */
/* Demangled: CamPathPass1::setP1Notify() */
int _ZN12CamPathPass111setP1NotifyEv(void);

/* Symbol: _ZN14CAMSV_TOP_CTRLC1Ev */
/* Demangled: CAMSV_TOP_CTRL::CAMSV_TOP_CTRL() */
int _ZN14CAMSV_TOP_CTRLC1Ev(void);

/* Symbol: _ZN11TwinMgr_IMP11setP1NotifyEv */
/* Demangled: TwinMgr_IMP::setP1Notify() */
int _ZN11TwinMgr_IMP11setP1NotifyEv(void);

/* Symbol: _ZN11TwinMgr_IMP8initTwinEP10DupCmdQMgrPKN9NSImageio7NSIspio6PortIDEjPNSt3__14listIjNS7_9allocatorIjEEEE */
/* Demangled: TwinMgr_IMP::initTwin(DupCmdQMgr*, NSImageio::NSIspio::PortID const*, unsigned int, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN11TwinMgr_IMP8initTwinEP10DupCmdQMgrPKN9NSImageio7NSIspio6PortIDEjPNSt3__14listIjNS7_9allocatorIjEEEE(void);

/* Symbol: g_isp_ca_dumpsecbuffer */
/* Demangled: g_isp_ca_dumpsecbuffer */
extern void* g_isp_ca_dumpsecbuffer;

/* Symbol: g_isp_ca_setcaminfo */
/* Demangled: g_isp_ca_setcaminfo */
extern void* g_isp_ca_setcaminfo;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN7DMA_CQ04InitEv */
/* Demangled: DMA_CQ0::Init() */
int _ZN7DMA_CQ04InitEv(void);

/* Symbol: _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv */
/* Demangled: std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_front() */
int _ZNSt3__14listI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void);

/* Symbol: _ZN9SecMgrImp13SecMgr_InitCAEv */
/* Demangled: SecMgrImp::SecMgr_InitCA() */
int _ZN9SecMgrImp13SecMgr_InitCAEv(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT */
/* Demangled: CAMSV_DFS_Mgr::CAM_DBS_SetBw(T_BW_INPUT*) */
int _ZN13CAMSV_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT(void);

/* Symbol: _ZTV11Header_IMGO */
/* Demangled: vtable for Header_IMGO */
extern void* _ZTV11Header_IMGO;

/* Symbol: twinAddr */
/* Demangled: twinAddr */
extern void* twinAddr;

/* Symbol: _ZTV7DMA_PSO */
/* Demangled: vtable for DMA_PSO */
extern void* _ZTV7DMA_PSO;

/* Symbol: _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<IspDrvVir*, std::__1::allocator<IspDrvVir*> >::__swap_out_circular_buffer(std::__1::__split_buffer<IspDrvVir*, std::__1::allocator<IspDrvVir*>&>&) */
int _ZNSt3__16vectorIP9IspDrvVirNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN13CAMSV_DFS_Mgr13CAM_DFS_STARTEv */
/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_START() */
int _ZN13CAMSV_DFS_Mgr13CAM_DFS_STARTEv(void);

/* Symbol: func_cam_DbgLogEnable_ERROR */
/* Demangled: func_cam_DbgLogEnable_ERROR */
extern void* func_cam_DbgLogEnable_ERROR;

/* Symbol: TwinMgr_DbgLogEnable_ERROR */
/* Demangled: TwinMgr_DbgLogEnable_ERROR */
extern void* TwinMgr_DbgLogEnable_ERROR;

/* Symbol: _ZN11TwinMgr_IMP6uninitEv */
/* Demangled: TwinMgr_IMP::uninit() */
int _ZN11TwinMgr_IMP6uninitEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE */
/* Demangled: TwinMgr_BufCtrl::enque_UF_patch(std::__1::vector<Path_BufCtrl::T_UF, std::__1::allocator<Path_BufCtrl::T_UF> >*) */
int _ZN15TwinMgr_BufCtrl14enque_UF_patchEPNSt3__16vectorIN12Path_BufCtrl4T_UFENS0_9allocatorIS3_EEEE(void);

/* Symbol: g_isp_ca_config */
/* Demangled: g_isp_ca_config */
extern void* g_isp_ca_config;

/* Symbol: _ZTV13BUF_CTRL_LMVO */
/* Demangled: vtable for BUF_CTRL_LMVO */
extern void* _ZTV13BUF_CTRL_LMVO;

/* Symbol: _ZTV8DMA_UFGO */
/* Demangled: vtable for DMA_UFGO */
extern void* _ZTV8DMA_UFGO;

/* Symbol: _ZN12CAM_TOP_CTRLC2Ev */
/* Demangled: CAM_TOP_CTRL::CAM_TOP_CTRL() */
int _ZN12CAM_TOP_CTRLC2Ev(void);

/* Symbol: _ZN8DMA_CQ109_write2CQEv */
/* Demangled: DMA_CQ10::_write2CQ() */
int _ZN8DMA_CQ109_write2CQEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZN10capibility10D_TWIN_CFG8SetDTwinEi */
/* Demangled: capibility::D_TWIN_CFG::SetDTwin(int) */
int _ZN10capibility10D_TWIN_CFG8SetDTwinEi(void);

/* Symbol: _ZN11Header_UFEO10GetRegInfoEjP6IspDrv */
/* Demangled: Header_UFEO::GetRegInfo(unsigned int, IspDrv*) */
int _ZN11Header_UFEO10GetRegInfoEjP6IspDrv(void);

/* Symbol: _ZN7DMA_CQ112setCQContentEjj */
/* Demangled: DMA_CQ1::setCQContent(unsigned int, unsigned int) */
int _ZN7DMA_CQ112setCQContentEjj(void);

/* Symbol: _ZN15TwinMgr_BufCtrlC2Ev */
/* Demangled: TwinMgr_BufCtrl::TwinMgr_BufCtrl() */
int _ZN15TwinMgr_BufCtrlC2Ev(void);

/* Symbol: _ZN9SecMgrImp16SecMgr_SecConfigEjj */
/* Demangled: SecMgrImp::SecMgr_SecConfig(unsigned int, unsigned int) */
int _ZN9SecMgrImp16SecMgr_SecConfigEjj(void);

/* Symbol: _ZN7DMA_CQ516setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ5::setCQTriggerMode(DMA_CQ5::E_MODE) */
int _ZN7DMA_CQ516setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: _ZTV7DMA_AFO */
/* Demangled: vtable for DMA_AFO */
extern void* _ZTV7DMA_AFO;

/* Symbol: _ZN11TwinMgr_IMP4stopEPv */
/* Demangled: TwinMgr_IMP::stop(void*) */
int _ZN11TwinMgr_IMP4stopEPv(void);

/* Symbol: _ZN11CmdQMgrImp311CmdQMgr_CfgEjj */
/* Demangled: CmdQMgrImp3::CmdQMgr_Cfg(unsigned int, unsigned int) */
int _ZN11CmdQMgrImp311CmdQMgr_CfgEjj(void);

/* Symbol: _ZN10Header_PSO12Header_FlashEj */
/* Demangled: Header_PSO::Header_Flash(unsigned int) */
int _ZN10Header_PSO12Header_FlashEj(void);

/* Symbol: _ZNSt3__114__split_bufferI13_CAM_THRU_PUTRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<_CAM_THRU_PUT>&) */
int _ZNSt3__114__split_bufferI13_CAM_THRU_PUTRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZN11CAM_DFS_MgrD2Ev */
/* Demangled: CAM_DFS_Mgr::~CAM_DFS_Mgr() */
int _ZN11CAM_DFS_MgrD2Ev(void);

/* Symbol: _ZN12CAM_RAW_PIPEC2Ev */
/* Demangled: CAM_RAW_PIPE::CAM_RAW_PIPE() */
int _ZN12CAM_RAW_PIPEC2Ev(void);

/* Symbol: _ZN12CAM_RRZ_CTRL10setDefaultEv */
/* Demangled: CAM_RRZ_CTRL::setDefault() */
int _ZN12CAM_RRZ_CTRL10setDefaultEv(void);

/* Symbol: _ZN11TwinMgr_IMP10enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE */
/* Demangled: TwinMgr_IMP::enqueueBuf(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&) */
int _ZN11TwinMgr_IMP10enqueueBufEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::vector(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > const&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZN9SecMgrImp25SecMgr_P1RegisterShareMemEP14SecMgr_SecInfo */
/* Demangled: SecMgrImp::SecMgr_P1RegisterShareMem(SecMgr_SecInfo*) */
int _ZN9SecMgrImp25SecMgr_P1RegisterShareMemEP14SecMgr_SecInfo(void);

/* Symbol: g_isp_ca_uninit */
/* Demangled: g_isp_ca_uninit */
extern void* g_isp_ca_uninit;

/* Symbol: _ZN10CmdQMgrImp14CmdQMgr_updateEv */
/* Demangled: CmdQMgrImp::CmdQMgr_update() */
int _ZN10CmdQMgrImp14CmdQMgr_updateEv(void);

/* Symbol: _ZN12CAM_RAW_PIPE7setSGG2Ev */
/* Demangled: CAM_RAW_PIPE::setSGG2() */
int _ZN12CAM_RAW_PIPE7setSGG2Ev(void);

/* Symbol: _ZN12UNI_TOP_CTRL7_enableEPv */
/* Demangled: UNI_TOP_CTRL::_enable(void*) */
int _ZN12UNI_TOP_CTRL7_enableEPv(void);

/* Symbol: _ZN11TwinMgr_IMP6resumeEv */
/* Demangled: TwinMgr_IMP::resume() */
int _ZN11TwinMgr_IMP6resumeEv(void);

/* Symbol: _ZN6DMAI_B8_disableEPv */
/* Demangled: DMAI_B::_disable(void*) */
int _ZN6DMAI_B8_disableEPv(void);

/* Symbol: _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv */
/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::pop_front() */
int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void);

/* Symbol: _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE7TimeUsS */
/* Demangled: CAM_RAW_PIPE::CBTimeChk(char*, int)::TimeUsS */
extern void* _ZZN12CAM_RAW_PIPE9CBTimeChkEPciE7TimeUsS;

/* Symbol: _ZN12UNI_TOP_CTRL7_configEv */
/* Demangled: UNI_TOP_CTRL::_config() */
int _ZN12UNI_TOP_CTRL7_configEv(void);

/* Symbol: _ZN11TwinMgr_IMP10getTwinRegEPNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPNS1_IjNS3_IjEEEE */
/* Demangled: TwinMgr_IMP::getTwinReg(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN11TwinMgr_IMP10getTwinRegEPNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPNS1_IjNS3_IjEEEE(void);

/* Symbol: _ZN10capibility19GetPipelineBitdepthEv */
/* Demangled: capibility::GetPipelineBitdepth() */
int _ZN10capibility19GetPipelineBitdepthEv(void);

/* Symbol: _ZN12CAM_RAW_PIPE6setAWBEv */
/* Demangled: CAM_RAW_PIPE::setAWB() */
int _ZN12CAM_RAW_PIPE6setAWBEv(void);

/* Symbol: _ZN14CAM_MAGIC_CTRL7_configEv */
/* Demangled: CAM_MAGIC_CTRL::_config() */
int _ZN14CAM_MAGIC_CTRL7_configEv(void);

/* Symbol: _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<ST_BUF_INFO__>&) */
int _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZN10Header_PDO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_PDO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN10Header_PDO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN12UNI_TOP_CTRLC2Ev */
/* Demangled: UNI_TOP_CTRL::UNI_TOP_CTRL() */
int _ZN12UNI_TOP_CTRLC2Ev(void);

/* Symbol: function_DbgLogEnable_DEBUG */
/* Demangled: function_DbgLogEnable_DEBUG */
extern void* function_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: SecMgr_DbgLogEnable_ASSERT */
/* Demangled: SecMgr_DbgLogEnable_ASSERT */
extern void* SecMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN11CmdQMgrImp2C2Ev */
/* Demangled: CmdQMgrImp2::CmdQMgrImp2() */
int _ZN11CmdQMgrImp2C2Ev(void);

/* Symbol: _ZN6DMAI_B7_configEv */
/* Demangled: DMAI_B::_config() */
int _ZN6DMAI_B7_configEv(void);

/* Symbol: _ZN12CAM_YUV_PIPE13getCurPixModeE14_isp_dma_enum_ */
/* Demangled: CAM_YUV_PIPE::getCurPixMode(_isp_dma_enum_) */
int _ZN12CAM_YUV_PIPE13getCurPixModeE14_isp_dma_enum_(void);

/* Symbol: _ZN12CAM_BUF_CTRL9PipeCheckEv */
/* Demangled: CAM_BUF_CTRL::PipeCheck() */
int _ZN12CAM_BUF_CTRL9PipeCheckEv(void);

/* Symbol: _ZTV8DMA_RAWI */
/* Demangled: vtable for DMA_RAWI */
extern void* _ZTV8DMA_RAWI;

/* Symbol: _ZTV10DupCmdQMgr */
/* Demangled: vtable for DupCmdQMgr */
extern void* _ZTV10DupCmdQMgr;

/* Symbol: _ZN16CmdQMgrImp3_imme7FSM_CHKEjPKc */
/* Demangled: CmdQMgrImp3_imme::FSM_CHK(unsigned int, char const*) */
int _ZN16CmdQMgrImp3_imme7FSM_CHKEjPKc(void);

/* Symbol: _ZTV7DMA_PDI */
/* Demangled: vtable for DMA_PDI */
extern void* _ZTV7DMA_PDI;

/* Symbol: _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<ISP_DRV_CAM*, std::__1::allocator<ISP_DRV_CAM*> >::__push_back_slow_path<ISP_DRV_CAM* const&>(ISP_DRV_CAM* const&) */
int _ZNSt3__16vectorIP11ISP_DRV_CAMNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN9UniMgrImpC2Ev */
/* Demangled: UniMgrImp::UniMgrImp() */
int _ZN9UniMgrImpC2Ev(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZN10DupCmdQMgr20CmdQMgr_updateCQModeEPS_j */
/* Demangled: DupCmdQMgr::CmdQMgr_updateCQMode(DupCmdQMgr*, unsigned int) */
int _ZN10DupCmdQMgr20CmdQMgr_updateCQModeEPS_j(void);

/* Symbol: _ZN11CmdQMgrImp27FSM_CHKEjPKc */
/* Demangled: CmdQMgrImp2::FSM_CHK(unsigned int, char const*) */
int _ZN11CmdQMgrImp27FSM_CHKEjPKc(void);

/* Symbol: _ZTV13CAMSV_TG_CTRL */
/* Demangled: vtable for CAMSV_TG_CTRL */
extern void* _ZTV13CAMSV_TG_CTRL;

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEv */
/* Demangled: CAM_DFS_Mgr::CAM_DBS_SetBw() */
int _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEv(void);

/* Symbol: _ZTV8DMA_IMGO */
/* Demangled: vtable for DMA_IMGO */
extern void* _ZTV8DMA_IMGO;

/* Symbol: _ZN15TwinMgr_BufCtrl10enque_dropEv */
/* Demangled: TwinMgr_BufCtrl::enque_drop() */
int _ZN15TwinMgr_BufCtrl10enque_dropEv(void);

/* Symbol: _ZN15TwinMgr_BufCtrl9enque_popEv */
/* Demangled: TwinMgr_BufCtrl::enque_pop() */
int _ZN15TwinMgr_BufCtrl9enque_popEv(void);

/* Symbol: _ZN9RlbMgrImp11sendCommandE13ISP_HW_MODULEN6RlbMgr8E_RlbCmdEjj */
/* Demangled: RlbMgrImp::sendCommand(ISP_HW_MODULE, RlbMgr::E_RlbCmd, unsigned int, unsigned int) */
int _ZN9RlbMgrImp11sendCommandE13ISP_HW_MODULEN6RlbMgr8E_RlbCmdEjj(void);

/* Symbol: _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi31EEE */
/* Demangled: std::__1::deque<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::erase(std::__1::__deque_iterator<_stISP_BUF_INFO, _stISP_BUF_INFO const*, _stISP_BUF_INFO const&, _stISP_BUF_INFO const* const*, int, 31>) */
int _ZNSt3__15dequeI15_stISP_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi31EEE(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN11CAM_DFS_Mgr14createInstanceEPKc13ISP_HW_MODULE */
/* Demangled: CAM_DFS_Mgr::createInstance(char const*, ISP_HW_MODULE) */
int _ZN11CAM_DFS_Mgr14createInstanceEPKc13ISP_HW_MODULE(void);

/* Symbol: _ZN10CmdQMgrImp20CmdQMgr_GetCurModuleEv */
/* Demangled: CmdQMgrImp::CmdQMgr_GetCurModule() */
int _ZN10CmdQMgrImp20CmdQMgr_GetCurModuleEv(void);

/* Symbol: _ZN12CAM_RMX_CTRL7_configEv */
/* Demangled: CAM_RMX_CTRL::_config() */
int _ZN12CAM_RMX_CTRL7_configEv(void);

/* Symbol: _ZN10PIPE_CHECK10TWIN_CHECKEv */
/* Demangled: PIPE_CHECK::TWIN_CHECK() */
int _ZN10PIPE_CHECK10TWIN_CHECKEv(void);

/* Symbol: _ZN14CAMSV_BUF_CTRL7_enableEPv */
/* Demangled: CAMSV_BUF_CTRL::_enable(void*) */
int _ZN14CAMSV_BUF_CTRL7_enableEPv(void);

/* Symbol: _ZN11TwinMgr_IMP15destroyInstanceEv */
/* Demangled: TwinMgr_IMP::destroyInstance() */
int _ZN11TwinMgr_IMP15destroyInstanceEv(void);

/* Symbol: _ZN11CmdQMgrImp220CmdQMgr_GetCurModuleEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_GetCurModule() */
int _ZN11CmdQMgrImp220CmdQMgr_GetCurModuleEv(void);

/* Symbol: _ZN12CAM_RAW_PIPE6setLMVEv */
/* Demangled: CAM_RAW_PIPE::setLMV() */
int _ZN12CAM_RAW_PIPE6setLMVEv(void);

/* Symbol: _ZTV12CAM_BMX_CTRL */
/* Demangled: vtable for CAM_BMX_CTRL */
extern void* _ZTV12CAM_BMX_CTRL;

/* Symbol: _ZN14CAMSV_TOP_CTRL9checkBusyEj */
/* Demangled: CAMSV_TOP_CTRL::checkBusy(unsigned int) */
int _ZN14CAMSV_TOP_CTRL9checkBusyEj(void);

/* Symbol: _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS0_I13ISP_HW_MODULENS_9allocatorIS1_EEEENS2_IS4_EEE8__appendEj(void);

/* Symbol: RlbMgr_DbgLogEnable_DEBUG */
/* Demangled: RlbMgr_DbgLogEnable_DEBUG */
extern void* RlbMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN11CAM_DFS_Mgr14m_SupportedClkE */
/* Demangled: CAM_DFS_Mgr::m_SupportedClk */
extern void* _ZN11CAM_DFS_Mgr14m_SupportedClkE;

/* Symbol: _ZTV13IspFunction_B */
/* Demangled: vtable for IspFunction_B */
extern void* _ZTV13IspFunction_B;

/* Symbol: _ZN12CamPathPass114dropEnqueueBufEPNSt3__14listIjNS0_9allocatorIjEEEES5_ */
/* Demangled: CamPathPass1::dropEnqueueBuf(std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN12CamPathPass114dropEnqueueBufEPNSt3__14listIjNS0_9allocatorIjEEEES5_(void);

/* Symbol: _ZN12BUF_CTRL_AFO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_AFO::FBC_STATUS(IspDrv*) */
int _ZN12BUF_CTRL_AFO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZTV7DMA_PDO */
/* Demangled: vtable for DMA_PDO */
extern void* _ZTV7DMA_PDO;

/* Symbol: _ZN9RlbMgrImpC2Ev */
/* Demangled: RlbMgrImp::RlbMgrImp() */
int _ZN9RlbMgrImpC2Ev(void);

/* Symbol: _ZN10capibility18GetConstrainedSizeEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst */
/* Demangled: capibility::GetConstrainedSize(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, _tCAM_rst&) */
int _ZN10capibility18GetConstrainedSizeEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoER9_tCAM_rst(void);

/* Symbol: _ZN11CmdQMgrImp213CmdQMgr_startEv */
/* Demangled: CmdQMgrImp2::CmdQMgr_start() */
int _ZN11CmdQMgrImp213CmdQMgr_startEv(void);

/* Symbol: path_DbgLogEnable_VERBOSE */
/* Demangled: path_DbgLogEnable_VERBOSE */
extern void* path_DbgLogEnable_VERBOSE;

/* Symbol: _ZN10Header_AAO12Header_FlashEj */
/* Demangled: Header_AAO::Header_Flash(unsigned int) */
int _ZN10Header_AAO12Header_FlashEj(void);

/* Symbol: _ZN11Header_LMVO12Header_FlashEj */
/* Demangled: Header_LMVO::Header_Flash(unsigned int) */
int _ZN11Header_LMVO12Header_FlashEj(void);

/* Symbol: UniMgr_DbgLogEnable_DEBUG */
/* Demangled: UniMgr_DbgLogEnable_DEBUG */
extern void* UniMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN9SecMgrImp13SecMgr_detachEj */
/* Demangled: SecMgrImp::SecMgr_detach(unsigned int) */
int _ZN9SecMgrImp13SecMgr_detachEj(void);

/* Symbol: _ZN13BUF_CTRL_UFEO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE */
/* Demangled: BUF_CTRL_UFEO::dequeueHwBuf(NSImageio::NSIspio::BufInfo&) */
int _ZN13BUF_CTRL_UFEO12dequeueHwBufERN9NSImageio7NSIspio7BufInfoE(void);

/* Symbol: RlbMgr_DbgLogEnable_INFO */
/* Demangled: RlbMgr_DbgLogEnable_INFO */
extern void* RlbMgr_DbgLogEnable_INFO;

/* Symbol: _ZN9SecMgrImp20SecMgr_DumpSecBufferEyPvj */
/* Demangled: SecMgrImp::SecMgr_DumpSecBuffer(unsigned long long, void*, unsigned int) */
int _ZN9SecMgrImp20SecMgr_DumpSecBufferEyPvj(void);

/* Symbol: _ZN16CmdQMgrImp3_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_clearCQMode(DupCmdQMgr*, unsigned int) */
int _ZN16CmdQMgrImp3_imme19CmdQMgr_clearCQModeEP10DupCmdQMgrj(void);

/* Symbol: _ZN6DMAO_BC2Ev */
/* Demangled: DMAO_B::DMAO_B() */
int _ZN6DMAO_BC2Ev(void);

/* Symbol: func_camsv_DbgLogEnable_WARN */
/* Demangled: func_camsv_DbgLogEnable_WARN */
extern void* func_camsv_DbgLogEnable_WARN;

/* Symbol: _ZN11TwinMgr_IMPC1Ev */
/* Demangled: TwinMgr_IMP::TwinMgr_IMP() */
int _ZN11TwinMgr_IMPC1Ev(void);

/* Symbol: _ZN6UniMgr14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE */
/* Demangled: UniMgr::UniMgr_recover(E_UNI_STEP, ISP_HW_MODULE) */
int _ZN6UniMgr14UniMgr_recoverE10E_UNI_STEP13ISP_HW_MODULE(void);

/* Symbol: _ZTV6UniMgr */
/* Demangled: vtable for UniMgr */
extern void* _ZTV6UniMgr;

/* Symbol: _ZN11CAM_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_INIT(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN11CAM_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZN16CmdQMgrImp3_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_attach_imp(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN16CmdQMgrImp3_imme18CmdQMgr_attach_impEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: func_cam_DbgLogEnable_ASSERT */
/* Demangled: func_cam_DbgLogEnable_ASSERT */
extern void* func_cam_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE5eraseENS_11__wrap_iterIPKS6_EESC_ */
/* Demangled: std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >::erase(std::__1::__wrap_iter<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const*>, std::__1::__wrap_iter<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > const*>) */
int _ZNSt3__16vectorINS_4listIN13CAM_TWIN_PIPE10T_TWIN_DMAENS_9allocatorIS3_EEEENS4_IS6_EEE5eraseENS_11__wrap_iterIPKS6_EESC_(void);

/* Symbol: _ZTV9UniMgrImp */
/* Demangled: vtable for UniMgrImp */
extern void* _ZTV9UniMgrImp;

/* Symbol: _ZN9RlbMgrImp7FSM_CHKE13ISP_HW_MODULEj */
/* Demangled: RlbMgrImp::FSM_CHK(ISP_HW_MODULE, unsigned int) */
int _ZN9RlbMgrImp7FSM_CHKE13ISP_HW_MODULEj(void);

/* Symbol: _ZN12CAM_RAW_PIPED1Ev */
/* Demangled: CAM_RAW_PIPE::~CAM_RAW_PIPE() */
int _ZN12CAM_RAW_PIPED1Ev(void);

/* Symbol: _ZN13CAM_TIMESTAMP16TimeStamp_SrcClkEj10TSTMP_MODE */
/* Demangled: CAM_TIMESTAMP::TimeStamp_SrcClk(unsigned int, TSTMP_MODE) */
int _ZN13CAM_TIMESTAMP16TimeStamp_SrcClkEj10TSTMP_MODE(void);

/* Symbol: dfs_DbgLogEnable_VERBOSE */
/* Demangled: dfs_DbgLogEnable_VERBOSE */
extern void* dfs_DbgLogEnable_VERBOSE;

/* Symbol: _ZN10Header_AFO12Header_DequeEjPv */
/* Demangled: Header_AFO::Header_Deque(unsigned int, void*) */
int _ZN10Header_AFO12Header_DequeEjPv(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE8pop_backEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_back() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE8pop_backEv(void);

/* Symbol: _ZTV10Header_PSO */
/* Demangled: vtable for Header_PSO */
extern void* _ZTV10Header_PSO;

/* Symbol: _ZN11CAM_DFS_Mgr13m_curClkLevelE */
/* Demangled: CAM_DFS_Mgr::m_curClkLevel */
extern void* _ZN11CAM_DFS_Mgr13m_curClkLevelE;

/* Symbol: _ZN12CAM_BUF_CTRL7_enableEPv */
/* Demangled: CAM_BUF_CTRL::_enable(void*) */
int _ZN12CAM_BUF_CTRL7_enableEPv(void);

/* Symbol: func_twin_DbgLogEnable_ASSERT */
/* Demangled: func_twin_DbgLogEnable_ASSERT */
extern void* func_twin_DbgLogEnable_ASSERT;

/* Symbol: dfs_DbgLogEnable_ERROR */
/* Demangled: dfs_DbgLogEnable_ERROR */
extern void* dfs_DbgLogEnable_ERROR;

/* Symbol: _ZN10CmdQMgrImp7FSM_CHKEjPKc */
/* Demangled: CmdQMgrImp::FSM_CHK(unsigned int, char const*) */
int _ZN10CmdQMgrImp7FSM_CHKEjPKc(void);

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*>&>::push_back(ST_BUF_INFO__*&&) */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__RNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN8DMA_CQ118_disableEPv */
/* Demangled: DMA_CQ11::_disable(void*) */
int _ZN8DMA_CQ118_disableEPv(void);

/* Symbol: _ZN14CAMSV_TOP_CTRL7_enableEPv */
/* Demangled: CAMSV_TOP_CTRL::_enable(void*) */
int _ZN14CAMSV_TOP_CTRL7_enableEPv(void);

/* Symbol: CmdQMgr_DbgLogEnable_VERBOSE */
/* Demangled: CmdQMgr_DbgLogEnable_VERBOSE */
extern void* CmdQMgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN10CmdQMgrImp15CmdQMgr_GetDuqQEv */
/* Demangled: CmdQMgrImp::CmdQMgr_GetDuqQ() */
int _ZN10CmdQMgrImp15CmdQMgr_GetDuqQEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme15CmdQMgr_GetDuqQEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetDuqQ() */
int _ZN16CmdQMgrImp1_imme15CmdQMgr_GetDuqQEv(void);

/* Symbol: _ZN6DMAI_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE */
/* Demangled: DMAI_B::BW_Meter(DMA_B::Sig_Profile const&, std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >*) */
int _ZN6DMAI_B8BW_MeterERKN5DMA_B11Sig_ProfileEPNSt3__16vectorINS0_6DMA_BWENS4_9allocatorIS6_EEEE(void);

/* Symbol: _ZTV12CAM_BUF_CTRL */
/* Demangled: vtable for CAM_BUF_CTRL */
extern void* _ZTV12CAM_BUF_CTRL;

/* Symbol: _ZN12CAM_TOP_CTRL9_write2CQEv */
/* Demangled: CAM_TOP_CTRL::_write2CQ() */
int _ZN12CAM_TOP_CTRL9_write2CQEv(void);

/* Symbol: _ZTV6DMAI_B */
/* Demangled: vtable for DMAI_B */
extern void* _ZTV6DMAI_B;

/* Symbol: _ZN9SecMgrImp19SecMgr_SecCamEnableEv */
/* Demangled: SecMgrImp::SecMgr_SecCamEnable() */
int _ZN9SecMgrImp19SecMgr_SecCamEnableEv(void);

/* Symbol: dfs_DbgLogEnable_ASSERT */
/* Demangled: dfs_DbgLogEnable_ASSERT */
extern void* dfs_DbgLogEnable_ASSERT;

/* Symbol: function_DbgLogEnable_INFO */
/* Demangled: function_DbgLogEnable_INFO */
extern void* function_DbgLogEnable_INFO;

/* Symbol: _ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__14moveIP15_stISP_BUF_INFOS1_S2_RS1_PS2_iLi31EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZTV12CAM_YUV_PIPE */
/* Demangled: vtable for CAM_YUV_PIPE */
extern void* _ZTV12CAM_YUV_PIPE;

/* Symbol: _ZN11TwinMgr_IMP16P1Notify_MappingEjP16P1_TUNING_NOTIFY */
/* Demangled: TwinMgr_IMP::P1Notify_Mapping(unsigned int, P1_TUNING_NOTIFY*) */
int _ZN11TwinMgr_IMP16P1Notify_MappingEjP16P1_TUNING_NOTIFY(void);

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT */
/* Demangled: CAM_DFS_Mgr::CAM_DBS_SetBw(T_BW_INPUT*) */
int _ZN11CAM_DFS_Mgr13CAM_DBS_SetBwEP10T_BW_INPUT(void);

/* Symbol: _ZTV10Header_AFO */
/* Demangled: vtable for Header_AFO */
extern void* _ZTV10Header_AFO;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void);

/* Symbol: cam_cap_DbgLogEnable_WARN */
/* Demangled: cam_cap_DbgLogEnable_WARN */
extern void* cam_cap_DbgLogEnable_WARN;

/* Symbol: _ZN12CamPathPass14stopEPv */
/* Demangled: CamPathPass1::stop(void*) */
int _ZN12CamPathPass14stopEPv(void);

/* Symbol: _ZN10Header_PSO12Header_EnqueEjP11ISP_DRV_CAMj */
/* Demangled: Header_PSO::Header_Enque(unsigned int, ISP_DRV_CAM*, unsigned int) */
int _ZN10Header_PSO12Header_EnqueEjP11ISP_DRV_CAMj(void);

/* Symbol: _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyS0_14_isp_dma_enum_13ISP_HW_MODULE */
/* Demangled: CAM_TIMESTAMP::TimeStamp_mapping(unsigned long long*, unsigned long long*, _isp_dma_enum_, ISP_HW_MODULE) */
int _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyS0_14_isp_dma_enum_13ISP_HW_MODULE(void);

/* Symbol: _ZN10CmdQMgrImp14CmdQMgr_resumeEv */
/* Demangled: CmdQMgrImp::CmdQMgr_resume() */
int _ZN10CmdQMgrImp14CmdQMgr_resumeEv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme18CmdQMgr_GetCounterEi */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCounter(int) */
int _ZN16CmdQMgrImp1_imme18CmdQMgr_GetCounterEi(void);

/* Symbol: _ZN15CamPath_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE */
/* Demangled: CamPath_BufCtrl::enque_push(unsigned int, std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >&, std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >*) */
int _ZN15CamPath_BufCtrl10enque_pushEjRNSt3__14listI15_stISP_BUF_INFONS0_9allocatorIS2_EEEEPNS0_6vectorI13ISP_HW_MODULENS3_IS8_EEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*> >::push_back(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*&&) */
int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS6_EEE9push_backEOS6_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >*>&>::push_front(std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >* const&) */
int _ZNSt3__114__split_bufferIPNS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEERNS3_IS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZN13BUF_CTRL_UFEO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE */
/* Demangled: BUF_CTRL_UFEO::Header_Parser(unsigned int, NSImageio::NSIspio::BufInfo&, unsigned int*, char*, ISP_HW_MODULE) */
int _ZN13BUF_CTRL_UFEO13Header_ParserEjRN9NSImageio7NSIspio7BufInfoEPjPc13ISP_HW_MODULE(void);

/* Symbol: _ZN6DMAO_B10BusSizeCalER5E_PIX */
/* Demangled: DMAO_B::BusSizeCal(E_PIX&) */
int _ZN6DMAO_B10BusSizeCalER5E_PIX(void);

/* Symbol: _ZTV17Header_CAMSV_IMGO */
/* Demangled: vtable for Header_CAMSV_IMGO */
extern void* _ZTV17Header_CAMSV_IMGO;

/* Symbol: _ZN6UniMgr12UniMgr_GetCBE13ISP_HW_MODULEj */
/* Demangled: UniMgr::UniMgr_GetCB(ISP_HW_MODULE, unsigned int) */
int _ZN6UniMgr12UniMgr_GetCBE13ISP_HW_MODULEj(void);

/* Symbol: _ZN12CAM_YUV_PIPE6setLMVEv */
/* Demangled: CAM_YUV_PIPE::setLMV() */
int _ZN12CAM_YUV_PIPE6setLMVEv(void);

/* Symbol: _ZTV13CAM_RCP3_CTRL */
/* Demangled: vtable for CAM_RCP3_CTRL */
extern void* _ZTV13CAM_RCP3_CTRL;

/* Symbol: _ZN13CAM_TWIN_PIPE14get_RunTwinRstEjRNSt3__16vectorINS0_4listINS_10T_TWIN_DMAENS0_9allocatorIS3_EEEENS4_IS6_EEEEi */
/* Demangled: CAM_TWIN_PIPE::get_RunTwinRst(unsigned int, std::__1::vector<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> >, std::__1::allocator<std::__1::list<CAM_TWIN_PIPE::T_TWIN_DMA, std::__1::allocator<CAM_TWIN_PIPE::T_TWIN_DMA> > > >&, int) */
int _ZN13CAM_TWIN_PIPE14get_RunTwinRstEjRNSt3__16vectorINS0_4listINS_10T_TWIN_DMAENS0_9allocatorIS3_EEEENS4_IS6_EEEEi(void);

/* Symbol: _ZN13CAM_TWIN_PIPE20update_beforeRunTwinEv */
/* Demangled: CAM_TWIN_PIPE::update_beforeRunTwin() */
int _ZN13CAM_TWIN_PIPE20update_beforeRunTwinEv(void);

/* Symbol: _ZN13CAM_TWIN_PIPEC1Ev */
/* Demangled: CAM_TWIN_PIPE::CAM_TWIN_PIPE() */
int _ZN13CAM_TWIN_PIPEC1Ev(void);

/* Symbol: _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyPj14_isp_dma_enum_13ISP_HW_MODULE */
/* Demangled: CAM_TIMESTAMP::TimeStamp_mapping(unsigned long long*, unsigned int*, _isp_dma_enum_, ISP_HW_MODULE) */
int _ZN13CAM_TIMESTAMP17TimeStamp_mappingEPyPj14_isp_dma_enum_13ISP_HW_MODULE(void);

/* Symbol: _ZN10DupCmdQMgr14CmdQMgr_attachEjj13ISP_HW_MODULE12E_ISP_CAM_CQ */
/* Demangled: DupCmdQMgr::CmdQMgr_attach(unsigned int, unsigned int, ISP_HW_MODULE, E_ISP_CAM_CQ) */
int _ZN10DupCmdQMgr14CmdQMgr_attachEjj13ISP_HW_MODULE12E_ISP_CAM_CQ(void);

/* Symbol: _ZN11Header_UFEO12Header_DequeEjPv */
/* Demangled: Header_UFEO::Header_Deque(unsigned int, void*) */
int _ZN11Header_UFEO12Header_DequeEjPv(void);

/* Symbol: _ZN12BUF_CTRL_AAO12waitBufReadyEP17_CAM_STATE_NOTIFY */
/* Demangled: BUF_CTRL_AAO::waitBufReady(_CAM_STATE_NOTIFY*) */
int _ZN12BUF_CTRL_AAO12waitBufReadyEP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN7DMA_CQ04pDrvE */
/* Demangled: DMA_CQ0::pDrv */
extern void* _ZN7DMA_CQ04pDrvE;

/* Symbol: _ZN8DMA_UFEO9update_AUEv */
/* Demangled: DMA_UFEO::update_AU() */
int _ZN8DMA_UFEO9update_AUEv(void);

/* Symbol: _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >::__push_back_slow_path<_CAM_THRU_PUT const&>(_CAM_THRU_PUT const&) */
int _ZNSt3__16vectorI13_CAM_THRU_PUTNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN9SecMgrImpC2Ev */
/* Demangled: SecMgrImp::SecMgrImp() */
int _ZN9SecMgrImpC2Ev(void);

/* Symbol: _ZTV11Header_RRZO */
/* Demangled: vtable for Header_RRZO */
extern void* _ZTV11Header_RRZO;

/* Symbol: _ZN13CAMSV_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: CAMSV_DFS_Mgr::CAM_DFS_INIT(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN13CAMSV_DFS_Mgr12CAM_DFS_INITEPNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >, std::__1::allocator<std::__1::list<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> > > >::clear() */
int _ZNSt3__112__deque_baseINS_4listI15_stISP_BUF_INFONS_9allocatorIS2_EEEENS3_IS5_EEE5clearEv(void);

/* Symbol: _ZTV13BUF_CTRL_UFGO */
/* Demangled: vtable for BUF_CTRL_UFGO */
extern void* _ZTV13BUF_CTRL_UFGO;

/* Symbol: _ZTV15CAM_TUNING_CTRL */
/* Demangled: vtable for CAM_TUNING_CTRL */
extern void* _ZTV15CAM_TUNING_CTRL;

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::push_back(ST_BUF_INFO__*&&) */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZTV8DMA_BPCI */
/* Demangled: vtable for DMA_BPCI */
extern void* _ZTV8DMA_BPCI;

/* Symbol: _ZN10PIPE_CHECK11DMAO_STATUSEj */
/* Demangled: PIPE_CHECK::DMAO_STATUS(unsigned int) */
int _ZN10PIPE_CHECK11DMAO_STATUSEj(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > >&) */
int _ZNSt3__114__split_bufferINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_(void);

/* Symbol: _ZN12DMAO_CAMSV_B8_disableEPv */
/* Demangled: DMAO_CAMSV_B::_disable(void*) */
int _ZN12DMAO_CAMSV_B8_disableEPv(void);

/* Symbol: _ZN16CmdQMgrImp1_imme20CmdQMgr_GetCurModuleEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetCurModule() */
int _ZN16CmdQMgrImp1_imme20CmdQMgr_GetCurModuleEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZN13BUF_CTRL_UFGO10FBC_STATUSEP6IspDrv */
/* Demangled: BUF_CTRL_UFGO::FBC_STATUS(IspDrv*) */
int _ZN13BUF_CTRL_UFGO10FBC_STATUSEP6IspDrv(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__push_back_slow_path<NSCam::EImageFormat>(NSCam::EImageFormat&&) */
int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN10CmdQMgrImp12CmdQMgr_stopEv */
/* Demangled: CmdQMgrImp::CmdQMgr_stop() */
int _ZN10CmdQMgrImp12CmdQMgr_stopEv(void);

/* Symbol: _ZN7DMA_CQ06TrigCQEi */
/* Demangled: DMA_CQ0::TrigCQ(int) */
int _ZN7DMA_CQ06TrigCQEi(void);

/* Symbol: _ZN6DMAI_B7_enableEPv */
/* Demangled: DMAI_B::_enable(void*) */
int _ZN6DMAI_B7_enableEPv(void);

/* Symbol: _ZN12CamPathPass112setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE */
/* Demangled: CamPathPass1::setP1TuneCfg(std::__1::list<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >*) */
int _ZN12CamPathPass112setP1TuneCfgEPNSt3__14listI14IspP1TuningCfgNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<_stISP_BUF_INFO*, std::__1::allocator<_stISP_BUF_INFO*>&>::push_front(_stISP_BUF_INFO* const&) */
int _ZNSt3__114__split_bufferIP15_stISP_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZTV8QueueMgrI15_stISP_BUF_INFOE */
/* Demangled: vtable for QueueMgr<_stISP_BUF_INFO> */
extern void* _ZTV8QueueMgrI15_stISP_BUF_INFOE;

/* Symbol: path_DbgLogEnable_INFO */
/* Demangled: path_DbgLogEnable_INFO */
extern void* path_DbgLogEnable_INFO;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN10CmdQMgrImpC1Ev */
/* Demangled: CmdQMgrImp::CmdQMgrImp() */
int _ZN10CmdQMgrImpC1Ev(void);

/* Symbol: _ZN8QueueMgrI15_stISP_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<_stISP_BUF_INFO>::sendCmd(QueueMgr<_stISP_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrI15_stISP_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj(void);

/* Symbol: _ZN16CmdQMgrImp1_imme17CmdQMgr_GetBurstQEv */
/* Demangled: CmdQMgrImp1_imme::CmdQMgr_GetBurstQ() */
int _ZN16CmdQMgrImp1_imme17CmdQMgr_GetBurstQEv(void);

/* Symbol: _ZN12CAM_BUF_CTRL17m_recentFrmTimeMsE */
/* Demangled: CAM_BUF_CTRL::m_recentFrmTimeMs */
extern void* _ZN12CAM_BUF_CTRL17m_recentFrmTimeMsE;

/* Symbol: _ZN12Cam_path_selC1EP21CamPathPass1Parameter */
/* Demangled: Cam_path_sel::Cam_path_sel(CamPathPass1Parameter*) */
int _ZN12Cam_path_selC1EP21CamPathPass1Parameter(void);

/* Symbol: _ZN6DMAO_B7_enableEPv */
/* Demangled: DMAO_B::_enable(void*) */
int _ZN6DMAO_B7_enableEPv(void);

/* Symbol: _ZN8DMA_CQ1012setCQContentEjj */
/* Demangled: DMA_CQ10::setCQContent(unsigned int, unsigned int) */
int _ZN8DMA_CQ1012setCQContentEjj(void);

/* Symbol: _ZN6DMAI_BC1Ev */
/* Demangled: DMAI_B::DMAI_B() */
int _ZN6DMAI_BC1Ev(void);

/* Symbol: _ZN12Cam_path_selD2Ev */
/* Demangled: Cam_path_sel::~Cam_path_sel() */
int _ZN12Cam_path_selD2Ev(void);

/* Symbol: _ZTV10Header_PDO */
/* Demangled: vtable for Header_PDO */
extern void* _ZTV10Header_PDO;

/* Symbol: _ZN13TwinFlowCheck11suspendInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE */
/* Demangled: TwinFlowCheck::suspendInit(std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, CAM_TWIN_PIPE*) */
int _ZN13TwinFlowCheck11suspendInitEPNSt3__16vectorIP10DupCmdQMgrNS0_9allocatorIS3_EEEEP13CAM_TWIN_PIPE(void);

/* Symbol: cam_ts_DbgLogEnable_WARN */
/* Demangled: cam_ts_DbgLogEnable_WARN */
extern void* cam_ts_DbgLogEnable_WARN;

/* Symbol: _ZN8DMA_CQ1216setCQTriggerModeENS_6E_MODEE */
/* Demangled: DMA_CQ12::setCQTriggerMode(DMA_CQ12::E_MODE) */
int _ZN8DMA_CQ1216setCQTriggerModeENS_6E_MODEE(void);

/* Symbol: _ZN7DMA_CQ15IO2CQENS_10E_Write2CQE13ISP_HW_MODULE */
/* Demangled: DMA_CQ1::IO2CQ(DMA_CQ1::E_Write2CQ, ISP_HW_MODULE) */
int _ZN7DMA_CQ15IO2CQENS_10E_Write2CQE13ISP_HW_MODULE(void);

/* Symbol: _ZN12DMAO_CAMSV_BC1Ev */
/* Demangled: DMAO_CAMSV_B::DMAO_CAMSV_B() */
int _ZN12DMAO_CAMSV_BC1Ev(void);

/* Symbol: _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >::__push_back_slow_path<DupCmdQMgr* const&>(DupCmdQMgr* const&) */
int _ZNSt3__16vectorIP10DupCmdQMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN11CAM_DFS_Mgr13CAM_DFS_STARTEv */
/* Demangled: CAM_DFS_Mgr::CAM_DFS_START() */
int _ZN11CAM_DFS_Mgr13CAM_DFS_STARTEv(void);

/* Symbol: _ZN16CmdQMgrImp3_imme12CmdQMgr_stopEv */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_stop() */
int _ZN16CmdQMgrImp3_imme12CmdQMgr_stopEv(void);

/* Symbol: _ZN15CamPath_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE */
/* Demangled: CamPath_BufCtrl::PBC_config(void*, std::__1::vector<DupCmdQMgr*, std::__1::allocator<DupCmdQMgr*> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, NSImageio::NSIspio::PortID const*) */
int _ZN15CamPath_BufCtrl10PBC_configEPvPNSt3__16vectorIP10DupCmdQMgrNS1_9allocatorIS4_EEEEPNS1_4listIjNS5_IjEEEEPKN9NSImageio7NSIspio6PortIDE(void);

/* Symbol: _ZN11TwinMgr_IMP14dropEnqueueBufERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_ */
/* Demangled: TwinMgr_IMP::dropEnqueueBuf(TWIN_MGR_PATH_CFG_IN_PARAM const&, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN11TwinMgr_IMP14dropEnqueueBufERK26TWIN_MGR_PATH_CFG_IN_PARAMPNSt3__14listIjNS3_9allocatorIjEEEES8_(void);

/* Symbol: _ZN16CmdQMgrImp3_imme20CmdQMgr_GetCurModuleEv */
/* Demangled: CmdQMgrImp3_imme::CmdQMgr_GetCurModule() */
int _ZN16CmdQMgrImp3_imme20CmdQMgr_GetCurModuleEv(void);

/* Symbol: _ZTV11Header_LCSO */
/* Demangled: vtable for Header_LCSO */
extern void* _ZTV11Header_LCSO;

/* Symbol: _ZTV13CAM_TWIN_PIPE */
/* Demangled: vtable for CAM_TWIN_PIPE */
extern void* _ZTV13CAM_TWIN_PIPE;

/* Symbol: _ZN11Header_IMGO10GetRegInfoEjP6IspDrv */
/* Demangled: Header_IMGO::GetRegInfo(unsigned int, IspDrv*) */
int _ZN11Header_IMGO10GetRegInfoEjP6IspDrv(void);

/* Symbol: _ZN7DMA_CQ16TrigCQEi */
/* Demangled: DMA_CQ1::TrigCQ(int) */
int _ZN7DMA_CQ16TrigCQEi(void);

/* Symbol: path_DbgLogEnable_DEBUG */
/* Demangled: path_DbgLogEnable_DEBUG */
extern void* path_DbgLogEnable_DEBUG;

/* Symbol: _ZN7DMA_CQ07_configEv */
/* Demangled: DMA_CQ0::_config() */
int _ZN7DMA_CQ07_configEv(void);

/* Symbol: _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW> >::__swap_out_circular_buffer(std::__1::__split_buffer<DMA_B::DMA_BW, std::__1::allocator<DMA_B::DMA_BW>&>&) */
int _ZNSt3__16vectorIN5DMA_B6DMA_BWENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMAGEIO_PLAT_DRV_H */
