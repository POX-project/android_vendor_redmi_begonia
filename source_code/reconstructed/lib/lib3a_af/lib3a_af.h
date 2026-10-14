/*
 * Reverse-Engineered ABI Specification for: lib3a.af.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.af.so
 */

#ifndef BEGONIA_RE_LIB3A_AF_H
#define BEGONIA_RE_LIB3A_AF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN4NS3A6AfAlgo8CurveFitEPiPx */
/* Demangled: NS3A::AfAlgo::CurveFit(int*, long long*) */
int _ZN4NS3A6AfAlgo8CurveFitEPiPx(void);

/* Symbol: _ZN4NS3A6AfAlgo8getBoundERiS1_S1_S1_PKNS0_6MPOINTEi */
/* Demangled: NS3A::AfAlgo::getBound(int&, int&, int&, int&, NS3A::AfAlgo::MPOINT const*, int) */
int _ZN4NS3A6AfAlgo8getBoundERiS1_S1_S1_PKNS0_6MPOINTEi(void);

/* Symbol: _ZN4NS3A7IPdAlgo14createInstanceEii */
/* Demangled: NS3A::IPdAlgo::createInstance(int, int) */
int _ZN4NS3A7IPdAlgo14createInstanceEii(void);

/* Symbol: _ZN4NS3A6AfAlgo21my_proporty_get_int32EPKci */
/* Demangled: NS3A::AfAlgo::my_proporty_get_int32(char const*, int) */
int _ZN4NS3A6AfAlgo21my_proporty_get_int32EPKci(void);

/* Symbol: _ZN4NS3A10DualPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv */
/* Demangled: NS3A::DualPdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
int _ZN4NS3A10DualPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void);

/* Symbol: __aeabi_frsub */
/* Demangled: __aeabi_frsub */
int __aeabi_frsub(void);

/* Symbol: _ZN4NS3A6AfAlgo11_MotorRangeER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_MotorRange(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo11_MotorRangeER13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A6AfAlgo9FrameWaitEi */
/* Demangled: NS3A::AfAlgo::FrameWait(int) */
int _ZN4NS3A6AfAlgo9FrameWaitEi(void);

/* Symbol: __floatsidf */
/* Demangled: __floatsidf */
int __floatsidf(void);

