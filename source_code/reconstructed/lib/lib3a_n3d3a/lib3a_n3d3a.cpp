/*
 * Reverse-Engineered Source for: lib3a.n3d3a.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_n3d3a"

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
#include "lib3a_n3d3a.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vtable for AppSyncAwb */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppSyncAwb = NULL;

/* Exported Object: vtable for MTKSyncAe */
extern "C" __attribute__((visibility("default"))) void* _ZTV9MTKSyncAe = NULL;

/* Demangled: AppSyncAwb::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwb11getInstanceEv(void) {
    ALOGD("_ZN10AppSyncAwb11getInstanceEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: CalAEStatWinMapping(SyncAE_LocationInfo_Input_Strurct*, SyncAE_LocationInfo_Output_Strurct*) */
extern "C" __attribute__((visibility("default"))) int _Z19CalAEStatWinMappingP33SyncAE_LocationInfo_Input_StrurctP34SyncAE_LocationInfo_Output_Strurct(void) {
    ALOGD("_Z19CalAEStatWinMappingP33SyncAE_LocationInfo_Input_StrurctP34SyncAE_LocationInfo_Output_Strurct() called");
    return 0;
}

/* Exported Object: g_master_ccm */
extern "C" __attribute__((visibility("default"))) void* g_master_ccm = NULL;

/* Exported Object: prop_value */
extern "C" __attribute__((visibility("default"))) void* prop_value = NULL;

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: CalAWBStatWinMapping(SyncAWB_LocationInfo_Input_Strurct*, SyncAWB_LocationInfo_Output_Strurct*) */
extern "C" __attribute__((visibility("default"))) int _Z20CalAWBStatWinMappingP34SyncAWB_LocationInfo_Input_StrurctP35SyncAWB_LocationInfo_Output_Strurct(void) {
    ALOGD("_Z20CalAWBStatWinMappingP34SyncAWB_LocationInfo_Input_StrurctP35SyncAWB_LocationInfo_Output_Strurct() called");
    return 0;
}

/* Demangled: N3dAECoreProcess(unsigned int, int, int, int, SYNC_AE_INPUT_INFO_STRUCT*, SYNC_AE_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z16N3dAECoreProcessjiiiP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z16N3dAECoreProcessjiiiP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: gBlendInfo */
extern "C" __attribute__((visibility("default"))) void* gBlendInfo = NULL;

