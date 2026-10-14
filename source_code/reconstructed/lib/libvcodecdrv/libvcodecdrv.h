/*
 * Reverse-Engineered ABI Specification for: libvcodecdrv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvcodecdrv.so
 */

#ifndef BEGONIA_RE_LIBVCODECDRV_H
#define BEGONIA_RE_LIBVCODECDRV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: GetEncoderSOPath */
/* Demangled: GetEncoderSOPath */
int GetEncoderSOPath(void);

/* Symbol: H265_PutFrameBufferToFree */
/* Demangled: H265_PutFrameBufferToFree */
int H265_PutFrameBufferToFree(void);

/* Symbol: H264_HAL_HWUnLock */
/* Demangled: H264_HAL_HWUnLock */
int H264_HAL_HWUnLock(void);

/* Symbol: is_all_pic_in_wrapper */
/* Demangled: is_all_pic_in_wrapper */
int is_all_pic_in_wrapper(void);

/* Symbol: g_FrmBufList */
/* Demangled: g_FrmBufList */
extern void* g_FrmBufList;

/* Symbol: get_prob */
/* Demangled: get_prob */
int get_prob(void);

/* Symbol: H265_HAL_SetGridModeSubPicInfo */
/* Demangled: H265_HAL_SetGridModeSubPicInfo */
int H265_HAL_SetGridModeSubPicInfo(void);

/* Symbol: H264_HAL_SafeBreak */
/* Demangled: H264_HAL_SafeBreak */
int H264_HAL_SafeBreak(void);

/* Symbol: H264_HAL_WaitISR */
/* Demangled: H264_HAL_WaitISR */
int H264_HAL_WaitISR(void);

/* Symbol: h264_dec_getDisplayBuffer */
/* Demangled: h264_dec_getDisplayBuffer */
int h264_dec_getDisplayBuffer(void);

/* Symbol: H264_WP_CalcWP */
/* Demangled: H264_WP_CalcWP */
int H264_WP_CalcWP(void);

/* Symbol: H265_GCE_DumpCmd */
/* Demangled: H265_GCE_DumpCmd */
int H265_GCE_DumpCmd(void);

/* Symbol: h265_dec_getFreeBuffer */
/* Demangled: h265_dec_getFreeBuffer */
int h265_dec_getFreeBuffer(void);

/* Symbol: H264_HAL_HWUnLock_Sec */
/* Demangled: H264_HAL_HWUnLock_Sec */
int H264_HAL_HWUnLock_Sec(void);

/* Symbol: h264_dec_decode_sec */
/* Demangled: h264_dec_decode_sec */
int h264_dec_decode_sec(void);

/* Symbol: mpeg2_put_to_free_queue */
/* Demangled: mpeg2_put_to_free_queue */
int mpeg2_put_to_free_queue(void);

/* Symbol: VP8_AllocWorkBuf */
/* Demangled: VP8_AllocWorkBuf */
int VP8_AllocWorkBuf(void);

/* Symbol: HEVC_TimeDiffMs */
/* Demangled: HEVC_TimeDiffMs */
int HEVC_TimeDiffMs(void);

/* Symbol: H265_HAL_ShiftGetBitStream */
/* Demangled: H265_HAL_ShiftGetBitStream */
int H265_HAL_ShiftGetBitStream(void);

/* Symbol: h265_dec_getDisplayBuffer */
/* Demangled: h265_dec_getDisplayBuffer */
int h265_dec_getDisplayBuffer(void);

/* Symbol: VP8_ReadSRAMData */
/* Demangled: VP8_ReadSRAMData */
int VP8_ReadSRAMData(void);

