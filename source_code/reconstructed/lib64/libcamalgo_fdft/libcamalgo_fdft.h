/*
 * Reverse-Engineered ABI Specification for: libcamalgo.fdft.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.fdft.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_FDFT_H
#define BEGONIA_RE_LIBCAMALGO_FDFT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN8SwSdMainD0Ev */
/* Demangled: SwSdMain::~SwSdMain() */
int _ZN8SwSdMainD0Ev(void);

/* Symbol: _ZN6OtCore24Compute_Target_HistogramEPhtthii */
/* Demangled: OtCore::Compute_Target_Histogram(unsigned char*, unsigned short, unsigned short, unsigned char, int, int) */
int _ZN6OtCore24Compute_Target_HistogramEPhtthii(void);

/* Symbol: rip_angle_map_tbl */
/* Demangled: rip_angle_map_tbl */
extern void* rip_angle_map_tbl;

/* Symbol: _ZN10AppFDFT_SW29Main_PickNewFacesInTmpResultsEv */
/* Demangled: AppFDFT_SW::Main_PickNewFacesInTmpResults() */
int _ZN10AppFDFT_SW29Main_PickNewFacesInTmpResultsEv(void);

/* Symbol: _ZN13ERTDetectorFP20ComputeSRT_fixedPVerEPiS0_S0_i */
/* Demangled: ERTDetectorFP::ComputeSRT_fixedPVer(int*, int*, int*, int) */
int _ZN13ERTDetectorFP20ComputeSRT_fixedPVerEPiS0_S0_i(void);

/* Symbol: UREE_RegisterSharedmem */
/* Demangled: UREE_RegisterSharedmem */
int UREE_RegisterSharedmem(void);

/* Symbol: TZ_GetErrorString */
/* Demangled: TZ_GetErrorString */
int TZ_GetErrorString(void);

/* Symbol: _ZN13FdSvmClassifyC2Ev */
/* Demangled: FdSvmClassify::FdSvmClassify() */
int _ZN13FdSvmClassifyC2Ev(void);

/* Symbol: _ZN13ERTDetectorFP11UpdateShapeEPiS0_ */
/* Demangled: ERTDetectorFP::UpdateShape(int*, int*) */
int _ZN13ERTDetectorFP11UpdateShapeEPiS0_(void);

/* Symbol: _ZN8SwFdMain14OTSizeToFDSizeEP19FACEDETECT_FACEINFO */
/* Demangled: SwFdMain::OTSizeToFDSize(FACEDETECT_FACEINFO*) */
int _ZN8SwFdMain14OTSizeToFDSizeEP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN10AppFDFT_SW36Main_MergeLastAndOtFacesIntoFdResultEv */
/* Demangled: AppFDFT_SW::Main_MergeLastAndOtFacesIntoFdResult() */
int _ZN10AppFDFT_SW36Main_MergeLastAndOtFacesIntoFdResultEv(void);

/* Symbol: _ZN8SwSdMain8SWSDInitE21SMILEDETECT_INIT_DATAP23SMILEDETECT_INIT_RESULT */
/* Demangled: SwSdMain::SWSDInit(SMILEDETECT_INIT_DATA, SMILEDETECT_INIT_RESULT*) */
int _ZN8SwSdMain8SWSDInitE21SMILEDETECT_INIT_DATAP23SMILEDETECT_INIT_RESULT(void);

/* Symbol: AnchorIndex */
/* Demangled: AnchorIndex */
extern void* AnchorIndex;

/* Symbol: _ZN13ERTDetectorFP12TraverseTreeEPhiPi */
/* Demangled: ERTDetectorFP::TraverseTree(unsigned char*, int, int*) */
int _ZN13ERTDetectorFP12TraverseTreeEPhiPi(void);

/* Symbol: UREE_ION_CP_Chm2Shm */
/* Demangled: UREE_ION_CP_Chm2Shm */
int UREE_ION_CP_Chm2Shm(void);

/* Symbol: _ZN10AppFDFT_SW9FDVTResetEv */
/* Demangled: AppFDFT_SW::FDVTReset() */
int _ZN10AppFDFT_SW9FDVTResetEv(void);

/* Symbol: _ZN6FdCore6RunSVMEP13fd_cal_structP21FD_TUNING_PARA_STRUCTP16FD_RESULT_STRUCTPhb */
/* Demangled: FdCore::RunSVM(fd_cal_struct*, FD_TUNING_PARA_STRUCT*, FD_RESULT_STRUCT*, unsigned char*, bool) */
int _ZN6FdCore6RunSVMEP13fd_cal_structP21FD_TUNING_PARA_STRUCTP16FD_RESULT_STRUCTPhb(void);

/* Symbol: _ZN6OtCore17get_overlap_indexEiiiiiiii */
/* Demangled: OtCore::get_overlap_index(int, int, int, int, int, int, int, int) */
int _ZN6OtCore17get_overlap_indexEiiiiiiii(void);

/* Symbol: UREE_AllocSecuremem */
/* Demangled: UREE_AllocSecuremem */
int UREE_AllocSecuremem(void);

/* Symbol: _ZN10AppFDFT_SW20MergeGender2FDResultEPsii */
/* Demangled: AppFDFT_SW::MergeGender2FDResult(short*, int, int) */
int _ZN10AppFDFT_SW20MergeGender2FDResultEPsii(void);

/* Symbol: UREE_ReleaseTzmem */
/* Demangled: UREE_ReleaseTzmem */
int UREE_ReleaseTzmem(void);

/* Symbol: leafvalue */
/* Demangled: leafvalue */
extern void* leafvalue;

/* Symbol: _ZN10AppFDFT_SW15ColorStatisticsEjji */
/* Demangled: AppFDFT_SW::ColorStatistics(unsigned int, unsigned int, int) */
int _ZN10AppFDFT_SW15ColorStatisticsEjji(void);

/* Symbol: _ZN10AppFDFT_SW27Main_RemoveBoundaryFdResultEv */
/* Demangled: AppFDFT_SW::Main_RemoveBoundaryFdResult() */
int _ZN10AppFDFT_SW27Main_RemoveBoundaryFdResultEv(void);

/* Symbol: _ZN6FdCore17FdCoreSetProcInfoEP23FD_SET_PROC_INFO_STRUCT */
/* Demangled: FdCore::FdCoreSetProcInfo(FD_SET_PROC_INFO_STRUCT*) */
int _ZN6FdCore17FdCoreSetProcInfoEP23FD_SET_PROC_INFO_STRUCT(void);

/* Symbol: UREE_AllocSecureMultichunkmem */
/* Demangled: UREE_AllocSecureMultichunkmem */
int UREE_AllocSecureMultichunkmem(void);

/* Symbol: _ZN10AppFDFT_SW18FDAssignIDandOrderEv */
/* Demangled: AppFDFT_SW::FDAssignIDandOrder() */
int _ZN10AppFDFT_SW18FDAssignIDandOrderEv(void);

/* Symbol: _ZN12UtlSwRotatorD0Ev */
/* Demangled: UtlSwRotator::~UtlSwRotator() */
int _ZN12UtlSwRotatorD0Ev(void);

/* Symbol: _ZN12MTKDetection17FDVTMainJoinPhaseEPhPA1024_si */
/* Demangled: MTKDetection::FDVTMainJoinPhase(unsigned char*, short (*) [1024], int) */
int _ZN12MTKDetection17FDVTMainJoinPhaseEPhPA1024_si(void);

/* Symbol: UREE_TeeServiceCall */
/* Demangled: UREE_TeeServiceCall */
int UREE_TeeServiceCall(void);

/* Symbol: _ZN10AppFDFT_SW19FDPostUpdateandDumpEv */
/* Demangled: AppFDFT_SW::FDPostUpdateandDump() */
int _ZN10AppFDFT_SW19FDPostUpdateandDumpEv(void);

/* Symbol: _ZN6FdCore13ExtractOtFaceEv */
/* Demangled: FdCore::ExtractOtFace() */
int _ZN6FdCore13ExtractOtFaceEv(void);

/* Symbol: UREE_AppendSecurechunkmem */
/* Demangled: UREE_AppendSecurechunkmem */
int UREE_AppendSecurechunkmem(void);

/* Symbol: _ZN13ERTDetectorFP37ExtractFeatureValue_FlipImgCoordinateEPhiiPiS1_S1_S0_ */
/* Demangled: ERTDetectorFP::ExtractFeatureValue_FlipImgCoordinate(unsigned char*, int, int, int*, int*, int*, unsigned char*) */
int _ZN13ERTDetectorFP37ExtractFeatureValue_FlipImgCoordinateEPhiiPiS1_S1_S0_(void);

/* Symbol: _ZN6FdCoreD0Ev */
/* Demangled: FdCore::~FdCore() */
int _ZN6FdCoreD0Ev(void);

/* Symbol: _ZN18TrackingTrajectoryC1Ev */
/* Demangled: TrackingTrajectory::TrackingTrajectory() */
int _ZN18TrackingTrajectoryC1Ev(void);

/* Symbol: _ZN13FdSvmClassify26fd_execute_horizontal_flipEP13FD_SGrayImg_sS1_ */
/* Demangled: FdSvmClassify::fd_execute_horizontal_flip(FD_SGrayImg_s*, FD_SGrayImg_s*) */
int _ZN13FdSvmClassify26fd_execute_horizontal_flipEP13FD_SGrayImg_sS1_(void);

/* Symbol: _ZN10AppFDFT_SW14Convert2SquareERiS0_S0_S0_ */
/* Demangled: AppFDFT_SW::Convert2Square(int&, int&, int&, int&) */
int _ZN10AppFDFT_SW14Convert2SquareERiS0_S0_S0_(void);

/* Symbol: _ZN10AppFDFT_SW15PrioritySortingEv */
/* Demangled: AppFDFT_SW::PrioritySorting() */
int _ZN10AppFDFT_SW15PrioritySortingEv(void);

/* Symbol: _ZN10AppFDFT_SW19Main_GfdFramePhase2Eb */
/* Demangled: AppFDFT_SW::Main_GfdFramePhase2(bool) */
int _ZN10AppFDFT_SW19Main_GfdFramePhase2Eb(void);

/* Symbol: _ZN12MTKDetection14createInstanceE13DRVFDObject_s */
/* Demangled: MTKDetection::createInstance(DRVFDObject_s) */
int _ZN12MTKDetection14createInstanceE13DRVFDObject_s(void);

