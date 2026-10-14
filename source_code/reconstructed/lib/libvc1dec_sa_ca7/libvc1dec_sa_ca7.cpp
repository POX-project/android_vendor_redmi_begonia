/*
 * Reverse-Engineered Source for: libvc1dec_sa.ca7.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvc1dec_sa_ca7"

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
#include "libvc1dec_sa_ca7.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Parse_B_MBs */
extern "C" __attribute__((visibility("default"))) int Parse_B_MBs(void) {
    ALOGD("Parse_B_MBs() called");
    return 0;
}

/* Demangled: ParseIMB_WMV3 */
extern "C" __attribute__((visibility("default"))) int ParseIMB_WMV3(void) {
    ALOGD("ParseIMB_WMV3() called");
    return 0;
}

/* Exported Object: dec_WMVA_HufPCBPCYTable_HighRate */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_HighRate = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_1 = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_2 = NULL;

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRun_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRun_HghMt = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_3 = NULL;

/* Exported Object: tab_m_HufMVTable_Progressive_MV1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Progressive_MV1 = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_4 = NULL;

/* Demangled: g_PixelMean */
extern "C" __attribute__((visibility("default"))) int g_PixelMean(void) {
    ALOGD("g_PixelMean() called");
    return 0;
}

/* Demangled: MotionCompFrameInterlaceV2MV */
extern "C" __attribute__((visibility("default"))) int MotionCompFrameInterlaceV2MV(void) {
    ALOGD("MotionCompFrameInterlaceV2MV() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndx_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndx_MMIDRATE = NULL;

/* Exported Object: tab_m_HufMVTable_Progressive_MV2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Progressive_MV2 = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_5 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_5 = NULL;

/* Demangled: ComputeField4MVFromDiffMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ComputeField4MVFromDiffMVInterlaceV2(void) {
    ALOGD("ComputeField4MVFromDiffMVInterlaceV2() called");
    return 0;
}

/* Exported Object: tab_m_HufMVTable_Progressive_MV3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Progressive_MV3 = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_6 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_6 = NULL;

/* Exported Object: tab_m_HufMVTable_Progressive_MV4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Progressive_MV4 = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_7 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_7 = NULL;

/* Demangled: BS_BitsLeft */
extern "C" __attribute__((visibility("default"))) int BS_BitsLeft(void) {
    ALOGD("BS_BitsLeft() called");
    return 0;
}

/* Exported Object: grgiZigzagInvRotated_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInvRotated_NEW = NULL;

/* Exported Object: tt_m_hufCBPCYDec_Interlace_8 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufCBPCYDec_Interlace_8 = NULL;

/* Demangled: ParseIMB_WMVA */
extern "C" __attribute__((visibility("default"))) int ParseIMB_WMVA(void) {
    ALOGD("ParseIMB_WMVA() called");
    return 0;
}

/* Demangled: ComputeFrameMVFromDiffMVInterlaceV2B */
extern "C" __attribute__((visibility("default"))) int ComputeFrameMVFromDiffMVInterlaceV2B(void) {
    ALOGD("ComputeFrameMVFromDiffMVInterlaceV2B() called");
    return 0;
}

/* Demangled: AdjustDecreaseRange */
extern "C" __attribute__((visibility("default"))) int AdjustDecreaseRange(void) {
    ALOGD("AdjustDecreaseRange() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV1 = NULL;

/* Demangled: g_IDCTDec8x8_16bit_Add128 */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_16bit_Add128(void) {
    ALOGD("g_IDCTDec8x8_16bit_Add128() called");
    return 0;
}

/* Demangled: PredictFieldModeMVEx */
extern "C" __attribute__((visibility("default"))) int PredictFieldModeMVEx(void) {
    ALOGD("PredictFieldModeMVEx() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV2 = NULL;

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV3 = NULL;

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV4 = NULL;

/* Demangled: init_get_bits */
extern "C" __attribute__((visibility("default"))) int init_get_bits(void) {
    ALOGD("init_get_bits() called");
    return 0;
}

/* Exported Object: gacCodeLengthsDCLowRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsDCLowRate = NULL;

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV5 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV5 = NULL;

/* Demangled: PullBackInterlaceFrameMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackInterlaceFrameMotionVector(void) {
    ALOGD("PullBackInterlaceFrameMotionVector() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV6 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV6 = NULL;

/* Demangled: g_AddError8x8_C */
extern "C" __attribute__((visibility("default"))) int g_AddError8x8_C(void) {
    ALOGD("g_AddError8x8_C() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV7 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV7 = NULL;

/* Demangled: ParsePMB_4MV_iField */
extern "C" __attribute__((visibility("default"))) int ParsePMB_4MV_iField(void) {
    ALOGD("ParsePMB_4MV_iField() called");
    return 0;
}

/* Demangled: ParsePMB_1MV_iField */
extern "C" __attribute__((visibility("default"))) int ParsePMB_1MV_iField(void) {
    ALOGD("ParsePMB_1MV_iField() called");
    return 0;
}

/* Exported Object: tt_WMVA_HufICBPCYTable */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufICBPCYTable = NULL;

/* Exported Object: tt_m_hufFieldPictureMBModeMixedMV8 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBModeMixedMV8 = NULL;

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_ldiv0(void) __asm__("__aeabi_ldiv0");
int fn___aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevel_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevel_HghMt = NULL;

/* Demangled: X9SkipbitDecode2_leshi */
extern "C" __attribute__((visibility("default"))) int X9SkipbitDecode2_leshi(void) {
    ALOGD("X9SkipbitDecode2_leshi() called");
    return 0;
}

/* Demangled: ParsePMB_1MV */
extern "C" __attribute__((visibility("default"))) int ParsePMB_1MV(void) {
    ALOGD("ParsePMB_1MV() called");
    return 0;
}

/* Demangled: BS_setInvalid */
extern "C" __attribute__((visibility("default"))) int BS_setInvalid(void) {
    ALOGD("BS_setInvalid() called");
    return 0;
}

/* Demangled: ParseFrame_Stop */
extern "C" __attribute__((visibility("default"))) int ParseFrame_Stop(void) {
    ALOGD("ParseFrame_Stop() called");
    return 0;
}

/* Demangled: GenerateColFilterMBFlag */
extern "C" __attribute__((visibility("default"))) int GenerateColFilterMBFlag(void) {
    ALOGD("GenerateColFilterMBFlag() called");
    return 0;
}

/* Demangled: g_IDCTDec4x8_DC_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x8_DC_AddError(void) {
    ALOGD("g_IDCTDec4x8_DC_AddError() called");
    return 0;
}

/* Exported Object: LOOPFILTERFLAGS16_WMV9 */
extern "C" __attribute__((visibility("default"))) void* LOOPFILTERFLAGS16_WMV9 = NULL;

/* Demangled: g_InterpolateBlockRow */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockRow(void) {
    ALOGD("g_InterpolateBlockRow() called");
    return 0;
}

/* Exported Object: gaSubsampleBicubic */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBicubic = NULL;

/* Demangled: MotionCompP_iFrame */
extern "C" __attribute__((visibility("default"))) int MotionCompP_iFrame(void) {
    ALOGD("MotionCompP_iFrame() called");
    return 0;
}

/* Demangled: SliceStartCode */
extern "C" __attribute__((visibility("default"))) int SliceStartCode(void) {
    ALOGD("SliceStartCode() called");
    return 0;
}

/* Exported Object: ff_vc1_subblkpat_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_subblkpat_vlc = NULL;

/* Exported Object: dec_WMVA_HufICBPCYTable */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufICBPCYTable = NULL;

/* Exported Object: sm_rgIfLastNumOfLevelAtRunIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRunIntraY_Talking = NULL;

/* Exported Object: WCPSP_VIDEO_W15.50_libvc1mt_asm.a */
extern "C" __attribute__((visibility("default"))) void* obj_WCPSP_VIDEO_W15_50_libvc1mt_asm_a __asm__("WCPSP_VIDEO_W15.50_libvc1mt_asm.a") = NULL;

/* Demangled: decodeDQuantParam */
extern "C" __attribute__((visibility("default"))) int decodeDQuantParam(void) {
    ALOGD("decodeDQuantParam() called");
    return 0;
}

/* Demangled: PredictFieldBotMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldBotMVInterlaceV2(void) {
    ALOGD("PredictFieldBotMVInterlaceV2() called");
    return 0;
}

/* Demangled: EightPixel_Filter_Hor_NoBreak */
extern "C" __attribute__((visibility("default"))) int EightPixel_Filter_Hor_NoBreak(void) {
    ALOGD("EightPixel_Filter_Hor_NoBreak() called");
    return 0;
}

/* Demangled: wmvDEBUG_PrintRectangle8 */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_PrintRectangle8(void) {
    ALOGD("wmvDEBUG_PrintRectangle8() called");
    return 0;
}

/* Demangled: HuffmanTableInit_WMV9 */
extern "C" __attribute__((visibility("default"))) int HuffmanTableInit_WMV9(void) {
    ALOGD("HuffmanTableInit_WMV9() called");
    return 0;
}

/* Demangled: decodeDCTPredictionY */
extern "C" __attribute__((visibility("default"))) int decodeDCTPredictionY(void) {
    ALOGD("decodeDCTPredictionY() called");
    return 0;
}

/* Demangled: PredictHybridMV */
extern "C" __attribute__((visibility("default"))) int PredictHybridMV(void) {
    ALOGD("PredictHybridMV() called");
    return 0;
}

/* Demangled: AverageFieldMv */
extern "C" __attribute__((visibility("default"))) int AverageFieldMv(void) {
    ALOGD("AverageFieldMv() called");
    return 0;
}

/* Demangled: vc1dec_mt_destroy */
extern "C" __attribute__((visibility("default"))) int vc1dec_mt_destroy(void) {
    ALOGD("vc1dec_mt_destroy() called");
    return 0;
}

/* Demangled: medianof4 */
extern "C" __attribute__((visibility("default"))) int medianof4(void) {
    ALOGD("medianof4() called");
    return 0;
}

/* Demangled: VC1DecoderSetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderSetParameterAdapt(void) {
    ALOGD("VC1DecoderSetParameterAdapt() called");
    return 0;
}

/* Demangled: decodeMV_V9_new */
extern "C" __attribute__((visibility("default"))) int decodeMV_V9_new(void) {
    ALOGD("decodeMV_V9_new() called");
    return 0;
}

/* Demangled: decodeIntraDCInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeIntraDCInterlaceV2(void) {
    ALOGD("decodeIntraDCInterlaceV2() called");
    return 0;
}

/* Demangled: g_8x4IDCT_DCOnly */
extern "C" __attribute__((visibility("default"))) int g_8x4IDCT_DCOnly(void) {
    ALOGD("g_8x4IDCT_DCOnly() called");
    return 0;
}

/* Demangled: BottomField_Start */
extern "C" __attribute__((visibility("default"))) int BottomField_Start(void) {
    ALOGD("BottomField_Start() called");
    return 0;
}

/* Demangled: decodeMV_V9 */
extern "C" __attribute__((visibility("default"))) int decodeMV_V9(void) {
    ALOGD("decodeMV_V9() called");
    return 0;
}

/* Demangled: __aeabi_idiv */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_idiv(void) __asm__("__aeabi_idiv");
int fn___aeabi_idiv(void) {
    ALOGD("__aeabi_idiv() called");
    return 0;
}

/* Demangled: FilterRow_Double16_C */
extern "C" __attribute__((visibility("default"))) int FilterRow_Double16_C(void) {
    ALOGD("FilterRow_Double16_C() called");
    return 0;
}

/* Demangled: InterpolateBlock */
extern "C" __attribute__((visibility("default"))) int InterpolateBlock(void) {
    ALOGD("InterpolateBlock() called");
    return 0;
}

/* Demangled: g_intensityCompensationScaleNotZero_asm */
extern "C" __attribute__((visibility("default"))) int g_intensityCompensationScaleNotZero_asm(void) {
    ALOGD("g_intensityCompensationScaleNotZero_asm() called");
    return 0;
}

/* Demangled: g_IDCTDec8x8_8bit_v1plus_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_8bit_v1plus_asm(void) {
    ALOGD("g_IDCTDec8x8_8bit_v1plus_asm() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfRunAtLevelIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevelIntraY_HghRate = NULL;

/* Demangled: g_IDCTDec8x8_DC_16bit_Add128 */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_DC_16bit_Add128(void) {
    ALOGD("g_IDCTDec8x8_DC_16bit_Add128() called");
    return 0;
}

/* Demangled: DecodeMBHead_IVOP */
extern "C" __attribute__((visibility("default"))) int DecodeMBHead_IVOP(void) {
    ALOGD("DecodeMBHead_IVOP() called");
    return 0;
}

/* Exported Object: grgi8x4ZigzagInvRotated_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInvRotated_Interlace = NULL;

/* Demangled: ScaleFarPredBackward */
extern "C" __attribute__((visibility("default"))) int ScaleFarPredBackward(void) {
    ALOGD("ScaleFarPredBackward() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndxOfIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndxOfIntraY_Talking = NULL;

/* Demangled: SWVC1QueryAsyncTolerance */
extern "C" __attribute__((visibility("default"))) int SWVC1QueryAsyncTolerance(void) {
    ALOGD("SWVC1QueryAsyncTolerance() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufPCBPCYTable */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable = NULL;

/* Demangled: g_IDCTDec8x8_DC_16bit_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_DC_16bit_asm(void) {
    ALOGD("g_IDCTDec8x8_DC_16bit_asm() called");
    return 0;
}

/* Demangled: AdjustDecRangeWMVA */
extern "C" __attribute__((visibility("default"))) int AdjustDecRangeWMVA(void) {
    ALOGD("AdjustDecRangeWMVA() called");
    return 0;
}

/* Exported Object: print_cnt */
extern "C" __attribute__((visibility("default"))) void* print_cnt = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_HighRate */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_HighRate = NULL;

/* Demangled: g_IDCTDec4x4_v1plus_WMV3_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x4_v1plus_WMV3_asm(void) {
    ALOGD("g_IDCTDec4x4_v1plus_WMV3_asm() called");
    return 0;
}

/* Demangled: decodePMBOverheadInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodePMBOverheadInterlaceV2(void) {
    ALOGD("decodePMBOverheadInterlaceV2() called");
    return 0;
}

/* Demangled: t_AltTablesDecoderConstruct */
extern "C" __attribute__((visibility("default"))) int t_AltTablesDecoderConstruct(void) {
    ALOGD("t_AltTablesDecoderConstruct() called");
    return 0;
}

/* Demangled: g_IDCTDec8x8_16bit_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_16bit_AddError(void) {
    ALOGD("g_IDCTDec8x8_16bit_AddError() called");
    return 0;
}

/* Demangled: PullbackFieldModeChromaMV */
extern "C" __attribute__((visibility("default"))) int PullbackFieldModeChromaMV(void) {
    ALOGD("PullbackFieldModeChromaMV() called");
    return 0;
}

/* Demangled: wmvDEBUG_FilePrintMBtype */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_FilePrintMBtype(void) {
    ALOGD("wmvDEBUG_FilePrintMBtype() called");
    return 0;
}

/* Exported Object: sm_rgLevelAtIndxOfIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndxOfIntraY_HghMt = NULL;

/* Exported Object: ff_vc1_ac_coeff_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table = NULL;

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRun_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRun_HghRate = NULL;

/* Demangled: g_InterpolateBlockBicubic_hori_asm */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockBicubic_hori_asm(void) {
    ALOGD("g_InterpolateBlockBicubic_hori_asm() called");
    return 0;
}

/* Exported Object: MIDDLEFLAGS */
extern "C" __attribute__((visibility("default"))) void* MIDDLEFLAGS = NULL;

/* Exported Object: ff_vc1_ac_coeff_table_index_6_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_6_table = NULL;

/* Demangled: SwitchSequence */
extern "C" __attribute__((visibility("default"))) int SwitchSequence(void) {
    ALOGD("SwitchSequence() called");
    return 0;
}

/* Demangled: vc1dec_st_frame */
extern "C" __attribute__((visibility("default"))) int vc1dec_st_frame(void) {
    ALOGD("vc1dec_st_frame() called");
    return 0;
}

/* Demangled: initFrameAreaDependentMemory */
extern "C" __attribute__((visibility("default"))) int initFrameAreaDependentMemory(void) {
    ALOGD("initFrameAreaDependentMemory() called");
    return 0;
}

/* Exported Object: LEFTFLAGS */
extern "C" __attribute__((visibility("default"))) void* LEFTFLAGS = NULL;

/* Demangled: decodeIMBOverheadInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeIMBOverheadInterlaceV2(void) {
    ALOGD("decodeIMBOverheadInterlaceV2() called");
    return 0;
}

/* Demangled: Dec_P_MBs */
extern "C" __attribute__((visibility("default"))) int Dec_P_MBs(void) {
    ALOGD("Dec_P_MBs() called");
    return 0;
}

/* Demangled: ComputeMVFromDiffMVFieldPicture */
extern "C" __attribute__((visibility("default"))) int ComputeMVFromDiffMVFieldPicture(void) {
    ALOGD("ComputeMVFromDiffMVFieldPicture() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndx_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndx_Talking = NULL;

/* Demangled: DecodePMBModeInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int DecodePMBModeInterlaceV2(void) {
    ALOGD("DecodePMBModeInterlaceV2() called");
    return 0;
}

/* Demangled: decodeBMBOverheadInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeBMBOverheadInterlaceV2(void) {
    ALOGD("decodeBMBOverheadInterlaceV2() called");
    return 0;
}

/* Demangled: Parse_Block8x4 */
extern "C" __attribute__((visibility("default"))) int Parse_Block8x4(void) {
    ALOGD("Parse_Block8x4() called");
    return 0;
}

/* Demangled: g_FilterVerticalEdgeV9 */
extern "C" __attribute__((visibility("default"))) int g_FilterVerticalEdgeV9(void) {
    ALOGD("g_FilterVerticalEdgeV9() called");
    return 0;
}

/* Exported Object: tt_WMVA_HufPCBPCYTable */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable = NULL;

/* Demangled: Parse_Block8x8 */
extern "C" __attribute__((visibility("default"))) int Parse_Block8x8(void) {
    ALOGD("Parse_Block8x8() called");
    return 0;
}

/* Demangled: ScaleLeftPredForDQuant */
extern "C" __attribute__((visibility("default"))) int ScaleLeftPredForDQuant(void) {
    ALOGD("ScaleLeftPredForDQuant() called");
    return 0;
}

/* Exported Object: ff_vc1_ttmb_vlc_index_2_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttmb_vlc_index_2_table = NULL;

/* Demangled: MotionCompFrameInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int MotionCompFrameInterlaceV2(void) {
    ALOGD("MotionCompFrameInterlaceV2() called");
    return 0;
}

/* Demangled: VC1SwDecNextPicture */
extern "C" __attribute__((visibility("default"))) int VC1SwDecNextPicture(void) {
    ALOGD("VC1SwDecNextPicture() called");
    return 0;
}

/* Exported Object: grgi8x4ZigzagInv_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInv_Interlace = NULL;

/* Demangled: decodeVOPHeadFieldPicture */
extern "C" __attribute__((visibility("default"))) int decodeVOPHeadFieldPicture(void) {
    ALOGD("decodeVOPHeadFieldPicture() called");
    return 0;
}

/* Demangled: ScaleNearPred */
extern "C" __attribute__((visibility("default"))) int ScaleNearPred(void) {
    ALOGD("ScaleNearPred() called");
    return 0;
}

/* Demangled: SWVC1QuerySpeedyModeOffset */
extern "C" __attribute__((visibility("default"))) int SWVC1QuerySpeedyModeOffset(void) {
    ALOGD("SWVC1QuerySpeedyModeOffset() called");
    return 0;
}

/* Demangled: InitVars_Tmp */
extern "C" __attribute__((visibility("default"))) int InitVars_Tmp(void) {
    ALOGD("InitVars_Tmp() called");
    return 0;
}

/* Demangled: SetMVRangeFlag */
extern "C" __attribute__((visibility("default"))) int SetMVRangeFlag(void) {
    ALOGD("SetMVRangeFlag() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBMode1MV1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV1 = NULL;

/* Exported Object: grgi4x8ZigzagInvRotated_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInvRotated_Interlace = NULL;

/* Demangled: m_InitFncPtrAndZigzag */
extern "C" __attribute__((visibility("default"))) int m_InitFncPtrAndZigzag(void) {
    ALOGD("m_InitFncPtrAndZigzag() called");
    return 0;
}

/* Exported Object: tt_m_hufFieldPictureMBMode1MV2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV2 = NULL;

/* Exported Object: tt_m_hufFieldPictureMVBP1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMVBP1 = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV3 = NULL;

/* Exported Object: tt_m_hufFieldPictureMVBP2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMVBP2 = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV4 = NULL;

/* Exported Object: tt_m_hufFieldPictureMVBP3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMVBP3 = NULL;

/* Exported Object: gmvUVtableNew */
extern "C" __attribute__((visibility("default"))) void* gmvUVtableNew = NULL;

/* Exported Object: fineTblMV */
extern "C" __attribute__((visibility("default"))) void* fineTblMV = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV5 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV5 = NULL;

/* Exported Object: tt_m_hufFieldPictureMVBP4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMVBP4 = NULL;

/* Demangled: ScaleTopPredForDQuant */
extern "C" __attribute__((visibility("default"))) int ScaleTopPredForDQuant(void) {
    ALOGD("ScaleTopPredForDQuant() called");
    return 0;
}

/* Demangled: VC1DecoderGetMemoryRequiredExtendAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderGetMemoryRequiredExtendAdapt(void) {
    ALOGD("VC1DecoderGetMemoryRequiredExtendAdapt() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfRunAtLevel_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevel_Talking = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV6 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV6 = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevel_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevel_HghRate = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV7 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV7 = NULL;

/* Exported Object: dec_m_hufFieldPictureMVBP1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMVBP1 = NULL;

/* Exported Object: tt_m_hufFieldPictureMBMode1MV8 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufFieldPictureMBMode1MV8 = NULL;

/* Exported Object: dec_m_hufFieldPictureMVBP2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMVBP2 = NULL;

/* Exported Object: dec_m_hufFieldPictureMVBP3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMVBP3 = NULL;

/* Exported Object: dec_m_hufFieldPictureMVBP4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMVBP4 = NULL;

/* Demangled: DecodeSkipBitX9_leshi */
extern "C" __attribute__((visibility("default"))) int DecodeSkipBitX9_leshi(void) {
    ALOGD("DecodeSkipBitX9_leshi() called");
    return 0;
}

/* Demangled: VC1SwDecReturnBitstream */
extern "C" __attribute__((visibility("default"))) int VC1SwDecReturnBitstream(void) {
    ALOGD("VC1SwDecReturnBitstream() called");
    return 0;
}

/* Exported Object: dec_WMVA_HufPCBPCYTable */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable = NULL;

/* Demangled: InterpolateYMB_X9 */
extern "C" __attribute__((visibility("default"))) int InterpolateYMB_X9(void) {
    ALOGD("InterpolateYMB_X9() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufPCBPCYTable_MidRate */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_MidRate = NULL;

/* Demangled: OverlapMBs_iField */
extern "C" __attribute__((visibility("default"))) int OverlapMBs_iField(void) {
    ALOGD("OverlapMBs_iField() called");
    return 0;
}

/* Demangled: ScaleTopPredForDQuantInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ScaleTopPredForDQuantInterlaceV2(void) {
    ALOGD("ScaleTopPredForDQuantInterlaceV2() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV1 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV2 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV3 = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevel_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevel_MMIDRATE = NULL;

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV4 = NULL;

/* Demangled: IntraFieldMB_organize_iFrame_I16 */
extern "C" __attribute__((visibility("default"))) int IntraFieldMB_organize_iFrame_I16(void) {
    ALOGD("IntraFieldMB_organize_iFrame_I16() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV5 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV5 = NULL;

/* Exported Object: ff_vc1_ac_coeff_table_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_1_table = NULL;

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV6 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV6 = NULL;

/* Demangled: g_OverlapBlockVerticalEdge_C */
extern "C" __attribute__((visibility("default"))) int g_OverlapBlockVerticalEdge_C(void) {
    ALOGD("g_OverlapBlockVerticalEdge_C() called");
    return 0;
}

/* Demangled: SWVC1QueryDynamicSwitch */
extern "C" __attribute__((visibility("default"))) int SWVC1QueryDynamicSwitch(void) {
    ALOGD("SWVC1QueryDynamicSwitch() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV7 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV7 = NULL;

/* Exported Object: idctmask */
extern "C" __attribute__((visibility("default"))) void* idctmask = NULL;

/* Exported Object: tab_m_hufFieldPictureMBModeMixedMV8 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBModeMixedMV8 = NULL;

/* Demangled: DecodeInverseIntraBlockQuantizeInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int DecodeInverseIntraBlockQuantizeInterlaceV2(void) {
    ALOGD("DecodeInverseIntraBlockQuantizeInterlaceV2() called");
    return 0;
}

/* Exported Object: g_iBInverse */
extern "C" __attribute__((visibility("default"))) void* g_iBInverse = NULL;

/* Exported Object: sm_rgIfLastNumOfLevelAtRunIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRunIntraY_HghRate = NULL;

/* Demangled: ResetConditionalVariablesForSequenceSwitch */
extern "C" __attribute__((visibility("default"))) int ResetConditionalVariablesForSequenceSwitch(void) {
    ALOGD("ResetConditionalVariablesForSequenceSwitch() called");
    return 0;
}

/* Exported Object: grgi4x8ZigzagInvRotated */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInvRotated = NULL;

/* Demangled: BS_getBits */
extern "C" __attribute__((visibility("default"))) int BS_getBits(void) {
    ALOGD("BS_getBits() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV1 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV1 = NULL;

/* Exported Object: g_iDenShortVLC */
extern "C" __attribute__((visibility("default"))) void* g_iDenShortVLC = NULL;

/* Demangled: SetupBackwardBFieldPictureMVScaling */
extern "C" __attribute__((visibility("default"))) int SetupBackwardBFieldPictureMVScaling(void) {
    ALOGD("SetupBackwardBFieldPictureMVScaling() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV2 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV2 = NULL;

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV3 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV3 = NULL;

/* Demangled: PullBackFieldMBMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackFieldMBMotionVector(void) {
    ALOGD("PullBackFieldMBMotionVector() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV4 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV4 = NULL;

/* Demangled: BS_GetVlc2 */
extern "C" __attribute__((visibility("default"))) int BS_GetVlc2(void) {
    ALOGD("BS_GetVlc2() called");
    return 0;
}

/* Demangled: decideMMXRoutines */
extern "C" __attribute__((visibility("default"))) int decideMMXRoutines(void) {
    ALOGD("decideMMXRoutines() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV5 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV5 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV5 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV5 = NULL;

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV6 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV6 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV6 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV6 = NULL;

/* Demangled: SWVC1QuerySpeedyMode */
extern "C" __attribute__((visibility("default"))) int SWVC1QuerySpeedyMode(void) {
    ALOGD("SWVC1QuerySpeedyMode() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV7 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV7 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV7 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV7 = NULL;

/* Demangled: FetchPixels */
extern "C" __attribute__((visibility("default"))) int FetchPixels(void) {
    ALOGD("FetchPixels() called");
    return 0;
}

/* Exported Object: ff_vc1_mv_diff_vlc_index_2_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_mv_diff_vlc_index_2_table = NULL;

/* Exported Object: ff_vc1_ttblk_vlc_index_2_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttblk_vlc_index_2_table = NULL;

/* Exported Object: dec_m_hufFieldPictureMBModeMixedMV8 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBModeMixedMV8 = NULL;

/* Exported Object: tt_m_HufMVTable_Interlace_MV8 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Interlace_MV8 = NULL;

/* Exported Object: ff_vc1_subblk_to_tt */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_subblk_to_tt = NULL;

/* Exported Object: grgiZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInv = NULL;

/* Demangled: ComputeFrame4MVFromDiffMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ComputeFrame4MVFromDiffMVInterlaceV2(void) {
    ALOGD("ComputeFrame4MVFromDiffMVInterlaceV2() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame4MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame4MvMBMode0 = NULL;

/* Demangled: g_blockCopy_16x16_byte_asm */
extern "C" __attribute__((visibility("default"))) int g_blockCopy_16x16_byte_asm(void) {
    ALOGD("g_blockCopy_16x16_byte_asm() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame4MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame4MvMBMode1 = NULL;

/* Exported Object: tab_WMVA_HufPCBPCYTable_V9_1 */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_V9_1 = NULL;

/* Demangled: g_IDCTDec4x8_v1plus_WMV3_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x8_v1plus_WMV3_asm(void) {
    ALOGD("g_IDCTDec4x8_v1plus_WMV3_asm() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame4MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame4MvMBMode2 = NULL;

/* Exported Object: sm_rgLevelAtIndx_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndx_HghRate = NULL;

/* Exported Object: tab_WMVA_HufPCBPCYTable_V9_2 */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_V9_2 = NULL;

/* Exported Object: dec_m_hufInterlaceFrame4MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame4MvMBMode3 = NULL;

/* Exported Object: tab_WMVA_HufPCBPCYTable_V9_3 */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_V9_3 = NULL;

/* Demangled: OverlapMBnew_leshi */
extern "C" __attribute__((visibility("default"))) int OverlapMBnew_leshi(void) {
    ALOGD("OverlapMBnew_leshi() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufPCBPCYTable_V9_4 */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_V9_4 = NULL;

/* Exported Object: grgi4x8ZigzagInv_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInv_Prog = NULL;

/* Demangled: __divsi3 */
extern "C" __attribute__((visibility("default"))) int fn___divsi3(void) __asm__("__divsi3");
int fn___divsi3(void) {
    ALOGD("__divsi3() called");
    return 0;
}

/* Exported Object: g_IDCTDec_table1 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table1 = NULL;

/* Demangled: PredictFrameOneMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFrameOneMVInterlaceV2(void) {
    ALOGD("PredictFrameOneMVInterlaceV2() called");
    return 0;
}

/* Exported Object: g_IDCTDec_table2 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table2 = NULL;

/* Exported Object: grgiZigzagInvRotated_NEW_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInvRotated_NEW_Interlace = NULL;

/* Exported Object: ff_vc1_ac_coeff_table_index_2_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_2_table = NULL;

/* Exported Object: g_IDCTDec_table3 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table3 = NULL;

/* Demangled: g_blockSet_128_8x8_asm */
extern "C" __attribute__((visibility("default"))) int g_blockSet_128_8x8_asm(void) {
    ALOGD("g_blockSet_128_8x8_asm() called");
    return 0;
}

/* Demangled: FilterEdgeShortTagMB */
extern "C" __attribute__((visibility("default"))) int FilterEdgeShortTagMB(void) {
    ALOGD("FilterEdgeShortTagMB() called");
    return 0;
}

/* Demangled: FetchPixels_iField */
extern "C" __attribute__((visibility("default"))) int FetchPixels_iField(void) {
    ALOGD("FetchPixels_iField() called");
    return 0;
}

/* Exported Object: g_IDCTDec_table4 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table4 = NULL;

/* Demangled: NeonPop */
extern "C" __attribute__((visibility("default"))) int NeonPop(void) {
    ALOGD("NeonPop() called");
    return 0;
}

/* Exported Object: g_IDCTDec_table5 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table5 = NULL;

/* Demangled: t_AltTablesSetNewFrame */
extern "C" __attribute__((visibility("default"))) int t_AltTablesSetNewFrame(void) {
    ALOGD("t_AltTablesSetNewFrame() called");
    return 0;
}

/* Demangled: PredictFieldBotLeftMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldBotLeftMVInterlaceV2(void) {
    ALOGD("PredictFieldBotLeftMVInterlaceV2() called");
    return 0;
}

/* Exported Object: g_IDCTDec_table6 */
extern "C" __attribute__((visibility("default"))) void* g_IDCTDec_table6 = NULL;

/* Demangled: StoreDCACPredCoefInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int StoreDCACPredCoefInterlaceV2(void) {
    ALOGD("StoreDCACPredCoefInterlaceV2() called");
    return 0;
}

/* Demangled: wmvDEBUG_FilePrintRectangle16 */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_FilePrintRectangle16(void) {
    ALOGD("wmvDEBUG_FilePrintRectangle16() called");
    return 0;
}

/* Demangled: ChromaMV */
extern "C" __attribute__((visibility("default"))) int ChromaMV(void) {
    ALOGD("ChromaMV() called");
    return 0;
}

/* Demangled: g_Copy4ByteRow */
extern "C" __attribute__((visibility("default"))) int g_Copy4ByteRow(void) {
    ALOGD("g_Copy4ByteRow() called");
    return 0;
}

/* Demangled: DecodeIntraBlockInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int DecodeIntraBlockInterlaceV2(void) {
    ALOGD("DecodeIntraBlockInterlaceV2() called");
    return 0;
}

/* Demangled: SixteenPixel_Filter_Hor */
extern "C" __attribute__((visibility("default"))) int SixteenPixel_Filter_Hor(void) {
    ALOGD("SixteenPixel_Filter_Hor() called");
    return 0;
}

/* Exported Object: g_iStepRemap */
extern "C" __attribute__((visibility("default"))) void* g_iStepRemap = NULL;

/* Demangled: decodeMBOverheadOfBVOP_FieldPicture */
extern "C" __attribute__((visibility("default"))) int decodeMBOverheadOfBVOP_FieldPicture(void) {
    ALOGD("decodeMBOverheadOfBVOP_FieldPicture() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndx_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndx_HghRate = NULL;

/* Demangled: WMVideoDecInit */
extern "C" __attribute__((visibility("default"))) int WMVideoDecInit(void) {
    ALOGD("WMVideoDecInit() called");
    return 0;
}

/* Demangled: CopyIntraFieldMBtoFrameMBInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int CopyIntraFieldMBtoFrameMBInterlaceV2(void) {
    ALOGD("CopyIntraFieldMBtoFrameMBInterlaceV2() called");
    return 0;
}

/* Demangled: VC1SwDecStaticMalloc */
extern "C" __attribute__((visibility("default"))) int VC1SwDecStaticMalloc(void) {
    ALOGD("VC1SwDecStaticMalloc() called");
    return 0;
}

/* Demangled: VC1SwDecFreeSlice */
extern "C" __attribute__((visibility("default"))) int VC1SwDecFreeSlice(void) {
    ALOGD("VC1SwDecFreeSlice() called");
    return 0;
}

/* Demangled: PredictMV */
extern "C" __attribute__((visibility("default"))) int PredictMV(void) {
    ALOGD("PredictMV() called");
    return 0;
}

/* Demangled: SetDefaultDQuantSetting */
extern "C" __attribute__((visibility("default"))) int SetDefaultDQuantSetting(void) {
    ALOGD("SetDefaultDQuantSetting() called");
    return 0;
}

/* Demangled: DecodeMBHead_BVOP */
extern "C" __attribute__((visibility("default"))) int DecodeMBHead_BVOP(void) {
    ALOGD("DecodeMBHead_BVOP() called");
    return 0;
}

/* Demangled: DecodeMBModeFieldPicture */
extern "C" __attribute__((visibility("default"))) int DecodeMBModeFieldPicture(void) {
    ALOGD("DecodeMBModeFieldPicture() called");
    return 0;
}

/* Exported Object: rfnVC1Callback */
extern "C" __attribute__((visibility("default"))) void* rfnVC1Callback = NULL;

/* Demangled: Parse_Block8x8_LeShi */
extern "C" __attribute__((visibility("default"))) int Parse_Block8x8_LeShi(void) {
    ALOGD("Parse_Block8x8_LeShi() called");
    return 0;
}

/* Demangled: DecodeNormDiff6_leshi */
extern "C" __attribute__((visibility("default"))) int DecodeNormDiff6_leshi(void) {
    ALOGD("DecodeNormDiff6_leshi() called");
    return 0;
}

/* Demangled: DecodePBVOPHead */
extern "C" __attribute__((visibility("default"))) int DecodePBVOPHead(void) {
    ALOGD("DecodePBVOPHead() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: ff_vc1_mv_diff_vlc_index_3_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_mv_diff_vlc_index_3_table = NULL;

/* Demangled: AverageMVFieldMode */
extern "C" __attribute__((visibility("default"))) int AverageMVFieldMode(void) {
    ALOGD("AverageMVFieldMode() called");
    return 0;
}

/* Exported Object: tt_WMVA_HufPCBPCYTable_MidRate */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_MidRate = NULL;

/* Demangled: VC1DecoderGetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderGetParameterAdapt(void) {
    ALOGD("VC1DecoderGetParameterAdapt() called");
    return 0;
}

/* Demangled: g_pixelMean_64BytesOneLoop_V2_Y_asm */
extern "C" __attribute__((visibility("default"))) int g_pixelMean_64BytesOneLoop_V2_Y_asm(void) {
    ALOGD("g_pixelMean_64BytesOneLoop_V2_Y_asm() called");
    return 0;
}

/* Demangled: g_Interpolate4ByteRow */
extern "C" __attribute__((visibility("default"))) int g_Interpolate4ByteRow(void) {
    ALOGD("g_Interpolate4ByteRow() called");
    return 0;
}

/* Exported Object: grgiVerticalZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgiVerticalZigzagInv = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_LowRate */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_LowRate = NULL;

/* Exported Object: grgiZigzagInv_NEW_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInv_NEW_Interlace = NULL;

/* Demangled: VC1SwDecMemset */
extern "C" __attribute__((visibility("default"))) int VC1SwDecMemset(void) {
    ALOGD("VC1SwDecMemset() called");
    return 0;
}

/* Demangled: DirectModeMV */
extern "C" __attribute__((visibility("default"))) int DirectModeMV(void) {
    ALOGD("DirectModeMV() called");
    return 0;
}

/* Exported Object: tab_m_hufCBPCYDec_Interlace_1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_1 = NULL;

/* Exported Object: tab_m_hufCBPCYDec_Interlace_2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_2 = NULL;

/* Demangled: DecodePMB_1MV */
extern "C" __attribute__((visibility("default"))) int DecodePMB_1MV(void) {
    ALOGD("DecodePMB_1MV() called");
    return 0;
}

/* Exported Object: tab_m_hufCBPCYDec_Interlace_3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_3 = NULL;

/* Demangled: Prepare_Buffer */
extern "C" __attribute__((visibility("default"))) int Prepare_Buffer(void) {
    ALOGD("Prepare_Buffer() called");
    return 0;
}

/* Exported Object: tab_m_hufCBPCYDec_Interlace_4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_4 = NULL;

/* Exported Object: tab_m_hufCBPCYDec_Interlace_5 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_5 = NULL;

/* Exported Object: tab_m_hufCBPCYDec_Interlace_6 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_6 = NULL;

/* Exported Object: grgiHorizontalZigzagInv_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiHorizontalZigzagInv_NEW = NULL;

/* Exported Object: tab_m_hufCBPCYDec_Interlace_7 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_7 = NULL;

/* Exported Object: tab_m_hufCBPCYDec_Interlace_8 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufCBPCYDec_Interlace_8 = NULL;

/* Exported Object: sm_rgRunAtIndx_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndx_HghMt = NULL;

/* Demangled: AdjustReconRange */
extern "C" __attribute__((visibility("default"))) int AdjustReconRange(void) {
    ALOGD("AdjustReconRange() called");
    return 0;
}

/* Exported Object: g_iDenLongVLC */
extern "C" __attribute__((visibility("default"))) void* g_iDenLongVLC = NULL;

/* Demangled: ComputeFieldMVFromDiffMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ComputeFieldMVFromDiffMVInterlaceV2(void) {
    ALOGD("ComputeFieldMVFromDiffMVInterlaceV2() called");
    return 0;
}

/* Exported Object: gacCodeLengthsOrientLowRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsOrientLowRate = NULL;

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_idiv0(void) __asm__("__aeabi_idiv0");
int fn___aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: GenerateRowFilterMBFlag_3Unit */
extern "C" __attribute__((visibility("default"))) int GenerateRowFilterMBFlag_3Unit(void) {
    ALOGD("GenerateRowFilterMBFlag_3Unit() called");
    return 0;
}

/* Exported Object: dec_m_HufMVTable_Interlace_MV1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV1 = NULL;

/* Demangled: ParsePMB_4MV */
extern "C" __attribute__((visibility("default"))) int ParsePMB_4MV(void) {
    ALOGD("ParsePMB_4MV() called");
    return 0;
}

/* Exported Object: dec_m_HufMVTable_Interlace_MV2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV2 = NULL;

/* Demangled: VC1SwDecMalloc */
extern "C" __attribute__((visibility("default"))) int VC1SwDecMalloc(void) {
    ALOGD("VC1SwDecMalloc() called");
    return 0;
}

/* Exported Object: dec_m_HufMVTable_Interlace_MV3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV3 = NULL;

/* Exported Object: hw_fp */
extern "C" __attribute__((visibility("default"))) void* hw_fp = NULL;

/* Exported Object: dec_m_HufMVTable_Interlace_MV4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV4 = NULL;

/* Exported Object: dec_m_HufMVTable_Interlace_MV5 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV5 = NULL;

/* Exported Object: dec_m_HufMVTable_Interlace_MV6 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV6 = NULL;

/* Demangled: DecodePMB */
extern "C" __attribute__((visibility("default"))) int DecodePMB(void) {
    ALOGD("DecodePMB() called");
    return 0;
}

/* Exported Object: dec_WMVA_HufPCBPCYTable_LowRate */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_LowRate = NULL;

/* Exported Object: dec_m_HufMVTable_Interlace_MV7 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV7 = NULL;

/* Exported Object: sm_rgLevelAtIndxOfIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndxOfIntraY_Talking = NULL;

/* Exported Object: dec_m_HufMVTable_Interlace_MV8 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Interlace_MV8 = NULL;

/* Exported Object: sm_rgIfLastNumOfLevelAtRun_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRun_Talking = NULL;

/* Exported Object: s_iInv */
extern "C" __attribute__((visibility("default"))) void* s_iInv = NULL;

/* Demangled: AdjustIncreaseRange */
extern "C" __attribute__((visibility("default"))) int AdjustIncreaseRange(void) {
    ALOGD("AdjustIncreaseRange() called");
    return 0;
}

/* Demangled: MotionCompField4MvInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int MotionCompField4MvInterlaceV2(void) {
    ALOGD("MotionCompField4MvInterlaceV2() called");
    return 0;
}

/* Demangled: DecodePMB_iFrame */
extern "C" __attribute__((visibility("default"))) int DecodePMB_iFrame(void) {
    ALOGD("DecodePMB_iFrame() called");
    return 0;
}

/* Demangled: g_IDCT8x8_Dec8_C */
extern "C" __attribute__((visibility("default"))) int g_IDCT8x8_Dec8_C(void) {
    ALOGD("g_IDCT8x8_Dec8_C() called");
    return 0;
}

/* Demangled: g_OverlapBlockVerticalEdge_ASM */
extern "C" __attribute__((visibility("default"))) int g_OverlapBlockVerticalEdge_ASM(void) {
    ALOGD("g_OverlapBlockVerticalEdge_ASM() called");
    return 0;
}

/* Exported Object: orderArray */
extern "C" __attribute__((visibility("default"))) void* orderArray = NULL;

/* Demangled: Parse_P_MBs */
extern "C" __attribute__((visibility("default"))) int Parse_P_MBs(void) {
    ALOGD("Parse_P_MBs() called");
    return 0;
}

/* Demangled: MotionCompP_4MV */
extern "C" __attribute__((visibility("default"))) int MotionCompP_4MV(void) {
    ALOGD("MotionCompP_4MV() called");
    return 0;
}

/* Demangled: Parse_B_MB_iField */
extern "C" __attribute__((visibility("default"))) int Parse_B_MB_iField(void) {
    ALOGD("Parse_B_MB_iField() called");
    return 0;
}

/* Demangled: VC1SwDecQueryCapability */
extern "C" __attribute__((visibility("default"))) int VC1SwDecQueryCapability(void) {
    ALOGD("VC1SwDecQueryCapability() called");
    return 0;
}

/* Exported Object: ff_vc1_mv_diff_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_mv_diff_vlc = NULL;

/* Demangled: PullBackFrameBlockMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackFrameBlockMotionVector(void) {
    ALOGD("PullBackFrameBlockMotionVector() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndxOfIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndxOfIntraY_HghMt = NULL;

/* Demangled: DecodeNormDiff6 */
extern "C" __attribute__((visibility("default"))) int DecodeNormDiff6(void) {
    ALOGD("DecodeNormDiff6() called");
    return 0;
}

/* Demangled: g_InterpolateBlockBicubic_vert_asm */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockBicubic_vert_asm(void) {
    ALOGD("g_InterpolateBlockBicubic_vert_asm() called");
    return 0;
}

/* Demangled: BS_showBits */
extern "C" __attribute__((visibility("default"))) int BS_showBits(void) {
    ALOGD("BS_showBits() called");
    return 0;
}

/* Exported Object: ff_msmp4_dc_luma_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_luma_vlc = NULL;

/* Demangled: VC1DecoderDeInitAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderDeInitAdapt(void) {
    ALOGD("VC1DecoderDeInitAdapt() called");
    return 0;
}

/* Demangled: vc1dec_mt_init */
extern "C" __attribute__((visibility("default"))) int vc1dec_mt_init(void) {
    ALOGD("vc1dec_mt_init() called");
    return 0;
}

/* Demangled: VC1SwDecGetSyncStatus */
extern "C" __attribute__((visibility("default"))) int VC1SwDecGetSyncStatus(void) {
    ALOGD("VC1SwDecGetSyncStatus() called");
    return 0;
}

/* Demangled: SWVC1QueryDualCoreMode */
extern "C" __attribute__((visibility("default"))) int SWVC1QueryDualCoreMode(void) {
    ALOGD("SWVC1QueryDualCoreMode() called");
    return 0;
}

/* Demangled: g_IDCTDec8x4_DC_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x4_DC_AddError(void) {
    ALOGD("g_IDCTDec8x4_DC_AddError() called");
    return 0;
}

/* Demangled: divroundnearest */
extern "C" __attribute__((visibility("default"))) int divroundnearest(void) {
    ALOGD("divroundnearest() called");
    return 0;
}

/* Exported Object: ff_msmp4_dc_chroma_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_chroma_vlc = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_1 = NULL;

/* Exported Object: gacCodeLengthsIntraLowRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsIntraLowRate = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_2 = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_V9_1 */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_V9_1 = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_3 = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_V9_2 */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_V9_2 = NULL;

/* Demangled: g_4x8IDCT_DCOnly */
extern "C" __attribute__((visibility("default"))) int g_4x8IDCT_DCOnly(void) {
    ALOGD("g_4x8IDCT_DCOnly() called");
    return 0;
}

/* Exported Object: dec_m_hufCBPCYDec_Interlace_4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_4 = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_V9_3 */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_V9_3 = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_5 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_5 = NULL;

/* Exported Object: tt_WMVA_HufPCBPCYTable_V9_4 */
extern "C" __attribute__((visibility("default"))) void* tt_WMVA_HufPCBPCYTable_V9_4 = NULL;

/* Demangled: wmvDEBUG_FilePrintRectangle8 */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_FilePrintRectangle8(void) {
    ALOGD("wmvDEBUG_FilePrintRectangle8() called");
    return 0;
}

/* Exported Object: dec_m_hufCBPCYDec_Interlace_6 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_6 = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_7 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_7 = NULL;

/* Exported Object: gFineMV */
extern "C" __attribute__((visibility("default"))) void* gFineMV = NULL;

/* Exported Object: dec_m_hufCBPCYDec_Interlace_8 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufCBPCYDec_Interlace_8 = NULL;

/* Exported Object: ff_vc1_ac_coeff_table_index_7_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_7_table = NULL;

/* Exported Object: dec_m_HufMVTable_Progressive_MV1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Progressive_MV1 = NULL;

/* Exported Object: dec_m_HufMVTable_Progressive_MV2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Progressive_MV2 = NULL;

/* Exported Object: dec_m_HufMVTable_Progressive_MV3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Progressive_MV3 = NULL;

/* Demangled: ScaleNearPredBackward */
extern "C" __attribute__((visibility("default"))) int ScaleNearPredBackward(void) {
    ALOGD("ScaleNearPredBackward() called");
    return 0;
}

/* Exported Object: dec_m_HufMVTable_Progressive_MV4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_HufMVTable_Progressive_MV4 = NULL;

/* Exported Object: gaSubsampleBilinear_8_xy */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBilinear_8_xy = NULL;

/* Demangled: PredictFrameBotLeftMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFrameBotLeftMVInterlaceV2(void) {
    ALOGD("PredictFrameBotLeftMVInterlaceV2() called");
    return 0;
}

/* Demangled: MotionCompP_Blk_4MV_iField */
extern "C" __attribute__((visibility("default"))) int MotionCompP_Blk_4MV_iField(void) {
    ALOGD("MotionCompP_Blk_4MV_iField() called");
    return 0;
}

/* Demangled: PullBackInterlaceFrameChromaMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackInterlaceFrameChromaMotionVector(void) {
    ALOGD("PullBackInterlaceFrameChromaMotionVector() called");
    return 0;
}

/* Demangled: VC1SwDecGetInfo */
extern "C" __attribute__((visibility("default"))) int VC1SwDecGetInfo(void) {
    ALOGD("VC1SwDecGetInfo() called");
    return 0;
}

/* Demangled: VC1CalcStrmLen */
extern "C" __attribute__((visibility("default"))) int VC1CalcStrmLen(void) {
    ALOGD("VC1CalcStrmLen() called");
    return 0;
}

/* Demangled: DeblockPB_MB */
extern "C" __attribute__((visibility("default"))) int DeblockPB_MB(void) {
    ALOGD("DeblockPB_MB() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV1 = NULL;

/* Exported Object: rVC1API */
extern "C" __attribute__((visibility("default"))) void* rVC1API = NULL;

/* Exported Object: dec_m_hufFieldPictureMBMode1MV2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV2 = NULL;

/* Demangled: DecodeEntryPointHeader */
extern "C" __attribute__((visibility("default"))) int DecodeEntryPointHeader(void) {
    ALOGD("DecodeEntryPointHeader() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV3 = NULL;

/* Demangled: Parse_B_MB */
extern "C" __attribute__((visibility("default"))) int Parse_B_MB(void) {
    ALOGD("Parse_B_MB() called");
    return 0;
}

/* Demangled: decodeVOPHeadInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeVOPHeadInterlaceV2(void) {
    ALOGD("decodeVOPHeadInterlaceV2() called");
    return 0;
}

/* Demangled: X9SkipbitDecode2 */
extern "C" __attribute__((visibility("default"))) int X9SkipbitDecode2(void) {
    ALOGD("X9SkipbitDecode2() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV4 = NULL;

/* Demangled: NeonPush */
extern "C" __attribute__((visibility("default"))) int NeonPush(void) {
    ALOGD("NeonPush() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV5 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV5 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame1MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame1MvMBMode0 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame4MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame4MvMBMode0 = NULL;

/* Exported Object: ff_vc1_ttblk_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttblk_vlc = NULL;

/* Exported Object: gacCodeLengthsOrientHighRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsOrientHighRate = NULL;

/* Demangled: VC1DecoderInitAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderInitAdapt(void) {
    ALOGD("VC1DecoderInitAdapt() called");
    return 0;
}

/* Demangled: VC1SwDecMallocYUVBuffer */
extern "C" __attribute__((visibility("default"))) int VC1SwDecMallocYUVBuffer(void) {
    ALOGD("VC1SwDecMallocYUVBuffer() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV6 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV6 = NULL;

/* Exported Object: grgiZigzagInv_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInv_NEW = NULL;

/* Exported Object: tab_m_hufInterlaceFrame1MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame1MvMBMode1 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame4MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame4MvMBMode1 = NULL;

/* Exported Object: grgi4x4ZigzagInvRotated_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInvRotated_Interlace = NULL;

/* Demangled: WMVRemoveEmulationPreventionByte_s */
extern "C" __attribute__((visibility("default"))) int WMVRemoveEmulationPreventionByte_s(void) {
    ALOGD("WMVRemoveEmulationPreventionByte_s() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV7 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV7 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame1MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame1MvMBMode2 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame4MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame4MvMBMode2 = NULL;

/* Demangled: SwitchEntryPoint */
extern "C" __attribute__((visibility("default"))) int SwitchEntryPoint(void) {
    ALOGD("SwitchEntryPoint() called");
    return 0;
}

/* Exported Object: ff_msmp4_mb_i_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_mb_i_vlc = NULL;

/* Demangled: MotionCompChromaP_4MV_iField */
extern "C" __attribute__((visibility("default"))) int MotionCompChromaP_4MV_iField(void) {
    ALOGD("MotionCompChromaP_4MV_iField() called");
    return 0;
}

/* Exported Object: dec_m_hufFieldPictureMBMode1MV8 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufFieldPictureMBMode1MV8 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame1MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame1MvMBMode3 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame4MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame4MvMBMode3 = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevelIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevelIntraY_Talking = NULL;

/* Exported Object: orientRemap */
extern "C" __attribute__((visibility("default"))) void* orientRemap = NULL;

/* Demangled: ReInitContext */
extern "C" __attribute__((visibility("default"))) int ReInitContext(void) {
    ALOGD("ReInitContext() called");
    return 0;
}

/* Exported Object: debug_count */
extern "C" __attribute__((visibility("default"))) void* debug_count = NULL;

/* Demangled: PullBackMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackMotionVector(void) {
    ALOGD("PullBackMotionVector() called");
    return 0;
}

/* Demangled: PredictHybridMVFieldPicture */
extern "C" __attribute__((visibility("default"))) int PredictHybridMVFieldPicture(void) {
    ALOGD("PredictHybridMVFieldPicture() called");
    return 0;
}

/* Demangled: DecodePMB_1MV_iField */
extern "C" __attribute__((visibility("default"))) int DecodePMB_1MV_iField(void) {
    ALOGD("DecodePMB_1MV_iField() called");
    return 0;
}

/* Demangled: DecodePMB_4MV_iField */
extern "C" __attribute__((visibility("default"))) int DecodePMB_4MV_iField(void) {
    ALOGD("DecodePMB_4MV_iField() called");
    return 0;
}

/* Demangled: g_InterpolateBlockRowBilinear */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockRowBilinear(void) {
    ALOGD("g_InterpolateBlockRowBilinear() called");
    return 0;
}

/* Demangled: Dec_I_MBs */
extern "C" __attribute__((visibility("default"))) int Dec_I_MBs(void) {
    ALOGD("Dec_I_MBs() called");
    return 0;
}

/* Exported Object: sm_rgLevelAtIndx_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndx_MMIDRATE = NULL;

/* Demangled: xx_SkipNorm2 */
extern "C" __attribute__((visibility("default"))) int xx_SkipNorm2(void) {
    ALOGD("xx_SkipNorm2() called");
    return 0;
}

/* Demangled: MotionCompFrameInterlaceV2B */
extern "C" __attribute__((visibility("default"))) int MotionCompFrameInterlaceV2B(void) {
    ALOGD("MotionCompFrameInterlaceV2B() called");
    return 0;
}

/* Demangled: DecodeMBModeFieldPicture_B */
extern "C" __attribute__((visibility("default"))) int DecodeMBModeFieldPicture_B(void) {
    ALOGD("DecodeMBModeFieldPicture_B() called");
    return 0;
}

/* Demangled: DeblockMBs */
extern "C" __attribute__((visibility("default"))) int DeblockMBs(void) {
    ALOGD("DeblockMBs() called");
    return 0;
}

/* Exported Object: aMVOffsets */
extern "C" __attribute__((visibility("default"))) void* aMVOffsets = NULL;

/* Demangled: PredictMVFieldBPicture */
extern "C" __attribute__((visibility("default"))) int PredictMVFieldBPicture(void) {
    ALOGD("PredictMVFieldBPicture() called");
    return 0;
}

/* Exported Object: tt_m_hufInterlaceFrame2MVBP1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame2MVBP1 = NULL;

/* Demangled: MotionCompFieldInterlaceV2MV */
extern "C" __attribute__((visibility("default"))) int MotionCompFieldInterlaceV2MV(void) {
    ALOGD("MotionCompFieldInterlaceV2MV() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame1MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame1MvMBMode0 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame2MVBP2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame2MVBP2 = NULL;

/* Exported Object: dec_m_hufInterlaceFrame1MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame1MvMBMode1 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame2MVBP3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame2MVBP3 = NULL;

/* Demangled: BS_StartCodeProcess */
extern "C" __attribute__((visibility("default"))) int BS_StartCodeProcess(void) {
    ALOGD("BS_StartCodeProcess() called");
    return 0;
}

/* Demangled: xx_SkipNorm6 */
extern "C" __attribute__((visibility("default"))) int xx_SkipNorm6(void) {
    ALOGD("xx_SkipNorm6() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame1MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame1MvMBMode2 = NULL;

/* Exported Object: sm_rgRunAtIndxOfIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndxOfIntraY_MMIDRATE = NULL;

/* Exported Object: tt_m_hufInterlaceFrame2MVBP4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame2MVBP4 = NULL;

/* Demangled: ParseIMB_WMVA_iFrame */
extern "C" __attribute__((visibility("default"))) int ParseIMB_WMVA_iFrame(void) {
    ALOGD("ParseIMB_WMVA_iFrame() called");
    return 0;
}

/* Demangled: VC1DecoderOpenAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderOpenAdapt(void) {
    ALOGD("VC1DecoderOpenAdapt() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame1MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame1MvMBMode3 = NULL;

/* Demangled: Huffman_WMV_construct */
extern "C" __attribute__((visibility("default"))) int Huffman_WMV_construct(void) {
    ALOGD("Huffman_WMV_construct() called");
    return 0;
}

/* Exported Object: g_OverlapZigzag */
extern "C" __attribute__((visibility("default"))) void* g_OverlapZigzag = NULL;

/* Demangled: PredictFieldTopMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldTopMVInterlaceV2(void) {
    ALOGD("PredictFieldTopMVInterlaceV2() called");
    return 0;
}

/* Exported Object: sm_rgRunAtIndxOfIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgRunAtIndxOfIntraY_HghRate = NULL;

/* Exported Object: sm_rgIfLastNumOfRunAtLevelIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevelIntraY_MMIDRATE = NULL;

/* Exported Object: grgi4x4ZigzagInv_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInv_Prog = NULL;

/* Exported Object: gaSubsampleBicubic_asm2 */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBicubic_asm2 = NULL;

/* Exported Object: sm_rgIfLastNumOfLevelAtRun_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRun_HghRate = NULL;

/* Demangled: ComputeMBLoopFilterFlags_WMV9 */
extern "C" __attribute__((visibility("default"))) int ComputeMBLoopFilterFlags_WMV9(void) {
    ALOGD("ComputeMBLoopFilterFlags_WMV9() called");
    return 0;
}

/* Demangled: PullBackMotionVectorWMVA */
extern "C" __attribute__((visibility("default"))) int PullBackMotionVectorWMVA(void) {
    ALOGD("PullBackMotionVectorWMVA() called");
    return 0;
}

/* Exported Object: fineTbl */
extern "C" __attribute__((visibility("default"))) void* fineTbl = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevelIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevelIntraY_HghMt = NULL;

/* Demangled: ProcessIntraResidual */
extern "C" __attribute__((visibility("default"))) int ProcessIntraResidual(void) {
    ALOGD("ProcessIntraResidual() called");
    return 0;
}

/* Exported Object: sm_rgLevelAtIndxOfIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndxOfIntraY_MMIDRATE = NULL;

/* Demangled: g_IDCTDec8x4_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x4_AddError(void) {
    ALOGD("g_IDCTDec8x4_AddError() called");
    return 0;
}

/* Demangled: g_8x4IDCTDec_C */
extern "C" __attribute__((visibility("default"))) int g_8x4IDCTDec_C(void) {
    ALOGD("g_8x4IDCTDec_C() called");
    return 0;
}

/* Exported Object: grgi8x4ZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInv = NULL;

/* Demangled: ComputeMBLoopFilterFlags_WMVA */
extern "C" __attribute__((visibility("default"))) int ComputeMBLoopFilterFlags_WMVA(void) {
    ALOGD("ComputeMBLoopFilterFlags_WMVA() called");
    return 0;
}

/* Exported Object: gaPredCase1Index */
extern "C" __attribute__((visibility("default"))) void* gaPredCase1Index = NULL;

/* Exported Object: ff_vc1_ttblk_to_tt */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttblk_to_tt = NULL;

/* Demangled: g_IDCTDec8x8_DC_16bit_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_DC_16bit_AddError(void) {
    ALOGD("g_IDCTDec8x8_DC_16bit_AddError() called");
    return 0;
}

/* Demangled: Parse_Block4x8_LeShi */
extern "C" __attribute__((visibility("default"))) int Parse_Block4x8_LeShi(void) {
    ALOGD("Parse_Block4x8_LeShi() called");
    return 0;
}

/* Exported Object: grgiVerticalZigzagInv_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiVerticalZigzagInv_NEW = NULL;

/* Exported Object: XMode2LoopFlagTab */
extern "C" __attribute__((visibility("default"))) void* XMode2LoopFlagTab = NULL;

/* Exported Object: zigzagArray */
extern "C" __attribute__((visibility("default"))) void* zigzagArray = NULL;

/* Demangled: MotionCompFieldInterlaceV2B */
extern "C" __attribute__((visibility("default"))) int MotionCompFieldInterlaceV2B(void) {
    ALOGD("MotionCompFieldInterlaceV2B() called");
    return 0;
}

/* Exported Object: compensation_count */
extern "C" __attribute__((visibility("default"))) void* compensation_count = NULL;

/* Demangled: g_FilterVerticalEdgeV9_ASM */
extern "C" __attribute__((visibility("default"))) int g_FilterVerticalEdgeV9_ASM(void) {
    ALOGD("g_FilterVerticalEdgeV9_ASM() called");
    return 0;
}

/* Demangled: Dec_InterBlocNxN */
extern "C" __attribute__((visibility("default"))) int Dec_InterBlocNxN(void) {
    ALOGD("Dec_InterBlocNxN() called");
    return 0;
}

/* Demangled: EightPixel_Filter_Ver */
extern "C" __attribute__((visibility("default"))) int EightPixel_Filter_Ver(void) {
    ALOGD("EightPixel_Filter_Ver() called");
    return 0;
}

/* Demangled: DecodeVOPTypeFieldPicture */
extern "C" __attribute__((visibility("default"))) int DecodeVOPTypeFieldPicture(void) {
    ALOGD("DecodeVOPTypeFieldPicture() called");
    return 0;
}

/* Demangled: ComputeDQuantDecParam */
extern "C" __attribute__((visibility("default"))) int ComputeDQuantDecParam(void) {
    ALOGD("ComputeDQuantDecParam() called");
    return 0;
}

/* Demangled: DecodeVOLHead_WMV3 */
extern "C" __attribute__((visibility("default"))) int DecodeVOLHead_WMV3(void) {
    ALOGD("DecodeVOLHead_WMV3() called");
    return 0;
}

/* Demangled: DecodeVOPHead_WMV3 */
extern "C" __attribute__((visibility("default"))) int DecodeVOPHead_WMV3(void) {
    ALOGD("DecodeVOPHead_WMV3() called");
    return 0;
}

/* Demangled: EightPixel_Filter_Ver_NoBreak */
extern "C" __attribute__((visibility("default"))) int EightPixel_Filter_Ver_NoBreak(void) {
    ALOGD("EightPixel_Filter_Ver_NoBreak() called");
    return 0;
}

/* Exported Object: tt_m_HufMVTable_Progressive_MV1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Progressive_MV1 = NULL;

/* Exported Object: ff_vc1_ac_coeff_table_index_3_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_3_table = NULL;

/* Demangled: ScaleFarPredForward */
extern "C" __attribute__((visibility("default"))) int ScaleFarPredForward(void) {
    ALOGD("ScaleFarPredForward() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfRunAtLevel_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevel_HghRate = NULL;

/* Exported Object: tt_m_HufMVTable_Progressive_MV2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Progressive_MV2 = NULL;

/* Exported Object: tt_m_HufMVTable_Progressive_MV3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Progressive_MV3 = NULL;

/* Demangled: g_intensityCompensationScaleZero_asm */
extern "C" __attribute__((visibility("default"))) int g_intensityCompensationScaleZero_asm(void) {
    ALOGD("g_intensityCompensationScaleZero_asm() called");
    return 0;
}

/* Demangled: VC1DecoderStartAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderStartAdapt(void) {
    ALOGD("VC1DecoderStartAdapt() called");
    return 0;
}

/* Exported Object: tt_m_HufMVTable_Progressive_MV4 */
extern "C" __attribute__((visibility("default"))) void* tt_m_HufMVTable_Progressive_MV4 = NULL;

/* Demangled: VC1_Memset */
extern "C" __attribute__((visibility("default"))) int VC1_Memset(void) {
    ALOGD("VC1_Memset() called");
    return 0;
}

/* Demangled: BS_getBit */
extern "C" __attribute__((visibility("default"))) int BS_getBit(void) {
    ALOGD("BS_getBit() called");
    return 0;
}

/* Demangled: Prejudge_Branch_16Pixels_Ver */
extern "C" __attribute__((visibility("default"))) int Prejudge_Branch_16Pixels_Ver(void) {
    ALOGD("Prejudge_Branch_16Pixels_Ver() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRunIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRunIntraY_Talking = NULL;

/* Exported Object: g_iNumShortVLC */
extern "C" __attribute__((visibility("default"))) void* g_iNumShortVLC = NULL;

/* Demangled: g_OverlapBlockHorizontalEdge_ASM */
extern "C" __attribute__((visibility("default"))) int g_OverlapBlockHorizontalEdge_ASM(void) {
    ALOGD("g_OverlapBlockHorizontalEdge_ASM() called");
    return 0;
}

/* Demangled: DecodeVOLHead_WMVA */
extern "C" __attribute__((visibility("default"))) int DecodeVOLHead_WMVA(void) {
    ALOGD("DecodeVOLHead_WMVA() called");
    return 0;
}

/* Demangled: DecodeVOPHead_WMVA */
extern "C" __attribute__((visibility("default"))) int DecodeVOPHead_WMVA(void) {
    ALOGD("DecodeVOPHead_WMVA() called");
    return 0;
}

/* Demangled: g_Add128_C */
extern "C" __attribute__((visibility("default"))) int g_Add128_C(void) {
    ALOGD("g_Add128_C() called");
    return 0;
}

/* Exported Object: fineTblJoint */
extern "C" __attribute__((visibility("default"))) void* fineTblJoint = NULL;

/* Demangled: g_DCOnly8x8_Out16bit_C */
extern "C" __attribute__((visibility("default"))) int g_DCOnly8x8_Out16bit_C(void) {
    ALOGD("g_DCOnly8x8_Out16bit_C() called");
    return 0;
}

/* Exported Object: gacCodeLengthsInterHighRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsInterHighRate = NULL;

/* Exported Object: dec_WMVA_HufPCBPCYTable_MidRate */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_MidRate = NULL;

/* Exported Object: s_iNextPixel */
extern "C" __attribute__((visibility("default"))) void* s_iNextPixel = NULL;

/* Demangled: decodeMV_Progressive */
extern "C" __attribute__((visibility("default"))) int decodeMV_Progressive(void) {
    ALOGD("decodeMV_Progressive() called");
    return 0;
}

/* Demangled: FetchPixels_iField_Chroma */
extern "C" __attribute__((visibility("default"))) int FetchPixels_iField_Chroma(void) {
    ALOGD("FetchPixels_iField_Chroma() called");
    return 0;
}

/* Exported Object: g_iNumLongVLC */
extern "C" __attribute__((visibility("default"))) void* g_iNumLongVLC = NULL;

/* Demangled: PredictFieldTopRightMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldTopRightMVInterlaceV2(void) {
    ALOGD("PredictFieldTopRightMVInterlaceV2() called");
    return 0;
}

/* Exported Object: s_iColIncTbl */
extern "C" __attribute__((visibility("default"))) void* s_iColIncTbl = NULL;

/* Demangled: logCount */
extern "C" __attribute__((visibility("default"))) int logCount(void) {
    ALOGD("logCount() called");
    return 0;
}

/* Demangled: VC1SwDecFree */
extern "C" __attribute__((visibility("default"))) int VC1SwDecFree(void) {
    ALOGD("VC1SwDecFree() called");
    return 0;
}

/* Demangled: VC1SwDecMemcpy */
extern "C" __attribute__((visibility("default"))) int VC1SwDecMemcpy(void) {
    ALOGD("VC1SwDecMemcpy() called");
    return 0;
}

/* Demangled: ParseFrame_Start */
extern "C" __attribute__((visibility("default"))) int ParseFrame_Start(void) {
    ALOGD("ParseFrame_Start() called");
    return 0;
}

/* Demangled: g_DCOnly8x8_Out8bit_C */
extern "C" __attribute__((visibility("default"))) int g_DCOnly8x8_Out8bit_C(void) {
    ALOGD("g_DCOnly8x8_Out8bit_C() called");
    return 0;
}

/* Demangled: ChromaMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ChromaMVInterlaceV2(void) {
    ALOGD("ChromaMVInterlaceV2() called");
    return 0;
}

/* Exported Object: ff_vc1_subblkpat_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_subblkpat_vlc_index_0_table = NULL;

/* Demangled: ChromaMVFieldModeEx */
extern "C" __attribute__((visibility("default"))) int ChromaMVFieldModeEx(void) {
    ALOGD("ChromaMVFieldModeEx() called");
    return 0;
}

/* Demangled: GenerateRowFilterMBFlag */
extern "C" __attribute__((visibility("default"))) int GenerateRowFilterMBFlag(void) {
    ALOGD("GenerateRowFilterMBFlag() called");
    return 0;
}

/* Demangled: ComputeFrameMVFromDiffMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ComputeFrameMVFromDiffMVInterlaceV2(void) {
    ALOGD("ComputeFrameMVFromDiffMVInterlaceV2() called");
    return 0;
}

/* Demangled: Huffman_WMV_get */
extern "C" __attribute__((visibility("default"))) int Huffman_WMV_get(void) {
    ALOGD("Huffman_WMV_get() called");
    return 0;
}

/* Demangled: DecodePMB_4MV */
extern "C" __attribute__((visibility("default"))) int DecodePMB_4MV(void) {
    ALOGD("DecodePMB_4MV() called");
    return 0;
}

/* Demangled: MC_DualRefField_InterlaceFrameB */
extern "C" __attribute__((visibility("default"))) int MC_DualRefField_InterlaceFrameB(void) {
    ALOGD("MC_DualRefField_InterlaceFrameB() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfRunAtLevel_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevel_MMIDRATE = NULL;

/* Exported Object: gaSubsampleBilinearPtr_xy */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBilinearPtr_xy = NULL;

/* Exported Object: hw_cnt */
extern "C" __attribute__((visibility("default"))) void* hw_cnt = NULL;

/* Demangled: ReadSliceHeaderWMVA */
extern "C" __attribute__((visibility("default"))) int ReadSliceHeaderWMVA(void) {
    ALOGD("ReadSliceHeaderWMVA() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMVBP1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMVBP1 = NULL;

/* Demangled: DecodeFieldModeFrame */
extern "C" __attribute__((visibility("default"))) int DecodeFieldModeFrame(void) {
    ALOGD("DecodeFieldModeFrame() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMVBP2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMVBP2 = NULL;

/* Exported Object: tab_m_hufFieldPictureMVBP3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMVBP3 = NULL;

/* Exported Object: tab_m_hufFieldPictureMVBP4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMVBP4 = NULL;

/* Demangled: Parse_InterBlocNxN */
extern "C" __attribute__((visibility("default"))) int Parse_InterBlocNxN(void) {
    ALOGD("Parse_InterBlocNxN() called");
    return 0;
}

/* Demangled: wmvDEBUG_FilePrintRectangle8_comp */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_FilePrintRectangle8_comp(void) {
    ALOGD("wmvDEBUG_FilePrintRectangle8_comp() called");
    return 0;
}

/* Exported Object: cbpcy_vlc_table */
extern "C" __attribute__((visibility("default"))) void* cbpcy_vlc_table = NULL;

/* Demangled: Update_Buffer */
extern "C" __attribute__((visibility("default"))) int Update_Buffer(void) {
    ALOGD("Update_Buffer() called");
    return 0;
}

/* Exported Object: gacCodeLengthsInterLowRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsInterLowRate = NULL;

/* Demangled: BS_reset */
extern "C" __attribute__((visibility("default"))) int BS_reset(void) {
    ALOGD("BS_reset() called");
    return 0;
}

/* Exported Object: gacCodeLengthsDCHighRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsDCHighRate = NULL;

/* Demangled: FetchPixels_iFrameExt */
extern "C" __attribute__((visibility("default"))) int FetchPixels_iFrameExt(void) {
    ALOGD("FetchPixels_iFrameExt() called");
    return 0;
}

/* Demangled: Huffman_get_vlc_depth1 */
extern "C" __attribute__((visibility("default"))) int Huffman_get_vlc_depth1(void) {
    ALOGD("Huffman_get_vlc_depth1() called");
    return 0;
}

/* Demangled: g_IDCTDec4x4_DC_16bit_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x4_DC_16bit_asm(void) {
    ALOGD("g_IDCTDec4x4_DC_16bit_asm() called");
    return 0;
}

/* Demangled: WMVideoDecDecodeI */
extern "C" __attribute__((visibility("default"))) int WMVideoDecDecodeI(void) {
    ALOGD("WMVideoDecDecodeI() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufPCBPCYTable_HighRate */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_HighRate = NULL;

/* Demangled: BS_flush */
extern "C" __attribute__((visibility("default"))) int BS_flush(void) {
    ALOGD("BS_flush() called");
    return 0;
}

/* Exported Object: gaPredCase9Index */
extern "C" __attribute__((visibility("default"))) void* gaPredCase9Index = NULL;

/* Exported Object: grgiZigzagInvRotated_NEW_I */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInvRotated_NEW_I = NULL;

/* Demangled: g_FilterHorizontalEdgeV9_ASM */
extern "C" __attribute__((visibility("default"))) int g_FilterHorizontalEdgeV9_ASM(void) {
    ALOGD("g_FilterHorizontalEdgeV9_ASM() called");
    return 0;
}

/* Exported Object: ff_msmp4_dc_chroma_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_chroma_vlc_index_0_table = NULL;

/* Demangled: g_IDCTDec4x4_DC_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x4_DC_AddError(void) {
    ALOGD("g_IDCTDec4x4_DC_AddError() called");
    return 0;
}

/* Exported Object: ff_vc1_ttmb_vlc */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttmb_vlc = NULL;

/* Demangled: WMVideoDecDecodeClipInfo */
extern "C" __attribute__((visibility("default"))) int WMVideoDecDecodeClipInfo(void) {
    ALOGD("WMVideoDecDecodeClipInfo() called");
    return 0;
}

/* Exported Object: s_iMBXformTypeLUT */
extern "C" __attribute__((visibility("default"))) void* s_iMBXformTypeLUT = NULL;

/* Demangled: PredictFrameTopRightMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFrameTopRightMVInterlaceV2(void) {
    ALOGD("PredictFrameTopRightMVInterlaceV2() called");
    return 0;
}

/* Demangled: Parse_Block4x4_LeShi */
extern "C" __attribute__((visibility("default"))) int Parse_Block4x4_LeShi(void) {
    ALOGD("Parse_Block4x4_LeShi() called");
    return 0;
}

/* Exported Object: grgiHorizontalZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgiHorizontalZigzagInv = NULL;

/* Demangled: g_InterpolateBlockBicubic_C_opti */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockBicubic_C_opti(void) {
    ALOGD("g_InterpolateBlockBicubic_C_opti() called");
    return 0;
}

/* Demangled: Parse_Block8x4_LeShi */
extern "C" __attribute__((visibility("default"))) int Parse_Block8x4_LeShi(void) {
    ALOGD("Parse_Block8x4_LeShi() called");
    return 0;
}

/* Demangled: Decode_Block4x4 */
extern "C" __attribute__((visibility("default"))) int Decode_Block4x4(void) {
    ALOGD("Decode_Block4x4() called");
    return 0;
}

/* Demangled: ScaleDCPredForDQuant */
extern "C" __attribute__((visibility("default"))) int ScaleDCPredForDQuant(void) {
    ALOGD("ScaleDCPredForDQuant() called");
    return 0;
}

/* Demangled: MotionCompFieldInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int MotionCompFieldInterlaceV2(void) {
    ALOGD("MotionCompFieldInterlaceV2() called");
    return 0;
}

/* Demangled: decodeIntraDCAcPredMSV */
extern "C" __attribute__((visibility("default"))) int decodeIntraDCAcPredMSV(void) {
    ALOGD("decodeIntraDCAcPredMSV() called");
    return 0;
}

/* Demangled: decodeDCTPredictionUV */
extern "C" __attribute__((visibility("default"))) int decodeDCTPredictionUV(void) {
    ALOGD("decodeDCTPredictionUV() called");
    return 0;
}

/* Demangled: MotionCompMB_1MV_WMV3_iField */
extern "C" __attribute__((visibility("default"))) int MotionCompMB_1MV_WMV3_iField(void) {
    ALOGD("MotionCompMB_1MV_WMV3_iField() called");
    return 0;
}

/* Exported Object: grgi4x4ZigzagInvRotated_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInvRotated_Prog = NULL;

/* Exported Object: ff_vc1_subblkpat_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_subblkpat_vlc_index_1_table = NULL;

/* Demangled: InitDataMembers */
extern "C" __attribute__((visibility("default"))) int InitDataMembers(void) {
    ALOGD("InitDataMembers() called");
    return 0;
}

/* Demangled: IntensityCompensation */
extern "C" __attribute__((visibility("default"))) int IntensityCompensation(void) {
    ALOGD("IntensityCompensation() called");
    return 0;
}

/* Demangled: Decode_Block4x8 */
extern "C" __attribute__((visibility("default"))) int Decode_Block4x8(void) {
    ALOGD("Decode_Block4x8() called");
    return 0;
}

/* Demangled: MotionCompChromaB_4MV */
extern "C" __attribute__((visibility("default"))) int MotionCompChromaB_4MV(void) {
    ALOGD("MotionCompChromaB_4MV() called");
    return 0;
}

/* Demangled: ComputeFieldMvPredictorFromNeighborMv */
extern "C" __attribute__((visibility("default"))) int ComputeFieldMvPredictorFromNeighborMv(void) {
    ALOGD("ComputeFieldMvPredictorFromNeighborMv() called");
    return 0;
}

/* Demangled: ParseStartCode */
extern "C" __attribute__((visibility("default"))) int ParseStartCode(void) {
    ALOGD("ParseStartCode() called");
    return 0;
}

/* Demangled: MotionCompChromaB_iFrame */
extern "C" __attribute__((visibility("default"))) int MotionCompChromaB_iFrame(void) {
    ALOGD("MotionCompChromaB_iFrame() called");
    return 0;
}

/* Demangled: g_inverseIntraBlockQuantizeInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int g_inverseIntraBlockQuantizeInterlaceV2(void) {
    ALOGD("g_inverseIntraBlockQuantizeInterlaceV2() called");
    return 0;
}

/* Demangled: g_blockCopy_8x8_byte_asm */
extern "C" __attribute__((visibility("default"))) int g_blockCopy_8x8_byte_asm(void) {
    ALOGD("g_blockCopy_8x8_byte_asm() called");
    return 0;
}

/* Exported Object: grgiHorizontalZigzagInvRotated_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiHorizontalZigzagInvRotated_NEW = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevelIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevelIntraY_MMIDRATE = NULL;

/* Demangled: decodeDiffDCTCoef */
extern "C" __attribute__((visibility("default"))) int decodeDiffDCTCoef(void) {
    ALOGD("decodeDiffDCTCoef() called");
    return 0;
}

/* Demangled: ClearCBP2 */
extern "C" __attribute__((visibility("default"))) int ClearCBP2(void) {
    ALOGD("ClearCBP2() called");
    return 0;
}

/* Demangled: ChromaMV_B */
extern "C" __attribute__((visibility("default"))) int ChromaMV_B(void) {
    ALOGD("ChromaMV_B() called");
    return 0;
}

/* Demangled: xx_SkipDiff2 */
extern "C" __attribute__((visibility("default"))) int xx_SkipDiff2(void) {
    ALOGD("xx_SkipDiff2() called");
    return 0;
}

/* Demangled: DecodeFrac */
extern "C" __attribute__((visibility("default"))) int DecodeFrac(void) {
    ALOGD("DecodeFrac() called");
    return 0;
}

/* Demangled: xx_SkipDiff6 */
extern "C" __attribute__((visibility("default"))) int xx_SkipDiff6(void) {
    ALOGD("xx_SkipDiff6() called");
    return 0;
}

/* Demangled: ComputeFrameMvPredictorFromNeighborMv */
extern "C" __attribute__((visibility("default"))) int ComputeFrameMvPredictorFromNeighborMv(void) {
    ALOGD("ComputeFrameMvPredictorFromNeighborMv() called");
    return 0;
}

/* Demangled: Parse_I_MBs */
extern "C" __attribute__((visibility("default"))) int Parse_I_MBs(void) {
    ALOGD("Parse_I_MBs() called");
    return 0;
}

/* Exported Object: ff_vc1_mv_diff_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_mv_diff_vlc_index_0_table = NULL;

/* Exported Object: ff_vc1_ttblk_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttblk_vlc_index_0_table = NULL;

/* Exported Object: sm_rgIfLastNumOfRunAtLevelIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevelIntraY_HghMt = NULL;

/* Demangled: OverlapMBs_iFrame */
extern "C" __attribute__((visibility("default"))) int OverlapMBs_iFrame(void) {
    ALOGD("OverlapMBs_iFrame() called");
    return 0;
}

/* Exported Object: gIntervals */
extern "C" __attribute__((visibility("default"))) void* gIntervals = NULL;

/* Demangled: decideMMXRoutines_ZigzagOnly */
extern "C" __attribute__((visibility("default"))) int decideMMXRoutines_ZigzagOnly(void) {
    ALOGD("decideMMXRoutines_ZigzagOnly() called");
    return 0;
}

/* Demangled: ScaleFarPred */
extern "C" __attribute__((visibility("default"))) int ScaleFarPred(void) {
    ALOGD("ScaleFarPred() called");
    return 0;
}

/* Demangled: DeblockIMB */
extern "C" __attribute__((visibility("default"))) int DeblockIMB(void) {
    ALOGD("DeblockIMB() called");
    return 0;
}

/* Demangled: ScaleDCPredForDQuantInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ScaleDCPredForDQuantInterlaceV2(void) {
    ALOGD("ScaleDCPredForDQuantInterlaceV2() called");
    return 0;
}

/* Exported Object: sm_rgLevelAtIndxOfIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndxOfIntraY_HghRate = NULL;

/* Demangled: g_IDCTDec8x8_16bit_v1plus_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x8_16bit_v1plus_asm(void) {
    ALOGD("g_IDCTDec8x8_16bit_v1plus_asm() called");
    return 0;
}

/* Demangled: Dec_B_MB */
extern "C" __attribute__((visibility("default"))) int Dec_B_MB(void) {
    ALOGD("Dec_B_MB() called");
    return 0;
}

/* Exported Object: s_iRowIncTbl */
extern "C" __attribute__((visibility("default"))) void* s_iRowIncTbl = NULL;

/* Exported Object: grgi8x4ZigzagInvRotated_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInvRotated_Prog = NULL;

/* Demangled: PredictFieldModeBackwardBMVEx */
extern "C" __attribute__((visibility("default"))) int PredictFieldModeBackwardBMVEx(void) {
    ALOGD("PredictFieldModeBackwardBMVEx() called");
    return 0;
}

/* Exported Object: TOPFLAGS */
extern "C" __attribute__((visibility("default"))) void* TOPFLAGS = NULL;

/* Demangled: CopyIntraFieldMBtoFieldMBInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int CopyIntraFieldMBtoFieldMBInterlaceV2(void) {
    ALOGD("CopyIntraFieldMBtoFieldMBInterlaceV2() called");
    return 0;
}

/* Exported Object: tab_m_HufMVTable_Interlace_MV1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV1 = NULL;

/* Demangled: PullBackFrameMBMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackFrameMBMotionVector(void) {
    ALOGD("PullBackFrameMBMotionVector() called");
    return 0;
}

/* Exported Object: tab_m_HufMVTable_Interlace_MV2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV2 = NULL;

/* Exported Object: tab_m_HufMVTable_Interlace_MV3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV3 = NULL;

/* Demangled: Prejudge_Branch_32Pixels_Hor */
extern "C" __attribute__((visibility("default"))) int Prejudge_Branch_32Pixels_Hor(void) {
    ALOGD("Prejudge_Branch_32Pixels_Hor() called");
    return 0;
}

/* Demangled: ClearDiffMV */
extern "C" __attribute__((visibility("default"))) int ClearDiffMV(void) {
    ALOGD("ClearDiffMV() called");
    return 0;
}

/* Exported Object: tab_m_HufMVTable_Interlace_MV4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV4 = NULL;

/* Exported Object: grgiZigzagInvRotated_NEW_Prog */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInvRotated_NEW_Prog = NULL;

/* Exported Object: tab_m_HufMVTable_Interlace_MV5 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV5 = NULL;

/* Exported Object: tab_m_HufMVTable_Interlace_MV6 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV6 = NULL;

/* Exported Object: tab_m_HufMVTable_Interlace_MV7 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV7 = NULL;

/* Exported Object: aNulls */
extern "C" __attribute__((visibility("default"))) void* aNulls = NULL;

/* Exported Object: tab_m_HufMVTable_Interlace_MV8 */
extern "C" __attribute__((visibility("default"))) void* tab_m_HufMVTable_Interlace_MV8 = NULL;

/* Demangled: SetMotionFieldBFrame */
extern "C" __attribute__((visibility("default"))) int SetMotionFieldBFrame(void) {
    ALOGD("SetMotionFieldBFrame() called");
    return 0;
}

/* Exported Object: gaSubsampleBicubic_asm */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBicubic_asm = NULL;

/* Demangled: SWVC1QueryDynamicSwitchSetting */
extern "C" __attribute__((visibility("default"))) int SWVC1QueryDynamicSwitchSetting(void) {
    ALOGD("SWVC1QueryDynamicSwitchSetting() called");
    return 0;
}

/* Demangled: decodeIInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeIInterlaceV2(void) {
    ALOGD("decodeIInterlaceV2() called");
    return 0;
}

/* Demangled: decodeDCACPredInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeDCACPredInterlaceV2(void) {
    ALOGD("decodeDCACPredInterlaceV2() called");
    return 0;
}

/* Demangled: wmvDEBUG_PrintRectangle16 */
extern "C" __attribute__((visibility("default"))) int wmvDEBUG_PrintRectangle16(void) {
    ALOGD("wmvDEBUG_PrintRectangle16() called");
    return 0;
}

/* Exported Object: gaReconstructionLevels */
extern "C" __attribute__((visibility("default"))) void* gaReconstructionLevels = NULL;

/* Demangled: decodeMBOverheadOfPVOP_FieldPicture */
extern "C" __attribute__((visibility("default"))) int decodeMBOverheadOfPVOP_FieldPicture(void) {
    ALOGD("decodeMBOverheadOfPVOP_FieldPicture() called");
    return 0;
}

/* Demangled: PredictFieldBotRightMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldBotRightMVInterlaceV2(void) {
    ALOGD("PredictFieldBotRightMVInterlaceV2() called");
    return 0;
}

/* Demangled: FetchPixels_iFrame */
extern "C" __attribute__((visibility("default"))) int FetchPixels_iFrame(void) {
    ALOGD("FetchPixels_iFrame() called");
    return 0;
}

/* Demangled: ParseIntraBlock_WMV3 */
extern "C" __attribute__((visibility("default"))) int ParseIntraBlock_WMV3(void) {
    ALOGD("ParseIntraBlock_WMV3() called");
    return 0;
}

/* Demangled: PredictFieldTopLeftMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFieldTopLeftMVInterlaceV2(void) {
    ALOGD("PredictFieldTopLeftMVInterlaceV2() called");
    return 0;
}

/* Demangled: g_Interpolate4ByteRowBilinear */
extern "C" __attribute__((visibility("default"))) int g_Interpolate4ByteRowBilinear(void) {
    ALOGD("g_Interpolate4ByteRowBilinear() called");
    return 0;
}

/* Demangled: FilterRow_Double16_ASM */
extern "C" __attribute__((visibility("default"))) int FilterRow_Double16_ASM(void) {
    ALOGD("FilterRow_Double16_ASM() called");
    return 0;
}

/* Exported Object: tab_m_hufInterlaceFrame2MVBP1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame2MVBP1 = NULL;

/* Exported Object: tab_m_hufInterlaceFrame2MVBP2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame2MVBP2 = NULL;

/* Exported Object: grgi4x8ZigzagInv_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInv_Interlace = NULL;

/* Exported Object: tab_m_hufInterlaceFrame2MVBP3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame2MVBP3 = NULL;

/* Demangled: DecodeIMB_WMV3 */
extern "C" __attribute__((visibility("default"))) int DecodeIMB_WMV3(void) {
    ALOGD("DecodeIMB_WMV3() called");
    return 0;
}

/* Exported Object: grgi4x8ZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInv = NULL;

/* Exported Object: tab_m_hufInterlaceFrame2MVBP4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufInterlaceFrame2MVBP4 = NULL;

/* Demangled: decodeBFieldMode */
extern "C" __attribute__((visibility("default"))) int decodeBFieldMode(void) {
    ALOGD("decodeBFieldMode() called");
    return 0;
}

/* Demangled: decodePFieldMode */
extern "C" __attribute__((visibility("default"))) int decodePFieldMode(void) {
    ALOGD("decodePFieldMode() called");
    return 0;
}

/* Demangled: g_IDCTDec8x4_v1plus_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x4_v1plus_asm(void) {
    ALOGD("g_IDCTDec8x4_v1plus_asm() called");
    return 0;
}

/* Demangled: g_OverlapBlockHorizontalEdge_C */
extern "C" __attribute__((visibility("default"))) int g_OverlapBlockHorizontalEdge_C(void) {
    ALOGD("g_OverlapBlockHorizontalEdge_C() called");
    return 0;
}

/* Demangled: Dec_B_MBs */
extern "C" __attribute__((visibility("default"))) int Dec_B_MBs(void) {
    ALOGD("Dec_B_MBs() called");
    return 0;
}

/* Exported Object: s_iSubblkPatternLUT */
extern "C" __attribute__((visibility("default"))) void* s_iSubblkPatternLUT = NULL;

/* Demangled: VC1CalcMemSize */
extern "C" __attribute__((visibility("default"))) int VC1CalcMemSize(void) {
    ALOGD("VC1CalcMemSize() called");
    return 0;
}

/* Demangled: MotionCompMB_1MV_WMV3 */
extern "C" __attribute__((visibility("default"))) int MotionCompMB_1MV_WMV3(void) {
    ALOGD("MotionCompMB_1MV_WMV3() called");
    return 0;
}

/* Demangled: ParseIntraBlock_WMVA */
extern "C" __attribute__((visibility("default"))) int ParseIntraBlock_WMVA(void) {
    ALOGD("ParseIntraBlock_WMVA() called");
    return 0;
}

/* Demangled: Decode_InterBlocNxN */
extern "C" __attribute__((visibility("default"))) int Decode_InterBlocNxN(void) {
    ALOGD("Decode_InterBlocNxN() called");
    return 0;
}

/* Demangled: SetSliceWMVA */
extern "C" __attribute__((visibility("default"))) int SetSliceWMVA(void) {
    ALOGD("SetSliceWMVA() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRunIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRunIntraY_HghMt = NULL;

/* Demangled: ParseIntraBlock_WMVA_new */
extern "C" __attribute__((visibility("default"))) int ParseIntraBlock_WMVA_new(void) {
    ALOGD("ParseIntraBlock_WMVA_new() called");
    return 0;
}

/* Demangled: Parse_Block4x4 */
extern "C" __attribute__((visibility("default"))) int Parse_Block4x4(void) {
    ALOGD("Parse_Block4x4() called");
    return 0;
}

/* Demangled: WMVideoDecDecodeData */
extern "C" __attribute__((visibility("default"))) int WMVideoDecDecodeData(void) {
    ALOGD("WMVideoDecDecodeData() called");
    return 0;
}

/* Demangled: AdjustReconRange_new */
extern "C" __attribute__((visibility("default"))) int AdjustReconRange_new(void) {
    ALOGD("AdjustReconRange_new() called");
    return 0;
}

/* Demangled: FilterColumnTab */
extern "C" __attribute__((visibility("default"))) int FilterColumnTab(void) {
    ALOGD("FilterColumnTab() called");
    return 0;
}

/* Demangled: decodePInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodePInterlaceV2(void) {
    ALOGD("decodePInterlaceV2() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufICBPCYTable */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufICBPCYTable = NULL;

/* Demangled: Parse_Block4x8 */
extern "C" __attribute__((visibility("default"))) int Parse_Block4x8(void) {
    ALOGD("Parse_Block4x8() called");
    return 0;
}

/* Demangled: DecodeIMB_WMVA */
extern "C" __attribute__((visibility("default"))) int DecodeIMB_WMVA(void) {
    ALOGD("DecodeIMB_WMVA() called");
    return 0;
}

/* Exported Object: ff_msmp4_dc_luma_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_luma_vlc_index_0_table = NULL;

/* Demangled: VC1_Memcpy */
extern "C" __attribute__((visibility("default"))) int VC1_Memcpy(void) {
    ALOGD("VC1_Memcpy() called");
    return 0;
}

/* Demangled: g_InterpolateVariableRefBicubic_C */
extern "C" __attribute__((visibility("default"))) int g_InterpolateVariableRefBicubic_C(void) {
    ALOGD("g_InterpolateVariableRefBicubic_C() called");
    return 0;
}

/* Demangled: PullBackFieldBlockMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackFieldBlockMotionVector(void) {
    ALOGD("PullBackFieldBlockMotionVector() called");
    return 0;
}

/* Demangled: HuffmanTab_ddload_WMVA */
extern "C" __attribute__((visibility("default"))) int HuffmanTab_ddload_WMVA(void) {
    ALOGD("HuffmanTab_ddload_WMVA() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfRunAtLevel_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevel_HghMt = NULL;

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevelIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevelIntraY_HghRate = NULL;

/* Demangled: g_InitDecGlobalVars */
extern "C" __attribute__((visibility("default"))) int g_InitDecGlobalVars(void) {
    ALOGD("g_InitDecGlobalVars() called");
    return 0;
}

/* Exported Object: ff_vc1_ac_coeff_table_index_4_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_4_table = NULL;

/* Demangled: GetVC1DecoderAPI */
extern "C" __attribute__((visibility("default"))) int GetVC1DecoderAPI(void) {
    ALOGD("GetVC1DecoderAPI() called");
    return 0;
}

/* Demangled: g_InterpolateVariableBlockBilinear_C */
extern "C" __attribute__((visibility("default"))) int g_InterpolateVariableBlockBilinear_C(void) {
    ALOGD("g_InterpolateVariableBlockBilinear_C() called");
    return 0;
}

/* Demangled: VC1DecoderGetNextDisplay */
extern "C" __attribute__((visibility("default"))) int VC1DecoderGetNextDisplay(void) {
    ALOGD("VC1DecoderGetNextDisplay() called");
    return 0;
}

/* Demangled: FilterColumn */
extern "C" __attribute__((visibility("default"))) int FilterColumn(void) {
    ALOGD("FilterColumn() called");
    return 0;
}

/* Demangled: PredictFrameBotRightMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFrameBotRightMVInterlaceV2(void) {
    ALOGD("PredictFrameBotRightMVInterlaceV2() called");
    return 0;
}

/* Demangled: UpdateDCStepSize */
extern "C" __attribute__((visibility("default"))) int UpdateDCStepSize(void) {
    ALOGD("UpdateDCStepSize() called");
    return 0;
}

/* Demangled: FilterEdgeShortTagBlock */
extern "C" __attribute__((visibility("default"))) int FilterEdgeShortTagBlock(void) {
    ALOGD("FilterEdgeShortTagBlock() called");
    return 0;
}

/* Exported Object: aAppearance */
extern "C" __attribute__((visibility("default"))) void* aAppearance = NULL;

/* Demangled: IsIntraPredY */
extern "C" __attribute__((visibility("default"))) int IsIntraPredY(void) {
    ALOGD("IsIntraPredY() called");
    return 0;
}

/* Demangled: ComputeFieldMVFromDiffMVInterlaceV2B */
extern "C" __attribute__((visibility("default"))) int ComputeFieldMVFromDiffMVInterlaceV2B(void) {
    ALOGD("ComputeFieldMVFromDiffMVInterlaceV2B() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfRunAtLevel_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfRunAtLevel_Talking = NULL;

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRun_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRun_MMIDRATE = NULL;

/* Exported Object: grgi8x4ZigzagInv_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInv_Prog = NULL;

/* Demangled: setVlcTableInfo */
extern "C" __attribute__((visibility("default"))) int setVlcTableInfo(void) {
    ALOGD("setVlcTableInfo() called");
    return 0;
}

/* Demangled: g_IDCTDec4x8_DC_16bit_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x8_DC_16bit_asm(void) {
    ALOGD("g_IDCTDec4x8_DC_16bit_asm() called");
    return 0;
}

/* Demangled: DecodeSkipBitX9 */
extern "C" __attribute__((visibility("default"))) int DecodeSkipBitX9(void) {
    ALOGD("DecodeSkipBitX9() called");
    return 0;
}

/* Exported Object: ff_vc1_ttmb_vlc_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttmb_vlc_index_0_table = NULL;

/* Demangled: VC1SwDecDecode */
extern "C" __attribute__((visibility("default"))) int VC1SwDecDecode(void) {
    ALOGD("VC1SwDecDecode() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBMode1MV1 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV1 = NULL;

/* Demangled: ScaleLeftPredForDQuantInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int ScaleLeftPredForDQuantInterlaceV2(void) {
    ALOGD("ScaleLeftPredForDQuantInterlaceV2() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBMode1MV2 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV2 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBMode1MV3 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV3 = NULL;

/* Demangled: ScaleNearPredForward */
extern "C" __attribute__((visibility("default"))) int ScaleNearPredForward(void) {
    ALOGD("ScaleNearPredForward() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBMode1MV4 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV4 = NULL;

/* Demangled: ParsePMB_iFrame */
extern "C" __attribute__((visibility("default"))) int ParsePMB_iFrame(void) {
    ALOGD("ParsePMB_iFrame() called");
    return 0;
}

/* Demangled: OverlapMBs */
extern "C" __attribute__((visibility("default"))) int OverlapMBs(void) {
    ALOGD("OverlapMBs() called");
    return 0;
}

/* Exported Object: tab_m_hufFieldPictureMBMode1MV5 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV5 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBMode1MV6 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV6 = NULL;

/* Exported Object: dec_m_hufInterlaceFrame2MVBP1 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame2MVBP1 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBMode1MV7 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV7 = NULL;

/* Demangled: MotionCompFrame4MvInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int MotionCompFrame4MvInterlaceV2(void) {
    ALOGD("MotionCompFrame4MvInterlaceV2() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame2MVBP2 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame2MVBP2 = NULL;

/* Exported Object: tab_m_hufFieldPictureMBMode1MV8 */
extern "C" __attribute__((visibility("default"))) void* tab_m_hufFieldPictureMBMode1MV8 = NULL;

/* Demangled: PullbackChromaMV */
extern "C" __attribute__((visibility("default"))) int PullbackChromaMV(void) {
    ALOGD("PullbackChromaMV() called");
    return 0;
}

/* Demangled: Dec_B_MB_iField */
extern "C" __attribute__((visibility("default"))) int Dec_B_MB_iField(void) {
    ALOGD("Dec_B_MB_iField() called");
    return 0;
}

/* Exported Object: dec_m_hufInterlaceFrame2MVBP3 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame2MVBP3 = NULL;

/* Exported Object: dec_m_hufInterlaceFrame2MVBP4 */
extern "C" __attribute__((visibility("default"))) void* dec_m_hufInterlaceFrame2MVBP4 = NULL;

/* Demangled: PullbackChromaMVEx */
extern "C" __attribute__((visibility("default"))) int PullbackChromaMVEx(void) {
    ALOGD("PullbackChromaMVEx() called");
    return 0;
}

/* Exported Object: grgi4x8ZigzagInvRotated_Prog */
extern "C" __attribute__((visibility("default"))) void* grgi4x8ZigzagInvRotated_Prog = NULL;

/* Exported Object: ff_msmp4_dc_luma_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_luma_vlc_index_1_table = NULL;

/* Demangled: AllocatePictureCYUV420 */
extern "C" __attribute__((visibility("default"))) int AllocatePictureCYUV420(void) {
    ALOGD("AllocatePictureCYUV420() called");
    return 0;
}

/* Demangled: PullBackFieldModeMotionVector */
extern "C" __attribute__((visibility("default"))) int PullBackFieldModeMotionVector(void) {
    ALOGD("PullBackFieldModeMotionVector() called");
    return 0;
}

/* Demangled: FilterColumnChroma */
extern "C" __attribute__((visibility("default"))) int FilterColumnChroma(void) {
    ALOGD("FilterColumnChroma() called");
    return 0;
}

/* Exported Object: ff_vc1_ac_coeff_table_index_5_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_5_table = NULL;

/* Exported Object: grgiVerticalZigzagInvRotated_NEW */
extern "C" __attribute__((visibility("default"))) void* grgiVerticalZigzagInvRotated_NEW = NULL;

/* Demangled: g_pixelMean_64BytesOneLoop_V2_UV_asm */
extern "C" __attribute__((visibility("default"))) int g_pixelMean_64BytesOneLoop_V2_UV_asm(void) {
    ALOGD("g_pixelMean_64BytesOneLoop_V2_UV_asm() called");
    return 0;
}

/* Exported Object: aNullPredWts_WMV */
extern "C" __attribute__((visibility("default"))) void* aNullPredWts_WMV = NULL;

/* Demangled: DecodePMB_iField */
extern "C" __attribute__((visibility("default"))) int DecodePMB_iField(void) {
    ALOGD("DecodePMB_iField() called");
    return 0;
}

/* Demangled: VodecConstruct */
extern "C" __attribute__((visibility("default"))) int VodecConstruct(void) {
    ALOGD("VodecConstruct() called");
    return 0;
}

/* Demangled: FetchPixels_to_progressive */
extern "C" __attribute__((visibility("default"))) int FetchPixels_to_progressive(void) {
    ALOGD("FetchPixels_to_progressive() called");
    return 0;
}

/* Demangled: g_MotionCompZeroMotion_WMV */
extern "C" __attribute__((visibility("default"))) int g_MotionCompZeroMotion_WMV(void) {
    ALOGD("g_MotionCompZeroMotion_WMV() called");
    return 0;
}

/* Exported Object: grgiZigzagInv_NEW_I */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInv_NEW_I = NULL;

/* Demangled: ChromaMVFieldMode */
extern "C" __attribute__((visibility("default"))) int ChromaMVFieldMode(void) {
    ALOGD("ChromaMVFieldMode() called");
    return 0;
}

/* Exported Object: grgi4x4ZigzagInvRotated */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInvRotated = NULL;

/* Demangled: InterpolateMB_WMV3 */
extern "C" __attribute__((visibility("default"))) int InterpolateMB_WMV3(void) {
    ALOGD("InterpolateMB_WMV3() called");
    return 0;
}

/* Demangled: DecodePanScanInfo */
extern "C" __attribute__((visibility("default"))) int DecodePanScanInfo(void) {
    ALOGD("DecodePanScanInfo() called");
    return 0;
}

/* Exported Object: ff_vc1_ttmb_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttmb_vlc_index_1_table = NULL;

/* Demangled: vc1dec_mt_frame */
extern "C" __attribute__((visibility("default"))) int vc1dec_mt_frame(void) {
    ALOGD("vc1dec_mt_frame() called");
    return 0;
}

/* Demangled: WMV_ESC_Decoding_LeShi */
extern "C" __attribute__((visibility("default"))) int WMV_ESC_Decoding_LeShi(void) {
    ALOGD("WMV_ESC_Decoding_LeShi() called");
    return 0;
}

/* Demangled: ComputeMVFromDiffMV */
extern "C" __attribute__((visibility("default"))) int ComputeMVFromDiffMV(void) {
    ALOGD("ComputeMVFromDiffMV() called");
    return 0;
}

/* Demangled: EightPixel_Filter_Hor */
extern "C" __attribute__((visibility("default"))) int EightPixel_Filter_Hor(void) {
    ALOGD("EightPixel_Filter_Hor() called");
    return 0;
}

/* Exported Object: sm_rgLevelAtIndx_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndx_Talking = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: PerformACPredictionInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PerformACPredictionInterlaceV2(void) {
    ALOGD("PerformACPredictionInterlaceV2() called");
    return 0;
}

/* Demangled: ProcessInterBlock */
extern "C" __attribute__((visibility("default"))) int ProcessInterBlock(void) {
    ALOGD("ProcessInterBlock() called");
    return 0;
}

/* Exported Object: gacCodeLengthsIntraHighRate */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsIntraHighRate = NULL;

/* Demangled: vc1dec_thread2 */
extern "C" __attribute__((visibility("default"))) int vc1dec_thread2(void) {
    ALOGD("vc1dec_thread2() called");
    return 0;
}

/* Demangled: g_4x4IDCT_DCOnly */
extern "C" __attribute__((visibility("default"))) int g_4x4IDCT_DCOnly(void) {
    ALOGD("g_4x4IDCT_DCOnly() called");
    return 0;
}

/* Exported Object: ff_msmp4_dc_chroma_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_msmp4_dc_chroma_vlc_index_1_table = NULL;

/* Demangled: decodeMV_Interlace */
extern "C" __attribute__((visibility("default"))) int decodeMV_Interlace(void) {
    ALOGD("decodeMV_Interlace() called");
    return 0;
}

/* Demangled: FetchPixels_iFrame_field_to_frame */
extern "C" __attribute__((visibility("default"))) int FetchPixels_iFrame_field_to_frame(void) {
    ALOGD("FetchPixels_iFrame_field_to_frame() called");
    return 0;
}

/* Demangled: vc1dec_thread3 */
extern "C" __attribute__((visibility("default"))) int vc1dec_thread3(void) {
    ALOGD("vc1dec_thread3() called");
    return 0;
}

/* Exported Object: tt_m_hufInterlaceFrame1MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame1MvMBMode0 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame4MvMBMode0 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame4MvMBMode0 = NULL;

/* Demangled: IntraFieldMB_organize_iFrame_U8 */
extern "C" __attribute__((visibility("default"))) int IntraFieldMB_organize_iFrame_U8(void) {
    ALOGD("IntraFieldMB_organize_iFrame_U8() called");
    return 0;
}

/* Exported Object: tt_m_hufInterlaceFrame1MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame1MvMBMode1 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame4MvMBMode1 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame4MvMBMode1 = NULL;

/* Demangled: PredictMVB */
extern "C" __attribute__((visibility("default"))) int PredictMVB(void) {
    ALOGD("PredictMVB() called");
    return 0;
}

/* Exported Object: tt_m_hufInterlaceFrame1MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame1MvMBMode2 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame4MvMBMode2 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame4MvMBMode2 = NULL;

/* Demangled: SixteenPixel_Filter_Ver */
extern "C" __attribute__((visibility("default"))) int SixteenPixel_Filter_Ver(void) {
    ALOGD("SixteenPixel_Filter_Ver() called");
    return 0;
}

/* Demangled: decodeSequenceHead_Advanced */
extern "C" __attribute__((visibility("default"))) int decodeSequenceHead_Advanced(void) {
    ALOGD("decodeSequenceHead_Advanced() called");
    return 0;
}

/* Demangled: DirectFieldModeMV */
extern "C" __attribute__((visibility("default"))) int DirectFieldModeMV(void) {
    ALOGD("DirectFieldModeMV() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRunIntraY_HghRate */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRunIntraY_HghRate = NULL;

/* Exported Object: tt_m_hufInterlaceFrame1MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame1MvMBMode3 = NULL;

/* Exported Object: tt_m_hufInterlaceFrame4MvMBMode3 */
extern "C" __attribute__((visibility("default"))) void* tt_m_hufInterlaceFrame4MvMBMode3 = NULL;

/* Demangled: WMVDecResolution */
extern "C" __attribute__((visibility("default"))) int WMVDecResolution(void) {
    ALOGD("WMVDecResolution() called");
    return 0;
}

/* Exported Object: TOPPREDFLAGS */
extern "C" __attribute__((visibility("default"))) void* TOPPREDFLAGS = NULL;

/* Demangled: g_IDCTDec8x4_DC_16bit_asm */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec8x4_DC_16bit_asm(void) {
    ALOGD("g_IDCTDec8x4_DC_16bit_asm() called");
    return 0;
}

/* Demangled: decodeFieldHeadFieldPicture */
extern "C" __attribute__((visibility("default"))) int decodeFieldHeadFieldPicture(void) {
    ALOGD("decodeFieldHeadFieldPicture() called");
    return 0;
}

/* Exported Object: ff_vc1_subblkpat_vlc_index_2_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_subblkpat_vlc_index_2_table = NULL;

/* Demangled: hw_print */
extern "C" __attribute__((visibility("default"))) int hw_print(void) {
    ALOGD("hw_print() called");
    return 0;
}

/* Demangled: decodeBInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int decodeBInterlaceV2(void) {
    ALOGD("decodeBInterlaceV2() called");
    return 0;
}

/* Demangled: PredictFrameTopLeftMVInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int PredictFrameTopLeftMVInterlaceV2(void) {
    ALOGD("PredictFrameTopLeftMVInterlaceV2() called");
    return 0;
}

/* Exported Object: ff_vc1_ac_coeff_table_index_0_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ac_coeff_table_index_0_table = NULL;

/* Demangled: AssignDirectMode */
extern "C" __attribute__((visibility("default"))) int AssignDirectMode(void) {
    ALOGD("AssignDirectMode() called");
    return 0;
}

/* Demangled: g_InterpolateFieldMB */
extern "C" __attribute__((visibility("default"))) int g_InterpolateFieldMB(void) {
    ALOGD("g_InterpolateFieldMB() called");
    return 0;
}

/* Exported Object: dec_WMVA_HufPCBPCYTable_V9_1 */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_V9_1 = NULL;

/* Demangled: ProcessIntraResidual_new */
extern "C" __attribute__((visibility("default"))) int ProcessIntraResidual_new(void) {
    ALOGD("ProcessIntraResidual_new() called");
    return 0;
}

/* Exported Object: dec_WMVA_HufPCBPCYTable_V9_2 */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_V9_2 = NULL;

/* Exported Object: dec_WMVA_HufPCBPCYTable_V9_3 */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_V9_3 = NULL;

/* Exported Object: sm_rgLevelAtIndx_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgLevelAtIndx_HghMt = NULL;

/* Exported Object: dec_WMVA_HufPCBPCYTable_V9_4 */
extern "C" __attribute__((visibility("default"))) void* dec_WMVA_HufPCBPCYTable_V9_4 = NULL;

/* Exported Object: grgiZigzagInv_NEW_Prog */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInv_NEW_Prog = NULL;

/* Exported Object: gaSubsampleBicubic_ori */
extern "C" __attribute__((visibility("default"))) void* gaSubsampleBicubic_ori = NULL;

/* Demangled: decodeDQuantStepsize */
extern "C" __attribute__((visibility("default"))) int decodeDQuantStepsize(void) {
    ALOGD("decodeDQuantStepsize() called");
    return 0;
}

/* Demangled: ParseStartCodeChunk */
extern "C" __attribute__((visibility("default"))) int ParseStartCodeChunk(void) {
    ALOGD("ParseStartCodeChunk() called");
    return 0;
}

/* Demangled: DecodeIMBInterlaceV2 */
extern "C" __attribute__((visibility("default"))) int DecodeIMBInterlaceV2(void) {
    ALOGD("DecodeIMBInterlaceV2() called");
    return 0;
}

/* Exported Object: __ARM_asm.debug_abbrev */
extern "C" __attribute__((visibility("default"))) void* obj___ARM_asm_debug_abbrev __asm__("__ARM_asm.debug_abbrev") = NULL;

/* Exported Object: grgi8x4ZigzagInvRotated */
extern "C" __attribute__((visibility("default"))) void* grgi8x4ZigzagInvRotated = NULL;

/* Demangled: SetIBlockBoundaryForDCPred */
extern "C" __attribute__((visibility("default"))) int SetIBlockBoundaryForDCPred(void) {
    ALOGD("SetIBlockBoundaryForDCPred() called");
    return 0;
}

/* Exported Object: grgi4x4ZigzagInv_Interlace */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInv_Interlace = NULL;

/* Exported Object: orderArrayH */
extern "C" __attribute__((visibility("default"))) void* orderArrayH = NULL;

/* Exported Object: gacCodeLengthsJoint */
extern "C" __attribute__((visibility("default"))) void* gacCodeLengthsJoint = NULL;

/* Demangled: DecodeVOPDQuant */
extern "C" __attribute__((visibility("default"))) int DecodeVOPDQuant(void) {
    ALOGD("DecodeVOPDQuant() called");
    return 0;
}

/* Demangled: VC1SwDecMallocSlice */
extern "C" __attribute__((visibility("default"))) int VC1SwDecMallocSlice(void) {
    ALOGD("VC1SwDecMallocSlice() called");
    return 0;
}

/* Exported Object: grgiZigzagInvRotated */
extern "C" __attribute__((visibility("default"))) void* grgiZigzagInvRotated = NULL;

/* Demangled: g_InterpolateVariableBlockBilinear_C_opti */
extern "C" __attribute__((visibility("default"))) int g_InterpolateVariableBlockBilinear_C_opti(void) {
    ALOGD("g_InterpolateVariableBlockBilinear_C_opti() called");
    return 0;
}

/* Demangled: DecodeMBHead_PVOP */
extern "C" __attribute__((visibility("default"))) int DecodeMBHead_PVOP(void) {
    ALOGD("DecodeMBHead_PVOP() called");
    return 0;
}

/* Demangled: OverlapMBnew_leshi_iFrame */
extern "C" __attribute__((visibility("default"))) int OverlapMBnew_leshi_iFrame(void) {
    ALOGD("OverlapMBnew_leshi_iFrame() called");
    return 0;
}

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRunIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRunIntraY_MMIDRATE = NULL;

/* Demangled: g_InterpolateVariableBlockBilinear_8x8_asm_R7 */
extern "C" __attribute__((visibility("default"))) int g_InterpolateVariableBlockBilinear_8x8_asm_R7(void) {
    ALOGD("g_InterpolateVariableBlockBilinear_8x8_asm_R7() called");
    return 0;
}

/* Demangled: g_InterpolateVariableBlockBilinear_8x8_asm_R8 */
extern "C" __attribute__((visibility("default"))) int g_InterpolateVariableBlockBilinear_8x8_asm_R8(void) {
    ALOGD("g_InterpolateVariableBlockBilinear_8x8_asm_R8() called");
    return 0;
}

/* Exported Object: ff_vc1_mv_diff_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_mv_diff_vlc_index_1_table = NULL;

/* Exported Object: ff_vc1_ttblk_vlc_index_1_table */
extern "C" __attribute__((visibility("default"))) void* ff_vc1_ttblk_vlc_index_1_table = NULL;

/* Demangled: g_IDCT8x8_Dec16_C */
extern "C" __attribute__((visibility("default"))) int g_IDCT8x8_Dec16_C(void) {
    ALOGD("g_IDCT8x8_Dec16_C() called");
    return 0;
}

/* Demangled: g_InterpolateBlockBicubic_cent_v2_asm */
extern "C" __attribute__((visibility("default"))) int g_InterpolateBlockBicubic_cent_v2_asm(void) {
    ALOGD("g_InterpolateBlockBicubic_cent_v2_asm() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: WMV_ESC_Decoding_inline2 */
extern "C" __attribute__((visibility("default"))) int WMV_ESC_Decoding_inline2(void) {
    ALOGD("WMV_ESC_Decoding_inline2() called");
    return 0;
}

/* Demangled: g_FilterHorizontalEdgeV9 */
extern "C" __attribute__((visibility("default"))) int g_FilterHorizontalEdgeV9(void) {
    ALOGD("g_FilterHorizontalEdgeV9() called");
    return 0;
}

/* Exported Object: orderArrayV */
extern "C" __attribute__((visibility("default"))) void* orderArrayV = NULL;

/* Demangled: VC1DecoderCloseAdapt */
extern "C" __attribute__((visibility("default"))) int VC1DecoderCloseAdapt(void) {
    ALOGD("VC1DecoderCloseAdapt() called");
    return 0;
}

/* Exported Object: s_pXformLUT */
extern "C" __attribute__((visibility("default"))) void* s_pXformLUT = NULL;

/* Demangled: initFrameWidthAndHeightDependentPointers */
extern "C" __attribute__((visibility("default"))) int initFrameWidthAndHeightDependentPointers(void) {
    ALOGD("initFrameWidthAndHeightDependentPointers() called");
    return 0;
}

/* Exported Object: LEFTPREDFLAGS */
extern "C" __attribute__((visibility("default"))) void* LEFTPREDFLAGS = NULL;

/* Demangled: decodePredictIntraCBP */
extern "C" __attribute__((visibility("default"))) int decodePredictIntraCBP(void) {
    ALOGD("decodePredictIntraCBP() called");
    return 0;
}

/* Exported Object: tab_WMVA_HufPCBPCYTable_LowRate */
extern "C" __attribute__((visibility("default"))) void* tab_WMVA_HufPCBPCYTable_LowRate = NULL;

/* Demangled: iPredCalNotFirstMB */
extern "C" __attribute__((visibility("default"))) int iPredCalNotFirstMB(void) {
    ALOGD("iPredCalNotFirstMB() called");
    return 0;
}

/* Demangled: __aeabi_idivmod */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_idivmod(void) __asm__("__aeabi_idivmod");
int fn___aeabi_idivmod(void) {
    ALOGD("__aeabi_idivmod() called");
    return 0;
}

/* Demangled: SetupFieldPictureMVScaling */
extern "C" __attribute__((visibility("default"))) int SetupFieldPictureMVScaling(void) {
    ALOGD("SetupFieldPictureMVScaling() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfLevelAtRunIntraY_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRunIntraY_HghMt = NULL;

/* Exported Object: sm_rgIfLastNumOfRunAtLevelIntraY_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfRunAtLevelIntraY_Talking = NULL;

/* Demangled: VC1SwDecFreeYUVBuffer */
extern "C" __attribute__((visibility("default"))) int VC1SwDecFreeYUVBuffer(void) {
    ALOGD("VC1SwDecFreeYUVBuffer() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfLevelAtRun_HghMt */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRun_HghMt = NULL;

/* Exported Object: sm_rgIfLastNumOfLevelAtRun_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRun_MMIDRATE = NULL;

/* Demangled: Decode_Block8x4 */
extern "C" __attribute__((visibility("default"))) int Decode_Block8x4(void) {
    ALOGD("Decode_Block8x4() called");
    return 0;
}

/* Demangled: PredictFieldModeForwardBMVEx */
extern "C" __attribute__((visibility("default"))) int PredictFieldModeForwardBMVEx(void) {
    ALOGD("PredictFieldModeForwardBMVEx() called");
    return 0;
}

/* Demangled: initSeqIndependentMemory */
extern "C" __attribute__((visibility("default"))) int initSeqIndependentMemory(void) {
    ALOGD("initSeqIndependentMemory() called");
    return 0;
}

/* Demangled: IsIntraPredUV */
extern "C" __attribute__((visibility("default"))) int IsIntraPredUV(void) {
    ALOGD("IsIntraPredUV() called");
    return 0;
}

/* Demangled: g_IDCTDec4x4_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x4_AddError(void) {
    ALOGD("g_IDCTDec4x4_AddError() called");
    return 0;
}

/* Demangled: g_IDCTDec4x8_AddError */
extern "C" __attribute__((visibility("default"))) int g_IDCTDec4x8_AddError(void) {
    ALOGD("g_IDCTDec4x8_AddError() called");
    return 0;
}

/* Demangled: g_4x8IDCTDec_C */
extern "C" __attribute__((visibility("default"))) int g_4x8IDCTDec_C(void) {
    ALOGD("g_4x8IDCTDec_C() called");
    return 0;
}

/* Demangled: g_4x4IDCTDec_C */
extern "C" __attribute__((visibility("default"))) int g_4x4IDCTDec_C(void) {
    ALOGD("g_4x4IDCTDec_C() called");
    return 0;
}

/* Exported Object: grgi4x4ZigzagInv */
extern "C" __attribute__((visibility("default"))) void* grgi4x4ZigzagInv = NULL;

/* Exported Object: sm_rgIfNotLastNumOfLevelAtRun_Talking */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfNotLastNumOfLevelAtRun_Talking = NULL;

/* Exported Object: LOOPFILTERFLAGS_WMV9 */
extern "C" __attribute__((visibility("default"))) void* LOOPFILTERFLAGS_WMV9 = NULL;

/* Demangled: Decode_Block8x8 */
extern "C" __attribute__((visibility("default"))) int Decode_Block8x8(void) {
    ALOGD("Decode_Block8x8() called");
    return 0;
}

/* Exported Object: sm_rgIfLastNumOfLevelAtRunIntraY_MMIDRATE */
extern "C" __attribute__((visibility("default"))) void* sm_rgIfLastNumOfLevelAtRunIntraY_MMIDRATE = NULL;

/* Demangled: DecodeVOPType_WMVA */
extern "C" __attribute__((visibility("default"))) int DecodeVOPType_WMVA(void) {
    ALOGD("DecodeVOPType_WMVA() called");
    return 0;
}

/* Demangled: MotionCompFieldMode1MVB */
extern "C" __attribute__((visibility("default"))) int MotionCompFieldMode1MVB(void) {
    ALOGD("MotionCompFieldMode1MVB() called");
    return 0;
}
