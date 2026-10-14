/*
 * Reverse-Engineered ABI Specification for: libmp4enc_sa.ca7.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmp4enc_sa.ca7.so
 */

#ifndef BEGONIA_RE_LIBMP4ENC_SA_CA7_H
#define BEGONIA_RE_LIBMP4ENC_SA_CA7_H

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

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int fn___aeabi_uldivmod(void) __asm__("__aeabi_uldivmod");

/* Symbol: g_sub_cand */
/* Demangled: g_sub_cand */
extern void* g_sub_cand;

/* Symbol: EncVlcIntraSvh */
/* Demangled: EncVlcIntraSvh */
int EncVlcIntraSvh(void);

/* Symbol: MP4SwEncSetUsrData */
/* Demangled: MP4SwEncSetUsrData */
int MP4SwEncSetUsrData(void);

/* Symbol: PixelME_MedianFilter */
/* Demangled: PixelME_MedianFilter */
int PixelME_MedianFilter(void);

/* Symbol: MPEG4EncoderGetParameterAdapt */
/* Demangled: MPEG4EncoderGetParameterAdapt */
int MPEG4EncoderGetParameterAdapt(void);

/* Symbol: TABLE_FAVOR_ZERO_MV_XMEDIA */
/* Demangled: TABLE_FAVOR_ZERO_MV_XMEDIA */
extern void* TABLE_FAVOR_ZERO_MV_XMEDIA;

/* Symbol: xMediaME_InputMad_16x8_ASM */
/* Demangled: xMediaME_InputMad_16x8_ASM */
int xMediaME_InputMad_16x8_ASM(void);

/* Symbol: VCodecFree */
/* Demangled: VCodecFree */
int VCodecFree(void);

/* Symbol: PixelME_SavePredBlock */
/* Demangled: PixelME_SavePredBlock */
int PixelME_SavePredBlock(void);

/* Symbol: EncSetBuffer */
/* Demangled: EncSetBuffer */
int EncSetBuffer(void);

/* Symbol: VideoEncoderUpdateBitstreamWP */
/* Demangled: VideoEncoderUpdateBitstreamWP */
int VideoEncoderUpdateBitstreamWP(void);

/* Symbol: PixelME_Preprocess */
/* Demangled: PixelME_Preprocess */
int PixelME_Preprocess(void);

/* Symbol: EncInitCoder */
/* Demangled: EncInitCoder */
int EncInitCoder(void);

/* Symbol: EncIdctInterBlock_memset0 */
/* Demangled: EncIdctInterBlock_memset0 */
int EncIdctInterBlock_memset0(void);

/* Symbol: EncMeSetupRotation */
/* Demangled: EncMeSetupRotation */
int EncMeSetupRotation(void);

/* Symbol: EncFlushBits */
/* Demangled: EncFlushBits */
int EncFlushBits(void);

/* Symbol: MPEG4EncoderGenerateHeader */
/* Demangled: MPEG4EncoderGenerateHeader */
int MPEG4EncoderGenerateHeader(void);

/* Symbol: Rotate8_180 */
/* Demangled: Rotate8_180 */
int Rotate8_180(void);

/* Symbol: g_mb_pred */
/* Demangled: g_mb_pred */
extern void* g_mb_pred;

/* Symbol: Rotate16_180 */
/* Demangled: Rotate16_180 */
int Rotate16_180(void);

/* Symbol: EncTimeCode */
/* Demangled: EncTimeCode */
int EncTimeCode(void);

/* Symbol: xMediaME_InputMad_16x8 */
/* Demangled: xMediaME_InputMad_16x8 */
int xMediaME_InputMad_16x8(void);

/* Symbol: Rotate8_270 */
/* Demangled: Rotate8_270 */
int Rotate8_270(void);

/* Symbol: MP4SwEncYUVEncoded */
/* Demangled: MP4SwEncYUVEncoded */
int MP4SwEncYUVEncoded(void);

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

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int fn___ashldi3(void) __asm__("__ashldi3");