/* Symbol: _ZN13ERTDetectorFP11AssignModelEi */
/* Demangled: ERTDetectorFP::AssignModel(int) */
int _ZN13ERTDetectorFP11AssignModelEi(void);

/* Symbol: _ZN12MTKDetection16FDVTSetInputMTEEEjjPh */
/* Demangled: MTKDetection::FDVTSetInputMTEE(unsigned int, unsigned int, unsigned char*) */
int _ZN12MTKDetection16FDVTSetInputMTEEEjjPh(void);

/* Symbol: _ZN6SdCoreD2Ev */
/* Demangled: SdCore::~SdCore() */
int _ZN6SdCoreD2Ev(void);

/* Symbol: _ZN10AppFDFT_SW11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM */
/* Demangled: AppFDFT_SW::FDVTGetMode(FDVT_OPERATION_MODE_ENUM*) */
int _ZN10AppFDFT_SW11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM(void);

/* Symbol: _ZN9FdUtlCore24UtlCalFeatureValueShrinkEPKsS1_P22UTL_FEATURE_CAL_STRUCT */
/* Demangled: FdUtlCore::UtlCalFeatureValueShrink(short const*, short const*, UTL_FEATURE_CAL_STRUCT*) */
int _ZN9FdUtlCore24UtlCalFeatureValueShrinkEPKsS1_P22UTL_FEATURE_CAL_STRUCT(void);

/* Symbol: _ZN10AppFDFT_SW17FDVTMainPostPhaseEv */
/* Demangled: AppFDFT_SW::FDVTMainPostPhase() */
int _ZN10AppFDFT_SW17FDVTMainPostPhaseEv(void);

/* Symbol: _ZN6FdCore13FdCoreSetInfoEP18FD_SET_INFO_STRUCT */
/* Demangled: FdCore::FdCoreSetInfo(FD_SET_INFO_STRUCT*) */
int _ZN6FdCore13FdCoreSetInfoEP18FD_SET_INFO_STRUCT(void);

