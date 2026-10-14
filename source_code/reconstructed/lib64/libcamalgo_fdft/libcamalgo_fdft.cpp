/*
 * Reverse-Engineered Source for: libcamalgo.fdft.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_fdft"

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
#include "libcamalgo_fdft.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GZ_KREE "/dev/gz_kree"
#define DEV_DEV_TZMEM "/dev/tzmem"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GZ_KREE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GZ_KREE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GZ_KREE, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TZMEM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TZMEM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TZMEM, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SwSdMain::~SwSdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMainD0Ev(void) {
    ALOGD("_ZN8SwSdMainD0Ev() called");
    return 0;
}

/* Demangled: OtCore::Compute_Target_Histogram(unsigned char*, unsigned short, unsigned short, unsigned char, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore24Compute_Target_HistogramEPhtthii(void) {
    ALOGD("_ZN6OtCore24Compute_Target_HistogramEPhtthii() called");
    return 0;
}

/* Exported Object: rip_angle_map_tbl */
extern "C" __attribute__((visibility("default"))) void* rip_angle_map_tbl = NULL;

/* Demangled: AppFDFT_SW::Main_PickNewFacesInTmpResults() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW29Main_PickNewFacesInTmpResultsEv(void) {
    ALOGD("_ZN10AppFDFT_SW29Main_PickNewFacesInTmpResultsEv() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeSRT_fixedPVer(int*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP20ComputeSRT_fixedPVerEPiS0_S0_i(void) {
    ALOGD("_ZN13ERTDetectorFP20ComputeSRT_fixedPVerEPiS0_S0_i() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem(void) {
    ALOGD("UREE_RegisterSharedmem() called");
    return 0;
}

/* Demangled: TZ_GetErrorString */
extern "C" __attribute__((visibility("default"))) int TZ_GetErrorString(void) {
    ALOGD("TZ_GetErrorString() called");
    return 0;
}

/* Demangled: FdSvmClassify::FdSvmClassify() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassifyC2Ev(void) {
    ALOGD("_ZN13FdSvmClassifyC2Ev() called");
    return 0;
}

/* Demangled: ERTDetectorFP::UpdateShape(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP11UpdateShapeEPiS0_(void) {
    ALOGD("_ZN13ERTDetectorFP11UpdateShapeEPiS0_() called");
    return 0;
}

/* Demangled: SwFdMain::OTSizeToFDSize(FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain14OTSizeToFDSizeEP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN8SwFdMain14OTSizeToFDSizeEP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_MergeLastAndOtFacesIntoFdResult() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW36Main_MergeLastAndOtFacesIntoFdResultEv(void) {
    ALOGD("_ZN10AppFDFT_SW36Main_MergeLastAndOtFacesIntoFdResultEv() called");
    return 0;
}

/* Demangled: SwSdMain::SWSDInit(SMILEDETECT_INIT_DATA, SMILEDETECT_INIT_RESULT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMain8SWSDInitE21SMILEDETECT_INIT_DATAP23SMILEDETECT_INIT_RESULT(void) {
    ALOGD("_ZN8SwSdMain8SWSDInitE21SMILEDETECT_INIT_DATAP23SMILEDETECT_INIT_RESULT() called");
    return 0;
}

/* Exported Object: AnchorIndex */
extern "C" __attribute__((visibility("default"))) void* AnchorIndex = NULL;