/* Symbol: _ZN4NS3A6AfAlgo4initERK10AF_INPUT_T */
/* Demangled: NS3A::AfAlgo::init(AF_INPUT_T const&) */
int _ZN4NS3A6AfAlgo4initERK10AF_INPUT_T(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN4NS3A6PdAlgo13projectPD2VecEPPjS2_PtS3_ii */
/* Demangled: NS3A::PdAlgo::projectPD2Vec(unsigned int**, unsigned int**, unsigned short*, unsigned short*, int, int) */
int _ZN4NS3A6PdAlgo13projectPD2VecEPPjS2_PtS3_ii(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN4NS3A6PdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS5_S1_S1_S1_S1_ */
/* Demangled: NS3A::PdAlgo::interpPD(unsigned short**, unsigned short**, int&, int&, PD_AREA_T&, PD_AREA_T&, unsigned short*, unsigned short*, unsigned short*, unsigned short*) */
int _ZN4NS3A6PdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS5_S1_S1_S1_S1_(void);

/* Symbol: _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE */
/* Demangled: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE;

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _ZN4NS3A6PdAlgo12rotatePDInfoER9PD_AREA_TPPtS4_S4_S4_ */
/* Demangled: NS3A::PdAlgo::rotatePDInfo(PD_AREA_T&, unsigned short**, unsigned short**, unsigned short**, unsigned short**) */
int _ZN4NS3A6PdAlgo12rotatePDInfoER9PD_AREA_TPPtS4_S4_S4_(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: _ZN4NS3A6AfAlgo15pl_getSceneTypeEv */
/* Demangled: NS3A::AfAlgo::pl_getSceneType() */
int _ZN4NS3A6AfAlgo15pl_getSceneTypeEv(void);

/* Symbol: _ZN4NS3A6PdAlgo28RestoreFocusWindowForBinningER18PD_EXTRACT_INPUT_T */
/* Demangled: NS3A::PdAlgo::RestoreFocusWindowForBinning(PD_EXTRACT_INPUT_T&) */
int _ZN4NS3A6PdAlgo28RestoreFocusWindowForBinningER18PD_EXTRACT_INPUT_T(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN4NS3A6PdAlgo19ComputePrerequisiteEv */
/* Demangled: NS3A::PdAlgo::ComputePrerequisite() */
int _ZN4NS3A6PdAlgo19ComputePrerequisiteEv(void);

/* Symbol: _ZN4NS3A6PdAlgo31SetNonBinningRawSizeAndBlockNumER11PD_CONFIG_T */
/* Demangled: NS3A::PdAlgo::SetNonBinningRawSizeAndBlockNum(PD_CONFIG_T&) */
int _ZN4NS3A6PdAlgo31SetNonBinningRawSizeAndBlockNumER11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv */
/* Demangled: NS3A::VPUPdAlgo::extractAllPD(int, PD_EXTRACT_INPUT_T**, PD_EXTRACT_DATA_T**, void**) */
int _ZN4NS3A9VPUPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN4NS3A6AfAlgo23hb_multiSourceSelectionERii */
/* Demangled: NS3A::AfAlgo::hb_multiSourceSelection(int&, int) */
int _ZN4NS3A6AfAlgo23hb_multiSourceSelectionERii(void);

/* Symbol: _ZN4NS3A6PdAlgo11getInstanceEi */
/* Demangled: NS3A::PdAlgo::getInstance(int) */
int _ZN4NS3A6PdAlgo11getInstanceEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void);

/* Symbol: _ZN4NS3A6AfAlgo15updateFvExtractERK9AF_AREA_TiNS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::updateFvExtract(AF_AREA_T const&, int, NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo15updateFvExtractERK9AF_AREA_TiNS_9FV_MODE_TE(void);

/* Symbol: _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE8EE */
/* Demangled: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE8EE;

/* Symbol: _ZN4NS3A6AfAlgoD2Ev */
/* Demangled: NS3A::AfAlgo::~AfAlgo() */
int _ZN4NS3A6AfAlgoD2Ev(void);

/* Symbol: _ZN4NS3A10DualPdAlgo5calPDEPjS1_iPfS2_S2_ */
/* Demangled: NS3A::DualPdAlgo::calPD(unsigned int*, unsigned int*, int, float*, float*, float*) */
int _ZN4NS3A10DualPdAlgo5calPDEPjS1_iPfS2_S2_(void);

/* Symbol: _ZN4NS3A6PdAlgo27ScaleMinBlockWidthAndHeightERiS1_ */
/* Demangled: NS3A::PdAlgo::ScaleMinBlockWidthAndHeight(int&, int&) */
int _ZN4NS3A6PdAlgo27ScaleMinBlockWidthAndHeightERiS1_(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: __nedf2 */
/* Demangled: __nedf2 */
int __nedf2(void);

/* Symbol: _ZN4NS3A6PdAlgo12getCoringThrEi */
/* Demangled: NS3A::PdAlgo::getCoringThr(int) */
int _ZN4NS3A6PdAlgo12getCoringThrEi(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _ZN4NS3A6AfAlgo11calFdAreaFVE6AREA_t */
/* Demangled: NS3A::AfAlgo::calFdAreaFV(AREA_t) */
int _ZN4NS3A6AfAlgo11calFdAreaFVE6AREA_t(void);

/* Symbol: _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE */
/* Demangled: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE;

/* Symbol: _ZN4NS3A10DualPdAlgo7calConfEfififR9PD_AREA_TiRi */
/* Demangled: NS3A::DualPdAlgo::calConf(float, int, float, int, float, PD_AREA_T&, int, int&) */
int _ZN4NS3A10DualPdAlgo7calConfEfififR9PD_AREA_TiRi(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo7initIONEiii */
/* Demangled: NS3A::VPUPdAlgo::initION(int, int, int) */
int _ZN4NS3A9VPUPdAlgo7initIONEiii(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo7initVPUEv */
/* Demangled: NS3A::VPUPdAlgo::initVPU() */
int _ZN4NS3A9VPUPdAlgo7initVPUEv(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_ */
/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void);

/* Symbol: __aeabi_ddiv */
/* Demangled: __aeabi_ddiv */
int __aeabi_ddiv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo10getVersionER16PD_LIB_VERSION_T */
/* Demangled: NS3A::DualPdAlgo::getVersion(PD_LIB_VERSION_T&) */
int _ZN4NS3A10DualPdAlgo10getVersionER16PD_LIB_VERSION_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo7calGradEPiS1_R9PD_AREA_TRi */
/* Demangled: NS3A::DualPdAlgo::calGrad(int*, int*, PD_AREA_T&, int&) */
int _ZN4NS3A10DualPdAlgo7calGradEPiS1_R9PD_AREA_TRi(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo25CheckAndGenPDRatioFullMapEv */
/* Demangled: NS3A::VPUPdAlgo::CheckAndGenPDRatioFullMap() */
int _ZN4NS3A9VPUPdAlgo25CheckAndGenPDRatioFullMapEv(void);

/* Symbol: _ZN4NS3A6PdAlgo13selectPDBlockER9PD_AREA_TPtS3_S2_RiS4_ */
/* Demangled: NS3A::PdAlgo::selectPDBlock(PD_AREA_T&, unsigned short*, unsigned short*, PD_AREA_T&, int&, int&) */
int _ZN4NS3A6PdAlgo13selectPDBlockER9PD_AREA_TPtS3_S2_RiS4_(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN4NS3A6PdAlgo11interpSlopeER9PD_AREA_T */
/* Demangled: NS3A::PdAlgo::interpSlope(PD_AREA_T&) */
int _ZN4NS3A6PdAlgo11interpSlopeER9PD_AREA_T(void);

/* Symbol: _ZN4NS3A6PdAlgo11compPdRatioER9PD_AREA_TS2_Pt */
/* Demangled: NS3A::PdAlgo::compPdRatio(PD_AREA_T&, PD_AREA_T&, unsigned short*) */
int _ZN4NS3A6PdAlgo11compPdRatioER9PD_AREA_TS2_Pt(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN4NS3A6PdAlgoD2Ev */
/* Demangled: NS3A::PdAlgo::~PdAlgo() */
int _ZN4NS3A6PdAlgoD2Ev(void);

/* Symbol: gDPdDbgExifData */
/* Demangled: gDPdDbgExifData */
extern void* gDPdDbgExifData;

/* Symbol: _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE */
/* Demangled: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE;

/* Symbol: _ZN4NS3A6AfAlgo11transMatrixENS_7_MatrixES1_ */
/* Demangled: NS3A::AfAlgo::transMatrix(NS3A::_Matrix, NS3A::_Matrix) */
int _ZN4NS3A6AfAlgo11transMatrixENS_7_MatrixES1_(void);

/* Symbol: _ZN4NS3A6PdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T */
/* Demangled: NS3A::PdAlgo::getWinParam(PD_EXTRACT_INPUT_T&, PD_AREA_T&) */
int _ZN4NS3A6PdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo10releaseVPUEv */
/* Demangled: NS3A::VPUPdAlgo::releaseVPU() */
int _ZN4NS3A9VPUPdAlgo10releaseVPUEv(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int __ashldi3(void);

/* Symbol: _ZN4NS3A6AfAlgo20hb_multiSourceTargetEiNS0_19HYBRID_SOURCE_CFG_TERNS0_15HYBRID_TARGET_TEi */
/* Demangled: NS3A::AfAlgo::hb_multiSourceTarget(int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T, NS3A::AfAlgo::HYBRID_TARGET_T&, int) */
int _ZN4NS3A6AfAlgo20hb_multiSourceTargetEiNS0_19HYBRID_SOURCE_CFG_TERNS0_15HYBRID_TARGET_TEi(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN4NS3A6PdAlgo11rotatePDWinER9PD_AREA_T */
/* Demangled: NS3A::PdAlgo::rotatePDWin(PD_AREA_T&) */
int _ZN4NS3A6PdAlgo11rotatePDWinER9PD_AREA_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11interpSlopeER9PD_AREA_T */
/* Demangled: NS3A::DualPdAlgo::interpSlope(PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo11interpSlopeER9PD_AREA_T(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: _Z15PreparePDResultiiRNSt3__16vectorIhNS_9allocatorIhEEEE */
/* Demangled: PreparePDResult(int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
int _Z15PreparePDResultiiRNSt3__16vectorIhNS_9allocatorIhEEEE(void);

/* Symbol: _ZN4NS3A6AfAlgo14_PrepareMiniAFEv */
/* Demangled: NS3A::AfAlgo::_PrepareMiniAF() */
int _ZN4NS3A6AfAlgo14_PrepareMiniAFEv(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: _ZN4NS3A10DualPdAlgo7calPD2DEPjS1_iPiS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri */
/* Demangled: NS3A::DualPdAlgo::calPD2D(unsigned int*, unsigned int*, int, int*, int*, PD_AREA_T&, int, int, float&, float&, float&, float&, float&, int&) */
int _ZN4NS3A10DualPdAlgo7calPD2DEPjS1_iPiS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri(void);

/* Symbol: __aeabi_dcmpge */
/* Demangled: __aeabi_dcmpge */
int __aeabi_dcmpge(void);

/* Symbol: _ZN4NS3A6PdAlgo18getInfoForHybridAFEPi */
/* Demangled: NS3A::PdAlgo::getInfoForHybridAF(int*) */
int _ZN4NS3A6PdAlgo18getInfoForHybridAFEPi(void);

/* Symbol: _ZN4NS3A6PdAlgo7calConfEffifiR9PD_AREA_TiRi */
/* Demangled: NS3A::PdAlgo::calConf(float, float, int, float, int, PD_AREA_T&, int, int&) */
int _ZN4NS3A6PdAlgo7calConfEffifiR9PD_AREA_TiRi(void);

/* Symbol: _ZN4NS3A9VPUPdAlgoD0Ev */
/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
int _ZN4NS3A9VPUPdAlgoD0Ev(void);

/* Symbol: _ZN4NS3A6AfAlgo25doMultiZoneRangeSelectionEPK12AFPD_BLOCK_TPiS4_ */
/* Demangled: NS3A::AfAlgo::doMultiZoneRangeSelection(AFPD_BLOCK_T const*, int*, int*) */
int _ZN4NS3A6AfAlgo25doMultiZoneRangeSelectionEPK12AFPD_BLOCK_TPiS4_(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: gPdDbgFullSizeUsed */
/* Demangled: gPdDbgFullSizeUsed */
extern void* gPdDbgFullSizeUsed;

/* Symbol: _ZN4NS3A6AfAlgo18pl_checkAFWinOverYEv */
/* Demangled: NS3A::AfAlgo::pl_checkAFWinOverY() */
int _ZN4NS3A6AfAlgo18pl_checkAFWinOverYEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo15calFocusLensPosER9PD_AREA_Tfi */
/* Demangled: NS3A::DualPdAlgo::calFocusLensPos(PD_AREA_T&, float, int) */
int _ZN4NS3A10DualPdAlgo15calFocusLensPosER9PD_AREA_Tfi(void);

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int __lshrdi3(void);

/* Symbol: _ZN4NS3A6AfAlgo16ZE_EnableExtractEv */
/* Demangled: NS3A::AfAlgo::ZE_EnableExtract() */
int _ZN4NS3A6AfAlgo16ZE_EnableExtractEv(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T */
/* Demangled: NS3A::VPUPdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
int _ZN4NS3A9VPUPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo10getVersionER16PD_LIB_VERSION_T */
/* Demangled: NS3A::VPUPdAlgo::getVersion(PD_LIB_VERSION_T&) */
int _ZN4NS3A9VPUPdAlgo10getVersionER16PD_LIB_VERSION_T(void);

/* Symbol: _ZN4NS3A6PdAlgo10parseSlopeEPhi */
/* Demangled: NS3A::PdAlgo::parseSlope(unsigned char*, int) */
int _ZN4NS3A6PdAlgo10parseSlopeEPhi(void);

/* Symbol: _ZN4NS3A6PdAlgo8corrCoefEPjS1_i */
/* Demangled: NS3A::PdAlgo::corrCoef(unsigned int*, unsigned int*, int) */
int _ZN4NS3A6PdAlgo8corrCoefEPjS1_i(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11rotatePDWinER9PD_AREA_T */
/* Demangled: NS3A::DualPdAlgo::rotatePDWin(PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo11rotatePDWinER9PD_AREA_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo11rotatePDWinER9PD_AREA_T */
/* Demangled: NS3A::VPUPdAlgo::rotatePDWin(PD_AREA_T&) */
int _ZN4NS3A9VPUPdAlgo11rotatePDWinER9PD_AREA_T(void);

/* Symbol: _ZN4NS3A6AfAlgo13inverseMatrixENS_7_MatrixES1_ */
/* Demangled: NS3A::AfAlgo::inverseMatrix(NS3A::_Matrix, NS3A::_Matrix) */
int _ZN4NS3A6AfAlgo13inverseMatrixENS_7_MatrixES1_(void);

/* Symbol: _ZN4NS3A6PdAlgo11sumItrpDataEPPjPtiii */
/* Demangled: NS3A::PdAlgo::sumItrpData(unsigned int**, unsigned short*, int, int, int) */
int _ZN4NS3A6PdAlgo11sumItrpDataEPPjPtiii(void);

/* Symbol: _ZN4NS3A6AfAlgo12printDamplogEj */
/* Demangled: NS3A::AfAlgo::printDamplog(unsigned int) */
int _ZN4NS3A6AfAlgo12printDamplogEj(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T */
/* Demangled: NS3A::DualPdAlgo::getWinParam(PD_EXTRACT_INPUT_T&, PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo11getWinParamER18PD_EXTRACT_INPUT_TR9PD_AREA_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T */
/* Demangled: NS3A::VPUPdAlgo::handleAllPD(int, PD_INPUT_T**, PD_OUTPUT_T**) */
int _ZN4NS3A9VPUPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T(void);

/* Symbol: _ZTVN4NS3A10DualPdAlgoE */
/* Demangled: vtable for NS3A::DualPdAlgo */
extern void* _ZTVN4NS3A10DualPdAlgoE;

/* Symbol: _ZN4NS3A6PdAlgo14setPDBlockInfoER11PD_CONFIG_T */
/* Demangled: NS3A::PdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
int _ZN4NS3A6PdAlgo14setPDBlockInfoER11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A6AfAlgo17AFDebugFinalCurveEi */
/* Demangled: NS3A::AfAlgo::AFDebugFinalCurve(int) */
int _ZN4NS3A6AfAlgo17AFDebugFinalCurveEi(void);

/* Symbol: _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE */
/* Demangled: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE;

/* Symbol: gPdDbgDataCnt */
/* Demangled: gPdDbgDataCnt */
extern void* gPdDbgDataCnt;

/* Symbol: _ZN4NS3A10DualPdAlgo16checkTuningParamEv */
/* Demangled: NS3A::DualPdAlgo::checkTuningParam() */
int _ZN4NS3A10DualPdAlgo16checkTuningParamEv(void);

/* Symbol: _Z19GenPDRatioFullMapV2iiiPfiiiiiiiiiiiiiiPtiS0_ */
/* Demangled: GenPDRatioFullMapV2(int, int, int, float*, int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned short*, int, unsigned short*) */
int _Z19GenPDRatioFullMapV2iiiPfiiiiiiiiiiiiiiPtiS0_(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: __aeabi_dcmpgt */
/* Demangled: __aeabi_dcmpgt */
int __aeabi_dcmpgt(void);

/* Symbol: _ZN4NS3A6AfAlgo13runAFTempCaliEj */
/* Demangled: NS3A::AfAlgo::runAFTempCali(unsigned int) */
int _ZN4NS3A6AfAlgo13runAFTempCaliEj(void);

/* Symbol: _ZN4NS3A6AfAlgo16calAdpCompTimingEyyiiPiS1_S1_ */
/* Demangled: NS3A::AfAlgo::calAdpCompTiming(unsigned long long, unsigned long long, int, int, int*, int*, int*) */
int _ZN4NS3A6AfAlgo16calAdpCompTimingEyyiiPiS1_S1_(void);

/* Symbol: _ZN4NS3A6PdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_S5_S5_i */
/* Demangled: NS3A::PdAlgo::extractPDPixel(void*, PD_AREA_T&, unsigned short**, unsigned short**, unsigned short**, unsigned short**, int) */
int _ZN4NS3A6PdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_S5_S5_i(void);

/* Symbol: _Z12CalPtrBufferP15MEM_INFO_BUFFERPhS1_iiijc */
/* Demangled: CalPtrBuffer(MEM_INFO_BUFFER*, unsigned char*, unsigned char*, int, int, int, unsigned int, char) */
int _Z12CalPtrBufferP15MEM_INFO_BUFFERPhS1_iiijc(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _ZN4NS3A6AfAlgo24CheckMZConvergeOrReverseEiiNS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::CheckMZConvergeOrReverse(int, int, NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo24CheckMZConvergeOrReverseEiiNS_9FV_MODE_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo11oneDpolyFitEiPdS1_ */
/* Demangled: NS3A::AfAlgo::oneDpolyFit(int, double*, double*) */
int _ZN4NS3A6AfAlgo11oneDpolyFitEiPdS1_(void);

/* Symbol: __fixdfdi */
/* Demangled: __fixdfdi */
int __fixdfdi(void);

/* Symbol: _ZN4NS3A6AfAlgo11multiMatrixENS_7_MatrixES1_S1_ */
/* Demangled: NS3A::AfAlgo::multiMatrix(NS3A::_Matrix, NS3A::_Matrix, NS3A::_Matrix) */
int _ZN4NS3A6AfAlgo11multiMatrixENS_7_MatrixES1_S1_(void);

/* Symbol: _ZN4NS3A6AfAlgo11setCoefInitEv */
/* Demangled: NS3A::AfAlgo::setCoefInit() */
int _ZN4NS3A6AfAlgo11setCoefInitEv(void);

/* Symbol: _ZN4NS3A6AfAlgo20_UpdateCamInfoToExifER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_UpdateCamInfoToExif(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo20_UpdateCamInfoToExifER13AF_SyncInfo_T(void);

/* Symbol: __aeabi_fadd */
/* Demangled: __aeabi_fadd */
int __aeabi_fadd(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: _ZN4NS3A6AfAlgo13hb_doPdSelectENS0_11AF_STATUS_TERiS2_S2_S2_ */
/* Demangled: NS3A::AfAlgo::hb_doPdSelect(NS3A::AfAlgo::AF_STATUS_T, int&, int&, int&, int&) */
int _ZN4NS3A6AfAlgo13hb_doPdSelectENS0_11AF_STATUS_TERiS2_S2_S2_(void);

/* Symbol: _ZN4NS3A6PdAlgoC2EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::PdAlgo::PdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A6PdAlgoC2EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo8setAFPosEi */
/* Demangled: NS3A::AfAlgo::setAFPos(int) */
int _ZN4NS3A6AfAlgo8setAFPosEi(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo15destroyInstanceEv */
/* Demangled: NS3A::VPUPdAlgo::destroyInstance() */
int _ZN4NS3A9VPUPdAlgo15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN4NS3A6AfAlgo14getCameraAngleEv */
/* Demangled: NS3A::AfAlgo::getCameraAngle() */
int _ZN4NS3A6AfAlgo14getCameraAngleEv(void);

/* Symbol: _ZTVN4NS3A6PdAlgoE */
/* Demangled: vtable for NS3A::PdAlgo */
extern void* _ZTVN4NS3A6PdAlgoE;

/* Symbol: _Z7AddRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_ */
/* Demangled: AddRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&) */
int _Z7AddRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_(void);

/* Symbol: __gtdf2 */
/* Demangled: __gtdf2 */
int __gtdf2(void);

/* Symbol: _ZN4NS3A6AfAlgo12_SetSyncModeEi */
/* Demangled: NS3A::AfAlgo::_SetSyncMode(int) */
int _ZN4NS3A6AfAlgo12_SetSyncModeEi(void);

/* Symbol: _ZN4NS3A6AfAlgo12hb_doPdMergeENS0_11AF_STATUS_TEiRiS2_S2_S2_ */
/* Demangled: NS3A::AfAlgo::hb_doPdMerge(NS3A::AfAlgo::AF_STATUS_T, int, int&, int&, int&, int&) */
int _ZN4NS3A6AfAlgo12hb_doPdMergeENS0_11AF_STATUS_TEiRiS2_S2_S2_(void);

/* Symbol: _ZN4NS3A6AfAlgo17calLUTHWDynamicTHEiPxiS1_S1_ */
/* Demangled: NS3A::AfAlgo::calLUTHWDynamicTH(int, long long*, int, long long*, long long*) */
int _ZN4NS3A6AfAlgo17calLUTHWDynamicTHEiPxiS1_S1_(void);

/* Symbol: _ZN4NS3A6PdAlgo11getPDOffsetER9PD_AREA_TS2_RiS3_ */
/* Demangled: NS3A::PdAlgo::getPDOffset(PD_AREA_T&, PD_AREA_T&, int&, int&) */
int _ZN4NS3A6PdAlgo11getPDOffsetER9PD_AREA_TS2_RiS3_(void);

/* Symbol: _ZN4NS3A10DualPdAlgo10alignPDWinER9PD_AREA_TS2_ */
/* Demangled: NS3A::DualPdAlgo::alignPDWin(PD_AREA_T&, PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo10alignPDWinER9PD_AREA_TS2_(void);

/* Symbol: _Z12CalPtrDualPDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO */
/* Demangled: CalPtrDualPD(VPU_PROC_INFO const*, unsigned char**, unsigned char**, unsigned char*, unsigned char*, VPU_MEM_INFO*) */
int _Z12CalPtrDualPDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO(void);

/* Symbol: _ZN4NS3A6AfAlgoC1Ev */
/* Demangled: NS3A::AfAlgo::AfAlgo() */
int _ZN4NS3A6AfAlgoC1Ev(void);

/* Symbol: _ZNSt3__16vectorI10_ROIResultNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<_ROIResult, std::__1::allocator<_ROIResult> >::__push_back_slow_path<_ROIResult const&>(_ROIResult const&) */
int _ZNSt3__16vectorI10_ROIResultNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN4NS3A6PdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T */
/* Demangled: NS3A::PdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
int _ZN4NS3A6PdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void);

/* Symbol: _ZN4NS3A6PdAlgo19ComputeBinningScaleERK11PD_CONFIG_T */
/* Demangled: NS3A::PdAlgo::ComputeBinningScale(PD_CONFIG_T const&) */
int _ZN4NS3A6PdAlgo19ComputeBinningScaleERK11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo5sumPDEPPjS2_PiR9PD_AREA_TPtS6_ */
/* Demangled: NS3A::DualPdAlgo::sumPD(unsigned int**, unsigned int**, int*, PD_AREA_T&, unsigned short*, unsigned short*) */
int _ZN4NS3A10DualPdAlgo5sumPDEPPjS2_PiR9PD_AREA_TPtS6_(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN4NS3A6AfAlgo14updateHwConfigEv */
/* Demangled: NS3A::AfAlgo::updateHwConfig() */
int _ZN4NS3A6AfAlgo14updateHwConfigEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgoD0Ev */
/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
int _ZN4NS3A10DualPdAlgoD0Ev(void);

/* Symbol: __ltdf2 */
/* Demangled: __ltdf2 */
int __ltdf2(void);

/* Symbol: __fixunsdfsi */
/* Demangled: __fixunsdfsi */
int __fixunsdfsi(void);

/* Symbol: _ZN4NS3A6AfAlgo14CheckGSumCurveEPiPxS2_S2_ii */
/* Demangled: NS3A::AfAlgo::CheckGSumCurve(int*, long long*, long long*, long long*, int, int) */
int _ZN4NS3A6AfAlgo14CheckGSumCurveEPiPxS2_S2_ii(void);

/* Symbol: _ZN4NS3A10DualPdAlgoC1EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::DualPdAlgo::DualPdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A10DualPdAlgoC1EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo17_GetMain2CalibPosER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_GetMain2CalibPos(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo17_GetMain2CalibPosER13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A6PdAlgo10calSrchRngEfiRiS1_ */
/* Demangled: NS3A::PdAlgo::calSrchRng(float, int, int&, int&) */
int _ZN4NS3A6PdAlgo10calSrchRngEfiRiS1_(void);

/* Symbol: gPdDbgDensityX */
/* Demangled: gPdDbgDensityX */
extern void* gPdDbgDensityX;

/* Symbol: _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE */
/* Demangled: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE;

/* Symbol: _ZN4NS3A9VPUPdAlgoD1Ev */
/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
int _ZN4NS3A9VPUPdAlgoD1Ev(void);

/* Symbol: _ZN4NS3A6AfAlgo7AFDebugEjji */
/* Demangled: NS3A::AfAlgo::AFDebug(unsigned int, unsigned int, int) */
int _ZN4NS3A6AfAlgo7AFDebugEjji(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN4NS3A6AfAlgo15ThermalCalibPosEv */
/* Demangled: NS3A::AfAlgo::ThermalCalibPos() */
int _ZN4NS3A6AfAlgo15ThermalCalibPosEv(void);

/* Symbol: _ZN4NS3A6AfAlgo9getMinMaxERiS1_PKii */
/* Demangled: NS3A::AfAlgo::getMinMax(int&, int&, int const*, int) */
int _ZN4NS3A6AfAlgo9getMinMaxERiS1_PKii(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZN4NS3A6PdAlgo7calGradEPtS1_R9PD_AREA_TiiRi */
/* Demangled: NS3A::PdAlgo::calGrad(unsigned short*, unsigned short*, PD_AREA_T&, int, int, int&) */
int _ZN4NS3A6PdAlgo7calGradEPtS1_R9PD_AREA_TiiRi(void);

/* Symbol: _Z9MergeRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_ */
/* Demangled: MergeRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&) */
int _Z9MergeRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: gPdDbgPitchX */
/* Demangled: gPdDbgPitchX */
extern void* gPdDbgPitchX;

/* Symbol: _ZN4NS3A6AfAlgo20_exif_addDualSyncTagEv */
/* Demangled: NS3A::AfAlgo::_exif_addDualSyncTag() */
int _ZN4NS3A6AfAlgo20_exif_addDualSyncTagEv(void);

/* Symbol: _ZN4NS3A6PdAlgo12getDebugInfoER15AF_DEBUG_INFO_T */
/* Demangled: NS3A::PdAlgo::getDebugInfo(AF_DEBUG_INFO_T&) */
int _ZN4NS3A6PdAlgo12getDebugInfoER15AF_DEBUG_INFO_T(void);

/* Symbol: __aeabi_d2uiz */
/* Demangled: __aeabi_d2uiz */
int __aeabi_d2uiz(void);

/* Symbol: _ZN4NS3A6AfAlgo15hb_isPLFindPeakEv */
/* Demangled: NS3A::AfAlgo::hb_isPLFindPeak() */
int _ZN4NS3A6AfAlgo15hb_isPLFindPeakEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo15destroyInstanceEv */
/* Demangled: NS3A::DualPdAlgo::destroyInstance() */
int _ZN4NS3A10DualPdAlgo15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16vectorI10_QueueInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<_QueueInfo, std::__1::allocator<_QueueInfo> >::__push_back_slow_path<_QueueInfo const&>(_QueueInfo const&) */
int _ZNSt3__16vectorI10_QueueInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _Z13PreparePDInfoRNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEEEiiPhjPtjcc */
/* Demangled: PreparePDInfo(std::__1::vector<PD_ROI_INFO_T_, std::__1::allocator<PD_ROI_INFO_T_> >&, int, int, unsigned char*, unsigned int, unsigned short*, unsigned int, char, char) */
int _Z13PreparePDInfoRNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEEEiiPhjPtjcc(void);

/* Symbol: _ZTVN4NS3A9VPUPdAlgoE */
/* Demangled: vtable for NS3A::VPUPdAlgo */
extern void* _ZTVN4NS3A9VPUPdAlgoE;

/* Symbol: _Z19GenPDRatioFullMapV2iiiPtiiiiiiiiiiiiS_iS_ */
/* Demangled: GenPDRatioFullMapV2(int, int, int, unsigned short*, int, int, int, int, int, int, int, int, int, int, int, int, unsigned short*, int, unsigned short*) */
int _Z19GenPDRatioFullMapV2iiiPtiiiiiiiiiiiiS_iS_(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN4NS3A6AfAlgo8getHW_THENS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::getHW_TH(NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo8getHW_THENS_9FV_MODE_TE(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN4NS3A6AfAlgo13initFvExtractEv */
/* Demangled: NS3A::AfAlgo::initFvExtract() */
int _ZN4NS3A6AfAlgo13initFvExtractEv(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: _ZN4NS3A6AfAlgo12_SetSyncInfoEiR13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_SetSyncInfo(int, AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo12_SetSyncInfoEiR13AF_SyncInfo_T(void);

/* Symbol: _Z7AddRect9PD_AREA_TS_ */
/* Demangled: AddRect(PD_AREA_T, PD_AREA_T) */
int _Z7AddRect9PD_AREA_TS_(void);

/* Symbol: _ZTVN4NS3A6AfAlgoE */
/* Demangled: vtable for NS3A::AfAlgo */
extern void* _ZTVN4NS3A6AfAlgoE;

/* Symbol: _ZN4NS3A6AfAlgo24updateCentralZEFvExtractEiNS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::updateCentralZEFvExtract(int, NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo24updateCentralZEFvExtractEiNS_9FV_MODE_TE(void);

/* Symbol: _ZN4NS3A10DualPdAlgo10parseSlopeEPhi */
/* Demangled: NS3A::DualPdAlgo::parseSlope(unsigned char*, int) */
int _ZN4NS3A10DualPdAlgo10parseSlopeEPhi(void);

/* Symbol: _ZN4NS3A10DualPdAlgo8corrCoefEPjS1_i */
/* Demangled: NS3A::DualPdAlgo::corrCoef(unsigned int*, unsigned int*, int) */
int _ZN4NS3A10DualPdAlgo8corrCoefEPjS1_i(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T */
/* Demangled: NS3A::VPUPdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
int _ZN4NS3A9VPUPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void);

/* Symbol: _ZN4NS3A6PdAlgo15destroyInstanceEv */
/* Demangled: NS3A::PdAlgo::destroyInstance() */
int _ZN4NS3A6PdAlgo15destroyInstanceEv(void);

/* Symbol: _ZN4NS3A9VPUPdAlgoC1EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::VPUPdAlgo::VPUPdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A9VPUPdAlgoC1EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _Z17MergeNeighborRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_iii */
/* Demangled: MergeNeighborRect(std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >&, int, PD_ROI_INFO_T_&, int, int, int) */
int _Z17MergeNeighborRectRNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEEEiR14PD_ROI_INFO_T_iii(void);

/* Symbol: _ZN4NS3A6AfAlgo6getGMRERiS1_S1_S1_S1_S1_S1_ */
/* Demangled: NS3A::AfAlgo::getGMR(int&, int&, int&, int&, int&, int&, int&) */
int _ZN4NS3A6AfAlgo6getGMRERiS1_S1_S1_S1_S1_S1_(void);

/* Symbol: _ZTVN4NS3A7IPdAlgoE */
/* Demangled: vtable for NS3A::IPdAlgo */
extern void* _ZTVN4NS3A7IPdAlgoE;

/* Symbol: _ZN4NS3A6PdAlgo9interpMapEPPtiR9PD_AREA_TS1_S1_ */
/* Demangled: NS3A::PdAlgo::interpMap(unsigned short**, int, PD_AREA_T&, unsigned short*, unsigned short*) */
int _ZN4NS3A6PdAlgo9interpMapEPPtiR9PD_AREA_TS1_S1_(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: _ZN4NS3A6AfAlgo11_CalibAFPosER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_CalibAFPos(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo11_CalibAFPosER13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A6AfAlgoC2Ev */
/* Demangled: NS3A::AfAlgo::AfAlgo() */
int _ZN4NS3A6AfAlgoC2Ev(void);

/* Symbol: _ZN4NS3A6PdAlgo12identClipPxlEPtS1_R9PD_AREA_TRiPS1_S5_ */
/* Demangled: NS3A::PdAlgo::identClipPxl(unsigned short*, unsigned short*, PD_AREA_T&, int&, unsigned short**, unsigned short**) */
int _ZN4NS3A6PdAlgo12identClipPxlEPtS1_R9PD_AREA_TRiPS1_S5_(void);

/* Symbol: _Z12CalPtr2by1PDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO */
/* Demangled: CalPtr2by1PD(VPU_PROC_INFO const*, unsigned char**, unsigned char**, unsigned char*, unsigned char*, VPU_MEM_INFO*) */
int _Z12CalPtr2by1PDPK13VPU_PROC_INFOPPhS3_S2_S2_P12VPU_MEM_INFO(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int __udivdi3(void);

/* Symbol: _ZN4NS3A6PdAlgo12interpPDLineEPtiS1_S1_ii */
/* Demangled: NS3A::PdAlgo::interpPDLine(unsigned short*, int, unsigned short*, unsigned short*, int, int) */
int _ZN4NS3A6PdAlgo12interpPDLineEPtiS1_S1_ii(void);

/* Symbol: _ZN4NS3A6PdAlgo5calPDEPjS1_iRfS2_S2_ */
/* Demangled: NS3A::PdAlgo::calPD(unsigned int*, unsigned int*, int, float&, float&, float&) */
int _ZN4NS3A6PdAlgo5calPDEPjS1_iRfS2_S2_(void);

/* Symbol: _ZN4NS3A6AfAlgo12getFDAFValueEiRNS0_17AF_FDLM_EXTRACT_TE */
/* Demangled: NS3A::AfAlgo::getFDAFValue(int, NS3A::AfAlgo::AF_FDLM_EXTRACT_T&) */
int _ZN4NS3A6AfAlgo12getFDAFValueEiRNS0_17AF_FDLM_EXTRACT_TE(void);

/* Symbol: _ZN4NS3A10DualPdAlgoD1Ev */
/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
int _ZN4NS3A10DualPdAlgoD1Ev(void);

/* Symbol: __aeabi_d2lz */
/* Demangled: __aeabi_d2lz */
int __aeabi_d2lz(void);

/* Symbol: _ZN4NS3A6AfAlgo19hb_multiSourceMergeEv */
/* Demangled: NS3A::AfAlgo::hb_multiSourceMerge() */
int _ZN4NS3A6AfAlgo19hb_multiSourceMergeEv(void);

/* Symbol: _ZN4NS3A9VPUPdAlgoD2Ev */
/* Demangled: NS3A::VPUPdAlgo::~VPUPdAlgo() */
int _ZN4NS3A9VPUPdAlgoD2Ev(void);

/* Symbol: _Z10CalPtrBaseP13MEM_INFO_BASEPhS1_jiiiiiic */
/* Demangled: CalPtrBase(MEM_INFO_BASE*, unsigned char*, unsigned char*, unsigned int, int, int, int, int, int, int, char) */
int _Z10CalPtrBaseP13MEM_INFO_BASEPhS1_jiiiiiic(void);

/* Symbol: _ZN4NS3A6AfAlgo11_CalSyncPosER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_CalSyncPos(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo11_CalSyncPosER13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A6PdAlgo7calPD2DEPjS1_R9PD_AREA_TiiRfS4_S4_S4_ */
/* Demangled: NS3A::PdAlgo::calPD2D(unsigned int*, unsigned int*, PD_AREA_T&, int, int, float&, float&, float&, float&) */
int _ZN4NS3A6PdAlgo7calPD2DEPjS1_R9PD_AREA_TiiRfS4_S4_S4_(void);

/* Symbol: _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE16EE */
/* Demangled: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE16EE;

/* Symbol: _ZN4NS3A10DualPdAlgo14setPDBlockInfoER11PD_CONFIG_T */
/* Demangled: NS3A::DualPdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
int _ZN4NS3A10DualPdAlgo14setPDBlockInfoER11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A6PdAlgo19calFocusLensPosConfEffiRi */
/* Demangled: NS3A::PdAlgo::calFocusLensPosConf(float, float, int, int&) */
int _ZN4NS3A6PdAlgo19calFocusLensPosConfEffiRi(void);

/* Symbol: _ZN4NS3A6PdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T */
/* Demangled: NS3A::PdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
int _ZN4NS3A6PdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void);

/* Symbol: __aeabi_f2d */
/* Demangled: __aeabi_f2d */
int __aeabi_f2d(void);

/* Symbol: _ZN4NS3A6AfAlgo14tuningHwConfigEv */
/* Demangled: NS3A::AfAlgo::tuningHwConfig() */
int _ZN4NS3A6AfAlgo14tuningHwConfigEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo10getPDBlockER9PD_AREA_TS2_ */
/* Demangled: NS3A::DualPdAlgo::getPDBlock(PD_AREA_T&, PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo10getPDBlockER9PD_AREA_TS2_(void);

/* Symbol: _Z17GenPDRatioFullMapiiiPfiiPt */
/* Demangled: GenPDRatioFullMap(int, int, int, float*, int, int, unsigned short*) */
int _Z17GenPDRatioFullMapiiiPfiiPt(void);

/* Symbol: _ZN4NS3A6AfAlgo14_LensFollowPosEiiiii */
/* Demangled: NS3A::AfAlgo::_LensFollowPos(int, int, int, int, int) */
int _ZN4NS3A6AfAlgo14_LensFollowPosEiiiii(void);

/* Symbol: _ZN4NS3A6AfAlgo16CheckFailPosByPDEiPi */
/* Demangled: NS3A::AfAlgo::CheckFailPosByPD(int, int*) */
int _ZN4NS3A6AfAlgo16CheckFailPosByPDEiPi(void);

/* Symbol: _ZN4NS3A6AfAlgo7calSpotEjjRiS1_S1_S1_ */
/* Demangled: NS3A::AfAlgo::calSpot(unsigned int, unsigned int, int&, int&, int&, int&) */
int _ZN4NS3A6AfAlgo7calSpotEjjRiS1_S1_S1_(void);

/* Symbol: _ZN4NS3A6AfAlgo11calSubStatsERNS0_20AF_SUBSTAT_CAL_OUT_TENS0_19AF_SUBSTAT_CAL_IN_TE */
/* Demangled: NS3A::AfAlgo::calSubStats(NS3A::AfAlgo::AF_SUBSTAT_CAL_OUT_T&, NS3A::AfAlgo::AF_SUBSTAT_CAL_IN_T) */
int _ZN4NS3A6AfAlgo11calSubStatsERNS0_20AF_SUBSTAT_CAL_OUT_TENS0_19AF_SUBSTAT_CAL_IN_TE(void);

/* Symbol: gPdDbgLastLensPos */
/* Demangled: gPdDbgLastLensPos */
extern void* gPdDbgLastLensPos;

/* Symbol: _Z14RotatePitchPosccPsiiii */
/* Demangled: RotatePitchPos(char, char, short*, int, int, int, int) */
int _Z14RotatePitchPosccPsiiii(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _ZN4NS3A6AfAlgo9clipValueEiii */
/* Demangled: NS3A::AfAlgo::clipValue(int, int, int) */
int _ZN4NS3A6AfAlgo9clipValueEiii(void);

/* Symbol: _ZN4NS3A6PdAlgo10getVersionER16PD_LIB_VERSION_T */
/* Demangled: NS3A::PdAlgo::getVersion(PD_LIB_VERSION_T&) */
int _ZN4NS3A6PdAlgo10getVersionER16PD_LIB_VERSION_T(void);

/* Symbol: _ZN4NS3A6PdAlgo7calPD2DEPjS1_iPtS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri */
/* Demangled: NS3A::PdAlgo::calPD2D(unsigned int*, unsigned int*, int, unsigned short*, unsigned short*, PD_AREA_T&, int, int, float&, float&, float&, float&, float&, int&) */
int _ZN4NS3A6PdAlgo7calPD2DEPjS1_iPtS2_R9PD_AREA_TiiRfS5_S5_S5_S5_Ri(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN4NS3A6AfAlgo19LensZoomEffectCalibEi */
/* Demangled: NS3A::AfAlgo::LensZoomEffectCalib(int) */
int _ZN4NS3A6AfAlgo19LensZoomEffectCalibEi(void);

/* Symbol: _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE */
/* Demangled: vtable for PdAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTV9PdAlgoDevILN11NSIspTuning12ESensorDev_TE4EE;

/* Symbol: _ZN4NS3A6PdAlgo10alignPDWinER9PD_AREA_TS2_ */
/* Demangled: NS3A::PdAlgo::alignPDWin(PD_AREA_T&, PD_AREA_T&) */
int _ZN4NS3A6PdAlgo10alignPDWinER9PD_AREA_TS2_(void);

/* Symbol: __divdf3 */
/* Demangled: __divdf3 */
int __divdf3(void);

/* Symbol: _ZN4NS3A10DualPdAlgo8interpPDEPPjS2_RiS3_iiS1_S1_ */
/* Demangled: NS3A::DualPdAlgo::interpPD(unsigned int**, unsigned int**, int&, int&, int, int, unsigned int*, unsigned int*) */
int _ZN4NS3A10DualPdAlgo8interpPDEPPjS2_RiS3_iiS1_S1_(void);

/* Symbol: _ZN4NS3A6PdAlgo9interpVecEPjiS1_i */
/* Demangled: NS3A::PdAlgo::interpVec(unsigned int*, int, unsigned int*, int) */
int _ZN4NS3A6PdAlgo9interpVecEPjiS1_i(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: __muldf3 */
/* Demangled: __muldf3 */
int __muldf3(void);

/* Symbol: _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE6insertENS_11__wrap_iterIPKS1_EERS6_ */
/* Demangled: std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >::insert(std::__1::__wrap_iter<PD_MERGED_AREA_T_ const*>, PD_MERGED_AREA_T_ const&) */
int _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE6insertENS_11__wrap_iterIPKS1_EERS6_(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _ZN4NS3A6AfAlgo12getThresholdExxxx */
/* Demangled: NS3A::AfAlgo::getThreshold(long long, long long, long long, long long) */
int _ZN4NS3A6AfAlgo12getThresholdExxxx(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN4NS3A6PdAlgo26ScaleFocusWindowForBinningER18PD_EXTRACT_INPUT_T */
/* Demangled: NS3A::PdAlgo::ScaleFocusWindowForBinning(PD_EXTRACT_INPUT_T&) */
int _ZN4NS3A6PdAlgo26ScaleFocusWindowForBinningER18PD_EXTRACT_INPUT_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T */
/* Demangled: NS3A::DualPdAlgo::setPDOrientation(ePDWIN_ORIENTATION_T) */
int _ZN4NS3A10DualPdAlgo16setPDOrientationE20ePDWIN_ORIENTATION_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo17genPdRatioFullMapEv */
/* Demangled: NS3A::DualPdAlgo::genPdRatioFullMap() */
int _ZN4NS3A10DualPdAlgo17genPdRatioFullMapEv(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int __aeabi_llsl(void);

/* Symbol: _ZN4NS3A6PdAlgo10getPDBlockER9PD_AREA_TS2_ */
/* Demangled: NS3A::PdAlgo::getPDBlock(PD_AREA_T&, PD_AREA_T&) */
int _ZN4NS3A6PdAlgo10getPDBlockER9PD_AREA_TS2_(void);

/* Symbol: __extendsfdf2 */
/* Demangled: __extendsfdf2 */
int __extendsfdf2(void);

/* Symbol: _ZN4NS3A6AfAlgo11pl_dumpDataEP7__sFILEPvjRKNS_5ROI_TEj */
/* Demangled: NS3A::AfAlgo::pl_dumpData(__sFILE*, void*, unsigned int, NS3A::ROI_T const&, unsigned int) */
int _ZN4NS3A6AfAlgo11pl_dumpDataEP7__sFILEPvjRKNS_5ROI_TEj(void);

/* Symbol: _ZN4NS3A10DualPdAlgoD2Ev */
/* Demangled: NS3A::DualPdAlgo::~DualPdAlgo() */
int _ZN4NS3A10DualPdAlgoD2Ev(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo21chcekVPUCompatibilityEv */
/* Demangled: NS3A::VPUPdAlgo::chcekVPUCompatibility() */
int _ZN4NS3A9VPUPdAlgo21chcekVPUCompatibilityEv(void);

/* Symbol: _ZN4NS3A6PdAlgo18calConfidenceLevelER9PD_AREA_Tffii */
/* Demangled: NS3A::PdAlgo::calConfidenceLevel(PD_AREA_T&, float, float, int, int) */
int _ZN4NS3A6PdAlgo18calConfidenceLevelER9PD_AREA_Tffii(void);

/* Symbol: _ZN4NS3A10DualPdAlgo14applyGaussFiltEPjR9PD_AREA_T */
/* Demangled: NS3A::DualPdAlgo::applyGaussFilt(unsigned int*, PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo14applyGaussFiltEPjR9PD_AREA_T(void);

/* Symbol: __adddf3 */
/* Demangled: __adddf3 */
int __adddf3(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int __aeabi_llsr(void);

/* Symbol: _ZN4NS3A6AfAlgo17getPostCompOffsetEiiij */
/* Demangled: NS3A::AfAlgo::getPostCompOffset(int, int, int, unsigned int) */
int _ZN4NS3A6AfAlgo17getPostCompOffsetEiiij(void);

/* Symbol: _Z23CalBufferCheckSum4AlignPvi */
/* Demangled: CalBufferCheckSum4Align(void*, int) */
int _Z23CalBufferCheckSum4AlignPvi(void);

/* Symbol: __aeabi_drsub */
/* Demangled: __aeabi_drsub */
int __aeabi_drsub(void);

/* Symbol: __aeabi_cdcmple */
/* Demangled: __aeabi_cdcmple */
int __aeabi_cdcmple(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11getInstanceEi */
/* Demangled: NS3A::DualPdAlgo::getInstance(int) */
int _ZN4NS3A10DualPdAlgo11getInstanceEi(void);

/* Symbol: _ZN4NS3A10DualPdAlgo16countStrangePairEPtS1_R9PD_AREA_TiPiS4_PS4_S5_ */
/* Demangled: NS3A::DualPdAlgo::countStrangePair(unsigned short*, unsigned short*, PD_AREA_T&, int, int*, int*, int**, int**) */
int _ZN4NS3A10DualPdAlgo16countStrangePairEPtS1_R9PD_AREA_TiPiS4_PS4_S5_(void);

/* Symbol: _ZN4NS3A10DualPdAlgo15StorePropertiesEv */
/* Demangled: NS3A::DualPdAlgo::StoreProperties() */
int _ZN4NS3A10DualPdAlgo15StorePropertiesEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T */
/* Demangled: NS3A::DualPdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
int _ZN4NS3A10DualPdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv */
/* Demangled: NS3A::VPUPdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
int _ZN4NS3A9VPUPdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo12interpPDLineEPtiS1_iS1_ */
/* Demangled: NS3A::DualPdAlgo::interpPDLine(unsigned short*, int, unsigned short*, int, unsigned short*) */
int _ZN4NS3A10DualPdAlgo12interpPDLineEPtiS1_iS1_(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _ZN4NS3A6AfAlgo11hb_isFsOnPLEPKxS2_RxS3_S3_S3_i */
/* Demangled: NS3A::AfAlgo::hb_isFsOnPL(long long const*, long long const*, long long&, long long&, long long&, long long&, int) */
int _ZN4NS3A6AfAlgo11hb_isFsOnPLEPKxS2_RxS3_S3_S3_i(void);

/* Symbol: _ZN4NS3A6PdAlgo16checkTuningParamEv */
/* Demangled: NS3A::PdAlgo::checkTuningParam() */
int _ZN4NS3A6PdAlgo16checkTuningParamEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11evalPDBlockER9PD_AREA_TPtS3_iPiS4_ */
/* Demangled: NS3A::DualPdAlgo::evalPDBlock(PD_AREA_T&, unsigned short*, unsigned short*, int, int*, int*) */
int _ZN4NS3A10DualPdAlgo11evalPDBlockER9PD_AREA_TPtS3_iPiS4_(void);

/* Symbol: __aeabi_dsub */
/* Demangled: __aeabi_dsub */
int __aeabi_dsub(void);

/* Symbol: _ZN4NS3A6AfAlgo24hb_updatePdSelSpatialTblEv */
/* Demangled: NS3A::AfAlgo::hb_updatePdSelSpatialTbl() */
int _ZN4NS3A6AfAlgo24hb_updatePdSelSpatialTblEv(void);

/* Symbol: __gedf2 */
/* Demangled: __gedf2 */
int __gedf2(void);

/* Symbol: gPdDbgData */
/* Demangled: gPdDbgData */
extern void* gPdDbgData;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _Z17GenPDRatioFullMapiiiPtiiS_ */
/* Demangled: GenPDRatioFullMap(int, int, int, unsigned short*, int, int, unsigned short*) */
int _Z17GenPDRatioFullMapiiiPtiiS_(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _ZN4NS3A6PdAlgo15calFocusLensPosEffi */
/* Demangled: NS3A::PdAlgo::calFocusLensPos(float, float, int) */
int _ZN4NS3A6PdAlgo15calFocusLensPosEffi(void);

/* Symbol: _ZN4NS3A6PdAlgo13interpMapLineEPtiS1_S1_ii */
/* Demangled: NS3A::PdAlgo::interpMapLine(unsigned short*, int, unsigned short*, unsigned short*, int, int) */
int _ZN4NS3A6PdAlgo13interpMapLineEPtiS1_S1_ii(void);

/* Symbol: __ledf2 */
/* Demangled: __ledf2 */
int __ledf2(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: __floatunsisf */
/* Demangled: __floatunsisf */
int __floatunsisf(void);

/* Symbol: _ZN4NS3A6AfAlgo12hb_isPLSceneEi */
/* Demangled: NS3A::AfAlgo::hb_isPLScene(int) */
int _ZN4NS3A6AfAlgo12hb_isPLSceneEi(void);

/* Symbol: _ZN4NS3A6PdAlgo16getRotatePosBuffEPiS1_i */
/* Demangled: NS3A::PdAlgo::getRotatePosBuff(int*, int*, int) */
int _ZN4NS3A6PdAlgo16getRotatePosBuffEPiS1_i(void);

/* Symbol: _ZN4NS3A6PdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv */
/* Demangled: NS3A::PdAlgo::extractPD(PD_EXTRACT_INPUT_T&, PD_EXTRACT_DATA_T&, void*) */
int _ZN4NS3A6PdAlgo9extractPDER18PD_EXTRACT_INPUT_TR17PD_EXTRACT_DATA_TPv(void);

/* Symbol: _ZN4NS3A6AfAlgo10findPeakMZENS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::findPeakMZ(NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo10findPeakMZENS_9FV_MODE_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo13_PrintSyncLogEiR13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_PrintSyncLog(int, AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo13_PrintSyncLogEiR13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T */
/* Demangled: NS3A::VPUPdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
int _ZN4NS3A9VPUPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN4NS3A6AfAlgo12CheckRiskExtEv */
/* Demangled: NS3A::AfAlgo::CheckRiskExt() */
int _ZN4NS3A6AfAlgo12CheckRiskExtEv(void);

/* Symbol: _ZN4NS3A6PdAlgo13getBlkFromWinEPPtS1_R9PD_AREA_TS4_ */
/* Demangled: NS3A::PdAlgo::getBlkFromWin(unsigned short**, unsigned short*, PD_AREA_T&, PD_AREA_T&) */
int _ZN4NS3A6PdAlgo13getBlkFromWinEPPtS1_R9PD_AREA_TS4_(void);

/* Symbol: gPdDbgExifData */
/* Demangled: gPdDbgExifData */
extern void* gPdDbgExifData;

/* Symbol: __cmpdf2 */
/* Demangled: __cmpdf2 */
int __cmpdf2(void);

/* Symbol: _ZN4NS3A6PdAlgoC1EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::PdAlgo::PdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A6PdAlgoC1EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: gDPdDbgExifDataCnt */
/* Demangled: gDPdDbgExifDataCnt */
extern void* gDPdDbgExifDataCnt;

/* Symbol: _Z26CalBufferCheckSum4AlignTmpPvi */
/* Demangled: CalBufferCheckSum4AlignTmp(void*, int) */
int _Z26CalBufferCheckSum4AlignTmpPvi(void);

/* Symbol: __addsf3 */
/* Demangled: __addsf3 */
int __addsf3(void);

/* Symbol: _ZN4NS3A6PdAlgo10sumItrpMapEPPtS1_iii */
/* Demangled: NS3A::PdAlgo::sumItrpMap(unsigned short**, unsigned short*, int, int, int) */
int _ZN4NS3A6PdAlgo10sumItrpMapEPPtS1_iii(void);

/* Symbol: _ZN4NS3A6PdAlgo13updatePDParamER10PD_NVRAM_T */
/* Demangled: NS3A::PdAlgo::updatePDParam(PD_NVRAM_T&) */
int _ZN4NS3A6PdAlgo13updatePDParamER10PD_NVRAM_T(void);

/* Symbol: _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE */
/* Demangled: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE;

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: _ZN4NS3A10DualPdAlgo13parseCaliDataEPhi */
/* Demangled: NS3A::DualPdAlgo::parseCaliData(unsigned char*, int) */
int _ZN4NS3A10DualPdAlgo13parseCaliDataEPhi(void);

/* Symbol: _ZN4NS3A6PdAlgo10parseFocusEPhi */
/* Demangled: NS3A::PdAlgo::parseFocus(unsigned char*, int) */
int _ZN4NS3A6PdAlgo10parseFocusEPhi(void);

/* Symbol: _ZN4NS3A6AfAlgo14hb_fsROISelectERi */
/* Demangled: NS3A::AfAlgo::hb_fsROISelect(int&) */
int _ZN4NS3A6AfAlgo14hb_fsROISelectERi(void);

/* Symbol: _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<PD_MERGED_AREA_T_, std::__1::allocator<PD_MERGED_AREA_T_> >::__push_back_slow_path<PD_MERGED_AREA_T_ const&>(PD_MERGED_AREA_T_ const&) */
int _ZNSt3__16vectorI17PD_MERGED_AREA_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: gPdDbgSceneCnt */
/* Demangled: gPdDbgSceneCnt */
extern void* gPdDbgSceneCnt;

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: _Z10PrintMRectR17PD_MERGED_AREA_T_ */
/* Demangled: PrintMRect(PD_MERGED_AREA_T_&) */
int _Z10PrintMRectR17PD_MERGED_AREA_T_(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _Z12CalPtrResultP15MEM_INFO_RESULTPhS1_iic */
/* Demangled: CalPtrResult(MEM_INFO_RESULT*, unsigned char*, unsigned char*, int, int, char) */
int _Z12CalPtrResultP15MEM_INFO_RESULTPhS1_iic(void);

/* Symbol: __aeabi_ui2d */
/* Demangled: __aeabi_ui2d */
int __aeabi_ui2d(void);

/* Symbol: _ZN4NS3A10DualPdAlgo9sumPDDataEPPiPtR9PD_AREA_T */
/* Demangled: NS3A::DualPdAlgo::sumPDData(int**, unsigned short*, PD_AREA_T&) */
int _ZN4NS3A10DualPdAlgo9sumPDDataEPPiPtR9PD_AREA_T(void);

/* Symbol: _Z10RotateDataccPtii */
/* Demangled: RotateData(char, char, unsigned short*, int, int) */
int _Z10RotateDataccPtii(void);

/* Symbol: __aeabi_ui2f */
/* Demangled: __aeabi_ui2f */
int __aeabi_ui2f(void);

/* Symbol: __subdf3 */
/* Demangled: __subdf3 */
int __subdf3(void);

/* Symbol: _ZN4NS3A10DualPdAlgo20interpPDLineUpSampleEPjiS1_iji */
/* Demangled: NS3A::DualPdAlgo::interpPDLineUpSample(unsigned int*, int, unsigned int*, int, unsigned int, int) */
int _ZN4NS3A10DualPdAlgo20interpPDLineUpSampleEPjiS1_iji(void);

/* Symbol: __aeabi_cdcmpeq */
/* Demangled: __aeabi_cdcmpeq */
int __aeabi_cdcmpeq(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: _ZN4NS3A6PdAlgo11interpRatioEii */
/* Demangled: NS3A::PdAlgo::interpRatio(int, int) */
int _ZN4NS3A6PdAlgo11interpRatioEii(void);

/* Symbol: _ZN4NS3A6AfAlgo12_GetSyncInfoER13AF_SyncInfo_T */
/* Demangled: NS3A::AfAlgo::_GetSyncInfo(AF_SyncInfo_T&) */
int _ZN4NS3A6AfAlgo12_GetSyncInfoER13AF_SyncInfo_T(void);

/* Symbol: _ZN4NS3A6AfAlgo18LensZoomEffectCorrEv */
/* Demangled: NS3A::AfAlgo::LensZoomEffectCorr() */
int _ZN4NS3A6AfAlgo18LensZoomEffectCorrEv(void);

/* Symbol: _ZN4NS3A6PdAlgo11parseLRDiffEPhi */
/* Demangled: NS3A::PdAlgo::parseLRDiff(unsigned char*, int) */
int _ZN4NS3A6PdAlgo11parseLRDiffEPhi(void);

/* Symbol: __floatunsidf */
/* Demangled: __floatunsidf */
int __floatunsidf(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: __aeabi_dcmple */
/* Demangled: __aeabi_dcmple */
int __aeabi_dcmple(void);

/* Symbol: gPdDbgStartLog */
/* Demangled: gPdDbgStartLog */
extern void* gPdDbgStartLog;

/* Symbol: _ZN4NS3A10DualPdAlgo12getDebugInfoER15AF_DEBUG_INFO_T */
/* Demangled: NS3A::DualPdAlgo::getDebugInfo(AF_DEBUG_INFO_T&) */
int _ZN4NS3A10DualPdAlgo12getDebugInfoER15AF_DEBUG_INFO_T(void);

/* Symbol: _ZN4NS3A6PdAlgo9getPDSizeER9PD_AREA_TRiS3_ */
/* Demangled: NS3A::PdAlgo::getPDSize(PD_AREA_T&, int&, int&) */
int _ZN4NS3A6PdAlgo9getPDSizeER9PD_AREA_TRiS3_(void);

/* Symbol: _ZN4NS3A6AfAlgo14pl_updateStatsEi */
/* Demangled: NS3A::AfAlgo::pl_updateStats(int) */
int _ZN4NS3A6AfAlgo14pl_updateStatsEi(void);

/* Symbol: _ZN4NS3A6AfAlgo8calStatsEv */
/* Demangled: NS3A::AfAlgo::calStats() */
int _ZN4NS3A6AfAlgo8calStatsEv(void);

/* Symbol: _ZN4NS3A6AfAlgo13_getPosRecBufEv */
/* Demangled: NS3A::AfAlgo::_getPosRecBuf() */
int _ZN4NS3A6AfAlgo13_getPosRecBufEv(void);

/* Symbol: _ZNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<PD_ROI_INFO_T_, std::__1::allocator<PD_ROI_INFO_T_> >::__push_back_slow_path<PD_ROI_INFO_T_ const&>(PD_ROI_INFO_T_ const&) */
int _ZNSt3__16vectorI14PD_ROI_INFO_T_NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: __aeabi_dmul */
/* Demangled: __aeabi_dmul */
int __aeabi_dmul(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN4NS3A6AfAlgo21CheckExtCurveAbnormalEi */
/* Demangled: NS3A::AfAlgo::CheckExtCurveAbnormal(int) */
int _ZN4NS3A6AfAlgo21CheckExtCurveAbnormalEi(void);

/* Symbol: _ZN4NS3A6PdAlgo5sumPDEPPjS2_RiR9PD_AREA_TS5_PtS6_ */
/* Demangled: NS3A::PdAlgo::sumPD(unsigned int**, unsigned int**, int&, PD_AREA_T&, PD_AREA_T&, unsigned short*, unsigned short*) */
int _ZN4NS3A6PdAlgo5sumPDEPPjS2_RiR9PD_AREA_TS5_PtS6_(void);

/* Symbol: _Z26ion_cache_invalid_range_vaiiPvj */
/* Demangled: ion_cache_invalid_range_va(int, int, void*, unsigned int) */
int _Z26ion_cache_invalid_range_vaiiPvj(void);

/* Symbol: _ZN4NS3A6AfAlgo10pl_setGSATEv */
/* Demangled: NS3A::AfAlgo::pl_setGSAT() */
int _ZN4NS3A6AfAlgo10pl_setGSATEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11interpRatioEii */
/* Demangled: NS3A::DualPdAlgo::interpRatio(int, int) */
int _ZN4NS3A10DualPdAlgo11interpRatioEii(void);

/* Symbol: gPdDbgExifDataCnt */
/* Demangled: gPdDbgExifDataCnt */
extern void* gPdDbgExifDataCnt;

/* Symbol: _ZN4NS3A6AfAlgo8getLmMapERNS0_17AF_FDLM_EXTRACT_TERK6AREA_tiRK9AF_AREA_T */
/* Demangled: NS3A::AfAlgo::getLmMap(NS3A::AfAlgo::AF_FDLM_EXTRACT_T&, AREA_t const&, int, AF_AREA_T const&) */
int _ZN4NS3A6AfAlgo8getLmMapERNS0_17AF_FDLM_EXTRACT_TERK6AREA_tiRK9AF_AREA_T(void);

/* Symbol: _ZN4NS3A6PdAlgoD0Ev */
/* Demangled: NS3A::PdAlgo::~PdAlgo() */
int _ZN4NS3A6PdAlgoD0Ev(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo10releaseIONEv */
/* Demangled: NS3A::VPUPdAlgo::releaseION() */
int _ZN4NS3A9VPUPdAlgo10releaseIONEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS1_S1_ */
/* Demangled: NS3A::DualPdAlgo::interpPD(unsigned short**, unsigned short**, int&, int&, PD_AREA_T&, unsigned short*, unsigned short*) */
int _ZN4NS3A10DualPdAlgo8interpPDEPPtS2_RiS3_R9PD_AREA_TS1_S1_(void);

/* Symbol: _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE */
/* Demangled: vtable for VPUPdAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTV12VPUPdAlgoDevILN11NSIspTuning12ESensorDev_TE2EE;

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: __aeabi_dcmplt */
/* Demangled: __aeabi_dcmplt */
int __aeabi_dcmplt(void);

/* Symbol: _ZN4NS3A6PdAlgo14applyGaussFiltEPjR9PD_AREA_T */
/* Demangled: NS3A::PdAlgo::applyGaussFilt(unsigned int*, PD_AREA_T&) */
int _ZN4NS3A6PdAlgo14applyGaussFiltEPjR9PD_AREA_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11compPdRatioER9PD_AREA_TS2_Pt */
/* Demangled: NS3A::DualPdAlgo::compPdRatio(PD_AREA_T&, PD_AREA_T&, unsigned short*) */
int _ZN4NS3A10DualPdAlgo11compPdRatioER9PD_AREA_TS2_Pt(void);

/* Symbol: _ZN4NS3A10DualPdAlgoC2EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::DualPdAlgo::DualPdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A10DualPdAlgoC2EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo22hb_getPdSelDistanceTblEv */
/* Demangled: NS3A::AfAlgo::hb_getPdSelDistanceTbl() */
int _ZN4NS3A6AfAlgo22hb_getPdSelDistanceTblEv(void);

/* Symbol: __subsf3 */
/* Demangled: __subsf3 */
int __subsf3(void);

/* Symbol: _ZN4NS3A6AfAlgo7AFDebugEjjii */
/* Demangled: NS3A::AfAlgo::AFDebug(unsigned int, unsigned int, int, int) */
int _ZN4NS3A6AfAlgo7AFDebugEjjii(void);

/* Symbol: _ZN4NS3A6AfAlgo10getAFValueENS_9FV_MODE_TE */
/* Demangled: NS3A::AfAlgo::getAFValue(NS3A::FV_MODE_T) */
int _ZN4NS3A6AfAlgo10getAFValueENS_9FV_MODE_TE(void);

/* Symbol: _ZN4NS3A6AfAlgo19hb_PDResultClassifyERiS1_S1_S1_ */
/* Demangled: NS3A::AfAlgo::hb_PDResultClassify(int&, int&, int&, int&) */
int _ZN4NS3A6AfAlgo19hb_PDResultClassifyERiS1_S1_S1_(void);

/* Symbol: _ZN4NS3A6PdAlgo21getPixelFromUnpackRawEPviii */
/* Demangled: NS3A::PdAlgo::getPixelFromUnpackRaw(void*, int, int, int) */
int _ZN4NS3A6PdAlgo21getPixelFromUnpackRawEPviii(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE */
/* Demangled: vtable for DualPdAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTV13DualPdAlgoDevILN11NSIspTuning12ESensorDev_TE1EE;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN4NS3A6PdAlgo13parseCaliDataEPhi */
/* Demangled: NS3A::PdAlgo::parseCaliData(unsigned char*, int) */
int _ZN4NS3A6PdAlgo13parseCaliDataEPhi(void);

/* Symbol: _ZN4NS3A10DualPdAlgo12rotatePDInfoER9PD_AREA_TPtS3_ */
/* Demangled: NS3A::DualPdAlgo::rotatePDInfo(PD_AREA_T&, unsigned short*, unsigned short*) */
int _ZN4NS3A10DualPdAlgo12rotatePDInfoER9PD_AREA_TPtS3_(void);

/* Symbol: __floatsisf */
/* Demangled: __floatsisf */
int __floatsisf(void);

/* Symbol: __aeabi_i2d */
/* Demangled: __aeabi_i2d */
int __aeabi_i2d(void);

/* Symbol: _ZN4NS3A6AfAlgo18get1DInterpolationEiiiii */
/* Demangled: NS3A::AfAlgo::get1DInterpolation(int, int, int, int, int) */
int _ZN4NS3A6AfAlgo18get1DInterpolationEiiiii(void);

/* Symbol: _Z14CalPDInfoBytesiii */
/* Demangled: CalPDInfoBytes(int, int, int) */
int _Z14CalPDInfoBytesiii(void);

/* Symbol: _ZN4NS3A10DualPdAlgo10calSrchRngER9PD_AREA_TiRiS3_ */
/* Demangled: NS3A::DualPdAlgo::calSrchRng(PD_AREA_T&, int, int&, int&) */
int _ZN4NS3A10DualPdAlgo10calSrchRngER9PD_AREA_TiRiS3_(void);

/* Symbol: __aeabi_i2f */
/* Demangled: __aeabi_i2f */
int __aeabi_i2f(void);

/* Symbol: _ZN4NS3A6AfAlgo11_MiniAFSeekEv */
/* Demangled: NS3A::AfAlgo::_MiniAFSeek() */
int _ZN4NS3A6AfAlgo11_MiniAFSeekEv(void);

/* Symbol: _ZNSt3__16vectorI16TimeProfListItemNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<TimeProfListItem, std::__1::allocator<TimeProfListItem> >::__append(unsigned int) */
int _ZNSt3__16vectorI16TimeProfListItemNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN4NS3A10DualPdAlgo9interpVecEPjiS1_i */
/* Demangled: NS3A::DualPdAlgo::interpVec(unsigned int*, int, unsigned int*, int) */
int _ZN4NS3A10DualPdAlgo9interpVecEPjiS1_i(void);

/* Symbol: __aeabi_fsub */
/* Demangled: __aeabi_fsub */
int __aeabi_fsub(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _Z18UnpackVPUProcINFO2PvjPP13VPU_PROC_INFO */
/* Demangled: UnpackVPUProcINFO2(void*, unsigned int, VPU_PROC_INFO**) */
int _Z18UnpackVPUProcINFO2PvjPP13VPU_PROC_INFO(void);

/* Symbol: _Z9CalPtrROIP12MEM_INFO_ROIPhS1_ic */
/* Demangled: CalPtrROI(MEM_INFO_ROI*, unsigned char*, unsigned char*, int, char) */
int _Z9CalPtrROIP12MEM_INFO_ROIPhS1_ic(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void);

/* Symbol: _ZN4NS3A6AfAlgoD1Ev */
/* Demangled: NS3A::AfAlgo::~AfAlgo() */
int _ZN4NS3A6AfAlgoD1Ev(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIyiEENS_19__map_value_compareIyS2_NS_4lessIyEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, int>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIyiEENS_19__map_value_compareIyS2_NS_4lessIyEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: __eqdf2 */
/* Demangled: __eqdf2 */
int __eqdf2(void);

/* Symbol: __aeabi_cdrcmple */
/* Demangled: __aeabi_cdrcmple */
int __aeabi_cdrcmple(void);

/* Symbol: _ZN4NS3A6AfAlgo17LensZoomEffectSetEv */
/* Demangled: NS3A::AfAlgo::LensZoomEffectSet() */
int _ZN4NS3A6AfAlgo17LensZoomEffectSetEv(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11sumItrpDataEPPjPtiii */
/* Demangled: NS3A::DualPdAlgo::sumItrpData(unsigned int**, unsigned short*, int, int, int) */
int _ZN4NS3A10DualPdAlgo11sumItrpDataEPPjPtiii(void);

/* Symbol: _ZN4NS3A10DualPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T */
/* Demangled: NS3A::DualPdAlgo::initPD(PD_INIT_T&, PD_CONFIG_T*) */
int _ZN4NS3A10DualPdAlgo6initPDER9PD_INIT_TP11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo11getInstanceEi */
/* Demangled: NS3A::VPUPdAlgo::getInstance(int) */
int _ZN4NS3A9VPUPdAlgo11getInstanceEi(void);

/* Symbol: _ZN4NS3A10DualPdAlgo13updatePDParamER10PD_NVRAM_T */
/* Demangled: NS3A::DualPdAlgo::updatePDParam(PD_NVRAM_T&) */
int _ZN4NS3A10DualPdAlgo13updatePDParamER10PD_NVRAM_T(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN4NS3A9VPUPdAlgoC2EN11NSIspTuning12ESensorDev_TE */
/* Demangled: NS3A::VPUPdAlgo::VPUPdAlgo(NSIspTuning::ESensorDev_T) */
int _ZN4NS3A9VPUPdAlgoC2EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: __aeabi_dcmpeq */
/* Demangled: __aeabi_dcmpeq */
int __aeabi_dcmpeq(void);

/* Symbol: _ZN4NS3A7IPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv */
/* Demangled: NS3A::IPdAlgo::extractAllPD(int, PD_EXTRACT_INPUT_T**, PD_EXTRACT_DATA_T**, void**) */
int _ZN4NS3A7IPdAlgo12extractAllPDEiPP18PD_EXTRACT_INPUT_TPP17PD_EXTRACT_DATA_TPPv(void);

/* Symbol: __aeabi_dadd */
/* Demangled: __aeabi_dadd */
int __aeabi_dadd(void);

/* Symbol: _ZN4NS3A6AfAlgo14hb_isPLFittingEiiiiiixxx */
/* Demangled: NS3A::AfAlgo::hb_isPLFitting(int, int, int, int, int, int, long long, long long, long long) */
int _ZN4NS3A6AfAlgo14hb_isPLFittingEiiiiiixxx(void);

/* Symbol: _ZN4NS3A9VPUPdAlgo14setPDBlockInfoER11PD_CONFIG_T */
/* Demangled: NS3A::VPUPdAlgo::setPDBlockInfo(PD_CONFIG_T&) */
int _ZN4NS3A9VPUPdAlgo14setPDBlockInfoER11PD_CONFIG_T(void);

/* Symbol: _ZN4NS3A6PdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T */
/* Demangled: NS3A::PdAlgo::handlePD(PD_INPUT_T&, PD_OUTPUT_T&) */
int _ZN4NS3A6PdAlgo8handlePDER10PD_INPUT_TR11PD_OUTPUT_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo18getInfoForHybridAFEPi */
/* Demangled: NS3A::DualPdAlgo::getInfoForHybridAF(int*) */
int _ZN4NS3A10DualPdAlgo18getInfoForHybridAFEPi(void);

/* Symbol: _ZN4NS3A6PdAlgo11rotatePDPosEiiii */
/* Demangled: NS3A::PdAlgo::rotatePDPos(int, int, int, int) */
int _ZN4NS3A6PdAlgo11rotatePDPosEiiii(void);

/* Symbol: _ZN4NS3A6PdAlgoD1Ev */
/* Demangled: NS3A::PdAlgo::~PdAlgo() */
int _ZN4NS3A6PdAlgoD1Ev(void);

/* Symbol: _ZN4NS3A10DualPdAlgo11parseLRDiffEPhi */
/* Demangled: NS3A::DualPdAlgo::parseLRDiff(unsigned char*, int) */
int _ZN4NS3A10DualPdAlgo11parseLRDiffEPhi(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZN4NS3A7IPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T */
/* Demangled: NS3A::IPdAlgo::handleAllPD(int, PD_INPUT_T**, PD_OUTPUT_T**) */
int _ZN4NS3A7IPdAlgo11handleAllPDEiPP10PD_INPUT_TPP11PD_OUTPUT_T(void);

/* Symbol: _ZN4NS3A10DualPdAlgo18calConfidenceLevelEffii */
/* Demangled: NS3A::DualPdAlgo::calConfidenceLevel(float, float, int, int) */
int _ZN4NS3A10DualPdAlgo18calConfidenceLevelEffii(void);

/* Symbol: _ZN4NS3A6AfAlgo15calAdpCompEQPosEiiiii */
/* Demangled: NS3A::AfAlgo::calAdpCompEQPos(int, int, int, int, int) */
int _ZN4NS3A6AfAlgo15calAdpCompEQPosEiiiii(void);

/* Symbol: _ZN4NS3A10DualPdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_ */
/* Demangled: NS3A::DualPdAlgo::extractPDPixel(void*, PD_AREA_T&, unsigned short**, unsigned short**) */
int _ZN4NS3A10DualPdAlgo14extractPDPixelEPvR9PD_AREA_TPPtS5_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_AF_H */