/* Symbol: h264_dec_init_sec */
/* Demangled: h264_dec_init_sec */
int h264_dec_init_sec(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: H265_quantInterDefault8x8 */
/* Demangled: H265_quantInterDefault8x8 */
extern void* H265_quantInterDefault8x8;

/* Symbol: H264_HAL_SetSHDRAVLD1 */
/* Demangled: H264_HAL_SetSHDRAVLD1 */
int H264_HAL_SetSHDRAVLD1(void);

/* Symbol: H264FramePacking */
/* Demangled: H264FramePacking */
int H264FramePacking(void);

/* Symbol: vp9_dec_setParameter */
/* Demangled: vp9_dec_setParameter */
int vp9_dec_setParameter(void);

/* Symbol: h264_sw_enc_get_specific_quality */
/* Demangled: h264_sw_enc_get_specific_quality */
int h264_sw_enc_get_specific_quality(void);

/* Symbol: h264_enc_set_IFrameInterval */
/* Demangled: h264_enc_set_IFrameInterval */
int h264_enc_set_IFrameInterval(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: mpeg2_get_addr_base */
/* Demangled: mpeg2_get_addr_base */
int mpeg2_get_addr_base(void);

/* Symbol: HEVC_EncodeDummyNAL */
/* Demangled: HEVC_EncodeDummyNAL */
int HEVC_EncodeDummyNAL(void);

/* Symbol: QueryAdditionFuncPtr */
/* Demangled: QueryAdditionFuncPtr */
int QueryAdditionFuncPtr(void);

/* Symbol: H265_HAL_SetRefPicListReg */
/* Demangled: H265_HAL_SetRefPicListReg */
int H265_HAL_SetRefPicListReg(void);

/* Symbol: vp8_dec_getFreeBuffer */
/* Demangled: vp8_dec_getFreeBuffer */
int vp8_dec_getFreeBuffer(void);

/* Symbol: Vdec_Drv_VP9_Open */
/* Demangled: Vdec_Drv_VP9_Open */
int Vdec_Drv_VP9_Open(void);

/* Symbol: H264SetPicRefType */
/* Demangled: H264SetPicRefType */
int H264SetPicRefType(void);

/* Symbol: H264_DEBUG_DumpErrorBitStreamBuffer */
/* Demangled: H264_DEBUG_DumpErrorBitStreamBuffer */
int H264_DEBUG_DumpErrorBitStreamBuffer(void);

/* Symbol: h264_dec_get_rptr */
/* Demangled: h264_dec_get_rptr */
int h264_dec_get_rptr(void);

/* Symbol: vp9_dec_deInit */
/* Demangled: vp9_dec_deInit */
int vp9_dec_deInit(void);

/* Symbol: Vdec_Drv_VP9_GetSeqInfo */
/* Demangled: Vdec_Drv_VP9_GetSeqInfo */
int Vdec_Drv_VP9_GetSeqInfo(void);

/* Symbol: VP9_Read_Bit_Raw */
/* Demangled: VP9_Read_Bit_Raw */
int VP9_Read_Bit_Raw(void);

/* Symbol: H265_HAL_Read_VldRPtr */
/* Demangled: H265_HAL_Read_VldRPtr */
int H265_HAL_Read_VldRPtr(void);

/* Symbol: bVDecIsVLDFetchOk */
/* Demangled: bVDecIsVLDFetchOk */
int bVDecIsVLDFetchOk(void);

/* Symbol: mpeg4_parse_sequence_information */
/* Demangled: mpeg4_parse_sequence_information */
int mpeg4_parse_sequence_information(void);

/* Symbol: MPEG2_Parse_Ext_And_Usr_Data */
/* Demangled: MPEG2_Parse_Ext_And_Usr_Data */
int MPEG2_Parse_Ext_And_Usr_Data(void);

/* Symbol: VP8_Check_Resolution_Changed */
/* Demangled: VP8_Check_Resolution_Changed */
int VP8_Check_Resolution_Changed(void);

/* Symbol: VP8_FreeWorkBuf */
/* Demangled: VP8_FreeWorkBuf */
int VP8_FreeWorkBuf(void);

/* Symbol: VP9_Set_Probs_Table2 */
/* Demangled: VP9_Set_Probs_Table2 */
int VP9_Set_Probs_Table2(void);

/* Symbol: vc1_dec_getFreeBuffer */
/* Demangled: vc1_dec_getFreeBuffer */
int vc1_dec_getFreeBuffer(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: VP8_ParseFrameHeader */
/* Demangled: VP8_ParseFrameHeader */
int VP8_ParseFrameHeader(void);

/* Symbol: vp9_tree_merge_probs */
/* Demangled: vp9_tree_merge_probs */
int vp9_tree_merge_probs(void);

/* Symbol: VP9_UPDATE_MBSKIP_PROBS */
/* Demangled: VP9_UPDATE_MBSKIP_PROBS */
int VP9_UPDATE_MBSKIP_PROBS(void);

/* Symbol: EncH264SeqHeader */
/* Demangled: EncH264SeqHeader */
int EncH264SeqHeader(void);

/* Symbol: H264_HAL_DecStart */
/* Demangled: H264_HAL_DecStart */
int H264_HAL_DecStart(void);

/* Symbol: mpeg4_dec_getDisplayBuffer */
/* Demangled: mpeg4_dec_getDisplayBuffer */
int mpeg4_dec_getDisplayBuffer(void);

/* Symbol: VP9_Set_Default_LF_Deltas */
/* Demangled: VP9_Set_Default_LF_Deltas */
int VP9_Set_Default_LF_Deltas(void);

/* Symbol: VP9_HAL_ReadBS2 */
/* Demangled: VP9_HAL_ReadBS2 */
int VP9_HAL_ReadBS2(void);

/* Symbol: VP9_Set_TX_Mode */
/* Demangled: VP9_Set_TX_Mode */
int VP9_Set_TX_Mode(void);

/* Symbol: VP9_UPDATE_MVD_HP_PROBS */
/* Demangled: VP9_UPDATE_MVD_HP_PROBS */
int VP9_UPDATE_MVD_HP_PROBS(void);

/* Symbol: eVEncDrvInit */
/* Demangled: eVEncDrvInit */
int eVEncDrvInit(void);

/* Symbol: H265_RBSPGetUE */
/* Demangled: H265_RBSPGetUE */
int H265_RBSPGetUE(void);

/* Symbol: VP9_HAL_ReadVLD */
/* Demangled: VP9_HAL_ReadVLD */
int VP9_HAL_ReadVLD(void);

/* Symbol: VP9_HAL_WriteBS2 */
/* Demangled: VP9_HAL_WriteBS2 */
int VP9_HAL_WriteBS2(void);

/* Symbol: HEVC_SetScalingFactor */
/* Demangled: HEVC_SetScalingFactor */
int HEVC_SetScalingFactor(void);

/* Symbol: Vdec_Drv_H265_decodeEx */
/* Demangled: Vdec_Drv_H265_decodeEx */
int Vdec_Drv_H265_decodeEx(void);

/* Symbol: handleSLICENALU */
/* Demangled: handleSLICENALU */
int handleSLICENALU(void);

/* Symbol: h264_dec_Init_ex */
/* Demangled: h264_dec_Init_ex */
int h264_dec_Init_ex(void);

/* Symbol: VP8_CheckProc_MBRowModeStart */
/* Demangled: VP8_CheckProc_MBRowModeStart */
int VP8_CheckProc_MBRowModeStart(void);

/* Symbol: VP9_HAL_WriteVLD */
/* Demangled: VP9_HAL_WriteVLD */
int VP9_HAL_WriteVLD(void);

/* Symbol: VP9_Count_TBL_WDMA */
/* Demangled: VP9_Count_TBL_WDMA */
int VP9_Count_TBL_WDMA(void);

/* Symbol: VP8_WaitISR */
/* Demangled: VP8_WaitISR */
int VP8_WaitISR(void);

/* Symbol: VP9_Apply_Frame_Size */
/* Demangled: VP9_Apply_Frame_Size */
int VP9_Apply_Frame_Size(void);

/* Symbol: VP9_Set_MC_Ref_Scaling_Step */
/* Demangled: VP9_Set_MC_Ref_Scaling_Step */
int VP9_Set_MC_Ref_Scaling_Step(void);

/* Symbol: eVEncDrvDeInit */
/* Demangled: eVEncDrvDeInit */
int eVEncDrvDeInit(void);

/* Symbol: mpeg2_flush_cache_working_buffer */
/* Demangled: mpeg2_flush_cache_working_buffer */
int mpeg2_flush_cache_working_buffer(void);

/* Symbol: VP9_Set_Pic_Info */
/* Demangled: VP9_Set_Pic_Info */
int VP9_Set_Pic_Info(void);

/* Symbol: mpeg4_enc_deInit */
/* Demangled: mpeg4_enc_deInit */
int mpeg4_enc_deInit(void);

/* Symbol: H265_HAL_ReadPP */
/* Demangled: H265_HAL_ReadPP */
int H265_HAL_ReadPP(void);

/* Symbol: mpeg4_preparse_bitstream */
/* Demangled: mpeg4_preparse_bitstream */
int mpeg4_preparse_bitstream(void);

/* Symbol: mpeg4_dec_parsing_thread */
/* Demangled: mpeg4_dec_parsing_thread */
int mpeg4_dec_parsing_thread(void);

/* Symbol: VP9_Reset_Bits_Count */
/* Demangled: VP9_Reset_Bits_Count */
int VP9_Reset_Bits_Count(void);

/* Symbol: H264_SwGenNonRefP */
/* Demangled: H264_SwGenNonRefP */
int H264_SwGenNonRefP(void);

/* Symbol: H265_HAL_HWUnLock */
/* Demangled: H265_HAL_HWUnLock */
int H265_HAL_HWUnLock(void);

/* Symbol: H265_HAL_ReadVLDTOP */
/* Demangled: H265_HAL_ReadVLDTOP */
int H265_HAL_ReadVLDTOP(void);

/* Symbol: H265_sigLastScan8x8 */
/* Demangled: H265_sigLastScan8x8 */
extern void* H265_sigLastScan8x8;

/* Symbol: H264_HAL_ReadMC */
/* Demangled: H264_HAL_ReadMC */
int H264_HAL_ReadMC(void);

/* Symbol: VP8_WriteVP8MC */
/* Demangled: VP8_WriteVP8MC */
int VP8_WriteVP8MC(void);

/* Symbol: VP9_Intra_Only */
/* Demangled: VP9_Intra_Only */
int VP9_Intra_Only(void);

/* Symbol: EncH264SPS */
/* Demangled: EncH264SPS */
int EncH264SPS(void);

/* Symbol: H265_HAL_SetVLDVFIFO */
/* Demangled: H265_HAL_SetVLDVFIFO */
int H265_HAL_SetVLDVFIFO(void);

/* Symbol: is_valid_stuffing */
/* Demangled: is_valid_stuffing */
int is_valid_stuffing(void);

/* Symbol: MPEG2BufferInvalidateCache */
/* Demangled: MPEG2BufferInvalidateCache */
int MPEG2BufferInvalidateCache(void);

/* Symbol: VP8_VLDGetBits */
/* Demangled: VP8_VLDGetBits */
int VP8_VLDGetBits(void);

/* Symbol: VP9_Scaled_X */
/* Demangled: VP9_Scaled_X */
int VP9_Scaled_X(void);

/* Symbol: h264_enc_unsigned_exp_golomb */
/* Demangled: h264_enc_unsigned_exp_golomb */
int h264_enc_unsigned_exp_golomb(void);

/* Symbol: DumpFrameBufferArray */
/* Demangled: DumpFrameBufferArray */
int DumpFrameBufferArray(void);

/* Symbol: H264_HAL_ReadAVCVLD */
/* Demangled: H264_HAL_ReadAVCVLD */
int H264_HAL_ReadAVCVLD(void);

/* Symbol: H264_HAL_WriteScalingList */
/* Demangled: H264_HAL_WriteScalingList */
int H264_HAL_WriteScalingList(void);

/* Symbol: VP8_Read_Internal_SRAM */
/* Demangled: VP8_Read_Internal_SRAM */
int VP8_Read_Internal_SRAM(void);

/* Symbol: VP9_Scaled_Y */
/* Demangled: VP9_Scaled_Y */
int VP9_Scaled_Y(void);

/* Symbol: H265_PredWeightTable */
/* Demangled: H265_PredWeightTable */
int H265_PredWeightTable(void);

/* Symbol: H264_HAL_SetSPSAVLD */
/* Demangled: H264_HAL_SetSPSAVLD */
int H264_HAL_SetSPSAVLD(void);

/* Symbol: VP8_LoadCtxProbs */
/* Demangled: VP8_LoadCtxProbs */
int VP8_LoadCtxProbs(void);

/* Symbol: VP9_Dump_Register */
/* Demangled: VP9_Dump_Register */
int VP9_Dump_Register(void);

/* Symbol: Vdec_Drv_VP9_InitBarrelShifter */
/* Demangled: Vdec_Drv_VP9_InitBarrelShifter */
int Vdec_Drv_VP9_InitBarrelShifter(void);

/* Symbol: H264_EncodeFrameDeinit */
/* Demangled: H264_EncodeFrameDeinit */
int H264_EncodeFrameDeinit(void);

/* Symbol: H265_destroyPPS */
/* Demangled: H265_destroyPPS */
int H265_destroyPPS(void);

/* Symbol: H264_HAL_GetMbxMby */
/* Demangled: H264_HAL_GetMbxMby */
int H264_HAL_GetMbxMby(void);

/* Symbol: VP9_Tile_Set_Col */
/* Demangled: VP9_Tile_Set_Col */
int VP9_Tile_Set_Col(void);

/* Symbol: VP9_Clear_Counts_Table */
/* Demangled: VP9_Clear_Counts_Table */
int VP9_Clear_Counts_Table(void);

/* Symbol: slice_qp_mapping_table */
/* Demangled: slice_qp_mapping_table */
extern void* slice_qp_mapping_table;

/* Symbol: H265_destroySEI */
/* Demangled: H265_destroySEI */
int H265_destroySEI(void);

/* Symbol: H264_HAL_SetRegBase */
/* Demangled: H264_HAL_SetRegBase */
int H264_HAL_SetRegBase(void);

/* Symbol: mpeg2_dec_init */
/* Demangled: mpeg2_dec_init */
int mpeg2_dec_init(void);

/* Symbol: tx_counts_to_branch_counts_16x16 */
/* Demangled: tx_counts_to_branch_counts_16x16 */
int tx_counts_to_branch_counts_16x16(void);

/* Symbol: VP9_Set_Segmentation */
/* Demangled: VP9_Set_Segmentation */
int VP9_Set_Segmentation(void);

/* Symbol: gH264_DRV_IF_SEC */
/* Demangled: gH264_DRV_IF_SEC */
extern void* gH264_DRV_IF_SEC;

/* Symbol: H264PicTiming */
/* Demangled: H264PicTiming */
int H264PicTiming(void);

/* Symbol: Vdec_Drv_H264_getSeqInfo */
/* Demangled: Vdec_Drv_H264_getSeqInfo */
int Vdec_Drv_H264_getSeqInfo(void);

/* Symbol: Vdec_Drv_VP9_GetHWRegBase */
/* Demangled: Vdec_Drv_VP9_GetHWRegBase */
int Vdec_Drv_VP9_GetHWRegBase(void);

/* Symbol: VP9_Set_MC_MAX_RRF_BLK_Size */
/* Demangled: VP9_Set_MC_MAX_RRF_BLK_Size */
int VP9_Set_MC_MAX_RRF_BLK_Size(void);

/* Symbol: lib_handle */
/* Demangled: lib_handle */
extern void* lib_handle;

/* Symbol: H264_HAL_InitPRefList */
/* Demangled: H264_HAL_InitPRefList */
int H264_HAL_InitPRefList(void);

/* Symbol: H264_HAL_ReadVLDTOP */
/* Demangled: H264_HAL_ReadVLDTOP */
int H264_HAL_ReadVLDTOP(void);

/* Symbol: h264_enc_encode */
/* Demangled: h264_enc_encode */
int h264_enc_encode(void);

/* Symbol: H264_SetEncParam_UFO */
/* Demangled: H264_SetEncParam_UFO */
int H264_SetEncParam_UFO(void);

/* Symbol: H265_HAL_WriteMC */
/* Demangled: H265_HAL_WriteMC */
int H265_HAL_WriteMC(void);

/* Symbol: Vdec_Drv_VP9_DeInit */
/* Demangled: Vdec_Drv_VP9_DeInit */
int Vdec_Drv_VP9_DeInit(void);

/* Symbol: H265_HAL_SetPicInfoReg */
/* Demangled: H265_HAL_SetPicInfoReg */
int H265_HAL_SetPicInfoReg(void);

/* Symbol: H264_GetInstByID */
/* Demangled: H264_GetInstByID */
int H264_GetInstByID(void);

/* Symbol: initSliceHeader */
/* Demangled: initSliceHeader */
int initSliceHeader(void);

/* Symbol: mpeg4_dec_setParameter */
/* Demangled: mpeg4_dec_setParameter */
int mpeg4_dec_setParameter(void);

/* Symbol: H264_ShiftRightBitArray */
/* Demangled: H264_ShiftRightBitArray */
int H264_ShiftRightBitArray(void);

/* Symbol: szH264ProfName */
/* Demangled: szH264ProfName */
extern void* szH264ProfName;

/* Symbol: hevc_enc_getParameter */
/* Demangled: hevc_enc_getParameter */
int hevc_enc_getParameter(void);

/* Symbol: HEVC_EncHdr_Unsigned_Exp_Golomb */
/* Demangled: HEVC_EncHdr_Unsigned_Exp_Golomb */
int HEVC_EncHdr_Unsigned_Exp_Golomb(void);

/* Symbol: HEVC_EncodeSPS_HW */
/* Demangled: HEVC_EncodeSPS_HW */
int HEVC_EncodeSPS_HW(void);

/* Symbol: DrvAddSpecs */
/* Demangled: DrvAddSpecs */
int DrvAddSpecs(void);

/* Symbol: eVDecDrvDeInit */
/* Demangled: eVDecDrvDeInit */
int eVDecDrvDeInit(void);

/* Symbol: H264_HAL_Read_VldRPtr */
/* Demangled: H264_HAL_Read_VldRPtr */
int H264_HAL_Read_VldRPtr(void);

/* Symbol: VP9_Tile_Init */
/* Demangled: VP9_Tile_Init */
int VP9_Tile_Init(void);

/* Symbol: DrvGetOutputBufferCB */
/* Demangled: DrvGetOutputBufferCB */
int DrvGetOutputBufferCB(void);

/* Symbol: H265_HAL_DecStart */
/* Demangled: H265_HAL_DecStart */
int H265_HAL_DecStart(void);

/* Symbol: FindFreeInputBuffer */
/* Demangled: FindFreeInputBuffer */
int FindFreeInputBuffer(void);

/* Symbol: pfnMtkVdecH264SecDeinit_Ptr */
/* Demangled: pfnMtkVdecH264SecDeinit_Ptr */
extern void* pfnMtkVdecH264SecDeinit_Ptr;

/* Symbol: MPEG2_Parse_Pic_Display_Ext */
/* Demangled: MPEG2_Parse_Pic_Display_Ext */
int MPEG2_Parse_Pic_Display_Ext(void);

/* Symbol: mpeg2_get_from_free_queue */
/* Demangled: mpeg2_get_from_free_queue */
int mpeg2_get_from_free_queue(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: H265_FlushDPB */
/* Demangled: H265_FlushDPB */
int H265_FlushDPB(void);

/* Symbol: VP8_DecStart */
/* Demangled: VP8_DecStart */
int VP8_DecStart(void);

/* Symbol: gfnMtkVP9SecVdec_tlcOpen */
/* Demangled: gfnMtkVP9SecVdec_tlcOpen */
extern void* gfnMtkVP9SecVdec_tlcOpen;

/* Symbol: H265_HAL_GetStartCode_PicStart */
/* Demangled: H265_HAL_GetStartCode_PicStart */
int H265_HAL_GetStartCode_PicStart(void);

/* Symbol: VP9_Decode_Unsigned_Max */
/* Demangled: VP9_Decode_Unsigned_Max */
int VP9_Decode_Unsigned_Max(void);

/* Symbol: H264_FreeWorkBuf */
/* Demangled: H264_FreeWorkBuf */
int H264_FreeWorkBuf(void);

/* Symbol: h264_enc_set_AdjustFramerate */
/* Demangled: h264_enc_set_AdjustFramerate */
int h264_enc_set_AdjustFramerate(void);

/* Symbol: HEVC_ArgbSetting */
/* Demangled: HEVC_ArgbSetting */
int HEVC_ArgbSetting(void);

/* Symbol: gHEVC_ENC_DRV_HW_IF */
/* Demangled: gHEVC_ENC_DRV_HW_IF */
extern void* gHEVC_ENC_DRV_HW_IF;

/* Symbol: H265_initPicInfo */
/* Demangled: H265_initPicInfo */
int H265_initPicInfo(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: QUANT8_INTER_DEFAULT */
/* Demangled: QUANT8_INTER_DEFAULT */
extern void* QUANT8_INTER_DEFAULT;

/* Symbol: VP8_MbInitDequantizer */
/* Demangled: VP8_MbInitDequantizer */
int VP8_MbInitDequantizer(void);

/* Symbol: VP9_Set_Seg_Prefetch_Size */
/* Demangled: VP9_Set_Seg_Prefetch_Size */
int VP9_Set_Seg_Prefetch_Size(void);

/* Symbol: hevc_enc_encode */
/* Demangled: hevc_enc_encode */
int hevc_enc_encode(void);

/* Symbol: bH265_VDecWaitVldFetchOk */
/* Demangled: bH265_VDecWaitVldFetchOk */
int bH265_VDecWaitVldFetchOk(void);

/* Symbol: H265_HAL_ReadVLD */
/* Demangled: H265_HAL_ReadVLD */
int H265_HAL_ReadVLD(void);

/* Symbol: Vdec_Drv_H264_decodeEx */
/* Demangled: Vdec_Drv_H264_decodeEx */
int Vdec_Drv_H264_decodeEx(void);

/* Symbol: H265_HAL_WriteHEVCMV */
/* Demangled: H265_HAL_WriteHEVCMV */
int H265_HAL_WriteHEVCMV(void);

/* Symbol: VP9_HAL_WriteMC */
/* Demangled: VP9_HAL_WriteMC */
int VP9_HAL_WriteMC(void);

/* Symbol: EncodeOneUnit */
/* Demangled: EncodeOneUnit */
int EncodeOneUnit(void);

/* Symbol: Vdec_Drv_H264_open */
/* Demangled: Vdec_Drv_H264_open */
int Vdec_Drv_H264_open(void);

/* Symbol: VP8_WriteVP8MV */
/* Demangled: VP8_WriteVP8MV */
int VP8_WriteVP8MV(void);

/* Symbol: Vdec_Drv_VP9_Close */
/* Demangled: Vdec_Drv_VP9_Close */
int Vdec_Drv_VP9_Close(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: bVDecWaitVldFetchOk */
/* Demangled: bVDecWaitVldFetchOk */
int bVDecWaitVldFetchOk(void);

/* Symbol: mpeg2_dec_getDisplayBuffer */
/* Demangled: mpeg2_dec_getDisplayBuffer */
int mpeg2_dec_getDisplayBuffer(void);

/* Symbol: VP8_WriteVP8VLD2 */
/* Demangled: VP8_WriteVP8VLD2 */
int VP8_WriteVP8VLD2(void);

/* Symbol: VP9_Get_Qindex */
/* Demangled: VP9_Get_Qindex */
int VP9_Get_Qindex(void);

/* Symbol: DrvDisablePerfService */
/* Demangled: DrvDisablePerfService */
int DrvDisablePerfService(void);

/* Symbol: ReturnSVPInstance */
/* Demangled: ReturnSVPInstance */
int ReturnSVPInstance(void);

/* Symbol: H265_initRBSPBitStream */
/* Demangled: H265_initRBSPBitStream */
int H265_initRBSPBitStream(void);

/* Symbol: parsePPS */
/* Demangled: parsePPS */
int parsePPS(void);

/* Symbol: VP8_VLDReadLiteral */
/* Demangled: VP8_VLDReadLiteral */
int VP8_VLDReadLiteral(void);

/* Symbol: VP9_Get_Fixed_Point_Scale_Factor */
/* Demangled: VP9_Get_Fixed_Point_Scale_Factor */
int VP9_Get_Fixed_Point_Scale_Factor(void);

/* Symbol: VP9_Count_TBL_Read_SRAM */
/* Demangled: VP9_Count_TBL_Read_SRAM */
int VP9_Count_TBL_Read_SRAM(void);

/* Symbol: HEVC_EncodeSEI_HDRDynamic */
/* Demangled: HEVC_EncodeSEI_HDRDynamic */
int HEVC_EncodeSEI_HDRDynamic(void);

/* Symbol: H265_HAL_InitISR */
/* Demangled: H265_HAL_InitISR */
int H265_HAL_InitISR(void);

/* Symbol: h265_dec_deInit */
/* Demangled: h265_dec_deInit */
int h265_dec_deInit(void);

/* Symbol: Vdec_Drv_H264_open_sec_tbase */
/* Demangled: Vdec_Drv_H264_open_sec_tbase */
int Vdec_Drv_H264_open_sec_tbase(void);

/* Symbol: h264_enc_set_IDRFrameInterval */
/* Demangled: h264_enc_set_IDRFrameInterval */
int h264_enc_set_IDRFrameInterval(void);

/* Symbol: get_dcac_mv_size */
/* Demangled: get_dcac_mv_size */
int get_dcac_mv_size(void);

/* Symbol: H265_HAL_SeCodeNum */
/* Demangled: H265_HAL_SeCodeNum */
int H265_HAL_SeCodeNum(void);

/* Symbol: H264_DEBUG_DumpFrameBuffer */
/* Demangled: H264_DEBUG_DumpFrameBuffer */
int H264_DEBUG_DumpFrameBuffer(void);

/* Symbol: VP9_Setup_Scale_Factors_For_Frame */
/* Demangled: VP9_Setup_Scale_Factors_For_Frame */
int VP9_Setup_Scale_Factors_For_Frame(void);

/* Symbol: Vdec_Drv_VP9_Parse */
/* Demangled: Vdec_Drv_VP9_Parse */
int Vdec_Drv_VP9_Parse(void);

/* Symbol: tx_counts_to_branch_counts_32x32 */
/* Demangled: tx_counts_to_branch_counts_32x32 */
int tx_counts_to_branch_counts_32x32(void);

/* Symbol: H265_HAL_WriteScalingListVLD */
/* Demangled: H265_HAL_WriteScalingListVLD */
int H265_HAL_WriteScalingListVLD(void);

/* Symbol: H264_HAL_InitH264BarrelShifter */
/* Demangled: H264_HAL_InitH264BarrelShifter */
int H264_HAL_InitH264BarrelShifter(void);

/* Symbol: merge_probs */
/* Demangled: merge_probs */
int merge_probs(void);

/* Symbol: h264_enc_set_RecordSize */
/* Demangled: h264_enc_set_RecordSize */
int h264_enc_set_RecordSize(void);

/* Symbol: VP9_Wait_ISR */
/* Demangled: VP9_Wait_ISR */
int VP9_Wait_ISR(void);

/* Symbol: gfnMtkH264SecVdec_tlcClose */
/* Demangled: gfnMtkH264SecVdec_tlcClose */
extern void* gfnMtkH264SecVdec_tlcClose;

/* Symbol: VP8_DecReset */
/* Demangled: VP8_DecReset */
int VP8_DecReset(void);

/* Symbol: H264_HAL_SetBRefPicListReg_Extra */
/* Demangled: H264_HAL_SetBRefPicListReg_Extra */
int H264_HAL_SetBRefPicListReg_Extra(void);

/* Symbol: VP9_Put_To_Use_List */
/* Demangled: VP9_Put_To_Use_List */
int VP9_Put_To_Use_List(void);

/* Symbol: vc1_dec_deInit */
/* Demangled: vc1_dec_deInit */
int vc1_dec_deInit(void);

/* Symbol: H265_HAL_SetRegBase */
/* Demangled: H265_HAL_SetRegBase */
int H265_HAL_SetRegBase(void);

/* Symbol: H265_HAL_SetStillImageInfo */
/* Demangled: H265_HAL_SetStillImageInfo */
int H265_HAL_SetStillImageInfo(void);

/* Symbol: eVMPEG4EncDrv_EncoderQueryInfo */
/* Demangled: eVMPEG4EncDrv_EncoderQueryInfo */
int eVMPEG4EncDrv_EncoderQueryInfo(void);

/* Symbol: H264_FreeRFSBuffer */
/* Demangled: H264_FreeRFSBuffer */
int H264_FreeRFSBuffer(void);

/* Symbol: h264_enc_set_NonRefP */
/* Demangled: h264_enc_set_NonRefP */
int h264_enc_set_NonRefP(void);

/* Symbol: HEVC_EncHdr_PutBits */
/* Demangled: HEVC_EncHdr_PutBits */
int HEVC_EncHdr_PutBits(void);

/* Symbol: AddSVPInstance */
/* Demangled: AddSVPInstance */
int AddSVPInstance(void);

/* Symbol: h264_dec_getParameter */
/* Demangled: h264_dec_getParameter */
int h264_dec_getParameter(void);

/* Symbol: GetFreeInputBuffer */
/* Demangled: GetFreeInputBuffer */
int GetFreeInputBuffer(void);

/* Symbol: QUANT8_INTRA_DEFAULT */
/* Demangled: QUANT8_INTRA_DEFAULT */
extern void* QUANT8_INTRA_DEFAULT;

/* Symbol: VP8_ReadFinishFlag */
/* Demangled: VP8_ReadFinishFlag */
int VP8_ReadFinishFlag(void);

/* Symbol: vp9_dec_decode */
/* Demangled: vp9_dec_decode */
int vp9_dec_decode(void);

/* Symbol: VP9_HAL_ReadUFO */
/* Demangled: VP9_HAL_ReadUFO */
int VP9_HAL_ReadUFO(void);

/* Symbol: vc1_dec_getParameter */
/* Demangled: vc1_dec_getParameter */
int vc1_dec_getParameter(void);

/* Symbol: H265_parseRPS */
/* Demangled: H265_parseRPS */
int H265_parseRPS(void);

/* Symbol: H264_HAL_EnableCRC */
/* Demangled: H264_HAL_EnableCRC */
int H264_HAL_EnableCRC(void);

/* Symbol: MPEG4BufferFlushRange */
/* Demangled: MPEG4BufferFlushRange */
int MPEG4BufferFlushRange(void);

/* Symbol: mpeg4_alloc_working_buf */
/* Demangled: mpeg4_alloc_working_buf */
int mpeg4_alloc_working_buf(void);

/* Symbol: u4ValLogToFile */
/* Demangled: u4ValLogToFile */
extern void* u4ValLogToFile;

/* Symbol: VP9_Is_Scaled */
/* Demangled: VP9_Is_Scaled */
int VP9_Is_Scaled(void);

/* Symbol: vp9_mv_class0_tree */
/* Demangled: vp9_mv_class0_tree */
extern void* vp9_mv_class0_tree;

/* Symbol: VP9_HAL_WriteUFO */
/* Demangled: VP9_HAL_WriteUFO */
int VP9_HAL_WriteUFO(void);

/* Symbol: H265_getScalingListDefaultAddress */
/* Demangled: H265_getScalingListDefaultAddress */
int H265_getScalingListDefaultAddress(void);

/* Symbol: HEVC_GetLevel */
/* Demangled: HEVC_GetLevel */
int HEVC_GetLevel(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: H265_HAL_ReadGCON */
/* Demangled: H265_HAL_ReadGCON */
int H265_HAL_ReadGCON(void);

/* Symbol: mpeg4_parse_VO */
/* Demangled: mpeg4_parse_VO */
int mpeg4_parse_VO(void);

/* Symbol: mpeg2_dec_deInit */
/* Demangled: mpeg2_dec_deInit */
int mpeg2_dec_deInit(void);

/* Symbol: VP9_UnLockHW */
/* Demangled: VP9_UnLockHW */
int VP9_UnLockHW(void);

/* Symbol: h264_enc_encode_Pps */
/* Demangled: h264_enc_encode_Pps */
int h264_enc_encode_Pps(void);

/* Symbol: h264_sw_enc_init */
/* Demangled: h264_sw_enc_init */
int h264_sw_enc_init(void);

/* Symbol: eVDecDrvDecodeEx */
/* Demangled: eVDecDrvDecodeEx */
int eVDecDrvDecodeEx(void);

/* Symbol: VP9_Set_MVP_Enable */
/* Demangled: VP9_Set_MVP_Enable */
int VP9_Set_MVP_Enable(void);

/* Symbol: H264_AdjustFramerate */
/* Demangled: H264_AdjustFramerate */
int H264_AdjustFramerate(void);

/* Symbol: H265_HAL_ReadCRC */
/* Demangled: H265_HAL_ReadCRC */
int H265_HAL_ReadCRC(void);

/* Symbol: bH265_HAL_IsEndOfBitstreamError */
/* Demangled: bH265_HAL_IsEndOfBitstreamError */
int bH265_HAL_IsEndOfBitstreamError(void);

/* Symbol: vp_mode_risc_settings */
/* Demangled: vp_mode_risc_settings */
int vp_mode_risc_settings(void);

/* Symbol: VP8_ReadGCON */
/* Demangled: VP8_ReadGCON */
int VP8_ReadGCON(void);

/* Symbol: vp9_partition_tree */
/* Demangled: vp9_partition_tree */
extern void* vp9_partition_tree;

/* Symbol: VP9_HAL_WriteMV */
/* Demangled: VP9_HAL_WriteMV */
int VP9_HAL_WriteMV(void);

/* Symbol: H265_HAL_WriteHEVCVLD */
/* Demangled: H265_HAL_WriteHEVCVLD */
int H265_HAL_WriteHEVCVLD(void);

/* Symbol: H265_quantIntraDefault8x8 */
/* Demangled: H265_quantIntraDefault8x8 */
extern void* H265_quantIntraDefault8x8;

/* Symbol: H264_HAL_ReadVLD */
/* Demangled: H264_HAL_ReadVLD */
int H264_HAL_ReadVLD(void);

/* Symbol: gfnMtkH264SecVdec_tlcDumpSecMem */
/* Demangled: gfnMtkH264SecVdec_tlcDumpSecMem */
extern void* gfnMtkH264SecVdec_tlcDumpSecMem;

/* Symbol: parseSliceHeader */
/* Demangled: parseSliceHeader */
int parseSliceHeader(void);

/* Symbol: H265_destroyROM */
/* Demangled: H265_destroyROM */
int H265_destroyROM(void);

/* Symbol: set_hw_init_reg */
/* Demangled: set_hw_init_reg */
int set_hw_init_reg(void);

/* Symbol: vp8_dec_setParameter */
/* Demangled: vp8_dec_setParameter */
int vp8_dec_setParameter(void);

/* Symbol: Vdec_Drv_VP9_SetParameter */
/* Demangled: Vdec_Drv_VP9_SetParameter */
int Vdec_Drv_VP9_SetParameter(void);

/* Symbol: VP9_Adapt_Coef_Probs */
/* Demangled: VP9_Adapt_Coef_Probs */
int VP9_Adapt_Coef_Probs(void);

/* Symbol: H264_HAL_HWLock_Sec */
/* Demangled: H264_HAL_HWLock_Sec */
int H264_HAL_HWLock_Sec(void);

/* Symbol: QUANT_INTER_DEFAULT */
/* Demangled: QUANT_INTER_DEFAULT */
extern void* QUANT_INTER_DEFAULT;

/* Symbol: pfnMtkVdecH264SecInit_Ptr */
/* Demangled: pfnMtkVdecH264SecInit_Ptr */
extern void* pfnMtkVdecH264SecInit_Ptr;

/* Symbol: VP8_SeekProcessing */
/* Demangled: VP8_SeekProcessing */
int VP8_SeekProcessing(void);

/* Symbol: VP9_Set_MC_Set_Scaling_Factor */
/* Demangled: VP9_Set_MC_Set_Scaling_Factor */
int VP9_Set_MC_Set_Scaling_Factor(void);

/* Symbol: DrvEnablePerfService */
/* Demangled: DrvEnablePerfService */
int DrvEnablePerfService(void);

/* Symbol: H265_GetFrameBufferFromDisp */
/* Demangled: H265_GetFrameBufferFromDisp */
int H265_GetFrameBufferFromDisp(void);

/* Symbol: H265_parseScalingList */
/* Demangled: H265_parseScalingList */
int H265_parseScalingList(void);

/* Symbol: H264PutFrameBufferToDisp */
/* Demangled: H264PutFrameBufferToDisp */
int H264PutFrameBufferToDisp(void);

/* Symbol: fgAVCBenchmark */
/* Demangled: fgAVCBenchmark */
extern void* fgAVCBenchmark;

/* Symbol: VP8_ReadVP8VLD */
/* Demangled: VP8_ReadVP8VLD */
int VP8_ReadVP8VLD(void);

/* Symbol: VP9_UPDATE_MVD_FP_PROBS */
/* Demangled: VP9_UPDATE_MVD_FP_PROBS */
int VP9_UPDATE_MVD_FP_PROBS(void);

/* Symbol: H264_EncodeCheckCRC */
/* Demangled: H264_EncodeCheckCRC */
int H264_EncodeCheckCRC(void);

/* Symbol: H264_EncodeFrameEnc_SetMV */
/* Demangled: H264_EncodeFrameEnc_SetMV */
int H264_EncodeFrameEnc_SetMV(void);

/* Symbol: GetDecoderSOPath */
/* Demangled: GetDecoderSOPath */
int GetDecoderSOPath(void);

/* Symbol: H265_handleSPSNALU */
/* Demangled: H265_handleSPSNALU */
int H265_handleSPSNALU(void);

/* Symbol: H265_TestUE */
/* Demangled: H265_TestUE */
int H265_TestUE(void);

/* Symbol: H265_HAL_SetReg */
/* Demangled: H265_HAL_SetReg */
int H265_HAL_SetReg(void);

/* Symbol: mpeg4_parse_VSO */
/* Demangled: mpeg4_parse_VSO */
int mpeg4_parse_VSO(void);

/* Symbol: vp9_dec_init_sec */
/* Demangled: vp9_dec_init_sec */
int vp9_dec_init_sec(void);

/* Symbol: VP9_Max_RRF_BLK_Cal */
/* Demangled: VP9_Max_RRF_BLK_Cal */
int VP9_Max_RRF_BLK_Cal(void);

/* Symbol: ParseConfig */
/* Demangled: ParseConfig */
int ParseConfig(void);

/* Symbol: H264_EncodeSPS */
/* Demangled: H264_EncodeSPS */
int H264_EncodeSPS(void);

/* Symbol: h264_enc_init */
/* Demangled: h264_enc_init */
int h264_enc_init(void);

/* Symbol: DrvSetSCNOff */
/* Demangled: DrvSetSCNOff */
int DrvSetSCNOff(void);

/* Symbol: bH265_HAL_IsVDecComplete */
/* Demangled: bH265_HAL_IsVDecComplete */
int bH265_HAL_IsVDecComplete(void);

/* Symbol: H265_PutFrameBufferToDisp */
/* Demangled: H265_PutFrameBufferToDisp */
int H265_PutFrameBufferToDisp(void);

/* Symbol: H264_HAL_InitISR */
/* Demangled: H264_HAL_InitISR */
int H264_HAL_InitISR(void);

/* Symbol: gH264SecVdecTlcLib */
/* Demangled: gH264SecVdecTlcLib */
extern void* gH264SecVdecTlcLib;

/* Symbol: VP9_Tile_Set_Row */
/* Demangled: VP9_Tile_Set_Row */
int VP9_Tile_Set_Row(void);

/* Symbol: H264_ResetWorkBuf */
/* Demangled: H264_ResetWorkBuf */
int H264_ResetWorkBuf(void);

/* Symbol: HEVC_FreeWorkBuf */
/* Demangled: HEVC_FreeWorkBuf */
int HEVC_FreeWorkBuf(void);

/* Symbol: EncDrvAddSpecs */
/* Demangled: EncDrvAddSpecs */
int EncDrvAddSpecs(void);

/* Symbol: H265_HAL_SetAUOReg */
/* Demangled: H265_HAL_SetAUOReg */
int H265_HAL_SetAUOReg(void);

/* Symbol: tvf_start */
/* Demangled: tvf_start */
extern void* tvf_start;

/* Symbol: H264_SetEncParam */
/* Demangled: H264_SetEncParam */
int H264_SetEncParam(void);

/* Symbol: VP8_ParserProc */
/* Demangled: VP8_ParserProc */
int VP8_ParserProc(void);

/* Symbol: HEVC_PerformanceProfiling */
/* Demangled: HEVC_PerformanceProfiling */
int HEVC_PerformanceProfiling(void);

/* Symbol: HEVC_ThroughputSetting */
/* Demangled: HEVC_ThroughputSetting */
int HEVC_ThroughputSetting(void);

/* Symbol: Vdec_Drv_H264_decode */
/* Demangled: Vdec_Drv_H264_decode */
int Vdec_Drv_H264_decode(void);

/* Symbol: H265_HAL_GetBitStreamFlg */
/* Demangled: H265_HAL_GetBitStreamFlg */
int H265_HAL_GetBitStreamFlg(void);

/* Symbol: H264_decode */
/* Demangled: H264_decode */
int H264_decode(void);

/* Symbol: h264_dec_set_wptr */
/* Demangled: h264_dec_set_wptr */
int h264_dec_set_wptr(void);

/* Symbol: VP9_UPDATE_COMP_REF_PROBS */
/* Demangled: VP9_UPDATE_COMP_REF_PROBS */
int VP9_UPDATE_COMP_REF_PROBS(void);

/* Symbol: VP9_UPDATE_Y_MODE_PROBS */
/* Demangled: VP9_UPDATE_Y_MODE_PROBS */
int VP9_UPDATE_Y_MODE_PROBS(void);

/* Symbol: EncH264Frame */
/* Demangled: EncH264Frame */
int EncH264Frame(void);

/* Symbol: copy_sram_buffer */
/* Demangled: copy_sram_buffer */
int copy_sram_buffer(void);

/* Symbol: VP8_LockHW */
/* Demangled: VP8_LockHW */
int VP8_LockHW(void);

/* Symbol: VP8_ReadVLDTOP */
/* Demangled: VP8_ReadVLDTOP */
int VP8_ReadVLDTOP(void);

/* Symbol: h264_enc_set_DetectedFrameRate */
/* Demangled: h264_enc_set_DetectedFrameRate */
int h264_enc_set_DetectedFrameRate(void);

/* Symbol: VP8_GetErrInfo */
/* Demangled: VP8_GetErrInfo */
int VP8_GetErrInfo(void);

/* Symbol: H265_HAL_ResetHW */
/* Demangled: H265_HAL_ResetHW */
int H265_HAL_ResetHW(void);

/* Symbol: H265_scalingListNum */
/* Demangled: H265_scalingListNum */
extern void* H265_scalingListNum;

/* Symbol: H264_HAL_SetBRefRegforUFO */
/* Demangled: H264_HAL_SetBRefRegforUFO */
int H264_HAL_SetBRefRegforUFO(void);

/* Symbol: H264_TrailingBits */
/* Demangled: H264_TrailingBits */
int H264_TrailingBits(void);

/* Symbol: Vdec_Drv_VP9_Decode */
/* Demangled: Vdec_Drv_VP9_Decode */
int Vdec_Drv_VP9_Decode(void);

/* Symbol: GetNextDisplay */
/* Demangled: GetNextDisplay */
int GetNextDisplay(void);

/* Symbol: mpeg4_parse_user_data */
/* Demangled: mpeg4_parse_user_data */
int mpeg4_parse_user_data(void);

/* Symbol: eVDecDrvDecode */
/* Demangled: eVDecDrvDecode */
int eVDecDrvDecode(void);

/* Symbol: EncodeOpen */
/* Demangled: EncodeOpen */
int EncodeOpen(void);

/* Symbol: H264_HAL_InitBRefList */
/* Demangled: H264_HAL_InitBRefList */
int H264_HAL_InitBRefList(void);

/* Symbol: H264_HAL_Write_VldWPtr */
/* Demangled: H264_HAL_Write_VldWPtr */
int H264_HAL_Write_VldWPtr(void);

/* Symbol: H264_DEBUG_DumpOpenBitStreamBuffer */
/* Demangled: H264_DEBUG_DumpOpenBitStreamBuffer */
int H264_DEBUG_DumpOpenBitStreamBuffer(void);

/* Symbol: VP9_Read_Tx_Mode */
/* Demangled: VP9_Read_Tx_Mode */
int VP9_Read_Tx_Mode(void);

/* Symbol: DrvEnablePerfService_max_freq */
/* Demangled: DrvEnablePerfService_max_freq */
int DrvEnablePerfService_max_freq(void);

/* Symbol: setBRefPicList */
/* Demangled: setBRefPicList */
int setBRefPicList(void);

/* Symbol: H264_SetEncParam_Special */
/* Demangled: H264_SetEncParam_Special */
int H264_SetEncParam_Special(void);

/* Symbol: H264_FrmLvlMMRSetting_EncInfoOthers */
/* Demangled: H264_FrmLvlMMRSetting_EncInfoOthers */
int H264_FrmLvlMMRSetting_EncInfoOthers(void);

/* Symbol: H265_HAL_TriggerVPmode */
/* Demangled: H265_HAL_TriggerVPmode */
int H265_HAL_TriggerVPmode(void);

/* Symbol: gfnMtkVP9SecVdec_tlcClose */
/* Demangled: gfnMtkVP9SecVdec_tlcClose */
extern void* gfnMtkVP9SecVdec_tlcClose;

/* Symbol: VP9_UPDATE_MVD_INT_PROBS */
/* Demangled: VP9_UPDATE_MVD_INT_PROBS */
int VP9_UPDATE_MVD_INT_PROBS(void);

/* Symbol: h264_enc_encode_Frame */
/* Demangled: h264_enc_encode_Frame */
int h264_enc_encode_Frame(void);

/* Symbol: H265_HAL_ReadUFO */
/* Demangled: H265_HAL_ReadUFO */
int H265_HAL_ReadUFO(void);

/* Symbol: H265_cleanSliceHeader */
/* Demangled: H265_cleanSliceHeader */
int H265_cleanSliceHeader(void);

/* Symbol: h264_enc_set_ConfigQP */
/* Demangled: h264_enc_set_ConfigQP */
int h264_enc_set_ConfigQP(void);

/* Symbol: H265_SetRefPicList */
/* Demangled: H265_SetRefPicList */
int H265_SetRefPicList(void);

/* Symbol: H264SetCurrPOC */
/* Demangled: H264SetCurrPOC */
int H264SetCurrPOC(void);

/* Symbol: QUANT_INTRA_DEFAULT */
/* Demangled: QUANT_INTRA_DEFAULT */
extern void* QUANT_INTRA_DEFAULT;

/* Symbol: find_next_vop */
/* Demangled: find_next_vop */
int find_next_vop(void);

/* Symbol: VP9_HAL_WriteMISC */
/* Demangled: VP9_HAL_WriteMISC */
int VP9_HAL_WriteMISC(void);

/* Symbol: H264_HAL_ReadCRC */
/* Demangled: H264_HAL_ReadCRC */
int H264_HAL_ReadCRC(void);

/* Symbol: H264_HAL_ReadMISC */
/* Demangled: H264_HAL_ReadMISC */
int H264_HAL_ReadMISC(void);

/* Symbol: H264_HAL_SetBRefPicListReg */
/* Demangled: H264_HAL_SetBRefPicListReg */
int H264_HAL_SetBRefPicListReg(void);

/* Symbol: Vdec_Drv_H264_decode_sec */
/* Demangled: Vdec_Drv_H264_decode_sec */
int Vdec_Drv_H264_decode_sec(void);

/* Symbol: VP8_UnLockHW */
/* Demangled: VP8_UnLockHW */
int VP8_UnLockHW(void);

/* Symbol: Vdec_Drv_VP9_Trigger_Dec */
/* Demangled: Vdec_Drv_VP9_Trigger_Dec */
int Vdec_Drv_VP9_Trigger_Dec(void);

/* Symbol: H265_initTilesInfo */
/* Demangled: H265_initTilesInfo */
int H265_initTilesInfo(void);

/* Symbol: H264InitFBufInfo */
/* Demangled: H264InitFBufInfo */
int H264InitFBufInfo(void);

/* Symbol: H264_SetEncParam_Bitrate */
/* Demangled: H264_SetEncParam_Bitrate */
int H264_SetEncParam_Bitrate(void);

/* Symbol: H265_HAL_HWUnLock_sec */
/* Demangled: H265_HAL_HWUnLock_sec */
int H265_HAL_HWUnLock_sec(void);

/* Symbol: Vdec_Drv_H264_setPara */
/* Demangled: Vdec_Drv_H264_setPara */
int Vdec_Drv_H264_setPara(void);

/* Symbol: VP9_Setup_Compound_Ref_Mode */
/* Demangled: VP9_Setup_Compound_Ref_Mode */
int VP9_Setup_Compound_Ref_Mode(void);

/* Symbol: h264_sw_enc_get_multislice_enabled */
/* Demangled: h264_sw_enc_get_multislice_enabled */
int h264_sw_enc_get_multislice_enabled(void);

/* Symbol: GetYUVBuffer */
/* Demangled: GetYUVBuffer */
int GetYUVBuffer(void);

/* Symbol: H264BufferInvalidateCache */
/* Demangled: H264BufferInvalidateCache */
int H264BufferInvalidateCache(void);

/* Symbol: Vdec_Drv_H265_init */
/* Demangled: Vdec_Drv_H265_init */
int Vdec_Drv_H265_init(void);

/* Symbol: VP9_Setup_Loop_Filter */
/* Demangled: VP9_Setup_Loop_Filter */
int VP9_Setup_Loop_Filter(void);

/* Symbol: mpeg4_enc_init */
/* Demangled: mpeg4_enc_init */
int mpeg4_enc_init(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: H265_HAL_ReadCheckSum */
/* Demangled: H265_HAL_ReadCheckSum */
int H265_HAL_ReadCheckSum(void);

/* Symbol: H264_HAL_WriteMC */
/* Demangled: H264_HAL_WriteMC */
int H264_HAL_WriteMC(void);

/* Symbol: gfnMtkH264SecVdec_tlcInit */
/* Demangled: gfnMtkH264SecVdec_tlcInit */
extern void* gfnMtkH264SecVdec_tlcInit;

/* Symbol: FindNextSync */
/* Demangled: FindNextSync */
int FindNextSync(void);

/* Symbol: MPEG2BufferFlushRange */
/* Demangled: MPEG2BufferFlushRange */
int MPEG2BufferFlushRange(void);

/* Symbol: gfnMtkVP9SecVdec_tlcDeinit */
/* Demangled: gfnMtkVP9SecVdec_tlcDeinit */
extern void* gfnMtkVP9SecVdec_tlcDeinit;

/* Symbol: VP9_HAL_ReadSYS */
/* Demangled: VP9_HAL_ReadSYS */
int VP9_HAL_ReadSYS(void);

/* Symbol: VP9_Read_Literal_Raw */
/* Demangled: VP9_Read_Literal_Raw */
int VP9_Read_Literal_Raw(void);

/* Symbol: h264_enc_deInit */
/* Demangled: h264_enc_deInit */
int h264_enc_deInit(void);

/* Symbol: H264_EncodeFrameEnc_ReadResult */
/* Demangled: H264_EncodeFrameEnc_ReadResult */
int H264_EncodeFrameEnc_ReadResult(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: DrvAddFrameSizes */
/* Demangled: DrvAddFrameSizes */
int DrvAddFrameSizes(void);

/* Symbol: H265_initSigLastScan */
/* Demangled: H265_initSigLastScan */
int H265_initSigLastScan(void);

/* Symbol: H264_HAL_ResetForError */
/* Demangled: H264_HAL_ResetForError */
int H264_HAL_ResetForError(void);

/* Symbol: H264_HAL_UeCodeNum */
/* Demangled: H264_HAL_UeCodeNum */
int H264_HAL_UeCodeNum(void);

/* Symbol: pfnMtkVdecH264SecDecode_Ptr */
/* Demangled: pfnMtkVdecH264SecDecode_Ptr */
extern void* pfnMtkVdecH264SecDecode_Ptr;

/* Symbol: VP9_HAL_WriteSYS */
/* Demangled: VP9_HAL_WriteSYS */
int VP9_HAL_WriteSYS(void);

/* Symbol: HEVC_GetUVPitchWidthMBCnt */
/* Demangled: HEVC_GetUVPitchWidthMBCnt */
int HEVC_GetUVPitchWidthMBCnt(void);

/* Symbol: H265_initPPS */
/* Demangled: H265_initPPS */
int H265_initPPS(void);

/* Symbol: mpeg2_skip_frame_check */
/* Demangled: mpeg2_skip_frame_check */
int mpeg2_skip_frame_check(void);

/* Symbol: gVC1_DRV_IF */
/* Demangled: gVC1_DRV_IF */
extern void* gVC1_DRV_IF;

/* Symbol: h265_dec_decode */
/* Demangled: h265_dec_decode */
int h265_dec_decode(void);

/* Symbol: H265_initSEI */
/* Demangled: H265_initSEI */
int H265_initSEI(void);

/* Symbol: GetEncoderAPI */
/* Demangled: GetEncoderAPI */
int GetEncoderAPI(void);

/* Symbol: eVDecDrvInit */
/* Demangled: eVDecDrvInit */
int eVDecDrvInit(void);

/* Symbol: mpeg4_risc_settings */
/* Demangled: mpeg4_risc_settings */
int mpeg4_risc_settings(void);

/* Symbol: mpeg4_enc_getParameter */
/* Demangled: mpeg4_enc_getParameter */
int mpeg4_enc_getParameter(void);

/* Symbol: SetParameter */
/* Demangled: SetParameter */
int SetParameter(void);

/* Symbol: H264AdapRefPicmarkingProce */
/* Demangled: H264AdapRefPicmarkingProce */
int H264AdapRefPicmarkingProce(void);

/* Symbol: destroySPS */
/* Demangled: destroySPS */
int destroySPS(void);

/* Symbol: mpeg4_ext_dec_getParameter */
/* Demangled: mpeg4_ext_dec_getParameter */
int mpeg4_ext_dec_getParameter(void);

/* Symbol: vp9_dec_getParameter_sec */
/* Demangled: vp9_dec_getParameter_sec */
int vp9_dec_getParameter_sec(void);

/* Symbol: VP9_Set_MC_Ref_Pitch */
/* Demangled: VP9_Set_MC_Ref_Pitch */
int VP9_Set_MC_Ref_Pitch(void);

/* Symbol: VP9_UPDATE_PARTITION_PROBS */
/* Demangled: VP9_UPDATE_PARTITION_PROBS */
int VP9_UPDATE_PARTITION_PROBS(void);

/* Symbol: vc1_dec_init */
/* Demangled: vc1_dec_init */
int vc1_dec_init(void);

/* Symbol: H265_GCE_PollReg */
/* Demangled: H265_GCE_PollReg */
int H265_GCE_PollReg(void);

/* Symbol: Vdec_Drv_H265_getPara */
/* Demangled: Vdec_Drv_H265_getPara */
int Vdec_Drv_H265_getPara(void);

/* Symbol: H265_parseSPS */
/* Demangled: H265_parseSPS */
int H265_parseSPS(void);

/* Symbol: mpeg4_dec_deInit */
/* Demangled: mpeg4_dec_deInit */
int mpeg4_dec_deInit(void);

/* Symbol: VP9_Setup_Display_Size */
/* Demangled: VP9_Setup_Display_Size */
int VP9_Setup_Display_Size(void);

/* Symbol: FillFrameNumGap */
/* Demangled: FillFrameNumGap */
int FillFrameNumGap(void);

/* Symbol: VP9_Show_Existing_Display_Copy */
/* Demangled: VP9_Show_Existing_Display_Copy */
int VP9_Show_Existing_Display_Copy(void);

/* Symbol: vp9_dec_init */
/* Demangled: vp9_dec_init */
int vp9_dec_init(void);

/* Symbol: VP9_Adapt_Mode_Probs */
/* Demangled: VP9_Adapt_Mode_Probs */
int VP9_Adapt_Mode_Probs(void);

/* Symbol: hevc_enc_deInit */
/* Demangled: hevc_enc_deInit */
int hevc_enc_deInit(void);

/* Symbol: EncodeGenerateHeader */
/* Demangled: EncodeGenerateHeader */
int EncodeGenerateHeader(void);

/* Symbol: H265_HAL_SafeBreak */
/* Demangled: H265_HAL_SafeBreak */
int H265_HAL_SafeBreak(void);

/* Symbol: Vdec_Drv_H265_close */
/* Demangled: Vdec_Drv_H265_close */
int Vdec_Drv_H265_close(void);

/* Symbol: H264_HAL_ResetHW */
/* Demangled: H264_HAL_ResetHW */
int H264_HAL_ResetHW(void);

/* Symbol: mDIBypass */
/* Demangled: mDIBypass */
extern void* mDIBypass;

/* Symbol: parseSliceHeaderHW */
/* Demangled: parseSliceHeaderHW */
int parseSliceHeaderHW(void);

/* Symbol: H264_EncodeFrameEnc_WP */
/* Demangled: H264_EncodeFrameEnc_WP */
int H264_EncodeFrameEnc_WP(void);

/* Symbol: vc1_dec_decode */
/* Demangled: vc1_dec_decode */
int vc1_dec_decode(void);

/* Symbol: H265_parseVUI */
/* Demangled: H265_parseVUI */
int H265_parseVUI(void);

/* Symbol: u4LengthOfNALSize */
/* Demangled: u4LengthOfNALSize */
extern void* u4LengthOfNALSize;

/* Symbol: VP8_LoadCoefProbs */
/* Demangled: VP8_LoadCoefProbs */
int VP8_LoadCoefProbs(void);

/* Symbol: VP8_UpdateBufStatus */
/* Demangled: VP8_UpdateBufStatus */
int VP8_UpdateBufStatus(void);

/* Symbol: adapt_coef_probs */
/* Demangled: adapt_coef_probs */
int adapt_coef_probs(void);

/* Symbol: HEVC_EncodeFrameEnc_SetBufs */
/* Demangled: HEVC_EncodeFrameEnc_SetBufs */
int HEVC_EncodeFrameEnc_SetBufs(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: tv_start */
/* Demangled: tv_start */
extern void* tv_start;

/* Symbol: H264_EncodeFrameStart */
/* Demangled: H264_EncodeFrameStart */
int H264_EncodeFrameStart(void);

/* Symbol: HEVC_SetEncParam */
/* Demangled: HEVC_SetEncParam */
int HEVC_SetEncParam(void);

/* Symbol: eVEncDrv__VdoMemAllocAligned_C */
/* Demangled: eVEncDrv__VdoMemAllocAligned_C */
int eVEncDrv__VdoMemAllocAligned_C(void);

/* Symbol: Vdec_Drv_H264_getDisplay */
/* Demangled: Vdec_Drv_H264_getDisplay */
int Vdec_Drv_H264_getDisplay(void);

/* Symbol: gfnMtkH264SecVdec_tlcDecode */
/* Demangled: gfnMtkH264SecVdec_tlcDecode */
extern void* gfnMtkH264SecVdec_tlcDecode;

/* Symbol: RBSPGetBits */
/* Demangled: RBSPGetBits */
int RBSPGetBits(void);

/* Symbol: VP9_Set_MC_Set_UMV */
/* Demangled: VP9_Set_MC_Set_UMV */
int VP9_Set_MC_Set_UMV(void);

/* Symbol: h264_enc_setParameter */
/* Demangled: h264_enc_setParameter */
int h264_enc_setParameter(void);

/* Symbol: H265_HAL_ReadMISC */
/* Demangled: H265_HAL_ReadMISC */
int H265_HAL_ReadMISC(void);

/* Symbol: H265_RBSPGetBits */
/* Demangled: H265_RBSPGetBits */
int H265_RBSPGetBits(void);

/* Symbol: H264_HAL_ReadUFO */
/* Demangled: H264_HAL_ReadUFO */
int H264_HAL_ReadUFO(void);

/* Symbol: clip_prob */
/* Demangled: clip_prob */
int clip_prob(void);

/* Symbol: H264_EncodeFrame */
/* Demangled: H264_EncodeFrame */
int H264_EncodeFrame(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: gH264_DRV_IF */
/* Demangled: gH264_DRV_IF */
extern void* gH264_DRV_IF;

/* Symbol: H265_CompHDRStaticMetadata */
/* Demangled: H265_CompHDRStaticMetadata */
int H265_CompHDRStaticMetadata(void);

/* Symbol: mpeg2_dec_decode */
/* Demangled: mpeg2_dec_decode */
int mpeg2_dec_decode(void);

/* Symbol: VP9_Set_Tile_Info */
/* Demangled: VP9_Set_Tile_Info */
int VP9_Set_Tile_Info(void);

/* Symbol: h264_enc_putbits */
/* Demangled: h264_enc_putbits */
int h264_enc_putbits(void);

/* Symbol: H265_HAL_GetBitStreamShift */
/* Demangled: H265_HAL_GetBitStreamShift */
int H265_HAL_GetBitStreamShift(void);

/* Symbol: H264_HAL_GetStartCode_8530 */
/* Demangled: H264_HAL_GetStartCode_8530 */
int H264_HAL_GetStartCode_8530(void);

/* Symbol: MPEG2_Parse_Sequence_Header */
/* Demangled: MPEG2_Parse_Sequence_Header */
int MPEG2_Parse_Sequence_Header(void);

/* Symbol: VP8_ReadMISC */
/* Demangled: VP8_ReadMISC */
int VP8_ReadMISC(void);

/* Symbol: ucHEVCRCPUCode_20181107 */
/* Demangled: ucHEVCRCPUCode_20181107 */
extern void* ucHEVCRCPUCode_20181107;

/* Symbol: H265_GCE_ReadReg */
/* Demangled: H265_GCE_ReadReg */
int H265_GCE_ReadReg(void);

/* Symbol: H265_HAL_ESL_Setting */
/* Demangled: H265_HAL_ESL_Setting */
int H265_HAL_ESL_Setting(void);

/* Symbol: H265_HAL_WriteMISC */
/* Demangled: H265_HAL_WriteMISC */
int H265_HAL_WriteMISC(void);

/* Symbol: H264_HAL_GetErrMsg */
/* Demangled: H264_HAL_GetErrMsg */
int H264_HAL_GetErrMsg(void);

/* Symbol: H265_DEBUG_DumpErrorBitStreamBuffer */
/* Demangled: H265_DEBUG_DumpErrorBitStreamBuffer */
int H265_DEBUG_DumpErrorBitStreamBuffer(void);

/* Symbol: H264_HAL_ReadFinishFlag */
/* Demangled: H264_HAL_ReadFinishFlag */
int H264_HAL_ReadFinishFlag(void);

/* Symbol: bIsH264VDecComplete */
/* Demangled: bIsH264VDecComplete */
int bIsH264VDecComplete(void);

/* Symbol: H264_set_NonRefP_chipDependCheck */
/* Demangled: H264_set_NonRefP_chipDependCheck */
int H264_set_NonRefP_chipDependCheck(void);

/* Symbol: HEVC_FrmLvlMMRSetting */
/* Demangled: HEVC_FrmLvlMMRSetting */
int HEVC_FrmLvlMMRSetting(void);

/* Symbol: DecodeOneUnit */
/* Demangled: DecodeOneUnit */
int DecodeOneUnit(void);

/* Symbol: eVEncDrvQueryCapability */
/* Demangled: eVEncDrvQueryCapability */
int eVEncDrvQueryCapability(void);

/* Symbol: DrvLockPutListCB */
/* Demangled: DrvLockPutListCB */
int DrvLockPutListCB(void);

/* Symbol: RBSPGetBitOffset */
/* Demangled: RBSPGetBitOffset */
int RBSPGetBitOffset(void);

/* Symbol: VP8_InitProc */
/* Demangled: VP8_InitProc */
int VP8_InitProc(void);

/* Symbol: H264_IsANRPRefine */
/* Demangled: H264_IsANRPRefine */
int H264_IsANRPRefine(void);

/* Symbol: H265_parsePTL */
/* Demangled: H265_parsePTL */
int H265_parsePTL(void);

/* Symbol: bIsNonRefFbuf */
/* Demangled: bIsNonRefFbuf */
int bIsNonRefFbuf(void);

/* Symbol: h264_dec_getFreeBuffer */
/* Demangled: h264_dec_getFreeBuffer */
int h264_dec_getFreeBuffer(void);

/* Symbol: MPEG2_Parse_Ext_Data */
/* Demangled: MPEG2_Parse_Ext_Data */
int MPEG2_Parse_Ext_Data(void);

/* Symbol: gVP9SecVdecTlcLib */
/* Demangled: gVP9SecVdecTlcLib */
extern void* gVP9SecVdecTlcLib;

/* Symbol: h264_enc_init_common */
/* Demangled: h264_enc_init_common */
int h264_enc_init_common(void);

/* Symbol: H265_HAL_SetHEIFECModeReg */
/* Demangled: H265_HAL_SetHEIFECModeReg */
int H265_HAL_SetHEIFECModeReg(void);

/* Symbol: get_toggle_property */
/* Demangled: get_toggle_property */
int get_toggle_property(void);

/* Symbol: u4ValLogLevel */
/* Demangled: u4ValLogLevel */
extern void* u4ValLogLevel;

/* Symbol: VP9_UnCompressed_Header_Parse */
/* Demangled: VP9_UnCompressed_Header_Parse */
int VP9_UnCompressed_Header_Parse(void);

/* Symbol: HEVC_EncodeVPS */
/* Demangled: HEVC_EncodeVPS */
int HEVC_EncodeVPS(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: MPEG2_Parse_GOP_Header */
/* Demangled: MPEG2_Parse_GOP_Header */
int MPEG2_Parse_GOP_Header(void);

/* Symbol: MPEG2_Parse_Quant_Matrix_Ext */
/* Demangled: MPEG2_Parse_Quant_Matrix_Ext */
int MPEG2_Parse_Quant_Matrix_Ext(void);

/* Symbol: VP8_ReadVP8MC */
/* Demangled: VP8_ReadVP8MC */
int VP8_ReadVP8MC(void);

/* Symbol: H264_EncodeFrameEnc_WaitHW */
/* Demangled: H264_EncodeFrameEnc_WaitHW */
int H264_EncodeFrameEnc_WaitHW(void);

/* Symbol: H265_FindNextSync */
/* Demangled: H265_FindNextSync */
int H265_FindNextSync(void);

/* Symbol: H265_destroyRBSPBitStream */
/* Demangled: H265_destroyRBSPBitStream */
int H265_destroyRBSPBitStream(void);

/* Symbol: H264_HAL_HWLock */
/* Demangled: H264_HAL_HWLock */
int H264_HAL_HWLock(void);

/* Symbol: initRBSPBitStream */
/* Demangled: initRBSPBitStream */
int initRBSPBitStream(void);

/* Symbol: VP8_ReadVLD */
/* Demangled: VP8_ReadVLD */
int VP8_ReadVLD(void);

/* Symbol: VP8_WriteVP8VLD */
/* Demangled: VP8_WriteVP8VLD */
int VP8_WriteVP8VLD(void);

/* Symbol: vp9_dec_deInit_sec */
/* Demangled: vp9_dec_deInit_sec */
int vp9_dec_deInit_sec(void);

/* Symbol: QueryCapability */
/* Demangled: QueryCapability */
int QueryCapability(void);

/* Symbol: H264GetFrameBufferFromFree */
/* Demangled: H264GetFrameBufferFromFree */
int H264GetFrameBufferFromFree(void);

/* Symbol: VP8_InitBarrelShifter */
/* Demangled: VP8_InitBarrelShifter */
int VP8_InitBarrelShifter(void);

/* Symbol: vp9_mv_class_tree */
/* Demangled: vp9_mv_class_tree */
extern void* vp9_mv_class_tree;

/* Symbol: pf_Profiling */
/* Demangled: pf_Profiling */
extern void* pf_Profiling;

/* Symbol: VP9_Segfeature_Active */
/* Demangled: VP9_Segfeature_Active */
int VP9_Segfeature_Active(void);

/* Symbol: Vdec_Drv_VP9_Init */
/* Demangled: Vdec_Drv_VP9_Init */
int Vdec_Drv_VP9_Init(void);

/* Symbol: vp9_mv_joint_tree */
/* Demangled: vp9_mv_joint_tree */
extern void* vp9_mv_joint_tree;

/* Symbol: H264_GetProfile */
/* Demangled: H264_GetProfile */
int H264_GetProfile(void);

/* Symbol: ReturnBitstream */
/* Demangled: ReturnBitstream */
int ReturnBitstream(void);

/* Symbol: H265_GCE_WaitEvent */
/* Demangled: H265_GCE_WaitEvent */
int H265_GCE_WaitEvent(void);

/* Symbol: H265_HAL_SetPPSHEVLD */
/* Demangled: H265_HAL_SetPPSHEVLD */
int H265_HAL_SetPPSHEVLD(void);

/* Symbol: H264_HAL_SetPPSAVLD */
/* Demangled: H264_HAL_SetPPSAVLD */
int H264_HAL_SetPPSAVLD(void);

/* Symbol: H264_EncodeFrameEnc_SetBufs */
/* Demangled: H264_EncodeFrameEnc_SetBufs */
int H264_EncodeFrameEnc_SetBufs(void);

/* Symbol: U32_AT */
/* Demangled: U32_AT */
int U32_AT(void);

/* Symbol: H264_DEBUG_DumpBitStreamBuffer */
/* Demangled: H264_DEBUG_DumpBitStreamBuffer */
int H264_DEBUG_DumpBitStreamBuffer(void);

/* Symbol: getDpbSize */
/* Demangled: getDpbSize */
int getDpbSize(void);

/* Symbol: mp4_util_log2ceil */
/* Demangled: mp4_util_log2ceil */
int mp4_util_log2ceil(void);

/* Symbol: vp8_dec_init */
/* Demangled: vp8_dec_init */
int vp8_dec_init(void);

/* Symbol: gfnMtkVP9SecVdec_tlcHandleCreate */
/* Demangled: gfnMtkVP9SecVdec_tlcHandleCreate */
extern void* gfnMtkVP9SecVdec_tlcHandleCreate;

/* Symbol: RefFreeYUVBuffer */
/* Demangled: RefFreeYUVBuffer */
int RefFreeYUVBuffer(void);

/* Symbol: VP8_WriteVLDTOP */
/* Demangled: VP8_WriteVLDTOP */
int VP8_WriteVLDTOP(void);

/* Symbol: weighted_prob */
/* Demangled: weighted_prob */
int weighted_prob(void);

/* Symbol: HEVC_EncodeVPS_HW */
/* Demangled: HEVC_EncodeVPS_HW */
int HEVC_EncodeVPS_HW(void);

/* Symbol: eVEncDrvCreate */
/* Demangled: eVEncDrvCreate */
int eVEncDrvCreate(void);

/* Symbol: Paused */
/* Demangled: Paused */
int Paused(void);

/* Symbol: fpLog */
/* Demangled: fpLog */
extern void* fpLog;

/* Symbol: VP9_AC_Quant */
/* Demangled: VP9_AC_Quant */
int VP9_AC_Quant(void);

/* Symbol: VP8_FrmBufUseListToFrmBufFreeList */
/* Demangled: VP8_FrmBufUseListToFrmBufFreeList */
int VP8_FrmBufUseListToFrmBufFreeList(void);

/* Symbol: VP9_Set_UnCompressed */
/* Demangled: VP9_Set_UnCompressed */
int VP9_Set_UnCompressed(void);

/* Symbol: VP9_UPDATE_INTER_MODE_PROBS */
/* Demangled: VP9_UPDATE_INTER_MODE_PROBS */
int VP9_UPDATE_INTER_MODE_PROBS(void);

/* Symbol: H264_DEBUG_DumpSecureFrameBuffer */
/* Demangled: H264_DEBUG_DumpSecureFrameBuffer */
int H264_DEBUG_DumpSecureFrameBuffer(void);

/* Symbol: initPPS */
/* Demangled: initPPS */
int initPPS(void);

/* Symbol: Vdec_Drv_VP9_FreeBuf */
/* Demangled: Vdec_Drv_VP9_FreeBuf */
int Vdec_Drv_VP9_FreeBuf(void);

/* Symbol: eVMPEG4EncDrv__VdoMemAllocAligned_C */
/* Demangled: eVMPEG4EncDrv__VdoMemAllocAligned_C */
int eVMPEG4EncDrv__VdoMemAllocAligned_C(void);

/* Symbol: H264_WP_Stage2 */
/* Demangled: H264_WP_Stage2 */
int H264_WP_Stage2(void);

/* Symbol: h264_sw_enc_setParameter */
/* Demangled: h264_sw_enc_setParameter */
int h264_sw_enc_setParameter(void);

/* Symbol: fpLogfileCore */
/* Demangled: fpLogfileCore */
extern void* fpLogfileCore;

/* Symbol: initSEI */
/* Demangled: initSEI */
int initSEI(void);

/* Symbol: H264_WP_Stage3 */
/* Demangled: H264_WP_Stage3 */
int H264_WP_Stage3(void);

/* Symbol: H265_initROM */
/* Demangled: H265_initROM */
int H265_initROM(void);

/* Symbol: HEVC_AllocWorkBuf */
/* Demangled: HEVC_AllocWorkBuf */
int HEVC_AllocWorkBuf(void);

/* Symbol: HEVC_UpdateViLTEBitrate */
/* Demangled: HEVC_UpdateViLTEBitrate */
int HEVC_UpdateViLTEBitrate(void);

/* Symbol: HEVC_SeqLvlMMRSetting */
/* Demangled: HEVC_SeqLvlMMRSetting */
int HEVC_SeqLvlMMRSetting(void);

/* Symbol: H265_PutFrameBufferToAvailable */
/* Demangled: H265_PutFrameBufferToAvailable */
int H265_PutFrameBufferToAvailable(void);

/* Symbol: H264_HAL_DecPicComplete */
/* Demangled: H264_HAL_DecPicComplete */
int H264_HAL_DecPicComplete(void);

/* Symbol: H264_HAL_PredWeightTable */
/* Demangled: H264_HAL_PredWeightTable */
int H264_HAL_PredWeightTable(void);

/* Symbol: InputBuffSize */
/* Demangled: InputBuffSize */
extern void* InputBuffSize;

/* Symbol: VP9_Set_Probs_Table */
/* Demangled: VP9_Set_Probs_Table */
int VP9_Set_Probs_Table(void);

/* Symbol: H264_HAL_InitH264BarrelShift */
/* Demangled: H264_HAL_InitH264BarrelShift */
int H264_HAL_InitH264BarrelShift(void);

/* Symbol: AllocateFBuf */
/* Demangled: AllocateFBuf */
int AllocateFBuf(void);

/* Symbol: Vdec_Drv_H264_set_bs_Wptr */
/* Demangled: Vdec_Drv_H264_set_bs_Wptr */
int Vdec_Drv_H264_set_bs_Wptr(void);

/* Symbol: VP9_HAL_GetPDNSetting */
/* Demangled: VP9_HAL_GetPDNSetting */
int VP9_HAL_GetPDNSetting(void);

/* Symbol: vp8_dec_deInit */
/* Demangled: vp8_dec_deInit */
int vp8_dec_deInit(void);

/* Symbol: VP9_Read_Bitdepth_Colorspace_Sampling */
/* Demangled: VP9_Read_Bitdepth_Colorspace_Sampling */
int VP9_Read_Bitdepth_Colorspace_Sampling(void);

/* Symbol: VP9_HAL_WriteVP9VLD */
/* Demangled: VP9_HAL_WriteVP9VLD */
int VP9_HAL_WriteVP9VLD(void);

/* Symbol: VP9_Set_MC_MI_COLS_ROWS */
/* Demangled: VP9_Set_MC_MI_COLS_ROWS */
int VP9_Set_MC_MI_COLS_ROWS(void);

/* Symbol: H264_AllocWorkBuf */
/* Demangled: H264_AllocWorkBuf */
int H264_AllocWorkBuf(void);

/* Symbol: H264_HAL_PowerOff */
/* Demangled: H264_HAL_PowerOff */
int H264_HAL_PowerOff(void);

/* Symbol: VP8_RemoveFromFrmBufUseList */
/* Demangled: VP8_RemoveFromFrmBufUseList */
int VP8_RemoveFromFrmBufUseList(void);

/* Symbol: VP9_Get_Msb */
/* Demangled: VP9_Get_Msb */
int VP9_Get_Msb(void);

/* Symbol: H265_Golomb_Test_String */
/* Demangled: H265_Golomb_Test_String */
extern void* H265_Golomb_Test_String;

/* Symbol: VP8_DecEnd */
/* Demangled: VP8_DecEnd */
int VP8_DecEnd(void);

/* Symbol: VP8_ReadVP8MV */
/* Demangled: VP8_ReadVP8MV */
int VP8_ReadVP8MV(void);

/* Symbol: vp9_dec_getParameter */
/* Demangled: vp9_dec_getParameter */
int vp9_dec_getParameter(void);

/* Symbol: vp9_dec_setParameter_sec */
/* Demangled: vp9_dec_setParameter_sec */
int vp9_dec_setParameter_sec(void);

/* Symbol: h264_enc_set_Scenario */
/* Demangled: h264_enc_set_Scenario */
int h264_enc_set_Scenario(void);

/* Symbol: HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch */
/* Demangled: HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch */
int HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch(void);

/* Symbol: H264UpdateViLTEBitrate */
/* Demangled: H264UpdateViLTEBitrate */
int H264UpdateViLTEBitrate(void);

/* Symbol: findMCfromPP */
/* Demangled: findMCfromPP */
int findMCfromPP(void);

/* Symbol: HEVC_EncodeFrame */
/* Demangled: HEVC_EncodeFrame */
int HEVC_EncodeFrame(void);

/* Symbol: H264_HAL_ReadSYS */
/* Demangled: H264_HAL_ReadSYS */
int H264_HAL_ReadSYS(void);

/* Symbol: H264_HAL_WriteVLDTOP */
/* Demangled: H264_HAL_WriteVLDTOP */
int H264_HAL_WriteVLDTOP(void);

/* Symbol: vp8_dec_getDisplayBuffer */
/* Demangled: vp8_dec_getDisplayBuffer */
int vp8_dec_getDisplayBuffer(void);

/* Symbol: Vdec_Drv_VP9_GetFreeBuffer */
/* Demangled: Vdec_Drv_VP9_GetFreeBuffer */
int Vdec_Drv_VP9_GetFreeBuffer(void);

/* Symbol: VP9_Read_Frame_Reference_Mode */
/* Demangled: VP9_Read_Frame_Reference_Mode */
int VP9_Read_Frame_Reference_Mode(void);

/* Symbol: VP9_Setup_Frame_Size */
/* Demangled: VP9_Setup_Frame_Size */
int VP9_Setup_Frame_Size(void);

/* Symbol: H265_DEBUG_DumpSecureFrameBuffer */
/* Demangled: H265_DEBUG_DumpSecureFrameBuffer */
int H265_DEBUG_DumpSecureFrameBuffer(void);

/* Symbol: H264_HAL_PowerDown */
/* Demangled: H264_HAL_PowerDown */
int H264_HAL_PowerDown(void);

/* Symbol: H264_DoANRPRefine */
/* Demangled: H264_DoANRPRefine */
int H264_DoANRPRefine(void);

/* Symbol: ucHEVCRCPUCode_20170721_ViLTE */
/* Demangled: ucHEVCRCPUCode_20170721_ViLTE */
extern void* ucHEVCRCPUCode_20170721_ViLTE;

/* Symbol: HEVC_EncodeSEI_HDRStatic_part1 */
/* Demangled: HEVC_EncodeSEI_HDRStatic_part1 */
int HEVC_EncodeSEI_HDRStatic_part1(void);

/* Symbol: eVDecDrvCreate */
/* Demangled: eVDecDrvCreate */
int eVDecDrvCreate(void);

/* Symbol: H265_GCE_GetDebugReg */
/* Demangled: H265_GCE_GetDebugReg */
int H265_GCE_GetDebugReg(void);

/* Symbol: H265_HAL_WriteVLDTOP */
/* Demangled: H265_HAL_WriteVLDTOP */
int H265_HAL_WriteVLDTOP(void);

/* Symbol: H264_HAL_SetPOC */
/* Demangled: H264_HAL_SetPOC */
int H264_HAL_SetPOC(void);

/* Symbol: h264_dec_decodeEx */
/* Demangled: h264_dec_decodeEx */
int h264_dec_decodeEx(void);

/* Symbol: HEVC_EncodeSEI_HDRStatic_part2 */
/* Demangled: HEVC_EncodeSEI_HDRStatic_part2 */
int HEVC_EncodeSEI_HDRStatic_part2(void);

/* Symbol: H264_HAL_ReadPP */
/* Demangled: H264_HAL_ReadPP */
int H264_HAL_ReadPP(void);

/* Symbol: vp9_dec_getDisplayBuffer */
/* Demangled: vp9_dec_getDisplayBuffer */
int vp9_dec_getDisplayBuffer(void);

/* Symbol: HEVC_CheckSupportNonRefP */
/* Demangled: HEVC_CheckSupportNonRefP */
int HEVC_CheckSupportNonRefP(void);

/* Symbol: mpeg2_risc_settings */
/* Demangled: mpeg2_risc_settings */
int mpeg2_risc_settings(void);

/* Symbol: VP8_WriteVP8PP */
/* Demangled: VP8_WriteVP8PP */
int VP8_WriteVP8PP(void);

/* Symbol: HEVC_ResetVENC */
/* Demangled: HEVC_ResetVENC */
int HEVC_ResetVENC(void);

/* Symbol: tvf_end */
/* Demangled: tvf_end */
extern void* tvf_end;

/* Symbol: H265DecEndProc */
/* Demangled: H265DecEndProc */
int H265DecEndProc(void);

/* Symbol: mpeg4_dec_decode */
/* Demangled: mpeg4_dec_decode */
int mpeg4_dec_decode(void);

/* Symbol: VP8_AddToFrmBufUseList */
/* Demangled: VP8_AddToFrmBufUseList */
int VP8_AddToFrmBufUseList(void);

/* Symbol: VP9_Get_Bits_Count */
/* Demangled: VP9_Get_Bits_Count */
int VP9_Get_Bits_Count(void);

/* Symbol: ucH264RCPUCode_LowPower */
/* Demangled: ucH264RCPUCode_LowPower */
extern void* ucH264RCPUCode_LowPower;

/* Symbol: H264_SetEncParam_Basic */
/* Demangled: H264_SetEncParam_Basic */
int H264_SetEncParam_Basic(void);

/* Symbol: H264GetPicRefType */
/* Demangled: H264GetPicRefType */
int H264GetPicRefType(void);

/* Symbol: VP8_ReadVP8VLD2 */
/* Demangled: VP8_ReadVP8VLD2 */
int VP8_ReadVP8VLD2(void);

/* Symbol: H265_destroySPS */
/* Demangled: H265_destroySPS */
int H265_destroySPS(void);

/* Symbol: LoadQuantizerMatrix */
/* Demangled: LoadQuantizerMatrix */
int LoadQuantizerMatrix(void);

/* Symbol: gfnMtkVP9SecVdec_tlcInit */
/* Demangled: gfnMtkVP9SecVdec_tlcInit */
extern void* gfnMtkVP9SecVdec_tlcInit;

/* Symbol: VP9_Get_Segdata */
/* Demangled: VP9_Get_Segdata */
int VP9_Get_Segdata(void);

/* Symbol: H264_SearchReference */
/* Demangled: H264_SearchReference */
int H264_SearchReference(void);

/* Symbol: H264_SetArgb */
/* Demangled: H264_SetArgb */
int H264_SetArgb(void);

/* Symbol: H265_destroySliceHeader */
/* Demangled: H265_destroySliceHeader */
int H265_destroySliceHeader(void);

/* Symbol: HEVC_SetMaxQP */
/* Demangled: HEVC_SetMaxQP */
int HEVC_SetMaxQP(void);

/* Symbol: H264_HAL_ReadCheckSum */
/* Demangled: H264_HAL_ReadCheckSum */
int H264_HAL_ReadCheckSum(void);

/* Symbol: H264DecEndProc */
/* Demangled: H264DecEndProc */
int H264DecEndProc(void);

/* Symbol: findPPfromMC */
/* Demangled: findPPfromMC */
int findPPfromMC(void);

/* Symbol: mpeg2_dec_setParameter */
/* Demangled: mpeg2_dec_setParameter */
int mpeg2_dec_setParameter(void);

/* Symbol: VP8_WriteVLD */
/* Demangled: VP8_WriteVLD */
int VP8_WriteVLD(void);

/* Symbol: latTid */
/* Demangled: latTid */
extern void* latTid;

/* Symbol: h265_dec_setParameter */
/* Demangled: h265_dec_setParameter */
int h265_dec_setParameter(void);

/* Symbol: Vdec_Drv_H264_getPara */
/* Demangled: Vdec_Drv_H264_getPara */
int Vdec_Drv_H264_getPara(void);

/* Symbol: h264_enc_set_PrependHeader */
/* Demangled: h264_enc_set_PrependHeader */
int h264_enc_set_PrependHeader(void);

/* Symbol: H265_HAL_WritePP */
/* Demangled: H265_HAL_WritePP */
int H265_HAL_WritePP(void);

/* Symbol: h264_dec_deInit_sec */
/* Demangled: h264_dec_deInit_sec */
int h264_dec_deInit_sec(void);

/* Symbol: VP9_UPDATE_INTRA_INTER_PROBS */
/* Demangled: VP9_UPDATE_INTRA_INTER_PROBS */
int VP9_UPDATE_INTRA_INTER_PROBS(void);

/* Symbol: H264_AllocateRFSBuffer */
/* Demangled: H264_AllocateRFSBuffer */
int H264_AllocateRFSBuffer(void);

/* Symbol: Vdec_Drv_H265_getSeqInfo */
/* Demangled: Vdec_Drv_H265_getSeqInfo */
int Vdec_Drv_H265_getSeqInfo(void);

/* Symbol: H265_scalingListSize */
/* Demangled: H265_scalingListSize */
extern void* H265_scalingListSize;

/* Symbol: Vdec_Drv_H264_init */
/* Demangled: Vdec_Drv_H264_init */
int Vdec_Drv_H264_init(void);

/* Symbol: ZZ_SCAN8 */
/* Demangled: ZZ_SCAN8 */
extern void* ZZ_SCAN8;

/* Symbol: HEVC_GetProfile */
/* Demangled: HEVC_GetProfile */
int HEVC_GetProfile(void);

/* Symbol: DeInit */
/* Demangled: DeInit */
int DeInit(void);

/* Symbol: Vdec_Drv_H264_destroy_sec */
/* Demangled: Vdec_Drv_H264_destroy_sec */
int Vdec_Drv_H264_destroy_sec(void);

/* Symbol: VP9_Read_Prob_TBL */
/* Demangled: VP9_Read_Prob_TBL */
int VP9_Read_Prob_TBL(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: RBSPMoreData */
/* Demangled: RBSPMoreData */
int RBSPMoreData(void);

/* Symbol: VP9_Get_Tile_Offset */
/* Demangled: VP9_Get_Tile_Offset */
int VP9_Get_Tile_Offset(void);

/* Symbol: gMPEG4_DRV_IF */
/* Demangled: gMPEG4_DRV_IF */
extern void* gMPEG4_DRV_IF;

/* Symbol: H265_ApplyRefPicList */
/* Demangled: H265_ApplyRefPicList */
int H265_ApplyRefPicList(void);

/* Symbol: H264_HAL_PowerOn */
/* Demangled: H264_HAL_PowerOn */
int H264_HAL_PowerOn(void);

/* Symbol: H265_HAL_EnableCRC */
/* Demangled: H265_HAL_EnableCRC */
int H265_HAL_EnableCRC(void);

/* Symbol: destroyRBSPBitStream */
/* Demangled: destroyRBSPBitStream */
int destroyRBSPBitStream(void);

/* Symbol: H265_AllocateFBuf */
/* Demangled: H265_AllocateFBuf */
int H265_AllocateFBuf(void);

/* Symbol: VP8_WriteSOCGCON */
/* Demangled: VP8_WriteSOCGCON */
int VP8_WriteSOCGCON(void);

/* Symbol: H264_RefPicReorderAndMark */
/* Demangled: H264_RefPicReorderAndMark */
int H264_RefPicReorderAndMark(void);

/* Symbol: H264_SearchReferenceIdx */
/* Demangled: H264_SearchReferenceIdx */
int H264_SearchReferenceIdx(void);

/* Symbol: HEVC_EncodePPS */
/* Demangled: HEVC_EncodePPS */
int HEVC_EncodePPS(void);

/* Symbol: VP8_ResetVLD */
/* Demangled: VP8_ResetVLD */
int VP8_ResetVLD(void);

/* Symbol: VP9_BufferFlushRange */
/* Demangled: VP9_BufferFlushRange */
int VP9_BufferFlushRange(void);

/* Symbol: FindFreeFrameBuffer */
/* Demangled: FindFreeFrameBuffer */
int FindFreeFrameBuffer(void);

/* Symbol: h265_dec_decodeEx */
/* Demangled: h265_dec_decodeEx */
int h265_dec_decodeEx(void);

/* Symbol: VP8_WriteGCON */
/* Demangled: VP8_WriteGCON */
int VP8_WriteGCON(void);

/* Symbol: VP9_HAL_ReadMC */
/* Demangled: VP9_HAL_ReadMC */
int VP9_HAL_ReadMC(void);

/* Symbol: tv_end */
/* Demangled: tv_end */
extern void* tv_end;

/* Symbol: H264_HAL_WriteVLD */
/* Demangled: H264_HAL_WriteVLD */
int H264_HAL_WriteVLD(void);

/* Symbol: VP9_HAL_WritePP */
/* Demangled: VP9_HAL_WritePP */
int VP9_HAL_WritePP(void);

/* Symbol: VP9_UPDATE_SWITCHABLE_INTERP_PROBS */
/* Demangled: VP9_UPDATE_SWITCHABLE_INTERP_PROBS */
int VP9_UPDATE_SWITCHABLE_INTERP_PROBS(void);

/* Symbol: H265_HAL_SetTilesInfo */
/* Demangled: H265_HAL_SetTilesInfo */
int H265_HAL_SetTilesInfo(void);

/* Symbol: H265_handlePPSNALU */
/* Demangled: H265_handlePPSNALU */
int H265_handlePPSNALU(void);

/* Symbol: H264_HAL_ShiftGetBitStream */
/* Demangled: H264_HAL_ShiftGetBitStream */
int H264_HAL_ShiftGetBitStream(void);

/* Symbol: mpeg4_read_sequence_information */
/* Demangled: mpeg4_read_sequence_information */
int mpeg4_read_sequence_information(void);

/* Symbol: MPEG2_Parse_PIC_Header */
/* Demangled: MPEG2_Parse_PIC_Header */
int MPEG2_Parse_PIC_Header(void);

/* Symbol: VP8_DecProc */
/* Demangled: VP8_DecProc */
int VP8_DecProc(void);

/* Symbol: VP9_Read_Signed_Literal_Raw */
/* Demangled: VP9_Read_Signed_Literal_Raw */
int VP9_Read_Signed_Literal_Raw(void);

/* Symbol: H264_CleanMultiFrameInfo */
/* Demangled: H264_CleanMultiFrameInfo */
int H264_CleanMultiFrameInfo(void);

/* Symbol: parseSPS */
/* Demangled: parseSPS */
int parseSPS(void);

/* Symbol: H264_TestSE */
/* Demangled: H264_TestSE */
int H264_TestSE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: HEVC_GetRCCode */
/* Demangled: HEVC_GetRCCode */
int HEVC_GetRCCode(void);

/* Symbol: QueryFuncPtr */
/* Demangled: QueryFuncPtr */
int QueryFuncPtr(void);

/* Symbol: U16_AT */
/* Demangled: U16_AT */
int U16_AT(void);

/* Symbol: vp9_flush_framebuf */
/* Demangled: vp9_flush_framebuf */
int vp9_flush_framebuf(void);

/* Symbol: dumpTSVCoutput */
/* Demangled: dumpTSVCoutput */
int dumpTSVCoutput(void);

/* Symbol: eVEncDrvGetParam */
/* Demangled: eVEncDrvGetParam */
int eVEncDrvGetParam(void);

/* Symbol: H265_HAL_DumpReg */
/* Demangled: H265_HAL_DumpReg */
int H265_HAL_DumpReg(void);

/* Symbol: H265_handleSLICENALU */
/* Demangled: H265_handleSLICENALU */
int H265_handleSLICENALU(void);

/* Symbol: CheckFlushAllBuffer */
/* Demangled: CheckFlushAllBuffer */
int CheckFlushAllBuffer(void);

/* Symbol: mpeg4_dec_getFreeBuffer */
/* Demangled: mpeg4_dec_getFreeBuffer */
int mpeg4_dec_getFreeBuffer(void);

/* Symbol: h264_enc_set_NonRefP_freq */
/* Demangled: h264_enc_set_NonRefP_freq */
int h264_enc_set_NonRefP_freq(void);

/* Symbol: DrvPutBufferCB */
/* Demangled: DrvPutBufferCB */
int DrvPutBufferCB(void);

/* Symbol: H264_HAL_WriteAVCVLD */
/* Demangled: H264_HAL_WriteAVCVLD */
int H264_HAL_WriteAVCVLD(void);

/* Symbol: gH264SecVdecMtkLib */
/* Demangled: gH264SecVdecMtkLib */
extern void* gH264SecVdecMtkLib;

/* Symbol: h264_dec_deInit */
/* Demangled: h264_dec_deInit */
int h264_dec_deInit(void);

/* Symbol: VP9_Adapt_Mv_Probs */
/* Demangled: VP9_Adapt_Mv_Probs */
int VP9_Adapt_Mv_Probs(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: H264_SetEncParam_Property */
/* Demangled: H264_SetEncParam_Property */
int H264_SetEncParam_Property(void);

/* Symbol: eVEncDrvSetParam */
/* Demangled: eVEncDrvSetParam */
int eVEncDrvSetParam(void);

/* Symbol: gH264_ENC_DRV_HW_IF */
/* Demangled: gH264_ENC_DRV_HW_IF */
extern void* gH264_ENC_DRV_HW_IF;

/* Symbol: Vdec_Drv_VP9_AllocBuf */
/* Demangled: Vdec_Drv_VP9_AllocBuf */
int Vdec_Drv_VP9_AllocBuf(void);

/* Symbol: vp9_inter_mode_tree */
/* Demangled: vp9_inter_mode_tree */
extern void* vp9_inter_mode_tree;

/* Symbol: VP9_HAL_ReadVP9VLD */
/* Demangled: VP9_HAL_ReadVP9VLD */
int VP9_HAL_ReadVP9VLD(void);

/* Symbol: H264_EncodeFrameErr */
/* Demangled: H264_EncodeFrameErr */
int H264_EncodeFrameErr(void);

/* Symbol: VP9_UPDATE_TX_PROBS */
/* Demangled: VP9_UPDATE_TX_PROBS */
int VP9_UPDATE_TX_PROBS(void);

/* Symbol: Vdec_Drv_VP9_SwReset */
/* Demangled: Vdec_Drv_VP9_SwReset */
int Vdec_Drv_VP9_SwReset(void);

/* Symbol: HEVC_SetSMIGUltraParam */
/* Demangled: HEVC_SetSMIGUltraParam */
int HEVC_SetSMIGUltraParam(void);

/* Symbol: H265_HAL_ReadFinishFlag */
/* Demangled: H265_HAL_ReadFinishFlag */
int H265_HAL_ReadFinishFlag(void);

/* Symbol: H265_HAL_SetWrapperOffset */
/* Demangled: H265_HAL_SetWrapperOffset */
int H265_HAL_SetWrapperOffset(void);

/* Symbol: gfnMtkH264SecVdec_tlcHandleCreate */
/* Demangled: gfnMtkH264SecVdec_tlcHandleCreate */
extern void* gfnMtkH264SecVdec_tlcHandleCreate;

/* Symbol: VP8_Write_Internal_SRAM */
/* Demangled: VP8_Write_Internal_SRAM */
int VP8_Write_Internal_SRAM(void);

/* Symbol: VP9_Put_To_Free_List */
/* Demangled: VP9_Put_To_Free_List */
int VP9_Put_To_Free_List(void);

/* Symbol: h264_enc_set_AllocWorkBuf */
/* Demangled: h264_enc_set_AllocWorkBuf */
int h264_enc_set_AllocWorkBuf(void);

/* Symbol: H265_HAL_RPL_Modification */
/* Demangled: H265_HAL_RPL_Modification */
int H265_HAL_RPL_Modification(void);

/* Symbol: H265_eTTable */
/* Demangled: H265_eTTable */
extern void* H265_eTTable;

/* Symbol: Vdec_Drv_VP9_Flush */
/* Demangled: Vdec_Drv_VP9_Flush */
int Vdec_Drv_VP9_Flush(void);

/* Symbol: h264_enc_set_ForceIntraOn */
/* Demangled: h264_enc_set_ForceIntraOn */
int h264_enc_set_ForceIntraOn(void);

/* Symbol: HEVC_WaitVENCDone */
/* Demangled: HEVC_WaitVENCDone */
int HEVC_WaitVENCDone(void);

/* Symbol: H265_HAL_ReadHEVCVLD */
/* Demangled: H265_HAL_ReadHEVCVLD */
int H265_HAL_ReadHEVCVLD(void);

/* Symbol: VP9_Setup_Tile_Info */
/* Demangled: VP9_Setup_Tile_Info */
int VP9_Setup_Tile_Info(void);

/* Symbol: VP9_Set_MV_Buffer_Addr */
/* Demangled: VP9_Set_MV_Buffer_Addr */
int VP9_Set_MV_Buffer_Addr(void);

/* Symbol: eVDecDrvGetParam */
/* Demangled: eVDecDrvGetParam */
int eVDecDrvGetParam(void);

/* Symbol: H265_GetRefPicbyPOC */
/* Demangled: H265_GetRefPicbyPOC */
int H265_GetRefPicbyPOC(void);

/* Symbol: Golomb_Test_String */
/* Demangled: Golomb_Test_String */
extern void* Golomb_Test_String;

/* Symbol: mpeg2_dec_getFreeBuffer */
/* Demangled: mpeg2_dec_getFreeBuffer */
int mpeg2_dec_getFreeBuffer(void);

/* Symbol: Vdec_Drv_VP9_CheckErr */
/* Demangled: Vdec_Drv_VP9_CheckErr */
int Vdec_Drv_VP9_CheckErr(void);

/* Symbol: H264_AddTSVCPrefixNALU */
/* Demangled: H264_AddTSVCPrefixNALU */
int H264_AddTSVCPrefixNALU(void);

/* Symbol: H264_IsRFSEnabled */
/* Demangled: H264_IsRFSEnabled */
int H264_IsRFSEnabled(void);

/* Symbol: h265_dec_init */
/* Demangled: h265_dec_init */
int h265_dec_init(void);

/* Symbol: vp8_dec_decode */
/* Demangled: vp8_dec_decode */
int vp8_dec_decode(void);

/* Symbol: EncMp4SeqHeader */
/* Demangled: EncMp4SeqHeader */
int EncMp4SeqHeader(void);

/* Symbol: h264_enc_encode_Sps */
/* Demangled: h264_enc_encode_Sps */
int h264_enc_encode_Sps(void);

/* Symbol: H264_WaitVENCDone */
/* Demangled: H264_WaitVENCDone */
int H264_WaitVENCDone(void);

/* Symbol: HEVC_GetFrmQLimterParam */
/* Demangled: HEVC_GetFrmQLimterParam */
int HEVC_GetFrmQLimterParam(void);

/* Symbol: H265_HAL_SetJumpModeReg */
/* Demangled: H265_HAL_SetJumpModeReg */
int H265_HAL_SetJumpModeReg(void);

/* Symbol: H265_RBSPMoreData */
/* Demangled: H265_RBSPMoreData */
int H265_RBSPMoreData(void);

/* Symbol: H264_WP_EncodeEnd */
/* Demangled: H264_WP_EncodeEnd */
int H264_WP_EncodeEnd(void);

/* Symbol: hevc_enc_init */
/* Demangled: hevc_enc_init */
int hevc_enc_init(void);

/* Symbol: eVDecDrvSetParam */
/* Demangled: eVDecDrvSetParam */
int eVDecDrvSetParam(void);

/* Symbol: H265_HAL_ReadMC */
/* Demangled: H265_HAL_ReadMC */
int H265_HAL_ReadMC(void);

/* Symbol: ZZ_SCAN */
/* Demangled: ZZ_SCAN */
extern void* ZZ_SCAN;

/* Symbol: VP9_HAL_ReadMV */
/* Demangled: VP9_HAL_ReadMV */
int VP9_HAL_ReadMV(void);

/* Symbol: h264_enc_set_AdjustBitrate */
/* Demangled: h264_enc_set_AdjustBitrate */
int h264_enc_set_AdjustBitrate(void);

/* Symbol: GetFreeFrameBuffer */
/* Demangled: GetFreeFrameBuffer */
int GetFreeFrameBuffer(void);

/* Symbol: H265_HAL_WriteVLD */
/* Demangled: H265_HAL_WriteVLD */
int H265_HAL_WriteVLD(void);

/* Symbol: H265_CheckFlushAllBuffer */
/* Demangled: H265_CheckFlushAllBuffer */
int H265_CheckFlushAllBuffer(void);

/* Symbol: vp9_dec_getFreeBuffer */
/* Demangled: vp9_dec_getFreeBuffer */
int vp9_dec_getFreeBuffer(void);

/* Symbol: VP9_Read_Mv_Probs */
/* Demangled: VP9_Read_Mv_Probs */
int VP9_Read_Mv_Probs(void);

/* Symbol: ucH264RCPUCode_WECHAT */
/* Demangled: ucH264RCPUCode_WECHAT */
extern void* ucH264RCPUCode_WECHAT;

/* Symbol: H265_GCE_WTF */
/* Demangled: H265_GCE_WTF */
int H265_GCE_WTF(void);

/* Symbol: H265_HAL_InitH265BarrelShifter */
/* Demangled: H265_HAL_InitH265BarrelShifter */
int H265_HAL_InitH265BarrelShifter(void);

/* Symbol: H265_HAL_SetSPSHEVLD */
/* Demangled: H265_HAL_SetSPSHEVLD */
int H265_HAL_SetSPSHEVLD(void);

/* Symbol: H264_HAL_WriteCRC */
/* Demangled: H264_HAL_WriteCRC */
int H264_HAL_WriteCRC(void);

/* Symbol: HEVC_GetSMIGUltraThreshold */
/* Demangled: HEVC_GetSMIGUltraThreshold */
int HEVC_GetSMIGUltraThreshold(void);

/* Symbol: H265_handleSEINALU */
/* Demangled: H265_handleSEINALU */
int H265_handleSEINALU(void);

/* Symbol: H265_initSliceHeader */
/* Demangled: H265_initSliceHeader */
int H265_initSliceHeader(void);

/* Symbol: hevc_enc_setParameter */
/* Demangled: hevc_enc_setParameter */
int hevc_enc_setParameter(void);

/* Symbol: H264PutFrameBufferToAvailable */
/* Demangled: H264PutFrameBufferToAvailable */
int H264PutFrameBufferToAvailable(void);

/* Symbol: mpeg2_find_read_ptr_pos */
/* Demangled: mpeg2_find_read_ptr_pos */
int mpeg2_find_read_ptr_pos(void);

/* Symbol: HEVC_GetSearchVParam */
/* Demangled: HEVC_GetSearchVParam */
int HEVC_GetSearchVParam(void);

/* Symbol: EncH264PPS */
/* Demangled: EncH264PPS */
int EncH264PPS(void);

/* Symbol: H265_parseSliceHeader */
/* Demangled: H265_parseSliceHeader */
int H265_parseSliceHeader(void);

/* Symbol: H265_scalingListSizeX */
/* Demangled: H265_scalingListSizeX */
extern void* H265_scalingListSizeX;

/* Symbol: Vdec_Drv_H264_get_bs_Rptr */
/* Demangled: Vdec_Drv_H264_get_bs_Rptr */
int Vdec_Drv_H264_get_bs_Rptr(void);

/* Symbol: gVP9_DRV_IF_HW */
/* Demangled: gVP9_DRV_IF_HW */
extern void* gVP9_DRV_IF_HW;

/* Symbol: Vdec_Drv_H265_decode */
/* Demangled: Vdec_Drv_H265_decode */
int Vdec_Drv_H265_decode(void);

/* Symbol: mTeeType */
/* Demangled: mTeeType */
extern void* mTeeType;

/* Symbol: AssignQuantParam */
/* Demangled: AssignQuantParam */
int AssignQuantParam(void);

/* Symbol: H264GetFrameBufferFromDisp */
/* Demangled: H264GetFrameBufferFromDisp */
int H264GetFrameBufferFromDisp(void);

/* Symbol: Vdec_Drv_H264_init_sec */
/* Demangled: Vdec_Drv_H264_init_sec */
int Vdec_Drv_H264_init_sec(void);

/* Symbol: VP9_DC_Quant */
/* Demangled: VP9_DC_Quant */
int VP9_DC_Quant(void);

/* Symbol: H265_decode */
/* Demangled: H265_decode */
int H265_decode(void);

/* Symbol: VP8_CheckProc */
/* Demangled: VP8_CheckProc */
int VP8_CheckProc(void);

/* Symbol: Vdec_Drv_VP9_DecodeEx */
/* Demangled: Vdec_Drv_VP9_DecodeEx */
int Vdec_Drv_VP9_DecodeEx(void);

/* Symbol: UpdateBitstreamWP */
/* Demangled: UpdateBitstreamWP */
int UpdateBitstreamWP(void);

/* Symbol: H265_HAL_GetRealBitStream */
/* Demangled: H265_HAL_GetRealBitStream */
int H265_HAL_GetRealBitStream(void);

/* Symbol: H265_HAL_UeCodeNum */
/* Demangled: H265_HAL_UeCodeNum */
int H265_HAL_UeCodeNum(void);

/* Symbol: destroySliceHeader */
/* Demangled: destroySliceHeader */
int destroySliceHeader(void);

/* Symbol: VP9_LockHW */
/* Demangled: VP9_LockHW */
int VP9_LockHW(void);

/* Symbol: VP9_Get_Tile_N_Bits */
/* Demangled: VP9_Get_Tile_N_Bits */
int VP9_Get_Tile_N_Bits(void);

/* Symbol: VP9_Set_MC_RefBuf_Addr */
/* Demangled: VP9_Set_MC_RefBuf_Addr */
int VP9_Set_MC_RefBuf_Addr(void);

/* Symbol: HEVC_ModifyProfileLevel */
/* Demangled: HEVC_ModifyProfileLevel */
int HEVC_ModifyProfileLevel(void);

/* Symbol: H264_HAL_SetReg */
/* Demangled: H264_HAL_SetReg */
int H264_HAL_SetReg(void);

/* Symbol: gVP8_DRV_IF_HW */
/* Demangled: gVP8_DRV_IF_HW */
extern void* gVP8_DRV_IF_HW;

/* Symbol: H264_HAL_InitVDecHW */
/* Demangled: H264_HAL_InitVDecHW */
int H264_HAL_InitVDecHW(void);

/* Symbol: H264_DumpReferenceBufList */
/* Demangled: H264_DumpReferenceBufList */
int H264_DumpReferenceBufList(void);

/* Symbol: H264_EncodeFrameInit */
/* Demangled: H264_EncodeFrameInit */
int H264_EncodeFrameInit(void);

/* Symbol: eVEncDrv_EncoderQueryInfo */
/* Demangled: eVEncDrv_EncoderQueryInfo */
int eVEncDrv_EncoderQueryInfo(void);

/* Symbol: H265_HAL_GetLCUxy */
/* Demangled: H265_HAL_GetLCUxy */
int H265_HAL_GetLCUxy(void);

/* Symbol: H265_Vdec_Drv_setDecPicInfo */
/* Demangled: H265_Vdec_Drv_setDecPicInfo */
int H265_Vdec_Drv_setDecPicInfo(void);

/* Symbol: vp8_dec_getParameter */
/* Demangled: vp8_dec_getParameter */
int vp8_dec_getParameter(void);

/* Symbol: H264_SeqLvlMMRSetting_Count3PlaneUVPitch */
/* Demangled: H264_SeqLvlMMRSetting_Count3PlaneUVPitch */
int H264_SeqLvlMMRSetting_Count3PlaneUVPitch(void);

/* Symbol: DecodeOpen */
/* Demangled: DecodeOpen */
int DecodeOpen(void);

/* Symbol: H265_HAL_ResetBitsCount */
/* Demangled: H265_HAL_ResetBitsCount */
int H265_HAL_ResetBitsCount(void);

/* Symbol: H264_EncodeSEI_SW */
/* Demangled: H264_EncodeSEI_SW */
int H264_EncodeSEI_SW(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: H265_DEBUG_DumpSecureBitStreamBuffer */
/* Demangled: H265_DEBUG_DumpSecureBitStreamBuffer */
int H265_DEBUG_DumpSecureBitStreamBuffer(void);

/* Symbol: Vdec_Drv_H265_getFree */
/* Demangled: Vdec_Drv_H265_getFree */
int Vdec_Drv_H265_getFree(void);

/* Symbol: VP8_DecFinish */
/* Demangled: VP8_DecFinish */
int VP8_DecFinish(void);

/* Symbol: VP9_Init_Dequantizer */
/* Demangled: VP9_Init_Dequantizer */
int VP9_Init_Dequantizer(void);

/* Symbol: VP9_Read_Delta_Q */
/* Demangled: VP9_Read_Delta_Q */
int VP9_Read_Delta_Q(void);

/* Symbol: h264_enc_set_FreeWorkBuf */
/* Demangled: h264_enc_set_FreeWorkBuf */
int h264_enc_set_FreeWorkBuf(void);

/* Symbol: h264_sw_enc_encode */
/* Demangled: h264_sw_enc_encode */
int h264_sw_enc_encode(void);

/* Symbol: DrvDisableVencPerfService */
/* Demangled: DrvDisableVencPerfService */
int DrvDisableVencPerfService(void);

/* Symbol: eVEncDrvRelease */
/* Demangled: eVEncDrvRelease */
int eVEncDrvRelease(void);

/* Symbol: H265_GetLTRefPicbyPOC */
/* Demangled: H265_GetLTRefPicbyPOC */
int H265_GetLTRefPicbyPOC(void);

/* Symbol: H264_EncodeFrameHndlFull */
/* Demangled: H264_EncodeFrameHndlFull */
int H264_EncodeFrameHndlFull(void);

/* Symbol: mpeg4_dec_getParameter */
/* Demangled: mpeg4_dec_getParameter */
int mpeg4_dec_getParameter(void);

/* Symbol: VP8_FlushCoefProbs */
/* Demangled: VP8_FlushCoefProbs */
int VP8_FlushCoefProbs(void);

/* Symbol: VP9_Compressed_Header_Parse */
/* Demangled: VP9_Compressed_Header_Parse */
int VP9_Compressed_Header_Parse(void);

/* Symbol: Vdec_Drv_setDecPicInfo */
/* Demangled: Vdec_Drv_setDecPicInfo */
int Vdec_Drv_setDecPicInfo(void);

/* Symbol: VP9_Get_Tile_Buffer */
/* Demangled: VP9_Get_Tile_Buffer */
int VP9_Get_Tile_Buffer(void);

/* Symbol: h264_enc_encode_Header */
/* Demangled: h264_enc_encode_Header */
int h264_enc_encode_Header(void);

/* Symbol: RBSPGetSE */
/* Demangled: RBSPGetSE */
int RBSPGetSE(void);

/* Symbol: Vdec_Drv_VP9_GetDisplayBuffer */
/* Demangled: Vdec_Drv_VP9_GetDisplayBuffer */
int Vdec_Drv_VP9_GetDisplayBuffer(void);

/* Symbol: H265_HAL_HEVCVLDGetBitS */
/* Demangled: H265_HAL_HEVCVLDGetBitS */
int H265_HAL_HEVCVLDGetBitS(void);

/* Symbol: VP9_Prob_TBL_Read_SRAM */
/* Demangled: VP9_Prob_TBL_Read_SRAM */
int VP9_Prob_TBL_Read_SRAM(void);

/* Symbol: Vdec_Drv_H265_destroy */
/* Demangled: Vdec_Drv_H265_destroy */
int Vdec_Drv_H265_destroy(void);

/* Symbol: AssertionFailed */
/* Demangled: AssertionFailed */
int AssertionFailed(void);

/* Symbol: SetYUVBuffer */
/* Demangled: SetYUVBuffer */
int SetYUVBuffer(void);

/* Symbol: H265_HAL_WriteCRC */
/* Demangled: H265_HAL_WriteCRC */
int H265_HAL_WriteCRC(void);

/* Symbol: H264_HAL_WriteUFO */
/* Demangled: H264_HAL_WriteUFO */
int H264_HAL_WriteUFO(void);

/* Symbol: vp9_dec_decodeEx */
/* Demangled: vp9_dec_decodeEx */
int vp9_dec_decodeEx(void);

/* Symbol: VP9_SW_Read */
/* Demangled: VP9_SW_Read */
int VP9_SW_Read(void);

/* Symbol: H265_HAL_WriteScalingListPP */
/* Demangled: H265_HAL_WriteScalingListPP */
int H265_HAL_WriteScalingListPP(void);

/* Symbol: H264BufferFlushRange */
/* Demangled: H264BufferFlushRange */
int H264BufferFlushRange(void);

/* Symbol: HEVC_SliceSAOInfo */
/* Demangled: HEVC_SliceSAOInfo */
int HEVC_SliceSAOInfo(void);

/* Symbol: DrvUnLockPutListCB */
/* Demangled: DrvUnLockPutListCB */
int DrvUnLockPutListCB(void);

/* Symbol: mpeg4_parse_VOL */
/* Demangled: mpeg4_parse_VOL */
int mpeg4_parse_VOL(void);

/* Symbol: VP8_WriteMISC */
/* Demangled: VP8_WriteMISC */
int VP8_WriteMISC(void);

/* Symbol: H265_HAL_GetErrMsg */
/* Demangled: H265_HAL_GetErrMsg */
int H265_HAL_GetErrMsg(void);

/* Symbol: find_read_ptr_pos */
/* Demangled: find_read_ptr_pos */
int find_read_ptr_pos(void);

/* Symbol: gMPEG2_DRV_IF */
/* Demangled: gMPEG2_DRV_IF */
extern void* gMPEG2_DRV_IF;

/* Symbol: h264_dec_setParameter */
/* Demangled: h264_dec_setParameter */
int h264_dec_setParameter(void);

/* Symbol: ucHEVCRCPUCode_20160524_WFD */
/* Demangled: ucHEVCRCPUCode_20160524_WFD */
extern void* ucHEVCRCPUCode_20160524_WFD;

/* Symbol: H265_DEBUG_DumpFrameBuffer */
/* Demangled: H265_DEBUG_DumpFrameBuffer */
int H265_DEBUG_DumpFrameBuffer(void);

/* Symbol: H265_getDpbSize */
/* Demangled: H265_getDpbSize */
int H265_getDpbSize(void);

/* Symbol: VP9_Check_Scale_Factors */
/* Demangled: VP9_Check_Scale_Factors */
int VP9_Check_Scale_Factors(void);

/* Symbol: H264_FrmLvlMMRSetting */
/* Demangled: H264_FrmLvlMMRSetting */
int H264_FrmLvlMMRSetting(void);

/* Symbol: vc1_dec_setParameter */
/* Demangled: vc1_dec_setParameter */
int vc1_dec_setParameter(void);

/* Symbol: DrvEnableVencPerfService */
/* Demangled: DrvEnableVencPerfService */
int DrvEnableVencPerfService(void);

/* Symbol: GetDecoderAPI */
/* Demangled: GetDecoderAPI */
int GetDecoderAPI(void);

/* Symbol: H264_HAL_ReadAVCMV */
/* Demangled: H264_HAL_ReadAVCMV */
int H264_HAL_ReadAVCMV(void);

/* Symbol: H264_HAL_WritePP */
/* Demangled: H264_HAL_WritePP */
int H264_HAL_WritePP(void);

/* Symbol: mpeg4_parse_VOP */
/* Demangled: mpeg4_parse_VOP */
int mpeg4_parse_VOP(void);

/* Symbol: mpeg4_enc_setParameter */
/* Demangled: mpeg4_enc_setParameter */
int mpeg4_enc_setParameter(void);

/* Symbol: H264_FrmLvlMMRSetting_IsIFrame */
/* Demangled: H264_FrmLvlMMRSetting_IsIFrame */
int H264_FrmLvlMMRSetting_IsIFrame(void);

/* Symbol: gVP9_DRV_IF_HW_SEC */
/* Demangled: gVP9_DRV_IF_HW_SEC */
extern void* gVP9_DRV_IF_HW_SEC;

/* Symbol: H265_initSPS */
/* Demangled: H265_initSPS */
int H265_initSPS(void);

/* Symbol: H264_DEBUG_DumpInitBitStreamBuffer */
/* Demangled: H264_DEBUG_DumpInitBitStreamBuffer */
int H264_DEBUG_DumpInitBitStreamBuffer(void);

/* Symbol: VP9_Get_Probs_Table */
/* Demangled: VP9_Get_Probs_Table */
int VP9_Get_Probs_Table(void);

/* Symbol: h264_enc_set_SkipFrame */
/* Demangled: h264_enc_set_SkipFrame */
int h264_enc_set_SkipFrame(void);

/* Symbol: H265_parseItuTT35 */
/* Demangled: H265_parseItuTT35 */
int H265_parseItuTT35(void);

/* Symbol: Vdec_Drv_Ref_Pic_List_Reordering */
/* Demangled: Vdec_Drv_Ref_Pic_List_Reordering */
int Vdec_Drv_Ref_Pic_List_Reordering(void);

/* Symbol: mpeg4_ext_dec_setParameter */
/* Demangled: mpeg4_ext_dec_setParameter */
int mpeg4_ext_dec_setParameter(void);

/* Symbol: MPEG2_Parse_Copyright_Ext */
/* Demangled: MPEG2_Parse_Copyright_Ext */
int MPEG2_Parse_Copyright_Ext(void);

/* Symbol: VP8_CheckProc_MBRowModeEnd */
/* Demangled: VP8_CheckProc_MBRowModeEnd */
int VP8_CheckProc_MBRowModeEnd(void);

/* Symbol: gVP9SecVdecMtkLib */
/* Demangled: gVP9SecVdecMtkLib */
extern void* gVP9SecVdecMtkLib;

/* Symbol: H265_HAL_DumpReg_sec */
/* Demangled: H265_HAL_DumpReg_sec */
int H265_HAL_DumpReg_sec(void);

/* Symbol: mpeg4_parse_VOS */
/* Demangled: mpeg4_parse_VOS */
int mpeg4_parse_VOS(void);

/* Symbol: VP8_DecIsComplete */
/* Demangled: VP8_DecIsComplete */
int VP8_DecIsComplete(void);

/* Symbol: H264_GetVencDpbSize */
/* Demangled: H264_GetVencDpbSize */
int H264_GetVencDpbSize(void);

/* Symbol: HEIF_GridModeSetting */
/* Demangled: HEIF_GridModeSetting */
int HEIF_GridModeSetting(void);

/* Symbol: MPEG2_Parse_Usr_Data */
/* Demangled: MPEG2_Parse_Usr_Data */
int MPEG2_Parse_Usr_Data(void);

/* Symbol: VP9_Get_Counts_Table */
/* Demangled: VP9_Get_Counts_Table */
int VP9_Get_Counts_Table(void);

/* Symbol: GetDispFrameBuffer */
/* Demangled: GetDispFrameBuffer */
int GetDispFrameBuffer(void);

/* Symbol: H265_RPL_Modification */
/* Demangled: H265_RPL_Modification */
int H265_RPL_Modification(void);

/* Symbol: h264_dec_decode */
/* Demangled: h264_dec_decode */
int h264_dec_decode(void);

/* Symbol: mpeg4_decode */
/* Demangled: mpeg4_decode */
int mpeg4_decode(void);

/* Symbol: VP8_HwAccMVProbUpdate */
/* Demangled: VP8_HwAccMVProbUpdate */
int VP8_HwAccMVProbUpdate(void);

/* Symbol: VP8_VersionCfg */
/* Demangled: VP8_VersionCfg */
int VP8_VersionCfg(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: gfnMtkH264SecVdec_tlcDeinit */
/* Demangled: gfnMtkH264SecVdec_tlcDeinit */
extern void* gfnMtkH264SecVdec_tlcDeinit;

/* Symbol: H264_ResetVENC */
/* Demangled: H264_ResetVENC */
int H264_ResetVENC(void);

/* Symbol: H264_WP_StageSetReg */
/* Demangled: H264_WP_StageSetReg */
int H264_WP_StageSetReg(void);

/* Symbol: H264_HAL_SetPRefPicListReg_Extra */
/* Demangled: H264_HAL_SetPRefPicListReg_Extra */
int H264_HAL_SetPRefPicListReg_Extra(void);

/* Symbol: VP8_GetHWRegBase */
/* Demangled: VP8_GetHWRegBase */
int VP8_GetHWRegBase(void);

/* Symbol: VP8_RemoveFromFrmBufFreeList */
/* Demangled: VP8_RemoveFromFrmBufFreeList */
int VP8_RemoveFromFrmBufFreeList(void);

/* Symbol: VP8_BufferFlushRange */
/* Demangled: VP8_BufferFlushRange */
int VP8_BufferFlushRange(void);

/* Symbol: VP9_Prob_TBL_WDMA */
/* Demangled: VP9_Prob_TBL_WDMA */
int VP9_Prob_TBL_WDMA(void);

/* Symbol: H265_HAL_InitVDecHW */
/* Demangled: H265_HAL_InitVDecHW */
int H265_HAL_InitVDecHW(void);

/* Symbol: VP8_PerformanceProfiling */
/* Demangled: VP8_PerformanceProfiling */
int VP8_PerformanceProfiling(void);

/* Symbol: ucH264RCPUCode_WIFI */
/* Demangled: ucH264RCPUCode_WIFI */
extern void* ucH264RCPUCode_WIFI;

/* Symbol: h264_enc_set_WFDMode */
/* Demangled: h264_enc_set_WFDMode */
int h264_enc_set_WFDMode(void);

/* Symbol: eVDecDrvQueryCapability */
/* Demangled: eVDecDrvQueryCapability */
int eVDecDrvQueryCapability(void);

/* Symbol: gH265_DRV_IF */
/* Demangled: gH265_DRV_IF */
extern void* gH265_DRV_IF;

/* Symbol: H265_invQuantScales */
/* Demangled: H265_invQuantScales */
extern void* H265_invQuantScales;

/* Symbol: mpeg4_read_picture_information */
/* Demangled: mpeg4_read_picture_information */
int mpeg4_read_picture_information(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: VP9_Check_Sync_Code */
/* Demangled: VP9_Check_Sync_Code */
int VP9_Check_Sync_Code(void);

/* Symbol: HEVC_EncodePPS_HW */
/* Demangled: HEVC_EncodePPS_HW */
int HEVC_EncodePPS_HW(void);

/* Symbol: H264_HAL_GetRealBitStream */
/* Demangled: H264_HAL_GetRealBitStream */
int H264_HAL_GetRealBitStream(void);

/* Symbol: HandleUFOConfig */
/* Demangled: HandleUFOConfig */
int HandleUFOConfig(void);

/* Symbol: VP8_GetMbxMby */
/* Demangled: VP8_GetMbxMby */
int VP8_GetMbxMby(void);

/* Symbol: H264_EncodeFrameEnc_SetRC */
/* Demangled: H264_EncodeFrameEnc_SetRC */
int H264_EncodeFrameEnc_SetRC(void);

/* Symbol: H265_HAL_WaitISR */
/* Demangled: H265_HAL_WaitISR */
int H265_HAL_WaitISR(void);

/* Symbol: H265_HAL_WriteUFO */
/* Demangled: H265_HAL_WriteUFO */
int H265_HAL_WriteUFO(void);

/* Symbol: VP9_Super_Frame_Parse */
/* Demangled: VP9_Super_Frame_Parse */
int VP9_Super_Frame_Parse(void);

/* Symbol: mpeg4_part2_risc_settings */
/* Demangled: mpeg4_part2_risc_settings */
int mpeg4_part2_risc_settings(void);

/* Symbol: H265_RBSPGetSE */
/* Demangled: H265_RBSPGetSE */
int H265_RBSPGetSE(void);

/* Symbol: ReplaceNALSizeWithNALPrefix */
/* Demangled: ReplaceNALSizeWithNALPrefix */
int ReplaceNALSizeWithNALPrefix(void);

/* Symbol: ucH264RCPUCode */
/* Demangled: ucH264RCPUCode */
extern void* ucH264RCPUCode;

/* Symbol: H265_HAL_ResetForError */
/* Demangled: H265_HAL_ResetForError */
int H265_HAL_ResetForError(void);

/* Symbol: Vdec_Drv_H264_destroy_sec_tbase */
/* Demangled: Vdec_Drv_H264_destroy_sec_tbase */
int Vdec_Drv_H264_destroy_sec_tbase(void);

/* Symbol: VP8_AddToFrmBufFreeList */
/* Demangled: VP8_AddToFrmBufFreeList */
int VP8_AddToFrmBufFreeList(void);

/* Symbol: VP8_InitBoolCoder */
/* Demangled: VP8_InitBoolCoder */
int VP8_InitBoolCoder(void);

/* Symbol: VP9_Update_Ref_Count_FB */
/* Demangled: VP9_Update_Ref_Count_FB */
int VP9_Update_Ref_Count_FB(void);

/* Symbol: mpeg2_get_platform_data */
/* Demangled: mpeg2_get_platform_data */
int mpeg2_get_platform_data(void);

/* Symbol: vp9_intra_mode_tree */
/* Demangled: vp9_intra_mode_tree */
extern void* vp9_intra_mode_tree;

/* Symbol: H265_HAL_SetSHDRHEVLD */
/* Demangled: H265_HAL_SetSHDRHEVLD */
int H265_HAL_SetSHDRHEVLD(void);

/* Symbol: h264_dec_get_slice_handle */
/* Demangled: h264_dec_get_slice_handle */
int h264_dec_get_slice_handle(void);

/* Symbol: VP9_Setup_Frame_Size_With_Refs */
/* Demangled: VP9_Setup_Frame_Size_With_Refs */
int VP9_Setup_Frame_Size_With_Refs(void);

/* Symbol: get_bit_at */
/* Demangled: get_bit_at */
int get_bit_at(void);

/* Symbol: Vdec_Drv_VP9_GetParameter */
/* Demangled: Vdec_Drv_VP9_GetParameter */
int Vdec_Drv_VP9_GetParameter(void);

/* Symbol: VP9_Swap_Frame_Buffers */
/* Demangled: VP9_Swap_Frame_Buffers */
int VP9_Swap_Frame_Buffers(void);

/* Symbol: h264_enc_log2ceil */
/* Demangled: h264_enc_log2ceil */
int h264_enc_log2ceil(void);

/* Symbol: H265_HAL_DecPicComplete */
/* Demangled: H265_HAL_DecPicComplete */
int H265_HAL_DecPicComplete(void);

/* Symbol: VP9_Read_Bit */
/* Demangled: VP9_Read_Bit */
int VP9_Read_Bit(void);

/* Symbol: H264_EncodePPS */
/* Demangled: H264_EncodePPS */
int H264_EncodePPS(void);

/* Symbol: H264_GetLevel */
/* Demangled: H264_GetLevel */
int H264_GetLevel(void);

/* Symbol: H265_HAL_TrailingBits */
/* Demangled: H265_HAL_TrailingBits */
int H265_HAL_TrailingBits(void);

/* Symbol: H264_HAL_SeCodeNum */
/* Demangled: H264_HAL_SeCodeNum */
int H264_HAL_SeCodeNum(void);

/* Symbol: bDPBSizeBySPS */
/* Demangled: bDPBSizeBySPS */
extern void* bDPBSizeBySPS;

/* Symbol: vp9_switchable_interp_tree */
/* Demangled: vp9_switchable_interp_tree */
extern void* vp9_switchable_interp_tree;

/* Symbol: gMPEG4_ENC_DRV_SW_IF */
/* Demangled: gMPEG4_ENC_DRV_SW_IF */
extern void* gMPEG4_ENC_DRV_SW_IF;

/* Symbol: H265_HAL_HWLock_sec */
/* Demangled: H265_HAL_HWLock_sec */
int H265_HAL_HWLock_sec(void);

/* Symbol: H264_HAL_GetBitStreamFlg */
/* Demangled: H264_HAL_GetBitStreamFlg */
int H264_HAL_GetBitStreamFlg(void);

/* Symbol: VP8_DecInit */
/* Demangled: VP8_DecInit */
int VP8_DecInit(void);

/* Symbol: VP9_Put_To_Display_List */
/* Demangled: VP9_Put_To_Display_List */
int VP9_Put_To_Display_List(void);

/* Symbol: VC1GetFreeInputBuffer */
/* Demangled: VC1GetFreeInputBuffer */
int VC1GetFreeInputBuffer(void);

/* Symbol: SearchStartCode */
/* Demangled: SearchStartCode */
int SearchStartCode(void);

/* Symbol: H265_RBSPGetBitOffset */
/* Demangled: H265_RBSPGetBitOffset */
int H265_RBSPGetBitOffset(void);

/* Symbol: H264_DEBUG_DumpSecureBitStreamBuffer */
/* Demangled: H264_DEBUG_DumpSecureBitStreamBuffer */
int H264_DEBUG_DumpSecureBitStreamBuffer(void);

/* Symbol: H264_TestUE */
/* Demangled: H264_TestUE */
int H264_TestUE(void);

/* Symbol: VP8_ReadVP8PP */
/* Demangled: VP8_ReadVP8PP */
int VP8_ReadVP8PP(void);

/* Symbol: GetDecoderLibType */
/* Demangled: GetDecoderLibType */
int GetDecoderLibType(void);

/* Symbol: H265_DEBUG_DumpBitStreamBuffer */
/* Demangled: H265_DEBUG_DumpBitStreamBuffer */
int H265_DEBUG_DumpBitStreamBuffer(void);

/* Symbol: HEVC_SetHWModeSel */
/* Demangled: HEVC_SetHWModeSel */
int HEVC_SetHWModeSel(void);

/* Symbol: H264_HAL_Reording */
/* Demangled: H264_HAL_Reording */
int H264_HAL_Reording(void);

/* Symbol: H264_HAL_WriteSYS */
/* Demangled: H264_HAL_WriteSYS */
int H264_HAL_WriteSYS(void);

/* Symbol: bChkRefInfo */
/* Demangled: bChkRefInfo */
int bChkRefInfo(void);

/* Symbol: H264_EncodeFrameSkipEnc */
/* Demangled: H264_EncodeFrameSkipEnc */
int H264_EncodeFrameSkipEnc(void);

/* Symbol: setPRefPicList */
/* Demangled: setPRefPicList */
int setPRefPicList(void);

/* Symbol: H264_SetHWModeSel */
/* Demangled: H264_SetHWModeSel */
int H264_SetHWModeSel(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: eVEncDrvEncode */
/* Demangled: eVEncDrvEncode */
int eVEncDrvEncode(void);

/* Symbol: H265_HAL_InitH265BarrelShift */
/* Demangled: H265_HAL_InitH265BarrelShift */
int H265_HAL_InitH265BarrelShift(void);

/* Symbol: H265_HAL_ReadHEVCMV */
/* Demangled: H265_HAL_ReadHEVCMV */
int H265_HAL_ReadHEVCMV(void);

/* Symbol: h264_dec_init */
/* Demangled: h264_dec_init */
int h264_dec_init(void);

/* Symbol: mpeg4_enc_encode */
/* Demangled: mpeg4_enc_encode */
int mpeg4_enc_encode(void);

/* Symbol: H264_GetRCCode */
/* Demangled: H264_GetRCCode */
int H264_GetRCCode(void);

/* Symbol: HEVC_SetFrmInfo */
/* Demangled: HEVC_SetFrmInfo */
int HEVC_SetFrmInfo(void);

/* Symbol: H265_HAL_GetYCbCrCRC */
/* Demangled: H265_HAL_GetYCbCrCRC */
int H265_HAL_GetYCbCrCRC(void);

/* Symbol: H265_InitFBufInfo */
/* Demangled: H265_InitFBufInfo */
int H265_InitFBufInfo(void);

/* Symbol: H265_sigLastScanCG32x32 */
/* Demangled: H265_sigLastScanCG32x32 */
extern void* H265_sigLastScanCG32x32;

/* Symbol: Vdec_Drv_H264_initMaxBufferSize */
/* Demangled: Vdec_Drv_H264_initMaxBufferSize */
int Vdec_Drv_H264_initMaxBufferSize(void);

/* Symbol: VP9_Get_FreeFb */
/* Demangled: VP9_Get_FreeFb */
int VP9_Get_FreeFb(void);

/* Symbol: H264_AddTSVCModifySyntax */
/* Demangled: H264_AddTSVCModifySyntax */
int H264_AddTSVCModifySyntax(void);

/* Symbol: vc1_dec_getDisplayBuffer */
/* Demangled: vc1_dec_getDisplayBuffer */
int vc1_dec_getDisplayBuffer(void);

/* Symbol: H265_GetColorDesc */
/* Demangled: H265_GetColorDesc */
int H265_GetColorDesc(void);

/* Symbol: VP9_HAL_WriteVLDTOP */
/* Demangled: VP9_HAL_WriteVLDTOP */
int VP9_HAL_WriteVLDTOP(void);

/* Symbol: H264_HAL_InitH264BarrelShifterAlign */
/* Demangled: H264_HAL_InitH264BarrelShifterAlign */
int H264_HAL_InitH264BarrelShifterAlign(void);

/* Symbol: VP8_DumpReg */
/* Demangled: VP8_DumpReg */
int VP8_DumpReg(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: EncDrvAddFrameSizes */
/* Demangled: EncDrvAddFrameSizes */
int EncDrvAddFrameSizes(void);

/* Symbol: gH264_ENC_DRV_SW_IF */
/* Demangled: gH264_ENC_DRV_SW_IF */
extern void* gH264_ENC_DRV_SW_IF;

/* Symbol: H264_HAL_B1ListSwap */
/* Demangled: H264_HAL_B1ListSwap */
int H264_HAL_B1ListSwap(void);

/* Symbol: Vdec_Drv_H264_decode_sec_tbase */
/* Demangled: Vdec_Drv_H264_decode_sec_tbase */
int Vdec_Drv_H264_decode_sec_tbase(void);

/* Symbol: initSPS */
/* Demangled: initSPS */
int initSPS(void);

/* Symbol: get_binary_prob */
/* Demangled: get_binary_prob */
int get_binary_prob(void);

/* Symbol: tx_counts_to_branch_counts_8x8 */
/* Demangled: tx_counts_to_branch_counts_8x8 */
int tx_counts_to_branch_counts_8x8(void);

/* Symbol: H265_HAL_WrapperOffset */
/* Demangled: H265_HAL_WrapperOffset */
int H265_HAL_WrapperOffset(void);

/* Symbol: Vdec_Drv_H264_getFree */
/* Demangled: Vdec_Drv_H264_getFree */
int Vdec_Drv_H264_getFree(void);

/* Symbol: VP9_Is_Compound_Ref_Allowed */
/* Demangled: VP9_Is_Compound_Ref_Allowed */
int VP9_Is_Compound_Ref_Allowed(void);

/* Symbol: H265_quantTSDefault4x4 */
/* Demangled: H265_quantTSDefault4x4 */
extern void* H265_quantTSDefault4x4;

/* Symbol: VP9_Set_MC_Ref_Scaling_Enable */
/* Demangled: VP9_Set_MC_Ref_Scaling_Enable */
int VP9_Set_MC_Ref_Scaling_Enable(void);

/* Symbol: VP9_UPDATE_COEF_PROBS */
/* Demangled: VP9_UPDATE_COEF_PROBS */
int VP9_UPDATE_COEF_PROBS(void);

/* Symbol: H264_HAL_AVCVLDGetBitS */
/* Demangled: H264_HAL_AVCVLDGetBitS */
int H264_HAL_AVCVLDGetBitS(void);

/* Symbol: vp9_dec_decode_sec */
/* Demangled: vp9_dec_decode_sec */
int vp9_dec_decode_sec(void);

/* Symbol: VP9_Read_Frame_Ref_Mode_Probs */
/* Demangled: VP9_Read_Frame_Ref_Mode_Probs */
int VP9_Read_Frame_Ref_Mode_Probs(void);

/* Symbol: H264_UpdateViLTEBitrate */
/* Demangled: H264_UpdateViLTEBitrate */
int H264_UpdateViLTEBitrate(void);

/* Symbol: h264_enc_set_RFSOn */
/* Demangled: h264_enc_set_RFSOn */
int h264_enc_set_RFSOn(void);

/* Symbol: HEVC_ModifyBufSize */
/* Demangled: HEVC_ModifyBufSize */
int HEVC_ModifyBufSize(void);

/* Symbol: DrvSetSCNOn */
/* Demangled: DrvSetSCNOn */
int DrvSetSCNOn(void);

/* Symbol: ReleaseYUV */
/* Demangled: ReleaseYUV */
int ReleaseYUV(void);

/* Symbol: H265_HAL_PredWeightTable */
/* Demangled: H265_HAL_PredWeightTable */
int H265_HAL_PredWeightTable(void);

/* Symbol: Vdec_Drv_VP9_Decode_End */
/* Demangled: Vdec_Drv_VP9_Decode_End */
int Vdec_Drv_VP9_Decode_End(void);

/* Symbol: VC1FindFreeInputBuffer */
/* Demangled: VC1FindFreeInputBuffer */
int VC1FindFreeInputBuffer(void);

/* Symbol: EncH264ChangeResolation */
/* Demangled: EncH264ChangeResolation */
int EncH264ChangeResolation(void);

/* Symbol: MPEG2_Next_Start_Code */
/* Demangled: MPEG2_Next_Start_Code */
int MPEG2_Next_Start_Code(void);

/* Symbol: H265_GetInstByID */
/* Demangled: H265_GetInstByID */
int H265_GetInstByID(void);

/* Symbol: H264_HAL_WriteMISC */
/* Demangled: H264_HAL_WriteMISC */
int H264_HAL_WriteMISC(void);

/* Symbol: Vdec_Drv_H264_destroy */
/* Demangled: Vdec_Drv_H264_destroy */
int Vdec_Drv_H264_destroy(void);

/* Symbol: HDR_UUID */
/* Demangled: HDR_UUID */
extern void* HDR_UUID;

/* Symbol: h264_sw_enc_deInit */
/* Demangled: h264_sw_enc_deInit */
int h264_sw_enc_deInit(void);

/* Symbol: H265_HAL_WriteSYS */
/* Demangled: H265_HAL_WriteSYS */
int H265_HAL_WriteSYS(void);

/* Symbol: H264SlidingWindowProce */
/* Demangled: H264SlidingWindowProce */
int H264SlidingWindowProce(void);

/* Symbol: VP9_HAL_ReadMISC */
/* Demangled: VP9_HAL_ReadMISC */
int VP9_HAL_ReadMISC(void);

/* Symbol: VP9_Setup_Segmentation */
/* Demangled: VP9_Setup_Segmentation */
int VP9_Setup_Segmentation(void);

/* Symbol: h264_sw_enc_getParameter */
/* Demangled: h264_sw_enc_getParameter */
int h264_sw_enc_getParameter(void);

/* Symbol: VP8_ReadSOCGCON */
/* Demangled: VP8_ReadSOCGCON */
int VP8_ReadSOCGCON(void);

/* Symbol: bForceNoReorderModeForVilteDebug */
/* Demangled: bForceNoReorderModeForVilteDebug */
extern void* bForceNoReorderModeForVilteDebug;

/* Symbol: destroyPPS */
/* Demangled: destroyPPS */
int destroyPPS(void);

/* Symbol: VP8_SetBufStatus */
/* Demangled: VP8_SetBufStatus */
int VP8_SetBufStatus(void);

/* Symbol: gfnMtkVP9SecVdec_tlcDecode */
/* Demangled: gfnMtkVP9SecVdec_tlcDecode */
extern void* gfnMtkVP9SecVdec_tlcDecode;

/* Symbol: VP9_Set_SQT_Q_Table */
/* Demangled: VP9_Set_SQT_Q_Table */
int VP9_Set_SQT_Q_Table(void);

/* Symbol: H264_CheckHWParameter */
/* Demangled: H264_CheckHWParameter */
int H264_CheckHWParameter(void);

/* Symbol: H264_SeqLvlMMRSetting_EncInfo */
/* Demangled: H264_SeqLvlMMRSetting_EncInfo */
int H264_SeqLvlMMRSetting_EncInfo(void);

/* Symbol: H265_parsePPS */
/* Demangled: H265_parsePPS */
int H265_parsePPS(void);

/* Symbol: H264_HAL_SetPRefPicListReg */
/* Demangled: H264_HAL_SetPRefPicListReg */
int H264_HAL_SetPRefPicListReg(void);

/* Symbol: checkFixedMaxBufNeedReconfig */
/* Demangled: checkFixedMaxBufNeedReconfig */
int checkFixedMaxBufNeedReconfig(void);

/* Symbol: destroySEI */
/* Demangled: destroySEI */
int destroySEI(void);

/* Symbol: mpeg4_hw_reg_init */
/* Demangled: mpeg4_hw_reg_init */
int mpeg4_hw_reg_init(void);

/* Symbol: mpeg4_dec_init */
/* Demangled: mpeg4_dec_init */
int mpeg4_dec_init(void);

/* Symbol: vp9_mv_fp_tree */
/* Demangled: vp9_mv_fp_tree */
extern void* vp9_mv_fp_tree;

/* Symbol: VP9_InitBool */
/* Demangled: VP9_InitBool */
int VP9_InitBool(void);

/* Symbol: Vdec_Drv_H265_open */
/* Demangled: Vdec_Drv_H265_open */
int Vdec_Drv_H265_open(void);

/* Symbol: H265_parseSEI */
/* Demangled: H265_parseSEI */
int H265_parseSEI(void);

/* Symbol: Vdec_Drv_VP9_SuperFrame */
/* Demangled: Vdec_Drv_VP9_SuperFrame */
int Vdec_Drv_VP9_SuperFrame(void);

/* Symbol: h264_enc_set_ForceIntraOff */
/* Demangled: h264_enc_set_ForceIntraOff */
int h264_enc_set_ForceIntraOff(void);

/* Symbol: h264_sw_enc_get_param_interlace */
/* Demangled: h264_sw_enc_get_param_interlace */
int h264_sw_enc_get_param_interlace(void);

/* Symbol: H265_HAL_GetPDNSetting */
/* Demangled: H265_HAL_GetPDNSetting */
int H265_HAL_GetPDNSetting(void);

/* Symbol: gfnMtkH264SecVdec_tlcOpen */
/* Demangled: gfnMtkH264SecVdec_tlcOpen */
extern void* gfnMtkH264SecVdec_tlcOpen;

/* Symbol: VideoEncoderAllocateBitstreamBuffer2 */
/* Demangled: VideoEncoderAllocateBitstreamBuffer2 */
int VideoEncoderAllocateBitstreamBuffer2(void);

/* Symbol: DrvPutOutputBufferCB */
/* Demangled: DrvPutOutputBufferCB */
int DrvPutOutputBufferCB(void);

/* Symbol: H265_HAL_GetStartCode */
/* Demangled: H265_HAL_GetStartCode */
int H265_HAL_GetStartCode(void);

/* Symbol: Vdec_Drv_H265_getDisplay */
/* Demangled: Vdec_Drv_H265_getDisplay */
int Vdec_Drv_H265_getDisplay(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: VP9_Read_Literal */
/* Demangled: VP9_Read_Literal */
int VP9_Read_Literal(void);

/* Symbol: VideoEncoderAllocateBitstreamBuffer3 */
/* Demangled: VideoEncoderAllocateBitstreamBuffer3 */
int VideoEncoderAllocateBitstreamBuffer3(void);

/* Symbol: eVDecDrvRelease */
/* Demangled: eVDecDrvRelease */
int eVDecDrvRelease(void);

/* Symbol: parseSliceHeaderInfo */
/* Demangled: parseSliceHeaderInfo */
int parseSliceHeaderInfo(void);

/* Symbol: VP8_InitDeQTable */
/* Demangled: VP8_InitDeQTable */
int VP8_InitDeQTable(void);

/* Symbol: VP9_Setup_Quantization */
/* Demangled: VP9_Setup_Quantization */
int VP9_Setup_Quantization(void);

/* Symbol: ucH264RCPUCode_VILTE */
/* Demangled: ucH264RCPUCode_VILTE */
extern void* ucH264RCPUCode_VILTE;

/* Symbol: H265_HAL_VDec_DumpReg */
/* Demangled: H265_HAL_VDec_DumpReg */
int H265_HAL_VDec_DumpReg(void);

/* Symbol: H264_HAL_GetBitStreamShift */
/* Demangled: H264_HAL_GetBitStreamShift */
int H264_HAL_GetBitStreamShift(void);

/* Symbol: literal_to_filter */
/* Demangled: literal_to_filter */
extern void* literal_to_filter;

/* Symbol: H264_SeqLvlMMRSetting */
/* Demangled: H264_SeqLvlMMRSetting */
int H264_SeqLvlMMRSetting(void);

/* Symbol: vc1_dec_getFreeInputBuffer */
/* Demangled: vc1_dec_getFreeInputBuffer */
int vc1_dec_getFreeInputBuffer(void);

/* Symbol: mpeg4_free_working_buffer */
/* Demangled: mpeg4_free_working_buffer */
int mpeg4_free_working_buffer(void);

/* Symbol: VP8_CheckCRCResult */
/* Demangled: VP8_CheckCRCResult */
int VP8_CheckCRCResult(void);

/* Symbol: H264_EncodeSkipFrame */
/* Demangled: H264_EncodeSkipFrame */
int H264_EncodeSkipFrame(void);

/* Symbol: mpeg4_dec_decodeChecker */
/* Demangled: mpeg4_dec_decodeChecker */
int mpeg4_dec_decodeChecker(void);

/* Symbol: H264_HAL_WriteAVCMV */
/* Demangled: H264_HAL_WriteAVCMV */
int H264_HAL_WriteAVCMV(void);

/* Symbol: h264_dec_set_slice_handle */
/* Demangled: h264_dec_set_slice_handle */
int h264_dec_set_slice_handle(void);

/* Symbol: VP8_ReverseInteger */
/* Demangled: VP8_ReverseInteger */
int VP8_ReverseInteger(void);

/* Symbol: h264_enc_getParameter */
/* Demangled: h264_enc_getParameter */
int h264_enc_getParameter(void);

/* Symbol: H265_HAL_AssignQuantParam */
/* Demangled: H265_HAL_AssignQuantParam */
int H265_HAL_AssignQuantParam(void);

/* Symbol: ReplaceNALSizeWithNALPrefix2Bytes */
/* Demangled: ReplaceNALSizeWithNALPrefix2Bytes */
int ReplaceNALSizeWithNALPrefix2Bytes(void);

/* Symbol: bLengthOfNALSizeSet */
/* Demangled: bLengthOfNALSizeSet */
extern void* bLengthOfNALSizeSet;

/* Symbol: RBSPGetUE */
/* Demangled: RBSPGetUE */
int RBSPGetUE(void);

/* Symbol: MPEG2_Parse_Seq_Disp_Ext */
/* Demangled: MPEG2_Parse_Seq_Disp_Ext */
int MPEG2_Parse_Seq_Disp_Ext(void);

/* Symbol: VP8_FlushCtxProbs */
/* Demangled: VP8_FlushCtxProbs */
int VP8_FlushCtxProbs(void);

/* Symbol: VP8_HwAccCoefProbUpdate */
/* Demangled: VP8_HwAccCoefProbUpdate */
int VP8_HwAccCoefProbUpdate(void);

/* Symbol: VP8_RemoveFromFrmBufDispList */
/* Demangled: VP8_RemoveFromFrmBufDispList */
int VP8_RemoveFromFrmBufDispList(void);

/* Symbol: Vdec_Drv_H264_open_sec */
/* Demangled: Vdec_Drv_H264_open_sec */
int Vdec_Drv_H264_open_sec(void);

/* Symbol: EncMp4Frame */
/* Demangled: EncMp4Frame */
int EncMp4Frame(void);

/* Symbol: h264_enc_init_sec */
/* Demangled: h264_enc_init_sec */
int h264_enc_init_sec(void);

/* Symbol: fgAVCDumpRegister */
/* Demangled: fgAVCDumpRegister */
extern void* fgAVCDumpRegister;

/* Symbol: H264_TSVC_set_EncParam */
/* Demangled: H264_TSVC_set_EncParam */
int H264_TSVC_set_EncParam(void);

/* Symbol: H265_HAL_PowerDown */
/* Demangled: H265_HAL_PowerDown */
int H265_HAL_PowerDown(void);

/* Symbol: H265_HAL_HWLock */
/* Demangled: H265_HAL_HWLock */
int H265_HAL_HWLock(void);

/* Symbol: H264_HAL_GetYCbCrCRC */
/* Demangled: H264_HAL_GetYCbCrCRC */
int H264_HAL_GetYCbCrCRC(void);

/* Symbol: get_num_property */
/* Demangled: get_num_property */
int get_num_property(void);

/* Symbol: MPEG4BufferInvalidateCache */
/* Demangled: MPEG4BufferInvalidateCache */
int MPEG4BufferInvalidateCache(void);

/* Symbol: VP9_UPDATE_COMP_INTER_PROBS */
/* Demangled: VP9_UPDATE_COMP_INTER_PROBS */
int VP9_UPDATE_COMP_INTER_PROBS(void);

/* Symbol: H265_NALGroup */
/* Demangled: H265_NALGroup */
int H265_NALGroup(void);

/* Symbol: H265_VdecBufferFlushRange */
/* Demangled: H265_VdecBufferFlushRange */
int H265_VdecBufferFlushRange(void);

/* Symbol: HEVC_EncodeSPS */
/* Demangled: HEVC_EncodeSPS */
int HEVC_EncodeSPS(void);

/* Symbol: cleanSliceHeader */
/* Demangled: cleanSliceHeader */
int cleanSliceHeader(void);

/* Symbol: mpeg2_dec_getParameter */
/* Demangled: mpeg2_dec_getParameter */
int mpeg2_dec_getParameter(void);

/* Symbol: VP9_UPDATE_SINGLE_REF_PROBS */
/* Demangled: VP9_UPDATE_SINGLE_REF_PROBS */
int VP9_UPDATE_SINGLE_REF_PROBS(void);

/* Symbol: h264_enc_set_EncParam */
/* Demangled: h264_enc_set_EncParam */
int h264_enc_set_EncParam(void);

/* Symbol: H265_GetFrameBufferFromFree */
/* Demangled: H265_GetFrameBufferFromFree */
int H265_GetFrameBufferFromFree(void);

/* Symbol: H265_TestSE */
/* Demangled: H265_TestSE */
int H265_TestSE(void);

/* Symbol: H264PutFrameBufferToFree */
/* Demangled: H264PutFrameBufferToFree */
int H264PutFrameBufferToFree(void);

/* Symbol: Vdec_Drv_H265_setPara */
/* Demangled: Vdec_Drv_H265_setPara */
int Vdec_Drv_H265_setPara(void);

/* Symbol: h265_dec_getParameter */
/* Demangled: h265_dec_getParameter */
int h265_dec_getParameter(void);

/* Symbol: H265_parseHRD */
/* Demangled: H265_parseHRD */
int H265_parseHRD(void);

/* Symbol: H264_EncodeFrameEnc_TriggerHW */
/* Demangled: H264_EncodeFrameEnc_TriggerHW */
int H264_EncodeFrameEnc_TriggerHW(void);

/* Symbol: VP8_AddToFrmBufDispList */
/* Demangled: VP8_AddToFrmBufDispList */
int VP8_AddToFrmBufDispList(void);

/* Symbol: VP8_WaitVLDFetchOK */
/* Demangled: VP8_WaitVLDFetchOK */
int VP8_WaitVLDFetchOK(void);

/* Symbol: VP9_HAL_ReadVLDTOP */
/* Demangled: VP9_HAL_ReadVLDTOP */
int VP9_HAL_ReadVLDTOP(void);

/* Symbol: VP9_HAL_ReadPP */
/* Demangled: VP9_HAL_ReadPP */
int VP9_HAL_ReadPP(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVCODECDRV_H */