/* Symbol: _ZN6SdCore13SdCoreSetInfoEP18SD_SET_INFO_STRUCT */
/* Demangled: SdCore::SdCoreSetInfo(SD_SET_INFO_STRUCT*) */
int _ZN6SdCore13SdCoreSetInfoEP18SD_SET_INFO_STRUCT(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _Z16SetSmoothingParahRjS_S_S_RiS0_RhS0_S0_ */
/* Demangled: SetSmoothingPara(unsigned char, unsigned int&, unsigned int&, unsigned int&, unsigned int&, int&, int&, unsigned char&, int&, int&) */
int _Z16SetSmoothingParahRjS_S_S_RiS0_RhS0_S0_(void);

/* Symbol: _ZN8SwFdMain19CheckIfLockOtBufferEv */
/* Demangled: SwFdMain::CheckIfLockOtBuffer() */
int _ZN8SwFdMain19CheckIfLockOtBufferEv(void);

/* Symbol: _ZN10AppFDFT_SW11CropPatchesEPhiiiiiiii */
/* Demangled: AppFDFT_SW::CropPatches(unsigned char*, int, int, int, int, int, int, int, int) */
int _ZN10AppFDFT_SW11CropPatchesEPhiiiiiiii(void);

/* Symbol: _ZN12MTKDetection13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM */
/* Demangled: MTKDetection::FDVTGetResult(unsigned char*, FACEDETECT_TRACKING_RESULT_TYPE_ENUM) */
int _ZN12MTKDetection13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM(void);

/* Symbol: _ZN8SwFdMainD0Ev */
/* Demangled: SwFdMain::~SwFdMain() */
int _ZN8SwFdMainD0Ev(void);

/* Symbol: _ZN8SwSdMainD1Ev */
/* Demangled: SwSdMain::~SwSdMain() */
int _ZN8SwSdMainD1Ev(void);

/* Symbol: _ZN12MTKDetection15FDVTParseResultEjjjjjffj */
/* Demangled: MTKDetection::FDVTParseResult(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float, unsigned int) */
int _ZN12MTKDetection15FDVTParseResultEjjjjjffj(void);

/* Symbol: _ZN6FdCore19FacePrioritySortingEP13fd_cal_struct */
/* Demangled: FdCore::FacePrioritySorting(fd_cal_struct*) */
int _ZN6FdCore19FacePrioritySortingEP13fd_cal_struct(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN13ERTDetectorFPclEPhiiPibS1_S1_S0_S1_ */
/* Demangled: ERTDetectorFP::operator()(unsigned char*, int, int, int*, bool, int*, int*, unsigned char*, int*) */
int _ZN13ERTDetectorFPclEPhiiPibS1_S1_S0_S1_(void);

/* Symbol: _ZN10AppFDFT_SW11Main_OtCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO */
/* Demangled: AppFDFT_SW::Main_OtCall(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
int _ZN10AppFDFT_SW11Main_OtCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN6FdCore10GFD_ThreadEPv */
/* Demangled: FdCore::GFD_Thread(void*) */
int _ZN6FdCore10GFD_ThreadEPv(void);

/* Symbol: _ZN6SdCore17SdCoreSetProcInfoEP23SD_SET_PROC_INFO_STRUCT */
/* Demangled: SdCore::SdCoreSetProcInfo(SD_SET_PROC_INFO_STRUCT*) */
int _ZN6SdCore17SdCoreSetProcInfoEP23SD_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZN6FdCore11MergeResultEP13fd_cal_structtiiiiP16FD_RESULT_STRUCT */
/* Demangled: FdCore::MergeResult(fd_cal_struct*, unsigned short, int, int, int, int, FD_RESULT_STRUCT*) */
int _ZN6FdCore11MergeResultEP13fd_cal_structtiiiiP16FD_RESULT_STRUCT(void);

/* Symbol: _ZN12MTKDetection9FDVTResetEv */
/* Demangled: MTKDetection::FDVTReset() */
int _ZN12MTKDetection9FDVTResetEv(void);

/* Symbol: _ZTV8SwFdMain */
/* Demangled: vtable for SwFdMain */
extern void* _ZTV8SwFdMain;

/* Symbol: _ZN10AppFDFT_SW20Convert2UnpaddedYBndEi */
/* Demangled: AppFDFT_SW::Convert2UnpaddedYBnd(int) */
int _ZN10AppFDFT_SW20Convert2UnpaddedYBndEi(void);

/* Symbol: _ZN12UtlSwRotator13swYRotator270EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotator270(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator13swYRotator270EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _Z13CreateSessionPKcPj */
/* Demangled: CreateSession(char const*, unsigned int*) */
int _Z13CreateSessionPKcPj(void);

/* Symbol: _ZN12UtlSwRotator11getInstanceEv */
/* Demangled: UtlSwRotator::getInstance() */
int _ZN12UtlSwRotator11getInstanceEv(void);

/* Symbol: _ZN12UtlSwRotator19swYRotatorMirror000EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotatorMirror000(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator19swYRotatorMirror000EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN12UtlSwRotator19swYRotatorMirror180EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotatorMirror180(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator19swYRotatorMirror180EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN6FdCore7genRectEP13fd_cal_structt */
/* Demangled: FdCore::genRect(fd_cal_struct*, unsigned short) */
int _ZN6FdCore7genRectEP13fd_cal_structt(void);

/* Symbol: _ZN10AppFDFT_SW14FDPostFLDandCSEv */
/* Demangled: AppFDFT_SW::FDPostFLDandCS() */
int _ZN10AppFDFT_SW14FDPostFLDandCSEv(void);

/* Symbol: _ZN6FdCore15FdCoreGetResultEP16FD_RESULT_STRUCTs */
/* Demangled: FdCore::FdCoreGetResult(FD_RESULT_STRUCT*, short) */
int _ZN6FdCore15FdCoreGetResultEP16FD_RESULT_STRUCTs(void);

/* Symbol: _ZN8FdSvmHog11getInstanceEv */
/* Demangled: FdSvmHog::getInstance() */
int _ZN8FdSvmHog11getInstanceEv(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN13ERTDetectorFP23AssignModel_FacingRightEi */
/* Demangled: ERTDetectorFP::AssignModel_FacingRight(int) */
int _ZN13ERTDetectorFP23AssignModel_FacingRightEi(void);

/* Symbol: _ZN12UtlSwRotatorD1Ev */
/* Demangled: UtlSwRotator::~UtlSwRotator() */
int _ZN12UtlSwRotatorD1Ev(void);

/* Symbol: _ZN10AppFDFT_SW17FDVTGetResultSizeEv */
/* Demangled: AppFDFT_SW::FDVTGetResultSize() */
int _ZN10AppFDFT_SW17FDVTGetResultSizeEv(void);

/* Symbol: _ZN10AppFDFT_SW8TrimYBndEi */
/* Demangled: AppFDFT_SW::TrimYBnd(int) */
int _ZN10AppFDFT_SW8TrimYBndEi(void);

/* Symbol: _ZN6FdCoreD1Ev */
/* Demangled: FdCore::~FdCore() */
int _ZN6FdCoreD1Ev(void);

/* Symbol: _ZN8SwSdMain11getInstanceEv */
/* Demangled: SwSdMain::getInstance() */
int _ZN8SwSdMain11getInstanceEv(void);

/* Symbol: _ZN18TrackingTrajectoryC2Ev */
/* Demangled: TrackingTrajectory::TrackingTrajectory() */
int _ZN18TrackingTrajectoryC2Ev(void);

/* Symbol: UREE_RegisterSharedmem_ReadOnly */
/* Demangled: UREE_RegisterSharedmem_ReadOnly */
int UREE_RegisterSharedmem_ReadOnly(void);

/* Symbol: _ZTV12UtlSwRotator */
/* Demangled: vtable for UtlSwRotator */
extern void* _ZTV12UtlSwRotator;

/* Symbol: _ZN12MTKDetection8FDVTInitEP15MTKFDFTInitInfo */
/* Demangled: MTKDetection::FDVTInit(MTKFDFTInitInfo*) */
int _ZN12MTKDetection8FDVTInitEP15MTKFDFTInitInfo(void);

/* Symbol: _Z3minii */
/* Demangled: min(int, int) */
int _Z3minii(void);

/* Symbol: UREE_UnreferenceSecurechunkmem */
/* Demangled: UREE_UnreferenceSecurechunkmem */
int UREE_UnreferenceSecurechunkmem(void);

/* Symbol: _ZN6OtCore21Compute_new_cordinateEPtPjS1_ttPiS2_PftfS0_ii */
/* Demangled: OtCore::Compute_new_cordinate(unsigned short*, unsigned int*, unsigned int*, unsigned short, unsigned short, int*, int*, float*, unsigned short, float, unsigned short*, int, int) */
int _ZN6OtCore21Compute_new_cordinateEPtPjS1_ttPiS2_PftfS0_ii(void);

/* Symbol: _ZN6OtCore9set_ot_dsEi */
/* Demangled: OtCore::set_ot_ds(int) */
int _ZN6OtCore9set_ot_dsEi(void);

/* Symbol: _ZN13FdSvmClassify15fd_execute_flipEP13FD_SGrayImg_s11FD_FlipType */
/* Demangled: FdSvmClassify::fd_execute_flip(FD_SGrayImg_s*, FD_FlipType) */
int _ZN13FdSvmClassify15fd_execute_flipEP13FD_SGrayImg_s11FD_FlipType(void);

/* Symbol: _ZN8FdSvmHogD0Ev */
/* Demangled: FdSvmHog::~FdSvmHog() */
int _ZN8FdSvmHogD0Ev(void);

/* Symbol: _ZN13ERTDetectorFP15ComputeRIPAngleEPi */
/* Demangled: ERTDetectorFP::ComputeRIPAngle(int*) */
int _ZN13ERTDetectorFP15ComputeRIPAngleEPi(void);

/* Symbol: _ZN6OtCore10set_h_typeEii */
/* Demangled: OtCore::set_h_type(int, int) */
int _ZN6OtCore10set_h_typeEii(void);

/* Symbol: _ZN6FdCore8copyRectEP13fd_cal_structt */
/* Demangled: FdCore::copyRect(fd_cal_struct*, unsigned short) */
int _ZN6FdCore8copyRectEP13fd_cal_structt(void);

/* Symbol: _ZTV8SwSdMain */
/* Demangled: vtable for SwSdMain */
extern void* _ZTV8SwSdMain;

/* Symbol: _ZN10AppFDFT_SW17FDVTMainFastPhaseEPi */
/* Demangled: AppFDFT_SW::FDVTMainFastPhase(int*) */
int _ZN10AppFDFT_SW17FDVTMainFastPhaseEPi(void);

/* Symbol: _ZN6OtCore14Copy_HistogramEii */
/* Demangled: OtCore::Copy_Histogram(int, int) */
int _ZN6OtCore14Copy_HistogramEii(void);

/* Symbol: _ZN6OtCore21reset_overlap_offsetsEhii */
/* Demangled: OtCore::reset_overlap_offsets(unsigned char, int, int) */
int _ZN6OtCore21reset_overlap_offsetsEhii(void);

/* Symbol: _ZN8SwSdMain8SWSDExitEv */
/* Demangled: SwSdMain::SWSDExit() */
int _ZN8SwSdMain8SWSDExitEv(void);

/* Symbol: _ZN8FdSvmHog15fd_xatan2_poly3Eii */
/* Demangled: FdSvmHog::fd_xatan2_poly3(int, int) */
int _ZN8FdSvmHog15fd_xatan2_poly3Eii(void);

/* Symbol: _ZN6FdCoreC1E9FdCoreDrv */
/* Demangled: FdCore::FdCore(FdCoreDrv) */
int _ZN6FdCoreC1E9FdCoreDrv(void);

/* Symbol: _ZN6OtCoreD0Ev */
/* Demangled: OtCore::~OtCore() */
int _ZN6OtCoreD0Ev(void);

/* Symbol: _ZN6FdCore10NonMaxSuppEP13fd_cal_structtt */
/* Demangled: FdCore::NonMaxSupp(fd_cal_struct*, unsigned short, unsigned short) */
int _ZN6FdCore10NonMaxSuppEP13fd_cal_structtt(void);

/* Symbol: _ZN8SwFdMainD1Ev */
/* Demangled: SwFdMain::~SwFdMain() */
int _ZN8SwFdMainD1Ev(void);

/* Symbol: _ZN13FdSvmClassify24fd_weak_svm_classify_intEPKjPK25fd_ensemble_svm_model_inti */
/* Demangled: FdSvmClassify::fd_weak_svm_classify_int(unsigned int const*, fd_ensemble_svm_model_int const*, int) */
int _ZN13FdSvmClassify24fd_weak_svm_classify_intEPKjPK25fd_ensemble_svm_model_inti(void);

/* Symbol: _ZN6FdCore11FdCoreResetEv */
/* Demangled: FdCore::FdCoreReset() */
int _ZN6FdCore11FdCoreResetEv(void);

/* Symbol: _ZN8SwSdMainD2Ev */
/* Demangled: SwSdMain::~SwSdMain() */
int _ZN8SwSdMainD2Ev(void);

/* Symbol: _ZN9FdUtlCoreD0Ev */
/* Demangled: FdUtlCore::~FdUtlCore() */
int _ZN9FdUtlCoreD0Ev(void);

/* Symbol: FeatureIndex1 */
/* Demangled: FeatureIndex1 */
extern void* FeatureIndex1;

/* Symbol: FeatureIndex2 */
/* Demangled: FeatureIndex2 */
extern void* FeatureIndex2;

/* Symbol: fld_cv_ptr */
/* Demangled: fld_cv_ptr */
extern void* fld_cv_ptr;

/* Symbol: _ZN10AppFDFT_SW33Main_HanldeWholeNewFaceCandidatesEv */
/* Demangled: AppFDFT_SW::Main_HanldeWholeNewFaceCandidates() */
int _ZN10AppFDFT_SW33Main_HanldeWholeNewFaceCandidatesEv(void);

/* Symbol: UREE_AllocSecurememWithTag */
/* Demangled: UREE_AllocSecurememWithTag */
int UREE_AllocSecurememWithTag(void);

/* Symbol: _ZN10AppFDFT_SW17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_ */
/* Demangled: AppFDFT_SW::FDVTMainCropPhase(unsigned char (*) [16], unsigned char (*) [16], unsigned char**, int*, int*) */
int _ZN10AppFDFT_SW17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_(void);

/* Symbol: _ZN12UtlSwRotator15destroyInstanceEv */
/* Demangled: UtlSwRotator::destroyInstance() */
int _ZN12UtlSwRotator15destroyInstanceEv(void);

/* Symbol: _Z16UnregisterHandlejRj */
/* Demangled: UnregisterHandle(unsigned int, unsigned int&) */
int _Z16UnregisterHandlejRj(void);

/* Symbol: _ZN8SwFdMain6OTCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO */
/* Demangled: SwFdMain::OTCall(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
int _ZN8SwFdMain6OTCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN6SdCoreC1Ev */
/* Demangled: SdCore::SdCore() */
int _ZN6SdCoreC1Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN10AppFDFT_SW12UpdateFaceIdEv */
/* Demangled: AppFDFT_SW::UpdateFaceId() */
int _ZN10AppFDFT_SW12UpdateFaceIdEv(void);

/* Symbol: _ZN13ERTDetectorFP19ComputeSR_fixedPVerEPiS0_S0_i */
/* Demangled: ERTDetectorFP::ComputeSR_fixedPVer(int*, int*, int*, int) */
int _ZN13ERTDetectorFP19ComputeSR_fixedPVerEPiS0_S0_i(void);

/* Symbol: _ZN12MTKDetection11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM */
/* Demangled: MTKDetection::FDVTGetMode(FDVT_OPERATION_MODE_ENUM*) */
int _ZN12MTKDetection11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM(void);

/* Symbol: _ZN6FdCore15destroyInstanceEv */
/* Demangled: FdCore::destroyInstance() */
int _ZN6FdCore15destroyInstanceEv(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: UREE_UnreferenceSecureMultichunkmem */
/* Demangled: UREE_UnreferenceSecureMultichunkmem */
int UREE_UnreferenceSecureMultichunkmem(void);

/* Symbol: _ZTV9FdUtlCore */
/* Demangled: vtable for FdUtlCore */
extern void* _ZTV9FdUtlCore;

/* Symbol: _ZN6OtCore11getInstanceEv */
/* Demangled: OtCore::getInstance() */
int _ZN6OtCore11getInstanceEv(void);

/* Symbol: _ZN13ERTDetectorFP19FaceAttriClassifierEPiPhS0_ */
/* Demangled: ERTDetectorFP::FaceAttriClassifier(int*, unsigned char*, int*) */
int _ZN13ERTDetectorFP19FaceAttriClassifierEPiPhS0_(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: _ZN10AppFDFT_SW6setADBEv */
/* Demangled: AppFDFT_SW::setADB() */
int _ZN10AppFDFT_SW6setADBEv(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: uree_init_mutex */
/* Demangled: uree_init_mutex */
extern void* uree_init_mutex;

/* Symbol: _ZN8FdSvmHog7fd_xdivEiij */
/* Demangled: FdSvmHog::fd_xdiv(int, int, unsigned int) */
int _ZN8FdSvmHog7fd_xdivEiij(void);

/* Symbol: UREE_ReferenceSecurechunkmem */
/* Demangled: UREE_ReferenceSecurechunkmem */
int UREE_ReferenceSecurechunkmem(void);

/* Symbol: _ZN13FdSvmClassify19fd_svm_classify_intE13FD_SGrayImg_s18fd_hog_parameter_sPK25fd_ensemble_svm_model_int */
/* Demangled: FdSvmClassify::fd_svm_classify_int(FD_SGrayImg_s, fd_hog_parameter_s, fd_ensemble_svm_model_int const*) */
int _ZN13FdSvmClassify19fd_svm_classify_intE13FD_SGrayImg_s18fd_hog_parameter_sPK25fd_ensemble_svm_model_int(void);

/* Symbol: _ZN9FdUtlCore21UtlCalConfidenceValueEiiPK31UTL_CASCADED_CLASSIFIERS_STRUCT */
/* Demangled: FdUtlCore::UtlCalConfidenceValue(int, int, UTL_CASCADED_CLASSIFIERS_STRUCT const*) */
int _ZN9FdUtlCore21UtlCalConfidenceValueEiiPK31UTL_CASCADED_CLASSIFIERS_STRUCT(void);

/* Symbol: _ZN6FdCore23FaceSkinValueStatisticsEP13fd_cal_struct */
/* Demangled: FdCore::FaceSkinValueStatistics(fd_cal_struct*) */
int _ZN6FdCore23FaceSkinValueStatisticsEP13fd_cal_struct(void);

/* Symbol: _ZN12UtlSwRotatorD2Ev */
/* Demangled: UtlSwRotator::~UtlSwRotator() */
int _ZN12UtlSwRotatorD2Ev(void);

/* Symbol: _ZN10AppFDFT_SW13FDPostProcessEv */
/* Demangled: AppFDFT_SW::FDPostProcess() */
int _ZN10AppFDFT_SW13FDPostProcessEv(void);

/* Symbol: _ZN6FdCoreD2Ev */
/* Demangled: FdCore::~FdCore() */
int _ZN6FdCoreD2Ev(void);

/* Symbol: _ZN12UtlSwRotator17swBilinearResizerEP29UTL_BILINEAR_Y_RESIZER_STRUCT */
/* Demangled: UtlSwRotator::swBilinearResizer(UTL_BILINEAR_Y_RESIZER_STRUCT*) */
int _ZN12UtlSwRotator17swBilinearResizerEP29UTL_BILINEAR_Y_RESIZER_STRUCT(void);

/* Symbol: _ZN8SwFdMain14SWFDMainPhase2E20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO */
/* Demangled: SwFdMain::SWFDMainPhase2(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
int _ZN8SwFdMain14SWFDMainPhase2E20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN13FdSvmClassify15destroyInstanceEv */
/* Demangled: FdSvmClassify::destroyInstance() */
int _ZN13FdSvmClassify15destroyInstanceEv(void);

/* Symbol: _ZN8FdSvmHogD1Ev */
/* Demangled: FdSvmHog::~FdSvmHog() */
int _ZN8FdSvmHogD1Ev(void);

/* Symbol: _ZN10AppFDFT_SW15FDVTParseResultEjjjjjffj */
/* Demangled: AppFDFT_SW::FDVTParseResult(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float, unsigned int) */
int _ZN10AppFDFT_SW15FDVTParseResultEjjjjjffj(void);

/* Symbol: _ZN13FdSvmClassifyD0Ev */
/* Demangled: FdSvmClassify::~FdSvmClassify() */
int _ZN13FdSvmClassifyD0Ev(void);

/* Symbol: _ZN8FdSvmHog20fd_hog_L2_norm_shiftEPKjj */
/* Demangled: FdSvmHog::fd_hog_L2_norm_shift(unsigned int const*, unsigned int) */
int _ZN8FdSvmHog20fd_hog_L2_norm_shiftEPKjj(void);

/* Symbol: _ZN10AppFDFT_SW20Convert2UnpaddedXBndEi */
/* Demangled: AppFDFT_SW::Convert2UnpaddedXBnd(int) */
int _ZN10AppFDFT_SW20Convert2UnpaddedXBndEi(void);

/* Symbol: _ZN10AppFDFT_SW10MaxPoolingEPsiiS0_ */
/* Demangled: AppFDFT_SW::MaxPooling(short*, int, int, short*) */
int _ZN10AppFDFT_SW10MaxPoolingEPsiiS0_(void);

/* Symbol: _ZN10AppFDFT_SW13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM */
/* Demangled: AppFDFT_SW::FDVTGetResult(unsigned char*, FACEDETECT_TRACKING_RESULT_TYPE_ENUM) */
int _ZN10AppFDFT_SW13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM(void);

/* Symbol: _ZN6OtCore6MSiterEPiS0_S0_S0_S0_S0_iPhttP18OT_FACEDETECT_RECTS1_PfiiPA4096_jPjh */
/* Demangled: OtCore::MSiter(int*, int*, int*, int*, int*, int*, int, unsigned char*, unsigned short, unsigned short, OT_FACEDETECT_RECT*, unsigned char*, float*, int, int, unsigned int (*) [4096], unsigned int*, unsigned char) */
int _ZN6OtCore6MSiterEPiS0_S0_S0_S0_S0_iPhttP18OT_FACEDETECT_RECTS1_PfiiPA4096_jPjh(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: UREE_AllocSecureMultichunkmemWithTag */
/* Demangled: UREE_AllocSecureMultichunkmemWithTag */
int UREE_AllocSecureMultichunkmemWithTag(void);

/* Symbol: _ZN6OtCoreD1Ev */
/* Demangled: OtCore::~OtCore() */
int _ZN6OtCoreD1Ev(void);

/* Symbol: _ZN8SwFdMainD2Ev */
/* Demangled: SwFdMain::~SwFdMain() */
int _ZN8SwFdMainD2Ev(void);

/* Symbol: _ZN12MTKDetection18FDVTSDDrawFaceRectEjjjjjh */
/* Demangled: MTKDetection::FDVTSDDrawFaceRect(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char) */
int _ZN12MTKDetection18FDVTSDDrawFaceRectEjjjjjh(void);

/* Symbol: _ZN10AppFDFT_SW38Main_HandleNewFaceCandidatesInTrackingEv */
/* Demangled: AppFDFT_SW::Main_HandleNewFaceCandidatesInTracking() */
int _ZN10AppFDFT_SW38Main_HandleNewFaceCandidatesInTrackingEv(void);

/* Symbol: _ZN18TrackingTrajectory5resetEi */
/* Demangled: TrackingTrajectory::reset(int) */
int _ZN18TrackingTrajectory5resetEi(void);

/* Symbol: _ZN6OtCore21getIndexfromYUYV_NEONEPtji */
/* Demangled: OtCore::getIndexfromYUYV_NEON(unsigned short*, unsigned int, int) */
int _ZN6OtCore21getIndexfromYUYV_NEONEPtji(void);

/* Symbol: _ZN9FdUtlCoreD1Ev */
/* Demangled: FdUtlCore::~FdUtlCore() */
int _ZN9FdUtlCoreD1Ev(void);

/* Symbol: _ZN10AppFDFT_SW23Main_SetFdMainDataBasicEP20FACEDETECT_MAIN_DATA */
/* Demangled: AppFDFT_SW::Main_SetFdMainDataBasic(FACEDETECT_MAIN_DATA*) */
int _ZN10AppFDFT_SW23Main_SetFdMainDataBasicEP20FACEDETECT_MAIN_DATA(void);

/* Symbol: _ZN8FdSvmHog14fd_hog_L2_normEPKjj */
/* Demangled: FdSvmHog::fd_hog_L2_norm(unsigned int const*, unsigned int) */
int _ZN8FdSvmHog14fd_hog_L2_normEPKjj(void);

/* Symbol: _ZN10AppFDFT_SW16FDVTGetICSResultEPhS0_jjjjjj */
/* Demangled: AppFDFT_SW::FDVTGetICSResult(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN10AppFDFT_SW16FDVTGetICSResultEPhS0_jjjjjj(void);

/* Symbol: _ZN6FdCore14FilterResult50EP13fd_cal_structtiP16FD_RESULT_STRUCT */
/* Demangled: FdCore::FilterResult50(fd_cal_struct*, unsigned short, int, FD_RESULT_STRUCT*) */
int _ZN6FdCore14FilterResult50EP13fd_cal_structtiP16FD_RESULT_STRUCT(void);

/* Symbol: _ZN10AppFDFT_SW8TrimXBndEi */
/* Demangled: AppFDFT_SW::TrimXBnd(int) */
int _ZN10AppFDFT_SW8TrimXBndEi(void);

/* Symbol: _ZN6FdCore25FaceCandidateOverlapMergeEP13fd_cal_struct */
/* Demangled: FdCore::FaceCandidateOverlapMerge(fd_cal_struct*) */
int _ZN6FdCore25FaceCandidateOverlapMergeEP13fd_cal_struct(void);

/* Symbol: _ZN10AppFDFT_SW24Log_synLogDetailPropertyEv */
/* Demangled: AppFDFT_SW::Log_synLogDetailProperty() */
int _ZN10AppFDFT_SW24Log_synLogDetailPropertyEv(void);

/* Symbol: _ZN6FdCore5QSortEPiS0_i */
/* Demangled: FdCore::QSort(int*, int*, int) */
int _ZN6FdCore5QSortEPiS0_i(void);

/* Symbol: _ZN8FdSvmHog18fd_hog_calc_grad_xE13FD_SGrayImg_sPs */
/* Demangled: FdSvmHog::fd_hog_calc_grad_x(FD_SGrayImg_s, short*) */
int _ZN8FdSvmHog18fd_hog_calc_grad_xE13FD_SGrayImg_sPs(void);

/* Symbol: _ZTV6FdCore */
/* Demangled: vtable for FdCore */
extern void* _ZTV6FdCore;

/* Symbol: _ZN12UtlSwRotator13swYRotator090EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotator090(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator13swYRotator090EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN6SdCore15SdCoreGetResultEP16SD_RESULT_STRUCT */
/* Demangled: SdCore::SdCoreGetResult(SD_RESULT_STRUCT*) */
int _ZN6SdCore15SdCoreGetResultEP16SD_RESULT_STRUCT(void);

/* Symbol: _ZN6SdCoreC2Ev */
/* Demangled: SdCore::SdCore() */
int _ZN6SdCoreC2Ev(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: UREE_ION_TEST_UPT_CHMDATA */
/* Demangled: UREE_ION_TEST_UPT_CHMDATA */
int UREE_ION_TEST_UPT_CHMDATA(void);

/* Symbol: _ZN8FdSvmHog16fd_set_hog_paramEP18fd_hog_parameter_sPKhS3_hhhh */
/* Demangled: FdSvmHog::fd_set_hog_param(fd_hog_parameter_s*, unsigned char const*, unsigned char const*, unsigned char, unsigned char, unsigned char, unsigned char) */
int _ZN8FdSvmHog16fd_set_hog_paramEP18fd_hog_parameter_sPKhS3_hhhh(void);

/* Symbol: _ZN13ERTDetectorFP18ComputeR_fixedPVerEPiS0_S0_i */
/* Demangled: ERTDetectorFP::ComputeR_fixedPVer(int*, int*, int*, int) */
int _ZN13ERTDetectorFP18ComputeR_fixedPVerEPiS0_S0_i(void);

/* Symbol: _ZN6SdCore15destroyInstanceEv */
/* Demangled: SdCore::destroyInstance() */
int _ZN6SdCore15destroyInstanceEv(void);

/* Symbol: _ZTV13FdSvmClassify */
/* Demangled: vtable for FdSvmClassify */
extern void* _ZTV13FdSvmClassify;

/* Symbol: _Z11utilSqrt_64yy */
/* Demangled: utilSqrt_64(unsigned long long, unsigned long long) */
int _Z11utilSqrt_64yy(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN6FdCore13SortCandidateEP13fd_cal_struct */
/* Demangled: FdCore::SortCandidate(fd_cal_struct*) */
int _ZN6FdCore13SortCandidateEP13fd_cal_struct(void);

/* Symbol: _ZN6FdCore11printHWfaceEv */
/* Demangled: FdCore::printHWface() */
int _ZN6FdCore11printHWfaceEv(void);

/* Symbol: _ZN6FdCore13FdCoreGetInfoEP22FD_GET_ENV_INFO_STRUCT */
/* Demangled: FdCore::FdCoreGetInfo(FD_GET_ENV_INFO_STRUCT*) */
int _ZN6FdCore13FdCoreGetInfoEP22FD_GET_ENV_INFO_STRUCT(void);

/* Symbol: _ZN15TrackingHistory15destroyInstanceEv */
/* Demangled: TrackingHistory::destroyInstance() */
int _ZN15TrackingHistory15destroyInstanceEv(void);

/* Symbol: _ZN8FdSvmHog16fd_hog_normalizeEPjjj14FD_SNormalType */
/* Demangled: FdSvmHog::fd_hog_normalize(unsigned int*, unsigned int, unsigned int, FD_SNormalType) */
int _ZN8FdSvmHog16fd_hog_normalizeEPjjj14FD_SNormalType(void);

/* Symbol: initial_shape_in_use */
/* Demangled: initial_shape_in_use */
extern void* initial_shape_in_use;

/* Symbol: fld_cv_range_ptr */
/* Demangled: fld_cv_range_ptr */
extern void* fld_cv_range_ptr;

/* Symbol: _ZN8SwFdMainC2E13SWFD_MAIN_DRV */
/* Demangled: SwFdMain::SwFdMain(SWFD_MAIN_DRV) */
int _ZN8SwFdMainC2E13SWFD_MAIN_DRV(void);

/* Symbol: UREE_ReferenceSecuremem */
/* Demangled: UREE_ReferenceSecuremem */
int UREE_ReferenceSecuremem(void);

/* Symbol: UREE_UnreferenceSecuremem */
/* Demangled: UREE_UnreferenceSecuremem */
int UREE_UnreferenceSecuremem(void);

/* Symbol: _Z3maxii */
/* Demangled: max(int, int) */
int _Z3maxii(void);

/* Symbol: _ZN8SwSdMainC1Ev */
/* Demangled: SwSdMain::SwSdMain() */
int _ZN8SwSdMainC1Ev(void);

/* Symbol: UREE_WriteSecurechunkmem */
/* Demangled: UREE_WriteSecurechunkmem */
int UREE_WriteSecurechunkmem(void);

/* Symbol: _ZN10AppFDFT_SWC2E13DRVFDObject_s */
/* Demangled: AppFDFT_SW::AppFDFT_SW(DRVFDObject_s) */
int _ZN10AppFDFT_SWC2E13DRVFDObject_s(void);

/* Symbol: _ZN8SwFdMain11getInstanceE13SWFD_MAIN_DRV */
/* Demangled: SwFdMain::getInstance(SWFD_MAIN_DRV) */
int _ZN8SwFdMain11getInstanceE13SWFD_MAIN_DRV(void);

/* Symbol: _ZN10AppFDFT_SW26Main_CleanUpMatchingResultENS_25CLEAN_MATCH_RESULT_OPTIONE */
/* Demangled: AppFDFT_SW::Main_CleanUpMatchingResult(AppFDFT_SW::CLEAN_MATCH_RESULT_OPTION) */
int _ZN10AppFDFT_SW26Main_CleanUpMatchingResultENS_25CLEAN_MATCH_RESULT_OPTIONE(void);

/* Symbol: __UREE_UnregisterSharedmem */
/* Demangled: __UREE_UnregisterSharedmem */
int __UREE_UnregisterSharedmem(void);

/* Symbol: _ZN6OtCore10get_h_typeEv */
/* Demangled: OtCore::get_h_type() */
int _ZN6OtCore10get_h_typeEv(void);

/* Symbol: _ZN8FdSvmHogD2Ev */
/* Demangled: FdSvmHog::~FdSvmHog() */
int _ZN8FdSvmHogD2Ev(void);

/* Symbol: _ZN12MTKDetection16FDVTGetICSResultEPhS0_jjjjjj */
/* Demangled: MTKDetection::FDVTGetICSResult(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12MTKDetection16FDVTGetICSResultEPhS0_jjjjjj(void);

/* Symbol: UREE_CreateSession */
/* Demangled: UREE_CreateSession */
int UREE_CreateSession(void);

/* Symbol: _ZN10AppFDFT_SW12FDGetCalDataEv */
/* Demangled: AppFDFT_SW::FDGetCalData() */
int _ZN10AppFDFT_SW12FDGetCalDataEv(void);

/* Symbol: _ZN10AppFDFT_SW14TrimBnd4FDINFOER19FACEDETECT_FACEINFO */
/* Demangled: AppFDFT_SW::TrimBnd4FDINFO(FACEDETECT_FACEINFO&) */
int _ZN10AppFDFT_SW14TrimBnd4FDINFOER19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN13FdSvmClassifyD1Ev */
/* Demangled: FdSvmClassify::~FdSvmClassify() */
int _ZN13FdSvmClassifyD1Ev(void);

/* Symbol: _ZTV6SdCore */
/* Demangled: vtable for SdCore */
extern void* _ZTV6SdCore;

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN15TrackingHistory11getInstanceEi */
/* Demangled: TrackingHistory::getInstance(int) */
int _ZN15TrackingHistory11getInstanceEi(void);

/* Symbol: _ZN10AppFDFT_SWD0Ev */
/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
int _ZN10AppFDFT_SWD0Ev(void);

/* Symbol: _ZN6FdCore20FaceOverlapDetectionEP13fd_cal_structs */
/* Demangled: FdCore::FaceOverlapDetection(fd_cal_struct*, short) */
int _ZN6FdCore20FaceOverlapDetectionEP13fd_cal_structs(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: _ZN12UtlSwRotator19swYRotatorMirror270EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotatorMirror270(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator19swYRotatorMirror270EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN6FdCore25GlobalFaceDetectionEngineEP13fd_cal_structttPjh */
/* Demangled: FdCore::GlobalFaceDetectionEngine(fd_cal_struct*, unsigned short, unsigned short, unsigned int*, unsigned char) */
int _ZN6FdCore25GlobalFaceDetectionEngineEP13fd_cal_structttPjh(void);

/* Symbol: _ZN9FdUtlCore11getInstanceEv */
/* Demangled: FdUtlCore::getInstance() */
int _ZN9FdUtlCore11getInstanceEv(void);

/* Symbol: _ZN6FdCore13MergeResult35EP13fd_cal_structtPt */
/* Demangled: FdCore::MergeResult35(fd_cal_struct*, unsigned short, unsigned short*) */
int _ZN6FdCore13MergeResult35EP13fd_cal_structtPt(void);

/* Symbol: _ZN6OtCoreD2Ev */
/* Demangled: OtCore::~OtCore() */
int _ZN6OtCoreD2Ev(void);

/* Symbol: _ZN13ERTDetectorFP19ExtractFeatureValueEPhiiPiS1_S1_S0_ */
/* Demangled: ERTDetectorFP::ExtractFeatureValue(unsigned char*, int, int, int*, int*, int*, unsigned char*) */
int _ZN13ERTDetectorFP19ExtractFeatureValueEPhiiPiS1_S1_S0_(void);

/* Symbol: _ZN10AppFDFT_SW23Main_UpdateRealPositionEv */
/* Demangled: AppFDFT_SW::Main_UpdateRealPosition() */
int _ZN10AppFDFT_SW23Main_UpdateRealPositionEv(void);

/* Symbol: _ZN9FdUtlCoreD2Ev */
/* Demangled: FdUtlCore::~FdUtlCore() */
int _ZN9FdUtlCoreD2Ev(void);

/* Symbol: _ZN6FdCore10convSquareEP13fd_cal_structt */
/* Demangled: FdCore::convSquare(fd_cal_struct*, unsigned short) */
int _ZN6FdCore10convSquareEP13fd_cal_structt(void);

/* Symbol: _ZN12UtlSwRotatorC1Ev */
/* Demangled: UtlSwRotator::UtlSwRotator() */
int _ZN12UtlSwRotatorC1Ev(void);

/* Symbol: _ZN10AppFDFT_SW17FDVTMainJoinPhaseEPhPA1024_si */
/* Demangled: AppFDFT_SW::FDVTMainJoinPhase(unsigned char*, short (*) [1024], int) */
int _ZN10AppFDFT_SW17FDVTMainJoinPhaseEPhPA1024_si(void);

/* Symbol: _ZN6FdCore13RestoreOtFaceEv */
/* Demangled: FdCore::RestoreOtFace() */
int _ZN6FdCore13RestoreOtFaceEv(void);

/* Symbol: _ZN13FdSvmClassify11getInstanceEv */
/* Demangled: FdSvmClassify::getInstance() */
int _ZN13FdSvmClassify11getInstanceEv(void);

/* Symbol: _ZN10AppFDFT_SW12Main_OtFrameEv */
/* Demangled: AppFDFT_SW::Main_OtFrame() */
int _ZN10AppFDFT_SW12Main_OtFrameEv(void);

/* Symbol: _ZN8SwFdMain17TemporalSmoothingEhiP19FACEDETECT_FACEINFOS1_S1_Piiiiiii */
/* Demangled: SwFdMain::TemporalSmoothing(unsigned char, int, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, int*, int, int, int, int, int, int) */
int _ZN8SwFdMain17TemporalSmoothingEhiP19FACEDETECT_FACEINFOS1_S1_Piiiiiii(void);

/* Symbol: _Z13copy_cal_elemP13fd_cal_structii */
/* Demangled: copy_cal_elem(fd_cal_struct*, int, int) */
int _Z13copy_cal_elemP13fd_cal_structii(void);

/* Symbol: _ZN6FdCore16FdCoreMainPhase2EPvS0_ */
/* Demangled: FdCore::FdCoreMainPhase2(void*, void*) */
int _ZN6FdCore16FdCoreMainPhase2EPvS0_(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: _ZN18TrackingTrajectory12get_smoothedEP12TrackingBBox */
/* Demangled: TrackingTrajectory::get_smoothed(TrackingBBox*) */
int _ZN18TrackingTrajectory12get_smoothedEP12TrackingBBox(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN10AppFDFT_SW23FacialLandmarkDetectionEv */
/* Demangled: AppFDFT_SW::FacialLandmarkDetection() */
int _ZN10AppFDFT_SW23FacialLandmarkDetectionEv(void);

/* Symbol: _Z3iouiiiiiiii */
/* Demangled: iou(int, int, int, int, int, int, int, int) */
int _Z3iouiiiiiiii(void);

/* Symbol: _Z3MINii */
/* Demangled: MIN(int, int) */
int _Z3MINii(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN10AppFDFT_SW17Dumper_InitializeEv */
/* Demangled: AppFDFT_SW::Dumper_Initialize() */
int _ZN10AppFDFT_SW17Dumper_InitializeEv(void);

/* Symbol: _ZTV8FdSvmHog */
/* Demangled: vtable for FdSvmHog */
extern void* _ZTV8FdSvmHog;

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN10AppFDFT_SW21Main_SetDetectionTypeEv */
/* Demangled: AppFDFT_SW::Main_SetDetectionType() */
int _ZN10AppFDFT_SW21Main_SetDetectionTypeEv(void);

/* Symbol: UREE_ReferenceSecureMultichunkmem */
/* Demangled: UREE_ReferenceSecureMultichunkmem */
int UREE_ReferenceSecureMultichunkmem(void);

/* Symbol: _ZN8SwFdMain16TemporalMatchingEP19FACEDETECT_FACEINFOS1_PiS2_t */
/* Demangled: SwFdMain::TemporalMatching(FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, int*, int*, unsigned short) */
int _ZN8SwFdMain16TemporalMatchingEP19FACEDETECT_FACEINFOS1_PiS2_t(void);

/* Symbol: UREE_ZallocSecurememWithTag */
/* Demangled: UREE_ZallocSecurememWithTag */
int UREE_ZallocSecurememWithTag(void);

/* Symbol: _ZN8SwFdMainC1E13SWFD_MAIN_DRV */
/* Demangled: SwFdMain::SwFdMain(SWFD_MAIN_DRV) */
int _ZN8SwFdMainC1E13SWFD_MAIN_DRV(void);

/* Symbol: _ZN8SwFdMain21CheckIfUnLockOtBufferEv */
/* Demangled: SwFdMain::CheckIfUnLockOtBuffer() */
int _ZN8SwFdMain21CheckIfUnLockOtBufferEv(void);

/* Symbol: _ZN8FdSvmHog8fd_xatanEij */
/* Demangled: FdSvmHog::fd_xatan(int, unsigned int) */
int _ZN8FdSvmHog8fd_xatanEij(void);

/* Symbol: _ZN15TrackingHistoryC1Ei */
/* Demangled: TrackingHistory::TrackingHistory(int) */
int _ZN15TrackingHistoryC1Ei(void);

/* Symbol: UREE_UnregisterSharedmem_ReadOnly */
/* Demangled: UREE_UnregisterSharedmem_ReadOnly */
int UREE_UnregisterSharedmem_ReadOnly(void);

/* Symbol: _ZN8FdSvmHog10fd_xmul_64Eiij */
/* Demangled: FdSvmHog::fd_xmul_64(int, int, unsigned int) */
int _ZN8FdSvmHog10fd_xmul_64Eiij(void);

/* Symbol: _ZN10AppFDFT_SWC1E13DRVFDObject_s */
/* Demangled: AppFDFT_SW::AppFDFT_SW(DRVFDObject_s) */
int _ZN10AppFDFT_SWC1E13DRVFDObject_s(void);

/* Symbol: _ZN6FdCore16FdCoreGetCalDataEv */
/* Demangled: FdCore::FdCoreGetCalData() */
int _ZN6FdCore16FdCoreGetCalDataEv(void);

/* Symbol: _ZN6FdCore19BubbleStabilizationEPiS0_i */
/* Demangled: FdCore::BubbleStabilization(int*, int*, int) */
int _ZN6FdCore19BubbleStabilizationEPiS0_i(void);

/* Symbol: _ZN6SdCore13SdCoreSaveLogEP13SD_LOG_STRUCT */
/* Demangled: SdCore::SdCoreSaveLog(SD_LOG_STRUCT*) */
int _ZN6SdCore13SdCoreSaveLogEP13SD_LOG_STRUCT(void);

/* Symbol: _ZN6SdCore10SdCoreMainEPvS0_ */
/* Demangled: SdCore::SdCoreMain(void*, void*) */
int _ZN6SdCore10SdCoreMainEPvS0_(void);

/* Symbol: _ZN8SwSdMainC2Ev */
/* Demangled: SwSdMain::SwSdMain() */
int _ZN8SwSdMainC2Ev(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: UREE_UnregisterSharedmem */
/* Demangled: UREE_UnregisterSharedmem */
int UREE_UnregisterSharedmem(void);

/* Symbol: _ZN10AppFDFT_SW8printFLDEi */
/* Demangled: AppFDFT_SW::printFLD(int) */
int _ZN10AppFDFT_SW8printFLDEi(void);

/* Symbol: _ZN8SwFdMain8SWFDExitEv */
/* Demangled: SwFdMain::SWFDExit() */
int _ZN8SwFdMain8SWFDExitEv(void);

/* Symbol: _ZN10AppFDFT_SW15destroyInstanceEv */
/* Demangled: AppFDFT_SW::destroyInstance() */
int _ZN10AppFDFT_SW15destroyInstanceEv(void);

/* Symbol: _ZN8SwFdMain14SWFDGetCalDataEv */
/* Demangled: SwFdMain::SWFDGetCalData() */
int _ZN8SwFdMain14SWFDGetCalDataEv(void);

/* Symbol: _ZN13ERTDetectorFP21ComputeAngleFromDLFLDEPiiiS0_ */
/* Demangled: ERTDetectorFP::ComputeAngleFromDLFLD(int*, int, int, int*) */
int _ZN13ERTDetectorFP21ComputeAngleFromDLFLDEPiiiS0_(void);

/* Symbol: rip_map_tbl */
/* Demangled: rip_map_tbl */
extern void* rip_map_tbl;

/* Symbol: _ZN10AppFDFT_SW28PreserveOrderRemove4FDResultEPh */
/* Demangled: AppFDFT_SW::PreserveOrderRemove4FDResult(unsigned char*) */
int _ZN10AppFDFT_SW28PreserveOrderRemove4FDResultEPh(void);

/* Symbol: _ZTV10AppFDFT_SW */
/* Demangled: vtable for AppFDFT_SW */
extern void* _ZTV10AppFDFT_SW;

/* Symbol: _ZN13FdSvmClassifyD2Ev */
/* Demangled: FdSvmClassify::~FdSvmClassify() */
int _ZN13FdSvmClassifyD2Ev(void);

/* Symbol: _ZN6FdCore21FaceBoxPositionUpdateEP13fd_cal_struct */
/* Demangled: FdCore::FaceBoxPositionUpdate(fd_cal_struct*) */
int _ZN6FdCore21FaceBoxPositionUpdateEP13fd_cal_struct(void);

/* Symbol: UREE_ReadSecurechunkmem */
/* Demangled: UREE_ReadSecurechunkmem */
int UREE_ReadSecurechunkmem(void);

/* Symbol: _ZN10AppFDFT_SW16TrimBnd4FDResultEv */
/* Demangled: AppFDFT_SW::TrimBnd4FDResult() */
int _ZN10AppFDFT_SW16TrimBnd4FDResultEv(void);

/* Symbol: _ZN10AppFDFT_SWD1Ev */
/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
int _ZN10AppFDFT_SWD1Ev(void);

/* Symbol: UREE_AppendTzmem */
/* Demangled: UREE_AppendTzmem */
int UREE_AppendTzmem(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: deltas */
/* Demangled: deltas */
extern void* deltas;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6SdCore13SdCoreGetInfoEP22SD_GET_ENV_INFO_STRUCT */
/* Demangled: SdCore::SdCoreGetInfo(SD_GET_ENV_INFO_STRUCT*) */
int _ZN6SdCore13SdCoreGetInfoEP22SD_GET_ENV_INFO_STRUCT(void);

/* Symbol: _ZN8AppFDTmp11getInstanceEv */
/* Demangled: AppFDTmp::getInstance() */
int _ZN8AppFDTmp11getInstanceEv(void);

/* Symbol: _ZN10AppFDFT_SW18GenerateGammaCurveEPi */
/* Demangled: AppFDFT_SW::GenerateGammaCurve(int*) */
int _ZN10AppFDFT_SW18GenerateGammaCurveEPi(void);

/* Symbol: UREE_RegisterSharedmemWithTag */
/* Demangled: UREE_RegisterSharedmemWithTag */
int UREE_RegisterSharedmemWithTag(void);

/* Symbol: _ZN12MTKDetection13FDVTGetFDInfoEj */
/* Demangled: MTKDetection::FDVTGetFDInfo(unsigned int) */
int _ZN12MTKDetection13FDVTGetFDInfoEj(void);

/* Symbol: _ZN10AppFDFT_SW11UnpadResultEPhP19FACEDETECT_FACEINFOS2_ */
/* Demangled: AppFDFT_SW::UnpadResult(unsigned char*, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*) */
int _ZN10AppFDFT_SW11UnpadResultEPhP19FACEDETECT_FACEINFOS2_(void);

/* Symbol: _ZN10AppFDFT_SW18MergePose2FDResultEPsiih */
/* Demangled: AppFDFT_SW::MergePose2FDResult(short*, int, int, unsigned char) */
int _ZN10AppFDFT_SW18MergePose2FDResultEPsiih(void);

/* Symbol: _ZN6OtCore22update_overlap_offsetsEhhiiiiiiii */
/* Demangled: OtCore::update_overlap_offsets(unsigned char, unsigned char, int, int, int, int, int, int, int, int) */
int _ZN6OtCore22update_overlap_offsetsEhhiiiiiiii(void);

/* Symbol: _ZN10AppFDFT_SW13Main_GfdFrameEv */
/* Demangled: AppFDFT_SW::Main_GfdFrame() */
int _ZN10AppFDFT_SW13Main_GfdFrameEv(void);

/* Symbol: _ZTV6OtCore */
/* Demangled: vtable for OtCore */
extern void* _ZTV6OtCore;

/* Symbol: _ZN12UtlSwRotatorC2Ev */
/* Demangled: UtlSwRotator::UtlSwRotator() */
int _ZN12UtlSwRotatorC2Ev(void);

/* Symbol: flip_rip */
/* Demangled: flip_rip */
extern void* flip_rip;

/* Symbol: _ZN6SdCore11SdCoreResetEv */
/* Demangled: SdCore::SdCoreReset() */
int _ZN6SdCore11SdCoreResetEv(void);

/* Symbol: _ZN10AppFDFT_SW8FDVTInitEP15MTKFDFTInitInfo */
/* Demangled: AppFDFT_SW::FDVTInit(MTKFDFTInitInfo*) */
int _ZN10AppFDFT_SW8FDVTInitEP15MTKFDFTInitInfo(void);

/* Symbol: _ZN8SwFdMain15destroyInstanceEv */
/* Demangled: SwFdMain::destroyInstance() */
int _ZN8SwFdMain15destroyInstanceEv(void);

/* Symbol: _ZN15TrackingHistory5resetEi */
/* Demangled: TrackingHistory::reset(int) */
int _ZN15TrackingHistory5resetEi(void);

/* Symbol: _ZN6OtCore16get_measure_typeEv */
/* Demangled: OtCore::get_measure_type() */
int _ZN6OtCore16get_measure_typeEv(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN8FdSvmHogC1Ev */
/* Demangled: FdSvmHog::FdSvmHog() */
int _ZN8FdSvmHogC1Ev(void);

/* Symbol: _ZN12MTKDetection12FDGetCalDataEv */
/* Demangled: MTKDetection::FDGetCalData() */
int _ZN12MTKDetection12FDGetCalDataEv(void);

/* Symbol: UREE_ION_TO_SHM_HANDLE */
/* Demangled: UREE_ION_TO_SHM_HANDLE */
int UREE_ION_TO_SHM_HANDLE(void);

/* Symbol: _ZN6FdCore16FdSetPthreadAttrEPj */
/* Demangled: FdCore::FdSetPthreadAttr(unsigned int*) */
int _ZN6FdCore16FdSetPthreadAttrEPj(void);

/* Symbol: _ZN12MTKDetection17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_ */
/* Demangled: MTKDetection::FDVTMainCropPhase(unsigned char (*) [16], unsigned char (*) [16], unsigned char**, int*, int*) */
int _ZN12MTKDetection17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_(void);

/* Symbol: _ZN18TrackingTrajectory4pushERK12TrackingBBox */
/* Demangled: TrackingTrajectory::push(TrackingBBox const&) */
int _ZN18TrackingTrajectory4pushERK12TrackingBBox(void);

/* Symbol: _ZN15TrackingHistoryC2Ei */
/* Demangled: TrackingHistory::TrackingHistory(int) */
int _ZN15TrackingHistoryC2Ei(void);

/* Symbol: UREE_ZallocSecureMultichunkmem */
/* Demangled: UREE_ZallocSecureMultichunkmem */
int UREE_ZallocSecureMultichunkmem(void);

/* Symbol: _ZN9FdUtlCore15destroyInstanceEv */
/* Demangled: FdUtlCore::destroyInstance() */
int _ZN9FdUtlCore15destroyInstanceEv(void);

/* Symbol: _Z20CvtOnePointer2HandlejPvjPj */
/* Demangled: CvtOnePointer2Handle(unsigned int, void*, unsigned int, unsigned int*) */
int _Z20CvtOnePointer2HandlejPvjPj(void);

/* Symbol: _ZN15TrackingHistory6updateER19FACEDETECT_FACEINFO */
/* Demangled: TrackingHistory::update(FACEDETECT_FACEINFO&) */
int _ZN15TrackingHistory6updateER19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN6OtCoreC1Ev */
/* Demangled: OtCore::OtCore() */
int _ZN6OtCoreC1Ev(void);

/* Symbol: _ZN12MTKDetection8FDVTInitEPj */
/* Demangled: MTKDetection::FDVTInit(unsigned int*) */
int _ZN12MTKDetection8FDVTInitEPj(void);

/* Symbol: _ZN12MTKDetection8FDVTMainEP9FdOptions */
/* Demangled: MTKDetection::FDVTMain(FdOptions*) */
int _ZN12MTKDetection8FDVTMainEP9FdOptions(void);

/* Symbol: _ZN10AppFDFT_SW38Main_ComputeNextFrameTargetOtHistogramEv */
/* Demangled: AppFDFT_SW::Main_ComputeNextFrameTargetOtHistogram() */
int _ZN10AppFDFT_SW38Main_ComputeNextFrameTargetOtHistogramEv(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _ZN9FdUtlCoreC1Ev */
/* Demangled: FdUtlCore::FdUtlCore() */
int _ZN9FdUtlCoreC1Ev(void);

/* Symbol: _ZN9FdUtlCore19UtlCalIntegralImageEP29UTL_CAL_INTEGRAL_IMAGE_STRUCT */
/* Demangled: FdUtlCore::UtlCalIntegralImage(UTL_CAL_INTEGRAL_IMAGE_STRUCT*) */
int _ZN9FdUtlCore19UtlCalIntegralImageEP29UTL_CAL_INTEGRAL_IMAGE_STRUCT(void);

/* Symbol: _ZN8SwFdMain14FDSizeToOTSizeEP19FACEDETECT_FACEINFO */
/* Demangled: SwFdMain::FDSizeToOTSize(FACEDETECT_FACEINFO*) */
int _ZN8SwFdMain14FDSizeToOTSizeEP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN6OtCore16getIndexfromYUYVEPjPtS1_ji */
/* Demangled: OtCore::getIndexfromYUYV(unsigned int*, unsigned short*, unsigned short*, unsigned int, int) */
int _ZN6OtCore16getIndexfromYUYVEPjPtS1_ji(void);

/* Symbol: _ZN10AppFDFT_SW11getInstanceE13DRVFDObject_s */
/* Demangled: AppFDFT_SW::getInstance(DRVFDObject_s) */
int _ZN10AppFDFT_SW11getInstanceE13DRVFDObject_s(void);

/* Symbol: _ZN12MTKDetection14FDVTMainPhase2Ev */
/* Demangled: MTKDetection::FDVTMainPhase2() */
int _ZN12MTKDetection14FDVTMainPhase2Ev(void);

/* Symbol: _ZN8FdSvmHog15destroyInstanceEv */
/* Demangled: FdSvmHog::destroyInstance() */
int _ZN8FdSvmHog15destroyInstanceEv(void);

/* Symbol: _ZN6FdCore10FdCoreMainEPvS0_ */
/* Demangled: FdCore::FdCoreMain(void*, void*) */
int _ZN6FdCore10FdCoreMainEPvS0_(void);

/* Symbol: _ZN6OtCore24Compute_Weight_HistogramEPhPjttPti */
/* Demangled: OtCore::Compute_Weight_Histogram(unsigned char*, unsigned int*, unsigned short, unsigned short, unsigned short*, int) */
int _ZN6OtCore24Compute_Weight_HistogramEPhPjttPti(void);

/* Symbol: _ZN10AppFDFT_SW27Dumper_DumpFdFrameAndResultEP9FdOptionsP20FACEDETECT_INIT_DATAP19FACEDETECT_FACEINFO */
/* Demangled: AppFDFT_SW::Dumper_DumpFdFrameAndResult(FdOptions*, FACEDETECT_INIT_DATA*, FACEDETECT_FACEINFO*) */
int _ZN10AppFDFT_SW27Dumper_DumpFdFrameAndResultEP9FdOptionsP20FACEDETECT_INIT_DATAP19FACEDETECT_FACEINFO(void);

/* Symbol: UREE_FOD_ShareMem_Enable */
/* Demangled: UREE_FOD_ShareMem_Enable */
int UREE_FOD_ShareMem_Enable(void);

/* Symbol: _ZN6OtCore31Compute_Target_Histogram_offsetEPhthiiiiii */
/* Demangled: OtCore::Compute_Target_Histogram_offset(unsigned char*, unsigned short, unsigned char, int, int, int, int, int, int) */
int _ZN6OtCore31Compute_Target_Histogram_offsetEPhthiiiiii(void);

/* Symbol: _ZN6OtCore15destroyInstanceEv */
/* Demangled: OtCore::destroyInstance() */
int _ZN6OtCore15destroyInstanceEv(void);

/* Symbol: _ZN18TrackingTrajectory15get_most_recentEv */
/* Demangled: TrackingTrajectory::get_most_recent() */
int _ZN18TrackingTrajectory15get_most_recentEv(void);

/* Symbol: _ZN12UtlSwRotator13swYRotator180EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotator180(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator13swYRotator180EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN13ERTDetectorFP15ComputeROPAngleEPii */
/* Demangled: ERTDetectorFP::ComputeROPAngle(int*, int) */
int _ZN13ERTDetectorFP15ComputeROPAngleEPii(void);

/* Symbol: _ZN6SdCoreD0Ev */
/* Demangled: SdCore::~SdCore() */
int _ZN6SdCoreD0Ev(void);

/* Symbol: _ZN8SwSdMain8SWSDMainE21SMILEDETECT_MAIN_DATAP21SMILEDETECT_SMILEINFO */
/* Demangled: SwSdMain::SWSDMain(SMILEDETECT_MAIN_DATA, SMILEDETECT_SMILEINFO*) */
int _ZN8SwSdMain8SWSDMainE21SMILEDETECT_MAIN_DATAP21SMILEDETECT_SMILEINFO(void);

/* Symbol: _ZN8FdSvmHog9fd_xatan2Eiij */
/* Demangled: FdSvmHog::fd_xatan2(int, int, unsigned int) */
int _ZN8FdSvmHog9fd_xatan2Eiij(void);

/* Symbol: ShiftValue_NormalizedToImgDomain */
/* Demangled: ShiftValue_NormalizedToImgDomain */
extern void* ShiftValue_NormalizedToImgDomain;

/* Symbol: _ZN10AppFDFT_SWD2Ev */
/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
int _ZN10AppFDFT_SWD2Ev(void);

/* Symbol: _ZN12UtlSwRotator19swYRotatorMirror090EP27YUV_ROTATOR_HANDLE_STRUCT_T */
/* Demangled: UtlSwRotator::swYRotatorMirror090(YUV_ROTATOR_HANDLE_STRUCT_T*) */
int _ZN12UtlSwRotator19swYRotatorMirror090EP27YUV_ROTATOR_HANDLE_STRUCT_T(void);

/* Symbol: _ZN6FdCore26LocalFDDetectSizeSelectionEiPiS0_ */
/* Demangled: FdCore::LocalFDDetectSizeSelection(int, int*, int*) */
int _ZN6FdCore26LocalFDDetectSizeSelectionEiPiS0_(void);

/* Symbol: _ZN8FdSvmHog14fd_hog_extractE13FD_SGradImg_s18fd_hog_parameter_sPj */
/* Demangled: FdSvmHog::fd_hog_extract(FD_SGradImg_s, fd_hog_parameter_s, unsigned int*) */
int _ZN8FdSvmHog14fd_hog_extractE13FD_SGradImg_s18fd_hog_parameter_sPj(void);

/* Symbol: _ZN6FdCoreC2E9FdCoreDrv */
/* Demangled: FdCore::FdCore(FdCoreDrv) */
int _ZN6FdCoreC2E9FdCoreDrv(void);

/* Symbol: flip_idx */
/* Demangled: flip_idx */
extern void* flip_idx;

/* Symbol: _ZN10AppFDFT_SW14FDVTMainPhase2Ev */
/* Demangled: AppFDFT_SW::FDVTMainPhase2() */
int _ZN10AppFDFT_SW14FDVTMainPhase2Ev(void);

/* Symbol: _ZN6FdCore11getInstanceE9FdCoreDrv */
/* Demangled: FdCore::getInstance(FdCoreDrv) */
int _ZN6FdCore11getInstanceE9FdCoreDrv(void);

/* Symbol: _ZN6FdCore18FaceSkinValueInputEP13fd_cal_structi */
/* Demangled: FdCore::FaceSkinValueInput(fd_cal_struct*, int) */
int _ZN6FdCore18FaceSkinValueInputEP13fd_cal_structi(void);

/* Symbol: _Z3MAXii */
/* Demangled: MAX(int, int) */
int _Z3MAXii(void);

/* Symbol: _ZN8SwSdMain15destroyInstanceEv */
/* Demangled: SwSdMain::destroyInstance() */
int _ZN8SwSdMain15destroyInstanceEv(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _Z6OT_ABSi */
/* Demangled: OT_ABS(int) */
int _Z6OT_ABSi(void);

/* Symbol: _ZN8FdSvmHog8fd_xsqrtEjj */
/* Demangled: FdSvmHog::fd_xsqrt(unsigned int, unsigned int) */
int _ZN8FdSvmHog8fd_xsqrtEjj(void);

/* Symbol: UREE_ZallocSecureMultichunkmemWithTag */
/* Demangled: UREE_ZallocSecureMultichunkmemWithTag */
int UREE_ZallocSecureMultichunkmemWithTag(void);

/* Symbol: _ZN8FdSvmHogC2Ev */
/* Demangled: FdSvmHog::FdSvmHog() */
int _ZN8FdSvmHogC2Ev(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: UREE_RegisterSharedmem_ReadOnlyWithTag */
/* Demangled: UREE_RegisterSharedmem_ReadOnlyWithTag */
int UREE_RegisterSharedmem_ReadOnlyWithTag(void);

/* Symbol: _ZN12MTKDetection15FDVTGetSDResultEj */
/* Demangled: MTKDetection::FDVTGetSDResult(unsigned int) */
int _ZN12MTKDetection15FDVTGetSDResultEj(void);

/* Symbol: _ZN13FdSvmClassifyC1Ev */
/* Demangled: FdSvmClassify::FdSvmClassify() */
int _ZN13FdSvmClassifyC1Ev(void);

/* Symbol: _ZN6OtCore10Mean_ShiftEPhttP18OT_FACEDETECT_RECTPsS0_PfffS0_iih */
/* Demangled: OtCore::Mean_Shift(unsigned char*, unsigned short, unsigned short, OT_FACEDETECT_RECT*, short*, unsigned char*, float*, float, float, unsigned char*, int, int, unsigned char) */
int _ZN6OtCore10Mean_ShiftEPhttP18OT_FACEDETECT_RECTPsS0_PfffS0_iih(void);

/* Symbol: _ZN6SdCore11getInstanceEv */
/* Demangled: SdCore::getInstance() */
int _ZN6SdCore11getInstanceEv(void);

/* Symbol: _ZN12MTKDetection17FDVTMainFastPhaseEPi */
/* Demangled: MTKDetection::FDVTMainFastPhase(int*) */
int _ZN12MTKDetection17FDVTMainFastPhaseEPi(void);

/* Symbol: _Z13swap_cal_elemP13fd_cal_structii */
/* Demangled: swap_cal_elem(fd_cal_struct*, int, int) */
int _Z13swap_cal_elemP13fd_cal_structii(void);

/* Symbol: _ZTV12MTKDetection */
/* Demangled: vtable for MTKDetection */
extern void* _ZTV12MTKDetection;

/* Symbol: Scaled_Matrix_MeanShapeToCurrentShape */
/* Demangled: Scaled_Matrix_MeanShapeToCurrentShape */
extern void* Scaled_Matrix_MeanShapeToCurrentShape;

/* Symbol: _ZN6OtCoreC2Ev */
/* Demangled: OtCore::OtCore() */
int _ZN6OtCoreC2Ev(void);

/* Symbol: _ZN10AppFDFT_SW8FDVTMainEP9FdOptions */
/* Demangled: AppFDFT_SW::FDVTMain(FdOptions*) */
int _ZN10AppFDFT_SW8FDVTMainEP9FdOptions(void);

/* Symbol: _ZN8SwFdMain19greedyassignf_solveEPiS0_iiPA15_ii */
/* Demangled: SwFdMain::greedyassignf_solve(int*, int*, int, int, int (*) [15], int) */
int _ZN8SwFdMain19greedyassignf_solveEPiS0_iiPA15_ii(void);

/* Symbol: _ZN9FdUtlCoreC2Ev */
/* Demangled: FdUtlCore::FdUtlCore() */
int _ZN9FdUtlCoreC2Ev(void);

/* Symbol: _ZN10AppFDFT_SW16FDVTSetInputMTEEEjjPh */
/* Demangled: AppFDFT_SW::FDVTSetInputMTEE(unsigned int, unsigned int, unsigned char*) */
int _ZN10AppFDFT_SW16FDVTSetInputMTEEEjjPh(void);

/* Symbol: _ZN8SwFdMain8SWFDInitE20FACEDETECT_INIT_DATAP22FACEDETECT_INIT_RESULT */
/* Demangled: SwFdMain::SWFDInit(FACEDETECT_INIT_DATA, FACEDETECT_INIT_RESULT*) */
int _ZN8SwFdMain8SWFDInitE20FACEDETECT_INIT_DATAP22FACEDETECT_INIT_RESULT(void);

/* Symbol: _ZN8SwFdMain8SWFDMainE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO */
/* Demangled: SwFdMain::SWFDMain(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
int _ZN8SwFdMain8SWFDMainE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void);

/* Symbol: _ZN10AppFDFT_SW17Main_SetRipStatusEP20FACEDETECT_MAIN_DATA */
/* Demangled: AppFDFT_SW::Main_SetRipStatus(FACEDETECT_MAIN_DATA*) */
int _ZN10AppFDFT_SW17Main_SetRipStatusEP20FACEDETECT_MAIN_DATA(void);

/* Symbol: _ZN8FdSvmHog18fd_hog_calc_grad_yE13FD_SGrayImg_sPs */
/* Demangled: FdSvmHog::fd_hog_calc_grad_y(FD_SGrayImg_s, short*) */
int _ZN8FdSvmHog18fd_hog_calc_grad_yE13FD_SGrayImg_sPs(void);

/* Symbol: _ZN8SwFdMain12CopyFDResultEP19FACEDETECT_FACEINFOiS1_ii */
/* Demangled: SwFdMain::CopyFDResult(FACEDETECT_FACEINFO*, int, FACEDETECT_FACEINFO*, int, int) */
int _ZN8SwFdMain12CopyFDResultEP19FACEDETECT_FACEINFOiS1_ii(void);

/* Symbol: _ZN10AppFDFT_SW12Main_SdFrameEv */
/* Demangled: AppFDFT_SW::Main_SdFrame() */
int _ZN10AppFDFT_SW12Main_SdFrameEv(void);

/* Symbol: _ZN12MTKDetection17FDVTGetResultSizeEv */
/* Demangled: MTKDetection::FDVTGetResultSize() */
int _ZN12MTKDetection17FDVTGetResultSizeEv(void);

/* Symbol: UREE_CreateSessionWithTag */
/* Demangled: UREE_CreateSessionWithTag */
int UREE_CreateSessionWithTag(void);

/* Symbol: _ZN8AppFDTmp15destroyInstanceEv */
/* Demangled: AppFDTmp::destroyInstance() */
int _ZN8AppFDTmp15destroyInstanceEv(void);

/* Symbol: _ZN10AppFDFT_SW18restoreAspectRatioEiiiiRiS0_S0_S0_ */
/* Demangled: AppFDFT_SW::restoreAspectRatio(int, int, int, int, int&, int&, int&, int&) */
int _ZN10AppFDFT_SW18restoreAspectRatioEiiiiRiS0_S0_S0_(void);

/* Symbol: _ZN6SdCoreD1Ev */
/* Demangled: SdCore::~SdCore() */
int _ZN6SdCoreD1Ev(void);

/* Symbol: UREE_CloseSession */
/* Demangled: UREE_CloseSession */
int UREE_CloseSession(void);

/* Symbol: _ZN10AppFDFT_SW15FDVTGetSDResultEj */
/* Demangled: AppFDFT_SW::FDVTGetSDResult(unsigned int) */
int _ZN10AppFDFT_SW15FDVTGetSDResultEj(void);

/* Symbol: ScaleValue_NormalizedToImgDomain */
/* Demangled: ScaleValue_NormalizedToImgDomain */
extern void* ScaleValue_NormalizedToImgDomain;

/* Symbol: _ZN6SdCore28SmileFaceDetectionEngine_vgaEP13sd_cal_struct */
/* Demangled: SdCore::SmileFaceDetectionEngine_vga(sd_cal_struct*) */
int _ZN6SdCore28SmileFaceDetectionEngine_vgaEP13sd_cal_struct(void);

/* Symbol: _ZN12MTKDetection17FDVTMainPostPhaseEv */
/* Demangled: MTKDetection::FDVTMainPostPhase() */
int _ZN12MTKDetection17FDVTMainPostPhaseEv(void);

/* Symbol: _ZTV8AppFDTmp */
/* Demangled: vtable for AppFDTmp */
extern void* _ZTV8AppFDTmp;

/* Symbol: UREE_SecureCamera_to_MTEE */
/* Demangled: UREE_SecureCamera_to_MTEE */
int UREE_SecureCamera_to_MTEE(void);

/* Symbol: UREE_ReleaseSecurechunkmem */
/* Demangled: UREE_ReleaseSecurechunkmem */
int UREE_ReleaseSecurechunkmem(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_FDFT_H */
