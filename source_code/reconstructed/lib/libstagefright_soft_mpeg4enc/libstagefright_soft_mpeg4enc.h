/*
 * Reverse-Engineered ABI Specification for: libstagefright_soft_mpeg4enc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_soft_mpeg4enc.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4ENC_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4ENC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: CandidateSelection */
/* Demangled: CandidateSelection */
int CandidateSelection(void);

/* Symbol: EncodeSlice */
/* Demangled: EncodeSlice */
int EncodeSlice(void);

/* Symbol: _Z16PVUpdateVBVDelayP19tagvideoEncControlsf */
/* Demangled: PVUpdateVBVDelay(tagvideoEncControls*, float) */
int _Z16PVUpdateVBVDelayP19tagvideoEncControlsf(void);

/* Symbol: BlockCodeCoeff_Normal */
/* Demangled: BlockCodeCoeff_Normal */
int BlockCodeCoeff_Normal(void);

/* Symbol: PutLevelCoeff_Intra */
/* Demangled: PutLevelCoeff_Intra */
int PutLevelCoeff_Intra(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: GetHalfPelBlkRegion */
/* Demangled: GetHalfPelBlkRegion */
int GetHalfPelBlkRegion(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE12do_constructEPvj(void);

/* Symbol: CodeMB_MPEG */
/* Demangled: CodeMB_MPEG */
int CodeMB_MPEG(void);

/* Symbol: idct_row3Intra */
/* Demangled: idct_row3Intra */
int idct_row3Intra(void);

/* Symbol: FindMin */
/* Demangled: FindMin */
int FindMin(void);

/* Symbol: HalfPel2_SAD_MB */
/* Demangled: HalfPel2_SAD_MB */
int HalfPel2_SAD_MB(void);

/* Symbol: idct_row0x10Intra */
/* Demangled: idct_row0x10Intra */
int idct_row0x10Intra(void);

/* Symbol: idct_row1Inter */
/* Demangled: idct_row1Inter */
int idct_row1Inter(void);

/* Symbol: idct_rowInter */
/* Demangled: idct_rowInter */
int idct_rowInter(void);

/* Symbol: GetHalfPelMBRegion_C */
/* Demangled: GetHalfPelMBRegion_C */
int GetHalfPelMBRegion_C(void);

/* Symbol: PutSkippedBlock */
/* Demangled: PutSkippedBlock */
int PutSkippedBlock(void);

/* Symbol: find_pmvs */
/* Demangled: find_pmvs */
int find_pmvs(void);

/* Symbol: _ZN7android16SoftMPEG4EncoderD1Ev */
/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
int _ZN7android16SoftMPEG4EncoderD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: BlockIDCTMotionComp */
/* Demangled: BlockIDCTMotionComp */
int BlockIDCTMotionComp(void);

/* Symbol: idct_row0x20Inter */
/* Demangled: idct_row0x20Inter */
int idct_row0x20Inter(void);

/* Symbol: idct_row1zmv */
/* Demangled: idct_row1zmv */
int idct_row1zmv(void);

/* Symbol: MotionEstimation */
/* Demangled: MotionEstimation */
int MotionEstimation(void);

/* Symbol: _Z15EncodeGOVHeaderP12tagBitstreamj */
/* Demangled: EncodeGOVHeader(tagBitstream*, unsigned int) */
int _Z15EncodeGOVHeaderP12tagBitstreamj(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftMPEG4Encoder::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftMPEG4Encoder20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void);

/* Symbol: EncodeSliceDataPartMode */
/* Demangled: EncodeSliceDataPartMode */
int EncodeSliceDataPartMode(void);

/* Symbol: FindHalfPelMB */
/* Demangled: FindHalfPelMB */
int FindHalfPelMB(void);

/* Symbol: BlockCodeCoeff_ShortHeader */
/* Demangled: BlockCodeCoeff_ShortHeader */
int BlockCodeCoeff_ShortHeader(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftMPEG4Encoder::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftMPEG4Encoder20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: CodeMB_H263 */
/* Demangled: CodeMB_H263 */
int CodeMB_H263(void);

/* Symbol: BlockQuantDequantMPEGDCIntra */
/* Demangled: BlockQuantDequantMPEGDCIntra */
int BlockQuantDequantMPEGDCIntra(void);

/* Symbol: PutCoeff_Inter_Last */
/* Demangled: PutCoeff_Inter_Last */
int PutCoeff_Inter_Last(void);

/* Symbol: PVInitVideoEncoder */
/* Demangled: PVInitVideoEncoder */
int PVInitVideoEncoder(void);

/* Symbol: BitstreamMpeg4ByteAlignStuffing */
/* Demangled: BitstreamMpeg4ByteAlignStuffing */
int BitstreamMpeg4ByteAlignStuffing(void);

/* Symbol: fullsearch */
/* Demangled: fullsearch */
int fullsearch(void);

/* Symbol: PutRunCoeff_Intra */
/* Demangled: PutRunCoeff_Intra */
int PutRunCoeff_Intra(void);

/* Symbol: EncodeSliceCombinedMode */
/* Demangled: EncodeSliceCombinedMode */
int EncodeSliceCombinedMode(void);

/* Symbol: getBlockSAV */
/* Demangled: getBlockSAV */
int getBlockSAV(void);

/* Symbol: idct_row0x40Inter */
/* Demangled: idct_row0x40Inter */
int idct_row0x40Inter(void);

/* Symbol: Copy_B_into_Vop */
/* Demangled: Copy_B_into_Vop */
int Copy_B_into_Vop(void);

/* Symbol: PutCoeff_Intra_Last */
/* Demangled: PutCoeff_Intra_Last */
int PutCoeff_Intra_Last(void);

/* Symbol: PVEncodeVideoFrame */
/* Demangled: PVEncodeVideoFrame */
int PVEncodeVideoFrame(void);

/* Symbol: _Z15EncodeGOBHeaderP15tagVideoEncDataiii */
/* Demangled: EncodeGOBHeader(tagVideoEncData*, int, int, int) */
int _Z15EncodeGOBHeaderP15tagVideoEncDataiii(void);

/* Symbol: idct_col0x20 */
/* Demangled: idct_col0x20 */
int idct_col0x20(void);

/* Symbol: IntraDC_dpcm */
/* Demangled: IntraDC_dpcm */
int IntraDC_dpcm(void);

/* Symbol: idct_row4Inter */
/* Demangled: idct_row4Inter */
int idct_row4Inter(void);

/* Symbol: EncGetPredOutside */
/* Demangled: EncGetPredOutside */
int EncGetPredOutside(void);

/* Symbol: PutMCBPC_Intra */
/* Demangled: PutMCBPC_Intra */
int PutMCBPC_Intra(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder7onResetEv */
/* Demangled: android::SoftMPEG4Encoder::onReset() */
int _ZN7android16SoftMPEG4Encoder7onResetEv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void);

/* Symbol: BitstreamSaveWord */
/* Demangled: BitstreamSaveWord */
int BitstreamSaveWord(void);

/* Symbol: BitstreamUseOverrunBuffer */
/* Demangled: BitstreamUseOverrunBuffer */
int BitstreamUseOverrunBuffer(void);

/* Symbol: PVGetH263ProfileLevelID */
/* Demangled: PVGetH263ProfileLevelID */
int PVGetH263ProfileLevelID(void);

/* Symbol: SAD_Blk_HalfPel_C */
/* Demangled: SAD_Blk_HalfPel_C */
int SAD_Blk_HalfPel_C(void);

/* Symbol: SAD_MB_HalfPel_Cxh */
/* Demangled: SAD_MB_HalfPel_Cxh */
int SAD_MB_HalfPel_Cxh(void);

/* Symbol: _Z15EncodeVOS_StartP19tagvideoEncControls */
/* Demangled: EncodeVOS_Start(tagvideoEncControls*) */
int _Z15EncodeVOS_StartP19tagvideoEncControls(void);

/* Symbol: SAD_MB_HP_HTFM_Collectxh */
/* Demangled: SAD_MB_HP_HTFM_Collectxh */
int SAD_MB_HP_HTFM_Collectxh(void);

/* Symbol: BlockDCT_AANwSub */
/* Demangled: BlockDCT_AANwSub */
int BlockDCT_AANwSub(void);

/* Symbol: idct_col0x40 */
/* Demangled: idct_col0x40 */
int idct_col0x40(void);

/* Symbol: _Z17updateRC_PostProcP11rateControlP15tagVideoEncData */
/* Demangled: updateRC_PostProc(rateControl*, tagVideoEncData*) */
int _Z17updateRC_PostProcP11rateControlP15tagVideoEncData(void);

/* Symbol: ComputeMBSum_C */
/* Demangled: ComputeMBSum_C */
int ComputeMBSum_C(void);

/* Symbol: RC_VopUpdateStat */
/* Demangled: RC_VopUpdateStat */
int RC_VopUpdateStat(void);

/* Symbol: Copy_MB_into_Vop */
/* Demangled: Copy_MB_into_Vop */
int Copy_MB_into_Vop(void);

/* Symbol: WriteMVcomponent */
/* Demangled: WriteMVcomponent */
int WriteMVcomponent(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: idct_rowzmv */
/* Demangled: idct_rowzmv */
int idct_rowzmv(void);

/* Symbol: _Z19UpdateSkipNextFrameP15tagVideoEncDataPjPi9PV_STATUS */
/* Demangled: UpdateSkipNextFrame(tagVideoEncData*, unsigned int*, int*, PV_STATUS) */
int _Z19UpdateSkipNextFrameP15tagVideoEncDataPjPi9PV_STATUS(void);

/* Symbol: RasterIntraUpdate */
/* Demangled: RasterIntraUpdate */
int RasterIntraUpdate(void);

/* Symbol: PutCBPY */
/* Demangled: PutCBPY */
int PutCBPY(void);

/* Symbol: PutDCsize_lum */
/* Demangled: PutDCsize_lum */
int PutDCsize_lum(void);

/* Symbol: PVUpdateBitRate */
/* Demangled: PVUpdateBitRate */
int PVUpdateBitRate(void);

/* Symbol: PutCoeff_Inter */
/* Demangled: PutCoeff_Inter */
int PutCoeff_Inter(void);

/* Symbol: EncPrediction_INTER4V */
/* Demangled: EncPrediction_INTER4V */
int EncPrediction_INTER4V(void);

/* Symbol: PutRunCoeff_Inter_Last */
/* Demangled: PutRunCoeff_Inter_Last */
int PutRunCoeff_Inter_Last(void);

/* Symbol: _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: idct_row2Intra */
/* Demangled: idct_row2Intra */
int idct_row2Intra(void);

/* Symbol: getMotionCompensatedMB */
/* Demangled: getMotionCompensatedMB */
int getMotionCompensatedMB(void);

/* Symbol: PutCoeff_Inter_RVLC_Last */
/* Demangled: PutCoeff_Inter_RVLC_Last */
int PutCoeff_Inter_RVLC_Last(void);

/* Symbol: PaddingEdge */
/* Demangled: PaddingEdge */
int PaddingEdge(void);

/* Symbol: HalfPel2_SAD_Blk */
/* Demangled: HalfPel2_SAD_Blk */
int HalfPel2_SAD_Blk(void);

/* Symbol: PutRunCoeff_Intra_Last */
/* Demangled: PutRunCoeff_Intra_Last */
int PutRunCoeff_Intra_Last(void);

/* Symbol: idct_row0Inter */
/* Demangled: idct_row0Inter */
int idct_row0Inter(void);

/* Symbol: BlockQuantDequantH263DCIntra */
/* Demangled: BlockQuantDequantH263DCIntra */
int BlockQuantDequantH263DCIntra(void);

/* Symbol: RC_ResetSkipNextFrame */
/* Demangled: RC_ResetSkipNextFrame */
int RC_ResetSkipNextFrame(void);

/* Symbol: get_MB */
/* Demangled: get_MB */
int get_MB(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder13onQueueFilledEj */
/* Demangled: android::SoftMPEG4Encoder::onQueueFilled(unsigned int) */
int _ZN7android16SoftMPEG4Encoder13onQueueFilledEj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: BlockQuantDequantMPEGIntra */
/* Demangled: BlockQuantDequantMPEGIntra */
int BlockQuantDequantMPEGIntra(void);

/* Symbol: ResetIntraUpdateRegion */
/* Demangled: ResetIntraUpdateRegion */
int ResetIntraUpdateRegion(void);

/* Symbol: SAD_MB_HTFM_Collect */
/* Demangled: SAD_MB_HTFM_Collect */
int SAD_MB_HTFM_Collect(void);

/* Symbol: MBVlcEncodeDataPar_I_VOP */
/* Demangled: MBVlcEncodeDataPar_I_VOP */
int MBVlcEncodeDataPar_I_VOP(void);

/* Symbol: MBVlcEncodeDataPar_P_VOP */
/* Demangled: MBVlcEncodeDataPar_P_VOP */
int MBVlcEncodeDataPar_P_VOP(void);

/* Symbol: PutCoeff_Inter_RVLC */
/* Demangled: PutCoeff_Inter_RVLC */
int PutCoeff_Inter_RVLC(void);

/* Symbol: _ZN7android16SoftMPEG4EncoderD2Ev */
/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
int _ZN7android16SoftMPEG4EncoderD2Ev(void);

/* Symbol: idct_row4zmv */
/* Demangled: idct_row4zmv */
int idct_row4zmv(void);

/* Symbol: _Z14EncodeVop_NoMEP15tagVideoEncData */
/* Demangled: EncodeVop_NoME(tagVideoEncData*) */
int _Z14EncodeVop_NoMEP15tagVideoEncData(void);

/* Symbol: BitstreamPrependPacket */
/* Demangled: BitstreamPrependPacket */
int BitstreamPrependPacket(void);

/* Symbol: BitstreamPutGT16Bits */
/* Demangled: BitstreamPutGT16Bits */
int BitstreamPutGT16Bits(void);

/* Symbol: Block2x2DCT_AANwSub */
/* Demangled: Block2x2DCT_AANwSub */
int Block2x2DCT_AANwSub(void);

/* Symbol: EncodeVop */
/* Demangled: EncodeVop */
int EncodeVop(void);

/* Symbol: PutCoeff_Intra_RVLC */
/* Demangled: PutCoeff_Intra_RVLC */
int PutCoeff_Intra_RVLC(void);

/* Symbol: RunLevel */
/* Demangled: RunLevel */
int RunLevel(void);

/* Symbol: idct_row0x10zmv */
/* Demangled: idct_row0x10zmv */
int idct_row0x10zmv(void);

/* Symbol: PVEncodeSlice */
/* Demangled: PVEncodeSlice */
int PVEncodeSlice(void);

/* Symbol: GetPredAdvBy0x0 */
/* Demangled: GetPredAdvBy0x0 */
int GetPredAdvBy0x0(void);

/* Symbol: BitstreamShortHeaderByteAlignStuffing */
/* Demangled: BitstreamShortHeaderByteAlignStuffing */
int BitstreamShortHeaderByteAlignStuffing(void);

/* Symbol: GetPredAdvBy0x1 */
/* Demangled: GetPredAdvBy0x1 */
int GetPredAdvBy0x1(void);

/* Symbol: SAD_MB_HP_HTFMyh */
/* Demangled: SAD_MB_HP_HTFMyh */
int SAD_MB_HP_HTFMyh(void);

/* Symbol: BitstreamSavePartial */
/* Demangled: BitstreamSavePartial */
int BitstreamSavePartial(void);

/* Symbol: PVEncodeFrameSet */
/* Demangled: PVEncodeFrameSet */
int PVEncodeFrameSet(void);

/* Symbol: ResetIntraUpdate */
/* Demangled: ResetIntraUpdate */
int ResetIntraUpdate(void);

/* Symbol: PutLevelCoeff_Inter */
/* Demangled: PutLevelCoeff_Inter */
int PutLevelCoeff_Inter(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void);

/* Symbol: BlockQuantDequantH263Intra */
/* Demangled: BlockQuantDequantH263Intra */
int BlockQuantDequantH263Intra(void);

/* Symbol: PutDCsize_chrom */
/* Demangled: PutDCsize_chrom */
int PutDCsize_chrom(void);

/* Symbol: BitstreamFlushBits */
/* Demangled: BitstreamFlushBits */
int BitstreamFlushBits(void);

/* Symbol: BitstreamSetOverrunBuffer */
/* Demangled: BitstreamSetOverrunBuffer */
int BitstreamSetOverrunBuffer(void);

/* Symbol: idct_row3Inter */
/* Demangled: idct_row3Inter */
int idct_row3Inter(void);

/* Symbol: _Z16DetermineVopTypeP15tagVideoEncDatai */
/* Demangled: DetermineVopType(tagVideoEncData*, int) */
int _Z16DetermineVopTypeP15tagVideoEncDatai(void);

/* Symbol: _ZTVN7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SoftMPEG4Encoder::InputBufferInfo> */
extern void* _ZTVN7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEEE;

/* Symbol: Block1x1DCTwSub */
/* Demangled: Block1x1DCTwSub */
int Block1x1DCTwSub(void);

/* Symbol: idct_col0 */
/* Demangled: idct_col0 */
int idct_col0(void);

/* Symbol: BitstreamEncReset */
/* Demangled: BitstreamEncReset */
int BitstreamEncReset(void);

/* Symbol: _Z8idct_colPs */
/* Demangled: idct_col(short*) */
int _Z8idct_colPs(void);

/* Symbol: idct_col1 */
/* Demangled: idct_col1 */
int idct_col1(void);

/* Symbol: idct_row0x10Inter */
/* Demangled: idct_row0x10Inter */
int idct_row0x10Inter(void);

/* Symbol: idct_row2zmv */
/* Demangled: idct_row2zmv */
int idct_row2zmv(void);

/* Symbol: PVUpdateIFrameInterval */
/* Demangled: PVUpdateIFrameInterval */
int PVUpdateIFrameInterval(void);

/* Symbol: _Z21SetProfile_BufferSizeP15tagVideoEncDatafi */
/* Demangled: SetProfile_BufferSize(tagVideoEncData*, float, int) */
int _Z21SetProfile_BufferSizeP15tagVideoEncDatafi(void);

/* Symbol: MoveNeighborSAD */
/* Demangled: MoveNeighborSAD */
int MoveNeighborSAD(void);

/* Symbol: BitstreamAppendPacket */
/* Demangled: BitstreamAppendPacket */
int BitstreamAppendPacket(void);

/* Symbol: idct_col2 */
/* Demangled: idct_col2 */
int idct_col2(void);

/* Symbol: RC_GetSkipNextFrame */
/* Demangled: RC_GetSkipNextFrame */
int RC_GetSkipNextFrame(void);

/* Symbol: _Z7VOS_EndP19tagvideoEncControls */
/* Demangled: VOS_End(tagvideoEncControls*) */
int _Z7VOS_EndP19tagvideoEncControls(void);

/* Symbol: _Z20targetBitCalculationPv */
/* Demangled: targetBitCalculation(void*) */
int _Z20targetBitCalculationPv(void);

/* Symbol: HTFMPrepareCurMB */
/* Demangled: HTFMPrepareCurMB */
int HTFMPrepareCurMB(void);

/* Symbol: _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: idct_col3 */
/* Demangled: idct_col3 */
int idct_col3(void);

/* Symbol: idct_row0x20zmv */
/* Demangled: idct_row0x20zmv */
int idct_row0x20zmv(void);

/* Symbol: idct_col4 */
/* Demangled: idct_col4 */
int idct_col4(void);

/* Symbol: RC_UpdateBXRCParams */
/* Demangled: RC_UpdateBXRCParams */
int RC_UpdateBXRCParams(void);

/* Symbol: SAD_Macroblock_C */
/* Demangled: SAD_Macroblock_C */
int SAD_Macroblock_C(void);

/* Symbol: MBMotionSearch */
/* Demangled: MBMotionSearch */
int MBMotionSearch(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder14releaseEncoderEv */
/* Demangled: android::SoftMPEG4Encoder::releaseEncoder() */
int _ZN7android16SoftMPEG4Encoder14releaseEncoderEv(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE10do_destroyEPvj(void);

/* Symbol: BitstreamCloseEnc */
/* Demangled: BitstreamCloseEnc */
int BitstreamCloseEnc(void);

/* Symbol: BitstreamGetPos */
/* Demangled: BitstreamGetPos */
int BitstreamGetPos(void);

/* Symbol: RC_UpdateBuffer */
/* Demangled: RC_UpdateBuffer */
int RC_UpdateBuffer(void);

/* Symbol: FindHalfPelBlk */
/* Demangled: FindHalfPelBlk */
int FindHalfPelBlk(void);

/* Symbol: idct_row1Intra */
/* Demangled: idct_row1Intra */
int idct_row1Intra(void);

/* Symbol: idct_rowIntra */
/* Demangled: idct_rowIntra */
int idct_rowIntra(void);

/* Symbol: BlockQuantDequantMPEGDCInter */
/* Demangled: BlockQuantDequantMPEGDCInter */
int BlockQuantDequantMPEGDCInter(void);

/* Symbol: SAD_MB_HP_HTFM_Collectxhyh */
/* Demangled: SAD_MB_HP_HTFM_Collectxhyh */
int SAD_MB_HP_HTFM_Collectxhyh(void);

/* Symbol: ChooseMode_C */
/* Demangled: ChooseMode_C */
int ChooseMode_C(void);

/* Symbol: PVUpdateEncFrameRate */
/* Demangled: PVUpdateEncFrameRate */
int PVUpdateEncFrameRate(void);

/* Symbol: RC_Cleanup */
/* Demangled: RC_Cleanup */
int RC_Cleanup(void);

/* Symbol: PutRunCoeff_Inter */
/* Demangled: PutRunCoeff_Inter */
int PutRunCoeff_Inter(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: idct_row0x20Intra */
/* Demangled: idct_row0x20Intra */
int idct_row0x20Intra(void);

/* Symbol: cal_dc_scalerENC */
/* Demangled: cal_dc_scalerENC */
int cal_dc_scalerENC(void);

/* Symbol: BitstreamRepos */
/* Demangled: BitstreamRepos */
int BitstreamRepos(void);

/* Symbol: PVGetEncMemoryUsage */
/* Demangled: PVGetEncMemoryUsage */
int PVGetEncMemoryUsage(void);

/* Symbol: CalcThreshold */
/* Demangled: CalcThreshold */
int CalcThreshold(void);

/* Symbol: fullsearchBlk */
/* Demangled: fullsearchBlk */
int fullsearchBlk(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android16SoftMPEG4EncoderE */
/* Demangled: vtable for android::SoftMPEG4Encoder */
extern void* _ZTVN7android16SoftMPEG4EncoderE;

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE;

/* Symbol: idct_col0x10 */
/* Demangled: idct_col0x10 */
int idct_col0x10(void);

/* Symbol: idct_row0zmv */
/* Demangled: idct_row0zmv */
int idct_row0zmv(void);

/* Symbol: EncPrediction_INTER */
/* Demangled: EncPrediction_INTER */
int EncPrediction_INTER(void);

/* Symbol: SAD_MB_HTFM */
/* Demangled: SAD_MB_HTFM */
int SAD_MB_HTFM(void);

/* Symbol: PutMCBPC_Inter */
/* Demangled: PutMCBPC_Inter */
int PutMCBPC_Inter(void);

/* Symbol: BlockDCT_AANIntra */
/* Demangled: BlockDCT_AANIntra */
int BlockDCT_AANIntra(void);

/* Symbol: MBVlcEncodeCombined_I_VOP */
/* Demangled: MBVlcEncodeCombined_I_VOP */
int MBVlcEncodeCombined_I_VOP(void);

/* Symbol: MBVlcEncodeCombined_P_VOP */
/* Demangled: MBVlcEncodeCombined_P_VOP */
int MBVlcEncodeCombined_P_VOP(void);

/* Symbol: BitStreamCreateEnc */
/* Demangled: BitStreamCreateEnc */
int BitStreamCreateEnc(void);

/* Symbol: EncodeFrameDataPartMode */
/* Demangled: EncodeFrameDataPartMode */
int EncodeFrameDataPartMode(void);

/* Symbol: GetPredAdvBy1x0 */
/* Demangled: GetPredAdvBy1x0 */
int GetPredAdvBy1x0(void);

/* Symbol: PVGetOverrunBuffer */
/* Demangled: PVGetOverrunBuffer */
int PVGetOverrunBuffer(void);

/* Symbol: _ZN7android16SoftMPEG4EncoderC1EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftMPEG4Encoder::SoftMPEG4Encoder(char const*, char const*, OMX_VIDEO_CODINGTYPE, char const*, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftMPEG4EncoderC1EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void);

/* Symbol: BitstreamAppendPacketNoOffset */
/* Demangled: BitstreamAppendPacketNoOffset */
int BitstreamAppendPacketNoOffset(void);

/* Symbol: BitstreamPutBits */
/* Demangled: BitstreamPutBits */
int BitstreamPutBits(void);

/* Symbol: Block2x2DCT_AANIntra */
/* Demangled: Block2x2DCT_AANIntra */
int Block2x2DCT_AANIntra(void);

/* Symbol: idct_row0x40Intra */
/* Demangled: idct_row0x40Intra */
int idct_row0x40Intra(void);

/* Symbol: GetPredAdvBy1x1 */
/* Demangled: GetPredAdvBy1x1 */
int GetPredAdvBy1x1(void);

/* Symbol: RC_Initialize */
/* Demangled: RC_Initialize */
int RC_Initialize(void);

/* Symbol: RC_VopQPSetting */
/* Demangled: RC_VopQPSetting */
int RC_VopQPSetting(void);

/* Symbol: PrepareCurMB */
/* Demangled: PrepareCurMB */
int PrepareCurMB(void);

/* Symbol: PutCoeff_Intra_RVLC_Last */
/* Demangled: PutCoeff_Intra_RVLC_Last */
int PutCoeff_Intra_RVLC_Last(void);

/* Symbol: _ZN7android16SoftMPEG4EncoderC2EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftMPEG4Encoder::SoftMPEG4Encoder(char const*, char const*, OMX_VIDEO_CODINGTYPE, char const*, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftMPEG4EncoderC2EPKcS2_20OMX_VIDEO_CODINGTYPES2_PKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: EncodeFrameCombinedMode */
/* Demangled: EncodeFrameCombinedMode */
int EncodeFrameCombinedMode(void);

/* Symbol: idct_row4Intra */
/* Demangled: idct_row4Intra */
int idct_row4Intra(void);

/* Symbol: SAD_MB_HalfPel_Cyh */
/* Demangled: SAD_MB_HalfPel_Cyh */
int SAD_MB_HalfPel_Cyh(void);

/* Symbol: SAD_MB_HP_HTFM_Collectyh */
/* Demangled: SAD_MB_HP_HTFM_Collectyh */
int SAD_MB_HP_HTFM_Collectyh(void);

/* Symbol: _Z15EncodeVOPHeaderP12tagBitstreamP6tagVolP6tagVOP */
/* Demangled: EncodeVOPHeader(tagBitstream*, tagVol*, tagVOP*) */
int _Z15EncodeVOPHeaderP12tagBitstreamP6tagVolP6tagVOP(void);

/* Symbol: PVGetMPEG4ProfileLevelID */
/* Demangled: PVGetMPEG4ProfileLevelID */
int PVGetMPEG4ProfileLevelID(void);

/* Symbol: getBlockSum */
/* Demangled: getBlockSum */
int getBlockSum(void);

/* Symbol: idct_row2Inter */
/* Demangled: idct_row2Inter */
int idct_row2Inter(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder13initEncParamsEv */
/* Demangled: android::SoftMPEG4Encoder::initEncParams() */
int _ZN7android16SoftMPEG4Encoder13initEncParamsEv(void);

/* Symbol: Block4x4DCT_AANIntra */
/* Demangled: Block4x4DCT_AANIntra */
int Block4x4DCT_AANIntra(void);

/* Symbol: PVGetVBVSize */
/* Demangled: PVGetVBVSize */
int PVGetVBVSize(void);

/* Symbol: InitHTFM */
/* Demangled: InitHTFM */
int InitHTFM(void);

/* Symbol: SAD_MB_HP_HTFMxhyh */
/* Demangled: SAD_MB_HP_HTFMxhyh */
int SAD_MB_HP_HTFMxhyh(void);

/* Symbol: ScaleMVD */
/* Demangled: ScaleMVD */
int ScaleMVD(void);

/* Symbol: _ZN7android16SoftMPEG4EncoderD0Ev */
/* Demangled: android::SoftMPEG4Encoder::~SoftMPEG4Encoder() */
int _ZN7android16SoftMPEG4EncoderD0Ev(void);

/* Symbol: BlockQuantDequantH263DCInter */
/* Demangled: BlockQuantDequantH263DCInter */
int BlockQuantDequantH263DCInter(void);

/* Symbol: Copy_B_from_Vop */
/* Demangled: Copy_B_from_Vop */
int Copy_B_from_Vop(void);

/* Symbol: HalfPel1_SAD_MB */
/* Demangled: HalfPel1_SAD_MB */
int HalfPel1_SAD_MB(void);

/* Symbol: BlockQuantDequantMPEGInter */
/* Demangled: BlockQuantDequantMPEGInter */
int BlockQuantDequantMPEGInter(void);

/* Symbol: PutCoeff_Intra */
/* Demangled: PutCoeff_Intra */
int PutCoeff_Intra(void);

/* Symbol: idct_row0x40zmv */
/* Demangled: idct_row0x40zmv */
int idct_row0x40zmv(void);

/* Symbol: _Z13SaveRDSamplesP12tagMultiPassi */
/* Demangled: SaveRDSamples(tagMultiPass*, int) */
int _Z13SaveRDSamplesP12tagMultiPassi(void);

/* Symbol: _Z28calculateQuantizer_MultipassPv */
/* Demangled: calculateQuantizer_Multipass(void*) */
int _Z28calculateQuantizer_MultipassPv(void);

/* Symbol: EncodeVideoPacketHeader */
/* Demangled: EncodeVideoPacketHeader */
int EncodeVideoPacketHeader(void);

/* Symbol: PVCleanUpVideoEncoder */
/* Demangled: PVCleanUpVideoEncoder */
int PVCleanUpVideoEncoder(void);

/* Symbol: PVGetDefaultEncOption */
/* Demangled: PVGetDefaultEncOption */
int PVGetDefaultEncOption(void);

/* Symbol: Sad8x8 */
/* Demangled: Sad8x8 */
int Sad8x8(void);

/* Symbol: PVIFrameRequest */
/* Demangled: PVIFrameRequest */
int PVIFrameRequest(void);

/* Symbol: PutMV */
/* Demangled: PutMV */
int PutMV(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: HalfPel1_SAD_Blk */
/* Demangled: HalfPel1_SAD_Blk */
int HalfPel1_SAD_Blk(void);

/* Symbol: PutLevelCoeff_Inter_Last */
/* Demangled: PutLevelCoeff_Inter_Last */
int PutLevelCoeff_Inter_Last(void);

/* Symbol: _Z17EncodeShortHeaderP12tagBitstreamP6tagVOP */
/* Demangled: EncodeShortHeader(tagBitstream*, tagVOP*) */
int _Z17EncodeShortHeaderP12tagBitstreamP6tagVOP(void);

/* Symbol: idct_row0Intra */
/* Demangled: idct_row0Intra */
int idct_row0Intra(void);

/* Symbol: Copy_MB_from_Vop */
/* Demangled: Copy_MB_from_Vop */
int Copy_MB_from_Vop(void);

/* Symbol: _ZN7android16SoftMPEG4Encoder11initEncoderEv */
/* Demangled: android::SoftMPEG4Encoder::initEncoder() */
int _ZN7android16SoftMPEG4Encoder11initEncoderEv(void);

/* Symbol: BitstreamAppendEnc */
/* Demangled: BitstreamAppendEnc */
int BitstreamAppendEnc(void);

/* Symbol: Block4x4DCT_AANwSub */
/* Demangled: Block4x4DCT_AANwSub */
int Block4x4DCT_AANwSub(void);

/* Symbol: SAD_MB_HP_HTFMxh */
/* Demangled: SAD_MB_HP_HTFMxh */
int SAD_MB_HP_HTFMxh(void);

/* Symbol: BlockCodeCoeff_RVLC */
/* Demangled: BlockCodeCoeff_RVLC */
int BlockCodeCoeff_RVLC(void);

/* Symbol: _Z17updateRateControlP11rateControlP15tagVideoEncData */
/* Demangled: updateRateControl(rateControl*, tagVideoEncData*) */
int _Z17updateRateControlP11rateControlP15tagVideoEncData(void);

/* Symbol: BlockQuantDequantH263Inter */
/* Demangled: BlockQuantDequantH263Inter */
int BlockQuantDequantH263Inter(void);

/* Symbol: SAD_Block_C */
/* Demangled: SAD_Block_C */
int SAD_Block_C(void);

/* Symbol: SAD_MB_HalfPel_Cxhyh */
/* Demangled: SAD_MB_HalfPel_Cxhyh */
int SAD_MB_HalfPel_Cxhyh(void);

/* Symbol: UpdateHTFM */
/* Demangled: UpdateHTFM */
int UpdateHTFM(void);

/* Symbol: Block1x1DCTIntra */
/* Demangled: Block1x1DCTIntra */
int Block1x1DCTIntra(void);

/* Symbol: idct_row3zmv */
/* Demangled: idct_row3zmv */
int idct_row3zmv(void);

/* Symbol: PVGetMaxVideoFrameSize */
/* Demangled: PVGetMaxVideoFrameSize */
int PVGetMaxVideoFrameSize(void);

/* Symbol: PVUpdateNumIntraMBRefresh */
/* Demangled: PVUpdateNumIntraMBRefresh */
int PVUpdateNumIntraMBRefresh(void);

/* Symbol: EncPrediction_Chrom */
/* Demangled: EncPrediction_Chrom */
int EncPrediction_Chrom(void);

/* Symbol: PVGetHintTrack */
/* Demangled: PVGetHintTrack */
int PVGetHintTrack(void);

/* Symbol: PVGetVolHeader */
/* Demangled: PVGetVolHeader */
int PVGetVolHeader(void);

/* Symbol: _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SoftMPEG4Encoder::InputBufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_16SoftMPEG4Encoder15InputBufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _Z20DetermineCodingLayerP15tagVideoEncDataPij */
/* Demangled: DetermineCodingLayer(tagVideoEncData*, int*, unsigned int) */
int _Z20DetermineCodingLayerP15tagVideoEncDataPij(void);

/* Symbol: DCACPred */
/* Demangled: DCACPred */
int DCACPred(void);

/* Symbol: PutLevelCoeff_Intra_Last */
/* Demangled: PutLevelCoeff_Intra_Last */
int PutLevelCoeff_Intra_Last(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4ENC_H */