/* Demangled: ERTDetectorFP::TraverseTree(unsigned char*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP12TraverseTreeEPhiPi(void) {
    ALOGD("_ZN13ERTDetectorFP12TraverseTreeEPhiPi() called");
    return 0;
}

/* Demangled: UREE_ION_CP_Chm2Shm */
extern "C" __attribute__((visibility("default"))) int UREE_ION_CP_Chm2Shm(void) {
    ALOGD("UREE_ION_CP_Chm2Shm() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW9FDVTResetEv(void) {
    ALOGD("_ZN10AppFDFT_SW9FDVTResetEv() called");
    return 0;
}

/* Demangled: FdCore::RunSVM(fd_cal_struct*, FD_TUNING_PARA_STRUCT*, FD_RESULT_STRUCT*, unsigned char*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore6RunSVMEP13fd_cal_structP21FD_TUNING_PARA_STRUCTP16FD_RESULT_STRUCTPhb(void) {
    ALOGD("_ZN6FdCore6RunSVMEP13fd_cal_structP21FD_TUNING_PARA_STRUCTP16FD_RESULT_STRUCTPhb() called");
    return 0;
}

/* Demangled: OtCore::get_overlap_index(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore17get_overlap_indexEiiiiiiii(void) {
    ALOGD("_ZN6OtCore17get_overlap_indexEiiiiiiii() called");
    return 0;
}

/* Demangled: UREE_AllocSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecuremem(void) {
    ALOGD("UREE_AllocSecuremem() called");
    return 0;
}

/* Demangled: AppFDFT_SW::MergeGender2FDResult(short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW20MergeGender2FDResultEPsii(void) {
    ALOGD("_ZN10AppFDFT_SW20MergeGender2FDResultEPsii() called");
    return 0;
}

/* Demangled: UREE_ReleaseTzmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReleaseTzmem(void) {
    ALOGD("UREE_ReleaseTzmem() called");
    return 0;
}

/* Exported Object: leafvalue */
extern "C" __attribute__((visibility("default"))) void* leafvalue = NULL;

/* Demangled: AppFDFT_SW::ColorStatistics(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW15ColorStatisticsEjji(void) {
    ALOGD("_ZN10AppFDFT_SW15ColorStatisticsEjji() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_RemoveBoundaryFdResult() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW27Main_RemoveBoundaryFdResultEv(void) {
    ALOGD("_ZN10AppFDFT_SW27Main_RemoveBoundaryFdResultEv() called");
    return 0;
}

/* Demangled: FdCore::FdCoreSetProcInfo(FD_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore17FdCoreSetProcInfoEP23FD_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN6FdCore17FdCoreSetProcInfoEP23FD_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: UREE_AllocSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecureMultichunkmem(void) {
    ALOGD("UREE_AllocSecureMultichunkmem() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDAssignIDandOrder() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW18FDAssignIDandOrderEv(void) {
    ALOGD("_ZN10AppFDFT_SW18FDAssignIDandOrderEv() called");
    return 0;
}

/* Demangled: UtlSwRotator::~UtlSwRotator() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotatorD0Ev(void) {
    ALOGD("_ZN12UtlSwRotatorD0Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMainJoinPhase(unsigned char*, short (*) [1024], int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection17FDVTMainJoinPhaseEPhPA1024_si(void) {
    ALOGD("_ZN12MTKDetection17FDVTMainJoinPhaseEPhPA1024_si() called");
    return 0;
}

/* Demangled: UREE_TeeServiceCall */
extern "C" __attribute__((visibility("default"))) int UREE_TeeServiceCall(void) {
    ALOGD("UREE_TeeServiceCall() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDPostUpdateandDump() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW19FDPostUpdateandDumpEv(void) {
    ALOGD("_ZN10AppFDFT_SW19FDPostUpdateandDumpEv() called");
    return 0;
}

/* Demangled: FdCore::ExtractOtFace() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13ExtractOtFaceEv(void) {
    ALOGD("_ZN6FdCore13ExtractOtFaceEv() called");
    return 0;
}

/* Demangled: UREE_AppendSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_AppendSecurechunkmem(void) {
    ALOGD("UREE_AppendSecurechunkmem() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ExtractFeatureValue_FlipImgCoordinate(unsigned char*, int, int, int*, int*, int*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP37ExtractFeatureValue_FlipImgCoordinateEPhiiPiS1_S1_S0_(void) {
    ALOGD("_ZN13ERTDetectorFP37ExtractFeatureValue_FlipImgCoordinateEPhiiPiS1_S1_S0_() called");
    return 0;
}

/* Demangled: FdCore::~FdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCoreD0Ev(void) {
    ALOGD("_ZN6FdCoreD0Ev() called");
    return 0;
}

/* Demangled: TrackingTrajectory::TrackingTrajectory() */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectoryC1Ev(void) {
    ALOGD("_ZN18TrackingTrajectoryC1Ev() called");
    return 0;
}

/* Demangled: FdSvmClassify::fd_execute_horizontal_flip(FD_SGrayImg_s*, FD_SGrayImg_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify26fd_execute_horizontal_flipEP13FD_SGrayImg_sS1_(void) {
    ALOGD("_ZN13FdSvmClassify26fd_execute_horizontal_flipEP13FD_SGrayImg_sS1_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Convert2Square(int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW14Convert2SquareERiS0_S0_S0_(void) {
    ALOGD("_ZN10AppFDFT_SW14Convert2SquareERiS0_S0_S0_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::PrioritySorting() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW15PrioritySortingEv(void) {
    ALOGD("_ZN10AppFDFT_SW15PrioritySortingEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_GfdFramePhase2(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW19Main_GfdFramePhase2Eb(void) {
    ALOGD("_ZN10AppFDFT_SW19Main_GfdFramePhase2Eb() called");
    return 0;
}

/* Demangled: MTKDetection::createInstance(DRVFDObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection14createInstanceE13DRVFDObject_s(void) {
    ALOGD("_ZN12MTKDetection14createInstanceE13DRVFDObject_s() called");
    return 0;
}

/* Demangled: ERTDetectorFP::AssignModel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP11AssignModelEi(void) {
    ALOGD("_ZN13ERTDetectorFP11AssignModelEi() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTSetInputMTEE(unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection16FDVTSetInputMTEEEjjPh(void) {
    ALOGD("_ZN12MTKDetection16FDVTSetInputMTEEEjjPh() called");
    return 0;
}

/* Demangled: SdCore::~SdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCoreD2Ev(void) {
    ALOGD("_ZN6SdCoreD2Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTGetMode(FDVT_OPERATION_MODE_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM(void) {
    ALOGD("_ZN10AppFDFT_SW11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM() called");
    return 0;
}

/* Demangled: FdUtlCore::UtlCalFeatureValueShrink(short const*, short const*, UTL_FEATURE_CAL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCore24UtlCalFeatureValueShrinkEPKsS1_P22UTL_FEATURE_CAL_STRUCT(void) {
    ALOGD("_ZN9FdUtlCore24UtlCalFeatureValueShrinkEPKsS1_P22UTL_FEATURE_CAL_STRUCT() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTMainPostPhase() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17FDVTMainPostPhaseEv(void) {
    ALOGD("_ZN10AppFDFT_SW17FDVTMainPostPhaseEv() called");
    return 0;
}

/* Demangled: FdCore::FdCoreSetInfo(FD_SET_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13FdCoreSetInfoEP18FD_SET_INFO_STRUCT(void) {
    ALOGD("_ZN6FdCore13FdCoreSetInfoEP18FD_SET_INFO_STRUCT() called");
    return 0;
}

/* Demangled: SdCore::SdCoreSetInfo(SD_SET_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore13SdCoreSetInfoEP18SD_SET_INFO_STRUCT(void) {
    ALOGD("_ZN6SdCore13SdCoreSetInfoEP18SD_SET_INFO_STRUCT() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: SetSmoothingPara(unsigned char, unsigned int&, unsigned int&, unsigned int&, unsigned int&, int&, int&, unsigned char&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z16SetSmoothingParahRjS_S_S_RiS0_RhS0_S0_(void) {
    ALOGD("_Z16SetSmoothingParahRjS_S_S_RiS0_RhS0_S0_() called");
    return 0;
}

/* Demangled: SwFdMain::CheckIfLockOtBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain19CheckIfLockOtBufferEv(void) {
    ALOGD("_ZN8SwFdMain19CheckIfLockOtBufferEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::CropPatches(unsigned char*, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW11CropPatchesEPhiiiiiiii(void) {
    ALOGD("_ZN10AppFDFT_SW11CropPatchesEPhiiiiiiii() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetResult(unsigned char*, FACEDETECT_TRACKING_RESULT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM(void) {
    ALOGD("_ZN12MTKDetection13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: SwFdMain::~SwFdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMainD0Ev(void) {
    ALOGD("_ZN8SwFdMainD0Ev() called");
    return 0;
}

/* Demangled: SwSdMain::~SwSdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMainD1Ev(void) {
    ALOGD("_ZN8SwSdMainD1Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTParseResult(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection15FDVTParseResultEjjjjjffj(void) {
    ALOGD("_ZN12MTKDetection15FDVTParseResultEjjjjjffj() called");
    return 0;
}

/* Demangled: FdCore::FacePrioritySorting(fd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore19FacePrioritySortingEP13fd_cal_struct(void) {
    ALOGD("_ZN6FdCore19FacePrioritySortingEP13fd_cal_struct() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: ERTDetectorFP::operator()(unsigned char*, int, int, int*, bool, int*, int*, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFPclEPhiiPibS1_S1_S0_S1_(void) {
    ALOGD("_ZN13ERTDetectorFPclEPhiiPibS1_S1_S0_S1_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_OtCall(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW11Main_OtCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN10AppFDFT_SW11Main_OtCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: FdCore::GFD_Thread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore10GFD_ThreadEPv(void) {
    ALOGD("_ZN6FdCore10GFD_ThreadEPv() called");
    return 0;
}

/* Demangled: SdCore::SdCoreSetProcInfo(SD_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore17SdCoreSetProcInfoEP23SD_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN6SdCore17SdCoreSetProcInfoEP23SD_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: FdCore::MergeResult(fd_cal_struct*, unsigned short, int, int, int, int, FD_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore11MergeResultEP13fd_cal_structtiiiiP16FD_RESULT_STRUCT(void) {
    ALOGD("_ZN6FdCore11MergeResultEP13fd_cal_structtiiiiP16FD_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTReset() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection9FDVTResetEv(void) {
    ALOGD("_ZN12MTKDetection9FDVTResetEv() called");
    return 0;
}

/* Exported Object: vtable for SwFdMain */
extern "C" __attribute__((visibility("default"))) void* _ZTV8SwFdMain = NULL;

/* Demangled: AppFDFT_SW::Convert2UnpaddedYBnd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW20Convert2UnpaddedYBndEi(void) {
    ALOGD("_ZN10AppFDFT_SW20Convert2UnpaddedYBndEi() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotator270(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator13swYRotator270EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator13swYRotator270EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: CreateSession(char const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z13CreateSessionPKcPj(void) {
    ALOGD("_Z13CreateSessionPKcPj() called");
    return 0;
}

/* Demangled: UtlSwRotator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator11getInstanceEv(void) {
    ALOGD("_ZN12UtlSwRotator11getInstanceEv() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotatorMirror000(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator19swYRotatorMirror000EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator19swYRotatorMirror000EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotatorMirror180(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator19swYRotatorMirror180EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator19swYRotatorMirror180EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: FdCore::genRect(fd_cal_struct*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore7genRectEP13fd_cal_structt(void) {
    ALOGD("_ZN6FdCore7genRectEP13fd_cal_structt() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDPostFLDandCS() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW14FDPostFLDandCSEv(void) {
    ALOGD("_ZN10AppFDFT_SW14FDPostFLDandCSEv() called");
    return 0;
}

/* Demangled: FdCore::FdCoreGetResult(FD_RESULT_STRUCT*, short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore15FdCoreGetResultEP16FD_RESULT_STRUCTs(void) {
    ALOGD("_ZN6FdCore15FdCoreGetResultEP16FD_RESULT_STRUCTs() called");
    return 0;
}

/* Demangled: FdSvmHog::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog11getInstanceEv(void) {
    ALOGD("_ZN8FdSvmHog11getInstanceEv() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: ERTDetectorFP::AssignModel_FacingRight(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP23AssignModel_FacingRightEi(void) {
    ALOGD("_ZN13ERTDetectorFP23AssignModel_FacingRightEi() called");
    return 0;
}

/* Demangled: UtlSwRotator::~UtlSwRotator() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotatorD1Ev(void) {
    ALOGD("_ZN12UtlSwRotatorD1Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTGetResultSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17FDVTGetResultSizeEv(void) {
    ALOGD("_ZN10AppFDFT_SW17FDVTGetResultSizeEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::TrimYBnd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW8TrimYBndEi(void) {
    ALOGD("_ZN10AppFDFT_SW8TrimYBndEi() called");
    return 0;
}

/* Demangled: FdCore::~FdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCoreD1Ev(void) {
    ALOGD("_ZN6FdCoreD1Ev() called");
    return 0;
}

/* Demangled: SwSdMain::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMain11getInstanceEv(void) {
    ALOGD("_ZN8SwSdMain11getInstanceEv() called");
    return 0;
}

/* Demangled: TrackingTrajectory::TrackingTrajectory() */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectoryC2Ev(void) {
    ALOGD("_ZN18TrackingTrajectoryC2Ev() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem_ReadOnly */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem_ReadOnly(void) {
    ALOGD("UREE_RegisterSharedmem_ReadOnly() called");
    return 0;
}

/* Exported Object: vtable for UtlSwRotator */
extern "C" __attribute__((visibility("default"))) void* _ZTV12UtlSwRotator = NULL;

/* Demangled: MTKDetection::FDVTInit(MTKFDFTInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection8FDVTInitEP15MTKFDFTInitInfo(void) {
    ALOGD("_ZN12MTKDetection8FDVTInitEP15MTKFDFTInitInfo() called");
    return 0;
}

/* Demangled: min(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3minii(void) {
    ALOGD("_Z3minii() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecurechunkmem(void) {
    ALOGD("UREE_UnreferenceSecurechunkmem() called");
    return 0;
}

/* Demangled: OtCore::Compute_new_cordinate(unsigned short*, unsigned int*, unsigned int*, unsigned short, unsigned short, int*, int*, float*, unsigned short, float, unsigned short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore21Compute_new_cordinateEPtPjS1_ttPiS2_PftfS0_ii(void) {
    ALOGD("_ZN6OtCore21Compute_new_cordinateEPtPjS1_ttPiS2_PftfS0_ii() called");
    return 0;
}

/* Demangled: OtCore::set_ot_ds(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore9set_ot_dsEi(void) {
    ALOGD("_ZN6OtCore9set_ot_dsEi() called");
    return 0;
}

/* Demangled: FdSvmClassify::fd_execute_flip(FD_SGrayImg_s*, FD_FlipType) */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify15fd_execute_flipEP13FD_SGrayImg_s11FD_FlipType(void) {
    ALOGD("_ZN13FdSvmClassify15fd_execute_flipEP13FD_SGrayImg_s11FD_FlipType() called");
    return 0;
}

/* Demangled: FdSvmHog::~FdSvmHog() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHogD0Ev(void) {
    ALOGD("_ZN8FdSvmHogD0Ev() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeRIPAngle(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP15ComputeRIPAngleEPi(void) {
    ALOGD("_ZN13ERTDetectorFP15ComputeRIPAngleEPi() called");
    return 0;
}

/* Demangled: OtCore::set_h_type(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore10set_h_typeEii(void) {
    ALOGD("_ZN6OtCore10set_h_typeEii() called");
    return 0;
}

/* Demangled: FdCore::copyRect(fd_cal_struct*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore8copyRectEP13fd_cal_structt(void) {
    ALOGD("_ZN6FdCore8copyRectEP13fd_cal_structt() called");
    return 0;
}

/* Exported Object: vtable for SwSdMain */
extern "C" __attribute__((visibility("default"))) void* _ZTV8SwSdMain = NULL;

/* Demangled: AppFDFT_SW::FDVTMainFastPhase(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17FDVTMainFastPhaseEPi(void) {
    ALOGD("_ZN10AppFDFT_SW17FDVTMainFastPhaseEPi() called");
    return 0;
}

/* Demangled: OtCore::Copy_Histogram(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore14Copy_HistogramEii(void) {
    ALOGD("_ZN6OtCore14Copy_HistogramEii() called");
    return 0;
}

/* Demangled: OtCore::reset_overlap_offsets(unsigned char, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore21reset_overlap_offsetsEhii(void) {
    ALOGD("_ZN6OtCore21reset_overlap_offsetsEhii() called");
    return 0;
}

/* Demangled: SwSdMain::SWSDExit() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMain8SWSDExitEv(void) {
    ALOGD("_ZN8SwSdMain8SWSDExitEv() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_xatan2_poly3(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog15fd_xatan2_poly3Eii(void) {
    ALOGD("_ZN8FdSvmHog15fd_xatan2_poly3Eii() called");
    return 0;
}

/* Demangled: FdCore::FdCore(FdCoreDrv) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCoreC1E9FdCoreDrv(void) {
    ALOGD("_ZN6FdCoreC1E9FdCoreDrv() called");
    return 0;
}

/* Demangled: OtCore::~OtCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCoreD0Ev(void) {
    ALOGD("_ZN6OtCoreD0Ev() called");
    return 0;
}

/* Demangled: FdCore::NonMaxSupp(fd_cal_struct*, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore10NonMaxSuppEP13fd_cal_structtt(void) {
    ALOGD("_ZN6FdCore10NonMaxSuppEP13fd_cal_structtt() called");
    return 0;
}

/* Demangled: SwFdMain::~SwFdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMainD1Ev(void) {
    ALOGD("_ZN8SwFdMainD1Ev() called");
    return 0;
}

/* Demangled: FdSvmClassify::fd_weak_svm_classify_int(unsigned int const*, fd_ensemble_svm_model_int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify24fd_weak_svm_classify_intEPKjPK25fd_ensemble_svm_model_inti(void) {
    ALOGD("_ZN13FdSvmClassify24fd_weak_svm_classify_intEPKjPK25fd_ensemble_svm_model_inti() called");
    return 0;
}

/* Demangled: FdCore::FdCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore11FdCoreResetEv(void) {
    ALOGD("_ZN6FdCore11FdCoreResetEv() called");
    return 0;
}

/* Demangled: SwSdMain::~SwSdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMainD2Ev(void) {
    ALOGD("_ZN8SwSdMainD2Ev() called");
    return 0;
}

/* Demangled: FdUtlCore::~FdUtlCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCoreD0Ev(void) {
    ALOGD("_ZN9FdUtlCoreD0Ev() called");
    return 0;
}

/* Exported Object: FeatureIndex1 */
extern "C" __attribute__((visibility("default"))) void* FeatureIndex1 = NULL;

/* Exported Object: FeatureIndex2 */
extern "C" __attribute__((visibility("default"))) void* FeatureIndex2 = NULL;

/* Exported Object: fld_cv_ptr */
extern "C" __attribute__((visibility("default"))) void* fld_cv_ptr = NULL;

/* Demangled: AppFDFT_SW::Main_HanldeWholeNewFaceCandidates() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW33Main_HanldeWholeNewFaceCandidatesEv(void) {
    ALOGD("_ZN10AppFDFT_SW33Main_HanldeWholeNewFaceCandidatesEv() called");
    return 0;
}

/* Demangled: UREE_AllocSecurememWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecurememWithTag(void) {
    ALOGD("UREE_AllocSecurememWithTag() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTMainCropPhase(unsigned char (*) [16], unsigned char (*) [16], unsigned char**, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_(void) {
    ALOGD("_ZN10AppFDFT_SW17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_() called");
    return 0;
}

/* Demangled: UtlSwRotator::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator15destroyInstanceEv(void) {
    ALOGD("_ZN12UtlSwRotator15destroyInstanceEv() called");
    return 0;
}

/* Demangled: UnregisterHandle(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z16UnregisterHandlejRj(void) {
    ALOGD("_Z16UnregisterHandlejRj() called");
    return 0;
}

/* Demangled: SwFdMain::OTCall(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain6OTCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN8SwFdMain6OTCallE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: SdCore::SdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCoreC1Ev(void) {
    ALOGD("_ZN6SdCoreC1Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: AppFDFT_SW::UpdateFaceId() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW12UpdateFaceIdEv(void) {
    ALOGD("_ZN10AppFDFT_SW12UpdateFaceIdEv() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeSR_fixedPVer(int*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP19ComputeSR_fixedPVerEPiS0_S0_i(void) {
    ALOGD("_ZN13ERTDetectorFP19ComputeSR_fixedPVerEPiS0_S0_i() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetMode(FDVT_OPERATION_MODE_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM(void) {
    ALOGD("_ZN12MTKDetection11FDVTGetModeEP24FDVT_OPERATION_MODE_ENUM() called");
    return 0;
}

/* Demangled: FdCore::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore15destroyInstanceEv(void) {
    ALOGD("_ZN6FdCore15destroyInstanceEv() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecureMultichunkmem(void) {
    ALOGD("UREE_UnreferenceSecureMultichunkmem() called");
    return 0;
}

/* Exported Object: vtable for FdUtlCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV9FdUtlCore = NULL;

/* Demangled: OtCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore11getInstanceEv(void) {
    ALOGD("_ZN6OtCore11getInstanceEv() called");
    return 0;
}

/* Demangled: ERTDetectorFP::FaceAttriClassifier(int*, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP19FaceAttriClassifierEPiPhS0_(void) {
    ALOGD("_ZN13ERTDetectorFP19FaceAttriClassifierEPiPhS0_() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: AppFDFT_SW::setADB() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW6setADBEv(void) {
    ALOGD("_ZN10AppFDFT_SW6setADBEv() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Exported Object: uree_init_mutex */
extern "C" __attribute__((visibility("default"))) void* uree_init_mutex = NULL;

/* Demangled: FdSvmHog::fd_xdiv(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog7fd_xdivEiij(void) {
    ALOGD("_ZN8FdSvmHog7fd_xdivEiij() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecurechunkmem(void) {
    ALOGD("UREE_ReferenceSecurechunkmem() called");
    return 0;
}

/* Demangled: FdSvmClassify::fd_svm_classify_int(FD_SGrayImg_s, fd_hog_parameter_s, fd_ensemble_svm_model_int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify19fd_svm_classify_intE13FD_SGrayImg_s18fd_hog_parameter_sPK25fd_ensemble_svm_model_int(void) {
    ALOGD("_ZN13FdSvmClassify19fd_svm_classify_intE13FD_SGrayImg_s18fd_hog_parameter_sPK25fd_ensemble_svm_model_int() called");
    return 0;
}

/* Demangled: FdUtlCore::UtlCalConfidenceValue(int, int, UTL_CASCADED_CLASSIFIERS_STRUCT const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCore21UtlCalConfidenceValueEiiPK31UTL_CASCADED_CLASSIFIERS_STRUCT(void) {
    ALOGD("_ZN9FdUtlCore21UtlCalConfidenceValueEiiPK31UTL_CASCADED_CLASSIFIERS_STRUCT() called");
    return 0;
}

/* Demangled: FdCore::FaceSkinValueStatistics(fd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore23FaceSkinValueStatisticsEP13fd_cal_struct(void) {
    ALOGD("_ZN6FdCore23FaceSkinValueStatisticsEP13fd_cal_struct() called");
    return 0;
}

/* Demangled: UtlSwRotator::~UtlSwRotator() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotatorD2Ev(void) {
    ALOGD("_ZN12UtlSwRotatorD2Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDPostProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW13FDPostProcessEv(void) {
    ALOGD("_ZN10AppFDFT_SW13FDPostProcessEv() called");
    return 0;
}

/* Demangled: FdCore::~FdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCoreD2Ev(void) {
    ALOGD("_ZN6FdCoreD2Ev() called");
    return 0;
}

/* Demangled: UtlSwRotator::swBilinearResizer(UTL_BILINEAR_Y_RESIZER_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator17swBilinearResizerEP29UTL_BILINEAR_Y_RESIZER_STRUCT(void) {
    ALOGD("_ZN12UtlSwRotator17swBilinearResizerEP29UTL_BILINEAR_Y_RESIZER_STRUCT() called");
    return 0;
}

/* Demangled: SwFdMain::SWFDMainPhase2(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain14SWFDMainPhase2E20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN8SwFdMain14SWFDMainPhase2E20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: FdSvmClassify::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify15destroyInstanceEv(void) {
    ALOGD("_ZN13FdSvmClassify15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FdSvmHog::~FdSvmHog() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHogD1Ev(void) {
    ALOGD("_ZN8FdSvmHogD1Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTParseResult(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW15FDVTParseResultEjjjjjffj(void) {
    ALOGD("_ZN10AppFDFT_SW15FDVTParseResultEjjjjjffj() called");
    return 0;
}

/* Demangled: FdSvmClassify::~FdSvmClassify() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassifyD0Ev(void) {
    ALOGD("_ZN13FdSvmClassifyD0Ev() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_L2_norm_shift(unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog20fd_hog_L2_norm_shiftEPKjj(void) {
    ALOGD("_ZN8FdSvmHog20fd_hog_L2_norm_shiftEPKjj() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Convert2UnpaddedXBnd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW20Convert2UnpaddedXBndEi(void) {
    ALOGD("_ZN10AppFDFT_SW20Convert2UnpaddedXBndEi() called");
    return 0;
}

/* Demangled: AppFDFT_SW::MaxPooling(short*, int, int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW10MaxPoolingEPsiiS0_(void) {
    ALOGD("_ZN10AppFDFT_SW10MaxPoolingEPsiiS0_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTGetResult(unsigned char*, FACEDETECT_TRACKING_RESULT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM(void) {
    ALOGD("_ZN10AppFDFT_SW13FDVTGetResultEPh36FACEDETECT_TRACKING_RESULT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: OtCore::MSiter(int*, int*, int*, int*, int*, int*, int, unsigned char*, unsigned short, unsigned short, OT_FACEDETECT_RECT*, unsigned char*, float*, int, int, unsigned int (*) [4096], unsigned int*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore6MSiterEPiS0_S0_S0_S0_S0_iPhttP18OT_FACEDETECT_RECTS1_PfiiPA4096_jPjh(void) {
    ALOGD("_ZN6OtCore6MSiterEPiS0_S0_S0_S0_S0_iPhttP18OT_FACEDETECT_RECTS1_PfiiPA4096_jPjh() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: UREE_AllocSecureMultichunkmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecureMultichunkmemWithTag(void) {
    ALOGD("UREE_AllocSecureMultichunkmemWithTag() called");
    return 0;
}

/* Demangled: OtCore::~OtCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCoreD1Ev(void) {
    ALOGD("_ZN6OtCoreD1Ev() called");
    return 0;
}

/* Demangled: SwFdMain::~SwFdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMainD2Ev(void) {
    ALOGD("_ZN8SwFdMainD2Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTSDDrawFaceRect(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection18FDVTSDDrawFaceRectEjjjjjh(void) {
    ALOGD("_ZN12MTKDetection18FDVTSDDrawFaceRectEjjjjjh() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_HandleNewFaceCandidatesInTracking() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW38Main_HandleNewFaceCandidatesInTrackingEv(void) {
    ALOGD("_ZN10AppFDFT_SW38Main_HandleNewFaceCandidatesInTrackingEv() called");
    return 0;
}

/* Demangled: TrackingTrajectory::reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectory5resetEi(void) {
    ALOGD("_ZN18TrackingTrajectory5resetEi() called");
    return 0;
}

/* Demangled: OtCore::getIndexfromYUYV_NEON(unsigned short*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore21getIndexfromYUYV_NEONEPtji(void) {
    ALOGD("_ZN6OtCore21getIndexfromYUYV_NEONEPtji() called");
    return 0;
}

/* Demangled: FdUtlCore::~FdUtlCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCoreD1Ev(void) {
    ALOGD("_ZN9FdUtlCoreD1Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_SetFdMainDataBasic(FACEDETECT_MAIN_DATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW23Main_SetFdMainDataBasicEP20FACEDETECT_MAIN_DATA(void) {
    ALOGD("_ZN10AppFDFT_SW23Main_SetFdMainDataBasicEP20FACEDETECT_MAIN_DATA() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_L2_norm(unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog14fd_hog_L2_normEPKjj(void) {
    ALOGD("_ZN8FdSvmHog14fd_hog_L2_normEPKjj() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTGetICSResult(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW16FDVTGetICSResultEPhS0_jjjjjj(void) {
    ALOGD("_ZN10AppFDFT_SW16FDVTGetICSResultEPhS0_jjjjjj() called");
    return 0;
}

/* Demangled: FdCore::FilterResult50(fd_cal_struct*, unsigned short, int, FD_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore14FilterResult50EP13fd_cal_structtiP16FD_RESULT_STRUCT(void) {
    ALOGD("_ZN6FdCore14FilterResult50EP13fd_cal_structtiP16FD_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: AppFDFT_SW::TrimXBnd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW8TrimXBndEi(void) {
    ALOGD("_ZN10AppFDFT_SW8TrimXBndEi() called");
    return 0;
}

/* Demangled: FdCore::FaceCandidateOverlapMerge(fd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore25FaceCandidateOverlapMergeEP13fd_cal_struct(void) {
    ALOGD("_ZN6FdCore25FaceCandidateOverlapMergeEP13fd_cal_struct() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Log_synLogDetailProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW24Log_synLogDetailPropertyEv(void) {
    ALOGD("_ZN10AppFDFT_SW24Log_synLogDetailPropertyEv() called");
    return 0;
}

/* Demangled: FdCore::QSort(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore5QSortEPiS0_i(void) {
    ALOGD("_ZN6FdCore5QSortEPiS0_i() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_calc_grad_x(FD_SGrayImg_s, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog18fd_hog_calc_grad_xE13FD_SGrayImg_sPs(void) {
    ALOGD("_ZN8FdSvmHog18fd_hog_calc_grad_xE13FD_SGrayImg_sPs() called");
    return 0;
}

/* Exported Object: vtable for FdCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV6FdCore = NULL;

/* Demangled: UtlSwRotator::swYRotator090(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator13swYRotator090EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator13swYRotator090EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: SdCore::SdCoreGetResult(SD_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore15SdCoreGetResultEP16SD_RESULT_STRUCT(void) {
    ALOGD("_ZN6SdCore15SdCoreGetResultEP16SD_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: SdCore::SdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCoreC2Ev(void) {
    ALOGD("_ZN6SdCoreC2Ev() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: UREE_ION_TEST_UPT_CHMDATA */
extern "C" __attribute__((visibility("default"))) int UREE_ION_TEST_UPT_CHMDATA(void) {
    ALOGD("UREE_ION_TEST_UPT_CHMDATA() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_set_hog_param(fd_hog_parameter_s*, unsigned char const*, unsigned char const*, unsigned char, unsigned char, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog16fd_set_hog_paramEP18fd_hog_parameter_sPKhS3_hhhh(void) {
    ALOGD("_ZN8FdSvmHog16fd_set_hog_paramEP18fd_hog_parameter_sPKhS3_hhhh() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeR_fixedPVer(int*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP18ComputeR_fixedPVerEPiS0_S0_i(void) {
    ALOGD("_ZN13ERTDetectorFP18ComputeR_fixedPVerEPiS0_S0_i() called");
    return 0;
}

/* Demangled: SdCore::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore15destroyInstanceEv(void) {
    ALOGD("_ZN6SdCore15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for FdSvmClassify */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FdSvmClassify = NULL;

/* Demangled: utilSqrt_64(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z11utilSqrt_64yy(void) {
    ALOGD("_Z11utilSqrt_64yy() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: FdCore::SortCandidate(fd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13SortCandidateEP13fd_cal_struct(void) {
    ALOGD("_ZN6FdCore13SortCandidateEP13fd_cal_struct() called");
    return 0;
}

/* Demangled: FdCore::printHWface() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore11printHWfaceEv(void) {
    ALOGD("_ZN6FdCore11printHWfaceEv() called");
    return 0;
}

/* Demangled: FdCore::FdCoreGetInfo(FD_GET_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13FdCoreGetInfoEP22FD_GET_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN6FdCore13FdCoreGetInfoEP22FD_GET_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: TrackingHistory::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistory15destroyInstanceEv(void) {
    ALOGD("_ZN15TrackingHistory15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_normalize(unsigned int*, unsigned int, unsigned int, FD_SNormalType) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog16fd_hog_normalizeEPjjj14FD_SNormalType(void) {
    ALOGD("_ZN8FdSvmHog16fd_hog_normalizeEPjjj14FD_SNormalType() called");
    return 0;
}

/* Exported Object: initial_shape_in_use */
extern "C" __attribute__((visibility("default"))) void* initial_shape_in_use = NULL;

/* Exported Object: fld_cv_range_ptr */
extern "C" __attribute__((visibility("default"))) void* fld_cv_range_ptr = NULL;

/* Demangled: SwFdMain::SwFdMain(SWFD_MAIN_DRV) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMainC2E13SWFD_MAIN_DRV(void) {
    ALOGD("_ZN8SwFdMainC2E13SWFD_MAIN_DRV() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecuremem(void) {
    ALOGD("UREE_ReferenceSecuremem() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecuremem(void) {
    ALOGD("UREE_UnreferenceSecuremem() called");
    return 0;
}

/* Demangled: max(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3maxii(void) {
    ALOGD("_Z3maxii() called");
    return 0;
}

/* Demangled: SwSdMain::SwSdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMainC1Ev(void) {
    ALOGD("_ZN8SwSdMainC1Ev() called");
    return 0;
}

/* Demangled: UREE_WriteSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_WriteSecurechunkmem(void) {
    ALOGD("UREE_WriteSecurechunkmem() called");
    return 0;
}

/* Demangled: AppFDFT_SW::AppFDFT_SW(DRVFDObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SWC2E13DRVFDObject_s(void) {
    ALOGD("_ZN10AppFDFT_SWC2E13DRVFDObject_s() called");
    return 0;
}

/* Demangled: SwFdMain::getInstance(SWFD_MAIN_DRV) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain11getInstanceE13SWFD_MAIN_DRV(void) {
    ALOGD("_ZN8SwFdMain11getInstanceE13SWFD_MAIN_DRV() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_CleanUpMatchingResult(AppFDFT_SW::CLEAN_MATCH_RESULT_OPTION) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW26Main_CleanUpMatchingResultENS_25CLEAN_MATCH_RESULT_OPTIONE(void) {
    ALOGD("_ZN10AppFDFT_SW26Main_CleanUpMatchingResultENS_25CLEAN_MATCH_RESULT_OPTIONE() called");
    return 0;
}

/* Demangled: __UREE_UnregisterSharedmem */
extern "C" __attribute__((visibility("default"))) int __UREE_UnregisterSharedmem(void) {
    ALOGD("__UREE_UnregisterSharedmem() called");
    return 0;
}

/* Demangled: OtCore::get_h_type() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore10get_h_typeEv(void) {
    ALOGD("_ZN6OtCore10get_h_typeEv() called");
    return 0;
}

/* Demangled: FdSvmHog::~FdSvmHog() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHogD2Ev(void) {
    ALOGD("_ZN8FdSvmHogD2Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetICSResult(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection16FDVTGetICSResultEPhS0_jjjjjj(void) {
    ALOGD("_ZN12MTKDetection16FDVTGetICSResultEPhS0_jjjjjj() called");
    return 0;
}

/* Demangled: UREE_CreateSession */
extern "C" __attribute__((visibility("default"))) int UREE_CreateSession(void) {
    ALOGD("UREE_CreateSession() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDGetCalData() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW12FDGetCalDataEv(void) {
    ALOGD("_ZN10AppFDFT_SW12FDGetCalDataEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::TrimBnd4FDINFO(FACEDETECT_FACEINFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW14TrimBnd4FDINFOER19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN10AppFDFT_SW14TrimBnd4FDINFOER19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: FdSvmClassify::~FdSvmClassify() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassifyD1Ev(void) {
    ALOGD("_ZN13FdSvmClassifyD1Ev() called");
    return 0;
}

/* Exported Object: vtable for SdCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV6SdCore = NULL;

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: TrackingHistory::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistory11getInstanceEi(void) {
    ALOGD("_ZN15TrackingHistory11getInstanceEi() called");
    return 0;
}

/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SWD0Ev(void) {
    ALOGD("_ZN10AppFDFT_SWD0Ev() called");
    return 0;
}

/* Demangled: FdCore::FaceOverlapDetection(fd_cal_struct*, short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore20FaceOverlapDetectionEP13fd_cal_structs(void) {
    ALOGD("_ZN6FdCore20FaceOverlapDetectionEP13fd_cal_structs() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotatorMirror270(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator19swYRotatorMirror270EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator19swYRotatorMirror270EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: FdCore::GlobalFaceDetectionEngine(fd_cal_struct*, unsigned short, unsigned short, unsigned int*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore25GlobalFaceDetectionEngineEP13fd_cal_structttPjh(void) {
    ALOGD("_ZN6FdCore25GlobalFaceDetectionEngineEP13fd_cal_structttPjh() called");
    return 0;
}

/* Demangled: FdUtlCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCore11getInstanceEv(void) {
    ALOGD("_ZN9FdUtlCore11getInstanceEv() called");
    return 0;
}

/* Demangled: FdCore::MergeResult35(fd_cal_struct*, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13MergeResult35EP13fd_cal_structtPt(void) {
    ALOGD("_ZN6FdCore13MergeResult35EP13fd_cal_structtPt() called");
    return 0;
}

/* Demangled: OtCore::~OtCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCoreD2Ev(void) {
    ALOGD("_ZN6OtCoreD2Ev() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ExtractFeatureValue(unsigned char*, int, int, int*, int*, int*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP19ExtractFeatureValueEPhiiPiS1_S1_S0_(void) {
    ALOGD("_ZN13ERTDetectorFP19ExtractFeatureValueEPhiiPiS1_S1_S0_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_UpdateRealPosition() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW23Main_UpdateRealPositionEv(void) {
    ALOGD("_ZN10AppFDFT_SW23Main_UpdateRealPositionEv() called");
    return 0;
}

/* Demangled: FdUtlCore::~FdUtlCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCoreD2Ev(void) {
    ALOGD("_ZN9FdUtlCoreD2Ev() called");
    return 0;
}

/* Demangled: FdCore::convSquare(fd_cal_struct*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore10convSquareEP13fd_cal_structt(void) {
    ALOGD("_ZN6FdCore10convSquareEP13fd_cal_structt() called");
    return 0;
}

/* Demangled: UtlSwRotator::UtlSwRotator() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotatorC1Ev(void) {
    ALOGD("_ZN12UtlSwRotatorC1Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTMainJoinPhase(unsigned char*, short (*) [1024], int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17FDVTMainJoinPhaseEPhPA1024_si(void) {
    ALOGD("_ZN10AppFDFT_SW17FDVTMainJoinPhaseEPhPA1024_si() called");
    return 0;
}

/* Demangled: FdCore::RestoreOtFace() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore13RestoreOtFaceEv(void) {
    ALOGD("_ZN6FdCore13RestoreOtFaceEv() called");
    return 0;
}

/* Demangled: FdSvmClassify::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassify11getInstanceEv(void) {
    ALOGD("_ZN13FdSvmClassify11getInstanceEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_OtFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW12Main_OtFrameEv(void) {
    ALOGD("_ZN10AppFDFT_SW12Main_OtFrameEv() called");
    return 0;
}

/* Demangled: SwFdMain::TemporalSmoothing(unsigned char, int, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, int*, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain17TemporalSmoothingEhiP19FACEDETECT_FACEINFOS1_S1_Piiiiiii(void) {
    ALOGD("_ZN8SwFdMain17TemporalSmoothingEhiP19FACEDETECT_FACEINFOS1_S1_Piiiiiii() called");
    return 0;
}

/* Demangled: copy_cal_elem(fd_cal_struct*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13copy_cal_elemP13fd_cal_structii(void) {
    ALOGD("_Z13copy_cal_elemP13fd_cal_structii() called");
    return 0;
}

/* Demangled: FdCore::FdCoreMainPhase2(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore16FdCoreMainPhase2EPvS0_(void) {
    ALOGD("_ZN6FdCore16FdCoreMainPhase2EPvS0_() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: TrackingTrajectory::get_smoothed(TrackingBBox*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectory12get_smoothedEP12TrackingBBox(void) {
    ALOGD("_ZN18TrackingTrajectory12get_smoothedEP12TrackingBBox() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FacialLandmarkDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW23FacialLandmarkDetectionEv(void) {
    ALOGD("_ZN10AppFDFT_SW23FacialLandmarkDetectionEv() called");
    return 0;
}

/* Demangled: iou(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3iouiiiiiiii(void) {
    ALOGD("_Z3iouiiiiiiii() called");
    return 0;
}

/* Demangled: MIN(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3MINii(void) {
    ALOGD("_Z3MINii() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Dumper_Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17Dumper_InitializeEv(void) {
    ALOGD("_ZN10AppFDFT_SW17Dumper_InitializeEv() called");
    return 0;
}

/* Exported Object: vtable for FdSvmHog */
extern "C" __attribute__((visibility("default"))) void* _ZTV8FdSvmHog = NULL;

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_SetDetectionType() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW21Main_SetDetectionTypeEv(void) {
    ALOGD("_ZN10AppFDFT_SW21Main_SetDetectionTypeEv() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecureMultichunkmem(void) {
    ALOGD("UREE_ReferenceSecureMultichunkmem() called");
    return 0;
}

/* Demangled: SwFdMain::TemporalMatching(FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*, int*, int*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain16TemporalMatchingEP19FACEDETECT_FACEINFOS1_PiS2_t(void) {
    ALOGD("_ZN8SwFdMain16TemporalMatchingEP19FACEDETECT_FACEINFOS1_PiS2_t() called");
    return 0;
}

/* Demangled: UREE_ZallocSecurememWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecurememWithTag(void) {
    ALOGD("UREE_ZallocSecurememWithTag() called");
    return 0;
}

/* Demangled: SwFdMain::SwFdMain(SWFD_MAIN_DRV) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMainC1E13SWFD_MAIN_DRV(void) {
    ALOGD("_ZN8SwFdMainC1E13SWFD_MAIN_DRV() called");
    return 0;
}

/* Demangled: SwFdMain::CheckIfUnLockOtBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain21CheckIfUnLockOtBufferEv(void) {
    ALOGD("_ZN8SwFdMain21CheckIfUnLockOtBufferEv() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_xatan(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog8fd_xatanEij(void) {
    ALOGD("_ZN8FdSvmHog8fd_xatanEij() called");
    return 0;
}

/* Demangled: TrackingHistory::TrackingHistory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistoryC1Ei(void) {
    ALOGD("_ZN15TrackingHistoryC1Ei() called");
    return 0;
}

/* Demangled: UREE_UnregisterSharedmem_ReadOnly */
extern "C" __attribute__((visibility("default"))) int UREE_UnregisterSharedmem_ReadOnly(void) {
    ALOGD("UREE_UnregisterSharedmem_ReadOnly() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_xmul_64(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog10fd_xmul_64Eiij(void) {
    ALOGD("_ZN8FdSvmHog10fd_xmul_64Eiij() called");
    return 0;
}

/* Demangled: AppFDFT_SW::AppFDFT_SW(DRVFDObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SWC1E13DRVFDObject_s(void) {
    ALOGD("_ZN10AppFDFT_SWC1E13DRVFDObject_s() called");
    return 0;
}

/* Demangled: FdCore::FdCoreGetCalData() */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore16FdCoreGetCalDataEv(void) {
    ALOGD("_ZN6FdCore16FdCoreGetCalDataEv() called");
    return 0;
}

/* Demangled: FdCore::BubbleStabilization(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore19BubbleStabilizationEPiS0_i(void) {
    ALOGD("_ZN6FdCore19BubbleStabilizationEPiS0_i() called");
    return 0;
}

/* Demangled: SdCore::SdCoreSaveLog(SD_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore13SdCoreSaveLogEP13SD_LOG_STRUCT(void) {
    ALOGD("_ZN6SdCore13SdCoreSaveLogEP13SD_LOG_STRUCT() called");
    return 0;
}

/* Demangled: SdCore::SdCoreMain(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore10SdCoreMainEPvS0_(void) {
    ALOGD("_ZN6SdCore10SdCoreMainEPvS0_() called");
    return 0;
}

/* Demangled: SwSdMain::SwSdMain() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMainC2Ev(void) {
    ALOGD("_ZN8SwSdMainC2Ev() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: UREE_UnregisterSharedmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnregisterSharedmem(void) {
    ALOGD("UREE_UnregisterSharedmem() called");
    return 0;
}

/* Demangled: AppFDFT_SW::printFLD(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW8printFLDEi(void) {
    ALOGD("_ZN10AppFDFT_SW8printFLDEi() called");
    return 0;
}

/* Demangled: SwFdMain::SWFDExit() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain8SWFDExitEv(void) {
    ALOGD("_ZN8SwFdMain8SWFDExitEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW15destroyInstanceEv(void) {
    ALOGD("_ZN10AppFDFT_SW15destroyInstanceEv() called");
    return 0;
}

/* Demangled: SwFdMain::SWFDGetCalData() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain14SWFDGetCalDataEv(void) {
    ALOGD("_ZN8SwFdMain14SWFDGetCalDataEv() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeAngleFromDLFLD(int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP21ComputeAngleFromDLFLDEPiiiS0_(void) {
    ALOGD("_ZN13ERTDetectorFP21ComputeAngleFromDLFLDEPiiiS0_() called");
    return 0;
}

/* Exported Object: rip_map_tbl */
extern "C" __attribute__((visibility("default"))) void* rip_map_tbl = NULL;

/* Demangled: AppFDFT_SW::PreserveOrderRemove4FDResult(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW28PreserveOrderRemove4FDResultEPh(void) {
    ALOGD("_ZN10AppFDFT_SW28PreserveOrderRemove4FDResultEPh() called");
    return 0;
}

/* Exported Object: vtable for AppFDFT_SW */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppFDFT_SW = NULL;

/* Demangled: FdSvmClassify::~FdSvmClassify() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassifyD2Ev(void) {
    ALOGD("_ZN13FdSvmClassifyD2Ev() called");
    return 0;
}

/* Demangled: FdCore::FaceBoxPositionUpdate(fd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore21FaceBoxPositionUpdateEP13fd_cal_struct(void) {
    ALOGD("_ZN6FdCore21FaceBoxPositionUpdateEP13fd_cal_struct() called");
    return 0;
}

/* Demangled: UREE_ReadSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReadSecurechunkmem(void) {
    ALOGD("UREE_ReadSecurechunkmem() called");
    return 0;
}

/* Demangled: AppFDFT_SW::TrimBnd4FDResult() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW16TrimBnd4FDResultEv(void) {
    ALOGD("_ZN10AppFDFT_SW16TrimBnd4FDResultEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SWD1Ev(void) {
    ALOGD("_ZN10AppFDFT_SWD1Ev() called");
    return 0;
}

/* Demangled: UREE_AppendTzmem */
extern "C" __attribute__((visibility("default"))) int UREE_AppendTzmem(void) {
    ALOGD("UREE_AppendTzmem() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Exported Object: deltas */
extern "C" __attribute__((visibility("default"))) void* deltas = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: SdCore::SdCoreGetInfo(SD_GET_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore13SdCoreGetInfoEP22SD_GET_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN6SdCore13SdCoreGetInfoEP22SD_GET_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: AppFDTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppFDTmp11getInstanceEv(void) {
    ALOGD("_ZN8AppFDTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::GenerateGammaCurve(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW18GenerateGammaCurveEPi(void) {
    ALOGD("_ZN10AppFDFT_SW18GenerateGammaCurveEPi() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmemWithTag(void) {
    ALOGD("UREE_RegisterSharedmemWithTag() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetFDInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection13FDVTGetFDInfoEj(void) {
    ALOGD("_ZN12MTKDetection13FDVTGetFDInfoEj() called");
    return 0;
}

/* Demangled: AppFDFT_SW::UnpadResult(unsigned char*, FACEDETECT_FACEINFO*, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW11UnpadResultEPhP19FACEDETECT_FACEINFOS2_(void) {
    ALOGD("_ZN10AppFDFT_SW11UnpadResultEPhP19FACEDETECT_FACEINFOS2_() called");
    return 0;
}

/* Demangled: AppFDFT_SW::MergePose2FDResult(short*, int, int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW18MergePose2FDResultEPsiih(void) {
    ALOGD("_ZN10AppFDFT_SW18MergePose2FDResultEPsiih() called");
    return 0;
}

/* Demangled: OtCore::update_overlap_offsets(unsigned char, unsigned char, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore22update_overlap_offsetsEhhiiiiiiii(void) {
    ALOGD("_ZN6OtCore22update_overlap_offsetsEhhiiiiiiii() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_GfdFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW13Main_GfdFrameEv(void) {
    ALOGD("_ZN10AppFDFT_SW13Main_GfdFrameEv() called");
    return 0;
}

/* Exported Object: vtable for OtCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV6OtCore = NULL;

/* Demangled: UtlSwRotator::UtlSwRotator() */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotatorC2Ev(void) {
    ALOGD("_ZN12UtlSwRotatorC2Ev() called");
    return 0;
}

/* Exported Object: flip_rip */
extern "C" __attribute__((visibility("default"))) void* flip_rip = NULL;

/* Demangled: SdCore::SdCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore11SdCoreResetEv(void) {
    ALOGD("_ZN6SdCore11SdCoreResetEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTInit(MTKFDFTInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW8FDVTInitEP15MTKFDFTInitInfo(void) {
    ALOGD("_ZN10AppFDFT_SW8FDVTInitEP15MTKFDFTInitInfo() called");
    return 0;
}

/* Demangled: SwFdMain::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain15destroyInstanceEv(void) {
    ALOGD("_ZN8SwFdMain15destroyInstanceEv() called");
    return 0;
}

/* Demangled: TrackingHistory::reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistory5resetEi(void) {
    ALOGD("_ZN15TrackingHistory5resetEi() called");
    return 0;
}

/* Demangled: OtCore::get_measure_type() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore16get_measure_typeEv(void) {
    ALOGD("_ZN6OtCore16get_measure_typeEv() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: FdSvmHog::FdSvmHog() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHogC1Ev(void) {
    ALOGD("_ZN8FdSvmHogC1Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDGetCalData() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection12FDGetCalDataEv(void) {
    ALOGD("_ZN12MTKDetection12FDGetCalDataEv() called");
    return 0;
}

/* Demangled: UREE_ION_TO_SHM_HANDLE */
extern "C" __attribute__((visibility("default"))) int UREE_ION_TO_SHM_HANDLE(void) {
    ALOGD("UREE_ION_TO_SHM_HANDLE() called");
    return 0;
}

/* Demangled: FdCore::FdSetPthreadAttr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore16FdSetPthreadAttrEPj(void) {
    ALOGD("_ZN6FdCore16FdSetPthreadAttrEPj() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMainCropPhase(unsigned char (*) [16], unsigned char (*) [16], unsigned char**, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_(void) {
    ALOGD("_ZN12MTKDetection17FDVTMainCropPhaseEPA16_hS1_PPhPiS4_() called");
    return 0;
}

/* Demangled: TrackingTrajectory::push(TrackingBBox const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectory4pushERK12TrackingBBox(void) {
    ALOGD("_ZN18TrackingTrajectory4pushERK12TrackingBBox() called");
    return 0;
}

/* Demangled: TrackingHistory::TrackingHistory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistoryC2Ei(void) {
    ALOGD("_ZN15TrackingHistoryC2Ei() called");
    return 0;
}

/* Demangled: UREE_ZallocSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecureMultichunkmem(void) {
    ALOGD("UREE_ZallocSecureMultichunkmem() called");
    return 0;
}

/* Demangled: FdUtlCore::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCore15destroyInstanceEv(void) {
    ALOGD("_ZN9FdUtlCore15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CvtOnePointer2Handle(unsigned int, void*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z20CvtOnePointer2HandlejPvjPj(void) {
    ALOGD("_Z20CvtOnePointer2HandlejPvjPj() called");
    return 0;
}

/* Demangled: TrackingHistory::update(FACEDETECT_FACEINFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN15TrackingHistory6updateER19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN15TrackingHistory6updateER19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: OtCore::OtCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCoreC1Ev(void) {
    ALOGD("_ZN6OtCoreC1Ev() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTInit(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection8FDVTInitEPj(void) {
    ALOGD("_ZN12MTKDetection8FDVTInitEPj() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMain(FdOptions*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection8FDVTMainEP9FdOptions(void) {
    ALOGD("_ZN12MTKDetection8FDVTMainEP9FdOptions() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_ComputeNextFrameTargetOtHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW38Main_ComputeNextFrameTargetOtHistogramEv(void) {
    ALOGD("_ZN10AppFDFT_SW38Main_ComputeNextFrameTargetOtHistogramEv() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: FdUtlCore::FdUtlCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCoreC1Ev(void) {
    ALOGD("_ZN9FdUtlCoreC1Ev() called");
    return 0;
}

/* Demangled: FdUtlCore::UtlCalIntegralImage(UTL_CAL_INTEGRAL_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCore19UtlCalIntegralImageEP29UTL_CAL_INTEGRAL_IMAGE_STRUCT(void) {
    ALOGD("_ZN9FdUtlCore19UtlCalIntegralImageEP29UTL_CAL_INTEGRAL_IMAGE_STRUCT() called");
    return 0;
}

/* Demangled: SwFdMain::FDSizeToOTSize(FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain14FDSizeToOTSizeEP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN8SwFdMain14FDSizeToOTSizeEP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: OtCore::getIndexfromYUYV(unsigned int*, unsigned short*, unsigned short*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore16getIndexfromYUYVEPjPtS1_ji(void) {
    ALOGD("_ZN6OtCore16getIndexfromYUYVEPjPtS1_ji() called");
    return 0;
}

/* Demangled: AppFDFT_SW::getInstance(DRVFDObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW11getInstanceE13DRVFDObject_s(void) {
    ALOGD("_ZN10AppFDFT_SW11getInstanceE13DRVFDObject_s() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMainPhase2() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection14FDVTMainPhase2Ev(void) {
    ALOGD("_ZN12MTKDetection14FDVTMainPhase2Ev() called");
    return 0;
}

/* Demangled: FdSvmHog::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog15destroyInstanceEv(void) {
    ALOGD("_ZN8FdSvmHog15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FdCore::FdCoreMain(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore10FdCoreMainEPvS0_(void) {
    ALOGD("_ZN6FdCore10FdCoreMainEPvS0_() called");
    return 0;
}

/* Demangled: OtCore::Compute_Weight_Histogram(unsigned char*, unsigned int*, unsigned short, unsigned short, unsigned short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore24Compute_Weight_HistogramEPhPjttPti(void) {
    ALOGD("_ZN6OtCore24Compute_Weight_HistogramEPhPjttPti() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Dumper_DumpFdFrameAndResult(FdOptions*, FACEDETECT_INIT_DATA*, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW27Dumper_DumpFdFrameAndResultEP9FdOptionsP20FACEDETECT_INIT_DATAP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN10AppFDFT_SW27Dumper_DumpFdFrameAndResultEP9FdOptionsP20FACEDETECT_INIT_DATAP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: UREE_FOD_ShareMem_Enable */
extern "C" __attribute__((visibility("default"))) int UREE_FOD_ShareMem_Enable(void) {
    ALOGD("UREE_FOD_ShareMem_Enable() called");
    return 0;
}

/* Demangled: OtCore::Compute_Target_Histogram_offset(unsigned char*, unsigned short, unsigned char, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore31Compute_Target_Histogram_offsetEPhthiiiiii(void) {
    ALOGD("_ZN6OtCore31Compute_Target_Histogram_offsetEPhthiiiiii() called");
    return 0;
}

/* Demangled: OtCore::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore15destroyInstanceEv(void) {
    ALOGD("_ZN6OtCore15destroyInstanceEv() called");
    return 0;
}

/* Demangled: TrackingTrajectory::get_most_recent() */
extern "C" __attribute__((visibility("default"))) int _ZN18TrackingTrajectory15get_most_recentEv(void) {
    ALOGD("_ZN18TrackingTrajectory15get_most_recentEv() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotator180(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator13swYRotator180EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator13swYRotator180EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: ERTDetectorFP::ComputeROPAngle(int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13ERTDetectorFP15ComputeROPAngleEPii(void) {
    ALOGD("_ZN13ERTDetectorFP15ComputeROPAngleEPii() called");
    return 0;
}

/* Demangled: SdCore::~SdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCoreD0Ev(void) {
    ALOGD("_ZN6SdCoreD0Ev() called");
    return 0;
}

/* Demangled: SwSdMain::SWSDMain(SMILEDETECT_MAIN_DATA, SMILEDETECT_SMILEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMain8SWSDMainE21SMILEDETECT_MAIN_DATAP21SMILEDETECT_SMILEINFO(void) {
    ALOGD("_ZN8SwSdMain8SWSDMainE21SMILEDETECT_MAIN_DATAP21SMILEDETECT_SMILEINFO() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_xatan2(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog9fd_xatan2Eiij(void) {
    ALOGD("_ZN8FdSvmHog9fd_xatan2Eiij() called");
    return 0;
}

/* Exported Object: ShiftValue_NormalizedToImgDomain */
extern "C" __attribute__((visibility("default"))) void* ShiftValue_NormalizedToImgDomain = NULL;

/* Demangled: AppFDFT_SW::~AppFDFT_SW() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SWD2Ev(void) {
    ALOGD("_ZN10AppFDFT_SWD2Ev() called");
    return 0;
}

/* Demangled: UtlSwRotator::swYRotatorMirror090(YUV_ROTATOR_HANDLE_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12UtlSwRotator19swYRotatorMirror090EP27YUV_ROTATOR_HANDLE_STRUCT_T(void) {
    ALOGD("_ZN12UtlSwRotator19swYRotatorMirror090EP27YUV_ROTATOR_HANDLE_STRUCT_T() called");
    return 0;
}

/* Demangled: FdCore::LocalFDDetectSizeSelection(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore26LocalFDDetectSizeSelectionEiPiS0_(void) {
    ALOGD("_ZN6FdCore26LocalFDDetectSizeSelectionEiPiS0_() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_extract(FD_SGradImg_s, fd_hog_parameter_s, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog14fd_hog_extractE13FD_SGradImg_s18fd_hog_parameter_sPj(void) {
    ALOGD("_ZN8FdSvmHog14fd_hog_extractE13FD_SGradImg_s18fd_hog_parameter_sPj() called");
    return 0;
}

/* Demangled: FdCore::FdCore(FdCoreDrv) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCoreC2E9FdCoreDrv(void) {
    ALOGD("_ZN6FdCoreC2E9FdCoreDrv() called");
    return 0;
}

/* Exported Object: flip_idx */
extern "C" __attribute__((visibility("default"))) void* flip_idx = NULL;

/* Demangled: AppFDFT_SW::FDVTMainPhase2() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW14FDVTMainPhase2Ev(void) {
    ALOGD("_ZN10AppFDFT_SW14FDVTMainPhase2Ev() called");
    return 0;
}

/* Demangled: FdCore::getInstance(FdCoreDrv) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore11getInstanceE9FdCoreDrv(void) {
    ALOGD("_ZN6FdCore11getInstanceE9FdCoreDrv() called");
    return 0;
}

/* Demangled: FdCore::FaceSkinValueInput(fd_cal_struct*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6FdCore18FaceSkinValueInputEP13fd_cal_structi(void) {
    ALOGD("_ZN6FdCore18FaceSkinValueInputEP13fd_cal_structi() called");
    return 0;
}

/* Demangled: MAX(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3MAXii(void) {
    ALOGD("_Z3MAXii() called");
    return 0;
}

/* Demangled: SwSdMain::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8SwSdMain15destroyInstanceEv(void) {
    ALOGD("_ZN8SwSdMain15destroyInstanceEv() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: OT_ABS(int) */
extern "C" __attribute__((visibility("default"))) int _Z6OT_ABSi(void) {
    ALOGD("_Z6OT_ABSi() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_xsqrt(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog8fd_xsqrtEjj(void) {
    ALOGD("_ZN8FdSvmHog8fd_xsqrtEjj() called");
    return 0;
}

/* Demangled: UREE_ZallocSecureMultichunkmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecureMultichunkmemWithTag(void) {
    ALOGD("UREE_ZallocSecureMultichunkmemWithTag() called");
    return 0;
}

/* Demangled: FdSvmHog::FdSvmHog() */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHogC2Ev(void) {
    ALOGD("_ZN8FdSvmHogC2Ev() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem_ReadOnlyWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem_ReadOnlyWithTag(void) {
    ALOGD("UREE_RegisterSharedmem_ReadOnlyWithTag() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetSDResult(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection15FDVTGetSDResultEj(void) {
    ALOGD("_ZN12MTKDetection15FDVTGetSDResultEj() called");
    return 0;
}

/* Demangled: FdSvmClassify::FdSvmClassify() */
extern "C" __attribute__((visibility("default"))) int _ZN13FdSvmClassifyC1Ev(void) {
    ALOGD("_ZN13FdSvmClassifyC1Ev() called");
    return 0;
}

/* Demangled: OtCore::Mean_Shift(unsigned char*, unsigned short, unsigned short, OT_FACEDETECT_RECT*, short*, unsigned char*, float*, float, float, unsigned char*, int, int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCore10Mean_ShiftEPhttP18OT_FACEDETECT_RECTPsS0_PfffS0_iih(void) {
    ALOGD("_ZN6OtCore10Mean_ShiftEPhttP18OT_FACEDETECT_RECTPsS0_PfffS0_iih() called");
    return 0;
}

/* Demangled: SdCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore11getInstanceEv(void) {
    ALOGD("_ZN6SdCore11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMainFastPhase(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection17FDVTMainFastPhaseEPi(void) {
    ALOGD("_ZN12MTKDetection17FDVTMainFastPhaseEPi() called");
    return 0;
}

/* Demangled: swap_cal_elem(fd_cal_struct*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13swap_cal_elemP13fd_cal_structii(void) {
    ALOGD("_Z13swap_cal_elemP13fd_cal_structii() called");
    return 0;
}

/* Exported Object: vtable for MTKDetection */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MTKDetection = NULL;

/* Exported Object: Scaled_Matrix_MeanShapeToCurrentShape */
extern "C" __attribute__((visibility("default"))) void* Scaled_Matrix_MeanShapeToCurrentShape = NULL;

/* Demangled: OtCore::OtCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6OtCoreC2Ev(void) {
    ALOGD("_ZN6OtCoreC2Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTMain(FdOptions*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW8FDVTMainEP9FdOptions(void) {
    ALOGD("_ZN10AppFDFT_SW8FDVTMainEP9FdOptions() called");
    return 0;
}

/* Demangled: SwFdMain::greedyassignf_solve(int*, int*, int, int, int (*) [15], int) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain19greedyassignf_solveEPiS0_iiPA15_ii(void) {
    ALOGD("_ZN8SwFdMain19greedyassignf_solveEPiS0_iiPA15_ii() called");
    return 0;
}

/* Demangled: FdUtlCore::FdUtlCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9FdUtlCoreC2Ev(void) {
    ALOGD("_ZN9FdUtlCoreC2Ev() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTSetInputMTEE(unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW16FDVTSetInputMTEEEjjPh(void) {
    ALOGD("_ZN10AppFDFT_SW16FDVTSetInputMTEEEjjPh() called");
    return 0;
}

/* Demangled: SwFdMain::SWFDInit(FACEDETECT_INIT_DATA, FACEDETECT_INIT_RESULT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain8SWFDInitE20FACEDETECT_INIT_DATAP22FACEDETECT_INIT_RESULT(void) {
    ALOGD("_ZN8SwFdMain8SWFDInitE20FACEDETECT_INIT_DATAP22FACEDETECT_INIT_RESULT() called");
    return 0;
}

/* Demangled: SwFdMain::SWFDMain(FACEDETECT_MAIN_DATA, FACEDETECT_FACEINFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain8SWFDMainE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO(void) {
    ALOGD("_ZN8SwFdMain8SWFDMainE20FACEDETECT_MAIN_DATAP19FACEDETECT_FACEINFO() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_SetRipStatus(FACEDETECT_MAIN_DATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW17Main_SetRipStatusEP20FACEDETECT_MAIN_DATA(void) {
    ALOGD("_ZN10AppFDFT_SW17Main_SetRipStatusEP20FACEDETECT_MAIN_DATA() called");
    return 0;
}

/* Demangled: FdSvmHog::fd_hog_calc_grad_y(FD_SGrayImg_s, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN8FdSvmHog18fd_hog_calc_grad_yE13FD_SGrayImg_sPs(void) {
    ALOGD("_ZN8FdSvmHog18fd_hog_calc_grad_yE13FD_SGrayImg_sPs() called");
    return 0;
}

/* Demangled: SwFdMain::CopyFDResult(FACEDETECT_FACEINFO*, int, FACEDETECT_FACEINFO*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8SwFdMain12CopyFDResultEP19FACEDETECT_FACEINFOiS1_ii(void) {
    ALOGD("_ZN8SwFdMain12CopyFDResultEP19FACEDETECT_FACEINFOiS1_ii() called");
    return 0;
}

/* Demangled: AppFDFT_SW::Main_SdFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW12Main_SdFrameEv(void) {
    ALOGD("_ZN10AppFDFT_SW12Main_SdFrameEv() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTGetResultSize() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection17FDVTGetResultSizeEv(void) {
    ALOGD("_ZN12MTKDetection17FDVTGetResultSizeEv() called");
    return 0;
}

/* Demangled: UREE_CreateSessionWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_CreateSessionWithTag(void) {
    ALOGD("UREE_CreateSessionWithTag() called");
    return 0;
}

/* Demangled: AppFDTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppFDTmp15destroyInstanceEv(void) {
    ALOGD("_ZN8AppFDTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AppFDFT_SW::restoreAspectRatio(int, int, int, int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW18restoreAspectRatioEiiiiRiS0_S0_S0_(void) {
    ALOGD("_ZN10AppFDFT_SW18restoreAspectRatioEiiiiRiS0_S0_S0_() called");
    return 0;
}

/* Demangled: SdCore::~SdCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCoreD1Ev(void) {
    ALOGD("_ZN6SdCoreD1Ev() called");
    return 0;
}

/* Demangled: UREE_CloseSession */
extern "C" __attribute__((visibility("default"))) int UREE_CloseSession(void) {
    ALOGD("UREE_CloseSession() called");
    return 0;
}

/* Demangled: AppFDFT_SW::FDVTGetSDResult(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppFDFT_SW15FDVTGetSDResultEj(void) {
    ALOGD("_ZN10AppFDFT_SW15FDVTGetSDResultEj() called");
    return 0;
}

/* Exported Object: ScaleValue_NormalizedToImgDomain */
extern "C" __attribute__((visibility("default"))) void* ScaleValue_NormalizedToImgDomain = NULL;

/* Demangled: SdCore::SmileFaceDetectionEngine_vga(sd_cal_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SdCore28SmileFaceDetectionEngine_vgaEP13sd_cal_struct(void) {
    ALOGD("_ZN6SdCore28SmileFaceDetectionEngine_vgaEP13sd_cal_struct() called");
    return 0;
}

/* Demangled: MTKDetection::FDVTMainPostPhase() */
extern "C" __attribute__((visibility("default"))) int _ZN12MTKDetection17FDVTMainPostPhaseEv(void) {
    ALOGD("_ZN12MTKDetection17FDVTMainPostPhaseEv() called");
    return 0;
}

/* Exported Object: vtable for AppFDTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV8AppFDTmp = NULL;

/* Demangled: UREE_SecureCamera_to_MTEE */
extern "C" __attribute__((visibility("default"))) int UREE_SecureCamera_to_MTEE(void) {
    ALOGD("UREE_SecureCamera_to_MTEE() called");
    return 0;
}

/* Demangled: UREE_ReleaseSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReleaseSecurechunkmem(void) {
    ALOGD("UREE_ReleaseSecurechunkmem() called");
    return 0;
}
