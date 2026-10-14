/*
 * Reverse-Engineered Source for: lib3a.af.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_af"

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
#include "lib3a_af.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NS3A::AfAlgo::CurveFit(int*, long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8CurveFitEPiPx(void) {
    ALOGD("_ZN4NS3A6AfAlgo8CurveFitEPiPx() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getBound(int&, int&, int&, int&, NS3A::AfAlgo::MPOINT const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8getBoundERiS1_S1_S1_PKNS0_6MPOINTEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo8getBoundERiS1_S1_S1_PKNS0_6MPOINTEi() called");
    return 0;
}

/* Demangled: NS3A::IPdAlgo::createInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IPdAlgo14createInstanceEii(void) {
    ALOGD("_ZN4NS3A7IPdAlgo14createInstanceEii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::my_proporty_get_int32(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo21my_proporty_get_int32EPKci(void) {
    ALOGD("_ZN4NS3A6AfAlgo21my_proporty_get_int32EPKci() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv() called");
    return 0;
}

/* Demangled: __aeabi_frsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_frsub(void) {
    ALOGD("__aeabi_frsub() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_MotorRange(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11_MotorRangeER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo11_MotorRangeER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::FrameWait(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo9FrameWaitEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo9FrameWaitEi() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::init(AF_INPUT_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo4initERK10AF_INPUT_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo4initERK10AF_INPUT_T() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::projectPD2Vec(unsigned int**, unsigned int**, unsigned short*, unsigned short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13projectPD2VecEPPjS2_PtS3_ii(void) {
    ALOGD("_ZN4NS3A6PdAlgo13projectPD2VecEPPjS2_PtS3_ii() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpPD(unsigned short**, unsigned short**, int&, int&, PD_AREA_T&, PD_AREA_T&, unsigned short*, unsigned short*, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS5_S1_S1_S1_S1_(void) {
    ALOGD("_ZN4NS3A6PdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS5_S1_S1_S1_S1_() called");
    return 0;
}

/* Exported Object: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::rotatePDInfo(PD_AREA_T&, unsigned short**, unsigned short**, unsigned short**, unsigned short**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo12rotatePDInfoER9PD_AREA_TPPtS4_S4_S4_(void) {
    ALOGD("_ZN4NS3A6PdAlgo12rotatePDInfoER9PD_AREA_TPPtS4_S4_S4_() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::pl_getSceneType() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo15pl_getSceneTypeEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo15pl_getSceneTypeEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::RestoreFocusWindowForBinning(PD_EXTRACT_INPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo28RestoreFocusWindowForBinningER18PD_EXTRACT_INPUT_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo28RestoreFocusWindowForBinningER18PD_EXTRACT_INPUT_T() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::ComputePrerequisite() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo19ComputePrerequisiteEv(void) {
    ALOGD("_ZN4NS3A6PdAlgo19ComputePrerequisiteEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::SetNonBinningRawSizeAndBlockNum(PD_CONFIG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo31SetNonBinningRawSizeAndBlockNumER11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo31SetNonBinningRawSizeAndBlockNumER11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::extractAllPD(int, PD_EXTRACT_INPUT_T**, PD_EXTRACT_DATA_T**, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_multiSourceSelection(int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo23hb_multiSourceSelectionERii(void) {
    ALOGD("_ZN4NS3A6AfAlgo23hb_multiSourceSelectionERii() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11getInstanceEi(void) {
    ALOGD("_ZN4NS3A6PdAlgo11getInstanceEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::updateFvExtract(AF_AREA_T const&, int, NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo15updateFvExtractERK9AF_AREA_TiNS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo15updateFvExtractERK9AF_AREA_TiNS_9FV_MODE_TE() called");
    return 0;
}

/* Exported Object: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Demangled: NS3A::AfAlgo::~AfAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A6AfAlgoD2Ev() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calPD(unsigned int*, unsigned int*, int, float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo5calPDEPjS1_iPfS2_S2_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo5calPDEPjS1_iPfS2_S2_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::ScaleMinBlockWidthAndHeight(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo27ScaleMinBlockWidthAndHeightERiS1_(void) {
    ALOGD("_ZN4NS3A6PdAlgo27ScaleMinBlockWidthAndHeightERiS1_() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: __nedf2 */
