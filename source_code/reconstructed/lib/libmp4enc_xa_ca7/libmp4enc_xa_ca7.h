/*
 * Reverse-Engineered ABI Specification for: libmp4enc_xa.ca7.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmp4enc_xa.ca7.so
 */

#ifndef BEGONIA_RE_LIBMP4ENC_XA_CA7_H
#define BEGONIA_RE_LIBMP4ENC_XA_CA7_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __divsi3 */
/* Demangled: __divsi3 */
int fn___divsi3(void) __asm__("__divsi3");

/* Symbol: EncInit */
/* Demangled: EncInit */
int EncInit(void);

/* Symbol: g_tcoefInter */
/* Demangled: g_tcoefInter */
extern void* g_tcoefInter;

/* Symbol: EncValidStreamSlice */
/* Demangled: EncValidStreamSlice */
int EncValidStreamSlice(void);

/* Symbol: g_dcScalerInvLum */
/* Demangled: g_dcScalerInvLum */
extern void* g_dcScalerInvLum;

/* Symbol: EncShutdown */
/* Demangled: EncShutdown */
int EncShutdown(void);

/* Symbol: Pseudo_Slice_Partition_Me */
/* Demangled: Pseudo_Slice_Partition_Me */
int Pseudo_Slice_Partition_Me(void);

