/*
 * Reverse-Engineered Source for: libstagefright_soft_mpeg4enc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_soft_mpeg4enc"

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
#include "libstagefright_soft_mpeg4enc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: CandidateSelection */
extern "C" __attribute__((visibility("default"))) int CandidateSelection(void) {
    ALOGD("CandidateSelection() called");
    return 0;
}

/* Demangled: EncodeSlice */
extern "C" __attribute__((visibility("default"))) int EncodeSlice(void) {
    ALOGD("EncodeSlice() called");
    return 0;
}

/* Demangled: PVUpdateVBVDelay(tagvideoEncControls*, float) */
extern "C" __attribute__((visibility("default"))) int _Z16PVUpdateVBVDelayP19tagvideoEncControlsf(void) {
    ALOGD("_Z16PVUpdateVBVDelayP19tagvideoEncControlsf() called");
    return 0;
}

/* Demangled: BlockCodeCoeff_Normal */
extern "C" __attribute__((visibility("default"))) int BlockCodeCoeff_Normal(void) {
    ALOGD("BlockCodeCoeff_Normal() called");
    return 0;
}

/* Demangled: PutLevelCoeff_Intra */
extern "C" __attribute__((visibility("default"))) int PutLevelCoeff_Intra(void) {
    ALOGD("PutLevelCoeff_Intra() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: GetHalfPelBlkRegion */
extern "C" __attribute__((visibility("default"))) int GetHalfPelBlkRegion(void) {
    ALOGD("GetHalfPelBlkRegion() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: CodeMB_MPEG */
extern "C" __attribute__((visibility("default"))) int CodeMB_MPEG(void) {
    ALOGD("CodeMB_MPEG() called");
    return 0;
}

/* Demangled: idct_row3Intra */
extern "C" __attribute__((visibility("default"))) int idct_row3Intra(void) {
    ALOGD("idct_row3Intra() called");
    return 0;
}

/* Demangled: FindMin */
extern "C" __attribute__((visibility("default"))) int FindMin(void) {
    ALOGD("FindMin() called");
    return 0;
}

/* Demangled: HalfPel2_SAD_MB */
extern "C" __attribute__((visibility("default"))) int HalfPel2_SAD_MB(void) {
    ALOGD("HalfPel2_SAD_MB() called");
    return 0;
}

/* Demangled: idct_row0x10Intra */
extern "C" __attribute__((visibility("default"))) int idct_row0x10Intra(void) {
    ALOGD("idct_row0x10Intra() called");
    return 0;
}

/* Demangled: idct_row1Inter */
extern "C" __attribute__((visibility("default"))) int idct_row1Inter(void) {
    ALOGD("idct_row1Inter() called");
    return 0;
}

/* Demangled: idct_rowInter */
extern "C" __attribute__((visibility("default"))) int idct_rowInter(void) {
    ALOGD("idct_rowInter() called");
    return 0;
}

/* Demangled: GetHalfPelMBRegion_C */
extern "C" __attribute__((visibility("default"))) int GetHalfPelMBRegion_C(void) {
    ALOGD("GetHalfPelMBRegion_C() called");
    return 0;
}

/* Demangled: PutSkippedBlock */
extern "C" __attribute__((visibility("default"))) int PutSkippedBlock(void) {
    ALOGD("PutSkippedBlock() called");
    return 0;
}

/* Demangled: find_pmvs */
extern "C" __attribute__((visibility("default"))) int find_pmvs(void) {
    ALOGD("find_pmvs() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4EncoderD1Ev(void) {
    ALOGD("_ZN7android16SoftMPEG4EncoderD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: BlockIDCTMotionComp */
extern "C" __attribute__((visibility("default"))) int BlockIDCTMotionComp(void) {
    ALOGD("BlockIDCTMotionComp() called");
    return 0;
}

/* Demangled: idct_row0x20Inter */
extern "C" __attribute__((visibility("default"))) int idct_row0x20Inter(void) {
    ALOGD("idct_row0x20Inter() called");
    return 0;
}

/* Demangled: idct_row1zmv */
extern "C" __attribute__((visibility("default"))) int idct_row1zmv(void) {
    ALOGD("idct_row1zmv() called");
    return 0;
}

/* Demangled: MotionEstimation */
extern "C" __attribute__((visibility("default"))) int MotionEstimation(void) {
    ALOGD("MotionEstimation() called");
    return 0;
}

/* Demangled: EncodeGOVHeader(tagBitstream*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15EncodeGOVHeaderP12tagBitstreamj(void) {
    ALOGD("_Z15EncodeGOVHeaderP12tagBitstreamj() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: EncodeSliceDataPartMode */
extern "C" __attribute__((visibility("default"))) int EncodeSliceDataPartMode(void) {
    ALOGD("EncodeSliceDataPartMode() called");
    return 0;
}

/* Demangled: FindHalfPelMB */
extern "C" __attribute__((visibility("default"))) int FindHalfPelMB(void) {
    ALOGD("FindHalfPelMB() called");
    return 0;
}

/* Demangled: BlockCodeCoeff_ShortHeader */
extern "C" __attribute__((visibility("default"))) int BlockCodeCoeff_ShortHeader(void) {
    ALOGD("BlockCodeCoeff_ShortHeader() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: CodeMB_H263 */
extern "C" __attribute__((visibility("default"))) int CodeMB_H263(void) {
    ALOGD("CodeMB_H263() called");
    return 0;
}

/* Demangled: BlockQuantDequantMPEGDCIntra */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantMPEGDCIntra(void) {
    ALOGD("BlockQuantDequantMPEGDCIntra() called");
    return 0;
}

/* Demangled: PutCoeff_Inter_Last */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Inter_Last(void) {
    ALOGD("PutCoeff_Inter_Last() called");
    return 0;
}

/* Demangled: PVInitVideoEncoder */
extern "C" __attribute__((visibility("default"))) int PVInitVideoEncoder(void) {
    ALOGD("PVInitVideoEncoder() called");
    return 0;
}

/* Demangled: BitstreamMpeg4ByteAlignStuffing */
extern "C" __attribute__((visibility("default"))) int BitstreamMpeg4ByteAlignStuffing(void) {
    ALOGD("BitstreamMpeg4ByteAlignStuffing() called");
    return 0;
}

/* Demangled: fullsearch */
extern "C" __attribute__((visibility("default"))) int fullsearch(void) {
    ALOGD("fullsearch() called");
    return 0;
}

/* Demangled: PutRunCoeff_Intra */
extern "C" __attribute__((visibility("default"))) int PutRunCoeff_Intra(void) {
    ALOGD("PutRunCoeff_Intra() called");
    return 0;
}

/* Demangled: EncodeSliceCombinedMode */
extern "C" __attribute__((visibility("default"))) int EncodeSliceCombinedMode(void) {
    ALOGD("EncodeSliceCombinedMode() called");
    return 0;
}

/* Demangled: getBlockSAV */
extern "C" __attribute__((visibility("default"))) int getBlockSAV(void) {
    ALOGD("getBlockSAV() called");
    return 0;
}

/* Demangled: idct_row0x40Inter */
extern "C" __attribute__((visibility("default"))) int idct_row0x40Inter(void) {
    ALOGD("idct_row0x40Inter() called");
    return 0;
}

/* Demangled: Copy_B_into_Vop */
extern "C" __attribute__((visibility("default"))) int Copy_B_into_Vop(void) {
    ALOGD("Copy_B_into_Vop() called");
    return 0;
}

/* Demangled: PutCoeff_Intra_Last */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Intra_Last(void) {
    ALOGD("PutCoeff_Intra_Last() called");
    return 0;
}

/* Demangled: PVEncodeVideoFrame */
extern "C" __attribute__((visibility("default"))) int PVEncodeVideoFrame(void) {
    ALOGD("PVEncodeVideoFrame() called");
    return 0;
}

/* Demangled: EncodeGOBHeader(tagVideoEncData*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z15EncodeGOBHeaderP15tagVideoEncDataiii(void) {
    ALOGD("_Z15EncodeGOBHeaderP15tagVideoEncDataiii() called");
    return 0;
}

/* Demangled: idct_col0x20 */
extern "C" __attribute__((visibility("default"))) int idct_col0x20(void) {
    ALOGD("idct_col0x20() called");
    return 0;
}

/* Demangled: IntraDC_dpcm */
extern "C" __attribute__((visibility("default"))) int IntraDC_dpcm(void) {
    ALOGD("IntraDC_dpcm() called");
    return 0;
}

/* Demangled: idct_row4Inter */
extern "C" __attribute__((visibility("default"))) int idct_row4Inter(void) {
    ALOGD("idct_row4Inter() called");
    return 0;
}

/* Demangled: EncGetPredOutside */
extern "C" __attribute__((visibility("default"))) int EncGetPredOutside(void) {
    ALOGD("EncGetPredOutside() called");
    return 0;
}

/* Demangled: PutMCBPC_Intra */
extern "C" __attribute__((visibility("default"))) int PutMCBPC_Intra(void) {
    ALOGD("PutMCBPC_Intra() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder7onResetEv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder7onResetEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: BitstreamSaveWord */
extern "C" __attribute__((visibility("default"))) int BitstreamSaveWord(void) {
    ALOGD("BitstreamSaveWord() called");
    return 0;
}

/* Demangled: BitstreamUseOverrunBuffer */
extern "C" __attribute__((visibility("default"))) int BitstreamUseOverrunBuffer(void) {
    ALOGD("BitstreamUseOverrunBuffer() called");
    return 0;
}

/* Demangled: PVGetH263ProfileLevelID */
extern "C" __attribute__((visibility("default"))) int PVGetH263ProfileLevelID(void) {
    ALOGD("PVGetH263ProfileLevelID() called");
    return 0;
}

/* Demangled: SAD_Blk_HalfPel_C */
extern "C" __attribute__((visibility("default"))) int SAD_Blk_HalfPel_C(void) {
    ALOGD("SAD_Blk_HalfPel_C() called");
    return 0;
}

/* Demangled: SAD_MB_HalfPel_Cxh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HalfPel_Cxh(void) {
    ALOGD("SAD_MB_HalfPel_Cxh() called");
    return 0;
}

/* Demangled: EncodeVOS_Start(tagvideoEncControls*) */
extern "C" __attribute__((visibility("default"))) int _Z15EncodeVOS_StartP19tagvideoEncControls(void) {
    ALOGD("_Z15EncodeVOS_StartP19tagvideoEncControls() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFM_Collectxh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFM_Collectxh(void) {
    ALOGD("SAD_MB_HP_HTFM_Collectxh() called");
    return 0;
}

/* Demangled: BlockDCT_AANwSub */
extern "C" __attribute__((visibility("default"))) int BlockDCT_AANwSub(void) {
    ALOGD("BlockDCT_AANwSub() called");
    return 0;
}

/* Demangled: idct_col0x40 */
extern "C" __attribute__((visibility("default"))) int idct_col0x40(void) {
    ALOGD("idct_col0x40() called");
    return 0;
}

/* Demangled: updateRC_PostProc(rateControl*, tagVideoEncData*) */
extern "C" __attribute__((visibility("default"))) int _Z17updateRC_PostProcP11rateControlP15tagVideoEncData(void) {
    ALOGD("_Z17updateRC_PostProcP11rateControlP15tagVideoEncData() called");
    return 0;
}

/* Demangled: ComputeMBSum_C */
extern "C" __attribute__((visibility("default"))) int ComputeMBSum_C(void) {
    ALOGD("ComputeMBSum_C() called");
    return 0;
}

/* Demangled: RC_VopUpdateStat */
extern "C" __attribute__((visibility("default"))) int RC_VopUpdateStat(void) {
    ALOGD("RC_VopUpdateStat() called");
    return 0;
}

/* Demangled: Copy_MB_into_Vop */
extern "C" __attribute__((visibility("default"))) int Copy_MB_into_Vop(void) {
    ALOGD("Copy_MB_into_Vop() called");
    return 0;
}

/* Demangled: WriteMVcomponent */
extern "C" __attribute__((visibility("default"))) int WriteMVcomponent(void) {
    ALOGD("WriteMVcomponent() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: idct_rowzmv */
extern "C" __attribute__((visibility("default"))) int idct_rowzmv(void) {
    ALOGD("idct_rowzmv() called");
    return 0;
}

/* Demangled: UpdateSkipNextFrame(tagVideoEncData*, unsigned int*, int*, PV_STATUS) */
extern "C" __attribute__((visibility("default"))) int _Z19UpdateSkipNextFrameP15tagVideoEncDataPjPi9PV_STATUS(void) {
    ALOGD("_Z19UpdateSkipNextFrameP15tagVideoEncDataPjPi9PV_STATUS() called");
    return 0;
}

/* Demangled: RasterIntraUpdate */
extern "C" __attribute__((visibility("default"))) int RasterIntraUpdate(void) {
    ALOGD("RasterIntraUpdate() called");
    return 0;
}

/* Demangled: PutCBPY */
extern "C" __attribute__((visibility("default"))) int PutCBPY(void) {
    ALOGD("PutCBPY() called");
    return 0;
}

/* Demangled: PutDCsize_lum */
extern "C" __attribute__((visibility("default"))) int PutDCsize_lum(void) {
    ALOGD("PutDCsize_lum() called");
    return 0;
}

/* Demangled: PVUpdateBitRate */
extern "C" __attribute__((visibility("default"))) int PVUpdateBitRate(void) {
    ALOGD("PVUpdateBitRate() called");
    return 0;
}

/* Demangled: PutCoeff_Inter */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Inter(void) {
    ALOGD("PutCoeff_Inter() called");
    return 0;
}

/* Demangled: EncPrediction_INTER4V */
extern "C" __attribute__((visibility("default"))) int EncPrediction_INTER4V(void) {
    ALOGD("EncPrediction_INTER4V() called");
    return 0;
}

/* Demangled: PutRunCoeff_Inter_Last */
extern "C" __attribute__((visibility("default"))) int PutRunCoeff_Inter_Last(void) {
    ALOGD("PutRunCoeff_Inter_Last() called");
    return 0;
}

/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: idct_row2Intra */
extern "C" __attribute__((visibility("default"))) int idct_row2Intra(void) {
    ALOGD("idct_row2Intra() called");
    return 0;
}

/* Demangled: getMotionCompensatedMB */
extern "C" __attribute__((visibility("default"))) int getMotionCompensatedMB(void) {
    ALOGD("getMotionCompensatedMB() called");
    return 0;
}

/* Demangled: PutCoeff_Inter_RVLC_Last */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Inter_RVLC_Last(void) {
    ALOGD("PutCoeff_Inter_RVLC_Last() called");
    return 0;
}

/* Demangled: PaddingEdge */
extern "C" __attribute__((visibility("default"))) int PaddingEdge(void) {
    ALOGD("PaddingEdge() called");
    return 0;
}

/* Demangled: HalfPel2_SAD_Blk */
extern "C" __attribute__((visibility("default"))) int HalfPel2_SAD_Blk(void) {
    ALOGD("HalfPel2_SAD_Blk() called");
    return 0;
}

/* Demangled: PutRunCoeff_Intra_Last */
extern "C" __attribute__((visibility("default"))) int PutRunCoeff_Intra_Last(void) {
    ALOGD("PutRunCoeff_Intra_Last() called");
    return 0;
}

/* Demangled: idct_row0Inter */
extern "C" __attribute__((visibility("default"))) int idct_row0Inter(void) {
    ALOGD("idct_row0Inter() called");
    return 0;
}

/* Demangled: BlockQuantDequantH263DCIntra */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantH263DCIntra(void) {
    ALOGD("BlockQuantDequantH263DCIntra() called");
    return 0;
}

/* Demangled: RC_ResetSkipNextFrame */
extern "C" __attribute__((visibility("default"))) int RC_ResetSkipNextFrame(void) {
    ALOGD("RC_ResetSkipNextFrame() called");
    return 0;
}

/* Demangled: get_MB */
extern "C" __attribute__((visibility("default"))) int get_MB(void) {
    ALOGD("get_MB() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder13onQueueFilledEj(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder13onQueueFilledEj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: BlockQuantDequantMPEGIntra */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantMPEGIntra(void) {
    ALOGD("BlockQuantDequantMPEGIntra() called");
    return 0;
}

/* Demangled: ResetIntraUpdateRegion */
extern "C" __attribute__((visibility("default"))) int ResetIntraUpdateRegion(void) {
    ALOGD("ResetIntraUpdateRegion() called");
    return 0;
}

/* Demangled: SAD_MB_HTFM_Collect */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HTFM_Collect(void) {
    ALOGD("SAD_MB_HTFM_Collect() called");
    return 0;
}

/* Demangled: MBVlcEncodeDataPar_I_VOP */
extern "C" __attribute__((visibility("default"))) int MBVlcEncodeDataPar_I_VOP(void) {
    ALOGD("MBVlcEncodeDataPar_I_VOP() called");
    return 0;
}

/* Demangled: MBVlcEncodeDataPar_P_VOP */
extern "C" __attribute__((visibility("default"))) int MBVlcEncodeDataPar_P_VOP(void) {
    ALOGD("MBVlcEncodeDataPar_P_VOP() called");
    return 0;
}

/* Demangled: PutCoeff_Inter_RVLC */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Inter_RVLC(void) {
    ALOGD("PutCoeff_Inter_RVLC() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4EncoderD2Ev(void) {
    ALOGD("_ZN7android16SoftMPEG4EncoderD2Ev() called");
    return 0;
}

/* Demangled: idct_row4zmv */
extern "C" __attribute__((visibility("default"))) int idct_row4zmv(void) {
    ALOGD("idct_row4zmv() called");
    return 0;
}

/* Demangled: EncodeVop_NoME(tagVideoEncData*) */
extern "C" __attribute__((visibility("default"))) int _Z14EncodeVop_NoMEP15tagVideoEncData(void) {
    ALOGD("_Z14EncodeVop_NoMEP15tagVideoEncData() called");
    return 0;
}

/* Demangled: BitstreamPrependPacket */
extern "C" __attribute__((visibility("default"))) int BitstreamPrependPacket(void) {
    ALOGD("BitstreamPrependPacket() called");
    return 0;
}

/* Demangled: BitstreamPutGT16Bits */
extern "C" __attribute__((visibility("default"))) int BitstreamPutGT16Bits(void) {
    ALOGD("BitstreamPutGT16Bits() called");
    return 0;
}

/* Demangled: Block2x2DCT_AANwSub */
extern "C" __attribute__((visibility("default"))) int Block2x2DCT_AANwSub(void) {
    ALOGD("Block2x2DCT_AANwSub() called");
    return 0;
}

/* Demangled: EncodeVop */
extern "C" __attribute__((visibility("default"))) int EncodeVop(void) {
    ALOGD("EncodeVop() called");
    return 0;
}

/* Demangled: PutCoeff_Intra_RVLC */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Intra_RVLC(void) {
    ALOGD("PutCoeff_Intra_RVLC() called");
    return 0;
}

/* Demangled: RunLevel */
extern "C" __attribute__((visibility("default"))) int RunLevel(void) {
    ALOGD("RunLevel() called");
    return 0;
}

/* Demangled: idct_row0x10zmv */
extern "C" __attribute__((visibility("default"))) int idct_row0x10zmv(void) {
    ALOGD("idct_row0x10zmv() called");
    return 0;
}

/* Demangled: PVEncodeSlice */
extern "C" __attribute__((visibility("default"))) int PVEncodeSlice(void) {
    ALOGD("PVEncodeSlice() called");
    return 0;
}

/* Demangled: GetPredAdvBy0x0 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvBy0x0(void) {
    ALOGD("GetPredAdvBy0x0() called");
    return 0;
}

/* Demangled: BitstreamShortHeaderByteAlignStuffing */
extern "C" __attribute__((visibility("default"))) int BitstreamShortHeaderByteAlignStuffing(void) {
    ALOGD("BitstreamShortHeaderByteAlignStuffing() called");
    return 0;
}

/* Demangled: GetPredAdvBy0x1 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvBy0x1(void) {
    ALOGD("GetPredAdvBy0x1() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFMyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFMyh(void) {
    ALOGD("SAD_MB_HP_HTFMyh() called");
    return 0;
}

/* Demangled: BitstreamSavePartial */
extern "C" __attribute__((visibility("default"))) int BitstreamSavePartial(void) {
    ALOGD("BitstreamSavePartial() called");
    return 0;
}

/* Demangled: PVEncodeFrameSet */
extern "C" __attribute__((visibility("default"))) int PVEncodeFrameSet(void) {
    ALOGD("PVEncodeFrameSet() called");
    return 0;
}

/* Demangled: ResetIntraUpdate */
extern "C" __attribute__((visibility("default"))) int ResetIntraUpdate(void) {
    ALOGD("ResetIntraUpdate() called");
    return 0;
}

/* Demangled: PutLevelCoeff_Inter */
extern "C" __attribute__((visibility("default"))) int PutLevelCoeff_Inter(void) {
    ALOGD("PutLevelCoeff_Inter() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: BlockQuantDequantH263Intra */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantH263Intra(void) {
    ALOGD("BlockQuantDequantH263Intra() called");
    return 0;
}

/* Demangled: PutDCsize_chrom */
extern "C" __attribute__((visibility("default"))) int PutDCsize_chrom(void) {
    ALOGD("PutDCsize_chrom() called");
    return 0;
}

/* Demangled: BitstreamFlushBits */
extern "C" __attribute__((visibility("default"))) int BitstreamFlushBits(void) {
    ALOGD("BitstreamFlushBits() called");
    return 0;
}

/* Demangled: BitstreamSetOverrunBuffer */
extern "C" __attribute__((visibility("default"))) int BitstreamSetOverrunBuffer(void) {
    ALOGD("BitstreamSetOverrunBuffer() called");
    return 0;
}

/* Demangled: idct_row3Inter */
extern "C" __attribute__((visibility("default"))) int idct_row3Inter(void) {
    ALOGD("idct_row3Inter() called");
    return 0;
}

/* Demangled: DetermineVopType(tagVideoEncData*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16DetermineVopTypeP15tagVideoEncDatai(void) {
    ALOGD("_Z16DetermineVopTypeP15tagVideoEncDatai() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SoftMPEG4Encoder::InputBufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEEE = NULL;

/* Demangled: Block1x1DCTwSub */
extern "C" __attribute__((visibility("default"))) int Block1x1DCTwSub(void) {
    ALOGD("Block1x1DCTwSub() called");
    return 0;
}

/* Demangled: idct_col0 */
extern "C" __attribute__((visibility("default"))) int idct_col0(void) {
    ALOGD("idct_col0() called");
    return 0;
}

/* Demangled: BitstreamEncReset */
extern "C" __attribute__((visibility("default"))) int BitstreamEncReset(void) {
    ALOGD("BitstreamEncReset() called");
    return 0;
}

/* Demangled: idct_col(short*) */
extern "C" __attribute__((visibility("default"))) int _Z8idct_colPs(void) {
    ALOGD("_Z8idct_colPs() called");
    return 0;
}

/* Demangled: idct_col1 */
extern "C" __attribute__((visibility("default"))) int idct_col1(void) {
    ALOGD("idct_col1() called");
    return 0;
}

/* Demangled: idct_row0x10Inter */
extern "C" __attribute__((visibility("default"))) int idct_row0x10Inter(void) {
    ALOGD("idct_row0x10Inter() called");
    return 0;
}

/* Demangled: idct_row2zmv */
extern "C" __attribute__((visibility("default"))) int idct_row2zmv(void) {
    ALOGD("idct_row2zmv() called");
    return 0;
}

/* Demangled: PVUpdateIFrameInterval */
extern "C" __attribute__((visibility("default"))) int PVUpdateIFrameInterval(void) {
    ALOGD("PVUpdateIFrameInterval() called");
    return 0;
}

/* Demangled: SetProfile_BufferSize(tagVideoEncData*, float, int) */
extern "C" __attribute__((visibility("default"))) int _Z21SetProfile_BufferSizeP15tagVideoEncDatafi(void) {
    ALOGD("_Z21SetProfile_BufferSizeP15tagVideoEncDatafi() called");
    return 0;
}

/* Demangled: MoveNeighborSAD */
extern "C" __attribute__((visibility("default"))) int MoveNeighborSAD(void) {
    ALOGD("MoveNeighborSAD() called");
    return 0;
}

/* Demangled: BitstreamAppendPacket */
extern "C" __attribute__((visibility("default"))) int BitstreamAppendPacket(void) {
    ALOGD("BitstreamAppendPacket() called");
    return 0;
}

/* Demangled: idct_col2 */
extern "C" __attribute__((visibility("default"))) int idct_col2(void) {
    ALOGD("idct_col2() called");
    return 0;
}

/* Demangled: RC_GetSkipNextFrame */
extern "C" __attribute__((visibility("default"))) int RC_GetSkipNextFrame(void) {
    ALOGD("RC_GetSkipNextFrame() called");
    return 0;
}

/* Demangled: VOS_End(tagvideoEncControls*) */
extern "C" __attribute__((visibility("default"))) int _Z7VOS_EndP19tagvideoEncControls(void) {
    ALOGD("_Z7VOS_EndP19tagvideoEncControls() called");
    return 0;
}

/* Demangled: targetBitCalculation(void*) */
extern "C" __attribute__((visibility("default"))) int _Z20targetBitCalculationPv(void) {
    ALOGD("_Z20targetBitCalculationPv() called");
    return 0;
}

/* Demangled: HTFMPrepareCurMB */
extern "C" __attribute__((visibility("default"))) int HTFMPrepareCurMB(void) {
    ALOGD("HTFMPrepareCurMB() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: idct_col3 */
extern "C" __attribute__((visibility("default"))) int idct_col3(void) {
    ALOGD("idct_col3() called");
    return 0;
}

/* Demangled: idct_row0x20zmv */
extern "C" __attribute__((visibility("default"))) int idct_row0x20zmv(void) {
    ALOGD("idct_row0x20zmv() called");
    return 0;
}

/* Demangled: idct_col4 */
extern "C" __attribute__((visibility("default"))) int idct_col4(void) {
    ALOGD("idct_col4() called");
    return 0;
}

/* Demangled: RC_UpdateBXRCParams */
extern "C" __attribute__((visibility("default"))) int RC_UpdateBXRCParams(void) {
    ALOGD("RC_UpdateBXRCParams() called");
    return 0;
}

/* Demangled: SAD_Macroblock_C */
extern "C" __attribute__((visibility("default"))) int SAD_Macroblock_C(void) {
    ALOGD("SAD_Macroblock_C() called");
    return 0;
}

/* Demangled: MBMotionSearch */
extern "C" __attribute__((visibility("default"))) int MBMotionSearch(void) {
    ALOGD("MBMotionSearch() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::releaseEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder14releaseEncoderEv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder14releaseEncoderEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: BitstreamCloseEnc */
extern "C" __attribute__((visibility("default"))) int BitstreamCloseEnc(void) {
    ALOGD("BitstreamCloseEnc() called");
    return 0;
}

/* Demangled: BitstreamGetPos */
extern "C" __attribute__((visibility("default"))) int BitstreamGetPos(void) {
    ALOGD("BitstreamGetPos() called");
    return 0;
}

/* Demangled: RC_UpdateBuffer */
extern "C" __attribute__((visibility("default"))) int RC_UpdateBuffer(void) {
    ALOGD("RC_UpdateBuffer() called");
    return 0;
}

/* Demangled: FindHalfPelBlk */
extern "C" __attribute__((visibility("default"))) int FindHalfPelBlk(void) {
    ALOGD("FindHalfPelBlk() called");
    return 0;
}

/* Demangled: idct_row1Intra */
extern "C" __attribute__((visibility("default"))) int idct_row1Intra(void) {
    ALOGD("idct_row1Intra() called");
    return 0;
}

/* Demangled: idct_rowIntra */
extern "C" __attribute__((visibility("default"))) int idct_rowIntra(void) {
    ALOGD("idct_rowIntra() called");
    return 0;
}

/* Demangled: BlockQuantDequantMPEGDCInter */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantMPEGDCInter(void) {
    ALOGD("BlockQuantDequantMPEGDCInter() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFM_Collectxhyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFM_Collectxhyh(void) {
    ALOGD("SAD_MB_HP_HTFM_Collectxhyh() called");
    return 0;
}

/* Demangled: ChooseMode_C */
extern "C" __attribute__((visibility("default"))) int ChooseMode_C(void) {
    ALOGD("ChooseMode_C() called");
    return 0;
}

/* Demangled: PVUpdateEncFrameRate */
extern "C" __attribute__((visibility("default"))) int PVUpdateEncFrameRate(void) {
    ALOGD("PVUpdateEncFrameRate() called");
    return 0;
}

/* Demangled: RC_Cleanup */
extern "C" __attribute__((visibility("default"))) int RC_Cleanup(void) {
    ALOGD("RC_Cleanup() called");
    return 0;
}

/* Demangled: PutRunCoeff_Inter */
extern "C" __attribute__((visibility("default"))) int PutRunCoeff_Inter(void) {
    ALOGD("PutRunCoeff_Inter() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: idct_row0x20Intra */
extern "C" __attribute__((visibility("default"))) int idct_row0x20Intra(void) {
    ALOGD("idct_row0x20Intra() called");
    return 0;
}

/* Demangled: cal_dc_scalerENC */
extern "C" __attribute__((visibility("default"))) int cal_dc_scalerENC(void) {
    ALOGD("cal_dc_scalerENC() called");
    return 0;
}

/* Demangled: BitstreamRepos */
extern "C" __attribute__((visibility("default"))) int BitstreamRepos(void) {
    ALOGD("BitstreamRepos() called");
    return 0;
}

/* Demangled: PVGetEncMemoryUsage */
extern "C" __attribute__((visibility("default"))) int PVGetEncMemoryUsage(void) {
    ALOGD("PVGetEncMemoryUsage() called");
    return 0;
}

/* Demangled: CalcThreshold */
extern "C" __attribute__((visibility("default"))) int CalcThreshold(void) {
    ALOGD("CalcThreshold() called");
    return 0;
}

/* Demangled: fullsearchBlk */
extern "C" __attribute__((visibility("default"))) int fullsearchBlk(void) {
    ALOGD("fullsearchBlk() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SoftMPEG4Encoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16SoftMPEG4EncoderE = NULL;

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: idct_col0x10 */
extern "C" __attribute__((visibility("default"))) int idct_col0x10(void) {
    ALOGD("idct_col0x10() called");
    return 0;
}

/* Demangled: idct_row0zmv */
extern "C" __attribute__((visibility("default"))) int idct_row0zmv(void) {
    ALOGD("idct_row0zmv() called");
    return 0;
}

/* Demangled: EncPrediction_INTER */
extern "C" __attribute__((visibility("default"))) int EncPrediction_INTER(void) {
    ALOGD("EncPrediction_INTER() called");
    return 0;
}

/* Demangled: SAD_MB_HTFM */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HTFM(void) {
    ALOGD("SAD_MB_HTFM() called");
    return 0;
}

/* Demangled: PutMCBPC_Inter */
extern "C" __attribute__((visibility("default"))) int PutMCBPC_Inter(void) {
    ALOGD("PutMCBPC_Inter() called");
    return 0;
}

/* Demangled: BlockDCT_AANIntra */
extern "C" __attribute__((visibility("default"))) int BlockDCT_AANIntra(void) {
    ALOGD("BlockDCT_AANIntra() called");
    return 0;
}

/* Demangled: MBVlcEncodeCombined_I_VOP */
extern "C" __attribute__((visibility("default"))) int MBVlcEncodeCombined_I_VOP(void) {
    ALOGD("MBVlcEncodeCombined_I_VOP() called");
    return 0;
}

/* Demangled: MBVlcEncodeCombined_P_VOP */
extern "C" __attribute__((visibility("default"))) int MBVlcEncodeCombined_P_VOP(void) {
    ALOGD("MBVlcEncodeCombined_P_VOP() called");
    return 0;
}

/* Demangled: BitStreamCreateEnc */
extern "C" __attribute__((visibility("default"))) int BitStreamCreateEnc(void) {
    ALOGD("BitStreamCreateEnc() called");
    return 0;
}

/* Demangled: EncodeFrameDataPartMode */
extern "C" __attribute__((visibility("default"))) int EncodeFrameDataPartMode(void) {
    ALOGD("EncodeFrameDataPartMode() called");
    return 0;
}

/* Demangled: GetPredAdvBy1x0 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvBy1x0(void) {
    ALOGD("GetPredAdvBy1x0() called");
    return 0;
}

/* Demangled: PVGetOverrunBuffer */
extern "C" __attribute__((visibility("default"))) int PVGetOverrunBuffer(void) {
    ALOGD("PVGetOverrunBuffer() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::SoftMPEG4Encoder(char const*, char const*, OMX_VIDEO_CODINGTYPE, char const*, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4EncoderC1EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftMPEG4EncoderC1EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: BitstreamAppendPacketNoOffset */
extern "C" __attribute__((visibility("default"))) int BitstreamAppendPacketNoOffset(void) {
    ALOGD("BitstreamAppendPacketNoOffset() called");
    return 0;
}

/* Demangled: BitstreamPutBits */
extern "C" __attribute__((visibility("default"))) int BitstreamPutBits(void) {
    ALOGD("BitstreamPutBits() called");
    return 0;
}

/* Demangled: Block2x2DCT_AANIntra */
extern "C" __attribute__((visibility("default"))) int Block2x2DCT_AANIntra(void) {
    ALOGD("Block2x2DCT_AANIntra() called");
    return 0;
}

/* Demangled: idct_row0x40Intra */
extern "C" __attribute__((visibility("default"))) int idct_row0x40Intra(void) {
    ALOGD("idct_row0x40Intra() called");
    return 0;
}

/* Demangled: GetPredAdvBy1x1 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvBy1x1(void) {
    ALOGD("GetPredAdvBy1x1() called");
    return 0;
}

/* Demangled: RC_Initialize */
extern "C" __attribute__((visibility("default"))) int RC_Initialize(void) {
    ALOGD("RC_Initialize() called");
    return 0;
}

/* Demangled: RC_VopQPSetting */
extern "C" __attribute__((visibility("default"))) int RC_VopQPSetting(void) {
    ALOGD("RC_VopQPSetting() called");
    return 0;
}

/* Demangled: PrepareCurMB */
extern "C" __attribute__((visibility("default"))) int PrepareCurMB(void) {
    ALOGD("PrepareCurMB() called");
    return 0;
}

/* Demangled: PutCoeff_Intra_RVLC_Last */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Intra_RVLC_Last(void) {
    ALOGD("PutCoeff_Intra_RVLC_Last() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::SoftMPEG4Encoder(char const*, char const*, OMX_VIDEO_CODINGTYPE, char const*, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4EncoderC2EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftMPEG4EncoderC2EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: EncodeFrameCombinedMode */
extern "C" __attribute__((visibility("default"))) int EncodeFrameCombinedMode(void) {
    ALOGD("EncodeFrameCombinedMode() called");
    return 0;
}

/* Demangled: idct_row4Intra */
extern "C" __attribute__((visibility("default"))) int idct_row4Intra(void) {
    ALOGD("idct_row4Intra() called");
    return 0;
}

/* Demangled: SAD_MB_HalfPel_Cyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HalfPel_Cyh(void) {
    ALOGD("SAD_MB_HalfPel_Cyh() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFM_Collectyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFM_Collectyh(void) {
    ALOGD("SAD_MB_HP_HTFM_Collectyh() called");
    return 0;
}

/* Demangled: EncodeVOPHeader(tagBitstream*, tagVol*, tagVOP*) */
extern "C" __attribute__((visibility("default"))) int _Z15EncodeVOPHeaderP12tagBitstreamP6tagVolP6tagVOP(void) {
    ALOGD("_Z15EncodeVOPHeaderP12tagBitstreamP6tagVolP6tagVOP() called");
    return 0;
}

/* Demangled: PVGetMPEG4ProfileLevelID */
extern "C" __attribute__((visibility("default"))) int PVGetMPEG4ProfileLevelID(void) {
    ALOGD("PVGetMPEG4ProfileLevelID() called");
    return 0;
}

/* Demangled: getBlockSum */
extern "C" __attribute__((visibility("default"))) int getBlockSum(void) {
    ALOGD("getBlockSum() called");
    return 0;
}

/* Demangled: idct_row2Inter */
extern "C" __attribute__((visibility("default"))) int idct_row2Inter(void) {
    ALOGD("idct_row2Inter() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::initEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder13initEncParamsEv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder13initEncParamsEv() called");
    return 0;
}

/* Demangled: Block4x4DCT_AANIntra */
extern "C" __attribute__((visibility("default"))) int Block4x4DCT_AANIntra(void) {
    ALOGD("Block4x4DCT_AANIntra() called");
    return 0;
}

/* Demangled: PVGetVBVSize */
extern "C" __attribute__((visibility("default"))) int PVGetVBVSize(void) {
    ALOGD("PVGetVBVSize() called");
    return 0;
}

/* Demangled: InitHTFM */
extern "C" __attribute__((visibility("default"))) int InitHTFM(void) {
    ALOGD("InitHTFM() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFMxhyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFMxhyh(void) {
    ALOGD("SAD_MB_HP_HTFMxhyh() called");
    return 0;
}

/* Demangled: ScaleMVD */
extern "C" __attribute__((visibility("default"))) int ScaleMVD(void) {
    ALOGD("ScaleMVD() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4EncoderD0Ev(void) {
    ALOGD("_ZN7android16SoftMPEG4EncoderD0Ev() called");
    return 0;
}

/* Demangled: BlockQuantDequantH263DCInter */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantH263DCInter(void) {
    ALOGD("BlockQuantDequantH263DCInter() called");
    return 0;
}

/* Demangled: Copy_B_from_Vop */
extern "C" __attribute__((visibility("default"))) int Copy_B_from_Vop(void) {
    ALOGD("Copy_B_from_Vop() called");
    return 0;
}

/* Demangled: HalfPel1_SAD_MB */
extern "C" __attribute__((visibility("default"))) int HalfPel1_SAD_MB(void) {
    ALOGD("HalfPel1_SAD_MB() called");
    return 0;
}

/* Demangled: BlockQuantDequantMPEGInter */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantMPEGInter(void) {
    ALOGD("BlockQuantDequantMPEGInter() called");
    return 0;
}

/* Demangled: PutCoeff_Intra */
extern "C" __attribute__((visibility("default"))) int PutCoeff_Intra(void) {
    ALOGD("PutCoeff_Intra() called");
    return 0;
}

/* Demangled: idct_row0x40zmv */
extern "C" __attribute__((visibility("default"))) int idct_row0x40zmv(void) {
    ALOGD("idct_row0x40zmv() called");
    return 0;
}

/* Demangled: SaveRDSamples(tagMultiPass*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13SaveRDSamplesP12tagMultiPassi(void) {
    ALOGD("_Z13SaveRDSamplesP12tagMultiPassi() called");
    return 0;
}

/* Demangled: calculateQuantizer_Multipass(void*) */
extern "C" __attribute__((visibility("default"))) int _Z28calculateQuantizer_MultipassPv(void) {
    ALOGD("_Z28calculateQuantizer_MultipassPv() called");
    return 0;
}

/* Demangled: EncodeVideoPacketHeader */
extern "C" __attribute__((visibility("default"))) int EncodeVideoPacketHeader(void) {
    ALOGD("EncodeVideoPacketHeader() called");
    return 0;
}

/* Demangled: PVCleanUpVideoEncoder */
extern "C" __attribute__((visibility("default"))) int PVCleanUpVideoEncoder(void) {
    ALOGD("PVCleanUpVideoEncoder() called");
    return 0;
}

/* Demangled: PVGetDefaultEncOption */
extern "C" __attribute__((visibility("default"))) int PVGetDefaultEncOption(void) {
    ALOGD("PVGetDefaultEncOption() called");
    return 0;
}

/* Demangled: Sad8x8 */
extern "C" __attribute__((visibility("default"))) int Sad8x8(void) {
    ALOGD("Sad8x8() called");
    return 0;
}

/* Demangled: PVIFrameRequest */
extern "C" __attribute__((visibility("default"))) int PVIFrameRequest(void) {
    ALOGD("PVIFrameRequest() called");
    return 0;
}

/* Demangled: PutMV */
extern "C" __attribute__((visibility("default"))) int PutMV(void) {
    ALOGD("PutMV() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: HalfPel1_SAD_Blk */
extern "C" __attribute__((visibility("default"))) int HalfPel1_SAD_Blk(void) {
    ALOGD("HalfPel1_SAD_Blk() called");
    return 0;
}

/* Demangled: PutLevelCoeff_Inter_Last */
extern "C" __attribute__((visibility("default"))) int PutLevelCoeff_Inter_Last(void) {
    ALOGD("PutLevelCoeff_Inter_Last() called");
    return 0;
}

/* Demangled: EncodeShortHeader(tagBitstream*, tagVOP*) */
extern "C" __attribute__((visibility("default"))) int _Z17EncodeShortHeaderP12tagBitstreamP6tagVOP(void) {
    ALOGD("_Z17EncodeShortHeaderP12tagBitstreamP6tagVOP() called");
    return 0;
}

/* Demangled: idct_row0Intra */
extern "C" __attribute__((visibility("default"))) int idct_row0Intra(void) {
    ALOGD("idct_row0Intra() called");
    return 0;
}

/* Demangled: Copy_MB_from_Vop */
extern "C" __attribute__((visibility("default"))) int Copy_MB_from_Vop(void) {
    ALOGD("Copy_MB_from_Vop() called");
    return 0;
}

/* Demangled: android::SoftMPEG4Encoder::initEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftMPEG4Encoder11initEncoderEv(void) {
    ALOGD("_ZN7android16SoftMPEG4Encoder11initEncoderEv() called");
    return 0;
}

/* Demangled: BitstreamAppendEnc */
extern "C" __attribute__((visibility("default"))) int BitstreamAppendEnc(void) {
    ALOGD("BitstreamAppendEnc() called");
    return 0;
}

/* Demangled: Block4x4DCT_AANwSub */
extern "C" __attribute__((visibility("default"))) int Block4x4DCT_AANwSub(void) {
    ALOGD("Block4x4DCT_AANwSub() called");
    return 0;
}

/* Demangled: SAD_MB_HP_HTFMxh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HP_HTFMxh(void) {
    ALOGD("SAD_MB_HP_HTFMxh() called");
    return 0;
}

/* Demangled: BlockCodeCoeff_RVLC */
extern "C" __attribute__((visibility("default"))) int BlockCodeCoeff_RVLC(void) {
    ALOGD("BlockCodeCoeff_RVLC() called");
    return 0;
}

/* Demangled: updateRateControl(rateControl*, tagVideoEncData*) */
extern "C" __attribute__((visibility("default"))) int _Z17updateRateControlP11rateControlP15tagVideoEncData(void) {
    ALOGD("_Z17updateRateControlP11rateControlP15tagVideoEncData() called");
    return 0;
}

/* Demangled: BlockQuantDequantH263Inter */
extern "C" __attribute__((visibility("default"))) int BlockQuantDequantH263Inter(void) {
    ALOGD("BlockQuantDequantH263Inter() called");
    return 0;
}

/* Demangled: SAD_Block_C */
extern "C" __attribute__((visibility("default"))) int SAD_Block_C(void) {
    ALOGD("SAD_Block_C() called");
    return 0;
}

/* Demangled: SAD_MB_HalfPel_Cxhyh */
extern "C" __attribute__((visibility("default"))) int SAD_MB_HalfPel_Cxhyh(void) {
    ALOGD("SAD_MB_HalfPel_Cxhyh() called");
    return 0;
}

/* Demangled: UpdateHTFM */
extern "C" __attribute__((visibility("default"))) int UpdateHTFM(void) {
    ALOGD("UpdateHTFM() called");
    return 0;
}

/* Demangled: Block1x1DCTIntra */
extern "C" __attribute__((visibility("default"))) int Block1x1DCTIntra(void) {
    ALOGD("Block1x1DCTIntra() called");
    return 0;
}

/* Demangled: idct_row3zmv */
extern "C" __attribute__((visibility("default"))) int idct_row3zmv(void) {
    ALOGD("idct_row3zmv() called");
    return 0;
}

/* Demangled: PVGetMaxVideoFrameSize */
extern "C" __attribute__((visibility("default"))) int PVGetMaxVideoFrameSize(void) {
    ALOGD("PVGetMaxVideoFrameSize() called");
    return 0;
}

/* Demangled: PVUpdateNumIntraMBRefresh */
extern "C" __attribute__((visibility("default"))) int PVUpdateNumIntraMBRefresh(void) {
    ALOGD("PVUpdateNumIntraMBRefresh() called");
    return 0;
}

/* Demangled: EncPrediction_Chrom */
extern "C" __attribute__((visibility("default"))) int EncPrediction_Chrom(void) {
    ALOGD("EncPrediction_Chrom() called");
    return 0;
}

/* Demangled: PVGetHintTrack */
extern "C" __attribute__((visibility("default"))) int PVGetHintTrack(void) {
    ALOGD("PVGetHintTrack() called");
    return 0;
}

/* Demangled: PVGetVolHeader */
extern "C" __attribute__((visibility("default"))) int PVGetVolHeader(void) {
    ALOGD("PVGetVolHeader() called");
    return 0;
}

/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: DetermineCodingLayer(tagVideoEncData*, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20DetermineCodingLayerP15tagVideoEncDataPij(void) {
    ALOGD("_Z20DetermineCodingLayerP15tagVideoEncDataPij() called");
    return 0;
}

/* Demangled: DCACPred */
extern "C" __attribute__((visibility("default"))) int DCACPred(void) {
    ALOGD("DCACPred() called");
    return 0;
}

/* Demangled: PutLevelCoeff_Intra_Last */
extern "C" __attribute__((visibility("default"))) int PutLevelCoeff_Intra_Last(void) {
    ALOGD("PutLevelCoeff_Intra_Last() called");
    return 0;
}