extern "C" __attribute__((visibility("default"))) int __nedf2(void) {
    ALOGD("__nedf2() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getCoringThr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo12getCoringThrEi(void) {
    ALOGD("_ZN4NS3A6PdAlgo12getCoringThrEi() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calFdAreaFV(AREA_t) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11calFdAreaFVE6AREA_t(void) {
    ALOGD("_ZN4NS3A6AfAlgo11calFdAreaFVE6AREA_t() called");
    return 0;
}

/* Exported Object: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: NS3A::DualPdAlgo::calConf(float, int, float, int, float, PD_AREA_T&, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo7calConfEfififR9PD_AREA_TiRi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo7calConfEfififR9PD_AREA_TiRi() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::initION(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo7initIONEiii(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo7initIONEiii() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::initVPU() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo7initVPUEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo7initVPUEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_ddiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_ddiv(void) {
    ALOGD("__aeabi_ddiv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::getVersion(PD_LIB_VERSION_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo10getVersionER16PD_LIB_VERSION_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo10getVersionER16PD_LIB_VERSION_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calGrad(int*, int*, PD_AREA_T&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo7calGradEPiS1_R9PD_AREA_TRi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo7calGradEPiS1_R9PD_AREA_TRi() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::CheckAndGenPDRatioFullMap() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo25CheckAndGenPDRatioFullMapEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo25CheckAndGenPDRatioFullMapEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::selectPDBlock(PD_AREA_T&, unsigned short*, unsigned short*, PD_AREA_T&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13selectPDBlockER9PD_AREA_TPtS3_S2_RiS4_(void) {
    ALOGD("_ZN4NS3A6PdAlgo13selectPDBlockER9PD_AREA_TPtS3_S2_RiS4_() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpSlope(PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11interpSlopeER9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo11interpSlopeER9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::compPdRatio(PD_AREA_T&, PD_AREA_T&, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11compPdRatioER9PD_AREA_TS2_Pt(void) {
    ALOGD("_ZN4NS3A6PdAlgo11compPdRatioER9PD_AREA_TS2_Pt() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::~PdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A6PdAlgoD2Ev() called");
    return 0;
}

/* Exported Object: gDPdDbgExifData */
extern "C" __attribute__((visibility("default"))) void* gDPdDbgExifData = NULL;

/* Exported Object: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: NS3A::AfAlgo::transMatrix(NS3A::_Matrix, NS3A::_Matrix) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11transMatrixENS_7_MatrixES1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo11transMatrixENS_7_MatrixES1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getWinParam(PD_EXTRACT_INPUT_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::releaseVPU() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo10releaseVPUEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo10releaseVPUEv() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_multiSourceTarget(int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T, NS3A::AfAlgo::HYBRID_TARGET_T&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo20hb_multiSourceTargetEiNS0_19HYBRID_SOURCE_CFG_TERNS0_15HYBRID_TARGET_TEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo20hb_multiSourceTargetEiNS0_19HYBRID_SOURCE_CFG_TERNS0_15HYBRID_TARGET_TEi() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NS3A::PdAlgo::rotatePDWin(PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11rotatePDWinER9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo11rotatePDWinER9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpSlope(PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11interpSlopeER9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11interpSlopeER9PD_AREA_T() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: PreparePDResult(int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _Z15PreparePDResultiiRNSt3__16vectorIhNS_9allocatorIhEEEE(void) {
    ALOGD("_Z15PreparePDResultiiRNSt3__16vectorIhNS_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_PrepareMiniAF() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14_PrepareMiniAFEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo14_PrepareMiniAFEv() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calPD2D(unsigned int*, unsigned int*, int, int*, int*, PD_AREA_T&, int, int, float&, float&, float&, float&, float&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo7calPD2DEPjS1_iPiS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo7calPD2DEPjS1_iPiS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri() called");
    return 0;
}

/* Demangled: __aeabi_dcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpge(void) {
    ALOGD("__aeabi_dcmpge() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getInfoForHybridAF(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo18getInfoForHybridAFEPi(void) {
    ALOGD("_ZN4NS3A6PdAlgo18getInfoForHybridAFEPi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calConf(float, float, int, float, int, PD_AREA_T&, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo7calConfEffifiR9PD_AREA_TiRi(void) {
    ALOGD("_ZN4NS3A6PdAlgo7calConfEffifiR9PD_AREA_TiRi() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgoD0Ev(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgoD0Ev() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::doMultiZoneRangeSelection(AFPD_BLOCK_T const*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo25doMultiZoneRangeSelectionEPK12AFPD_BLOCK_TPiS4_(void) {
    ALOGD("_ZN4NS3A6AfAlgo25doMultiZoneRangeSelectionEPK12AFPD_BLOCK_TPiS4_() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Exported Object: gPdDbgFullSizeUsed */
extern "C" __attribute__((visibility("default"))) void* gPdDbgFullSizeUsed = NULL;

/* Demangled: NS3A::AfAlgo::pl_checkAFWinOverY() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo18pl_checkAFWinOverYEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo18pl_checkAFWinOverYEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calFocusLensPos(PD_AREA_T&, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo15calFocusLensPosER9PD_AREA_Tfi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo15calFocusLensPosER9PD_AREA_Tfi() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::ZE_EnableExtract() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo16ZE_EnableExtractEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo16ZE_EnableExtractEv() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::getVersion(PD_LIB_VERSION_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo10getVersionER16PD_LIB_VERSION_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo10getVersionER16PD_LIB_VERSION_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::parseSlope(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10parseSlopeEPhi(void) {
    ALOGD("_ZN4NS3A6PdAlgo10parseSlopeEPhi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::corrCoef(unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo8corrCoefEPjS1_i(void) {
    ALOGD("_ZN4NS3A6PdAlgo8corrCoefEPjS1_i() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::rotatePDWin(PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11rotatePDWinER9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11rotatePDWinER9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::rotatePDWin(PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo11rotatePDWinER9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo11rotatePDWinER9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::inverseMatrix(NS3A::_Matrix, NS3A::_Matrix) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13inverseMatrixENS_7_MatrixES1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo13inverseMatrixENS_7_MatrixES1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::sumItrpData(unsigned int**, unsigned short*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11sumItrpDataEPPjPtiii(void) {
    ALOGD("_ZN4NS3A6PdAlgo11sumItrpDataEPPjPtiii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::printDamplog(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12printDamplogEj(void) {
    ALOGD("_ZN4NS3A6AfAlgo12printDamplogEj() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::getWinParam(PD_EXTRACT_INPUT_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::handleAllPD(int, PD_INPUT_T**, PD_OUTPUT_T**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T() called");
    return 0;
}

/* Exported Object: vtable for NS3A::DualPdAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A10DualPdAlgoE = NULL;

/* Demangled: NS3A::PdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo14setPDBlockInfoER11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo14setPDBlockInfoER11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::AFDebugFinalCurve(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo17AFDebugFinalCurveEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo17AFDebugFinalCurveEi() called");
    return 0;
}

/* Exported Object: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Exported Object: gPdDbgDataCnt */
extern "C" __attribute__((visibility("default"))) void* gPdDbgDataCnt = NULL;

/* Demangled: NS3A::DualPdAlgo::checkTuningParam() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo16checkTuningParamEv(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo16checkTuningParamEv() called");
    return 0;
}

/* Demangled: GenPDRatioFullMapV2(int, int, int, float*, int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned short*, int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z19GenPDRatioFullMapV2iiiPfiiiiiiiiiiiiiiPtiS0_(void) {
    ALOGD("_Z19GenPDRatioFullMapV2iiiPfiiiiiiiiiiiiiiPtiS0_() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: __aeabi_dcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpgt(void) {
    ALOGD("__aeabi_dcmpgt() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::runAFTempCali(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13runAFTempCaliEj(void) {
    ALOGD("_ZN4NS3A6AfAlgo13runAFTempCaliEj() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calAdpCompTiming(unsigned long long, unsigned long long, int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo16calAdpCompTimingEyyiiPiS1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo16calAdpCompTimingEyyiiPiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::extractPDPixel(void*, PD_AREA_T&, unsigned short**, unsigned short**, unsigned short**, unsigned short**, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_S5_S5_i(void) {
    ALOGD("_ZN4NS3A6PdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_S5_S5_i() called");
    return 0;
}

/* Demangled: CalPtrBuffer(MEM_INFO_BUFFER*, unsigned char*, unsigned char*, int, int, int, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _Z12CalPtrBufferP15MEM_INFO_BUFFERPhS1_iiijc(void) {
    ALOGD("_Z12CalPtrBufferP15MEM_INFO_BUFFERPhS1_iiijc() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::CheckMZConvergeOrReverse(int, int, NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo24CheckMZConvergeOrReverseEiiNS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo24CheckMZConvergeOrReverseEiiNS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::oneDpolyFit(int, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11oneDpolyFitEiPdS1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo11oneDpolyFitEiPdS1_() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::multiMatrix(NS3A::_Matrix, NS3A::_Matrix, NS3A::_Matrix) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11multiMatrixENS_7_MatrixES1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo11multiMatrixENS_7_MatrixES1_S1_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::setCoefInit() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11setCoefInitEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo11setCoefInitEv() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_UpdateCamInfoToExif(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo20_UpdateCamInfoToExifER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo20_UpdateCamInfoToExifER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: __aeabi_fadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_fadd(void) {
    ALOGD("__aeabi_fadd() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_doPdSelect(NS3A::AfAlgo::AF_STATUS_T, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13hb_doPdSelectENS0_11AF_STATUS_TERiS2_S2_S2_(void) {
    ALOGD("_ZN4NS3A6AfAlgo13hb_doPdSelectENS0_11AF_STATUS_TERiS2_S2_S2_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::PdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A6PdAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::setAFPos(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8setAFPosEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo8setAFPosEi() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo15destroyInstanceEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getCameraAngle() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14getCameraAngleEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo14getCameraAngleEv() called");
    return 0;
}

/* Exported Object: vtable for NS3A::PdAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A6PdAlgoE = NULL;

/* Demangled: AddRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&) */
extern "C" __attribute__((visibility("default"))) int _Z7AddRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_(void) {
    ALOGD("_Z7AddRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_() called");
    return 0;
}

/* Demangled: __gtdf2 */
extern "C" __attribute__((visibility("default"))) int __gtdf2(void) {
    ALOGD("__gtdf2() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_SetSyncMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12_SetSyncModeEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo12_SetSyncModeEi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_doPdMerge(NS3A::AfAlgo::AF_STATUS_T, int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12hb_doPdMergeENS0_11AF_STATUS_TEiRiS2_S2_S2_(void) {
    ALOGD("_ZN4NS3A6AfAlgo12hb_doPdMergeENS0_11AF_STATUS_TEiRiS2_S2_S2_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calLUTHWDynamicTH(int, long long*, int, long long*, long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo17calLUTHWDynamicTHEiPxiS1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo17calLUTHWDynamicTHEiPxiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getPDOffset(PD_AREA_T&, PD_AREA_T&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11getPDOffsetER9PD_AREA_TS2_RiS3_(void) {
    ALOGD("_ZN4NS3A6PdAlgo11getPDOffsetER9PD_AREA_TS2_RiS3_() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::alignPDWin(PD_AREA_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo10alignPDWinER9PD_AREA_TS2_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo10alignPDWinER9PD_AREA_TS2_() called");
    return 0;
}

/* Demangled: CalPtrDualPD(VPU_PROC_INFO const*, unsigned char**, unsigned char**, unsigned char*, unsigned char*, VPU_MEM_INFO*) */
extern "C" __attribute__((visibility("default"))) int _Z12CalPtrDualPDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO(void) {
    ALOGD("_Z12CalPtrDualPDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::AfAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgoC1Ev(void) {
    ALOGD("_ZN4NS3A6AfAlgoC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<_ROIResult, std::__1::allocator<_ROIResult> >::__push_back_slow_path<_ROIResult const&>(_ROIResult const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI10_ROIResultNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI10_ROIResultNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::ComputeBinningScale(PD_CONFIG_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo19ComputeBinningScaleERK11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo19ComputeBinningScaleERK11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::sumPD(unsigned int**, unsigned int**, int*, PD_AREA_T&, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo5sumPDEPPjS2_PiR9PD_AREA_TPtS6_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo5sumPDEPPjS2_PiR9PD_AREA_TPtS6_() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::updateHwConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14updateHwConfigEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo14updateHwConfigEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgoD0Ev(void) {
    ALOGD("_ZN4NS3A10DualPdAlgoD0Ev() called");
    return 0;
}

/* Demangled: __ltdf2 */
extern "C" __attribute__((visibility("default"))) int __ltdf2(void) {
    ALOGD("__ltdf2() called");
    return 0;
}

/* Demangled: __fixunsdfsi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfsi(void) {
    ALOGD("__fixunsdfsi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::CheckGSumCurve(int*, long long*, long long*, long long*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14CheckGSumCurveEPiPxS2_S2_ii(void) {
    ALOGD("_ZN4NS3A6AfAlgo14CheckGSumCurveEPiPxS2_S2_ii() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::DualPdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A10DualPdAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_GetMain2CalibPos(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo17_GetMain2CalibPosER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo17_GetMain2CalibPosER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calSrchRng(float, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10calSrchRngEfiRiS1_(void) {
    ALOGD("_ZN4NS3A6PdAlgo10calSrchRngEfiRiS1_() called");
    return 0;
}

/* Exported Object: gPdDbgDensityX */
extern "C" __attribute__((visibility("default"))) void* gPdDbgDensityX = NULL;

/* Exported Object: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgoD1Ev() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::AFDebug(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo7AFDebugEjji(void) {
    ALOGD("_ZN4NS3A6AfAlgo7AFDebugEjji() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NS3A::AfAlgo::ThermalCalibPos() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo15ThermalCalibPosEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo15ThermalCalibPosEv() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getMinMax(int&, int&, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo9getMinMaxERiS1_PKii(void) {
    ALOGD("_ZN4NS3A6AfAlgo9getMinMaxERiS1_PKii() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calGrad(unsigned short*, unsigned short*, PD_AREA_T&, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo7calGradEPtS1_R9PD_AREA_TiiRi(void) {
    ALOGD("_ZN4NS3A6PdAlgo7calGradEPtS1_R9PD_AREA_TiiRi() called");
    return 0;
}

/* Demangled: MergeRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&) */
extern "C" __attribute__((visibility("default"))) int _Z9MergeRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_(void) {
    ALOGD("_Z9MergeRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Exported Object: gPdDbgPitchX */
extern "C" __attribute__((visibility("default"))) void* gPdDbgPitchX = NULL;

/* Demangled: NS3A::AfAlgo::_exif_addDualSyncTag() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo20_exif_addDualSyncTagEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo20_exif_addDualSyncTagEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getDebugInfo(AF_DEBUG_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo12getDebugInfoER15AF_DEBUG_INFO_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo12getDebugInfoER15AF_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: __aeabi_d2uiz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2uiz(void) {
    ALOGD("__aeabi_d2uiz() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_isPLFindPeak() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo15hb_isPLFindPeakEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo15hb_isPLFindPeakEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo15destroyInstanceEv(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<_QueueInfo, std::__1::allocator<_QueueInfo> >::__push_back_slow_path<_QueueInfo const&>(_QueueInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI10_QueueInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI10_QueueInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: PreparePDInfo(std::__1::vector<PD_ROI_INFO_T_, std::__1::allocator<PD_ROI_INFO_T_> >&, int, int, unsigned char*, unsigned int, unsigned short*, unsigned int, char, char) */
extern "C" __attribute__((visibility("default"))) int _Z13PreparePDInfoRNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEEEiiPhjPtjcc(void) {
    ALOGD("_Z13PreparePDInfoRNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEEEiiPhjPtjcc() called");
    return 0;
}

/* Exported Object: vtable for NS3A::VPUPdAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A9VPUPdAlgoE = NULL;

/* Demangled: GenPDRatioFullMapV2(int, int, int, unsigned short*, int, int, int, int, int, int, int, int, int, int, int, int, unsigned short*, int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z19GenPDRatioFullMapV2iiiPtiiiiiiiiiiiiS_iS_(void) {
    ALOGD("_Z19GenPDRatioFullMapV2iiiPtiiiiiiiiiiiiS_iS_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getHW_TH(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8getHW_THENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo8getHW_THENS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::initFvExtract() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13initFvExtractEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo13initFvExtractEv() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_SetSyncInfo(int, AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12_SetSyncInfoEiR13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo12_SetSyncInfoEiR13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: AddRect(PD_AREA_T, PD_AREA_T) */
extern "C" __attribute__((visibility("default"))) int _Z7AddRect9PD_AREA_TS_(void) {
    ALOGD("_Z7AddRect9PD_AREA_TS_() called");
    return 0;
}

/* Exported Object: vtable for NS3A::AfAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A6AfAlgoE = NULL;

/* Demangled: NS3A::AfAlgo::updateCentralZEFvExtract(int, NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo24updateCentralZEFvExtractEiNS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo24updateCentralZEFvExtractEiNS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::parseSlope(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo10parseSlopeEPhi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo10parseSlopeEPhi() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::corrCoef(unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo8corrCoefEPjS1_i(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo8corrCoefEPjS1_i() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo15destroyInstanceEv(void) {
    ALOGD("_ZN4NS3A6PdAlgo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::VPUPdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: MergeNeighborRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17MergeNeighborRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_iii(void) {
    ALOGD("_Z17MergeNeighborRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_iii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getGMR(int&, int&, int&, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo6getGMRERiS1_S1_S1_S1_S1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo6getGMRERiS1_S1_S1_S1_S1_S1_() called");
    return 0;
}

/* Exported Object: vtable for NS3A::IPdAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A7IPdAlgoE = NULL;

/* Demangled: NS3A::PdAlgo::interpMap(unsigned short**, int, PD_AREA_T&, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo9interpMapEPPtiR9PD_AREA_TS1_S1_(void) {
    ALOGD("_ZN4NS3A6PdAlgo9interpMapEPPtiR9PD_AREA_TS1_S1_() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_CalibAFPos(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11_CalibAFPosER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo11_CalibAFPosER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::AfAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgoC2Ev(void) {
    ALOGD("_ZN4NS3A6AfAlgoC2Ev() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::identClipPxl(unsigned short*, unsigned short*, PD_AREA_T&, int&, unsigned short**, unsigned short**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo12identClipPxlEPtS1_R9PD_AREA_TRiPS1_S5_(void) {
    ALOGD("_ZN4NS3A6PdAlgo12identClipPxlEPtS1_R9PD_AREA_TRiPS1_S5_() called");
    return 0;
}

/* Demangled: CalPtr2by1PD(VPU_PROC_INFO const*, unsigned char**, unsigned char**, unsigned char*, unsigned char*, VPU_MEM_INFO*) */
extern "C" __attribute__((visibility("default"))) int _Z12CalPtr2by1PDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO(void) {
    ALOGD("_Z12CalPtr2by1PDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpPDLine(unsigned short*, int, unsigned short*, unsigned short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo12interpPDLineEPtiS1_S1_ii(void) {
    ALOGD("_ZN4NS3A6PdAlgo12interpPDLineEPtiS1_S1_ii() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calPD(unsigned int*, unsigned int*, int, float&, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo5calPDEPjS1_iRfS2_S2_(void) {
    ALOGD("_ZN4NS3A6PdAlgo5calPDEPjS1_iRfS2_S2_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getFDAFValue(int, NS3A::AfAlgo::AF_FDLM_EXTRACT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12getFDAFValueEiRNS0_17AF_FDLM_EXTRACT_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo12getFDAFValueEiRNS0_17AF_FDLM_EXTRACT_TE() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A10DualPdAlgoD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_multiSourceMerge() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo19hb_multiSourceMergeEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo19hb_multiSourceMergeEv() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgoD2Ev() called");
    return 0;
}

/* Demangled: CalPtrBase(MEM_INFO_BASE*, unsigned char*, unsigned char*, unsigned int, int, int, int, int, int, int, char) */
extern "C" __attribute__((visibility("default"))) int _Z10CalPtrBaseP13MEM_INFO_BASEPhS1_jiiiiiic(void) {
    ALOGD("_Z10CalPtrBaseP13MEM_INFO_BASEPhS1_jiiiiiic() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_CalSyncPos(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11_CalSyncPosER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo11_CalSyncPosER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calPD2D(unsigned int*, unsigned int*, PD_AREA_T&, int, int, float&, float&, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo7calPD2DEPjS1_R9PD_AREA_TiiRfS4_S4_S4_(void) {
    ALOGD("_ZN4NS3A6PdAlgo7calPD2DEPjS1_R9PD_AREA_TiiRfS4_S4_S4_() called");
    return 0;
}

/* Exported Object: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE16EE = NULL;

/* Demangled: NS3A::DualPdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo14setPDBlockInfoER11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo14setPDBlockInfoER11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calFocusLensPosConf(float, float, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo19calFocusLensPosConfEffiRi(void) {
    ALOGD("_ZN4NS3A6PdAlgo19calFocusLensPosConfEffiRi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::tuningHwConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14tuningHwConfigEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo14tuningHwConfigEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::getPDBlock(PD_AREA_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo10getPDBlockER9PD_AREA_TS2_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo10getPDBlockER9PD_AREA_TS2_() called");
    return 0;
}

/* Demangled: GenPDRatioFullMap(int, int, int, float*, int, int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z17GenPDRatioFullMapiiiPfiiPt(void) {
    ALOGD("_Z17GenPDRatioFullMapiiiPfiiPt() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_LensFollowPos(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14_LensFollowPosEiiiii(void) {
    ALOGD("_ZN4NS3A6AfAlgo14_LensFollowPosEiiiii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::CheckFailPosByPD(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo16CheckFailPosByPDEiPi(void) {
    ALOGD("_ZN4NS3A6AfAlgo16CheckFailPosByPDEiPi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calSpot(unsigned int, unsigned int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo7calSpotEjjRiS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo7calSpotEjjRiS1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calSubStats(NS3A::AfAlgo::AF_SUBSTAT_CAL_OUT_T&, NS3A::AfAlgo::AF_SUBSTAT_CAL_IN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11calSubStatsERNS0_20AF_SUBSTAT_CAL_OUT_TENS0_19AF_SUBSTAT_CAL_IN_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo11calSubStatsERNS0_20AF_SUBSTAT_CAL_OUT_TENS0_19AF_SUBSTAT_CAL_IN_TE() called");
    return 0;
}

/* Exported Object: gPdDbgLastLensPos */
extern "C" __attribute__((visibility("default"))) void* gPdDbgLastLensPos = NULL;

/* Demangled: RotatePitchPos(char, char, short*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14RotatePitchPosccPsiiii(void) {
    ALOGD("_Z14RotatePitchPosccPsiiii() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::clipValue(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo9clipValueEiii(void) {
    ALOGD("_ZN4NS3A6AfAlgo9clipValueEiii() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getVersion(PD_LIB_VERSION_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10getVersionER16PD_LIB_VERSION_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo10getVersionER16PD_LIB_VERSION_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calPD2D(unsigned int*, unsigned int*, int, unsigned short*, unsigned short*, PD_AREA_T&, int, int, float&, float&, float&, float&, float&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo7calPD2DEPjS1_iPtS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri(void) {
    ALOGD("_ZN4NS3A6PdAlgo7calPD2DEPjS1_iPtS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::LensZoomEffectCalib(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo19LensZoomEffectCalibEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo19LensZoomEffectCalibEi() called");
    return 0;
}

/* Exported Object: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: NS3A::PdAlgo::alignPDWin(PD_AREA_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10alignPDWinER9PD_AREA_TS2_(void) {
    ALOGD("_ZN4NS3A6PdAlgo10alignPDWinER9PD_AREA_TS2_() called");
    return 0;
}

/* Demangled: __divdf3 */
extern "C" __attribute__((visibility("default"))) int __divdf3(void) {
    ALOGD("__divdf3() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpPD(unsigned int**, unsigned int**, int&, int&, int, int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo8interpPDEPPjS2_RiS3_iiS1_S1_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo8interpPDEPPjS2_RiS3_iiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpVec(unsigned int*, int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo9interpVecEPjiS1_i(void) {
    ALOGD("_ZN4NS3A6PdAlgo9interpVecEPjiS1_i() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: __muldf3 */
extern "C" __attribute__((visibility("default"))) int __muldf3(void) {
    ALOGD("__muldf3() called");
    return 0;
}

/* Demangled: std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >::insert(std::__1::__wrap_iter<PD_MERGED_AREA_T_ const*>, PD_MERGED_AREA_T_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE6insertENS_11__wrap_iterIPKS1_EERS6_(void) {
    ALOGD("_ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE6insertENS_11__wrap_iterIPKS1_EERS6_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getThreshold(long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12getThresholdExxxx(void) {
    ALOGD("_ZN4NS3A6AfAlgo12getThresholdExxxx() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::ScaleFocusWindowForBinning(PD_EXTRACT_INPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo26ScaleFocusWindowForBinningER18PD_EXTRACT_INPUT_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo26ScaleFocusWindowForBinningER18PD_EXTRACT_INPUT_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::genPdRatioFullMap() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo17genPdRatioFullMapEv(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo17genPdRatioFullMapEv() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getPDBlock(PD_AREA_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10getPDBlockER9PD_AREA_TS2_(void) {
    ALOGD("_ZN4NS3A6PdAlgo10getPDBlockER9PD_AREA_TS2_() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::pl_dumpData(__sFILE*, void*, unsigned int, NS3A::ROI_T const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11pl_dumpDataEP7__sFILEPvjRKNS_5ROI_TEj(void) {
    ALOGD("_ZN4NS3A6AfAlgo11pl_dumpDataEP7__sFILEPvjRKNS_5ROI_TEj() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A10DualPdAlgoD2Ev() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::chcekVPUCompatibility() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo21chcekVPUCompatibilityEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo21chcekVPUCompatibilityEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calConfidenceLevel(PD_AREA_T&, float, float, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo18calConfidenceLevelER9PD_AREA_Tffii(void) {
    ALOGD("_ZN4NS3A6PdAlgo18calConfidenceLevelER9PD_AREA_Tffii() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::applyGaussFilt(unsigned int*, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo14applyGaussFiltEPjR9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo14applyGaussFiltEPjR9PD_AREA_T() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getPostCompOffset(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo17getPostCompOffsetEiiij(void) {
    ALOGD("_ZN4NS3A6AfAlgo17getPostCompOffsetEiiij() called");
    return 0;
}

/* Demangled: CalBufferCheckSum4Align(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z23CalBufferCheckSum4AlignPvi(void) {
    ALOGD("_Z23CalBufferCheckSum4AlignPvi() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: __aeabi_cdcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmple(void) {
    ALOGD("__aeabi_cdcmple() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11getInstanceEi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11getInstanceEi() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::countStrangePair(unsigned short*, unsigned short*, PD_AREA_T&, int, int*, int*, int**, int**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo16countStrangePairEPtS1_R9PD_AREA_TiPiS4_PS4_S5_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo16countStrangePairEPtS1_R9PD_AREA_TiPiS4_PS4_S5_() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::StoreProperties() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo15StorePropertiesEv(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo15StorePropertiesEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpPDLine(unsigned short*, int, unsigned short*, int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo12interpPDLineEPtiS1_iS1_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo12interpPDLineEPtiS1_iS1_() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_isFsOnPL(long long const*, long long const*, long long&, long long&, long long&, long long&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11hb_isFsOnPLEPKxS2_RxS3_S3_S3_i(void) {
    ALOGD("_ZN4NS3A6AfAlgo11hb_isFsOnPLEPKxS2_RxS3_S3_S3_i() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::checkTuningParam() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo16checkTuningParamEv(void) {
    ALOGD("_ZN4NS3A6PdAlgo16checkTuningParamEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::evalPDBlock(PD_AREA_T&, unsigned short*, unsigned short*, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11evalPDBlockER9PD_AREA_TPtS3_iPiS4_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11evalPDBlockER9PD_AREA_TPtS3_iPiS4_() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_updatePdSelSpatialTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo24hb_updatePdSelSpatialTblEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo24hb_updatePdSelSpatialTblEv() called");
    return 0;
}

/* Demangled: __gedf2 */
extern "C" __attribute__((visibility("default"))) int __gedf2(void) {
    ALOGD("__gedf2() called");
    return 0;
}

/* Exported Object: gPdDbgData */
extern "C" __attribute__((visibility("default"))) void* gPdDbgData = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: GenPDRatioFullMap(int, int, int, unsigned short*, int, int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z17GenPDRatioFullMapiiiPtiiS_(void) {
    ALOGD("_Z17GenPDRatioFullMapiiiPtiiS_() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::calFocusLensPos(float, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo15calFocusLensPosEffi(void) {
    ALOGD("_ZN4NS3A6PdAlgo15calFocusLensPosEffi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpMapLine(unsigned short*, int, unsigned short*, unsigned short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13interpMapLineEPtiS1_S1_ii(void) {
    ALOGD("_ZN4NS3A6PdAlgo13interpMapLineEPtiS1_S1_ii() called");
    return 0;
}

/* Demangled: __ledf2 */
extern "C" __attribute__((visibility("default"))) int __ledf2(void) {
    ALOGD("__ledf2() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: __floatunsisf */
extern "C" __attribute__((visibility("default"))) int __floatunsisf(void) {
    ALOGD("__floatunsisf() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_isPLScene(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12hb_isPLSceneEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo12hb_isPLSceneEi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getRotatePosBuff(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo16getRotatePosBuffEPiS1_i(void) {
    ALOGD("_ZN4NS3A6PdAlgo16getRotatePosBuffEPiS1_i() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void) {
    ALOGD("_ZN4NS3A6PdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::findPeakMZ(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo10findPeakMZENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo10findPeakMZENS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_PrintSyncLog(int, AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13_PrintSyncLogEiR13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo13_PrintSyncLogEiR13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3A::AfAlgo::CheckRiskExt() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12CheckRiskExtEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo12CheckRiskExtEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getBlkFromWin(unsigned short**, unsigned short*, PD_AREA_T&, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13getBlkFromWinEPPtS1_R9PD_AREA_TS4_(void) {
    ALOGD("_ZN4NS3A6PdAlgo13getBlkFromWinEPPtS1_R9PD_AREA_TS4_() called");
    return 0;
}

/* Exported Object: gPdDbgExifData */
extern "C" __attribute__((visibility("default"))) void* gPdDbgExifData = NULL;

/* Demangled: __cmpdf2 */
extern "C" __attribute__((visibility("default"))) int __cmpdf2(void) {
    ALOGD("__cmpdf2() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::PdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A6PdAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Exported Object: gDPdDbgExifDataCnt */
extern "C" __attribute__((visibility("default"))) void* gDPdDbgExifDataCnt = NULL;

/* Demangled: CalBufferCheckSum4AlignTmp(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z26CalBufferCheckSum4AlignTmpPvi(void) {
    ALOGD("_Z26CalBufferCheckSum4AlignTmpPvi() called");
    return 0;
}

/* Demangled: __addsf3 */
extern "C" __attribute__((visibility("default"))) int __addsf3(void) {
    ALOGD("__addsf3() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::sumItrpMap(unsigned short**, unsigned short*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10sumItrpMapEPPtS1_iii(void) {
    ALOGD("_ZN4NS3A6PdAlgo10sumItrpMapEPPtS1_iii() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::updatePDParam(PD_NVRAM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13updatePDParamER10PD_NVRAM_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo13updatePDParamER10PD_NVRAM_T() called");
    return 0;
}

/* Exported Object: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::parseCaliData(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo13parseCaliDataEPhi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo13parseCaliDataEPhi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::parseFocus(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo10parseFocusEPhi(void) {
    ALOGD("_ZN4NS3A6PdAlgo10parseFocusEPhi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_fsROISelect(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14hb_fsROISelectERi(void) {
    ALOGD("_ZN4NS3A6AfAlgo14hb_fsROISelectERi() called");
    return 0;
}

/* Demangled: void std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >::__push_back_slow_path<PD_MERGED_AREA_T_ const&>(PD_MERGED_AREA_T_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: gPdDbgSceneCnt */
extern "C" __attribute__((visibility("default"))) void* gPdDbgSceneCnt = NULL;

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: PrintMRect(PD_MERGED_AREA_T_&) */
extern "C" __attribute__((visibility("default"))) int _Z10PrintMRectR17PD_MERGED_AREA_T_(void) {
    ALOGD("_Z10PrintMRectR17PD_MERGED_AREA_T_() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: CalPtrResult(MEM_INFO_RESULT*, unsigned char*, unsigned char*, int, int, char) */
extern "C" __attribute__((visibility("default"))) int _Z12CalPtrResultP15MEM_INFO_RESULTPhS1_iic(void) {
    ALOGD("_Z12CalPtrResultP15MEM_INFO_RESULTPhS1_iic() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::sumPDData(int**, unsigned short*, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo9sumPDDataEPPiPtR9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo9sumPDDataEPPiPtR9PD_AREA_T() called");
    return 0;
}

/* Demangled: RotateData(char, char, unsigned short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z10RotateDataccPtii(void) {
    ALOGD("_Z10RotateDataccPtii() called");
    return 0;
}

/* Demangled: __aeabi_ui2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2f(void) {
    ALOGD("__aeabi_ui2f() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpPDLineUpSample(unsigned int*, int, unsigned int*, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo20interpPDLineUpSampleEPjiS1_iji(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo20interpPDLineUpSampleEPjiS1_iji() called");
    return 0;
}

/* Demangled: __aeabi_cdcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmpeq(void) {
    ALOGD("__aeabi_cdcmpeq() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::interpRatio(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11interpRatioEii(void) {
    ALOGD("_ZN4NS3A6PdAlgo11interpRatioEii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_GetSyncInfo(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo12_GetSyncInfoER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo12_GetSyncInfoER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::LensZoomEffectCorr() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo18LensZoomEffectCorrEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo18LensZoomEffectCorrEv() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::parseLRDiff(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11parseLRDiffEPhi(void) {
    ALOGD("_ZN4NS3A6PdAlgo11parseLRDiffEPhi() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: __aeabi_dcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmple(void) {
    ALOGD("__aeabi_dcmple() called");
    return 0;
}

/* Exported Object: gPdDbgStartLog */
extern "C" __attribute__((visibility("default"))) void* gPdDbgStartLog = NULL;

/* Demangled: NS3A::DualPdAlgo::getDebugInfo(AF_DEBUG_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo12getDebugInfoER15AF_DEBUG_INFO_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo12getDebugInfoER15AF_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getPDSize(PD_AREA_T&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo9getPDSizeER9PD_AREA_TRiS3_(void) {
    ALOGD("_ZN4NS3A6PdAlgo9getPDSizeER9PD_AREA_TRiS3_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::pl_updateStats(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14pl_updateStatsEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo14pl_updateStatsEi() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calStats() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8calStatsEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo8calStatsEv() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_getPosRecBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo13_getPosRecBufEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo13_getPosRecBufEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<PD_ROI_INFO_T_, std::__1::allocator<PD_ROI_INFO_T_> >::__push_back_slow_path<PD_ROI_INFO_T_ const&>(PD_ROI_INFO_T_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_dmul */
extern "C" __attribute__((visibility("default"))) int __aeabi_dmul(void) {
    ALOGD("__aeabi_dmul() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::CheckExtCurveAbnormal(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo21CheckExtCurveAbnormalEi(void) {
    ALOGD("_ZN4NS3A6AfAlgo21CheckExtCurveAbnormalEi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::sumPD(unsigned int**, unsigned int**, int&, PD_AREA_T&, PD_AREA_T&, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo5sumPDEPPjS2_RiR9PD_AREA_TS5_PtS6_(void) {
    ALOGD("_ZN4NS3A6PdAlgo5sumPDEPPjS2_RiR9PD_AREA_TS5_PtS6_() called");
    return 0;
}

/* Demangled: ion_cache_invalid_range_va(int, int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26ion_cache_invalid_range_vaiiPvj(void) {
    ALOGD("_Z26ion_cache_invalid_range_vaiiPvj() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::pl_setGSAT() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo10pl_setGSATEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo10pl_setGSATEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpRatio(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11interpRatioEii(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11interpRatioEii() called");
    return 0;
}

/* Exported Object: gPdDbgExifDataCnt */
extern "C" __attribute__((visibility("default"))) void* gPdDbgExifDataCnt = NULL;

/* Demangled: NS3A::AfAlgo::getLmMap(NS3A::AfAlgo::AF_FDLM_EXTRACT_T&, AREA_t const&, int, AF_AREA_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo8getLmMapERNS0_17AF_FDLM_EXTRACT_TERK6AREA_tiRK9AF_AREA_T(void) {
    ALOGD("_ZN4NS3A6AfAlgo8getLmMapERNS0_17AF_FDLM_EXTRACT_TERK6AREA_tiRK9AF_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::~PdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgoD0Ev(void) {
    ALOGD("_ZN4NS3A6PdAlgoD0Ev() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::releaseION() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo10releaseIONEv(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo10releaseIONEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpPD(unsigned short**, unsigned short**, int&, int&, PD_AREA_T&, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS1_S1_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS1_S1_() called");
    return 0;
}

/* Exported Object: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_dcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmplt(void) {
    ALOGD("__aeabi_dcmplt() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::applyGaussFilt(unsigned int*, PD_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo14applyGaussFiltEPjR9PD_AREA_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo14applyGaussFiltEPjR9PD_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::compPdRatio(PD_AREA_T&, PD_AREA_T&, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11compPdRatioER9PD_AREA_TS2_Pt(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11compPdRatioER9PD_AREA_TS2_Pt() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::DualPdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A10DualPdAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_getPdSelDistanceTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo22hb_getPdSelDistanceTblEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo22hb_getPdSelDistanceTblEv() called");
    return 0;
}

/* Demangled: __subsf3 */
extern "C" __attribute__((visibility("default"))) int __subsf3(void) {
    ALOGD("__subsf3() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::AFDebug(unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo7AFDebugEjjii(void) {
    ALOGD("_ZN4NS3A6AfAlgo7AFDebugEjjii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::getAFValue(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo10getAFValueENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A6AfAlgo10getAFValueENS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_PDResultClassify(int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo19hb_PDResultClassifyERiS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A6AfAlgo19hb_PDResultClassifyERiS1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::getPixelFromUnpackRaw(void*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo21getPixelFromUnpackRawEPviii(void) {
    ALOGD("_ZN4NS3A6PdAlgo21getPixelFromUnpackRawEPviii() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Exported Object: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::parseCaliData(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo13parseCaliDataEPhi(void) {
    ALOGD("_ZN4NS3A6PdAlgo13parseCaliDataEPhi() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::rotatePDInfo(PD_AREA_T&, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo12rotatePDInfoER9PD_AREA_TPtS3_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo12rotatePDInfoER9PD_AREA_TPtS3_() called");
    return 0;
}

/* Demangled: __floatsisf */
extern "C" __attribute__((visibility("default"))) int __floatsisf(void) {
    ALOGD("__floatsisf() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::get1DInterpolation(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo18get1DInterpolationEiiiii(void) {
    ALOGD("_ZN4NS3A6AfAlgo18get1DInterpolationEiiiii() called");
    return 0;
}

/* Demangled: CalPDInfoBytes(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14CalPDInfoBytesiii(void) {
    ALOGD("_Z14CalPDInfoBytesiii() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calSrchRng(PD_AREA_T&, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo10calSrchRngER9PD_AREA_TiRiS3_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo10calSrchRngER9PD_AREA_TiRiS3_() called");
    return 0;
}

/* Demangled: __aeabi_i2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2f(void) {
    ALOGD("__aeabi_i2f() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::_MiniAFSeek() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo11_MiniAFSeekEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo11_MiniAFSeekEv() called");
    return 0;
}

/* Demangled: std::__1::vector<TimeProfListItem, std::__1::allocator<TimeProfListItem> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI16TimeProfListItemNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI16TimeProfListItemNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::interpVec(unsigned int*, int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo9interpVecEPjiS1_i(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo9interpVecEPjiS1_i() called");
    return 0;
}

/* Demangled: __aeabi_fsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_fsub(void) {
    ALOGD("__aeabi_fsub() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: UnpackVPUProcINFO2(void*, unsigned int, VPU_PROC_INFO**) */
extern "C" __attribute__((visibility("default"))) int _Z18UnpackVPUProcINFO2PvjPP13VPU_PROC_INFO(void) {
    ALOGD("_Z18UnpackVPUProcINFO2PvjPP13VPU_PROC_INFO() called");
    return 0;
}

/* Demangled: CalPtrROI(MEM_INFO_ROI*, unsigned char*, unsigned char*, int, char) */
extern "C" __attribute__((visibility("default"))) int _Z9CalPtrROIP12MEM_INFO_ROIPhS1_ic(void) {
    ALOGD("_Z9CalPtrROIP12MEM_INFO_ROIPhS1_ic() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::~AfAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A6AfAlgoD1Ev() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, int>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyiEENS_19__map_value_compareIyS2_NS_4lessIyEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyiEENS_19__map_value_compareIyS2_NS_4lessIyEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: __eqdf2 */
extern "C" __attribute__((visibility("default"))) int __eqdf2(void) {
    ALOGD("__eqdf2() called");
    return 0;
}

/* Demangled: __aeabi_cdrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdrcmple(void) {
    ALOGD("__aeabi_cdrcmple() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::LensZoomEffectSet() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo17LensZoomEffectSetEv(void) {
    ALOGD("_ZN4NS3A6AfAlgo17LensZoomEffectSetEv() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::sumItrpData(unsigned int**, unsigned short*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11sumItrpDataEPPjPtiii(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11sumItrpDataEPPjPtiii() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo11getInstanceEi(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo11getInstanceEi() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::updatePDParam(PD_NVRAM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo13updatePDParamER10PD_NVRAM_T(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo13updatePDParamER10PD_NVRAM_T() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::VPUPdAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: __aeabi_dcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpeq(void) {
    ALOGD("__aeabi_dcmpeq() called");
    return 0;
}

/* Demangled: NS3A::IPdAlgo::extractAllPD(int, PD_EXTRACT_INPUT_T**, PD_EXTRACT_DATA_T**, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv(void) {
    ALOGD("_ZN4NS3A7IPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::hb_isPLFitting(int, int, int, int, int, int, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo14hb_isPLFittingEiiiiiixxx(void) {
    ALOGD("_ZN4NS3A6AfAlgo14hb_isPLFittingEiiiiiixxx() called");
    return 0;
}

/* Demangled: NS3A::VPUPdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9VPUPdAlgo14setPDBlockInfoER11PD_CONFIG_T(void) {
    ALOGD("_ZN4NS3A9VPUPdAlgo14setPDBlockInfoER11PD_CONFIG_T() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A6PdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::getInfoForHybridAF(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo18getInfoForHybridAFEPi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo18getInfoForHybridAFEPi() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::rotatePDPos(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgo11rotatePDPosEiiii(void) {
    ALOGD("_ZN4NS3A6PdAlgo11rotatePDPosEiiii() called");
    return 0;
}

/* Demangled: NS3A::PdAlgo::~PdAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6PdAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A6PdAlgoD1Ev() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::parseLRDiff(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo11parseLRDiffEPhi(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo11parseLRDiffEPhi() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: NS3A::IPdAlgo::handleAllPD(int, PD_INPUT_T**, PD_OUTPUT_T**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A7IPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::calConfidenceLevel(float, float, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo18calConfidenceLevelEffii(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo18calConfidenceLevelEffii() called");
    return 0;
}

/* Demangled: NS3A::AfAlgo::calAdpCompEQPos(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AfAlgo15calAdpCompEQPosEiiiii(void) {
    ALOGD("_ZN4NS3A6AfAlgo15calAdpCompEQPosEiiiii() called");
    return 0;
}

/* Demangled: NS3A::DualPdAlgo::extractPDPixel(void*, PD_AREA_T&, unsigned short**, unsigned short**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A10DualPdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_(void) {
    ALOGD("_ZN4NS3A10DualPdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_() called");
    return 0;
}