/* Symbol: NEON_HALF_SAD_16x8_Calculation */
/* Demangled: NEON_HALF_SAD_16x8_Calculation */
int NEON_HALF_SAD_16x8_Calculation(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int fn___aeabi_uldivmod(void) __asm__("__aeabi_uldivmod");

/* Symbol: g_sub_cand */
/* Demangled: g_sub_cand */
extern void* g_sub_cand;

/* Symbol: EncVlcIntraSvh */
/* Demangled: EncVlcIntraSvh */
int EncVlcIntraSvh(void);

/* Symbol: HW_EncCodeVop_Slice_Hdr */
/* Demangled: HW_EncCodeVop_Slice_Hdr */
int HW_EncCodeVop_Slice_Hdr(void);

/* Symbol: tv */
/* Demangled: tv */
extern void* tv;

/* Symbol: MP4SwEncSetUsrData */
/* Demangled: MP4SwEncSetUsrData */
int MP4SwEncSetUsrData(void);

/* Symbol: EncodePictureCoder_Hybrid_SEG1 */
/* Demangled: EncodePictureCoder_Hybrid_SEG1 */
int EncodePictureCoder_Hybrid_SEG1(void);

/* Symbol: PixelME_MedianFilter */
/* Demangled: PixelME_MedianFilter */
int PixelME_MedianFilter(void);

/* Symbol: EncDrvHybrid_SendToCoder */
/* Demangled: EncDrvHybrid_SendToCoder */
int EncDrvHybrid_SendToCoder(void);

/* Symbol: EncodePictureCoder_Hybrid_SEG2 */
/* Demangled: EncodePictureCoder_Hybrid_SEG2 */
int EncodePictureCoder_Hybrid_SEG2(void);

/* Symbol: vop_global */
/* Demangled: vop_global */
extern void* vop_global;

/* Symbol: MPEG4EncoderGetParameterAdapt */
/* Demangled: MPEG4EncoderGetParameterAdapt */
int MPEG4EncoderGetParameterAdapt(void);

/* Symbol: TABLE_FAVOR_ZERO_MV_XMEDIA */
/* Demangled: TABLE_FAVOR_ZERO_MV_XMEDIA */
extern void* TABLE_FAVOR_ZERO_MV_XMEDIA;

/* Symbol: VCodecFree */
/* Demangled: VCodecFree */
int VCodecFree(void);

/* Symbol: VisualRC_MbRollback */
/* Demangled: VisualRC_MbRollback */
int VisualRC_MbRollback(void);

/* Symbol: EncSetBuffer */
/* Demangled: EncSetBuffer */
int EncSetBuffer(void);

/* Symbol: VideoEncoderUpdateBitstreamWP */
/* Demangled: VideoEncoderUpdateBitstreamWP */
int VideoEncoderUpdateBitstreamWP(void);

/* Symbol: NEON_INTERPOLATION_GUESS_1_3 */
/* Demangled: NEON_INTERPOLATION_GUESS_1_3 */
int NEON_INTERPOLATION_GUESS_1_3(void);

/* Symbol: tv2 */
/* Demangled: tv2 */
extern void* tv2;

/* Symbol: EncodePicture_Hybrid_Slice_Control */
/* Demangled: EncodePicture_Hybrid_Slice_Control */
int EncodePicture_Hybrid_Slice_Control(void);

/* Symbol: start_utime */
/* Demangled: start_utime */
extern void* start_utime;

/* Symbol: EncStuffing */
/* Demangled: EncStuffing */
int EncStuffing(void);

/* Symbol: EncInitCoder */
/* Demangled: EncInitCoder */
int EncInitCoder(void);

/* Symbol: VCodecGetRealAvailableDisplay */
/* Demangled: VCodecGetRealAvailableDisplay */
int VCodecGetRealAvailableDisplay(void);

/* Symbol: EncIdctInterBlock_memset0 */
/* Demangled: EncIdctInterBlock_memset0 */
int EncIdctInterBlock_memset0(void);

/* Symbol: refImage_global */
/* Demangled: refImage_global */
extern void* refImage_global;

/* Symbol: EncMeSetupRotation */
/* Demangled: EncMeSetupRotation */
int EncMeSetupRotation(void);

/* Symbol: EncFlushBits */
/* Demangled: EncFlushBits */
int EncFlushBits(void);

/* Symbol: MPEG4EncoderGenerateHeader */
/* Demangled: MPEG4EncoderGenerateHeader */
int MPEG4EncoderGenerateHeader(void);

/* Symbol: timeCodeTmp_global */
/* Demangled: timeCodeTmp_global */
extern void* timeCodeTmp_global;

/* Symbol: Rotate8_180 */
/* Demangled: Rotate8_180 */
int Rotate8_180(void);

/* Symbol: BaseCoder_GetPredictorMb_NoSavedPred_NoPadded */
/* Demangled: BaseCoder_GetPredictorMb_NoSavedPred_NoPadded */
int BaseCoder_GetPredictorMb_NoSavedPred_NoPadded(void);

/* Symbol: g_mb_pred */
/* Demangled: g_mb_pred */
extern void* g_mb_pred;

/* Symbol: FrameQueueChangeReferenceCount */
/* Demangled: FrameQueueChangeReferenceCount */
int FrameQueueChangeReferenceCount(void);

/* Symbol: Rotate16_180 */
/* Demangled: Rotate16_180 */
int Rotate16_180(void);

/* Symbol: EncDrvHybrid_Init */
/* Demangled: EncDrvHybrid_Init */
int EncDrvHybrid_Init(void);

/* Symbol: EncTimeCode */
/* Demangled: EncTimeCode */
int EncTimeCode(void);

/* Symbol: xMediaME_InputMad_16x8 */
/* Demangled: xMediaME_InputMad_16x8 */
int xMediaME_InputMad_16x8(void);

/* Symbol: Rotate8_270 */
/* Demangled: Rotate8_270 */
int Rotate8_270(void);

/* Symbol: VisualRC_InitMbRateControl_var1 */
/* Demangled: VisualRC_InitMbRateControl_var1 */
int VisualRC_InitMbRateControl_var1(void);

/* Symbol: OverFillPixel */
/* Demangled: OverFillPixel */
int OverFillPixel(void);

/* Symbol: NextType */
/* Demangled: NextType */
int NextType(void);

/* Symbol: MP4SwEncYUVEncoded */
/* Demangled: MP4SwEncYUVEncoded */
int MP4SwEncYUVEncoded(void);

/* Symbol: HW_EncCodeVop */
/* Demangled: HW_EncCodeVop */
int HW_EncCodeVop(void);

/* Symbol: vopType_global */
/* Demangled: vopType_global */
extern void* vopType_global;

/* Symbol: EncSvhHdr */
/* Demangled: EncSvhHdr */
int EncSvhHdr(void);

/* Symbol: Rotate16_270 */
/* Demangled: Rotate16_270 */
int Rotate16_270(void);

/* Symbol: VCodecReturnBitstream */
/* Demangled: VCodecReturnBitstream */
int VCodecReturnBitstream(void);

/* Symbol: Pixel_in_Init */
/* Demangled: Pixel_in_Init */
int Pixel_in_Init(void);

/* Symbol: HW_EncResumeCodeVop */
/* Demangled: HW_EncResumeCodeVop */
int HW_EncResumeCodeVop(void);

/* Symbol: write_ptr_global */
/* Demangled: write_ptr_global */
extern void* write_ptr_global;

/* Symbol: VCodecQueryInfo */
/* Demangled: VCodecQueryInfo */
int VCodecQueryInfo(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int fn___ashldi3(void) __asm__("__ashldi3");

/* Symbol: CopyMeStatisticsToRc_var1 */
/* Demangled: CopyMeStatisticsToRc_var1 */
int CopyMeStatisticsToRc_var1(void);

/* Symbol: EncodePicture_Hybrid */
/* Demangled: EncodePicture_Hybrid */
int EncodePicture_Hybrid(void);

/* Symbol: EncGoVopInit */
/* Demangled: EncGoVopInit */
int EncGoVopInit(void);

/* Symbol: Rotate16_0 */
/* Demangled: Rotate16_0 */
int Rotate16_0(void);

/* Symbol: EncVopHdr */
/* Demangled: EncVopHdr */
int EncVopHdr(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int fn___aeabi_idiv0(void) __asm__("__aeabi_idiv0");

/* Symbol: mInst */
/* Demangled: mInst */
extern void* mInst;

/* Symbol: EncVlcIntra */
/* Demangled: EncVlcIntra */
int EncVlcIntra(void);

/* Symbol: MeMbRowsProcess */
/* Demangled: MeMbRowsProcess */
int MeMbRowsProcess(void);

/* Symbol: BaseCoder_MbFree */
/* Demangled: BaseCoder_MbFree */
int BaseCoder_MbFree(void);

/* Symbol: g_hme_ip_width */
/* Demangled: g_hme_ip_width */
extern void* g_hme_ip_width;

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int fn___lshrdi3(void) __asm__("__lshrdi3");

/* Symbol: TABLE_FAVOR_ZERO_MV_XMEDIA2 */
/* Demangled: TABLE_FAVOR_ZERO_MV_XMEDIA2 */
extern void* TABLE_FAVOR_ZERO_MV_XMEDIA2;

/* Symbol: EncBookmarkMB */
/* Demangled: EncBookmarkMB */
int EncBookmarkMB(void);

/* Symbol: AdctCoder_MbAlloc */
/* Demangled: AdctCoder_MbAlloc */
int AdctCoder_MbAlloc(void);

/* Symbol: DispatchSliceToHW */
/* Demangled: DispatchSliceToHW */
int DispatchSliceToHW(void);

/* Symbol: BaseCoder_GetPredictorMb_Padded */
/* Demangled: BaseCoder_GetPredictorMb_Padded */
int BaseCoder_GetPredictorMb_Padded(void);

/* Symbol: EncUserDataSet */
/* Demangled: EncUserDataSet */
int EncUserDataSet(void);

/* Symbol: EncVosInit */
/* Demangled: EncVosInit */
int EncVosInit(void);

/* Symbol: idct_coeff1_enc */
/* Demangled: idct_coeff1_enc */
extern void* idct_coeff1_enc;

/* Symbol: EncInterSvh */
/* Demangled: EncInterSvh */
int EncInterSvh(void);

/* Symbol: UpdateLargeCrossSAD */
/* Demangled: UpdateLargeCrossSAD */
int UpdateLargeCrossSAD(void);

/* Symbol: g_mb_predCurrent */
/* Demangled: g_mb_predCurrent */
extern void* g_mb_predCurrent;

/* Symbol: FixBuffer */
/* Demangled: FixBuffer */
int FixBuffer(void);

/* Symbol: EncAllocStreamSlice */
/* Demangled: EncAllocStreamSlice */
int EncAllocStreamSlice(void);

/* Symbol: hybrid_mp4enc_hisr_hdlr */
/* Demangled: hybrid_mp4enc_hisr_hdlr */
int hybrid_mp4enc_hisr_hdlr(void);

/* Symbol: hybrid_mp4enc_msg_hdlr */
/* Demangled: hybrid_mp4enc_msg_hdlr */
int hybrid_mp4enc_msg_hdlr(void);

/* Symbol: g_dcScalerLum */
/* Demangled: g_dcScalerLum */
extern void* g_dcScalerLum;

/* Symbol: PixelME_HalfpixelGuess_xMedia2 */
/* Demangled: PixelME_HalfpixelGuess_xMedia2 */
int PixelME_HalfpixelGuess_xMedia2(void);

/* Symbol: ME_rec_time */
/* Demangled: ME_rec_time */
extern void* ME_rec_time;

/* Symbol: EncProfileCheck */
/* Demangled: EncProfileCheck */
int EncProfileCheck(void);

/* Symbol: Rotate8_0 */
/* Demangled: Rotate8_0 */
int Rotate8_0(void);

/* Symbol: svh_global */
/* Demangled: svh_global */
extern void* svh_global;

/* Symbol: EncUserData */
/* Demangled: EncUserData */
int EncUserData(void);

/* Symbol: MPEG4EncoderSetParameterAdapt */
/* Demangled: MPEG4EncoderSetParameterAdapt */
int MPEG4EncoderSetParameterAdapt(void);

/* Symbol: VCodecSetYUVBuffer */
/* Demangled: VCodecSetYUVBuffer */
int VCodecSetYUVBuffer(void);

/* Symbol: TABLE_FAVOR_INTRA_THR_XMEDIA2 */
/* Demangled: TABLE_FAVOR_INTRA_THR_XMEDIA2 */
extern void* TABLE_FAVOR_INTRA_THR_XMEDIA2;

/* Symbol: MP4SwEncRelease */
/* Demangled: MP4SwEncRelease */
int MP4SwEncRelease(void);

/* Symbol: govop_global */
/* Demangled: govop_global */
extern void* govop_global;

/* Symbol: BaseRC_MbBookMark */
/* Demangled: BaseRC_MbBookMark */
int BaseRC_MbBookMark(void);

/* Symbol: MP4SwEncCalloc */
/* Demangled: MP4SwEncCalloc */
int MP4SwEncCalloc(void);

/* Symbol: g_rotated_mb */
/* Demangled: g_rotated_mb */
extern void* g_rotated_mb;

/* Symbol: HW_Trigger_Slice */
/* Demangled: HW_Trigger_Slice */
int HW_Trigger_Slice(void);

/* Symbol: MP4SwEncMemset */
/* Demangled: MP4SwEncMemset */
int MP4SwEncMemset(void);

/* Symbol: HW_SetInfo */
/* Demangled: HW_SetInfo */
int HW_SetInfo(void);

/* Symbol: EncNextStartCode */
/* Demangled: EncNextStartCode */
int EncNextStartCode(void);

/* Symbol: HalfPixelSad_xMedia_16x8 */
/* Demangled: HalfPixelSad_xMedia_16x8 */
int HalfPixelSad_xMedia_16x8(void);

/* Symbol: MP4SwEncStrmEnd */
/* Demangled: MP4SwEncStrmEnd */
int MP4SwEncStrmEnd(void);

/* Symbol: EncImageAlloc_Hybrid */
/* Demangled: EncImageAlloc_Hybrid */
int EncImageAlloc_Hybrid(void);

/* Symbol: g_thr_must_be_zero_row_intra16 */
/* Demangled: g_thr_must_be_zero_row_intra16 */
extern void* g_thr_must_be_zero_row_intra16;

/* Symbol: g_x_presub */
/* Demangled: g_x_presub */
extern void* g_x_presub;

/* Symbol: HW_EncBookmarkMB */
/* Demangled: HW_EncBookmarkMB */
int HW_EncBookmarkMB(void);

/* Symbol: EncVlcInterSvh */
/* Demangled: EncVlcInterSvh */
int EncVlcInterSvh(void);

/* Symbol: g_inst */
/* Demangled: g_inst */
extern void* g_inst;

/* Symbol: EncUserDataFree */
/* Demangled: EncUserDataFree */
int EncUserDataFree(void);

/* Symbol: _rMPEG4EncoderAPI */
/* Demangled: _rMPEG4EncoderAPI */
extern void* _rMPEG4EncoderAPI;

/* Symbol: TABLE_FLAT_AREA_THR */
/* Demangled: TABLE_FLAT_AREA_THR */
extern void* TABLE_FLAT_AREA_THR;

/* Symbol: mb_global */
/* Demangled: mb_global */
extern void* mb_global;

/* Symbol: inputVopType_global */
/* Demangled: inputVopType_global */
extern void* inputVopType_global;

/* Symbol: MPEG4EncoderGetNextBitstream */
/* Demangled: MPEG4EncoderGetNextBitstream */
int MPEG4EncoderGetNextBitstream(void);

/* Symbol: EncRotateMB */
/* Demangled: EncRotateMB */
int EncRotateMB(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int fn___aeabi_idiv(void) __asm__("__aeabi_idiv");

/* Symbol: PutInterZero */
/* Demangled: PutInterZero */
int PutInterZero(void);

/* Symbol: g_quantTableIntra */
/* Demangled: g_quantTableIntra */
extern void* g_quantTableIntra;

/* Symbol: g_positions */
/* Demangled: g_positions */
extern void* g_positions;

/* Symbol: EncNextByteAligned */
/* Demangled: EncNextByteAligned */
int EncNextByteAligned(void);

/* Symbol: RefCount */
/* Demangled: RefCount */
extern void* RefCount;

/* Symbol: BaseCoder_EncInter */
/* Demangled: BaseCoder_EncInter */
int BaseCoder_EncInter(void);

/* Symbol: g_thr_must_be_zero_row_inter16 */
/* Demangled: g_thr_must_be_zero_row_inter16 */
extern void* g_thr_must_be_zero_row_inter16;

/* Symbol: EncResumeCodeVop */
/* Demangled: EncResumeCodeVop */
int EncResumeCodeVop(void);

/* Symbol: VideoEncoderMallocAligned */
/* Demangled: VideoEncoderMallocAligned */
int VideoEncoderMallocAligned(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: NextQp */
/* Demangled: NextQp */
int NextQp(void);

/* Symbol: NonCachableBufferTableSize */
/* Demangled: NonCachableBufferTableSize */
extern void* NonCachableBufferTableSize;

/* Symbol: Stuffing */
/* Demangled: Stuffing */
int Stuffing(void);

/* Symbol: outBufSize_global */
/* Demangled: outBufSize_global */
extern void* outBufSize_global;

/* Symbol: MP4SwEncStrmEncode */
/* Demangled: MP4SwEncStrmEncode */
int MP4SwEncStrmEncode(void);

/* Symbol: InvProcessIntra */
/* Demangled: InvProcessIntra */
int InvProcessIntra(void);

/* Symbol: EncUserDataAlloc */
/* Demangled: EncUserDataAlloc */
int EncUserDataAlloc(void);

/* Symbol: g_mb_typeAbove */
/* Demangled: g_mb_typeAbove */
extern void* g_mb_typeAbove;

/* Symbol: BaseRC_InitMbRateControl */
/* Demangled: BaseRC_InitMbRateControl */
int BaseRC_InitMbRateControl(void);

/* Symbol: MP4SwEncAssert */
/* Demangled: MP4SwEncAssert */
int MP4SwEncAssert(void);

/* Symbol: HW_Encoded_SliceLength_Previous */
/* Demangled: HW_Encoded_SliceLength_Previous */
extern void* HW_Encoded_SliceLength_Previous;

/* Symbol: GetInter64 */
/* Demangled: GetInter64 */
int GetInter64(void);

/* Symbol: end_utime */
/* Demangled: end_utime */
extern void* end_utime;

/* Symbol: EncSvhCheck */
/* Demangled: EncSvhCheck */
int EncSvhCheck(void);

/* Symbol: srcInter */
/* Demangled: srcInter */
extern void* srcInter;

/* Symbol: static_instance_table */
/* Demangled: static_instance_table */
extern void* static_instance_table;

/* Symbol: GetStaticInstance */
/* Demangled: GetStaticInstance */
int GetStaticInstance(void);

/* Symbol: BaseRC_MbRollback */
/* Demangled: BaseRC_MbRollback */
int BaseRC_MbRollback(void);

/* Symbol: MP4SwEncQueryInfo */
/* Demangled: MP4SwEncQueryInfo */
int MP4SwEncQueryInfo(void);

/* Symbol: thr_must_be_zero_blk */
/* Demangled: thr_must_be_zero_blk */
extern void* thr_must_be_zero_blk;

/* Symbol: EncodePictureCoder_Hybrid_Slice_Control_Done */
/* Demangled: EncodePictureCoder_Hybrid_Slice_Control_Done */
int EncodePictureCoder_Hybrid_Slice_Control_Done(void);

/* Symbol: EncDctInterSvhBlock */
/* Demangled: EncDctInterSvhBlock */
int EncDctInterSvhBlock(void);

/* Symbol: SadSum */
/* Demangled: SadSum */
extern void* SadSum;

/* Symbol: VCodecGetTotalYUV */
/* Demangled: VCodecGetTotalYUV */
int VCodecGetTotalYUV(void);

/* Symbol: MPEG4_av_adler32_update */
/* Demangled: MPEG4_av_adler32_update */
int MPEG4_av_adler32_update(void);

/* Symbol: EncIdctInterBlock */
/* Demangled: EncIdctInterBlock */
int EncIdctInterBlock(void);

/* Symbol: idct_coeff2_enc */
/* Demangled: idct_coeff2_enc */
extern void* idct_coeff2_enc;

/* Symbol: ReturnStaticInstance */
/* Demangled: ReturnStaticInstance */
int ReturnStaticInstance(void);

/* Symbol: VisualRC_MbRateControl */
/* Demangled: VisualRC_MbRateControl */
int VisualRC_MbRateControl(void);

/* Symbol: g_mx */
/* Demangled: g_mx */
extern void* g_mx;

/* Symbol: FrameQueueAdd */
/* Demangled: FrameQueueAdd */
int FrameQueueAdd(void);

/* Symbol: VideoEncoderFree */
/* Demangled: VideoEncoderFree */
int VideoEncoderFree(void);

/* Symbol: g_thr_must_be_zero_row_inter */
/* Demangled: g_thr_must_be_zero_row_inter */
extern void* g_thr_must_be_zero_row_inter;

/* Symbol: g_my */
/* Demangled: g_my */
extern void* g_my;

/* Symbol: MP4SwEncMemcpy */
/* Demangled: MP4SwEncMemcpy */
int MP4SwEncMemcpy(void);

/* Symbol: VideoEncoderAllocateBitstreamBuffer */
/* Demangled: VideoEncoderAllocateBitstreamBuffer */
int VideoEncoderAllocateBitstreamBuffer(void);

/* Symbol: g_mb_predAbove */
/* Demangled: g_mb_predAbove */
extern void* g_mb_predAbove;

/* Symbol: vol_global */
/* Demangled: vol_global */
extern void* vol_global;

/* Symbol: NEON_SAD_16x8_Calculation */
/* Demangled: NEON_SAD_16x8_Calculation */
int NEON_SAD_16x8_Calculation(void);

/* Symbol: MP4SwEncStreamBufferUpdate */
/* Demangled: MP4SwEncStreamBufferUpdate */
int MP4SwEncStreamBufferUpdate(void);

/* Symbol: VCodecGetAvailableDisplay */
/* Demangled: VCodecGetAvailableDisplay */
int VCodecGetAvailableDisplay(void);

/* Symbol: EncPredictionFix */
/* Demangled: EncPredictionFix */
int EncPredictionFix(void);

/* Symbol: IntraAct_Preprocess */
/* Demangled: IntraAct_Preprocess */
int IntraAct_Preprocess(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int fn___udivdi3(void) __asm__("__udivdi3");

/* Symbol: VCodecRefFreeYUVBuffer */
/* Demangled: VCodecRefFreeYUVBuffer */
int VCodecRefFreeYUVBuffer(void);

/* Symbol: EncIdctIntraBlock_memset0 */
/* Demangled: EncIdctIntraBlock_memset0 */
int EncIdctIntraBlock_memset0(void);

/* Symbol: EncDrvHybrid_Release */
/* Demangled: EncDrvHybrid_Release */
int EncDrvHybrid_Release(void);

/* Symbol: xMediaME_PixelMe */
/* Demangled: xMediaME_PixelMe */
int xMediaME_PixelMe(void);

/* Symbol: MP4SwEncStreamBufferAllocate */
/* Demangled: MP4SwEncStreamBufferAllocate */
int MP4SwEncStreamBufferAllocate(void);

/* Symbol: Calculate */
/* Demangled: Calculate */
int Calculate(void);

/* Symbol: EncTimeIncrement */
/* Demangled: EncTimeIncrement */
int EncTimeIncrement(void);

/* Symbol: g_dctDcSizeLuminance */
/* Demangled: g_dctDcSizeLuminance */
extern void* g_dctDcSizeLuminance;

/* Symbol: MP4SwEncGetRateCtrl */
/* Demangled: MP4SwEncGetRateCtrl */
int MP4SwEncGetRateCtrl(void);

/* Symbol: recImage_global */
/* Demangled: recImage_global */
extern void* recImage_global;

/* Symbol: EncIdctIntraBlock */
/* Demangled: EncIdctIntraBlock */
int EncIdctIntraBlock(void);

/* Symbol: stream_global */
/* Demangled: stream_global */
extern void* stream_global;

/* Symbol: MPEG4EncoderDeInitAdapt */
/* Demangled: MPEG4EncoderDeInitAdapt */
int MPEG4EncoderDeInitAdapt(void);

/* Symbol: g_denom17_intra */
/* Demangled: g_denom17_intra */
extern void* g_denom17_intra;

/* Symbol: MP4SwEncGetCodingCtrl */
/* Demangled: MP4SwEncGetCodingCtrl */
int MP4SwEncGetCodingCtrl(void);

/* Symbol: __ARM_asm.debug_abbrev */
/* Demangled: __ARM_asm.debug_abbrev */
extern void* obj___ARM_asm_debug_abbrev __asm__("__ARM_asm.debug_abbrev");

/* Symbol: xMediaME_InputMad_16x16 */
/* Demangled: xMediaME_InputMad_16x16 */
int xMediaME_InputMad_16x16(void);

/* Symbol: MP4SwEncCacheFlush */
/* Demangled: MP4SwEncCacheFlush */
int MP4SwEncCacheFlush(void);

/* Symbol: MP4SwEncSetGov */
/* Demangled: MP4SwEncSetGov */
int MP4SwEncSetGov(void);

/* Symbol: MP4SwEncStrmStart */
/* Demangled: MP4SwEncStrmStart */
int MP4SwEncStrmStart(void);

/* Symbol: max_block_matching_per_frame */
/* Demangled: max_block_matching_per_frame */
extern void* max_block_matching_per_frame;

/* Symbol: VideoEncoderIntFree */
/* Demangled: VideoEncoderIntFree */
int VideoEncoderIntFree(void);

/* Symbol: NotCodedMb */
/* Demangled: NotCodedMb */
int NotCodedMb(void);

/* Symbol: PutInterDC */
/* Demangled: PutInterDC */
int PutInterDC(void);

/* Symbol: BaseRC_AfterVopRc */
/* Demangled: BaseRC_AfterVopRc */
int BaseRC_AfterVopRc(void);

/* Symbol: g_mb_typeCurrent */
/* Demangled: g_mb_typeCurrent */
extern void* g_mb_typeCurrent;

/* Symbol: PixelME_MbAvailability */
/* Demangled: PixelME_MbAvailability */
int PixelME_MbAvailability(void);

/* Symbol: rc_global */
/* Demangled: rc_global */
extern void* rc_global;

/* Symbol: pSlice_global */
/* Demangled: pSlice_global */
extern void* pSlice_global;

/* Symbol: MP4SwEncCacheInvalidate */
/* Demangled: MP4SwEncCacheInvalidate */
int MP4SwEncCacheInvalidate(void);

/* Symbol: ZeroBlock */
/* Demangled: ZeroBlock */
int ZeroBlock(void);

/* Symbol: PixelME_MakeLumaPadded */
/* Demangled: PixelME_MakeLumaPadded */
int PixelME_MakeLumaPadded(void);

/* Symbol: EncUpdateFixWritePointer */
/* Demangled: EncUpdateFixWritePointer */
int EncUpdateFixWritePointer(void);

/* Symbol: ret_global */
/* Demangled: ret_global */
extern void* ret_global;

/* Symbol: wByteCnt_global */
/* Demangled: wByteCnt_global */
extern void* wByteCnt_global;

/* Symbol: total_block_matching */
/* Demangled: total_block_matching */
extern void* total_block_matching;

/* Symbol: EncVisObHdr */
/* Demangled: EncVisObHdr */
int EncVisObHdr(void);

/* Symbol: EncMbHeader */
/* Demangled: EncMbHeader */
int EncMbHeader(void);

/* Symbol: Limit */
/* Demangled: Limit */
int Limit(void);

/* Symbol: DispatchMeMbRows */
/* Demangled: DispatchMeMbRows */
int DispatchMeMbRows(void);

/* Symbol: VideoBufferVerifierSet */
/* Demangled: VideoBufferVerifierSet */
int VideoBufferVerifierSet(void);

/* Symbol: FrameQueueObtainFrame */
/* Demangled: FrameQueueObtainFrame */
int FrameQueueObtainFrame(void);

/* Symbol: MP4SwEncGetVersion */
/* Demangled: MP4SwEncGetVersion */
int MP4SwEncGetVersion(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int fn___aeabi_llsl(void) __asm__("__aeabi_llsl");

/* Symbol: HW_Trigger_Frame */
/* Demangled: HW_Trigger_Frame */
int HW_Trigger_Frame(void);

/* Symbol: coeff */
/* Demangled: coeff */
extern void* coeff;

/* Symbol: EncVopInit */
/* Demangled: EncVopInit */
int EncVopInit(void);

/* Symbol: g_tcoefIntra */
/* Demangled: g_tcoefIntra */
extern void* g_tcoefIntra;

/* Symbol: PutInter */
/* Demangled: PutInter */
int PutInter(void);

/* Symbol: MP4SwEncChkSHV */
/* Demangled: MP4SwEncChkSHV */
int MP4SwEncChkSHV(void);

/* Symbol: MP4SwEncCalloc_NonCacheable */
/* Demangled: MP4SwEncCalloc_NonCacheable */
int MP4SwEncCalloc_NonCacheable(void);

/* Symbol: VideoBufferVerifier */
/* Demangled: VideoBufferVerifier */
int VideoBufferVerifier(void);

/* Symbol: EncVolHdr */
/* Demangled: EncVolHdr */
int EncVolHdr(void);

/* Symbol: BaseCoder_MbAlloc */
/* Demangled: BaseCoder_MbAlloc */
int BaseCoder_MbAlloc(void);

/* Symbol: MP4SwEncQueryRecordSetting */
/* Demangled: MP4SwEncQueryRecordSetting */
int MP4SwEncQueryRecordSetting(void);

/* Symbol: EncVlcInter */
/* Demangled: EncVlcInter */
int EncVlcInter(void);

/* Symbol: EncVisObInit */
/* Demangled: EncVisObInit */
int EncVisObInit(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int fn___aeabi_llsr(void) __asm__("__aeabi_llsr");

/* Symbol: HalfPixelSad_xMedia_16x16 */
/* Demangled: HalfPixelSad_xMedia_16x16 */
int HalfPixelSad_xMedia_16x16(void);

/* Symbol: g_ovmap */
/* Demangled: g_ovmap */
extern void* g_ovmap;

/* Symbol: inputImage_global */
/* Demangled: inputImage_global */
extern void* inputImage_global;

/* Symbol: MPEG4EncoderInitAdapt */
/* Demangled: MPEG4EncoderInitAdapt */
int MPEG4EncoderInitAdapt(void);

/* Symbol: xMediaME_Free */
/* Demangled: xMediaME_Free */
int xMediaME_Free(void);

/* Symbol: in */
/* Demangled: in */
extern void* in;

/* Symbol: g_x */
/* Demangled: g_x */
extern void* g_x;

/* Symbol: g_DctDcSizeChrominance */
/* Demangled: g_DctDcSizeChrominance */
extern void* g_DctDcSizeChrominance;

/* Symbol: EncCheckCfg */
/* Demangled: EncCheckCfg */
int EncCheckCfg(void);

/* Symbol: EncImageFree */
/* Demangled: EncImageFree */
int EncImageFree(void);

/* Symbol: g_y */
/* Demangled: g_y */
extern void* g_y;

/* Symbol: TABLE_FAVOR_INTRA_THR */
/* Demangled: TABLE_FAVOR_INTRA_THR */
extern void* TABLE_FAVOR_INTRA_THR;

/* Symbol: FlipImage */
/* Demangled: FlipImage */
int FlipImage(void);

/* Symbol: MP4SwEncQueryPhysicalAddr */
/* Demangled: MP4SwEncQueryPhysicalAddr */
int MP4SwEncQueryPhysicalAddr(void);

/* Symbol: encounter_ringbuffer_end_global */
/* Demangled: encounter_ringbuffer_end_global */
extern void* encounter_ringbuffer_end_global;

/* Symbol: HW_EncCodeVop_Slice_CodeMb */
/* Demangled: HW_EncCodeVop_Slice_CodeMb */
int HW_EncCodeVop_Slice_CodeMb(void);

/* Symbol: g_dcScalerCh */
/* Demangled: g_dcScalerCh */
extern void* g_dcScalerCh;

/* Symbol: EncRcCheck */
/* Demangled: EncRcCheck */
int EncRcCheck(void);

/* Symbol: EncDifferentialMvEncoding */
/* Demangled: EncDifferentialMvEncoding */
int EncDifferentialMvEncoding(void);

/* Symbol: CopyMeStatisticsToRc */
/* Demangled: CopyMeStatisticsToRc */
int CopyMeStatisticsToRc(void);

/* Symbol: Rotate8_90 */
/* Demangled: Rotate8_90 */
int Rotate8_90(void);

/* Symbol: xMedia2ME_SearchCand_16x8 */
/* Demangled: xMedia2ME_SearchCand_16x8 */
int xMedia2ME_SearchCand_16x8(void);

/* Symbol: VisualRC_MbRateControl_var1 */
/* Demangled: VisualRC_MbRateControl_var1 */
int VisualRC_MbRateControl_var1(void);

/* Symbol: VCodecGetAvailableYUV */
/* Demangled: VCodecGetAvailableYUV */
int VCodecGetAvailableYUV(void);

/* Symbol: xMediaME_SearchCand_16x16 */
/* Demangled: xMediaME_SearchCand_16x16 */
int xMediaME_SearchCand_16x16(void);

/* Symbol: pInp_global */
/* Demangled: pInp_global */
extern void* pInp_global;

/* Symbol: sbuf_des_global */
/* Demangled: sbuf_des_global */
extern void* sbuf_des_global;

/* Symbol: ProcessInter */
/* Demangled: ProcessInter */
int ProcessInter(void);

/* Symbol: VisualRC_MbRateControl_var3 */
/* Demangled: VisualRC_MbRateControl_var3 */
int VisualRC_MbRateControl_var3(void);

/* Symbol: EncPutBitsFlushCache */
/* Demangled: EncPutBitsFlushCache */
int EncPutBitsFlushCache(void);

/* Symbol: EncDctInterBlock */
/* Demangled: EncDctInterBlock */
int EncDctInterBlock(void);

/* Symbol: NonCachableBufferTable */
/* Demangled: NonCachableBufferTable */
extern void* NonCachableBufferTable;

/* Symbol: EncInitParamME */
/* Demangled: EncInitParamME */
int EncInitParamME(void);

/* Symbol: IntraAct_Alloc */
/* Demangled: IntraAct_Alloc */
int IntraAct_Alloc(void);

/* Symbol: EncRollbackStream */
/* Demangled: EncRollbackStream */
int EncRollbackStream(void);

/* Symbol: MP4SwEncGetBitstream */
/* Demangled: MP4SwEncGetBitstream */
int MP4SwEncGetBitstream(void);

/* Symbol: MPEG4EncoderGetMemoryRequiredAdapt */
/* Demangled: MPEG4EncoderGetMemoryRequiredAdapt */
int MPEG4EncoderGetMemoryRequiredAdapt(void);

/* Symbol: HalfPixelSad_xMedia2_16x8 */
/* Demangled: HalfPixelSad_xMedia2_16x8 */
int HalfPixelSad_xMedia2_16x8(void);

/* Symbol: g_y_presub */
/* Demangled: g_y_presub */
extern void* g_y_presub;

/* Symbol: EncCopyTimeCode */
/* Demangled: EncCopyTimeCode */
int EncCopyTimeCode(void);

/* Symbol: MP4_printf */
/* Demangled: MP4_printf */
int MP4_printf(void);

/* Symbol: VCodecGetYUVBuffer */
/* Demangled: VCodecGetYUVBuffer */
int VCodecGetYUVBuffer(void);

/* Symbol: PixelME_HalfpixelGuess */
/* Demangled: PixelME_HalfpixelGuess */
int PixelME_HalfpixelGuess(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: EncSvhInit */
/* Demangled: EncSvhInit */
int EncSvhInit(void);

/* Symbol: VisualRC_UseMeStatistics */
/* Demangled: VisualRC_UseMeStatistics */
int VisualRC_UseMeStatistics(void);

/* Symbol: EncGoVopHdr */
/* Demangled: EncGoVopHdr */
int EncGoVopHdr(void);

/* Symbol: last_total_block_matching */
/* Demangled: last_total_block_matching */
extern void* last_total_block_matching;

/* Symbol: PixelIpol_8x16_simp */
/* Demangled: PixelIpol_8x16_simp */
int PixelIpol_8x16_simp(void);

/* Symbol: Me_Thread_Parallel_Proc */
/* Demangled: Me_Thread_Parallel_Proc */
int Me_Thread_Parallel_Proc(void);

/* Symbol: Trans_time */
/* Demangled: Trans_time */
extern void* Trans_time;

/* Symbol: TABLE_FAVOR_FLAT_INTRA_THR */
/* Demangled: TABLE_FAVOR_FLAT_INTRA_THR */
extern void* TABLE_FAVOR_FLAT_INTRA_THR;

/* Symbol: GetMPEG4EncoderAPI */
/* Demangled: GetMPEG4EncoderAPI */
int GetMPEG4EncoderAPI(void);

/* Symbol: MbParameter */
/* Demangled: MbParameter */
int MbParameter(void);

/* Symbol: MadSum */
/* Demangled: MadSum */
extern void* MadSum;

/* Symbol: g_fastIdctTbl */
/* Demangled: g_fastIdctTbl */
extern void* g_fastIdctTbl;

/* Symbol: g_quantTableInter */
/* Demangled: g_quantTableInter */
extern void* g_quantTableInter;

/* Symbol: FrameQueueFillHybridInput */
/* Demangled: FrameQueueFillHybridInput */
int FrameQueueFillHybridInput(void);

/* Symbol: EncVolInit */
/* Demangled: EncVolInit */
int EncVolInit(void);

/* Symbol: resume_after_paused_global */
/* Demangled: resume_after_paused_global */
extern void* resume_after_paused_global;

/* Symbol: EncAlignBuffer */
/* Demangled: EncAlignBuffer */
int EncAlignBuffer(void);

/* Symbol: oldMbNum_global */
/* Demangled: oldMbNum_global */
extern void* oldMbNum_global;

/* Symbol: AdctCoder_MbFree */
/* Demangled: AdctCoder_MbFree */
int AdctCoder_MbFree(void);

/* Symbol: InvProcessInter */
/* Demangled: InvProcessInter */
int InvProcessInter(void);

/* Symbol: EncBookmarkStream */
/* Demangled: EncBookmarkStream */
int EncBookmarkStream(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int fn___aeabi_ldiv0(void) __asm__("__aeabi_ldiv0");

/* Symbol: MP4SwEncRollback */
/* Demangled: MP4SwEncRollback */
int MP4SwEncRollback(void);

/* Symbol: PixelME_InputMad */
/* Demangled: PixelME_InputMad */
int PixelME_InputMad(void);

/* Symbol: EncVosHrd */
/* Demangled: EncVosHrd */
int EncVosHrd(void);

/* Symbol: pInst_global */
/* Demangled: pInst_global */
extern void* pInst_global;

/* Symbol: HW_Encoded_ByteLength_Previous */
/* Demangled: HW_Encoded_ByteLength_Previous */
extern void* HW_Encoded_ByteLength_Previous;

/* Symbol: xMedia2ME_Me_Init */
/* Demangled: xMedia2ME_Me_Init */
int xMedia2ME_Me_Init(void);

/* Symbol: SetMemory */
/* Demangled: SetMemory */
int SetMemory(void);

/* Symbol: NEON_MAD_16x8_Calculation */
/* Demangled: NEON_MAD_16x8_Calculation */
int NEON_MAD_16x8_Calculation(void);

/* Symbol: GetTimeCode */
/* Demangled: GetTimeCode */
int GetTimeCode(void);

/* Symbol: EncodePictureCoder_Hybrid_Slice_Control_Prepare */
/* Demangled: EncodePictureCoder_Hybrid_Slice_Control_Prepare */
int EncodePictureCoder_Hybrid_Slice_Control_Prepare(void);

/* Symbol: xMedia2_PixelIpol_FullScale */
/* Demangled: xMedia2_PixelIpol_FullScale */
int xMedia2_PixelIpol_FullScale(void);

/* Symbol: EncVosEndHrd */
/* Demangled: EncVosEndHrd */
int EncVosEndHrd(void);

/* Symbol: g_clip8 */
/* Demangled: g_clip8 */
extern void* g_clip8;

/* Symbol: BaseRC_UseMeStatistics */
/* Demangled: BaseRC_UseMeStatistics */
int BaseRC_UseMeStatistics(void);

/* Symbol: PixelME_Prediction */
/* Demangled: PixelME_Prediction */
int PixelME_Prediction(void);

/* Symbol: PixelME_Get */
/* Demangled: PixelME_Get */
int PixelME_Get(void);

/* Symbol: VCodecMalloc */
/* Demangled: VCodecMalloc */
int VCodecMalloc(void);

/* Symbol: hybrid_mp4enc_retrieve_event */
/* Demangled: hybrid_mp4enc_retrieve_event */
int hybrid_mp4enc_retrieve_event(void);

/* Symbol: IntraAct_Free */
/* Demangled: IntraAct_Free */
int IntraAct_Free(void);

/* Symbol: xMedia2ME_PixelMe */
/* Demangled: xMedia2ME_PixelMe */
int xMedia2ME_PixelMe(void);

/* Symbol: MP4SwEncQueryCapability */
/* Demangled: MP4SwEncQueryCapability */
int MP4SwEncQueryCapability(void);

/* Symbol: EncDcCoefficient */
/* Demangled: EncDcCoefficient */
int EncDcCoefficient(void);

/* Symbol: PseudoSlice */
/* Demangled: PseudoSlice */
extern void* PseudoSlice;

/* Symbol: MPEG4EncoderEncodeOneFrame */
/* Demangled: MPEG4EncoderEncodeOneFrame */
int MPEG4EncoderEncodeOneFrame(void);

/* Symbol: MP4SwEncPaused */
/* Demangled: MP4SwEncPaused */
int MP4SwEncPaused(void);

/* Symbol: complexity_global */
/* Demangled: complexity_global */
extern void* complexity_global;

/* Symbol: xMediaME_Alloc */
/* Demangled: xMediaME_Alloc */
int xMediaME_Alloc(void);

/* Symbol: EncRollbackMB */
/* Demangled: EncRollbackMB */
int EncRollbackMB(void);

/* Symbol: MP4SwEncInit */
/* Demangled: MP4SwEncInit */
int MP4SwEncInit(void);

/* Symbol: oldCodeState_global */
/* Demangled: oldCodeState_global */
extern void* oldCodeState_global;

/* Symbol: g_mb_data */
/* Demangled: g_mb_data */
extern void* g_mb_data;

/* Symbol: BaseRC_BeforeVopRc */
/* Demangled: BaseRC_BeforeVopRc */
int BaseRC_BeforeVopRc(void);

/* Symbol: g_dcScalerInvCh */
/* Demangled: g_dcScalerInvCh */
extern void* g_dcScalerInvCh;

/* Symbol: VideoEncoderIntMalloc */
/* Demangled: VideoEncoderIntMalloc */
int VideoEncoderIntMalloc(void);

/* Symbol: VideoEncoderReleaseYUV */
/* Demangled: VideoEncoderReleaseYUV */
int VideoEncoderReleaseYUV(void);

/* Symbol: BaseCoder_EncIntra */
/* Demangled: BaseCoder_EncIntra */
int BaseCoder_EncIntra(void);

/* Symbol: EncProcessIntraSvh */
/* Demangled: EncProcessIntraSvh */
int EncProcessIntraSvh(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int fn___gnu_uldivmod_helper(void) __asm__("__gnu_uldivmod_helper");

/* Symbol: UpdateSmallCrossSAD */
/* Demangled: UpdateSmallCrossSAD */
int UpdateSmallCrossSAD(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int fn___divdi3(void) __asm__("__divdi3");

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int fn___aeabi_idivmod(void) __asm__("__aeabi_idivmod");

/* Symbol: EncImageAlloc */
/* Demangled: EncImageAlloc */
int EncImageAlloc(void);

/* Symbol: g_mb_mv */
/* Demangled: g_mb_mv */
extern void* g_mb_mv;

/* Symbol: EncCodeVop */
/* Demangled: EncCodeVop */
int EncCodeVop(void);

/* Symbol: EncPrediction */
/* Demangled: EncPrediction */
int EncPrediction(void);

/* Symbol: overfillprint */
/* Demangled: overfillprint */
extern void* overfillprint;

/* Symbol: EncInitProfile */
/* Demangled: EncInitProfile */
int EncInitProfile(void);

/* Symbol: xMedia2ME_Me_Finish */
/* Demangled: xMedia2ME_Me_Finish */
int xMedia2ME_Me_Finish(void);

/* Symbol: EncVidObHdr */
/* Demangled: EncVidObHdr */
int EncVidObHdr(void);

/* Symbol: xMedia2ME_Me */
/* Demangled: xMedia2ME_Me */
int xMedia2ME_Me(void);

/* Symbol: VideoEncoderPaused */
/* Demangled: VideoEncoderPaused */
int VideoEncoderPaused(void);

/* Symbol: Rotate16_90 */
/* Demangled: Rotate16_90 */
int Rotate16_90(void);

/* Symbol: MP4SwEncSetRateCtrl */
/* Demangled: MP4SwEncSetRateCtrl */
int MP4SwEncSetRateCtrl(void);

/* Symbol: HW_EncSvhHdr */
/* Demangled: HW_EncSvhHdr */
int HW_EncSvhHdr(void);

/* Symbol: NEON_INTERPOLATION_GUESS_0_2 */
/* Demangled: NEON_INTERPOLATION_GUESS_0_2 */
int NEON_INTERPOLATION_GUESS_0_2(void);

/* Symbol: VisualRC_MbBookMark */
/* Demangled: VisualRC_MbBookMark */
int VisualRC_MbBookMark(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int fn___gnu_ldivmod_helper(void) __asm__("__gnu_ldivmod_helper");

/* Symbol: MP4SwEncFree */
/* Demangled: MP4SwEncFree */
int MP4SwEncFree(void);

/* Symbol: EncIntraSvh */
/* Demangled: EncIntraSvh */
int EncIntraSvh(void);

/* Symbol: BaseRC_MbRateControl */
/* Demangled: BaseRC_MbRateControl */
int BaseRC_MbRateControl(void);

/* Symbol: MPEG4EncoderCustomSetting */
/* Demangled: MPEG4EncoderCustomSetting */
extern void* MPEG4EncoderCustomSetting;

/* Symbol: VLCTbl */
/* Demangled: VLCTbl */
extern void* VLCTbl;

/* Symbol: HW_EncRollbackMB */
/* Demangled: HW_EncRollbackMB */
int HW_EncRollbackMB(void);

/* Symbol: MPEG4EncoderCloseAdapt */
/* Demangled: MPEG4EncoderCloseAdapt */
int MPEG4EncoderCloseAdapt(void);

/* Symbol: mEnableUserLoadLogD */
/* Demangled: mEnableUserLoadLogD */
extern void* mEnableUserLoadLogD;

/* Symbol: xMediaME_Preprocess */
/* Demangled: xMediaME_Preprocess */
int xMediaME_Preprocess(void);

/* Symbol: dump_info */
/* Demangled: dump_info */
extern void* dump_info;

/* Symbol: GetInter32 */
/* Demangled: GetInter32 */
int GetInter32(void);

/* Symbol: EncProcessIntra */
/* Demangled: EncProcessIntra */
int EncProcessIntra(void);

/* Symbol: g_thr_must_be_zero_row_intra */
/* Demangled: g_thr_must_be_zero_row_intra */
extern void* g_thr_must_be_zero_row_intra;

/* Symbol: EncDrvHybrid_EncodeDone */
/* Demangled: EncDrvHybrid_EncodeDone */
int EncDrvHybrid_EncodeDone(void);

/* Symbol: TABLE_FAVOR_INTRA_THR_XMEDIA */
/* Demangled: TABLE_FAVOR_INTRA_THR_XMEDIA */
extern void* TABLE_FAVOR_INTRA_THR_XMEDIA;

/* Symbol: timeCode_global */
/* Demangled: timeCode_global */
extern void* timeCode_global;

/* Symbol: MP4SwEncSetCodingCtrl */
/* Demangled: MP4SwEncSetCodingCtrl */
int MP4SwEncSetCodingCtrl(void);

/* Symbol: IntraAct_Me */
/* Demangled: IntraAct_Me */
int IntraAct_Me(void);

/* Symbol: VisualRC_InitMbRateControl */
/* Demangled: VisualRC_InitMbRateControl */
int VisualRC_InitMbRateControl(void);

/* Symbol: xMediaME_SearchCand_16x8 */
/* Demangled: xMediaME_SearchCand_16x8 */
int xMediaME_SearchCand_16x8(void);

/* Symbol: HW_EncCodeVop_Slice_CodeMb_Finish */
/* Demangled: HW_EncCodeVop_Slice_CodeMb_Finish */
int HW_EncCodeVop_Slice_CodeMb_Finish(void);

/* Symbol: MPEG4EncoderOpenAdapt */
/* Demangled: MPEG4EncoderOpenAdapt */
int MPEG4EncoderOpenAdapt(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMP4ENC_XA_CA7_H */