/* Exported Object: gSyncResult */
extern "C" __attribute__((visibility("default"))) void* gSyncResult = NULL;

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: MTKSyncAwb::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKSyncAwb14createInstanceEv(void) {
    ALOGD("_ZN10MTKSyncAwb14createInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: gAWBChildBlk_main */
extern "C" __attribute__((visibility("default"))) void* gAWBChildBlk_main = NULL;

/* Exported Object: rSlave_preGain */
extern "C" __attribute__((visibility("default"))) void* rSlave_preGain = NULL;

/* Demangled: StandbySyncAwbAlgo::INTERPOLATE(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo11INTERPOLATEEiiiii(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo11INTERPOLATEEiiiii() called");
    return 0;
}

/* Exported Object: vtable for StandbySyncAwbAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV21StandbySyncAwbAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Exported Object: gSubCamFovRatio */
extern "C" __attribute__((visibility("default"))) void* gSubCamFovRatio = NULL;

/* Exported Object: Bgaindiff_master */
extern "C" __attribute__((visibility("default"))) void* Bgaindiff_master = NULL;

/* Exported Object: gDisplay_cam */
extern "C" __attribute__((visibility("default"))) void* gDisplay_cam = NULL;

/* Exported Object: gSyncWBSmoothParam */
extern "C" __attribute__((visibility("default"))) void* gSyncWBSmoothParam = NULL;

/* Exported Object: g_rAWB_sync_prefer_bias */
extern "C" __attribute__((visibility("default"))) void* g_rAWB_sync_prefer_bias = NULL;

/* Demangled: AppSyncAwb::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwb15destroyInstanceEv(void) {
    ALOGD("_ZN10AppSyncAwb15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: m_i4AWBSyncDebugCtrl */
extern "C" __attribute__((visibility("default"))) void* m_i4AWBSyncDebugCtrl = NULL;

/* Exported Object: g_Main_Y_LRef */
extern "C" __attribute__((visibility("default"))) void* g_Main_Y_LRef = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Exported Object: m_AE_Output */
extern "C" __attribute__((visibility("default"))) void* m_AE_Output = NULL;

/* Demangled: StandbySyncAwbAlgo::CLAMP(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo5CLAMPEiii(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo5CLAMPEiii() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Exported Object: vtable for StandbySyncAwbAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTV18StandbySyncAwbAlgo = NULL;

/* Demangled: my_property_get_int32(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21my_property_get_int32PKci(void) {
    ALOGD("_Z21my_property_get_int32PKci() called");
    return 0;
}

/* Exported Object: g_u4ValidRatioSub */
extern "C" __attribute__((visibility("default"))) void* g_u4ValidRatioSub = NULL;

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: getLutValue(int, int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11getLutValueiPiiii(void) {
    ALOGD("_Z11getLutValueiPiiii() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: AppSyncAwb::SyncAwbInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwb11SyncAwbInitEPv(void) {
    ALOGD("_ZN10AppSyncAwb11SyncAwbInitEPv() called");
    return 0;
}

/* Exported Object: gAWB_init_flag */
extern "C" __attribute__((visibility("default"))) void* gAWB_init_flag = NULL;

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::AWBStandbySyncInit() */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo18AWBStandbySyncInitEv(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo18AWBStandbySyncInitEv() called");
    return 0;
}

/* Exported Object: m_AE_SyncGain */
extern "C" __attribute__((visibility("default"))) void* m_AE_SyncGain = NULL;

/* Exported Object: g_Sub_Y_HRef */
extern "C" __attribute__((visibility("default"))) void* g_Sub_Y_HRef = NULL;

/* Demangled: getLutIndex(int, int&, int&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11getLutIndexiRiS_iii(void) {
    ALOGD("_Z11getLutIndexiRiS_iii() called");
    return 0;
}

/* Exported Object: Rgaindiff_slave */
extern "C" __attribute__((visibility("default"))) void* Rgaindiff_slave = NULL;

/* Exported Object: g_u4MainRD_x */
extern "C" __attribute__((visibility("default"))) void* g_u4MainRD_x = NULL;

/* Exported Object: glv_th_low */
extern "C" __attribute__((visibility("default"))) void* glv_th_low = NULL;

/* Demangled: StandbySyncAwbAlgo::~StandbySyncAwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgoD1Ev(void) {
    ALOGD("_ZN18StandbySyncAwbAlgoD1Ev() called");
    return 0;
}

/* Exported Object: vtable for StandbySyncAwbAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV21StandbySyncAwbAlgoDevILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Exported Object: g_u4MainRD_y */
extern "C" __attribute__((visibility("default"))) void* g_u4MainRD_y = NULL;

/* Exported Object: bDbgSyncAwb */
extern "C" __attribute__((visibility("default"))) void* bDbgSyncAwb = NULL;

/* Exported Object: gSyncWB_prefer_baseLV */
extern "C" __attribute__((visibility("default"))) void* gSyncWB_prefer_baseLV = NULL;

/* Demangled: AppSyncAwb::~AppSyncAwb() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwbD0Ev(void) {
    ALOGD("_ZN10AppSyncAwbD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: g_rMaster_CCM_Result */
extern "C" __attribute__((visibility("default"))) void* g_rMaster_CCM_Result = NULL;

/* Exported Object: g_MainCCTRotXY */
extern "C" __attribute__((visibility("default"))) void* g_MainCCTRotXY = NULL;

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Exported Object: g_slave_aao_b */
extern "C" __attribute__((visibility("default"))) void* g_slave_aao_b = NULL;

/* Demangled: xy2gain(AWB_XY_COORDINATE_STRUCT, AWB_ROTATION_MATRIX_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _Z7xy2gain24AWB_XY_COORDINATE_STRUCT21AWB_ROTATION_MATRIX_TR10AWB_GAIN_T(void) {
    ALOGD("_Z7xy2gain24AWB_XY_COORDINATE_STRUCT21AWB_ROTATION_MATRIX_TR10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AppSyncAwb::~AppSyncAwb() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwbD2Ev(void) {
    ALOGD("_ZN10AppSyncAwbD2Ev() called");
    return 0;
}

/* Exported Object: rMaster_preGain */
extern "C" __attribute__((visibility("default"))) void* rMaster_preGain = NULL;

/* Exported Object: bDbgAppSyncAe */
extern "C" __attribute__((visibility("default"))) void* bDbgAppSyncAe = NULL;

/* Demangled: N3dAeCoreGetMappingIndex(SYNC_AE_DIRECT_INDEX_MAPPING_STRUCT*, SYNC_AE_DIRECT_MAP_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24N3dAeCoreGetMappingIndexP35SYNC_AE_DIRECT_INDEX_MAPPING_STRUCTP32SYNC_AE_DIRECT_MAP_RESULT_STRUCT(void) {
    ALOGD("_Z24N3dAeCoreGetMappingIndexP35SYNC_AE_DIRECT_INDEX_MAPPING_STRUCTP32SYNC_AE_DIRECT_MAP_RESULT_STRUCT() called");
    return 0;
}

/* Exported Object: g_slave_aao_g */
extern "C" __attribute__((visibility("default"))) void* g_slave_aao_g = NULL;

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::DIV_ROUND(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo9DIV_ROUNDEii(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo9DIV_ROUNDEii() called");
    return 0;
}

/* Exported Object: gSyncWBPreferParam */
extern "C" __attribute__((visibility("default"))) void* gSyncWBPreferParam = NULL;

/* Exported Object: g_u4ValidParentBlockMap_sub */
extern "C" __attribute__((visibility("default"))) void* g_u4ValidParentBlockMap_sub = NULL;

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: INTERPOLATE(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11INTERPOLATEiiiii(void) {
    ALOGD("_Z11INTERPOLATEiiiii() called");
    return 0;
}

/* Demangled: SyncAwbCCTMethod(SYNC_AWB_INPUT_INFO_STRUCT*, AWB_SYNC_RESULT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16SyncAwbCCTMethodP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj(void) {
    ALOGD("_Z16SyncAwbCCTMethodP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj() called");
    return 0;
}

/* Demangled: SyncAwbBlending(SYNC_AWB_INPUT_INFO_STRUCT*, AWB_SYNC_RESULT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15SyncAwbBlendingP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj(void) {
    ALOGD("_Z15SyncAwbBlendingP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj() called");
    return 0;
}

/* Exported Object: g_u4SubLU_x */
extern "C" __attribute__((visibility("default"))) void* g_u4SubLU_x = NULL;

/* Demangled: N3dAECoreInit(N3D_AE_INIT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z13N3dAECoreInitP18N3D_AE_INIT_STRUCT(void) {
    ALOGD("_Z13N3dAECoreInitP18N3D_AE_INIT_STRUCT() called");
    return 0;
}

/* Demangled: AppSyncAwb::AppSyncAwb() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwbC1Ev(void) {
    ALOGD("_ZN10AppSyncAwbC1Ev() called");
    return 0;
}

/* Demangled: GetAeSyncSetting(unsigned int, SYNC_AE_INPUT_INFO_STRUCT*, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z16GetAeSyncSettingjP25SYNC_AE_INPUT_INFO_STRUCTRiS1_S1_(void) {
    ALOGD("_Z16GetAeSyncSettingjP25SYNC_AE_INPUT_INFO_STRUCTRiS1_S1_() called");
    return 0;
}

/* Exported Object: g_u4SubLU_y */
extern "C" __attribute__((visibility("default"))) void* g_u4SubLU_y = NULL;

/* Demangled: StandbySyncAwbAlgo::AWBStandbySync(int, AWB_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo14AWBStandbySyncEiR12AWB_OUTPUT_T(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo14AWBStandbySyncEiR12AWB_OUTPUT_T() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::GeometricSmooth(AWB_GAIN_T, AWB_GAIN_T, int, int, int, int, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo15GeometricSmoothE10AWB_GAIN_TS0_iiiiRS0_(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo15GeometricSmoothE10AWB_GAIN_TS0_iiiiRS0_() called");
    return 0;
}

/* Demangled: AppSyncAe::~AppSyncAe() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAeD0Ev(void) {
    ALOGD("_ZN9AppSyncAeD0Ev() called");
    return 0;
}

/* Demangled: RATIO(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z5RATIOii(void) {
    ALOGD("_Z5RATIOii() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Exported Object: m_n3dAWB */
extern "C" __attribute__((visibility("default"))) void* m_n3dAWB = NULL;

/* Exported Object: g_slave_aao_r */
extern "C" __attribute__((visibility("default"))) void* g_slave_aao_r = NULL;

/* Demangled: StandbySyncAwbAlgo::gainInterpolate(int, int, int, AWB_GAIN_T, AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo15gainInterpolateEiii10AWB_GAIN_TS0_RS0_(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo15gainInterpolateEiii10AWB_GAIN_TS0_RS0_() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: N3dAwbCoreMain(SYNC_AWB_AAO_MAPPING_INFO_STRUCT*, SYNC_AWB_INPUT_INFO_STRUCT*, SYNC_AWB_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z14N3dAwbCoreMainP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z14N3dAwbCoreMainP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: g_rWPArea_WPCount_sub */
extern "C" __attribute__((visibility("default"))) void* g_rWPArea_WPCount_sub = NULL;

/* Demangled: LOG10(int) */
extern "C" __attribute__((visibility("default"))) int _Z5LOG10i(void) {
    ALOGD("_Z5LOG10i() called");
    return 0;
}

/* Exported Object: gEnhance_gainchange_b */
extern "C" __attribute__((visibility("default"))) void* gEnhance_gainchange_b = NULL;

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Exported Object: gmain_curr_lv */
extern "C" __attribute__((visibility("default"))) void* gmain_curr_lv = NULL;

/* Exported Object: g_rWPArea_WPCount_main */
extern "C" __attribute__((visibility("default"))) void* g_rWPArea_WPCount_main = NULL;

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: AppSyncAe::~AppSyncAe() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAeD2Ev(void) {
    ALOGD("_ZN9AppSyncAeD2Ev() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::UpdateParam(AWB_STANDBY_SYNC_TUNNING_PARAM_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo11UpdateParamER37AWB_STANDBY_SYNC_TUNNING_PARAM_STRUCT(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo11UpdateParamER37AWB_STANDBY_SYNC_TUNNING_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Exported Object: gEnhance_gainchange_g */
extern "C" __attribute__((visibility("default"))) void* gEnhance_gainchange_g = NULL;

/* Exported Object: g_rAreaWP_info_slave */
extern "C" __attribute__((visibility("default"))) void* g_rAreaWP_info_slave = NULL;

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: AppSyncAe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAe15destroyInstanceEv(void) {
    ALOGD("_ZN9AppSyncAe15destroyInstanceEv() called");
    return 0;
}

/* Demangled: BayerMonoRegression(unsigned int, SYNC_AE_INPUT_INFO_STRUCT*, SYNC_AE_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z19BayerMonoRegressionjP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z19BayerMonoRegressionjP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::getSyncAWBGain(AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo14getSyncAWBGainE10AWB_GAIN_TRS0_(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo14getSyncAWBGainE10AWB_GAIN_TRS0_() called");
    return 0;
}

/* Demangled: gain2xy(AWB_GAIN_T, AWB_ROTATION_MATRIX_T, AWB_XY_COORDINATE_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _Z7gain2xy10AWB_GAIN_T21AWB_ROTATION_MATRIX_TR24AWB_XY_COORDINATE_STRUCT(void) {
    ALOGD("_Z7gain2xy10AWB_GAIN_T21AWB_ROTATION_MATRIX_TR24AWB_XY_COORDINATE_STRUCT() called");
    return 0;
}

/* Demangled: N3dAwbCoreGetMappingGain(SYNC_AWB_DIRECT_GAIN_MAPPING_STRUCT*, SYNC_AWB_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24N3dAwbCoreGetMappingGainP35SYNC_AWB_DIRECT_GAIN_MAPPING_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z24N3dAwbCoreGetMappingGainP35SYNC_AWB_DIRECT_GAIN_MAPPING_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: AAOAdvPPSync(SYNC_AWB_INPUT_INFO_STRUCT*, AWB_SYNC_RESULT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12AAOAdvPPSyncP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj(void) {
    ALOGD("_Z12AAOAdvPPSyncP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj() called");
    return 0;
}

/* Exported Object: g_Main_Y_HRef */
extern "C" __attribute__((visibility("default"))) void* g_Main_Y_HRef = NULL;

/* Demangled: AppSyncAe::AppSyncAe() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAeC1Ev(void) {
    ALOGD("_ZN9AppSyncAeC1Ev() called");
    return 0;
}

/* Exported Object: gGainDiff_delta_b */
extern "C" __attribute__((visibility("default"))) void* gGainDiff_delta_b = NULL;

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Exported Object: m_i4OffsetBase */
extern "C" __attribute__((visibility("default"))) void* m_i4OffsetBase = NULL;

/* Exported Object: Bgaindiff_slave */
extern "C" __attribute__((visibility("default"))) void* Bgaindiff_slave = NULL;

/* Exported Object: gEnhance_gainchange_r */
extern "C" __attribute__((visibility("default"))) void* gEnhance_gainchange_r = NULL;

/* Exported Object: g_u4ValidParentBlockMap_main */
extern "C" __attribute__((visibility("default"))) void* g_u4ValidParentBlockMap_main = NULL;

/* Exported Object: gGainDiff_delta_g */
extern "C" __attribute__((visibility("default"))) void* gGainDiff_delta_g = NULL;

/* Exported Object: gWPTuningParam */
extern "C" __attribute__((visibility("default"))) void* gWPTuningParam = NULL;

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Exported Object: glv_th_high */
extern "C" __attribute__((visibility("default"))) void* glv_th_high = NULL;

/* Demangled: MTKSyncAe::SyncAeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MTKSyncAe10SyncAeInitEPv(void) {
    ALOGD("_ZN9MTKSyncAe10SyncAeInitEPv() called");
    return 0;
}

/* Exported Object: Ggaindiff_slave */
extern "C" __attribute__((visibility("default"))) void* Ggaindiff_slave = NULL;

/* Demangled: getAntiLog(int) */
extern "C" __attribute__((visibility("default"))) int _Z10getAntiLogi(void) {
    ALOGD("_Z10getAntiLogi() called");
    return 0;
}

/* Demangled: AppSyncAwb::SyncAwbMain(SYNC_AWB_INPUT_INFO_STRUCT*, SYNC_AWB_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwb11SyncAwbMainEP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_ZN10AppSyncAwb11SyncAwbMainEP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Exported Object: g_rAreaWP_ApplyWBGain_info_master */
extern "C" __attribute__((visibility("default"))) void* g_rAreaWP_ApplyWBGain_info_master = NULL;

/* Demangled: StandbySyncAwbAlgo::StandbySyncAwbAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN18StandbySyncAwbAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Exported Object: vtable for StandbySyncAwbAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV21StandbySyncAwbAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: N3dAECoreCalculate(unsigned int, int, int, int, int, SYNC_AE_INPUT_INFO_STRUCT*, strEvSetting&) */
extern "C" __attribute__((visibility("default"))) int _Z18N3dAECoreCalculatejiiiiP25SYNC_AE_INPUT_INFO_STRUCTR12strEvSetting(void) {
    ALOGD("_Z18N3dAECoreCalculatejiiiiP25SYNC_AE_INPUT_INFO_STRUCTR12strEvSetting() called");
    return 0;
}

/* Demangled: GetAeSyncDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z20GetAeSyncDebugConfigv(void) {
    ALOGD("_Z20GetAeSyncDebugConfigv() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Exported Object: gGainDiff_delta_r */
extern "C" __attribute__((visibility("default"))) void* gGainDiff_delta_r = NULL;

/* Demangled: StandbySyncAwbAlgo::TempoarySmooth(AWB_GAIN_T, AWB_GAIN_T&, AWB_GAIN_T&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo14TempoarySmoothE10AWB_GAIN_TRS0_S1_Ri(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo14TempoarySmoothE10AWB_GAIN_TRS0_S1_Ri() called");
    return 0;
}

/* Demangled: MTKSyncAe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9MTKSyncAe15destroyInstanceEv(void) {
    ALOGD("_ZN9MTKSyncAe15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: g_rSlave */
extern "C" __attribute__((visibility("default"))) void* g_rSlave = NULL;

/* Demangled: StandbySyncAwbAlgo::StandbySyncAwbAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN18StandbySyncAwbAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: StandbySyncAwbAlgo::SmoothConvergence(AWB_GAIN_T, AWB_GAIN_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo17SmoothConvergenceE10AWB_GAIN_TS0_i(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo17SmoothConvergenceE10AWB_GAIN_TS0_i() called");
    return 0;
}

/* Exported Object: gSyncAwbState */
extern "C" __attribute__((visibility("default"))) void* gSyncAwbState = NULL;

/* Demangled: IStandbySyncAwbCtrl::createInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN19IStandbySyncAwbCtrl14createInstanceEi(void) {
    ALOGD("_ZN19IStandbySyncAwbCtrl14createInstanceEi() called");
    return 0;
}

/* Demangled: AppSyncAwb::SyncAwbFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwb18SyncAwbFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10AppSyncAwb18SyncAwbFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: SyncAwbAdvancePP(SYNC_AWB_AAO_MAPPING_INFO_STRUCT*, SYNC_AWB_INPUT_INFO_STRUCT*, AWB_SYNC_RESULT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16SyncAwbAdvancePPP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj(void) {
    ALOGD("_Z16SyncAwbAdvancePPP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Exported Object: gPPTuningParam */
extern "C" __attribute__((visibility("default"))) void* gPPTuningParam = NULL;

/* Exported Object: g_rResultGain */
extern "C" __attribute__((visibility("default"))) void* g_rResultGain = NULL;

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: N3dAwbCoreInit(SYNC_AWB_INIT_INFO_STRUCT const*) */
extern "C" __attribute__((visibility("default"))) int _Z14N3dAwbCoreInitPK25SYNC_AWB_INIT_INFO_STRUCT(void) {
    ALOGD("_Z14N3dAwbCoreInitPK25SYNC_AWB_INIT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: gN3d_ae_init_info */
extern "C" __attribute__((visibility("default"))) void* gN3d_ae_init_info = NULL;

/* Exported Object: g_rApplyPreferGain_norm */
extern "C" __attribute__((visibility("default"))) void* g_rApplyPreferGain_norm = NULL;

/* Demangled: MTKSyncAwb::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKSyncAwb15destroyInstanceEv(void) {
    ALOGD("_ZN10MTKSyncAwb15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: gSyncWB_Sub_LV */
extern "C" __attribute__((visibility("default"))) void* gSyncWB_Sub_LV = NULL;

/* Exported Object: g_SubCalData */
extern "C" __attribute__((visibility("default"))) void* g_SubCalData = NULL;

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: MTKSyncAe::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9MTKSyncAe14createInstanceEv(void) {
    ALOGD("_ZN9MTKSyncAe14createInstanceEv() called");
    return 0;
}

/* Demangled: MTKSyncAwb::SyncAwbMain(SYNC_AWB_INPUT_INFO_STRUCT*, SYNC_AWB_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKSyncAwb11SyncAwbMainEP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_ZN10MTKSyncAwb11SyncAwbMainEP26SYNC_AWB_INPUT_INFO_STRUCTP27SYNC_AWB_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: GeneratePlineTbl(unsigned int, int, int, SYNC_AE_INPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z16GeneratePlineTbljiiP25SYNC_AE_INPUT_INFO_STRUCT(void) {
    ALOGD("_Z16GeneratePlineTbljiiP25SYNC_AE_INPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: MTKSyncAwb::SyncAwbFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKSyncAwb18SyncAwbFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10MTKSyncAwb18SyncAwbFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Exported Object: m_n3dAE */
extern "C" __attribute__((visibility("default"))) void* m_n3dAE = NULL;

/* Exported Object: g_u4MainLU_x */
extern "C" __attribute__((visibility("default"))) void* g_u4MainLU_x = NULL;

/* Demangled: GetStaticAverageW(SYNC_AE_AAO_BUFFER_INTO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _Z17GetStaticAverageWR30SYNC_AE_AAO_BUFFER_INTO_STRUCT(void) {
    ALOGD("_Z17GetStaticAverageWR30SYNC_AE_AAO_BUFFER_INTO_STRUCT() called");
    return 0;
}

/* Exported Object: g_u4MainLU_y */
extern "C" __attribute__((visibility("default"))) void* g_u4MainLU_y = NULL;

/* Demangled: MTKSyncAe::SyncAeMain(SYNC_AE_INPUT_STRUCT*, SYNC_AE_OUTPUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MTKSyncAe10SyncAeMainEP20SYNC_AE_INPUT_STRUCTP21SYNC_AE_OUTPUT_STRUCT(void) {
    ALOGD("_ZN9MTKSyncAe10SyncAeMainEP20SYNC_AE_INPUT_STRUCTP21SYNC_AE_OUTPUT_STRUCT() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Exported Object: BlendingTh */
extern "C" __attribute__((visibility("default"))) void* BlendingTh = NULL;

/* Exported Object: bDbgSyncAe */
extern "C" __attribute__((visibility("default"))) void* bDbgSyncAe = NULL;

/* Demangled: StandbySyncAwbAlgo::~StandbySyncAwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgoD0Ev(void) {
    ALOGD("_ZN18StandbySyncAwbAlgoD0Ev() called");
    return 0;
}

/* Exported Object: gAWBChildBlk_sub */
extern "C" __attribute__((visibility("default"))) void* gAWBChildBlk_sub = NULL;

/* Exported Object: prop_value_int */
extern "C" __attribute__((visibility("default"))) void* prop_value_int = NULL;

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: AppSyncAe::SyncAeFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAe17SyncAeFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN9AppSyncAe17SyncAeFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: calAAO_AE_Mapping_Info(SYNC_AE_LOCATION_TRANS_STRUCT*, SYNC_AE_AAO_MAPPING_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22calAAO_AE_Mapping_InfoP29SYNC_AE_LOCATION_TRANS_STRUCTP31SYNC_AE_AAO_MAPPING_INFO_STRUCT(void) {
    ALOGD("_Z22calAAO_AE_Mapping_InfoP29SYNC_AE_LOCATION_TRANS_STRUCTP31SYNC_AE_AAO_MAPPING_INFO_STRUCT() called");
    return 0;
}

/* Demangled: DumpPlineTbl(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12DumpPlineTbljii(void) {
    ALOGD("_Z12DumpPlineTbljii() called");
    return 0;
}

/* Exported Object: g_slave_inv_ccm */
extern "C" __attribute__((visibility("default"))) void* g_slave_inv_ccm = NULL;

/* Demangled: StandbySyncAwbAlgo::~StandbySyncAwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgoD2Ev(void) {
    ALOGD("_ZN18StandbySyncAwbAlgoD2Ev() called");
    return 0;
}

/* Demangled: getAntiLog2(int) */
extern "C" __attribute__((visibility("default"))) int _Z11getAntiLog2i(void) {
    ALOGD("_Z11getAntiLog2i() called");
    return 0;
}

/* Demangled: getLutIndexEx(int, int&, int&, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13getLutIndexExiRiS_Pii(void) {
    ALOGD("_Z13getLutIndexExiRiS_Pii() called");
    return 0;
}

/* Demangled: GetStaticAverageY(SYNC_AE_AAO_BUFFER_INTO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _Z17GetStaticAverageYR30SYNC_AE_AAO_BUFFER_INTO_STRUCT(void) {
    ALOGD("_Z17GetStaticAverageYR30SYNC_AE_AAO_BUFFER_INTO_STRUCT() called");
    return 0;
}

/* Demangled: DumpStatBuff(unsigned int, SYNC_AE_AAO_BUFFER_INTO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _Z12DumpStatBuffjR30SYNC_AE_AAO_BUFFER_INTO_STRUCT(void) {
    ALOGD("_Z12DumpStatBuffjR30SYNC_AE_AAO_BUFFER_INTO_STRUCT() called");
    return 0;
}

/* Exported Object: g_u4ValidRatioMain */
extern "C" __attribute__((visibility("default"))) void* g_u4ValidRatioMain = NULL;

/* Demangled: AppSyncAwb::~AppSyncAwb() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwbD1Ev(void) {
    ALOGD("_ZN10AppSyncAwbD1Ev() called");
    return 0;
}

/* Demangled: calPpWpGainWeight(unsigned int, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z17calPpWpGainWeightjhh(void) {
    ALOGD("_Z17calPpWpGainWeightjhh() called");
    return 0;
}

/* Exported Object: gAdvPPInfo */
extern "C" __attribute__((visibility("default"))) void* gAdvPPInfo = NULL;

/* Exported Object: g_SubCCTRotXY */
extern "C" __attribute__((visibility("default"))) void* g_SubCCTRotXY = NULL;

/* Exported Object: g_master_inv_ccm */
extern "C" __attribute__((visibility("default"))) void* g_master_inv_ccm = NULL;

/* Exported Object: Ggaindiff_master */
extern "C" __attribute__((visibility("default"))) void* Ggaindiff_master = NULL;

/* Exported Object: Rgaindiff_master */
extern "C" __attribute__((visibility("default"))) void* Rgaindiff_master = NULL;

/* Demangled: AppSyncAe::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAe11getInstanceEv(void) {
    ALOGD("_ZN9AppSyncAe11getInstanceEv() called");
    return 0;
}

/* Demangled: GetAwbSyncDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z21GetAwbSyncDebugConfigv(void) {
    ALOGD("_Z21GetAwbSyncDebugConfigv() called");
    return 0;
}

/* Exported Object: vtable for MTKSyncAwb */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MTKSyncAwb = NULL;

/* Exported Object: gIsFixMapRatio */
extern "C" __attribute__((visibility("default"))) void* gIsFixMapRatio = NULL;

/* Demangled: StandbySyncAwbAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo11getInstanceEi(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo11getInstanceEi() called");
    return 0;
}

/* Exported Object: vtable for AppSyncAe */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AppSyncAe = NULL;

/* Demangled: StandbySyncAwbAlgo::UpdateLockInfo(AWB_GAIN_T, int, int, AWB_GAIN_T&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo14UpdateLockInfoE10AWB_GAIN_TiiRS0_RiS2_(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo14UpdateLockInfoE10AWB_GAIN_TiiRS0_RiS2_() called");
    return 0;
}

/* Demangled: setDebugTag(dbg_cam_n3d_param_3::N3D_AWB_DEBUG_INFO_T*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11setDebugTagPN19dbg_cam_n3d_param_320N3D_AWB_DEBUG_INFO_TEii(void) {
    ALOGD("_Z11setDebugTagPN19dbg_cam_n3d_param_320N3D_AWB_DEBUG_INFO_TEii() called");
    return 0;
}

/* Demangled: MTKSyncAe::SyncAeFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MTKSyncAe17SyncAeFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN9MTKSyncAe17SyncAeFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: GetAeSyncPolicy(unsigned int, SYNC_AE_INPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z15GetAeSyncPolicyjP25SYNC_AE_INPUT_INFO_STRUCT(void) {
    ALOGD("_Z15GetAeSyncPolicyjP25SYNC_AE_INPUT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Exported Object: g_aao_apply_awb_b */
extern "C" __attribute__((visibility("default"))) void* g_aao_apply_awb_b = NULL;

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: MTKSyncAwb::SyncAwbInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKSyncAwb11SyncAwbInitEPv(void) {
    ALOGD("_ZN10MTKSyncAwb11SyncAwbInitEPv() called");
    return 0;
}

/* Exported Object: gAWBSyncMethod */
extern "C" __attribute__((visibility("default"))) void* gAWBSyncMethod = NULL;

/* Exported Object: g_aao_apply_awb_g */
extern "C" __attribute__((visibility("default"))) void* g_aao_apply_awb_g = NULL;

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: AppSyncAe::SyncAeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAe10SyncAeInitEPv(void) {
    ALOGD("_ZN9AppSyncAe10SyncAeInitEPv() called");
    return 0;
}

/* Demangled: AppSyncAwb::AppSyncAwb() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppSyncAwbC2Ev(void) {
    ALOGD("_ZN10AppSyncAwbC2Ev() called");
    return 0;
}

/* Demangled: DIV_ROUND(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9DIV_ROUNDii(void) {
    ALOGD("_Z9DIV_ROUNDii() called");
    return 0;
}

/* Demangled: AppSyncAe::~AppSyncAe() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAeD1Ev(void) {
    ALOGD("_ZN9AppSyncAeD1Ev() called");
    return 0;
}

/* Demangled: CCMinverse(CC_MATRIX_STRUCT*, CC_MATRIX_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z10CCMinverseP16CC_MATRIX_STRUCTS0_(void) {
    ALOGD("_Z10CCMinverseP16CC_MATRIX_STRUCTS0_() called");
    return 0;
}

/* Exported Object: g_MainCalData */
extern "C" __attribute__((visibility("default"))) void* g_MainCalData = NULL;

/* Exported Object: g_rSyncWBSmoothBuf */
extern "C" __attribute__((visibility("default"))) void* g_rSyncWBSmoothBuf = NULL;

/* Exported Object: g_Sub_Y_LRef */
extern "C" __attribute__((visibility("default"))) void* g_Sub_Y_LRef = NULL;

/* Exported Object: g_u4SubRD_x */
extern "C" __attribute__((visibility("default"))) void* g_u4SubRD_x = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: calAAO_AWB_Mapping_Info(SYNC_AWB_LOCATION_TRANS_STRUCT*, SYNC_AWB_AAO_MAPPING_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z23calAAO_AWB_Mapping_InfoP30SYNC_AWB_LOCATION_TRANS_STRUCTP32SYNC_AWB_AAO_MAPPING_INFO_STRUCT(void) {
    ALOGD("_Z23calAAO_AWB_Mapping_InfoP30SYNC_AWB_LOCATION_TRANS_STRUCTP32SYNC_AWB_AAO_MAPPING_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: g_u4SubRD_y */
extern "C" __attribute__((visibility("default"))) void* g_u4SubRD_y = NULL;

/* Demangled: N3dAwbCoreGetDebugInfo(dbg_cam_n3d_param_3::N3D_AWB_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _Z22N3dAwbCoreGetDebugInfoPN19dbg_cam_n3d_param_320N3D_AWB_DEBUG_INFO_TE(void) {
    ALOGD("_Z22N3dAwbCoreGetDebugInfoPN19dbg_cam_n3d_param_320N3D_AWB_DEBUG_INFO_TE() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Exported Object: gMainCamFovRatio */
extern "C" __attribute__((visibility("default"))) void* gMainCamFovRatio = NULL;

/* Demangled: Calculate_SyncWB_weight_baseLV(SYNC_AWB_PREFER_TUNING_STRUCT&, SYNC_AWB_PREFER_TUNING_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _Z30Calculate_SyncWB_weight_baseLVR29SYNC_AWB_PREFER_TUNING_STRUCTS0_(void) {
    ALOGD("_Z30Calculate_SyncWB_weight_baseLVR29SYNC_AWB_PREFER_TUNING_STRUCTS0_() called");
    return 0;
}

/* Demangled: N3dAeCoreGetDebugInfo(dbg_cam_n3d_param_3::N3D_AE_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _Z21N3dAeCoreGetDebugInfoPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE(void) {
    ALOGD("_Z21N3dAeCoreGetDebugInfoPN19dbg_cam_n3d_param_319N3D_AE_DEBUG_INFO_TE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: g_aao_apply_awb_r */
extern "C" __attribute__((visibility("default"))) void* g_aao_apply_awb_r = NULL;

/* Demangled: reformatAWBGain(AWB_GAIN_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _Z15reformatAWBGainR10AWB_GAIN_TS0_(void) {
    ALOGD("_Z15reformatAWBGainR10AWB_GAIN_TS0_() called");
    return 0;
}

/* Exported Object: g_rSlave_CCM_Target */
extern "C" __attribute__((visibility("default"))) void* g_rSlave_CCM_Target = NULL;

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: g_master_aao_b */
extern "C" __attribute__((visibility("default"))) void* g_master_aao_b = NULL;

/* Demangled: CLAMP(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z5CLAMPiii(void) {
    ALOGD("_Z5CLAMPiii() called");
    return 0;
}

/* Exported Object: g_slave_ccm */
extern "C" __attribute__((visibility("default"))) void* g_slave_ccm = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: AppSyncAe::SyncAeMain(SYNC_AE_INPUT_STRUCT*, SYNC_AE_OUTPUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAe10SyncAeMainEP20SYNC_AE_INPUT_STRUCTP21SYNC_AE_OUTPUT_STRUCT(void) {
    ALOGD("_ZN9AppSyncAe10SyncAeMainEP20SYNC_AE_INPUT_STRUCTP21SYNC_AE_OUTPUT_STRUCT() called");
    return 0;
}

/* Exported Object: m_pNVRAMS */
extern "C" __attribute__((visibility("default"))) void* m_pNVRAMS = NULL;

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Exported Object: gSyncBlendRatio */
extern "C" __attribute__((visibility("default"))) void* gSyncBlendRatio = NULL;

/* Exported Object: g_master_aao_g */
extern "C" __attribute__((visibility("default"))) void* g_master_aao_g = NULL;

/* Exported Object: g_MainCCTMappingData */
extern "C" __attribute__((visibility("default"))) void* g_MainCCTMappingData = NULL;

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: AppSyncAe::AppSyncAe() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppSyncAeC2Ev(void) {
    ALOGD("_ZN9AppSyncAeC2Ev() called");
    return 0;
}

/* Exported Object: gOriAdvpp */
extern "C" __attribute__((visibility("default"))) void* gOriAdvpp = NULL;

/* Demangled: N3dAECoreMain(SYNC_AE_CAM_SCENARIO_ENUM, SYNC_AE_MODE_SELECTION, SYNC_AE_AAO_MAPPING_INFO_STRUCT*, SYNC_AE_INPUT_INFO_STRUCT*, SYNC_AE_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z13N3dAECoreMain25SYNC_AE_CAM_SCENARIO_ENUM22SYNC_AE_MODE_SELECTIONP31SYNC_AE_AAO_MAPPING_INFO_STRUCTP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z13N3dAECoreMain25SYNC_AE_CAM_SCENARIO_ENUM22SYNC_AE_MODE_SELECTIONP31SYNC_AE_AAO_MAPPING_INFO_STRUCTP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: g_master_aao_r */
extern "C" __attribute__((visibility("default"))) void* g_master_aao_r = NULL;

/* Exported Object: gSyncWB_main_LV */
extern "C" __attribute__((visibility("default"))) void* gSyncWB_main_LV = NULL;

/* Demangled: StandbySyncAwbAlgo::AssignAWBOutput(AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StandbySyncAwbAlgo15AssignAWBOutputE10AWB_GAIN_TRS0_(void) {
    ALOGD("_ZN18StandbySyncAwbAlgo15AssignAWBOutputE10AWB_GAIN_TRS0_() called");
    return 0;
}

/* Exported Object: gbInvCCMok */
extern "C" __attribute__((visibility("default"))) void* gbInvCCMok = NULL;

/* Exported Object: g_SubCCTMappingData */
extern "C" __attribute__((visibility("default"))) void* g_SubCCTMappingData = NULL;

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Exported Object: g_rApplyPreferGain */
extern "C" __attribute__((visibility("default"))) void* g_rApplyPreferGain = NULL;

/* Exported Object: vtable for StandbySyncAwbAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV21StandbySyncAwbAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: SyncAwbWhitePoint(SYNC_AWB_AAO_MAPPING_INFO_STRUCT*, SYNC_AWB_INPUT_INFO_STRUCT*, AWB_SYNC_RESULT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17SyncAwbWhitePointP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj(void) {
    ALOGD("_Z17SyncAwbWhitePointP32SYNC_AWB_AAO_MAPPING_INFO_STRUCTP26SYNC_AWB_INPUT_INFO_STRUCTR15AWB_SYNC_RESULTj() called");
    return 0;
}

/* Exported Object: gSyncWeighting */
extern "C" __attribute__((visibility("default"))) void* gSyncWeighting = NULL;

/* Exported Object: g_rSlave_AAO_Target */
extern "C" __attribute__((visibility("default"))) void* g_rSlave_AAO_Target = NULL;

/* Demangled: BayerBayerRegression(unsigned int, SYNC_AE_INPUT_INFO_STRUCT*, SYNC_AE_OUTPUT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20BayerBayerRegressionjP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT(void) {
    ALOGD("_Z20BayerBayerRegressionjP25SYNC_AE_INPUT_INFO_STRUCTP26SYNC_AE_OUTPUT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: gSyncWBPreferParam_lv */
extern "C" __attribute__((visibility("default"))) void* gSyncWBPreferParam_lv = NULL;

/* Exported Object: gprefer_lv_range */
extern "C" __attribute__((visibility("default"))) void* gprefer_lv_range = NULL;