/* Symbol: PixelME_Me */
/* Demangled: PixelME_Me */
int PixelME_Me(void);

/* Symbol: EncGoVopInit */
/* Demangled: EncGoVopInit */
int EncGoVopInit(void);

/* Symbol: Rotate16_0 */
/* Demangled: Rotate16_0 */
int Rotate16_0(void);

/* Symbol: g_thr_must_be_zero_row_intra_16bit */
/* Demangled: g_thr_must_be_zero_row_intra_16bit */
extern void* g_thr_must_be_zero_row_intra_16bit;

/* Symbol: EncVopHdr */
/* Demangled: EncVopHdr */
int EncVopHdr(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int fn___aeabi_idiv0(void) __asm__("__aeabi_idiv0");

/* Symbol: EncVlcIntra */
/* Demangled: EncVlcIntra */
int EncVlcIntra(void);

/* Symbol: BaseCoder_MbFree */
/* Demangled: BaseCoder_MbFree */
int BaseCoder_MbFree(void);

/* Symbol: g_hme_ip_width */
/* Demangled: g_hme_ip_width */
extern void* g_hme_ip_width;

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int fn___lshrdi3(void) __asm__("__lshrdi3");

/* Symbol: EncBookmarkMB */
/* Demangled: EncBookmarkMB */
int EncBookmarkMB(void);

/* Symbol: AdctCoder_MbAlloc */
/* Demangled: AdctCoder_MbAlloc */
int AdctCoder_MbAlloc(void);

/* Symbol: EncUserDataSet */
/* Demangled: EncUserDataSet */
int EncUserDataSet(void);

/* Symbol: BaseCoder_GetPredictorMb_Padded */
/* Demangled: BaseCoder_GetPredictorMb_Padded */
int BaseCoder_GetPredictorMb_Padded(void);

/* Symbol: EncVosInit */
/* Demangled: EncVosInit */
int EncVosInit(void);

/* Symbol: EncInterSvh */
/* Demangled: EncInterSvh */
int EncInterSvh(void);

/* Symbol: idct_coeff1_enc */
/* Demangled: idct_coeff1_enc */
extern void* idct_coeff1_enc;

/* Symbol: g_mb_predCurrent */
/* Demangled: g_mb_predCurrent */
extern void* g_mb_predCurrent;

/* Symbol: FixBuffer */
/* Demangled: FixBuffer */
int FixBuffer(void);

/* Symbol: EncAllocStreamSlice */
/* Demangled: EncAllocStreamSlice */
int EncAllocStreamSlice(void);

/* Symbol: g_dcScalerLum */
/* Demangled: g_dcScalerLum */
extern void* g_dcScalerLum;

/* Symbol: EncProfileCheck */
/* Demangled: EncProfileCheck */
int EncProfileCheck(void);

/* Symbol: Rotate8_0 */
/* Demangled: Rotate8_0 */
int Rotate8_0(void);

/* Symbol: EncUserData */
/* Demangled: EncUserData */
int EncUserData(void);

/* Symbol: MPEG4EncoderSetParameterAdapt */
/* Demangled: MPEG4EncoderSetParameterAdapt */
int MPEG4EncoderSetParameterAdapt(void);

/* Symbol: g_thr_must_be_zero_row_inter_16bit */
/* Demangled: g_thr_must_be_zero_row_inter_16bit */
extern void* g_thr_must_be_zero_row_inter_16bit;

/* Symbol: MP4SwEncRelease */
/* Demangled: MP4SwEncRelease */
int MP4SwEncRelease(void);

/* Symbol: BaseRC_MbBookMark */
/* Demangled: BaseRC_MbBookMark */
int BaseRC_MbBookMark(void);

/* Symbol: MP4SwEncCalloc */
/* Demangled: MP4SwEncCalloc */
int MP4SwEncCalloc(void);

/* Symbol: g_rotated_mb */
/* Demangled: g_rotated_mb */
extern void* g_rotated_mb;

/* Symbol: MP4SwEncMemset */
/* Demangled: MP4SwEncMemset */
int MP4SwEncMemset(void);

/* Symbol: EncNextStartCode */
/* Demangled: EncNextStartCode */
int EncNextStartCode(void);

/* Symbol: HalfPixelSad_xMedia_16x8 */
/* Demangled: HalfPixelSad_xMedia_16x8 */
int HalfPixelSad_xMedia_16x8(void);

/* Symbol: MP4SwEncStrmEnd */
/* Demangled: MP4SwEncStrmEnd */
int MP4SwEncStrmEnd(void);

/* Symbol: g_thr_must_be_zero_row_intra16 */
/* Demangled: g_thr_must_be_zero_row_intra16 */
extern void* g_thr_must_be_zero_row_intra16;

/* Symbol: g_x_presub */
/* Demangled: g_x_presub */
extern void* g_x_presub;

/* Symbol: g_inst */
/* Demangled: g_inst */
extern void* g_inst;

/* Symbol: EncVlcInterSvh */
/* Demangled: EncVlcInterSvh */
int EncVlcInterSvh(void);

/* Symbol: EncUserDataFree */
/* Demangled: EncUserDataFree */
int EncUserDataFree(void);

/* Symbol: _rMPEG4EncoderAPI */
/* Demangled: _rMPEG4EncoderAPI */
extern void* _rMPEG4EncoderAPI;

/* Symbol: TABLE_FLAT_AREA_THR */
/* Demangled: TABLE_FLAT_AREA_THR */
extern void* TABLE_FLAT_AREA_THR;

/* Symbol: MPEG4EncoderGetNextBitstream */
/* Demangled: MPEG4EncoderGetNextBitstream */
int MPEG4EncoderGetNextBitstream(void);

/* Symbol: EncRotateMB */
/* Demangled: EncRotateMB */
int EncRotateMB(void);

/* Symbol: FillMB16_ASM */
/* Demangled: FillMB16_ASM */
int FillMB16_ASM(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int fn___aeabi_idiv(void) __asm__("__aeabi_idiv");

/* Symbol: g_quantTableIntra */
/* Demangled: g_quantTableIntra */
extern void* g_quantTableIntra;

/* Symbol: PutInterZero */
/* Demangled: PutInterZero */
int PutInterZero(void);

/* Symbol: g_positions */
/* Demangled: g_positions */
extern void* g_positions;

/* Symbol: EncNextByteAligned */
/* Demangled: EncNextByteAligned */
int EncNextByteAligned(void);

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

/* Symbol: __aeabi_uwrite4 */
/* Demangled: __aeabi_uwrite4 */
int fn___aeabi_uwrite4(void) __asm__("__aeabi_uwrite4");

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: NonCachableBufferTableSize */
/* Demangled: NonCachableBufferTableSize */
extern void* NonCachableBufferTableSize;

/* Symbol: __aeabi_uwrite8 */
/* Demangled: __aeabi_uwrite8 */
int fn___aeabi_uwrite8(void) __asm__("__aeabi_uwrite8");

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

/* Symbol: GetInter64 */
/* Demangled: GetInter64 */
int GetInter64(void);

/* Symbol: EncSvhCheck */
/* Demangled: EncSvhCheck */
int EncSvhCheck(void);

/* Symbol: srcInter */
/* Demangled: srcInter */
extern void* srcInter;

/* Symbol: EncProcessIntra_v2 */
/* Demangled: EncProcessIntra_v2 */
int EncProcessIntra_v2(void);

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

/* Symbol: EncDctInterSvhBlock */
/* Demangled: EncDctInterSvhBlock */
int EncDctInterSvhBlock(void);

/* Symbol: EncIdctInterBlock */
/* Demangled: EncIdctInterBlock */
int EncIdctInterBlock(void);

/* Symbol: ReturnStaticInstance */
/* Demangled: ReturnStaticInstance */
int ReturnStaticInstance(void);

/* Symbol: idct_coeff2_enc */
/* Demangled: idct_coeff2_enc */
extern void* idct_coeff2_enc;

/* Symbol: g_mx */
/* Demangled: g_mx */
extern void* g_mx;

/* Symbol: VideoEncoderFree */
/* Demangled: VideoEncoderFree */
int VideoEncoderFree(void);

/* Symbol: g_my */
/* Demangled: g_my */
extern void* g_my;

/* Symbol: g_thr_must_be_zero_row_inter */
/* Demangled: g_thr_must_be_zero_row_inter */
extern void* g_thr_must_be_zero_row_inter;

/* Symbol: MP4SwEncMemcpy */
/* Demangled: MP4SwEncMemcpy */
int MP4SwEncMemcpy(void);

/* Symbol: MP4ENCLOGD */
/* Demangled: MP4ENCLOGD */
int MP4ENCLOGD(void);

/* Symbol: VideoEncoderAllocateBitstreamBuffer */
/* Demangled: VideoEncoderAllocateBitstreamBuffer */
int VideoEncoderAllocateBitstreamBuffer(void);

/* Symbol: g_mb_predAbove */
/* Demangled: g_mb_predAbove */
extern void* g_mb_predAbove;

/* Symbol: xMediaFastME_Me */
/* Demangled: xMediaFastME_Me */
int xMediaFastME_Me(void);

/* Symbol: MP4SwEncStreamBufferUpdate */
/* Demangled: MP4SwEncStreamBufferUpdate */
int MP4SwEncStreamBufferUpdate(void);

/* Symbol: PixelME_PixelMe */
/* Demangled: PixelME_PixelMe */
int PixelME_PixelMe(void);

/* Symbol: EncPredictionFix */
/* Demangled: EncPredictionFix */
int EncPredictionFix(void);

/* Symbol: Fill */
/* Demangled: Fill */
int Fill(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int fn___udivdi3(void) __asm__("__udivdi3");

/* Symbol: EncIdctIntraBlock_memset0 */
/* Demangled: EncIdctIntraBlock_memset0 */
int EncIdctIntraBlock_memset0(void);

/* Symbol: TABLE_ADV_FLAT_AREA_THR */
/* Demangled: TABLE_ADV_FLAT_AREA_THR */
extern void* TABLE_ADV_FLAT_AREA_THR;

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

/* Symbol: EncIdctIntraBlock */
/* Demangled: EncIdctIntraBlock */
int EncIdctIntraBlock(void);

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

/* Symbol: VideoEncoderIntFree */
/* Demangled: VideoEncoderIntFree */
int VideoEncoderIntFree(void);

/* Symbol: NotCodedMb */
/* Demangled: NotCodedMb */
int NotCodedMb(void);

/* Symbol: BaseRC_AfterVopRc */
/* Demangled: BaseRC_AfterVopRc */
int BaseRC_AfterVopRc(void);

/* Symbol: PutInterDC */
/* Demangled: PutInterDC */
int PutInterDC(void);

/* Symbol: g_mb_typeCurrent */
/* Demangled: g_mb_typeCurrent */
extern void* g_mb_typeCurrent;

/* Symbol: xMediaME_Me */
/* Demangled: xMediaME_Me */
int xMediaME_Me(void);

/* Symbol: PixelME_MbAvailability */
/* Demangled: PixelME_MbAvailability */
int PixelME_MbAvailability(void);

/* Symbol: PixelME_Free */
/* Demangled: PixelME_Free */
int PixelME_Free(void);

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

/* Symbol: EncVisObHdr */
/* Demangled: EncVisObHdr */
int EncVisObHdr(void);

/* Symbol: EncMbHeader */
/* Demangled: EncMbHeader */
int EncMbHeader(void);

/* Symbol: Limit */
/* Demangled: Limit */
int Limit(void);

/* Symbol: VideoBufferVerifierSet */
/* Demangled: VideoBufferVerifierSet */
int VideoBufferVerifierSet(void);

/* Symbol: PixelME_SearchCand */
/* Demangled: PixelME_SearchCand */
int PixelME_SearchCand(void);

/* Symbol: Fill_COPY_ASM */
/* Demangled: Fill_COPY_ASM */
int Fill_COPY_ASM(void);

/* Symbol: MP4SwEncGetVersion */
/* Demangled: MP4SwEncGetVersion */
int MP4SwEncGetVersion(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int fn___aeabi_llsl(void) __asm__("__aeabi_llsl");

/* Symbol: EncVopInit */
/* Demangled: EncVopInit */
int EncVopInit(void);

/* Symbol: coeff */
/* Demangled: coeff */
extern void* coeff;

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

/* Symbol: PixelME_Alloc */
/* Demangled: PixelME_Alloc */
int PixelME_Alloc(void);

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

/* Symbol: EncVisObInit */
/* Demangled: EncVisObInit */
int EncVisObInit(void);

/* Symbol: EncVlcInter */
/* Demangled: EncVlcInter */
int EncVlcInter(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int fn___aeabi_llsr(void) __asm__("__aeabi_llsr");

/* Symbol: HalfPixelSad_xMedia_16x16 */
/* Demangled: HalfPixelSad_xMedia_16x16 */
int HalfPixelSad_xMedia_16x16(void);

/* Symbol: g_ovmap */
/* Demangled: g_ovmap */
extern void* g_ovmap;

/* Symbol: MPEG4EncoderInitAdapt */
/* Demangled: MPEG4EncoderInitAdapt */
int MPEG4EncoderInitAdapt(void);

/* Symbol: xMediaME_Free */
/* Demangled: xMediaME_Free */
int xMediaME_Free(void);

/* Symbol: hantro_8x8Chendct_c */
/* Demangled: hantro_8x8Chendct_c */
int hantro_8x8Chendct_c(void);

/* Symbol: g_x */
/* Demangled: g_x */
extern void* g_x;

/* Symbol: __aeabi_uread4 */
/* Demangled: __aeabi_uread4 */
int fn___aeabi_uread4(void) __asm__("__aeabi_uread4");

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

/* Symbol: HalfPixelSad_FullScale_96p */
/* Demangled: HalfPixelSad_FullScale_96p */
int HalfPixelSad_FullScale_96p(void);

/* Symbol: g_dcScalerCh */
/* Demangled: g_dcScalerCh */
extern void* g_dcScalerCh;

/* Symbol: EncRcCheck */
/* Demangled: EncRcCheck */
int EncRcCheck(void);

/* Symbol: __aeabi_uread8 */
/* Demangled: __aeabi_uread8 */
int fn___aeabi_uread8(void) __asm__("__aeabi_uread8");

/* Symbol: EncDifferentialMvEncoding */
/* Demangled: EncDifferentialMvEncoding */
int EncDifferentialMvEncoding(void);

/* Symbol: Rotate8_90 */
/* Demangled: Rotate8_90 */
int Rotate8_90(void);

/* Symbol: xMediaME_SearchCand_16x16 */
/* Demangled: xMediaME_SearchCand_16x16 */
int xMediaME_SearchCand_16x16(void);

/* Symbol: ProcessInter */
/* Demangled: ProcessInter */
int ProcessInter(void);

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

/* Symbol: BaseCoder_GetPredictorMb_Padded_COPY_McImage */
/* Demangled: BaseCoder_GetPredictorMb_Padded_COPY_McImage */
int BaseCoder_GetPredictorMb_Padded_COPY_McImage(void);

/* Symbol: EncRollbackStream */
/* Demangled: EncRollbackStream */
int EncRollbackStream(void);

/* Symbol: MP4SwEncGetBitstream */
/* Demangled: MP4SwEncGetBitstream */
int MP4SwEncGetBitstream(void);

/* Symbol: MPEG4EncoderGetMemoryRequiredAdapt */
/* Demangled: MPEG4EncoderGetMemoryRequiredAdapt */
int MPEG4EncoderGetMemoryRequiredAdapt(void);

/* Symbol: g_y_presub */
/* Demangled: g_y_presub */
extern void* g_y_presub;

/* Symbol: EncCopyTimeCode */
/* Demangled: EncCopyTimeCode */
int EncCopyTimeCode(void);

/* Symbol: MP4_printf */
/* Demangled: MP4_printf */
int MP4_printf(void);

/* Symbol: PixelME_HalfpixelGuess */
/* Demangled: PixelME_HalfpixelGuess */
int PixelME_HalfpixelGuess(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: EncSvhInit */
/* Demangled: EncSvhInit */
int EncSvhInit(void);

/* Symbol: EncGoVopHdr */
/* Demangled: EncGoVopHdr */
int EncGoVopHdr(void);

/* Symbol: xMediaME_SearchCand_16x8_ASM */
/* Demangled: xMediaME_SearchCand_16x8_ASM */
int xMediaME_SearchCand_16x8_ASM(void);

/* Symbol: PixelIpol_FullScale */
/* Demangled: PixelIpol_FullScale */
int PixelIpol_FullScale(void);

/* Symbol: TABLE_FAVOR_FLAT_INTRA_THR */
/* Demangled: TABLE_FAVOR_FLAT_INTRA_THR */
extern void* TABLE_FAVOR_FLAT_INTRA_THR;

/* Symbol: GetMPEG4EncoderAPI */
/* Demangled: GetMPEG4EncoderAPI */
int GetMPEG4EncoderAPI(void);

/* Symbol: g_quantTableInter */
/* Demangled: g_quantTableInter */
extern void* g_quantTableInter;

/* Symbol: g_fastIdctTbl */
/* Demangled: g_fastIdctTbl */
extern void* g_fastIdctTbl;

/* Symbol: EncVolInit */
/* Demangled: EncVolInit */
int EncVolInit(void);

/* Symbol: EncAlignBuffer */
/* Demangled: EncAlignBuffer */
int EncAlignBuffer(void);

/* Symbol: AdctCoder_MbFree */
/* Demangled: AdctCoder_MbFree */
int AdctCoder_MbFree(void);

/* Symbol: EncBookmarkStream */
/* Demangled: EncBookmarkStream */
int EncBookmarkStream(void);

/* Symbol: InvProcessInter */
/* Demangled: InvProcessInter */
int InvProcessInter(void);

/* Symbol: MP4SwEncRollback */
/* Demangled: MP4SwEncRollback */
int MP4SwEncRollback(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int fn___aeabi_ldiv0(void) __asm__("__aeabi_ldiv0");

/* Symbol: PixelME_InputMad */
/* Demangled: PixelME_InputMad */
int PixelME_InputMad(void);

/* Symbol: EncVosHrd */
/* Demangled: EncVosHrd */
int EncVosHrd(void);

/* Symbol: SetMemory */
/* Demangled: SetMemory */
int SetMemory(void);

/* Symbol: GetTimeCode */
/* Demangled: GetTimeCode */
int GetTimeCode(void);

/* Symbol: EncVosEndHrd */
/* Demangled: EncVosEndHrd */
int EncVosEndHrd(void);

/* Symbol: BaseRC_UseMeStatistics */
/* Demangled: BaseRC_UseMeStatistics */
int BaseRC_UseMeStatistics(void);

/* Symbol: g_clip8 */
/* Demangled: g_clip8 */
extern void* g_clip8;

/* Symbol: PixelME_Prediction */
/* Demangled: PixelME_Prediction */
int PixelME_Prediction(void);

/* Symbol: PixelME_Get */
/* Demangled: PixelME_Get */
int PixelME_Get(void);

/* Symbol: VCodecMalloc */
/* Demangled: VCodecMalloc */
int VCodecMalloc(void);

/* Symbol: MP4SwEncQueryCapability */
/* Demangled: MP4SwEncQueryCapability */
int MP4SwEncQueryCapability(void);

/* Symbol: EncDcCoefficient */
/* Demangled: EncDcCoefficient */
int EncDcCoefficient(void);

/* Symbol: MPEG4EncoderEncodeOneFrame */
/* Demangled: MPEG4EncoderEncodeOneFrame */
int MPEG4EncoderEncodeOneFrame(void);

/* Symbol: MP4SwEncPaused */
/* Demangled: MP4SwEncPaused */
int MP4SwEncPaused(void);

/* Symbol: xMediaME_Alloc */
/* Demangled: xMediaME_Alloc */
int xMediaME_Alloc(void);

/* Symbol: PixelME_SavePredBlock_ASM */
/* Demangled: PixelME_SavePredBlock_ASM */
int PixelME_SavePredBlock_ASM(void);

/* Symbol: TABLE_ADV_FAVOR_FLAT_INTRA_THR */
/* Demangled: TABLE_ADV_FAVOR_FLAT_INTRA_THR */
extern void* TABLE_ADV_FAVOR_FLAT_INTRA_THR;

/* Symbol: EncRollbackMB */
/* Demangled: EncRollbackMB */
int EncRollbackMB(void);

/* Symbol: MP4SwEncInit */
/* Demangled: MP4SwEncInit */
int MP4SwEncInit(void);

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

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int fn___divdi3(void) __asm__("__divdi3");

/* Symbol: g_mb_mv */
/* Demangled: g_mb_mv */
extern void* g_mb_mv;

/* Symbol: EncImageAlloc */
/* Demangled: EncImageAlloc */
int EncImageAlloc(void);

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int fn___aeabi_idivmod(void) __asm__("__aeabi_idivmod");

/* Symbol: EncCodeVop */
/* Demangled: EncCodeVop */
int EncCodeVop(void);

/* Symbol: EncPrediction */
/* Demangled: EncPrediction */
int EncPrediction(void);

/* Symbol: EncInitProfile */
/* Demangled: EncInitProfile */
int EncInitProfile(void);

/* Symbol: EncVidObHdr */
/* Demangled: EncVidObHdr */
int EncVidObHdr(void);

/* Symbol: VideoEncoderPaused */
/* Demangled: VideoEncoderPaused */
int VideoEncoderPaused(void);

/* Symbol: Rotate16_90 */
/* Demangled: Rotate16_90 */
int Rotate16_90(void);

/* Symbol: MP4SwEncSetRateCtrl */
/* Demangled: MP4SwEncSetRateCtrl */
int MP4SwEncSetRateCtrl(void);

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

/* Symbol: MPEG4EncoderCloseAdapt */
/* Demangled: MPEG4EncoderCloseAdapt */
int MPEG4EncoderCloseAdapt(void);

/* Symbol: xMediaME_Preprocess */
/* Demangled: xMediaME_Preprocess */
int xMediaME_Preprocess(void);

/* Symbol: GetInter32 */
/* Demangled: GetInter32 */
int GetInter32(void);

/* Symbol: g_thr_must_be_zero_row_intra */
/* Demangled: g_thr_must_be_zero_row_intra */
extern void* g_thr_must_be_zero_row_intra;

/* Symbol: TABLE_FAVOR_INTRA_THR_XMEDIA */
/* Demangled: TABLE_FAVOR_INTRA_THR_XMEDIA */
extern void* TABLE_FAVOR_INTRA_THR_XMEDIA;

/* Symbol: MP4SwEncSetCodingCtrl */
/* Demangled: MP4SwEncSetCodingCtrl */
int MP4SwEncSetCodingCtrl(void);

/* Symbol: xMediaME_SearchCand_16x8 */
/* Demangled: xMediaME_SearchCand_16x8 */
int xMediaME_SearchCand_16x8(void);

/* Symbol: MPEG4EncoderOpenAdapt */
/* Demangled: MPEG4EncoderOpenAdapt */
int MPEG4EncoderOpenAdapt(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMP4ENC_SA_CA7_H */
