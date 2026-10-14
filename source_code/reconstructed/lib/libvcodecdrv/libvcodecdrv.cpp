/*
 * Reverse-Engineered Source for: libvcodecdrv.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvcodecdrv"

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
#include "libvcodecdrv.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: GetEncoderSOPath */
extern "C" __attribute__((visibility("default"))) int GetEncoderSOPath(void) {
    ALOGD("GetEncoderSOPath() called");
    return 0;
}

/* Demangled: H265_PutFrameBufferToFree */
extern "C" __attribute__((visibility("default"))) int H265_PutFrameBufferToFree(void) {
    ALOGD("H265_PutFrameBufferToFree() called");
    return 0;
}

/* Demangled: H264_HAL_HWUnLock */
extern "C" __attribute__((visibility("default"))) int H264_HAL_HWUnLock(void) {
    ALOGD("H264_HAL_HWUnLock() called");
    return 0;
}

/* Demangled: is_all_pic_in_wrapper */
extern "C" __attribute__((visibility("default"))) int is_all_pic_in_wrapper(void) {
    ALOGD("is_all_pic_in_wrapper() called");
    return 0;
}

/* Exported Object: g_FrmBufList */
extern "C" __attribute__((visibility("default"))) void* g_FrmBufList = NULL;

/* Demangled: get_prob */
extern "C" __attribute__((visibility("default"))) int get_prob(void) {
    ALOGD("get_prob() called");
    return 0;
}

/* Demangled: H265_HAL_SetGridModeSubPicInfo */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetGridModeSubPicInfo(void) {
    ALOGD("H265_HAL_SetGridModeSubPicInfo() called");
    return 0;
}

/* Demangled: H264_HAL_SafeBreak */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SafeBreak(void) {
    ALOGD("H264_HAL_SafeBreak() called");
    return 0;
}

/* Demangled: H264_HAL_WaitISR */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WaitISR(void) {
    ALOGD("H264_HAL_WaitISR() called");
    return 0;
}

/* Demangled: h264_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int h264_dec_getDisplayBuffer(void) {
    ALOGD("h264_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: H264_WP_CalcWP */
extern "C" __attribute__((visibility("default"))) int H264_WP_CalcWP(void) {
    ALOGD("H264_WP_CalcWP() called");
    return 0;
}

/* Demangled: H265_GCE_DumpCmd */
extern "C" __attribute__((visibility("default"))) int H265_GCE_DumpCmd(void) {
    ALOGD("H265_GCE_DumpCmd() called");
    return 0;
}

/* Demangled: h265_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int h265_dec_getFreeBuffer(void) {
    ALOGD("h265_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: H264_HAL_HWUnLock_Sec */
extern "C" __attribute__((visibility("default"))) int H264_HAL_HWUnLock_Sec(void) {
    ALOGD("H264_HAL_HWUnLock_Sec() called");
    return 0;
}

/* Demangled: h264_dec_decode_sec */
extern "C" __attribute__((visibility("default"))) int h264_dec_decode_sec(void) {
    ALOGD("h264_dec_decode_sec() called");
    return 0;
}

/* Demangled: mpeg2_put_to_free_queue */
extern "C" __attribute__((visibility("default"))) int mpeg2_put_to_free_queue(void) {
    ALOGD("mpeg2_put_to_free_queue() called");
    return 0;
}

/* Demangled: VP8_AllocWorkBuf */
extern "C" __attribute__((visibility("default"))) int VP8_AllocWorkBuf(void) {
    ALOGD("VP8_AllocWorkBuf() called");
    return 0;
}

/* Demangled: HEVC_TimeDiffMs */
extern "C" __attribute__((visibility("default"))) int HEVC_TimeDiffMs(void) {
    ALOGD("HEVC_TimeDiffMs() called");
    return 0;
}

/* Demangled: H265_HAL_ShiftGetBitStream */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ShiftGetBitStream(void) {
    ALOGD("H265_HAL_ShiftGetBitStream() called");
    return 0;
}

/* Demangled: h265_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int h265_dec_getDisplayBuffer(void) {
    ALOGD("h265_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: VP8_ReadSRAMData */
extern "C" __attribute__((visibility("default"))) int VP8_ReadSRAMData(void) {
    ALOGD("VP8_ReadSRAMData() called");
    return 0;
}

/* Demangled: h264_dec_init_sec */
extern "C" __attribute__((visibility("default"))) int h264_dec_init_sec(void) {
    ALOGD("h264_dec_init_sec() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: H265_quantInterDefault8x8 */
extern "C" __attribute__((visibility("default"))) void* H265_quantInterDefault8x8 = NULL;

/* Demangled: H264_HAL_SetSHDRAVLD1 */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetSHDRAVLD1(void) {
    ALOGD("H264_HAL_SetSHDRAVLD1() called");
    return 0;
}

/* Demangled: H264FramePacking */
extern "C" __attribute__((visibility("default"))) int H264FramePacking(void) {
    ALOGD("H264FramePacking() called");
    return 0;
}

/* Demangled: vp9_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int vp9_dec_setParameter(void) {
    ALOGD("vp9_dec_setParameter() called");
    return 0;
}

/* Demangled: h264_sw_enc_get_specific_quality */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_get_specific_quality(void) {
    ALOGD("h264_sw_enc_get_specific_quality() called");
    return 0;
}

/* Demangled: h264_enc_set_IFrameInterval */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_IFrameInterval(void) {
    ALOGD("h264_enc_set_IFrameInterval() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: mpeg2_get_addr_base */
extern "C" __attribute__((visibility("default"))) int mpeg2_get_addr_base(void) {
    ALOGD("mpeg2_get_addr_base() called");
    return 0;
}

/* Demangled: HEVC_EncodeDummyNAL */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeDummyNAL(void) {
    ALOGD("HEVC_EncodeDummyNAL() called");
    return 0;
}

/* Demangled: QueryAdditionFuncPtr */
extern "C" __attribute__((visibility("default"))) int QueryAdditionFuncPtr(void) {
    ALOGD("QueryAdditionFuncPtr() called");
    return 0;
}

/* Demangled: H265_HAL_SetRefPicListReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetRefPicListReg(void) {
    ALOGD("H265_HAL_SetRefPicListReg() called");
    return 0;
}

/* Demangled: vp8_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int vp8_dec_getFreeBuffer(void) {
    ALOGD("vp8_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Open */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Open(void) {
    ALOGD("Vdec_Drv_VP9_Open() called");
    return 0;
}

/* Demangled: H264SetPicRefType */
extern "C" __attribute__((visibility("default"))) int H264SetPicRefType(void) {
    ALOGD("H264SetPicRefType() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpErrorBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpErrorBitStreamBuffer(void) {
    ALOGD("H264_DEBUG_DumpErrorBitStreamBuffer() called");
    return 0;
}

/* Demangled: h264_dec_get_rptr */
extern "C" __attribute__((visibility("default"))) int h264_dec_get_rptr(void) {
    ALOGD("h264_dec_get_rptr() called");
    return 0;
}

/* Demangled: vp9_dec_deInit */
extern "C" __attribute__((visibility("default"))) int vp9_dec_deInit(void) {
    ALOGD("vp9_dec_deInit() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_GetSeqInfo */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_GetSeqInfo(void) {
    ALOGD("Vdec_Drv_VP9_GetSeqInfo() called");
    return 0;
}

/* Demangled: VP9_Read_Bit_Raw */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Bit_Raw(void) {
    ALOGD("VP9_Read_Bit_Raw() called");
    return 0;
}

/* Demangled: H265_HAL_Read_VldRPtr */
extern "C" __attribute__((visibility("default"))) int H265_HAL_Read_VldRPtr(void) {
    ALOGD("H265_HAL_Read_VldRPtr() called");
    return 0;
}

/* Demangled: bVDecIsVLDFetchOk */
extern "C" __attribute__((visibility("default"))) int bVDecIsVLDFetchOk(void) {
    ALOGD("bVDecIsVLDFetchOk() called");
    return 0;
}

/* Demangled: mpeg4_parse_sequence_information */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_sequence_information(void) {
    ALOGD("mpeg4_parse_sequence_information() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Ext_And_Usr_Data */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Ext_And_Usr_Data(void) {
    ALOGD("MPEG2_Parse_Ext_And_Usr_Data() called");
    return 0;
}

/* Demangled: VP8_Check_Resolution_Changed */
extern "C" __attribute__((visibility("default"))) int VP8_Check_Resolution_Changed(void) {
    ALOGD("VP8_Check_Resolution_Changed() called");
    return 0;
}

/* Demangled: VP8_FreeWorkBuf */
extern "C" __attribute__((visibility("default"))) int VP8_FreeWorkBuf(void) {
    ALOGD("VP8_FreeWorkBuf() called");
    return 0;
}

/* Demangled: VP9_Set_Probs_Table2 */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Probs_Table2(void) {
    ALOGD("VP9_Set_Probs_Table2() called");
    return 0;
}

/* Demangled: vc1_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int vc1_dec_getFreeBuffer(void) {
    ALOGD("vc1_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: VP8_ParseFrameHeader */
extern "C" __attribute__((visibility("default"))) int VP8_ParseFrameHeader(void) {
    ALOGD("VP8_ParseFrameHeader() called");
    return 0;
}

/* Demangled: vp9_tree_merge_probs */
extern "C" __attribute__((visibility("default"))) int vp9_tree_merge_probs(void) {
    ALOGD("vp9_tree_merge_probs() called");
    return 0;
}

/* Demangled: VP9_UPDATE_MBSKIP_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_MBSKIP_PROBS(void) {
    ALOGD("VP9_UPDATE_MBSKIP_PROBS() called");
    return 0;
}

/* Demangled: EncH264SeqHeader */
extern "C" __attribute__((visibility("default"))) int EncH264SeqHeader(void) {
    ALOGD("EncH264SeqHeader() called");
    return 0;
}

/* Demangled: H264_HAL_DecStart */
extern "C" __attribute__((visibility("default"))) int H264_HAL_DecStart(void) {
    ALOGD("H264_HAL_DecStart() called");
    return 0;
}

/* Demangled: mpeg4_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_getDisplayBuffer(void) {
    ALOGD("mpeg4_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: VP9_Set_Default_LF_Deltas */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Default_LF_Deltas(void) {
    ALOGD("VP9_Set_Default_LF_Deltas() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadBS2 */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadBS2(void) {
    ALOGD("VP9_HAL_ReadBS2() called");
    return 0;
}

/* Demangled: VP9_Set_TX_Mode */
extern "C" __attribute__((visibility("default"))) int VP9_Set_TX_Mode(void) {
    ALOGD("VP9_Set_TX_Mode() called");
    return 0;
}

/* Demangled: VP9_UPDATE_MVD_HP_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_MVD_HP_PROBS(void) {
    ALOGD("VP9_UPDATE_MVD_HP_PROBS() called");
    return 0;
}

/* Demangled: eVEncDrvInit */
extern "C" __attribute__((visibility("default"))) int eVEncDrvInit(void) {
    ALOGD("eVEncDrvInit() called");
    return 0;
}

/* Demangled: H265_RBSPGetUE */
extern "C" __attribute__((visibility("default"))) int H265_RBSPGetUE(void) {
    ALOGD("H265_RBSPGetUE() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadVLD */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadVLD(void) {
    ALOGD("VP9_HAL_ReadVLD() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteBS2 */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteBS2(void) {
    ALOGD("VP9_HAL_WriteBS2() called");
    return 0;
}

/* Demangled: HEVC_SetScalingFactor */
extern "C" __attribute__((visibility("default"))) int HEVC_SetScalingFactor(void) {
    ALOGD("HEVC_SetScalingFactor() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_decodeEx */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_decodeEx(void) {
    ALOGD("Vdec_Drv_H265_decodeEx() called");
    return 0;
}

/* Demangled: handleSLICENALU */
extern "C" __attribute__((visibility("default"))) int handleSLICENALU(void) {
    ALOGD("handleSLICENALU() called");
    return 0;
}

/* Demangled: h264_dec_Init_ex */
extern "C" __attribute__((visibility("default"))) int h264_dec_Init_ex(void) {
    ALOGD("h264_dec_Init_ex() called");
    return 0;
}

/* Demangled: VP8_CheckProc_MBRowModeStart */
extern "C" __attribute__((visibility("default"))) int VP8_CheckProc_MBRowModeStart(void) {
    ALOGD("VP8_CheckProc_MBRowModeStart() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteVLD */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteVLD(void) {
    ALOGD("VP9_HAL_WriteVLD() called");
    return 0;
}

/* Demangled: VP9_Count_TBL_WDMA */
extern "C" __attribute__((visibility("default"))) int VP9_Count_TBL_WDMA(void) {
    ALOGD("VP9_Count_TBL_WDMA() called");
    return 0;
}

/* Demangled: VP8_WaitISR */
extern "C" __attribute__((visibility("default"))) int VP8_WaitISR(void) {
    ALOGD("VP8_WaitISR() called");
    return 0;
}

/* Demangled: VP9_Apply_Frame_Size */
extern "C" __attribute__((visibility("default"))) int VP9_Apply_Frame_Size(void) {
    ALOGD("VP9_Apply_Frame_Size() called");
    return 0;
}

/* Demangled: VP9_Set_MC_Ref_Scaling_Step */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_Ref_Scaling_Step(void) {
    ALOGD("VP9_Set_MC_Ref_Scaling_Step() called");
    return 0;
}

/* Demangled: eVEncDrvDeInit */
extern "C" __attribute__((visibility("default"))) int eVEncDrvDeInit(void) {
    ALOGD("eVEncDrvDeInit() called");
    return 0;
}

/* Demangled: mpeg2_flush_cache_working_buffer */
extern "C" __attribute__((visibility("default"))) int mpeg2_flush_cache_working_buffer(void) {
    ALOGD("mpeg2_flush_cache_working_buffer() called");
    return 0;
}

/* Demangled: VP9_Set_Pic_Info */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Pic_Info(void) {
    ALOGD("VP9_Set_Pic_Info() called");
    return 0;
}

/* Demangled: mpeg4_enc_deInit */
extern "C" __attribute__((visibility("default"))) int mpeg4_enc_deInit(void) {
    ALOGD("mpeg4_enc_deInit() called");
    return 0;
}

/* Demangled: H265_HAL_ReadPP */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadPP(void) {
    ALOGD("H265_HAL_ReadPP() called");
    return 0;
}

/* Demangled: mpeg4_preparse_bitstream */
extern "C" __attribute__((visibility("default"))) int mpeg4_preparse_bitstream(void) {
    ALOGD("mpeg4_preparse_bitstream() called");
    return 0;
}

/* Demangled: mpeg4_dec_parsing_thread */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_parsing_thread(void) {
    ALOGD("mpeg4_dec_parsing_thread() called");
    return 0;
}

/* Demangled: VP9_Reset_Bits_Count */
extern "C" __attribute__((visibility("default"))) int VP9_Reset_Bits_Count(void) {
    ALOGD("VP9_Reset_Bits_Count() called");
    return 0;
}

/* Demangled: H264_SwGenNonRefP */
extern "C" __attribute__((visibility("default"))) int H264_SwGenNonRefP(void) {
    ALOGD("H264_SwGenNonRefP() called");
    return 0;
}

/* Demangled: H265_HAL_HWUnLock */
extern "C" __attribute__((visibility("default"))) int H265_HAL_HWUnLock(void) {
    ALOGD("H265_HAL_HWUnLock() called");
    return 0;
}

/* Demangled: H265_HAL_ReadVLDTOP */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadVLDTOP(void) {
    ALOGD("H265_HAL_ReadVLDTOP() called");
    return 0;
}

/* Exported Object: H265_sigLastScan8x8 */
extern "C" __attribute__((visibility("default"))) void* H265_sigLastScan8x8 = NULL;

/* Demangled: H264_HAL_ReadMC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadMC(void) {
    ALOGD("H264_HAL_ReadMC() called");
    return 0;
}

/* Demangled: VP8_WriteVP8MC */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVP8MC(void) {
    ALOGD("VP8_WriteVP8MC() called");
    return 0;
}

/* Demangled: VP9_Intra_Only */
extern "C" __attribute__((visibility("default"))) int VP9_Intra_Only(void) {
    ALOGD("VP9_Intra_Only() called");
    return 0;
}

/* Demangled: EncH264SPS */
extern "C" __attribute__((visibility("default"))) int EncH264SPS(void) {
    ALOGD("EncH264SPS() called");
    return 0;
}

/* Demangled: H265_HAL_SetVLDVFIFO */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetVLDVFIFO(void) {
    ALOGD("H265_HAL_SetVLDVFIFO() called");
    return 0;
}

/* Demangled: is_valid_stuffing */
extern "C" __attribute__((visibility("default"))) int is_valid_stuffing(void) {
    ALOGD("is_valid_stuffing() called");
    return 0;
}

/* Demangled: MPEG2BufferInvalidateCache */
extern "C" __attribute__((visibility("default"))) int MPEG2BufferInvalidateCache(void) {
    ALOGD("MPEG2BufferInvalidateCache() called");
    return 0;
}

/* Demangled: VP8_VLDGetBits */
extern "C" __attribute__((visibility("default"))) int VP8_VLDGetBits(void) {
    ALOGD("VP8_VLDGetBits() called");
    return 0;
}

/* Demangled: VP9_Scaled_X */
extern "C" __attribute__((visibility("default"))) int VP9_Scaled_X(void) {
    ALOGD("VP9_Scaled_X() called");
    return 0;
}

/* Demangled: h264_enc_unsigned_exp_golomb */
extern "C" __attribute__((visibility("default"))) int h264_enc_unsigned_exp_golomb(void) {
    ALOGD("h264_enc_unsigned_exp_golomb() called");
    return 0;
}

/* Demangled: DumpFrameBufferArray */
extern "C" __attribute__((visibility("default"))) int DumpFrameBufferArray(void) {
    ALOGD("DumpFrameBufferArray() called");
    return 0;
}

/* Demangled: H264_HAL_ReadAVCVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadAVCVLD(void) {
    ALOGD("H264_HAL_ReadAVCVLD() called");
    return 0;
}

/* Demangled: H264_HAL_WriteScalingList */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteScalingList(void) {
    ALOGD("H264_HAL_WriteScalingList() called");
    return 0;
}

/* Demangled: VP8_Read_Internal_SRAM */
extern "C" __attribute__((visibility("default"))) int VP8_Read_Internal_SRAM(void) {
    ALOGD("VP8_Read_Internal_SRAM() called");
    return 0;
}

/* Demangled: VP9_Scaled_Y */
extern "C" __attribute__((visibility("default"))) int VP9_Scaled_Y(void) {
    ALOGD("VP9_Scaled_Y() called");
    return 0;
}

/* Demangled: H265_PredWeightTable */
extern "C" __attribute__((visibility("default"))) int H265_PredWeightTable(void) {
    ALOGD("H265_PredWeightTable() called");
    return 0;
}

/* Demangled: H264_HAL_SetSPSAVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetSPSAVLD(void) {
    ALOGD("H264_HAL_SetSPSAVLD() called");
    return 0;
}

/* Demangled: VP8_LoadCtxProbs */
extern "C" __attribute__((visibility("default"))) int VP8_LoadCtxProbs(void) {
    ALOGD("VP8_LoadCtxProbs() called");
    return 0;
}

/* Demangled: VP9_Dump_Register */
extern "C" __attribute__((visibility("default"))) int VP9_Dump_Register(void) {
    ALOGD("VP9_Dump_Register() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_InitBarrelShifter */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_InitBarrelShifter(void) {
    ALOGD("Vdec_Drv_VP9_InitBarrelShifter() called");
    return 0;
}

/* Demangled: H264_EncodeFrameDeinit */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameDeinit(void) {
    ALOGD("H264_EncodeFrameDeinit() called");
    return 0;
}

/* Demangled: H265_destroyPPS */
extern "C" __attribute__((visibility("default"))) int H265_destroyPPS(void) {
    ALOGD("H265_destroyPPS() called");
    return 0;
}

/* Demangled: H264_HAL_GetMbxMby */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetMbxMby(void) {
    ALOGD("H264_HAL_GetMbxMby() called");
    return 0;
}

/* Demangled: VP9_Tile_Set_Col */
extern "C" __attribute__((visibility("default"))) int VP9_Tile_Set_Col(void) {
    ALOGD("VP9_Tile_Set_Col() called");
    return 0;
}

/* Demangled: VP9_Clear_Counts_Table */
extern "C" __attribute__((visibility("default"))) int VP9_Clear_Counts_Table(void) {
    ALOGD("VP9_Clear_Counts_Table() called");
    return 0;
}

/* Exported Object: slice_qp_mapping_table */
extern "C" __attribute__((visibility("default"))) void* slice_qp_mapping_table = NULL;

/* Demangled: H265_destroySEI */
extern "C" __attribute__((visibility("default"))) int H265_destroySEI(void) {
    ALOGD("H265_destroySEI() called");
    return 0;
}

/* Demangled: H264_HAL_SetRegBase */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetRegBase(void) {
    ALOGD("H264_HAL_SetRegBase() called");
    return 0;
}

/* Demangled: mpeg2_dec_init */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_init(void) {
    ALOGD("mpeg2_dec_init() called");
    return 0;
}

/* Demangled: tx_counts_to_branch_counts_16x16 */
extern "C" __attribute__((visibility("default"))) int tx_counts_to_branch_counts_16x16(void) {
    ALOGD("tx_counts_to_branch_counts_16x16() called");
    return 0;
}

/* Demangled: VP9_Set_Segmentation */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Segmentation(void) {
    ALOGD("VP9_Set_Segmentation() called");
    return 0;
}

/* Exported Object: gH264_DRV_IF_SEC */
extern "C" __attribute__((visibility("default"))) void* gH264_DRV_IF_SEC = NULL;

/* Demangled: H264PicTiming */
extern "C" __attribute__((visibility("default"))) int H264PicTiming(void) {
    ALOGD("H264PicTiming() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_getSeqInfo */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_getSeqInfo(void) {
    ALOGD("Vdec_Drv_H264_getSeqInfo() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_GetHWRegBase */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_GetHWRegBase(void) {
    ALOGD("Vdec_Drv_VP9_GetHWRegBase() called");
    return 0;
}

/* Demangled: VP9_Set_MC_MAX_RRF_BLK_Size */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_MAX_RRF_BLK_Size(void) {
    ALOGD("VP9_Set_MC_MAX_RRF_BLK_Size() called");
    return 0;
}

/* Exported Object: lib_handle */
extern "C" __attribute__((visibility("default"))) void* lib_handle = NULL;

/* Demangled: H264_HAL_InitPRefList */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitPRefList(void) {
    ALOGD("H264_HAL_InitPRefList() called");
    return 0;
}

/* Demangled: H264_HAL_ReadVLDTOP */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadVLDTOP(void) {
    ALOGD("H264_HAL_ReadVLDTOP() called");
    return 0;
}

/* Demangled: h264_enc_encode */
extern "C" __attribute__((visibility("default"))) int h264_enc_encode(void) {
    ALOGD("h264_enc_encode() called");
    return 0;
}

/* Demangled: H264_SetEncParam_UFO */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam_UFO(void) {
    ALOGD("H264_SetEncParam_UFO() called");
    return 0;
}

/* Demangled: H265_HAL_WriteMC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteMC(void) {
    ALOGD("H265_HAL_WriteMC() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_DeInit */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_DeInit(void) {
    ALOGD("Vdec_Drv_VP9_DeInit() called");
    return 0;
}

/* Demangled: H265_HAL_SetPicInfoReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetPicInfoReg(void) {
    ALOGD("H265_HAL_SetPicInfoReg() called");
    return 0;
}

/* Demangled: H264_GetInstByID */
extern "C" __attribute__((visibility("default"))) int H264_GetInstByID(void) {
    ALOGD("H264_GetInstByID() called");
    return 0;
}

/* Demangled: initSliceHeader */
extern "C" __attribute__((visibility("default"))) int initSliceHeader(void) {
    ALOGD("initSliceHeader() called");
    return 0;
}

/* Demangled: mpeg4_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_setParameter(void) {
    ALOGD("mpeg4_dec_setParameter() called");
    return 0;
}

/* Demangled: H264_ShiftRightBitArray */
extern "C" __attribute__((visibility("default"))) int H264_ShiftRightBitArray(void) {
    ALOGD("H264_ShiftRightBitArray() called");
    return 0;
}

/* Exported Object: szH264ProfName */
extern "C" __attribute__((visibility("default"))) void* szH264ProfName = NULL;

/* Demangled: hevc_enc_getParameter */
extern "C" __attribute__((visibility("default"))) int hevc_enc_getParameter(void) {
    ALOGD("hevc_enc_getParameter() called");
    return 0;
}

/* Demangled: HEVC_EncHdr_Unsigned_Exp_Golomb */
extern "C" __attribute__((visibility("default"))) int HEVC_EncHdr_Unsigned_Exp_Golomb(void) {
    ALOGD("HEVC_EncHdr_Unsigned_Exp_Golomb() called");
    return 0;
}

/* Demangled: HEVC_EncodeSPS_HW */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeSPS_HW(void) {
    ALOGD("HEVC_EncodeSPS_HW() called");
    return 0;
}

/* Demangled: DrvAddSpecs */
extern "C" __attribute__((visibility("default"))) int DrvAddSpecs(void) {
    ALOGD("DrvAddSpecs() called");
    return 0;
}

/* Demangled: eVDecDrvDeInit */
extern "C" __attribute__((visibility("default"))) int eVDecDrvDeInit(void) {
    ALOGD("eVDecDrvDeInit() called");
    return 0;
}

/* Demangled: H264_HAL_Read_VldRPtr */
extern "C" __attribute__((visibility("default"))) int H264_HAL_Read_VldRPtr(void) {
    ALOGD("H264_HAL_Read_VldRPtr() called");
    return 0;
}

/* Demangled: VP9_Tile_Init */
extern "C" __attribute__((visibility("default"))) int VP9_Tile_Init(void) {
    ALOGD("VP9_Tile_Init() called");
    return 0;
}

/* Demangled: DrvGetOutputBufferCB */
extern "C" __attribute__((visibility("default"))) int DrvGetOutputBufferCB(void) {
    ALOGD("DrvGetOutputBufferCB() called");
    return 0;
}

/* Demangled: H265_HAL_DecStart */
extern "C" __attribute__((visibility("default"))) int H265_HAL_DecStart(void) {
    ALOGD("H265_HAL_DecStart() called");
    return 0;
}

/* Demangled: FindFreeInputBuffer */
extern "C" __attribute__((visibility("default"))) int FindFreeInputBuffer(void) {
    ALOGD("FindFreeInputBuffer() called");
    return 0;
}

/* Exported Object: pfnMtkVdecH264SecDeinit_Ptr */
extern "C" __attribute__((visibility("default"))) void* pfnMtkVdecH264SecDeinit_Ptr = NULL;

/* Demangled: MPEG2_Parse_Pic_Display_Ext */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Pic_Display_Ext(void) {
    ALOGD("MPEG2_Parse_Pic_Display_Ext() called");
    return 0;
}

/* Demangled: mpeg2_get_from_free_queue */
extern "C" __attribute__((visibility("default"))) int mpeg2_get_from_free_queue(void) {
    ALOGD("mpeg2_get_from_free_queue() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: H265_FlushDPB */
extern "C" __attribute__((visibility("default"))) int H265_FlushDPB(void) {
    ALOGD("H265_FlushDPB() called");
    return 0;
}

/* Demangled: VP8_DecStart */
extern "C" __attribute__((visibility("default"))) int VP8_DecStart(void) {
    ALOGD("VP8_DecStart() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcOpen */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcOpen = NULL;

/* Demangled: H265_HAL_GetStartCode_PicStart */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetStartCode_PicStart(void) {
    ALOGD("H265_HAL_GetStartCode_PicStart() called");
    return 0;
}

/* Demangled: VP9_Decode_Unsigned_Max */
extern "C" __attribute__((visibility("default"))) int VP9_Decode_Unsigned_Max(void) {
    ALOGD("VP9_Decode_Unsigned_Max() called");
    return 0;
}

/* Demangled: H264_FreeWorkBuf */
extern "C" __attribute__((visibility("default"))) int H264_FreeWorkBuf(void) {
    ALOGD("H264_FreeWorkBuf() called");
    return 0;
}

/* Demangled: h264_enc_set_AdjustFramerate */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_AdjustFramerate(void) {
    ALOGD("h264_enc_set_AdjustFramerate() called");
    return 0;
}

/* Demangled: HEVC_ArgbSetting */
extern "C" __attribute__((visibility("default"))) int HEVC_ArgbSetting(void) {
    ALOGD("HEVC_ArgbSetting() called");
    return 0;
}

/* Exported Object: gHEVC_ENC_DRV_HW_IF */
extern "C" __attribute__((visibility("default"))) void* gHEVC_ENC_DRV_HW_IF = NULL;

/* Demangled: H265_initPicInfo */
extern "C" __attribute__((visibility("default"))) int H265_initPicInfo(void) {
    ALOGD("H265_initPicInfo() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: QUANT8_INTER_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* QUANT8_INTER_DEFAULT = NULL;

/* Demangled: VP8_MbInitDequantizer */
extern "C" __attribute__((visibility("default"))) int VP8_MbInitDequantizer(void) {
    ALOGD("VP8_MbInitDequantizer() called");
    return 0;
}

/* Demangled: VP9_Set_Seg_Prefetch_Size */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Seg_Prefetch_Size(void) {
    ALOGD("VP9_Set_Seg_Prefetch_Size() called");
    return 0;
}

/* Demangled: hevc_enc_encode */
extern "C" __attribute__((visibility("default"))) int hevc_enc_encode(void) {
    ALOGD("hevc_enc_encode() called");
    return 0;
}

/* Demangled: bH265_VDecWaitVldFetchOk */
extern "C" __attribute__((visibility("default"))) int bH265_VDecWaitVldFetchOk(void) {
    ALOGD("bH265_VDecWaitVldFetchOk() called");
    return 0;
}

/* Demangled: H265_HAL_ReadVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadVLD(void) {
    ALOGD("H265_HAL_ReadVLD() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_decodeEx */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_decodeEx(void) {
    ALOGD("Vdec_Drv_H264_decodeEx() called");
    return 0;
}

/* Demangled: H265_HAL_WriteHEVCMV */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteHEVCMV(void) {
    ALOGD("H265_HAL_WriteHEVCMV() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteMC */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteMC(void) {
    ALOGD("VP9_HAL_WriteMC() called");
    return 0;
}

/* Demangled: EncodeOneUnit */
extern "C" __attribute__((visibility("default"))) int EncodeOneUnit(void) {
    ALOGD("EncodeOneUnit() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_open */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_open(void) {
    ALOGD("Vdec_Drv_H264_open() called");
    return 0;
}

/* Demangled: VP8_WriteVP8MV */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVP8MV(void) {
    ALOGD("VP8_WriteVP8MV() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Close */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Close(void) {
    ALOGD("Vdec_Drv_VP9_Close() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: bVDecWaitVldFetchOk */
extern "C" __attribute__((visibility("default"))) int bVDecWaitVldFetchOk(void) {
    ALOGD("bVDecWaitVldFetchOk() called");
    return 0;
}

/* Demangled: mpeg2_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_getDisplayBuffer(void) {
    ALOGD("mpeg2_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: VP8_WriteVP8VLD2 */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVP8VLD2(void) {
    ALOGD("VP8_WriteVP8VLD2() called");
    return 0;
}

/* Demangled: VP9_Get_Qindex */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Qindex(void) {
    ALOGD("VP9_Get_Qindex() called");
    return 0;
}

/* Demangled: DrvDisablePerfService */
extern "C" __attribute__((visibility("default"))) int DrvDisablePerfService(void) {
    ALOGD("DrvDisablePerfService() called");
    return 0;
}

/* Demangled: ReturnSVPInstance */
extern "C" __attribute__((visibility("default"))) int ReturnSVPInstance(void) {
    ALOGD("ReturnSVPInstance() called");
    return 0;
}

/* Demangled: H265_initRBSPBitStream */
extern "C" __attribute__((visibility("default"))) int H265_initRBSPBitStream(void) {
    ALOGD("H265_initRBSPBitStream() called");
    return 0;
}

/* Demangled: parsePPS */
extern "C" __attribute__((visibility("default"))) int parsePPS(void) {
    ALOGD("parsePPS() called");
    return 0;
}

/* Demangled: VP8_VLDReadLiteral */
extern "C" __attribute__((visibility("default"))) int VP8_VLDReadLiteral(void) {
    ALOGD("VP8_VLDReadLiteral() called");
    return 0;
}

/* Demangled: VP9_Get_Fixed_Point_Scale_Factor */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Fixed_Point_Scale_Factor(void) {
    ALOGD("VP9_Get_Fixed_Point_Scale_Factor() called");
    return 0;
}

/* Demangled: VP9_Count_TBL_Read_SRAM */
extern "C" __attribute__((visibility("default"))) int VP9_Count_TBL_Read_SRAM(void) {
    ALOGD("VP9_Count_TBL_Read_SRAM() called");
    return 0;
}

/* Demangled: HEVC_EncodeSEI_HDRDynamic */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeSEI_HDRDynamic(void) {
    ALOGD("HEVC_EncodeSEI_HDRDynamic() called");
    return 0;
}

/* Demangled: H265_HAL_InitISR */
extern "C" __attribute__((visibility("default"))) int H265_HAL_InitISR(void) {
    ALOGD("H265_HAL_InitISR() called");
    return 0;
}

/* Demangled: h265_dec_deInit */
extern "C" __attribute__((visibility("default"))) int h265_dec_deInit(void) {
    ALOGD("h265_dec_deInit() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_open_sec_tbase */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_open_sec_tbase(void) {
    ALOGD("Vdec_Drv_H264_open_sec_tbase() called");
    return 0;
}

/* Demangled: h264_enc_set_IDRFrameInterval */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_IDRFrameInterval(void) {
    ALOGD("h264_enc_set_IDRFrameInterval() called");
    return 0;
}

/* Demangled: get_dcac_mv_size */
extern "C" __attribute__((visibility("default"))) int get_dcac_mv_size(void) {
    ALOGD("get_dcac_mv_size() called");
    return 0;
}

/* Demangled: H265_HAL_SeCodeNum */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SeCodeNum(void) {
    ALOGD("H265_HAL_SeCodeNum() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpFrameBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpFrameBuffer(void) {
    ALOGD("H264_DEBUG_DumpFrameBuffer() called");
    return 0;
}

/* Demangled: VP9_Setup_Scale_Factors_For_Frame */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Scale_Factors_For_Frame(void) {
    ALOGD("VP9_Setup_Scale_Factors_For_Frame() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Parse */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Parse(void) {
    ALOGD("Vdec_Drv_VP9_Parse() called");
    return 0;
}

/* Demangled: tx_counts_to_branch_counts_32x32 */
extern "C" __attribute__((visibility("default"))) int tx_counts_to_branch_counts_32x32(void) {
    ALOGD("tx_counts_to_branch_counts_32x32() called");
    return 0;
}

/* Demangled: H265_HAL_WriteScalingListVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteScalingListVLD(void) {
    ALOGD("H265_HAL_WriteScalingListVLD() called");
    return 0;
}

/* Demangled: H264_HAL_InitH264BarrelShifter */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitH264BarrelShifter(void) {
    ALOGD("H264_HAL_InitH264BarrelShifter() called");
    return 0;
}

/* Demangled: merge_probs */
extern "C" __attribute__((visibility("default"))) int merge_probs(void) {
    ALOGD("merge_probs() called");
    return 0;
}

/* Demangled: h264_enc_set_RecordSize */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_RecordSize(void) {
    ALOGD("h264_enc_set_RecordSize() called");
    return 0;
}

/* Demangled: VP9_Wait_ISR */
extern "C" __attribute__((visibility("default"))) int VP9_Wait_ISR(void) {
    ALOGD("VP9_Wait_ISR() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcClose */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcClose = NULL;

/* Demangled: VP8_DecReset */
extern "C" __attribute__((visibility("default"))) int VP8_DecReset(void) {
    ALOGD("VP8_DecReset() called");
    return 0;
}

/* Demangled: H264_HAL_SetBRefPicListReg_Extra */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetBRefPicListReg_Extra(void) {
    ALOGD("H264_HAL_SetBRefPicListReg_Extra() called");
    return 0;
}

/* Demangled: VP9_Put_To_Use_List */
extern "C" __attribute__((visibility("default"))) int VP9_Put_To_Use_List(void) {
    ALOGD("VP9_Put_To_Use_List() called");
    return 0;
}

/* Demangled: vc1_dec_deInit */
extern "C" __attribute__((visibility("default"))) int vc1_dec_deInit(void) {
    ALOGD("vc1_dec_deInit() called");
    return 0;
}

/* Demangled: H265_HAL_SetRegBase */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetRegBase(void) {
    ALOGD("H265_HAL_SetRegBase() called");
    return 0;
}

/* Demangled: H265_HAL_SetStillImageInfo */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetStillImageInfo(void) {
    ALOGD("H265_HAL_SetStillImageInfo() called");
    return 0;
}

/* Demangled: eVMPEG4EncDrv_EncoderQueryInfo */
extern "C" __attribute__((visibility("default"))) int eVMPEG4EncDrv_EncoderQueryInfo(void) {
    ALOGD("eVMPEG4EncDrv_EncoderQueryInfo() called");
    return 0;
}

/* Demangled: H264_FreeRFSBuffer */
extern "C" __attribute__((visibility("default"))) int H264_FreeRFSBuffer(void) {
    ALOGD("H264_FreeRFSBuffer() called");
    return 0;
}

/* Demangled: h264_enc_set_NonRefP */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_NonRefP(void) {
    ALOGD("h264_enc_set_NonRefP() called");
    return 0;
}

/* Demangled: HEVC_EncHdr_PutBits */
extern "C" __attribute__((visibility("default"))) int HEVC_EncHdr_PutBits(void) {
    ALOGD("HEVC_EncHdr_PutBits() called");
    return 0;
}

/* Demangled: AddSVPInstance */
extern "C" __attribute__((visibility("default"))) int AddSVPInstance(void) {
    ALOGD("AddSVPInstance() called");
    return 0;
}

/* Demangled: h264_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int h264_dec_getParameter(void) {
    ALOGD("h264_dec_getParameter() called");
    return 0;
}

/* Demangled: GetFreeInputBuffer */
extern "C" __attribute__((visibility("default"))) int GetFreeInputBuffer(void) {
    ALOGD("GetFreeInputBuffer() called");
    return 0;
}

/* Exported Object: QUANT8_INTRA_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* QUANT8_INTRA_DEFAULT = NULL;

/* Demangled: VP8_ReadFinishFlag */
extern "C" __attribute__((visibility("default"))) int VP8_ReadFinishFlag(void) {
    ALOGD("VP8_ReadFinishFlag() called");
    return 0;
}

/* Demangled: vp9_dec_decode */
extern "C" __attribute__((visibility("default"))) int vp9_dec_decode(void) {
    ALOGD("vp9_dec_decode() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadUFO */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadUFO(void) {
    ALOGD("VP9_HAL_ReadUFO() called");
    return 0;
}

/* Demangled: vc1_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int vc1_dec_getParameter(void) {
    ALOGD("vc1_dec_getParameter() called");
    return 0;
}

/* Demangled: H265_parseRPS */
extern "C" __attribute__((visibility("default"))) int H265_parseRPS(void) {
    ALOGD("H265_parseRPS() called");
    return 0;
}

/* Demangled: H264_HAL_EnableCRC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_EnableCRC(void) {
    ALOGD("H264_HAL_EnableCRC() called");
    return 0;
}

/* Demangled: MPEG4BufferFlushRange */
extern "C" __attribute__((visibility("default"))) int MPEG4BufferFlushRange(void) {
    ALOGD("MPEG4BufferFlushRange() called");
    return 0;
}

/* Demangled: mpeg4_alloc_working_buf */
extern "C" __attribute__((visibility("default"))) int mpeg4_alloc_working_buf(void) {
    ALOGD("mpeg4_alloc_working_buf() called");
    return 0;
}

/* Exported Object: u4ValLogToFile */
extern "C" __attribute__((visibility("default"))) void* u4ValLogToFile = NULL;

/* Demangled: VP9_Is_Scaled */
extern "C" __attribute__((visibility("default"))) int VP9_Is_Scaled(void) {
    ALOGD("VP9_Is_Scaled() called");
    return 0;
}

/* Exported Object: vp9_mv_class0_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_class0_tree = NULL;

/* Demangled: VP9_HAL_WriteUFO */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteUFO(void) {
    ALOGD("VP9_HAL_WriteUFO() called");
    return 0;
}

/* Demangled: H265_getScalingListDefaultAddress */
extern "C" __attribute__((visibility("default"))) int H265_getScalingListDefaultAddress(void) {
    ALOGD("H265_getScalingListDefaultAddress() called");
    return 0;
}

/* Demangled: HEVC_GetLevel */
extern "C" __attribute__((visibility("default"))) int HEVC_GetLevel(void) {
    ALOGD("HEVC_GetLevel() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: H265_HAL_ReadGCON */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadGCON(void) {
    ALOGD("H265_HAL_ReadGCON() called");
    return 0;
}

/* Demangled: mpeg4_parse_VO */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_VO(void) {
    ALOGD("mpeg4_parse_VO() called");
    return 0;
}

/* Demangled: mpeg2_dec_deInit */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_deInit(void) {
    ALOGD("mpeg2_dec_deInit() called");
    return 0;
}

/* Demangled: VP9_UnLockHW */
extern "C" __attribute__((visibility("default"))) int VP9_UnLockHW(void) {
    ALOGD("VP9_UnLockHW() called");
    return 0;
}

/* Demangled: h264_enc_encode_Pps */
extern "C" __attribute__((visibility("default"))) int h264_enc_encode_Pps(void) {
    ALOGD("h264_enc_encode_Pps() called");
    return 0;
}

/* Demangled: h264_sw_enc_init */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_init(void) {
    ALOGD("h264_sw_enc_init() called");
    return 0;
}

/* Demangled: eVDecDrvDecodeEx */
extern "C" __attribute__((visibility("default"))) int eVDecDrvDecodeEx(void) {
    ALOGD("eVDecDrvDecodeEx() called");
    return 0;
}

/* Demangled: VP9_Set_MVP_Enable */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MVP_Enable(void) {
    ALOGD("VP9_Set_MVP_Enable() called");
    return 0;
}

/* Demangled: H264_AdjustFramerate */
extern "C" __attribute__((visibility("default"))) int H264_AdjustFramerate(void) {
    ALOGD("H264_AdjustFramerate() called");
    return 0;
}

/* Demangled: H265_HAL_ReadCRC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadCRC(void) {
    ALOGD("H265_HAL_ReadCRC() called");
    return 0;
}

/* Demangled: bH265_HAL_IsEndOfBitstreamError */
extern "C" __attribute__((visibility("default"))) int bH265_HAL_IsEndOfBitstreamError(void) {
    ALOGD("bH265_HAL_IsEndOfBitstreamError() called");
    return 0;
}

/* Demangled: vp_mode_risc_settings */
extern "C" __attribute__((visibility("default"))) int vp_mode_risc_settings(void) {
    ALOGD("vp_mode_risc_settings() called");
    return 0;
}

/* Demangled: VP8_ReadGCON */
extern "C" __attribute__((visibility("default"))) int VP8_ReadGCON(void) {
    ALOGD("VP8_ReadGCON() called");
    return 0;
}

/* Exported Object: vp9_partition_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_partition_tree = NULL;

/* Demangled: VP9_HAL_WriteMV */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteMV(void) {
    ALOGD("VP9_HAL_WriteMV() called");
    return 0;
}

/* Demangled: H265_HAL_WriteHEVCVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteHEVCVLD(void) {
    ALOGD("H265_HAL_WriteHEVCVLD() called");
    return 0;
}

/* Exported Object: H265_quantIntraDefault8x8 */
extern "C" __attribute__((visibility("default"))) void* H265_quantIntraDefault8x8 = NULL;

/* Demangled: H264_HAL_ReadVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadVLD(void) {
    ALOGD("H264_HAL_ReadVLD() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcDumpSecMem */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcDumpSecMem = NULL;

/* Demangled: parseSliceHeader */
extern "C" __attribute__((visibility("default"))) int parseSliceHeader(void) {
    ALOGD("parseSliceHeader() called");
    return 0;
}

/* Demangled: H265_destroyROM */
extern "C" __attribute__((visibility("default"))) int H265_destroyROM(void) {
    ALOGD("H265_destroyROM() called");
    return 0;
}

/* Demangled: set_hw_init_reg */
extern "C" __attribute__((visibility("default"))) int set_hw_init_reg(void) {
    ALOGD("set_hw_init_reg() called");
    return 0;
}

/* Demangled: vp8_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int vp8_dec_setParameter(void) {
    ALOGD("vp8_dec_setParameter() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_SetParameter */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_SetParameter(void) {
    ALOGD("Vdec_Drv_VP9_SetParameter() called");
    return 0;
}

/* Demangled: VP9_Adapt_Coef_Probs */
extern "C" __attribute__((visibility("default"))) int VP9_Adapt_Coef_Probs(void) {
    ALOGD("VP9_Adapt_Coef_Probs() called");
    return 0;
}

/* Demangled: H264_HAL_HWLock_Sec */
extern "C" __attribute__((visibility("default"))) int H264_HAL_HWLock_Sec(void) {
    ALOGD("H264_HAL_HWLock_Sec() called");
    return 0;
}

/* Exported Object: QUANT_INTER_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* QUANT_INTER_DEFAULT = NULL;

/* Exported Object: pfnMtkVdecH264SecInit_Ptr */
extern "C" __attribute__((visibility("default"))) void* pfnMtkVdecH264SecInit_Ptr = NULL;

/* Demangled: VP8_SeekProcessing */
extern "C" __attribute__((visibility("default"))) int VP8_SeekProcessing(void) {
    ALOGD("VP8_SeekProcessing() called");
    return 0;
}

/* Demangled: VP9_Set_MC_Set_Scaling_Factor */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_Set_Scaling_Factor(void) {
    ALOGD("VP9_Set_MC_Set_Scaling_Factor() called");
    return 0;
}

/* Demangled: DrvEnablePerfService */
extern "C" __attribute__((visibility("default"))) int DrvEnablePerfService(void) {
    ALOGD("DrvEnablePerfService() called");
    return 0;
}

/* Demangled: H265_GetFrameBufferFromDisp */
extern "C" __attribute__((visibility("default"))) int H265_GetFrameBufferFromDisp(void) {
    ALOGD("H265_GetFrameBufferFromDisp() called");
    return 0;
}

/* Demangled: H265_parseScalingList */
extern "C" __attribute__((visibility("default"))) int H265_parseScalingList(void) {
    ALOGD("H265_parseScalingList() called");
    return 0;
}

/* Demangled: H264PutFrameBufferToDisp */
extern "C" __attribute__((visibility("default"))) int H264PutFrameBufferToDisp(void) {
    ALOGD("H264PutFrameBufferToDisp() called");
    return 0;
}

/* Exported Object: fgAVCBenchmark */
extern "C" __attribute__((visibility("default"))) void* fgAVCBenchmark = NULL;

/* Demangled: VP8_ReadVP8VLD */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVP8VLD(void) {
    ALOGD("VP8_ReadVP8VLD() called");
    return 0;
}

/* Demangled: VP9_UPDATE_MVD_FP_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_MVD_FP_PROBS(void) {
    ALOGD("VP9_UPDATE_MVD_FP_PROBS() called");
    return 0;
}

/* Demangled: H264_EncodeCheckCRC */
extern "C" __attribute__((visibility("default"))) int H264_EncodeCheckCRC(void) {
    ALOGD("H264_EncodeCheckCRC() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_SetMV */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_SetMV(void) {
    ALOGD("H264_EncodeFrameEnc_SetMV() called");
    return 0;
}

/* Demangled: GetDecoderSOPath */
extern "C" __attribute__((visibility("default"))) int GetDecoderSOPath(void) {
    ALOGD("GetDecoderSOPath() called");
    return 0;
}

/* Demangled: H265_handleSPSNALU */
extern "C" __attribute__((visibility("default"))) int H265_handleSPSNALU(void) {
    ALOGD("H265_handleSPSNALU() called");
    return 0;
}

/* Demangled: H265_TestUE */
extern "C" __attribute__((visibility("default"))) int H265_TestUE(void) {
    ALOGD("H265_TestUE() called");
    return 0;
}

/* Demangled: H265_HAL_SetReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetReg(void) {
    ALOGD("H265_HAL_SetReg() called");
    return 0;
}

/* Demangled: mpeg4_parse_VSO */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_VSO(void) {
    ALOGD("mpeg4_parse_VSO() called");
    return 0;
}

/* Demangled: vp9_dec_init_sec */
extern "C" __attribute__((visibility("default"))) int vp9_dec_init_sec(void) {
    ALOGD("vp9_dec_init_sec() called");
    return 0;
}

/* Demangled: VP9_Max_RRF_BLK_Cal */
extern "C" __attribute__((visibility("default"))) int VP9_Max_RRF_BLK_Cal(void) {
    ALOGD("VP9_Max_RRF_BLK_Cal() called");
    return 0;
}

/* Demangled: ParseConfig */
extern "C" __attribute__((visibility("default"))) int ParseConfig(void) {
    ALOGD("ParseConfig() called");
    return 0;
}

/* Demangled: H264_EncodeSPS */
extern "C" __attribute__((visibility("default"))) int H264_EncodeSPS(void) {
    ALOGD("H264_EncodeSPS() called");
    return 0;
}

/* Demangled: h264_enc_init */
extern "C" __attribute__((visibility("default"))) int h264_enc_init(void) {
    ALOGD("h264_enc_init() called");
    return 0;
}

/* Demangled: DrvSetSCNOff */
extern "C" __attribute__((visibility("default"))) int DrvSetSCNOff(void) {
    ALOGD("DrvSetSCNOff() called");
    return 0;
}

/* Demangled: bH265_HAL_IsVDecComplete */
extern "C" __attribute__((visibility("default"))) int bH265_HAL_IsVDecComplete(void) {
    ALOGD("bH265_HAL_IsVDecComplete() called");
    return 0;
}

/* Demangled: H265_PutFrameBufferToDisp */
extern "C" __attribute__((visibility("default"))) int H265_PutFrameBufferToDisp(void) {
    ALOGD("H265_PutFrameBufferToDisp() called");
    return 0;
}

/* Demangled: H264_HAL_InitISR */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitISR(void) {
    ALOGD("H264_HAL_InitISR() called");
    return 0;
}

/* Exported Object: gH264SecVdecTlcLib */
extern "C" __attribute__((visibility("default"))) void* gH264SecVdecTlcLib = NULL;

/* Demangled: VP9_Tile_Set_Row */
extern "C" __attribute__((visibility("default"))) int VP9_Tile_Set_Row(void) {
    ALOGD("VP9_Tile_Set_Row() called");
    return 0;
}

/* Demangled: H264_ResetWorkBuf */
extern "C" __attribute__((visibility("default"))) int H264_ResetWorkBuf(void) {
    ALOGD("H264_ResetWorkBuf() called");
    return 0;
}

/* Demangled: HEVC_FreeWorkBuf */
extern "C" __attribute__((visibility("default"))) int HEVC_FreeWorkBuf(void) {
    ALOGD("HEVC_FreeWorkBuf() called");
    return 0;
}

/* Demangled: EncDrvAddSpecs */
extern "C" __attribute__((visibility("default"))) int EncDrvAddSpecs(void) {
    ALOGD("EncDrvAddSpecs() called");
    return 0;
}

/* Demangled: H265_HAL_SetAUOReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetAUOReg(void) {
    ALOGD("H265_HAL_SetAUOReg() called");
    return 0;
}

/* Exported Object: tvf_start */
extern "C" __attribute__((visibility("default"))) void* tvf_start = NULL;

/* Demangled: H264_SetEncParam */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam(void) {
    ALOGD("H264_SetEncParam() called");
    return 0;
}

/* Demangled: VP8_ParserProc */
extern "C" __attribute__((visibility("default"))) int VP8_ParserProc(void) {
    ALOGD("VP8_ParserProc() called");
    return 0;
}

/* Demangled: HEVC_PerformanceProfiling */
extern "C" __attribute__((visibility("default"))) int HEVC_PerformanceProfiling(void) {
    ALOGD("HEVC_PerformanceProfiling() called");
    return 0;
}

/* Demangled: HEVC_ThroughputSetting */
extern "C" __attribute__((visibility("default"))) int HEVC_ThroughputSetting(void) {
    ALOGD("HEVC_ThroughputSetting() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_decode */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_decode(void) {
    ALOGD("Vdec_Drv_H264_decode() called");
    return 0;
}

/* Demangled: H265_HAL_GetBitStreamFlg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetBitStreamFlg(void) {
    ALOGD("H265_HAL_GetBitStreamFlg() called");
    return 0;
}

/* Demangled: H264_decode */
extern "C" __attribute__((visibility("default"))) int H264_decode(void) {
    ALOGD("H264_decode() called");
    return 0;
}

/* Demangled: h264_dec_set_wptr */
extern "C" __attribute__((visibility("default"))) int h264_dec_set_wptr(void) {
    ALOGD("h264_dec_set_wptr() called");
    return 0;
}

/* Demangled: VP9_UPDATE_COMP_REF_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_COMP_REF_PROBS(void) {
    ALOGD("VP9_UPDATE_COMP_REF_PROBS() called");
    return 0;
}

/* Demangled: VP9_UPDATE_Y_MODE_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_Y_MODE_PROBS(void) {
    ALOGD("VP9_UPDATE_Y_MODE_PROBS() called");
    return 0;
}

/* Demangled: EncH264Frame */
extern "C" __attribute__((visibility("default"))) int EncH264Frame(void) {
    ALOGD("EncH264Frame() called");
    return 0;
}

/* Demangled: copy_sram_buffer */
extern "C" __attribute__((visibility("default"))) int copy_sram_buffer(void) {
    ALOGD("copy_sram_buffer() called");
    return 0;
}

/* Demangled: VP8_LockHW */
extern "C" __attribute__((visibility("default"))) int VP8_LockHW(void) {
    ALOGD("VP8_LockHW() called");
    return 0;
}

/* Demangled: VP8_ReadVLDTOP */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVLDTOP(void) {
    ALOGD("VP8_ReadVLDTOP() called");
    return 0;
}

/* Demangled: h264_enc_set_DetectedFrameRate */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_DetectedFrameRate(void) {
    ALOGD("h264_enc_set_DetectedFrameRate() called");
    return 0;
}

/* Demangled: VP8_GetErrInfo */
extern "C" __attribute__((visibility("default"))) int VP8_GetErrInfo(void) {
    ALOGD("VP8_GetErrInfo() called");
    return 0;
}

/* Demangled: H265_HAL_ResetHW */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ResetHW(void) {
    ALOGD("H265_HAL_ResetHW() called");
    return 0;
}

/* Exported Object: H265_scalingListNum */
extern "C" __attribute__((visibility("default"))) void* H265_scalingListNum = NULL;

/* Demangled: H264_HAL_SetBRefRegforUFO */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetBRefRegforUFO(void) {
    ALOGD("H264_HAL_SetBRefRegforUFO() called");
    return 0;
}

/* Demangled: H264_TrailingBits */
extern "C" __attribute__((visibility("default"))) int H264_TrailingBits(void) {
    ALOGD("H264_TrailingBits() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Decode */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Decode(void) {
    ALOGD("Vdec_Drv_VP9_Decode() called");
    return 0;
}

/* Demangled: GetNextDisplay */
extern "C" __attribute__((visibility("default"))) int GetNextDisplay(void) {
    ALOGD("GetNextDisplay() called");
    return 0;
}

/* Demangled: mpeg4_parse_user_data */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_user_data(void) {
    ALOGD("mpeg4_parse_user_data() called");
    return 0;
}

/* Demangled: eVDecDrvDecode */
extern "C" __attribute__((visibility("default"))) int eVDecDrvDecode(void) {
    ALOGD("eVDecDrvDecode() called");
    return 0;
}

/* Demangled: EncodeOpen */
extern "C" __attribute__((visibility("default"))) int EncodeOpen(void) {
    ALOGD("EncodeOpen() called");
    return 0;
}

/* Demangled: H264_HAL_InitBRefList */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitBRefList(void) {
    ALOGD("H264_HAL_InitBRefList() called");
    return 0;
}

/* Demangled: H264_HAL_Write_VldWPtr */
extern "C" __attribute__((visibility("default"))) int H264_HAL_Write_VldWPtr(void) {
    ALOGD("H264_HAL_Write_VldWPtr() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpOpenBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpOpenBitStreamBuffer(void) {
    ALOGD("H264_DEBUG_DumpOpenBitStreamBuffer() called");
    return 0;
}

/* Demangled: VP9_Read_Tx_Mode */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Tx_Mode(void) {
    ALOGD("VP9_Read_Tx_Mode() called");
    return 0;
}

/* Demangled: DrvEnablePerfService_max_freq */
extern "C" __attribute__((visibility("default"))) int DrvEnablePerfService_max_freq(void) {
    ALOGD("DrvEnablePerfService_max_freq() called");
    return 0;
}

/* Demangled: setBRefPicList */
extern "C" __attribute__((visibility("default"))) int setBRefPicList(void) {
    ALOGD("setBRefPicList() called");
    return 0;
}

/* Demangled: H264_SetEncParam_Special */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam_Special(void) {
    ALOGD("H264_SetEncParam_Special() called");
    return 0;
}

/* Demangled: H264_FrmLvlMMRSetting_EncInfoOthers */
extern "C" __attribute__((visibility("default"))) int H264_FrmLvlMMRSetting_EncInfoOthers(void) {
    ALOGD("H264_FrmLvlMMRSetting_EncInfoOthers() called");
    return 0;
}

/* Demangled: H265_HAL_TriggerVPmode */
extern "C" __attribute__((visibility("default"))) int H265_HAL_TriggerVPmode(void) {
    ALOGD("H265_HAL_TriggerVPmode() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcClose */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcClose = NULL;

/* Demangled: VP9_UPDATE_MVD_INT_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_MVD_INT_PROBS(void) {
    ALOGD("VP9_UPDATE_MVD_INT_PROBS() called");
    return 0;
}

/* Demangled: h264_enc_encode_Frame */
extern "C" __attribute__((visibility("default"))) int h264_enc_encode_Frame(void) {
    ALOGD("h264_enc_encode_Frame() called");
    return 0;
}

/* Demangled: H265_HAL_ReadUFO */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadUFO(void) {
    ALOGD("H265_HAL_ReadUFO() called");
    return 0;
}

/* Demangled: H265_cleanSliceHeader */
extern "C" __attribute__((visibility("default"))) int H265_cleanSliceHeader(void) {
    ALOGD("H265_cleanSliceHeader() called");
    return 0;
}

/* Demangled: h264_enc_set_ConfigQP */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_ConfigQP(void) {
    ALOGD("h264_enc_set_ConfigQP() called");
    return 0;
}

/* Demangled: H265_SetRefPicList */
extern "C" __attribute__((visibility("default"))) int H265_SetRefPicList(void) {
    ALOGD("H265_SetRefPicList() called");
    return 0;
}

/* Demangled: H264SetCurrPOC */
extern "C" __attribute__((visibility("default"))) int H264SetCurrPOC(void) {
    ALOGD("H264SetCurrPOC() called");
    return 0;
}

/* Exported Object: QUANT_INTRA_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* QUANT_INTRA_DEFAULT = NULL;

/* Demangled: find_next_vop */
extern "C" __attribute__((visibility("default"))) int find_next_vop(void) {
    ALOGD("find_next_vop() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteMISC */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteMISC(void) {
    ALOGD("VP9_HAL_WriteMISC() called");
    return 0;
}

/* Demangled: H264_HAL_ReadCRC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadCRC(void) {
    ALOGD("H264_HAL_ReadCRC() called");
    return 0;
}

/* Demangled: H264_HAL_ReadMISC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadMISC(void) {
    ALOGD("H264_HAL_ReadMISC() called");
    return 0;
}

/* Demangled: H264_HAL_SetBRefPicListReg */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetBRefPicListReg(void) {
    ALOGD("H264_HAL_SetBRefPicListReg() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_decode_sec */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_decode_sec(void) {
    ALOGD("Vdec_Drv_H264_decode_sec() called");
    return 0;
}

/* Demangled: VP8_UnLockHW */
extern "C" __attribute__((visibility("default"))) int VP8_UnLockHW(void) {
    ALOGD("VP8_UnLockHW() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Trigger_Dec */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Trigger_Dec(void) {
    ALOGD("Vdec_Drv_VP9_Trigger_Dec() called");
    return 0;
}

/* Demangled: H265_initTilesInfo */
extern "C" __attribute__((visibility("default"))) int H265_initTilesInfo(void) {
    ALOGD("H265_initTilesInfo() called");
    return 0;
}

/* Demangled: H264InitFBufInfo */
extern "C" __attribute__((visibility("default"))) int H264InitFBufInfo(void) {
    ALOGD("H264InitFBufInfo() called");
    return 0;
}

/* Demangled: H264_SetEncParam_Bitrate */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam_Bitrate(void) {
    ALOGD("H264_SetEncParam_Bitrate() called");
    return 0;
}

/* Demangled: H265_HAL_HWUnLock_sec */
extern "C" __attribute__((visibility("default"))) int H265_HAL_HWUnLock_sec(void) {
    ALOGD("H265_HAL_HWUnLock_sec() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_setPara */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_setPara(void) {
    ALOGD("Vdec_Drv_H264_setPara() called");
    return 0;
}

/* Demangled: VP9_Setup_Compound_Ref_Mode */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Compound_Ref_Mode(void) {
    ALOGD("VP9_Setup_Compound_Ref_Mode() called");
    return 0;
}

/* Demangled: h264_sw_enc_get_multislice_enabled */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_get_multislice_enabled(void) {
    ALOGD("h264_sw_enc_get_multislice_enabled() called");
    return 0;
}

/* Demangled: GetYUVBuffer */
extern "C" __attribute__((visibility("default"))) int GetYUVBuffer(void) {
    ALOGD("GetYUVBuffer() called");
    return 0;
}

/* Demangled: H264BufferInvalidateCache */
extern "C" __attribute__((visibility("default"))) int H264BufferInvalidateCache(void) {
    ALOGD("H264BufferInvalidateCache() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_init */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_init(void) {
    ALOGD("Vdec_Drv_H265_init() called");
    return 0;
}

/* Demangled: VP9_Setup_Loop_Filter */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Loop_Filter(void) {
    ALOGD("VP9_Setup_Loop_Filter() called");
    return 0;
}

/* Demangled: mpeg4_enc_init */
extern "C" __attribute__((visibility("default"))) int mpeg4_enc_init(void) {
    ALOGD("mpeg4_enc_init() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: H265_HAL_ReadCheckSum */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadCheckSum(void) {
    ALOGD("H265_HAL_ReadCheckSum() called");
    return 0;
}

/* Demangled: H264_HAL_WriteMC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteMC(void) {
    ALOGD("H264_HAL_WriteMC() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcInit */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcInit = NULL;

/* Demangled: FindNextSync */
extern "C" __attribute__((visibility("default"))) int FindNextSync(void) {
    ALOGD("FindNextSync() called");
    return 0;
}

/* Demangled: MPEG2BufferFlushRange */
extern "C" __attribute__((visibility("default"))) int MPEG2BufferFlushRange(void) {
    ALOGD("MPEG2BufferFlushRange() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcDeinit */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcDeinit = NULL;

/* Demangled: VP9_HAL_ReadSYS */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadSYS(void) {
    ALOGD("VP9_HAL_ReadSYS() called");
    return 0;
}

/* Demangled: VP9_Read_Literal_Raw */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Literal_Raw(void) {
    ALOGD("VP9_Read_Literal_Raw() called");
    return 0;
}

/* Demangled: h264_enc_deInit */
extern "C" __attribute__((visibility("default"))) int h264_enc_deInit(void) {
    ALOGD("h264_enc_deInit() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_ReadResult */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_ReadResult(void) {
    ALOGD("H264_EncodeFrameEnc_ReadResult() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: DrvAddFrameSizes */
extern "C" __attribute__((visibility("default"))) int DrvAddFrameSizes(void) {
    ALOGD("DrvAddFrameSizes() called");
    return 0;
}

/* Demangled: H265_initSigLastScan */
extern "C" __attribute__((visibility("default"))) int H265_initSigLastScan(void) {
    ALOGD("H265_initSigLastScan() called");
    return 0;
}

/* Demangled: H264_HAL_ResetForError */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ResetForError(void) {
    ALOGD("H264_HAL_ResetForError() called");
    return 0;
}

/* Demangled: H264_HAL_UeCodeNum */
extern "C" __attribute__((visibility("default"))) int H264_HAL_UeCodeNum(void) {
    ALOGD("H264_HAL_UeCodeNum() called");
    return 0;
}

/* Exported Object: pfnMtkVdecH264SecDecode_Ptr */
extern "C" __attribute__((visibility("default"))) void* pfnMtkVdecH264SecDecode_Ptr = NULL;

/* Demangled: VP9_HAL_WriteSYS */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteSYS(void) {
    ALOGD("VP9_HAL_WriteSYS() called");
    return 0;
}

/* Demangled: HEVC_GetUVPitchWidthMBCnt */
extern "C" __attribute__((visibility("default"))) int HEVC_GetUVPitchWidthMBCnt(void) {
    ALOGD("HEVC_GetUVPitchWidthMBCnt() called");
    return 0;
}

/* Demangled: H265_initPPS */
extern "C" __attribute__((visibility("default"))) int H265_initPPS(void) {
    ALOGD("H265_initPPS() called");
    return 0;
}

/* Demangled: mpeg2_skip_frame_check */
extern "C" __attribute__((visibility("default"))) int mpeg2_skip_frame_check(void) {
    ALOGD("mpeg2_skip_frame_check() called");
    return 0;
}

/* Exported Object: gVC1_DRV_IF */
extern "C" __attribute__((visibility("default"))) void* gVC1_DRV_IF = NULL;

/* Demangled: h265_dec_decode */
extern "C" __attribute__((visibility("default"))) int h265_dec_decode(void) {
    ALOGD("h265_dec_decode() called");
    return 0;
}

/* Demangled: H265_initSEI */
extern "C" __attribute__((visibility("default"))) int H265_initSEI(void) {
    ALOGD("H265_initSEI() called");
    return 0;
}

/* Demangled: GetEncoderAPI */
extern "C" __attribute__((visibility("default"))) int GetEncoderAPI(void) {
    ALOGD("GetEncoderAPI() called");
    return 0;
}

/* Demangled: eVDecDrvInit */
extern "C" __attribute__((visibility("default"))) int eVDecDrvInit(void) {
    ALOGD("eVDecDrvInit() called");
    return 0;
}

/* Demangled: mpeg4_risc_settings */
extern "C" __attribute__((visibility("default"))) int mpeg4_risc_settings(void) {
    ALOGD("mpeg4_risc_settings() called");
    return 0;
}

/* Demangled: mpeg4_enc_getParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_enc_getParameter(void) {
    ALOGD("mpeg4_enc_getParameter() called");
    return 0;
}

/* Demangled: SetParameter */
extern "C" __attribute__((visibility("default"))) int SetParameter(void) {
    ALOGD("SetParameter() called");
    return 0;
}

/* Demangled: H264AdapRefPicmarkingProce */
extern "C" __attribute__((visibility("default"))) int H264AdapRefPicmarkingProce(void) {
    ALOGD("H264AdapRefPicmarkingProce() called");
    return 0;
}

/* Demangled: destroySPS */
extern "C" __attribute__((visibility("default"))) int destroySPS(void) {
    ALOGD("destroySPS() called");
    return 0;
}

/* Demangled: mpeg4_ext_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_ext_dec_getParameter(void) {
    ALOGD("mpeg4_ext_dec_getParameter() called");
    return 0;
}

/* Demangled: vp9_dec_getParameter_sec */
extern "C" __attribute__((visibility("default"))) int vp9_dec_getParameter_sec(void) {
    ALOGD("vp9_dec_getParameter_sec() called");
    return 0;
}

/* Demangled: VP9_Set_MC_Ref_Pitch */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_Ref_Pitch(void) {
    ALOGD("VP9_Set_MC_Ref_Pitch() called");
    return 0;
}

/* Demangled: VP9_UPDATE_PARTITION_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_PARTITION_PROBS(void) {
    ALOGD("VP9_UPDATE_PARTITION_PROBS() called");
    return 0;
}

/* Demangled: vc1_dec_init */
extern "C" __attribute__((visibility("default"))) int vc1_dec_init(void) {
    ALOGD("vc1_dec_init() called");
    return 0;
}

/* Demangled: H265_GCE_PollReg */
extern "C" __attribute__((visibility("default"))) int H265_GCE_PollReg(void) {
    ALOGD("H265_GCE_PollReg() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_getPara */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_getPara(void) {
    ALOGD("Vdec_Drv_H265_getPara() called");
    return 0;
}

/* Demangled: H265_parseSPS */
extern "C" __attribute__((visibility("default"))) int H265_parseSPS(void) {
    ALOGD("H265_parseSPS() called");
    return 0;
}

/* Demangled: mpeg4_dec_deInit */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_deInit(void) {
    ALOGD("mpeg4_dec_deInit() called");
    return 0;
}

/* Demangled: VP9_Setup_Display_Size */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Display_Size(void) {
    ALOGD("VP9_Setup_Display_Size() called");
    return 0;
}

/* Demangled: FillFrameNumGap */
extern "C" __attribute__((visibility("default"))) int FillFrameNumGap(void) {
    ALOGD("FillFrameNumGap() called");
    return 0;
}

/* Demangled: VP9_Show_Existing_Display_Copy */
extern "C" __attribute__((visibility("default"))) int VP9_Show_Existing_Display_Copy(void) {
    ALOGD("VP9_Show_Existing_Display_Copy() called");
    return 0;
}

/* Demangled: vp9_dec_init */
extern "C" __attribute__((visibility("default"))) int vp9_dec_init(void) {
    ALOGD("vp9_dec_init() called");
    return 0;
}

/* Demangled: VP9_Adapt_Mode_Probs */
extern "C" __attribute__((visibility("default"))) int VP9_Adapt_Mode_Probs(void) {
    ALOGD("VP9_Adapt_Mode_Probs() called");
    return 0;
}

/* Demangled: hevc_enc_deInit */
extern "C" __attribute__((visibility("default"))) int hevc_enc_deInit(void) {
    ALOGD("hevc_enc_deInit() called");
    return 0;
}

/* Demangled: EncodeGenerateHeader */
extern "C" __attribute__((visibility("default"))) int EncodeGenerateHeader(void) {
    ALOGD("EncodeGenerateHeader() called");
    return 0;
}

/* Demangled: H265_HAL_SafeBreak */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SafeBreak(void) {
    ALOGD("H265_HAL_SafeBreak() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_close */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_close(void) {
    ALOGD("Vdec_Drv_H265_close() called");
    return 0;
}

/* Demangled: H264_HAL_ResetHW */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ResetHW(void) {
    ALOGD("H264_HAL_ResetHW() called");
    return 0;
}

/* Exported Object: mDIBypass */
extern "C" __attribute__((visibility("default"))) void* mDIBypass = NULL;

/* Demangled: parseSliceHeaderHW */
extern "C" __attribute__((visibility("default"))) int parseSliceHeaderHW(void) {
    ALOGD("parseSliceHeaderHW() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_WP */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_WP(void) {
    ALOGD("H264_EncodeFrameEnc_WP() called");
    return 0;
}

/* Demangled: vc1_dec_decode */
extern "C" __attribute__((visibility("default"))) int vc1_dec_decode(void) {
    ALOGD("vc1_dec_decode() called");
    return 0;
}

/* Demangled: H265_parseVUI */
extern "C" __attribute__((visibility("default"))) int H265_parseVUI(void) {
    ALOGD("H265_parseVUI() called");
    return 0;
}

/* Exported Object: u4LengthOfNALSize */
extern "C" __attribute__((visibility("default"))) void* u4LengthOfNALSize = NULL;

/* Demangled: VP8_LoadCoefProbs */
extern "C" __attribute__((visibility("default"))) int VP8_LoadCoefProbs(void) {
    ALOGD("VP8_LoadCoefProbs() called");
    return 0;
}

/* Demangled: VP8_UpdateBufStatus */
extern "C" __attribute__((visibility("default"))) int VP8_UpdateBufStatus(void) {
    ALOGD("VP8_UpdateBufStatus() called");
    return 0;
}

/* Demangled: adapt_coef_probs */
extern "C" __attribute__((visibility("default"))) int adapt_coef_probs(void) {
    ALOGD("adapt_coef_probs() called");
    return 0;
}

/* Demangled: HEVC_EncodeFrameEnc_SetBufs */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeFrameEnc_SetBufs(void) {
    ALOGD("HEVC_EncodeFrameEnc_SetBufs() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: tv_start */
extern "C" __attribute__((visibility("default"))) void* tv_start = NULL;

/* Demangled: H264_EncodeFrameStart */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameStart(void) {
    ALOGD("H264_EncodeFrameStart() called");
    return 0;
}

/* Demangled: HEVC_SetEncParam */
extern "C" __attribute__((visibility("default"))) int HEVC_SetEncParam(void) {
    ALOGD("HEVC_SetEncParam() called");
    return 0;
}

/* Demangled: eVEncDrv__VdoMemAllocAligned_C */
extern "C" __attribute__((visibility("default"))) int eVEncDrv__VdoMemAllocAligned_C(void) {
    ALOGD("eVEncDrv__VdoMemAllocAligned_C() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_getDisplay */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_getDisplay(void) {
    ALOGD("Vdec_Drv_H264_getDisplay() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcDecode */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcDecode = NULL;

/* Demangled: RBSPGetBits */
extern "C" __attribute__((visibility("default"))) int RBSPGetBits(void) {
    ALOGD("RBSPGetBits() called");
    return 0;
}

/* Demangled: VP9_Set_MC_Set_UMV */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_Set_UMV(void) {
    ALOGD("VP9_Set_MC_Set_UMV() called");
    return 0;
}

/* Demangled: h264_enc_setParameter */
extern "C" __attribute__((visibility("default"))) int h264_enc_setParameter(void) {
    ALOGD("h264_enc_setParameter() called");
    return 0;
}

/* Demangled: H265_HAL_ReadMISC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadMISC(void) {
    ALOGD("H265_HAL_ReadMISC() called");
    return 0;
}

/* Demangled: H265_RBSPGetBits */
extern "C" __attribute__((visibility("default"))) int H265_RBSPGetBits(void) {
    ALOGD("H265_RBSPGetBits() called");
    return 0;
}

/* Demangled: H264_HAL_ReadUFO */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadUFO(void) {
    ALOGD("H264_HAL_ReadUFO() called");
    return 0;
}

/* Demangled: clip_prob */
extern "C" __attribute__((visibility("default"))) int clip_prob(void) {
    ALOGD("clip_prob() called");
    return 0;
}

/* Demangled: H264_EncodeFrame */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrame(void) {
    ALOGD("H264_EncodeFrame() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Exported Object: gH264_DRV_IF */
extern "C" __attribute__((visibility("default"))) void* gH264_DRV_IF = NULL;

/* Demangled: H265_CompHDRStaticMetadata */
extern "C" __attribute__((visibility("default"))) int H265_CompHDRStaticMetadata(void) {
    ALOGD("H265_CompHDRStaticMetadata() called");
    return 0;
}

/* Demangled: mpeg2_dec_decode */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_decode(void) {
    ALOGD("mpeg2_dec_decode() called");
    return 0;
}

/* Demangled: VP9_Set_Tile_Info */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Tile_Info(void) {
    ALOGD("VP9_Set_Tile_Info() called");
    return 0;
}

/* Demangled: h264_enc_putbits */
extern "C" __attribute__((visibility("default"))) int h264_enc_putbits(void) {
    ALOGD("h264_enc_putbits() called");
    return 0;
}

/* Demangled: H265_HAL_GetBitStreamShift */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetBitStreamShift(void) {
    ALOGD("H265_HAL_GetBitStreamShift() called");
    return 0;
}

/* Demangled: H264_HAL_GetStartCode_8530 */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetStartCode_8530(void) {
    ALOGD("H264_HAL_GetStartCode_8530() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Sequence_Header */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Sequence_Header(void) {
    ALOGD("MPEG2_Parse_Sequence_Header() called");
    return 0;
}

/* Demangled: VP8_ReadMISC */
extern "C" __attribute__((visibility("default"))) int VP8_ReadMISC(void) {
    ALOGD("VP8_ReadMISC() called");
    return 0;
}

/* Exported Object: ucHEVCRCPUCode_20181107 */
extern "C" __attribute__((visibility("default"))) void* ucHEVCRCPUCode_20181107 = NULL;

/* Demangled: H265_GCE_ReadReg */
extern "C" __attribute__((visibility("default"))) int H265_GCE_ReadReg(void) {
    ALOGD("H265_GCE_ReadReg() called");
    return 0;
}

/* Demangled: H265_HAL_ESL_Setting */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ESL_Setting(void) {
    ALOGD("H265_HAL_ESL_Setting() called");
    return 0;
}

/* Demangled: H265_HAL_WriteMISC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteMISC(void) {
    ALOGD("H265_HAL_WriteMISC() called");
    return 0;
}

/* Demangled: H264_HAL_GetErrMsg */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetErrMsg(void) {
    ALOGD("H264_HAL_GetErrMsg() called");
    return 0;
}

/* Demangled: H265_DEBUG_DumpErrorBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H265_DEBUG_DumpErrorBitStreamBuffer(void) {
    ALOGD("H265_DEBUG_DumpErrorBitStreamBuffer() called");
    return 0;
}

/* Demangled: H264_HAL_ReadFinishFlag */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadFinishFlag(void) {
    ALOGD("H264_HAL_ReadFinishFlag() called");
    return 0;
}

/* Demangled: bIsH264VDecComplete */
extern "C" __attribute__((visibility("default"))) int bIsH264VDecComplete(void) {
    ALOGD("bIsH264VDecComplete() called");
    return 0;
}

/* Demangled: H264_set_NonRefP_chipDependCheck */
extern "C" __attribute__((visibility("default"))) int H264_set_NonRefP_chipDependCheck(void) {
    ALOGD("H264_set_NonRefP_chipDependCheck() called");
    return 0;
}

/* Demangled: HEVC_FrmLvlMMRSetting */
extern "C" __attribute__((visibility("default"))) int HEVC_FrmLvlMMRSetting(void) {
    ALOGD("HEVC_FrmLvlMMRSetting() called");
    return 0;
}

/* Demangled: DecodeOneUnit */
extern "C" __attribute__((visibility("default"))) int DecodeOneUnit(void) {
    ALOGD("DecodeOneUnit() called");
    return 0;
}

/* Demangled: eVEncDrvQueryCapability */
extern "C" __attribute__((visibility("default"))) int eVEncDrvQueryCapability(void) {
    ALOGD("eVEncDrvQueryCapability() called");
    return 0;
}

/* Demangled: DrvLockPutListCB */
extern "C" __attribute__((visibility("default"))) int DrvLockPutListCB(void) {
    ALOGD("DrvLockPutListCB() called");
    return 0;
}

/* Demangled: RBSPGetBitOffset */
extern "C" __attribute__((visibility("default"))) int RBSPGetBitOffset(void) {
    ALOGD("RBSPGetBitOffset() called");
    return 0;
}

/* Demangled: VP8_InitProc */
extern "C" __attribute__((visibility("default"))) int VP8_InitProc(void) {
    ALOGD("VP8_InitProc() called");
    return 0;
}

/* Demangled: H264_IsANRPRefine */
extern "C" __attribute__((visibility("default"))) int H264_IsANRPRefine(void) {
    ALOGD("H264_IsANRPRefine() called");
    return 0;
}

/* Demangled: H265_parsePTL */
extern "C" __attribute__((visibility("default"))) int H265_parsePTL(void) {
    ALOGD("H265_parsePTL() called");
    return 0;
}

/* Demangled: bIsNonRefFbuf */
extern "C" __attribute__((visibility("default"))) int bIsNonRefFbuf(void) {
    ALOGD("bIsNonRefFbuf() called");
    return 0;
}

/* Demangled: h264_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int h264_dec_getFreeBuffer(void) {
    ALOGD("h264_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Ext_Data */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Ext_Data(void) {
    ALOGD("MPEG2_Parse_Ext_Data() called");
    return 0;
}

/* Exported Object: gVP9SecVdecTlcLib */
extern "C" __attribute__((visibility("default"))) void* gVP9SecVdecTlcLib = NULL;

/* Demangled: h264_enc_init_common */
extern "C" __attribute__((visibility("default"))) int h264_enc_init_common(void) {
    ALOGD("h264_enc_init_common() called");
    return 0;
}

/* Demangled: H265_HAL_SetHEIFECModeReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetHEIFECModeReg(void) {
    ALOGD("H265_HAL_SetHEIFECModeReg() called");
    return 0;
}

/* Demangled: get_toggle_property */
extern "C" __attribute__((visibility("default"))) int get_toggle_property(void) {
    ALOGD("get_toggle_property() called");
    return 0;
}

/* Exported Object: u4ValLogLevel */
extern "C" __attribute__((visibility("default"))) void* u4ValLogLevel = NULL;

/* Demangled: VP9_UnCompressed_Header_Parse */
extern "C" __attribute__((visibility("default"))) int VP9_UnCompressed_Header_Parse(void) {
    ALOGD("VP9_UnCompressed_Header_Parse() called");
    return 0;
}

/* Demangled: HEVC_EncodeVPS */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeVPS(void) {
    ALOGD("HEVC_EncodeVPS() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: MPEG2_Parse_GOP_Header */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_GOP_Header(void) {
    ALOGD("MPEG2_Parse_GOP_Header() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Quant_Matrix_Ext */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Quant_Matrix_Ext(void) {
    ALOGD("MPEG2_Parse_Quant_Matrix_Ext() called");
    return 0;
}

/* Demangled: VP8_ReadVP8MC */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVP8MC(void) {
    ALOGD("VP8_ReadVP8MC() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_WaitHW */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_WaitHW(void) {
    ALOGD("H264_EncodeFrameEnc_WaitHW() called");
    return 0;
}

/* Demangled: H265_FindNextSync */
extern "C" __attribute__((visibility("default"))) int H265_FindNextSync(void) {
    ALOGD("H265_FindNextSync() called");
    return 0;
}

/* Demangled: H265_destroyRBSPBitStream */
extern "C" __attribute__((visibility("default"))) int H265_destroyRBSPBitStream(void) {
    ALOGD("H265_destroyRBSPBitStream() called");
    return 0;
}

/* Demangled: H264_HAL_HWLock */
extern "C" __attribute__((visibility("default"))) int H264_HAL_HWLock(void) {
    ALOGD("H264_HAL_HWLock() called");
    return 0;
}

/* Demangled: initRBSPBitStream */
extern "C" __attribute__((visibility("default"))) int initRBSPBitStream(void) {
    ALOGD("initRBSPBitStream() called");
    return 0;
}

/* Demangled: VP8_ReadVLD */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVLD(void) {
    ALOGD("VP8_ReadVLD() called");
    return 0;
}

/* Demangled: VP8_WriteVP8VLD */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVP8VLD(void) {
    ALOGD("VP8_WriteVP8VLD() called");
    return 0;
}

/* Demangled: vp9_dec_deInit_sec */
extern "C" __attribute__((visibility("default"))) int vp9_dec_deInit_sec(void) {
    ALOGD("vp9_dec_deInit_sec() called");
    return 0;
}

/* Demangled: QueryCapability */
extern "C" __attribute__((visibility("default"))) int QueryCapability(void) {
    ALOGD("QueryCapability() called");
    return 0;
}

/* Demangled: H264GetFrameBufferFromFree */
extern "C" __attribute__((visibility("default"))) int H264GetFrameBufferFromFree(void) {
    ALOGD("H264GetFrameBufferFromFree() called");
    return 0;
}

/* Demangled: VP8_InitBarrelShifter */
extern "C" __attribute__((visibility("default"))) int VP8_InitBarrelShifter(void) {
    ALOGD("VP8_InitBarrelShifter() called");
    return 0;
}

/* Exported Object: vp9_mv_class_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_class_tree = NULL;

/* Exported Object: pf_Profiling */
extern "C" __attribute__((visibility("default"))) void* pf_Profiling = NULL;

/* Demangled: VP9_Segfeature_Active */
extern "C" __attribute__((visibility("default"))) int VP9_Segfeature_Active(void) {
    ALOGD("VP9_Segfeature_Active() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Init */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Init(void) {
    ALOGD("Vdec_Drv_VP9_Init() called");
    return 0;
}

/* Exported Object: vp9_mv_joint_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_joint_tree = NULL;

/* Demangled: H264_GetProfile */
extern "C" __attribute__((visibility("default"))) int H264_GetProfile(void) {
    ALOGD("H264_GetProfile() called");
    return 0;
}

/* Demangled: ReturnBitstream */
extern "C" __attribute__((visibility("default"))) int ReturnBitstream(void) {
    ALOGD("ReturnBitstream() called");
    return 0;
}

/* Demangled: H265_GCE_WaitEvent */
extern "C" __attribute__((visibility("default"))) int H265_GCE_WaitEvent(void) {
    ALOGD("H265_GCE_WaitEvent() called");
    return 0;
}

/* Demangled: H265_HAL_SetPPSHEVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetPPSHEVLD(void) {
    ALOGD("H265_HAL_SetPPSHEVLD() called");
    return 0;
}

/* Demangled: H264_HAL_SetPPSAVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetPPSAVLD(void) {
    ALOGD("H264_HAL_SetPPSAVLD() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_SetBufs */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_SetBufs(void) {
    ALOGD("H264_EncodeFrameEnc_SetBufs() called");
    return 0;
}

/* Demangled: U32_AT */
extern "C" __attribute__((visibility("default"))) int U32_AT(void) {
    ALOGD("U32_AT() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpBitStreamBuffer(void) {
    ALOGD("H264_DEBUG_DumpBitStreamBuffer() called");
    return 0;
}

/* Demangled: getDpbSize */
extern "C" __attribute__((visibility("default"))) int getDpbSize(void) {
    ALOGD("getDpbSize() called");
    return 0;
}

/* Demangled: mp4_util_log2ceil */
extern "C" __attribute__((visibility("default"))) int mp4_util_log2ceil(void) {
    ALOGD("mp4_util_log2ceil() called");
    return 0;
}

/* Demangled: vp8_dec_init */
extern "C" __attribute__((visibility("default"))) int vp8_dec_init(void) {
    ALOGD("vp8_dec_init() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcHandleCreate */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcHandleCreate = NULL;

/* Demangled: RefFreeYUVBuffer */
extern "C" __attribute__((visibility("default"))) int RefFreeYUVBuffer(void) {
    ALOGD("RefFreeYUVBuffer() called");
    return 0;
}

/* Demangled: VP8_WriteVLDTOP */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVLDTOP(void) {
    ALOGD("VP8_WriteVLDTOP() called");
    return 0;
}

/* Demangled: weighted_prob */
extern "C" __attribute__((visibility("default"))) int weighted_prob(void) {
    ALOGD("weighted_prob() called");
    return 0;
}

/* Demangled: HEVC_EncodeVPS_HW */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeVPS_HW(void) {
    ALOGD("HEVC_EncodeVPS_HW() called");
    return 0;
}

/* Demangled: eVEncDrvCreate */
extern "C" __attribute__((visibility("default"))) int eVEncDrvCreate(void) {
    ALOGD("eVEncDrvCreate() called");
    return 0;
}

/* Demangled: Paused */
extern "C" __attribute__((visibility("default"))) int Paused(void) {
    ALOGD("Paused() called");
    return 0;
}

/* Exported Object: fpLog */
extern "C" __attribute__((visibility("default"))) void* fpLog = NULL;

/* Demangled: VP9_AC_Quant */
extern "C" __attribute__((visibility("default"))) int VP9_AC_Quant(void) {
    ALOGD("VP9_AC_Quant() called");
    return 0;
}

/* Demangled: VP8_FrmBufUseListToFrmBufFreeList */
extern "C" __attribute__((visibility("default"))) int VP8_FrmBufUseListToFrmBufFreeList(void) {
    ALOGD("VP8_FrmBufUseListToFrmBufFreeList() called");
    return 0;
}

/* Demangled: VP9_Set_UnCompressed */
extern "C" __attribute__((visibility("default"))) int VP9_Set_UnCompressed(void) {
    ALOGD("VP9_Set_UnCompressed() called");
    return 0;
}

/* Demangled: VP9_UPDATE_INTER_MODE_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_INTER_MODE_PROBS(void) {
    ALOGD("VP9_UPDATE_INTER_MODE_PROBS() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpSecureFrameBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpSecureFrameBuffer(void) {
    ALOGD("H264_DEBUG_DumpSecureFrameBuffer() called");
    return 0;
}

/* Demangled: initPPS */
extern "C" __attribute__((visibility("default"))) int initPPS(void) {
    ALOGD("initPPS() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_FreeBuf */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_FreeBuf(void) {
    ALOGD("Vdec_Drv_VP9_FreeBuf() called");
    return 0;
}

/* Demangled: eVMPEG4EncDrv__VdoMemAllocAligned_C */
extern "C" __attribute__((visibility("default"))) int eVMPEG4EncDrv__VdoMemAllocAligned_C(void) {
    ALOGD("eVMPEG4EncDrv__VdoMemAllocAligned_C() called");
    return 0;
}

/* Demangled: H264_WP_Stage2 */
extern "C" __attribute__((visibility("default"))) int H264_WP_Stage2(void) {
    ALOGD("H264_WP_Stage2() called");
    return 0;
}

/* Demangled: h264_sw_enc_setParameter */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_setParameter(void) {
    ALOGD("h264_sw_enc_setParameter() called");
    return 0;
}

/* Exported Object: fpLogfileCore */
extern "C" __attribute__((visibility("default"))) void* fpLogfileCore = NULL;

/* Demangled: initSEI */
extern "C" __attribute__((visibility("default"))) int initSEI(void) {
    ALOGD("initSEI() called");
    return 0;
}

/* Demangled: H264_WP_Stage3 */
extern "C" __attribute__((visibility("default"))) int H264_WP_Stage3(void) {
    ALOGD("H264_WP_Stage3() called");
    return 0;
}

/* Demangled: H265_initROM */
extern "C" __attribute__((visibility("default"))) int H265_initROM(void) {
    ALOGD("H265_initROM() called");
    return 0;
}

/* Demangled: HEVC_AllocWorkBuf */
extern "C" __attribute__((visibility("default"))) int HEVC_AllocWorkBuf(void) {
    ALOGD("HEVC_AllocWorkBuf() called");
    return 0;
}

/* Demangled: HEVC_UpdateViLTEBitrate */
extern "C" __attribute__((visibility("default"))) int HEVC_UpdateViLTEBitrate(void) {
    ALOGD("HEVC_UpdateViLTEBitrate() called");
    return 0;
}

/* Demangled: HEVC_SeqLvlMMRSetting */
extern "C" __attribute__((visibility("default"))) int HEVC_SeqLvlMMRSetting(void) {
    ALOGD("HEVC_SeqLvlMMRSetting() called");
    return 0;
}

/* Demangled: H265_PutFrameBufferToAvailable */
extern "C" __attribute__((visibility("default"))) int H265_PutFrameBufferToAvailable(void) {
    ALOGD("H265_PutFrameBufferToAvailable() called");
    return 0;
}

/* Demangled: H264_HAL_DecPicComplete */
extern "C" __attribute__((visibility("default"))) int H264_HAL_DecPicComplete(void) {
    ALOGD("H264_HAL_DecPicComplete() called");
    return 0;
}

/* Demangled: H264_HAL_PredWeightTable */
extern "C" __attribute__((visibility("default"))) int H264_HAL_PredWeightTable(void) {
    ALOGD("H264_HAL_PredWeightTable() called");
    return 0;
}

/* Exported Object: InputBuffSize */
extern "C" __attribute__((visibility("default"))) void* InputBuffSize = NULL;

/* Demangled: VP9_Set_Probs_Table */
extern "C" __attribute__((visibility("default"))) int VP9_Set_Probs_Table(void) {
    ALOGD("VP9_Set_Probs_Table() called");
    return 0;
}

/* Demangled: H264_HAL_InitH264BarrelShift */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitH264BarrelShift(void) {
    ALOGD("H264_HAL_InitH264BarrelShift() called");
    return 0;
}

/* Demangled: AllocateFBuf */
extern "C" __attribute__((visibility("default"))) int AllocateFBuf(void) {
    ALOGD("AllocateFBuf() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_set_bs_Wptr */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_set_bs_Wptr(void) {
    ALOGD("Vdec_Drv_H264_set_bs_Wptr() called");
    return 0;
}

/* Demangled: VP9_HAL_GetPDNSetting */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_GetPDNSetting(void) {
    ALOGD("VP9_HAL_GetPDNSetting() called");
    return 0;
}

/* Demangled: vp8_dec_deInit */
extern "C" __attribute__((visibility("default"))) int vp8_dec_deInit(void) {
    ALOGD("vp8_dec_deInit() called");
    return 0;
}

/* Demangled: VP9_Read_Bitdepth_Colorspace_Sampling */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Bitdepth_Colorspace_Sampling(void) {
    ALOGD("VP9_Read_Bitdepth_Colorspace_Sampling() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteVP9VLD */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteVP9VLD(void) {
    ALOGD("VP9_HAL_WriteVP9VLD() called");
    return 0;
}

/* Demangled: VP9_Set_MC_MI_COLS_ROWS */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_MI_COLS_ROWS(void) {
    ALOGD("VP9_Set_MC_MI_COLS_ROWS() called");
    return 0;
}

/* Demangled: H264_AllocWorkBuf */
extern "C" __attribute__((visibility("default"))) int H264_AllocWorkBuf(void) {
    ALOGD("H264_AllocWorkBuf() called");
    return 0;
}

/* Demangled: H264_HAL_PowerOff */
extern "C" __attribute__((visibility("default"))) int H264_HAL_PowerOff(void) {
    ALOGD("H264_HAL_PowerOff() called");
    return 0;
}

/* Demangled: VP8_RemoveFromFrmBufUseList */
extern "C" __attribute__((visibility("default"))) int VP8_RemoveFromFrmBufUseList(void) {
    ALOGD("VP8_RemoveFromFrmBufUseList() called");
    return 0;
}

/* Demangled: VP9_Get_Msb */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Msb(void) {
    ALOGD("VP9_Get_Msb() called");
    return 0;
}

/* Exported Object: H265_Golomb_Test_String */
extern "C" __attribute__((visibility("default"))) void* H265_Golomb_Test_String = NULL;

/* Demangled: VP8_DecEnd */
extern "C" __attribute__((visibility("default"))) int VP8_DecEnd(void) {
    ALOGD("VP8_DecEnd() called");
    return 0;
}

/* Demangled: VP8_ReadVP8MV */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVP8MV(void) {
    ALOGD("VP8_ReadVP8MV() called");
    return 0;
}

/* Demangled: vp9_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int vp9_dec_getParameter(void) {
    ALOGD("vp9_dec_getParameter() called");
    return 0;
}

/* Demangled: vp9_dec_setParameter_sec */
extern "C" __attribute__((visibility("default"))) int vp9_dec_setParameter_sec(void) {
    ALOGD("vp9_dec_setParameter_sec() called");
    return 0;
}

/* Demangled: h264_enc_set_Scenario */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_Scenario(void) {
    ALOGD("h264_enc_set_Scenario() called");
    return 0;
}

/* Demangled: HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch */
extern "C" __attribute__((visibility("default"))) int HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch(void) {
    ALOGD("HEVC_SeqLvlMMRSetting_Count3PlaneUVPitch() called");
    return 0;
}

/* Demangled: H264UpdateViLTEBitrate */
extern "C" __attribute__((visibility("default"))) int H264UpdateViLTEBitrate(void) {
    ALOGD("H264UpdateViLTEBitrate() called");
    return 0;
}

/* Demangled: findMCfromPP */
extern "C" __attribute__((visibility("default"))) int findMCfromPP(void) {
    ALOGD("findMCfromPP() called");
    return 0;
}

/* Demangled: HEVC_EncodeFrame */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeFrame(void) {
    ALOGD("HEVC_EncodeFrame() called");
    return 0;
}

/* Demangled: H264_HAL_ReadSYS */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadSYS(void) {
    ALOGD("H264_HAL_ReadSYS() called");
    return 0;
}

/* Demangled: H264_HAL_WriteVLDTOP */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteVLDTOP(void) {
    ALOGD("H264_HAL_WriteVLDTOP() called");
    return 0;
}

/* Demangled: vp8_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int vp8_dec_getDisplayBuffer(void) {
    ALOGD("vp8_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_GetFreeBuffer */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_GetFreeBuffer(void) {
    ALOGD("Vdec_Drv_VP9_GetFreeBuffer() called");
    return 0;
}

/* Demangled: VP9_Read_Frame_Reference_Mode */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Frame_Reference_Mode(void) {
    ALOGD("VP9_Read_Frame_Reference_Mode() called");
    return 0;
}

/* Demangled: VP9_Setup_Frame_Size */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Frame_Size(void) {
    ALOGD("VP9_Setup_Frame_Size() called");
    return 0;
}

/* Demangled: H265_DEBUG_DumpSecureFrameBuffer */
extern "C" __attribute__((visibility("default"))) int H265_DEBUG_DumpSecureFrameBuffer(void) {
    ALOGD("H265_DEBUG_DumpSecureFrameBuffer() called");
    return 0;
}

/* Demangled: H264_HAL_PowerDown */
extern "C" __attribute__((visibility("default"))) int H264_HAL_PowerDown(void) {
    ALOGD("H264_HAL_PowerDown() called");
    return 0;
}

/* Demangled: H264_DoANRPRefine */
extern "C" __attribute__((visibility("default"))) int H264_DoANRPRefine(void) {
    ALOGD("H264_DoANRPRefine() called");
    return 0;
}

/* Exported Object: ucHEVCRCPUCode_20170721_ViLTE */
extern "C" __attribute__((visibility("default"))) void* ucHEVCRCPUCode_20170721_ViLTE = NULL;

/* Demangled: HEVC_EncodeSEI_HDRStatic_part1 */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeSEI_HDRStatic_part1(void) {
    ALOGD("HEVC_EncodeSEI_HDRStatic_part1() called");
    return 0;
}

/* Demangled: eVDecDrvCreate */
extern "C" __attribute__((visibility("default"))) int eVDecDrvCreate(void) {
    ALOGD("eVDecDrvCreate() called");
    return 0;
}

/* Demangled: H265_GCE_GetDebugReg */
extern "C" __attribute__((visibility("default"))) int H265_GCE_GetDebugReg(void) {
    ALOGD("H265_GCE_GetDebugReg() called");
    return 0;
}

/* Demangled: H265_HAL_WriteVLDTOP */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteVLDTOP(void) {
    ALOGD("H265_HAL_WriteVLDTOP() called");
    return 0;
}

/* Demangled: H264_HAL_SetPOC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetPOC(void) {
    ALOGD("H264_HAL_SetPOC() called");
    return 0;
}

/* Demangled: h264_dec_decodeEx */
extern "C" __attribute__((visibility("default"))) int h264_dec_decodeEx(void) {
    ALOGD("h264_dec_decodeEx() called");
    return 0;
}

/* Demangled: HEVC_EncodeSEI_HDRStatic_part2 */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeSEI_HDRStatic_part2(void) {
    ALOGD("HEVC_EncodeSEI_HDRStatic_part2() called");
    return 0;
}

/* Demangled: H264_HAL_ReadPP */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadPP(void) {
    ALOGD("H264_HAL_ReadPP() called");
    return 0;
}

/* Demangled: vp9_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int vp9_dec_getDisplayBuffer(void) {
    ALOGD("vp9_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: HEVC_CheckSupportNonRefP */
extern "C" __attribute__((visibility("default"))) int HEVC_CheckSupportNonRefP(void) {
    ALOGD("HEVC_CheckSupportNonRefP() called");
    return 0;
}

/* Demangled: mpeg2_risc_settings */
extern "C" __attribute__((visibility("default"))) int mpeg2_risc_settings(void) {
    ALOGD("mpeg2_risc_settings() called");
    return 0;
}

/* Demangled: VP8_WriteVP8PP */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVP8PP(void) {
    ALOGD("VP8_WriteVP8PP() called");
    return 0;
}

/* Demangled: HEVC_ResetVENC */
extern "C" __attribute__((visibility("default"))) int HEVC_ResetVENC(void) {
    ALOGD("HEVC_ResetVENC() called");
    return 0;
}

/* Exported Object: tvf_end */
extern "C" __attribute__((visibility("default"))) void* tvf_end = NULL;

/* Demangled: H265DecEndProc */
extern "C" __attribute__((visibility("default"))) int H265DecEndProc(void) {
    ALOGD("H265DecEndProc() called");
    return 0;
}

/* Demangled: mpeg4_dec_decode */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_decode(void) {
    ALOGD("mpeg4_dec_decode() called");
    return 0;
}

/* Demangled: VP8_AddToFrmBufUseList */
extern "C" __attribute__((visibility("default"))) int VP8_AddToFrmBufUseList(void) {
    ALOGD("VP8_AddToFrmBufUseList() called");
    return 0;
}

/* Demangled: VP9_Get_Bits_Count */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Bits_Count(void) {
    ALOGD("VP9_Get_Bits_Count() called");
    return 0;
}

/* Exported Object: ucH264RCPUCode_LowPower */
extern "C" __attribute__((visibility("default"))) void* ucH264RCPUCode_LowPower = NULL;

/* Demangled: H264_SetEncParam_Basic */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam_Basic(void) {
    ALOGD("H264_SetEncParam_Basic() called");
    return 0;
}

/* Demangled: H264GetPicRefType */
extern "C" __attribute__((visibility("default"))) int H264GetPicRefType(void) {
    ALOGD("H264GetPicRefType() called");
    return 0;
}

/* Demangled: VP8_ReadVP8VLD2 */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVP8VLD2(void) {
    ALOGD("VP8_ReadVP8VLD2() called");
    return 0;
}

/* Demangled: H265_destroySPS */
extern "C" __attribute__((visibility("default"))) int H265_destroySPS(void) {
    ALOGD("H265_destroySPS() called");
    return 0;
}

/* Demangled: LoadQuantizerMatrix */
extern "C" __attribute__((visibility("default"))) int LoadQuantizerMatrix(void) {
    ALOGD("LoadQuantizerMatrix() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcInit */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcInit = NULL;

/* Demangled: VP9_Get_Segdata */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Segdata(void) {
    ALOGD("VP9_Get_Segdata() called");
    return 0;
}

/* Demangled: H264_SearchReference */
extern "C" __attribute__((visibility("default"))) int H264_SearchReference(void) {
    ALOGD("H264_SearchReference() called");
    return 0;
}

/* Demangled: H264_SetArgb */
extern "C" __attribute__((visibility("default"))) int H264_SetArgb(void) {
    ALOGD("H264_SetArgb() called");
    return 0;
}

/* Demangled: H265_destroySliceHeader */
extern "C" __attribute__((visibility("default"))) int H265_destroySliceHeader(void) {
    ALOGD("H265_destroySliceHeader() called");
    return 0;
}

/* Demangled: HEVC_SetMaxQP */
extern "C" __attribute__((visibility("default"))) int HEVC_SetMaxQP(void) {
    ALOGD("HEVC_SetMaxQP() called");
    return 0;
}

/* Demangled: H264_HAL_ReadCheckSum */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadCheckSum(void) {
    ALOGD("H264_HAL_ReadCheckSum() called");
    return 0;
}

/* Demangled: H264DecEndProc */
extern "C" __attribute__((visibility("default"))) int H264DecEndProc(void) {
    ALOGD("H264DecEndProc() called");
    return 0;
}

/* Demangled: findPPfromMC */
extern "C" __attribute__((visibility("default"))) int findPPfromMC(void) {
    ALOGD("findPPfromMC() called");
    return 0;
}

/* Demangled: mpeg2_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_setParameter(void) {
    ALOGD("mpeg2_dec_setParameter() called");
    return 0;
}

/* Demangled: VP8_WriteVLD */
extern "C" __attribute__((visibility("default"))) int VP8_WriteVLD(void) {
    ALOGD("VP8_WriteVLD() called");
    return 0;
}

/* Exported Object: latTid */
extern "C" __attribute__((visibility("default"))) void* latTid = NULL;

/* Demangled: h265_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int h265_dec_setParameter(void) {
    ALOGD("h265_dec_setParameter() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_getPara */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_getPara(void) {
    ALOGD("Vdec_Drv_H264_getPara() called");
    return 0;
}

/* Demangled: h264_enc_set_PrependHeader */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_PrependHeader(void) {
    ALOGD("h264_enc_set_PrependHeader() called");
    return 0;
}

/* Demangled: H265_HAL_WritePP */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WritePP(void) {
    ALOGD("H265_HAL_WritePP() called");
    return 0;
}

/* Demangled: h264_dec_deInit_sec */
extern "C" __attribute__((visibility("default"))) int h264_dec_deInit_sec(void) {
    ALOGD("h264_dec_deInit_sec() called");
    return 0;
}

/* Demangled: VP9_UPDATE_INTRA_INTER_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_INTRA_INTER_PROBS(void) {
    ALOGD("VP9_UPDATE_INTRA_INTER_PROBS() called");
    return 0;
}

/* Demangled: H264_AllocateRFSBuffer */
extern "C" __attribute__((visibility("default"))) int H264_AllocateRFSBuffer(void) {
    ALOGD("H264_AllocateRFSBuffer() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_getSeqInfo */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_getSeqInfo(void) {
    ALOGD("Vdec_Drv_H265_getSeqInfo() called");
    return 0;
}

/* Exported Object: H265_scalingListSize */
extern "C" __attribute__((visibility("default"))) void* H265_scalingListSize = NULL;

/* Demangled: Vdec_Drv_H264_init */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_init(void) {
    ALOGD("Vdec_Drv_H264_init() called");
    return 0;
}

/* Exported Object: ZZ_SCAN8 */
extern "C" __attribute__((visibility("default"))) void* ZZ_SCAN8 = NULL;

/* Demangled: HEVC_GetProfile */
extern "C" __attribute__((visibility("default"))) int HEVC_GetProfile(void) {
    ALOGD("HEVC_GetProfile() called");
    return 0;
}

/* Demangled: DeInit */
extern "C" __attribute__((visibility("default"))) int DeInit(void) {
    ALOGD("DeInit() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_destroy_sec */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_destroy_sec(void) {
    ALOGD("Vdec_Drv_H264_destroy_sec() called");
    return 0;
}

/* Demangled: VP9_Read_Prob_TBL */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Prob_TBL(void) {
    ALOGD("VP9_Read_Prob_TBL() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: RBSPMoreData */
extern "C" __attribute__((visibility("default"))) int RBSPMoreData(void) {
    ALOGD("RBSPMoreData() called");
    return 0;
}

/* Demangled: VP9_Get_Tile_Offset */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Tile_Offset(void) {
    ALOGD("VP9_Get_Tile_Offset() called");
    return 0;
}

/* Exported Object: gMPEG4_DRV_IF */
extern "C" __attribute__((visibility("default"))) void* gMPEG4_DRV_IF = NULL;

/* Demangled: H265_ApplyRefPicList */
extern "C" __attribute__((visibility("default"))) int H265_ApplyRefPicList(void) {
    ALOGD("H265_ApplyRefPicList() called");
    return 0;
}

/* Demangled: H264_HAL_PowerOn */
extern "C" __attribute__((visibility("default"))) int H264_HAL_PowerOn(void) {
    ALOGD("H264_HAL_PowerOn() called");
    return 0;
}

/* Demangled: H265_HAL_EnableCRC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_EnableCRC(void) {
    ALOGD("H265_HAL_EnableCRC() called");
    return 0;
}

/* Demangled: destroyRBSPBitStream */
extern "C" __attribute__((visibility("default"))) int destroyRBSPBitStream(void) {
    ALOGD("destroyRBSPBitStream() called");
    return 0;
}

/* Demangled: H265_AllocateFBuf */
extern "C" __attribute__((visibility("default"))) int H265_AllocateFBuf(void) {
    ALOGD("H265_AllocateFBuf() called");
    return 0;
}

/* Demangled: VP8_WriteSOCGCON */
extern "C" __attribute__((visibility("default"))) int VP8_WriteSOCGCON(void) {
    ALOGD("VP8_WriteSOCGCON() called");
    return 0;
}

/* Demangled: H264_RefPicReorderAndMark */
extern "C" __attribute__((visibility("default"))) int H264_RefPicReorderAndMark(void) {
    ALOGD("H264_RefPicReorderAndMark() called");
    return 0;
}

/* Demangled: H264_SearchReferenceIdx */
extern "C" __attribute__((visibility("default"))) int H264_SearchReferenceIdx(void) {
    ALOGD("H264_SearchReferenceIdx() called");
    return 0;
}

/* Demangled: HEVC_EncodePPS */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodePPS(void) {
    ALOGD("HEVC_EncodePPS() called");
    return 0;
}

/* Demangled: VP8_ResetVLD */
extern "C" __attribute__((visibility("default"))) int VP8_ResetVLD(void) {
    ALOGD("VP8_ResetVLD() called");
    return 0;
}

/* Demangled: VP9_BufferFlushRange */
extern "C" __attribute__((visibility("default"))) int VP9_BufferFlushRange(void) {
    ALOGD("VP9_BufferFlushRange() called");
    return 0;
}

/* Demangled: FindFreeFrameBuffer */
extern "C" __attribute__((visibility("default"))) int FindFreeFrameBuffer(void) {
    ALOGD("FindFreeFrameBuffer() called");
    return 0;
}

/* Demangled: h265_dec_decodeEx */
extern "C" __attribute__((visibility("default"))) int h265_dec_decodeEx(void) {
    ALOGD("h265_dec_decodeEx() called");
    return 0;
}

/* Demangled: VP8_WriteGCON */
extern "C" __attribute__((visibility("default"))) int VP8_WriteGCON(void) {
    ALOGD("VP8_WriteGCON() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadMC */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadMC(void) {
    ALOGD("VP9_HAL_ReadMC() called");
    return 0;
}

/* Exported Object: tv_end */
extern "C" __attribute__((visibility("default"))) void* tv_end = NULL;

/* Demangled: H264_HAL_WriteVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteVLD(void) {
    ALOGD("H264_HAL_WriteVLD() called");
    return 0;
}

/* Demangled: VP9_HAL_WritePP */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WritePP(void) {
    ALOGD("VP9_HAL_WritePP() called");
    return 0;
}

/* Demangled: VP9_UPDATE_SWITCHABLE_INTERP_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_SWITCHABLE_INTERP_PROBS(void) {
    ALOGD("VP9_UPDATE_SWITCHABLE_INTERP_PROBS() called");
    return 0;
}

/* Demangled: H265_HAL_SetTilesInfo */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetTilesInfo(void) {
    ALOGD("H265_HAL_SetTilesInfo() called");
    return 0;
}

/* Demangled: H265_handlePPSNALU */
extern "C" __attribute__((visibility("default"))) int H265_handlePPSNALU(void) {
    ALOGD("H265_handlePPSNALU() called");
    return 0;
}

/* Demangled: H264_HAL_ShiftGetBitStream */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ShiftGetBitStream(void) {
    ALOGD("H264_HAL_ShiftGetBitStream() called");
    return 0;
}

/* Demangled: mpeg4_read_sequence_information */
extern "C" __attribute__((visibility("default"))) int mpeg4_read_sequence_information(void) {
    ALOGD("mpeg4_read_sequence_information() called");
    return 0;
}

/* Demangled: MPEG2_Parse_PIC_Header */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_PIC_Header(void) {
    ALOGD("MPEG2_Parse_PIC_Header() called");
    return 0;
}

/* Demangled: VP8_DecProc */
extern "C" __attribute__((visibility("default"))) int VP8_DecProc(void) {
    ALOGD("VP8_DecProc() called");
    return 0;
}

/* Demangled: VP9_Read_Signed_Literal_Raw */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Signed_Literal_Raw(void) {
    ALOGD("VP9_Read_Signed_Literal_Raw() called");
    return 0;
}

/* Demangled: H264_CleanMultiFrameInfo */
extern "C" __attribute__((visibility("default"))) int H264_CleanMultiFrameInfo(void) {
    ALOGD("H264_CleanMultiFrameInfo() called");
    return 0;
}

/* Demangled: parseSPS */
extern "C" __attribute__((visibility("default"))) int parseSPS(void) {
    ALOGD("parseSPS() called");
    return 0;
}

/* Demangled: H264_TestSE */
extern "C" __attribute__((visibility("default"))) int H264_TestSE(void) {
    ALOGD("H264_TestSE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: HEVC_GetRCCode */
extern "C" __attribute__((visibility("default"))) int HEVC_GetRCCode(void) {
    ALOGD("HEVC_GetRCCode() called");
    return 0;
}

/* Demangled: QueryFuncPtr */
extern "C" __attribute__((visibility("default"))) int QueryFuncPtr(void) {
    ALOGD("QueryFuncPtr() called");
    return 0;
}

/* Demangled: U16_AT */
extern "C" __attribute__((visibility("default"))) int U16_AT(void) {
    ALOGD("U16_AT() called");
    return 0;
}

/* Demangled: vp9_flush_framebuf */
extern "C" __attribute__((visibility("default"))) int vp9_flush_framebuf(void) {
    ALOGD("vp9_flush_framebuf() called");
    return 0;
}

/* Demangled: dumpTSVCoutput */
extern "C" __attribute__((visibility("default"))) int dumpTSVCoutput(void) {
    ALOGD("dumpTSVCoutput() called");
    return 0;
}

/* Demangled: eVEncDrvGetParam */
extern "C" __attribute__((visibility("default"))) int eVEncDrvGetParam(void) {
    ALOGD("eVEncDrvGetParam() called");
    return 0;
}

/* Demangled: H265_HAL_DumpReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_DumpReg(void) {
    ALOGD("H265_HAL_DumpReg() called");
    return 0;
}

/* Demangled: H265_handleSLICENALU */
extern "C" __attribute__((visibility("default"))) int H265_handleSLICENALU(void) {
    ALOGD("H265_handleSLICENALU() called");
    return 0;
}

/* Demangled: CheckFlushAllBuffer */
extern "C" __attribute__((visibility("default"))) int CheckFlushAllBuffer(void) {
    ALOGD("CheckFlushAllBuffer() called");
    return 0;
}

/* Demangled: mpeg4_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_getFreeBuffer(void) {
    ALOGD("mpeg4_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: h264_enc_set_NonRefP_freq */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_NonRefP_freq(void) {
    ALOGD("h264_enc_set_NonRefP_freq() called");
    return 0;
}

/* Demangled: DrvPutBufferCB */
extern "C" __attribute__((visibility("default"))) int DrvPutBufferCB(void) {
    ALOGD("DrvPutBufferCB() called");
    return 0;
}

/* Demangled: H264_HAL_WriteAVCVLD */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteAVCVLD(void) {
    ALOGD("H264_HAL_WriteAVCVLD() called");
    return 0;
}

/* Exported Object: gH264SecVdecMtkLib */
extern "C" __attribute__((visibility("default"))) void* gH264SecVdecMtkLib = NULL;

/* Demangled: h264_dec_deInit */
extern "C" __attribute__((visibility("default"))) int h264_dec_deInit(void) {
    ALOGD("h264_dec_deInit() called");
    return 0;
}

/* Demangled: VP9_Adapt_Mv_Probs */
extern "C" __attribute__((visibility("default"))) int VP9_Adapt_Mv_Probs(void) {
    ALOGD("VP9_Adapt_Mv_Probs() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: H264_SetEncParam_Property */
extern "C" __attribute__((visibility("default"))) int H264_SetEncParam_Property(void) {
    ALOGD("H264_SetEncParam_Property() called");
    return 0;
}

/* Demangled: eVEncDrvSetParam */
extern "C" __attribute__((visibility("default"))) int eVEncDrvSetParam(void) {
    ALOGD("eVEncDrvSetParam() called");
    return 0;
}

/* Exported Object: gH264_ENC_DRV_HW_IF */
extern "C" __attribute__((visibility("default"))) void* gH264_ENC_DRV_HW_IF = NULL;

/* Demangled: Vdec_Drv_VP9_AllocBuf */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_AllocBuf(void) {
    ALOGD("Vdec_Drv_VP9_AllocBuf() called");
    return 0;
}

/* Exported Object: vp9_inter_mode_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_inter_mode_tree = NULL;

/* Demangled: VP9_HAL_ReadVP9VLD */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadVP9VLD(void) {
    ALOGD("VP9_HAL_ReadVP9VLD() called");
    return 0;
}

/* Demangled: H264_EncodeFrameErr */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameErr(void) {
    ALOGD("H264_EncodeFrameErr() called");
    return 0;
}

/* Demangled: VP9_UPDATE_TX_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_TX_PROBS(void) {
    ALOGD("VP9_UPDATE_TX_PROBS() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_SwReset */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_SwReset(void) {
    ALOGD("Vdec_Drv_VP9_SwReset() called");
    return 0;
}

/* Demangled: HEVC_SetSMIGUltraParam */
extern "C" __attribute__((visibility("default"))) int HEVC_SetSMIGUltraParam(void) {
    ALOGD("HEVC_SetSMIGUltraParam() called");
    return 0;
}

/* Demangled: H265_HAL_ReadFinishFlag */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadFinishFlag(void) {
    ALOGD("H265_HAL_ReadFinishFlag() called");
    return 0;
}

/* Demangled: H265_HAL_SetWrapperOffset */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetWrapperOffset(void) {
    ALOGD("H265_HAL_SetWrapperOffset() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcHandleCreate */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcHandleCreate = NULL;

/* Demangled: VP8_Write_Internal_SRAM */
extern "C" __attribute__((visibility("default"))) int VP8_Write_Internal_SRAM(void) {
    ALOGD("VP8_Write_Internal_SRAM() called");
    return 0;
}

/* Demangled: VP9_Put_To_Free_List */
extern "C" __attribute__((visibility("default"))) int VP9_Put_To_Free_List(void) {
    ALOGD("VP9_Put_To_Free_List() called");
    return 0;
}

/* Demangled: h264_enc_set_AllocWorkBuf */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_AllocWorkBuf(void) {
    ALOGD("h264_enc_set_AllocWorkBuf() called");
    return 0;
}

/* Demangled: H265_HAL_RPL_Modification */
extern "C" __attribute__((visibility("default"))) int H265_HAL_RPL_Modification(void) {
    ALOGD("H265_HAL_RPL_Modification() called");
    return 0;
}

/* Exported Object: H265_eTTable */
extern "C" __attribute__((visibility("default"))) void* H265_eTTable = NULL;

/* Demangled: Vdec_Drv_VP9_Flush */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Flush(void) {
    ALOGD("Vdec_Drv_VP9_Flush() called");
    return 0;
}

/* Demangled: h264_enc_set_ForceIntraOn */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_ForceIntraOn(void) {
    ALOGD("h264_enc_set_ForceIntraOn() called");
    return 0;
}

/* Demangled: HEVC_WaitVENCDone */
extern "C" __attribute__((visibility("default"))) int HEVC_WaitVENCDone(void) {
    ALOGD("HEVC_WaitVENCDone() called");
    return 0;
}

/* Demangled: H265_HAL_ReadHEVCVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadHEVCVLD(void) {
    ALOGD("H265_HAL_ReadHEVCVLD() called");
    return 0;
}

/* Demangled: VP9_Setup_Tile_Info */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Tile_Info(void) {
    ALOGD("VP9_Setup_Tile_Info() called");
    return 0;
}

/* Demangled: VP9_Set_MV_Buffer_Addr */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MV_Buffer_Addr(void) {
    ALOGD("VP9_Set_MV_Buffer_Addr() called");
    return 0;
}

/* Demangled: eVDecDrvGetParam */
extern "C" __attribute__((visibility("default"))) int eVDecDrvGetParam(void) {
    ALOGD("eVDecDrvGetParam() called");
    return 0;
}

/* Demangled: H265_GetRefPicbyPOC */
extern "C" __attribute__((visibility("default"))) int H265_GetRefPicbyPOC(void) {
    ALOGD("H265_GetRefPicbyPOC() called");
    return 0;
}

/* Exported Object: Golomb_Test_String */
extern "C" __attribute__((visibility("default"))) void* Golomb_Test_String = NULL;

/* Demangled: mpeg2_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_getFreeBuffer(void) {
    ALOGD("mpeg2_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_CheckErr */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_CheckErr(void) {
    ALOGD("Vdec_Drv_VP9_CheckErr() called");
    return 0;
}

/* Demangled: H264_AddTSVCPrefixNALU */
extern "C" __attribute__((visibility("default"))) int H264_AddTSVCPrefixNALU(void) {
    ALOGD("H264_AddTSVCPrefixNALU() called");
    return 0;
}

/* Demangled: H264_IsRFSEnabled */
extern "C" __attribute__((visibility("default"))) int H264_IsRFSEnabled(void) {
    ALOGD("H264_IsRFSEnabled() called");
    return 0;
}

/* Demangled: h265_dec_init */
extern "C" __attribute__((visibility("default"))) int h265_dec_init(void) {
    ALOGD("h265_dec_init() called");
    return 0;
}

/* Demangled: vp8_dec_decode */
extern "C" __attribute__((visibility("default"))) int vp8_dec_decode(void) {
    ALOGD("vp8_dec_decode() called");
    return 0;
}

/* Demangled: EncMp4SeqHeader */
extern "C" __attribute__((visibility("default"))) int EncMp4SeqHeader(void) {
    ALOGD("EncMp4SeqHeader() called");
    return 0;
}

/* Demangled: h264_enc_encode_Sps */
extern "C" __attribute__((visibility("default"))) int h264_enc_encode_Sps(void) {
    ALOGD("h264_enc_encode_Sps() called");
    return 0;
}

/* Demangled: H264_WaitVENCDone */
extern "C" __attribute__((visibility("default"))) int H264_WaitVENCDone(void) {
    ALOGD("H264_WaitVENCDone() called");
    return 0;
}

/* Demangled: HEVC_GetFrmQLimterParam */
extern "C" __attribute__((visibility("default"))) int HEVC_GetFrmQLimterParam(void) {
    ALOGD("HEVC_GetFrmQLimterParam() called");
    return 0;
}

/* Demangled: H265_HAL_SetJumpModeReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetJumpModeReg(void) {
    ALOGD("H265_HAL_SetJumpModeReg() called");
    return 0;
}

/* Demangled: H265_RBSPMoreData */
extern "C" __attribute__((visibility("default"))) int H265_RBSPMoreData(void) {
    ALOGD("H265_RBSPMoreData() called");
    return 0;
}

/* Demangled: H264_WP_EncodeEnd */
extern "C" __attribute__((visibility("default"))) int H264_WP_EncodeEnd(void) {
    ALOGD("H264_WP_EncodeEnd() called");
    return 0;
}

/* Demangled: hevc_enc_init */
extern "C" __attribute__((visibility("default"))) int hevc_enc_init(void) {
    ALOGD("hevc_enc_init() called");
    return 0;
}

/* Demangled: eVDecDrvSetParam */
extern "C" __attribute__((visibility("default"))) int eVDecDrvSetParam(void) {
    ALOGD("eVDecDrvSetParam() called");
    return 0;
}

/* Demangled: H265_HAL_ReadMC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadMC(void) {
    ALOGD("H265_HAL_ReadMC() called");
    return 0;
}

/* Exported Object: ZZ_SCAN */
extern "C" __attribute__((visibility("default"))) void* ZZ_SCAN = NULL;

/* Demangled: VP9_HAL_ReadMV */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadMV(void) {
    ALOGD("VP9_HAL_ReadMV() called");
    return 0;
}

/* Demangled: h264_enc_set_AdjustBitrate */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_AdjustBitrate(void) {
    ALOGD("h264_enc_set_AdjustBitrate() called");
    return 0;
}

/* Demangled: GetFreeFrameBuffer */
extern "C" __attribute__((visibility("default"))) int GetFreeFrameBuffer(void) {
    ALOGD("GetFreeFrameBuffer() called");
    return 0;
}

/* Demangled: H265_HAL_WriteVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteVLD(void) {
    ALOGD("H265_HAL_WriteVLD() called");
    return 0;
}

/* Demangled: H265_CheckFlushAllBuffer */
extern "C" __attribute__((visibility("default"))) int H265_CheckFlushAllBuffer(void) {
    ALOGD("H265_CheckFlushAllBuffer() called");
    return 0;
}

/* Demangled: vp9_dec_getFreeBuffer */
extern "C" __attribute__((visibility("default"))) int vp9_dec_getFreeBuffer(void) {
    ALOGD("vp9_dec_getFreeBuffer() called");
    return 0;
}

/* Demangled: VP9_Read_Mv_Probs */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Mv_Probs(void) {
    ALOGD("VP9_Read_Mv_Probs() called");
    return 0;
}

/* Exported Object: ucH264RCPUCode_WECHAT */
extern "C" __attribute__((visibility("default"))) void* ucH264RCPUCode_WECHAT = NULL;

/* Demangled: H265_GCE_WTF */
extern "C" __attribute__((visibility("default"))) int H265_GCE_WTF(void) {
    ALOGD("H265_GCE_WTF() called");
    return 0;
}

/* Demangled: H265_HAL_InitH265BarrelShifter */
extern "C" __attribute__((visibility("default"))) int H265_HAL_InitH265BarrelShifter(void) {
    ALOGD("H265_HAL_InitH265BarrelShifter() called");
    return 0;
}

/* Demangled: H265_HAL_SetSPSHEVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetSPSHEVLD(void) {
    ALOGD("H265_HAL_SetSPSHEVLD() called");
    return 0;
}

/* Demangled: H264_HAL_WriteCRC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteCRC(void) {
    ALOGD("H264_HAL_WriteCRC() called");
    return 0;
}

/* Demangled: HEVC_GetSMIGUltraThreshold */
extern "C" __attribute__((visibility("default"))) int HEVC_GetSMIGUltraThreshold(void) {
    ALOGD("HEVC_GetSMIGUltraThreshold() called");
    return 0;
}

/* Demangled: H265_handleSEINALU */
extern "C" __attribute__((visibility("default"))) int H265_handleSEINALU(void) {
    ALOGD("H265_handleSEINALU() called");
    return 0;
}

/* Demangled: H265_initSliceHeader */
extern "C" __attribute__((visibility("default"))) int H265_initSliceHeader(void) {
    ALOGD("H265_initSliceHeader() called");
    return 0;
}

/* Demangled: hevc_enc_setParameter */
extern "C" __attribute__((visibility("default"))) int hevc_enc_setParameter(void) {
    ALOGD("hevc_enc_setParameter() called");
    return 0;
}

/* Demangled: H264PutFrameBufferToAvailable */
extern "C" __attribute__((visibility("default"))) int H264PutFrameBufferToAvailable(void) {
    ALOGD("H264PutFrameBufferToAvailable() called");
    return 0;
}

/* Demangled: mpeg2_find_read_ptr_pos */
extern "C" __attribute__((visibility("default"))) int mpeg2_find_read_ptr_pos(void) {
    ALOGD("mpeg2_find_read_ptr_pos() called");
    return 0;
}

/* Demangled: HEVC_GetSearchVParam */
extern "C" __attribute__((visibility("default"))) int HEVC_GetSearchVParam(void) {
    ALOGD("HEVC_GetSearchVParam() called");
    return 0;
}

/* Demangled: EncH264PPS */
extern "C" __attribute__((visibility("default"))) int EncH264PPS(void) {
    ALOGD("EncH264PPS() called");
    return 0;
}

/* Demangled: H265_parseSliceHeader */
extern "C" __attribute__((visibility("default"))) int H265_parseSliceHeader(void) {
    ALOGD("H265_parseSliceHeader() called");
    return 0;
}

/* Exported Object: H265_scalingListSizeX */
extern "C" __attribute__((visibility("default"))) void* H265_scalingListSizeX = NULL;

/* Demangled: Vdec_Drv_H264_get_bs_Rptr */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_get_bs_Rptr(void) {
    ALOGD("Vdec_Drv_H264_get_bs_Rptr() called");
    return 0;
}

/* Exported Object: gVP9_DRV_IF_HW */
extern "C" __attribute__((visibility("default"))) void* gVP9_DRV_IF_HW = NULL;

/* Demangled: Vdec_Drv_H265_decode */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_decode(void) {
    ALOGD("Vdec_Drv_H265_decode() called");
    return 0;
}

/* Exported Object: mTeeType */
extern "C" __attribute__((visibility("default"))) void* mTeeType = NULL;

/* Demangled: AssignQuantParam */
extern "C" __attribute__((visibility("default"))) int AssignQuantParam(void) {
    ALOGD("AssignQuantParam() called");
    return 0;
}

/* Demangled: H264GetFrameBufferFromDisp */
extern "C" __attribute__((visibility("default"))) int H264GetFrameBufferFromDisp(void) {
    ALOGD("H264GetFrameBufferFromDisp() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_init_sec */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_init_sec(void) {
    ALOGD("Vdec_Drv_H264_init_sec() called");
    return 0;
}

/* Demangled: VP9_DC_Quant */
extern "C" __attribute__((visibility("default"))) int VP9_DC_Quant(void) {
    ALOGD("VP9_DC_Quant() called");
    return 0;
}

/* Demangled: H265_decode */
extern "C" __attribute__((visibility("default"))) int H265_decode(void) {
    ALOGD("H265_decode() called");
    return 0;
}

/* Demangled: VP8_CheckProc */
extern "C" __attribute__((visibility("default"))) int VP8_CheckProc(void) {
    ALOGD("VP8_CheckProc() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_DecodeEx */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_DecodeEx(void) {
    ALOGD("Vdec_Drv_VP9_DecodeEx() called");
    return 0;
}

/* Demangled: UpdateBitstreamWP */
extern "C" __attribute__((visibility("default"))) int UpdateBitstreamWP(void) {
    ALOGD("UpdateBitstreamWP() called");
    return 0;
}

/* Demangled: H265_HAL_GetRealBitStream */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetRealBitStream(void) {
    ALOGD("H265_HAL_GetRealBitStream() called");
    return 0;
}

/* Demangled: H265_HAL_UeCodeNum */
extern "C" __attribute__((visibility("default"))) int H265_HAL_UeCodeNum(void) {
    ALOGD("H265_HAL_UeCodeNum() called");
    return 0;
}

/* Demangled: destroySliceHeader */
extern "C" __attribute__((visibility("default"))) int destroySliceHeader(void) {
    ALOGD("destroySliceHeader() called");
    return 0;
}

/* Demangled: VP9_LockHW */
extern "C" __attribute__((visibility("default"))) int VP9_LockHW(void) {
    ALOGD("VP9_LockHW() called");
    return 0;
}

/* Demangled: VP9_Get_Tile_N_Bits */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Tile_N_Bits(void) {
    ALOGD("VP9_Get_Tile_N_Bits() called");
    return 0;
}

/* Demangled: VP9_Set_MC_RefBuf_Addr */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_RefBuf_Addr(void) {
    ALOGD("VP9_Set_MC_RefBuf_Addr() called");
    return 0;
}

/* Demangled: HEVC_ModifyProfileLevel */
extern "C" __attribute__((visibility("default"))) int HEVC_ModifyProfileLevel(void) {
    ALOGD("HEVC_ModifyProfileLevel() called");
    return 0;
}

/* Demangled: H264_HAL_SetReg */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetReg(void) {
    ALOGD("H264_HAL_SetReg() called");
    return 0;
}

/* Exported Object: gVP8_DRV_IF_HW */
extern "C" __attribute__((visibility("default"))) void* gVP8_DRV_IF_HW = NULL;

/* Demangled: H264_HAL_InitVDecHW */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitVDecHW(void) {
    ALOGD("H264_HAL_InitVDecHW() called");
    return 0;
}

/* Demangled: H264_DumpReferenceBufList */
extern "C" __attribute__((visibility("default"))) int H264_DumpReferenceBufList(void) {
    ALOGD("H264_DumpReferenceBufList() called");
    return 0;
}

/* Demangled: H264_EncodeFrameInit */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameInit(void) {
    ALOGD("H264_EncodeFrameInit() called");
    return 0;
}

/* Demangled: eVEncDrv_EncoderQueryInfo */
extern "C" __attribute__((visibility("default"))) int eVEncDrv_EncoderQueryInfo(void) {
    ALOGD("eVEncDrv_EncoderQueryInfo() called");
    return 0;
}

/* Demangled: H265_HAL_GetLCUxy */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetLCUxy(void) {
    ALOGD("H265_HAL_GetLCUxy() called");
    return 0;
}

/* Demangled: H265_Vdec_Drv_setDecPicInfo */
extern "C" __attribute__((visibility("default"))) int H265_Vdec_Drv_setDecPicInfo(void) {
    ALOGD("H265_Vdec_Drv_setDecPicInfo() called");
    return 0;
}

/* Demangled: vp8_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int vp8_dec_getParameter(void) {
    ALOGD("vp8_dec_getParameter() called");
    return 0;
}

/* Demangled: H264_SeqLvlMMRSetting_Count3PlaneUVPitch */
extern "C" __attribute__((visibility("default"))) int H264_SeqLvlMMRSetting_Count3PlaneUVPitch(void) {
    ALOGD("H264_SeqLvlMMRSetting_Count3PlaneUVPitch() called");
    return 0;
}

/* Demangled: DecodeOpen */
extern "C" __attribute__((visibility("default"))) int DecodeOpen(void) {
    ALOGD("DecodeOpen() called");
    return 0;
}

/* Demangled: H265_HAL_ResetBitsCount */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ResetBitsCount(void) {
    ALOGD("H265_HAL_ResetBitsCount() called");
    return 0;
}

/* Demangled: H264_EncodeSEI_SW */
extern "C" __attribute__((visibility("default"))) int H264_EncodeSEI_SW(void) {
    ALOGD("H264_EncodeSEI_SW() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: H265_DEBUG_DumpSecureBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H265_DEBUG_DumpSecureBitStreamBuffer(void) {
    ALOGD("H265_DEBUG_DumpSecureBitStreamBuffer() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_getFree */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_getFree(void) {
    ALOGD("Vdec_Drv_H265_getFree() called");
    return 0;
}

/* Demangled: VP8_DecFinish */
extern "C" __attribute__((visibility("default"))) int VP8_DecFinish(void) {
    ALOGD("VP8_DecFinish() called");
    return 0;
}

/* Demangled: VP9_Init_Dequantizer */
extern "C" __attribute__((visibility("default"))) int VP9_Init_Dequantizer(void) {
    ALOGD("VP9_Init_Dequantizer() called");
    return 0;
}

/* Demangled: VP9_Read_Delta_Q */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Delta_Q(void) {
    ALOGD("VP9_Read_Delta_Q() called");
    return 0;
}

/* Demangled: h264_enc_set_FreeWorkBuf */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_FreeWorkBuf(void) {
    ALOGD("h264_enc_set_FreeWorkBuf() called");
    return 0;
}

/* Demangled: h264_sw_enc_encode */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_encode(void) {
    ALOGD("h264_sw_enc_encode() called");
    return 0;
}

/* Demangled: DrvDisableVencPerfService */
extern "C" __attribute__((visibility("default"))) int DrvDisableVencPerfService(void) {
    ALOGD("DrvDisableVencPerfService() called");
    return 0;
}

/* Demangled: eVEncDrvRelease */
extern "C" __attribute__((visibility("default"))) int eVEncDrvRelease(void) {
    ALOGD("eVEncDrvRelease() called");
    return 0;
}

/* Demangled: H265_GetLTRefPicbyPOC */
extern "C" __attribute__((visibility("default"))) int H265_GetLTRefPicbyPOC(void) {
    ALOGD("H265_GetLTRefPicbyPOC() called");
    return 0;
}

/* Demangled: H264_EncodeFrameHndlFull */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameHndlFull(void) {
    ALOGD("H264_EncodeFrameHndlFull() called");
    return 0;
}

/* Demangled: mpeg4_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_getParameter(void) {
    ALOGD("mpeg4_dec_getParameter() called");
    return 0;
}

/* Demangled: VP8_FlushCoefProbs */
extern "C" __attribute__((visibility("default"))) int VP8_FlushCoefProbs(void) {
    ALOGD("VP8_FlushCoefProbs() called");
    return 0;
}

/* Demangled: VP9_Compressed_Header_Parse */
extern "C" __attribute__((visibility("default"))) int VP9_Compressed_Header_Parse(void) {
    ALOGD("VP9_Compressed_Header_Parse() called");
    return 0;
}

/* Demangled: Vdec_Drv_setDecPicInfo */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_setDecPicInfo(void) {
    ALOGD("Vdec_Drv_setDecPicInfo() called");
    return 0;
}

/* Demangled: VP9_Get_Tile_Buffer */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Tile_Buffer(void) {
    ALOGD("VP9_Get_Tile_Buffer() called");
    return 0;
}

/* Demangled: h264_enc_encode_Header */
extern "C" __attribute__((visibility("default"))) int h264_enc_encode_Header(void) {
    ALOGD("h264_enc_encode_Header() called");
    return 0;
}

/* Demangled: RBSPGetSE */
extern "C" __attribute__((visibility("default"))) int RBSPGetSE(void) {
    ALOGD("RBSPGetSE() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_GetDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_GetDisplayBuffer(void) {
    ALOGD("Vdec_Drv_VP9_GetDisplayBuffer() called");
    return 0;
}

/* Demangled: H265_HAL_HEVCVLDGetBitS */
extern "C" __attribute__((visibility("default"))) int H265_HAL_HEVCVLDGetBitS(void) {
    ALOGD("H265_HAL_HEVCVLDGetBitS() called");
    return 0;
}

/* Demangled: VP9_Prob_TBL_Read_SRAM */
extern "C" __attribute__((visibility("default"))) int VP9_Prob_TBL_Read_SRAM(void) {
    ALOGD("VP9_Prob_TBL_Read_SRAM() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_destroy */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_destroy(void) {
    ALOGD("Vdec_Drv_H265_destroy() called");
    return 0;
}

/* Demangled: AssertionFailed */
extern "C" __attribute__((visibility("default"))) int AssertionFailed(void) {
    ALOGD("AssertionFailed() called");
    return 0;
}

/* Demangled: SetYUVBuffer */
extern "C" __attribute__((visibility("default"))) int SetYUVBuffer(void) {
    ALOGD("SetYUVBuffer() called");
    return 0;
}

/* Demangled: H265_HAL_WriteCRC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteCRC(void) {
    ALOGD("H265_HAL_WriteCRC() called");
    return 0;
}

/* Demangled: H264_HAL_WriteUFO */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteUFO(void) {
    ALOGD("H264_HAL_WriteUFO() called");
    return 0;
}

/* Demangled: vp9_dec_decodeEx */
extern "C" __attribute__((visibility("default"))) int vp9_dec_decodeEx(void) {
    ALOGD("vp9_dec_decodeEx() called");
    return 0;
}

/* Demangled: VP9_SW_Read */
extern "C" __attribute__((visibility("default"))) int VP9_SW_Read(void) {
    ALOGD("VP9_SW_Read() called");
    return 0;
}

/* Demangled: H265_HAL_WriteScalingListPP */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteScalingListPP(void) {
    ALOGD("H265_HAL_WriteScalingListPP() called");
    return 0;
}

/* Demangled: H264BufferFlushRange */
extern "C" __attribute__((visibility("default"))) int H264BufferFlushRange(void) {
    ALOGD("H264BufferFlushRange() called");
    return 0;
}

/* Demangled: HEVC_SliceSAOInfo */
extern "C" __attribute__((visibility("default"))) int HEVC_SliceSAOInfo(void) {
    ALOGD("HEVC_SliceSAOInfo() called");
    return 0;
}

/* Demangled: DrvUnLockPutListCB */
extern "C" __attribute__((visibility("default"))) int DrvUnLockPutListCB(void) {
    ALOGD("DrvUnLockPutListCB() called");
    return 0;
}

/* Demangled: mpeg4_parse_VOL */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_VOL(void) {
    ALOGD("mpeg4_parse_VOL() called");
    return 0;
}

/* Demangled: VP8_WriteMISC */
extern "C" __attribute__((visibility("default"))) int VP8_WriteMISC(void) {
    ALOGD("VP8_WriteMISC() called");
    return 0;
}

/* Demangled: H265_HAL_GetErrMsg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetErrMsg(void) {
    ALOGD("H265_HAL_GetErrMsg() called");
    return 0;
}

/* Demangled: find_read_ptr_pos */
extern "C" __attribute__((visibility("default"))) int find_read_ptr_pos(void) {
    ALOGD("find_read_ptr_pos() called");
    return 0;
}

/* Exported Object: gMPEG2_DRV_IF */
extern "C" __attribute__((visibility("default"))) void* gMPEG2_DRV_IF = NULL;

/* Demangled: h264_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int h264_dec_setParameter(void) {
    ALOGD("h264_dec_setParameter() called");
    return 0;
}

/* Exported Object: ucHEVCRCPUCode_20160524_WFD */
extern "C" __attribute__((visibility("default"))) void* ucHEVCRCPUCode_20160524_WFD = NULL;

/* Demangled: H265_DEBUG_DumpFrameBuffer */
extern "C" __attribute__((visibility("default"))) int H265_DEBUG_DumpFrameBuffer(void) {
    ALOGD("H265_DEBUG_DumpFrameBuffer() called");
    return 0;
}

/* Demangled: H265_getDpbSize */
extern "C" __attribute__((visibility("default"))) int H265_getDpbSize(void) {
    ALOGD("H265_getDpbSize() called");
    return 0;
}

/* Demangled: VP9_Check_Scale_Factors */
extern "C" __attribute__((visibility("default"))) int VP9_Check_Scale_Factors(void) {
    ALOGD("VP9_Check_Scale_Factors() called");
    return 0;
}

/* Demangled: H264_FrmLvlMMRSetting */
extern "C" __attribute__((visibility("default"))) int H264_FrmLvlMMRSetting(void) {
    ALOGD("H264_FrmLvlMMRSetting() called");
    return 0;
}

/* Demangled: vc1_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int vc1_dec_setParameter(void) {
    ALOGD("vc1_dec_setParameter() called");
    return 0;
}

/* Demangled: DrvEnableVencPerfService */
extern "C" __attribute__((visibility("default"))) int DrvEnableVencPerfService(void) {
    ALOGD("DrvEnableVencPerfService() called");
    return 0;
}

/* Demangled: GetDecoderAPI */
extern "C" __attribute__((visibility("default"))) int GetDecoderAPI(void) {
    ALOGD("GetDecoderAPI() called");
    return 0;
}

/* Demangled: H264_HAL_ReadAVCMV */
extern "C" __attribute__((visibility("default"))) int H264_HAL_ReadAVCMV(void) {
    ALOGD("H264_HAL_ReadAVCMV() called");
    return 0;
}

/* Demangled: H264_HAL_WritePP */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WritePP(void) {
    ALOGD("H264_HAL_WritePP() called");
    return 0;
}

/* Demangled: mpeg4_parse_VOP */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_VOP(void) {
    ALOGD("mpeg4_parse_VOP() called");
    return 0;
}

/* Demangled: mpeg4_enc_setParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_enc_setParameter(void) {
    ALOGD("mpeg4_enc_setParameter() called");
    return 0;
}

/* Demangled: H264_FrmLvlMMRSetting_IsIFrame */
extern "C" __attribute__((visibility("default"))) int H264_FrmLvlMMRSetting_IsIFrame(void) {
    ALOGD("H264_FrmLvlMMRSetting_IsIFrame() called");
    return 0;
}

/* Exported Object: gVP9_DRV_IF_HW_SEC */
extern "C" __attribute__((visibility("default"))) void* gVP9_DRV_IF_HW_SEC = NULL;

/* Demangled: H265_initSPS */
extern "C" __attribute__((visibility("default"))) int H265_initSPS(void) {
    ALOGD("H265_initSPS() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpInitBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpInitBitStreamBuffer(void) {
    ALOGD("H264_DEBUG_DumpInitBitStreamBuffer() called");
    return 0;
}

/* Demangled: VP9_Get_Probs_Table */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Probs_Table(void) {
    ALOGD("VP9_Get_Probs_Table() called");
    return 0;
}

/* Demangled: h264_enc_set_SkipFrame */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_SkipFrame(void) {
    ALOGD("h264_enc_set_SkipFrame() called");
    return 0;
}

/* Demangled: H265_parseItuTT35 */
extern "C" __attribute__((visibility("default"))) int H265_parseItuTT35(void) {
    ALOGD("H265_parseItuTT35() called");
    return 0;
}

/* Demangled: Vdec_Drv_Ref_Pic_List_Reordering */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_Ref_Pic_List_Reordering(void) {
    ALOGD("Vdec_Drv_Ref_Pic_List_Reordering() called");
    return 0;
}

/* Demangled: mpeg4_ext_dec_setParameter */
extern "C" __attribute__((visibility("default"))) int mpeg4_ext_dec_setParameter(void) {
    ALOGD("mpeg4_ext_dec_setParameter() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Copyright_Ext */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Copyright_Ext(void) {
    ALOGD("MPEG2_Parse_Copyright_Ext() called");
    return 0;
}

/* Demangled: VP8_CheckProc_MBRowModeEnd */
extern "C" __attribute__((visibility("default"))) int VP8_CheckProc_MBRowModeEnd(void) {
    ALOGD("VP8_CheckProc_MBRowModeEnd() called");
    return 0;
}

/* Exported Object: gVP9SecVdecMtkLib */
extern "C" __attribute__((visibility("default"))) void* gVP9SecVdecMtkLib = NULL;

/* Demangled: H265_HAL_DumpReg_sec */
extern "C" __attribute__((visibility("default"))) int H265_HAL_DumpReg_sec(void) {
    ALOGD("H265_HAL_DumpReg_sec() called");
    return 0;
}

/* Demangled: mpeg4_parse_VOS */
extern "C" __attribute__((visibility("default"))) int mpeg4_parse_VOS(void) {
    ALOGD("mpeg4_parse_VOS() called");
    return 0;
}

/* Demangled: VP8_DecIsComplete */
extern "C" __attribute__((visibility("default"))) int VP8_DecIsComplete(void) {
    ALOGD("VP8_DecIsComplete() called");
    return 0;
}

/* Demangled: H264_GetVencDpbSize */
extern "C" __attribute__((visibility("default"))) int H264_GetVencDpbSize(void) {
    ALOGD("H264_GetVencDpbSize() called");
    return 0;
}

/* Demangled: HEIF_GridModeSetting */
extern "C" __attribute__((visibility("default"))) int HEIF_GridModeSetting(void) {
    ALOGD("HEIF_GridModeSetting() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Usr_Data */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Usr_Data(void) {
    ALOGD("MPEG2_Parse_Usr_Data() called");
    return 0;
}

/* Demangled: VP9_Get_Counts_Table */
extern "C" __attribute__((visibility("default"))) int VP9_Get_Counts_Table(void) {
    ALOGD("VP9_Get_Counts_Table() called");
    return 0;
}

/* Demangled: GetDispFrameBuffer */
extern "C" __attribute__((visibility("default"))) int GetDispFrameBuffer(void) {
    ALOGD("GetDispFrameBuffer() called");
    return 0;
}

/* Demangled: H265_RPL_Modification */
extern "C" __attribute__((visibility("default"))) int H265_RPL_Modification(void) {
    ALOGD("H265_RPL_Modification() called");
    return 0;
}

/* Demangled: h264_dec_decode */
extern "C" __attribute__((visibility("default"))) int h264_dec_decode(void) {
    ALOGD("h264_dec_decode() called");
    return 0;
}

/* Demangled: mpeg4_decode */
extern "C" __attribute__((visibility("default"))) int mpeg4_decode(void) {
    ALOGD("mpeg4_decode() called");
    return 0;
}

/* Demangled: VP8_HwAccMVProbUpdate */
extern "C" __attribute__((visibility("default"))) int VP8_HwAccMVProbUpdate(void) {
    ALOGD("VP8_HwAccMVProbUpdate() called");
    return 0;
}

/* Demangled: VP8_VersionCfg */
extern "C" __attribute__((visibility("default"))) int VP8_VersionCfg(void) {
    ALOGD("VP8_VersionCfg() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcDeinit */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcDeinit = NULL;

/* Demangled: H264_ResetVENC */
extern "C" __attribute__((visibility("default"))) int H264_ResetVENC(void) {
    ALOGD("H264_ResetVENC() called");
    return 0;
}

/* Demangled: H264_WP_StageSetReg */
extern "C" __attribute__((visibility("default"))) int H264_WP_StageSetReg(void) {
    ALOGD("H264_WP_StageSetReg() called");
    return 0;
}

/* Demangled: H264_HAL_SetPRefPicListReg_Extra */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetPRefPicListReg_Extra(void) {
    ALOGD("H264_HAL_SetPRefPicListReg_Extra() called");
    return 0;
}

/* Demangled: VP8_GetHWRegBase */
extern "C" __attribute__((visibility("default"))) int VP8_GetHWRegBase(void) {
    ALOGD("VP8_GetHWRegBase() called");
    return 0;
}

/* Demangled: VP8_RemoveFromFrmBufFreeList */
extern "C" __attribute__((visibility("default"))) int VP8_RemoveFromFrmBufFreeList(void) {
    ALOGD("VP8_RemoveFromFrmBufFreeList() called");
    return 0;
}

/* Demangled: VP8_BufferFlushRange */
extern "C" __attribute__((visibility("default"))) int VP8_BufferFlushRange(void) {
    ALOGD("VP8_BufferFlushRange() called");
    return 0;
}

/* Demangled: VP9_Prob_TBL_WDMA */
extern "C" __attribute__((visibility("default"))) int VP9_Prob_TBL_WDMA(void) {
    ALOGD("VP9_Prob_TBL_WDMA() called");
    return 0;
}

/* Demangled: H265_HAL_InitVDecHW */
extern "C" __attribute__((visibility("default"))) int H265_HAL_InitVDecHW(void) {
    ALOGD("H265_HAL_InitVDecHW() called");
    return 0;
}

/* Demangled: VP8_PerformanceProfiling */
extern "C" __attribute__((visibility("default"))) int VP8_PerformanceProfiling(void) {
    ALOGD("VP8_PerformanceProfiling() called");
    return 0;
}

/* Exported Object: ucH264RCPUCode_WIFI */
extern "C" __attribute__((visibility("default"))) void* ucH264RCPUCode_WIFI = NULL;

/* Demangled: h264_enc_set_WFDMode */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_WFDMode(void) {
    ALOGD("h264_enc_set_WFDMode() called");
    return 0;
}

/* Demangled: eVDecDrvQueryCapability */
extern "C" __attribute__((visibility("default"))) int eVDecDrvQueryCapability(void) {
    ALOGD("eVDecDrvQueryCapability() called");
    return 0;
}

/* Exported Object: gH265_DRV_IF */
extern "C" __attribute__((visibility("default"))) void* gH265_DRV_IF = NULL;

/* Exported Object: H265_invQuantScales */
extern "C" __attribute__((visibility("default"))) void* H265_invQuantScales = NULL;

/* Demangled: mpeg4_read_picture_information */
extern "C" __attribute__((visibility("default"))) int mpeg4_read_picture_information(void) {
    ALOGD("mpeg4_read_picture_information() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: VP9_Check_Sync_Code */
extern "C" __attribute__((visibility("default"))) int VP9_Check_Sync_Code(void) {
    ALOGD("VP9_Check_Sync_Code() called");
    return 0;
}

/* Demangled: HEVC_EncodePPS_HW */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodePPS_HW(void) {
    ALOGD("HEVC_EncodePPS_HW() called");
    return 0;
}

/* Demangled: H264_HAL_GetRealBitStream */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetRealBitStream(void) {
    ALOGD("H264_HAL_GetRealBitStream() called");
    return 0;
}

/* Demangled: HandleUFOConfig */
extern "C" __attribute__((visibility("default"))) int HandleUFOConfig(void) {
    ALOGD("HandleUFOConfig() called");
    return 0;
}

/* Demangled: VP8_GetMbxMby */
extern "C" __attribute__((visibility("default"))) int VP8_GetMbxMby(void) {
    ALOGD("VP8_GetMbxMby() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_SetRC */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_SetRC(void) {
    ALOGD("H264_EncodeFrameEnc_SetRC() called");
    return 0;
}

/* Demangled: H265_HAL_WaitISR */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WaitISR(void) {
    ALOGD("H265_HAL_WaitISR() called");
    return 0;
}

/* Demangled: H265_HAL_WriteUFO */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteUFO(void) {
    ALOGD("H265_HAL_WriteUFO() called");
    return 0;
}

/* Demangled: VP9_Super_Frame_Parse */
extern "C" __attribute__((visibility("default"))) int VP9_Super_Frame_Parse(void) {
    ALOGD("VP9_Super_Frame_Parse() called");
    return 0;
}

/* Demangled: mpeg4_part2_risc_settings */
extern "C" __attribute__((visibility("default"))) int mpeg4_part2_risc_settings(void) {
    ALOGD("mpeg4_part2_risc_settings() called");
    return 0;
}

/* Demangled: H265_RBSPGetSE */
extern "C" __attribute__((visibility("default"))) int H265_RBSPGetSE(void) {
    ALOGD("H265_RBSPGetSE() called");
    return 0;
}

/* Demangled: ReplaceNALSizeWithNALPrefix */
extern "C" __attribute__((visibility("default"))) int ReplaceNALSizeWithNALPrefix(void) {
    ALOGD("ReplaceNALSizeWithNALPrefix() called");
    return 0;
}

/* Exported Object: ucH264RCPUCode */
extern "C" __attribute__((visibility("default"))) void* ucH264RCPUCode = NULL;

/* Demangled: H265_HAL_ResetForError */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ResetForError(void) {
    ALOGD("H265_HAL_ResetForError() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_destroy_sec_tbase */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_destroy_sec_tbase(void) {
    ALOGD("Vdec_Drv_H264_destroy_sec_tbase() called");
    return 0;
}

/* Demangled: VP8_AddToFrmBufFreeList */
extern "C" __attribute__((visibility("default"))) int VP8_AddToFrmBufFreeList(void) {
    ALOGD("VP8_AddToFrmBufFreeList() called");
    return 0;
}

/* Demangled: VP8_InitBoolCoder */
extern "C" __attribute__((visibility("default"))) int VP8_InitBoolCoder(void) {
    ALOGD("VP8_InitBoolCoder() called");
    return 0;
}

/* Demangled: VP9_Update_Ref_Count_FB */
extern "C" __attribute__((visibility("default"))) int VP9_Update_Ref_Count_FB(void) {
    ALOGD("VP9_Update_Ref_Count_FB() called");
    return 0;
}

/* Demangled: mpeg2_get_platform_data */
extern "C" __attribute__((visibility("default"))) int mpeg2_get_platform_data(void) {
    ALOGD("mpeg2_get_platform_data() called");
    return 0;
}

/* Exported Object: vp9_intra_mode_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_intra_mode_tree = NULL;

/* Demangled: H265_HAL_SetSHDRHEVLD */
extern "C" __attribute__((visibility("default"))) int H265_HAL_SetSHDRHEVLD(void) {
    ALOGD("H265_HAL_SetSHDRHEVLD() called");
    return 0;
}

/* Demangled: h264_dec_get_slice_handle */
extern "C" __attribute__((visibility("default"))) int h264_dec_get_slice_handle(void) {
    ALOGD("h264_dec_get_slice_handle() called");
    return 0;
}

/* Demangled: VP9_Setup_Frame_Size_With_Refs */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Frame_Size_With_Refs(void) {
    ALOGD("VP9_Setup_Frame_Size_With_Refs() called");
    return 0;
}

/* Demangled: get_bit_at */
extern "C" __attribute__((visibility("default"))) int get_bit_at(void) {
    ALOGD("get_bit_at() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_GetParameter */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_GetParameter(void) {
    ALOGD("Vdec_Drv_VP9_GetParameter() called");
    return 0;
}

/* Demangled: VP9_Swap_Frame_Buffers */
extern "C" __attribute__((visibility("default"))) int VP9_Swap_Frame_Buffers(void) {
    ALOGD("VP9_Swap_Frame_Buffers() called");
    return 0;
}

/* Demangled: h264_enc_log2ceil */
extern "C" __attribute__((visibility("default"))) int h264_enc_log2ceil(void) {
    ALOGD("h264_enc_log2ceil() called");
    return 0;
}

/* Demangled: H265_HAL_DecPicComplete */
extern "C" __attribute__((visibility("default"))) int H265_HAL_DecPicComplete(void) {
    ALOGD("H265_HAL_DecPicComplete() called");
    return 0;
}

/* Demangled: VP9_Read_Bit */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Bit(void) {
    ALOGD("VP9_Read_Bit() called");
    return 0;
}

/* Demangled: H264_EncodePPS */
extern "C" __attribute__((visibility("default"))) int H264_EncodePPS(void) {
    ALOGD("H264_EncodePPS() called");
    return 0;
}

/* Demangled: H264_GetLevel */
extern "C" __attribute__((visibility("default"))) int H264_GetLevel(void) {
    ALOGD("H264_GetLevel() called");
    return 0;
}

/* Demangled: H265_HAL_TrailingBits */
extern "C" __attribute__((visibility("default"))) int H265_HAL_TrailingBits(void) {
    ALOGD("H265_HAL_TrailingBits() called");
    return 0;
}

/* Demangled: H264_HAL_SeCodeNum */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SeCodeNum(void) {
    ALOGD("H264_HAL_SeCodeNum() called");
    return 0;
}

/* Exported Object: bDPBSizeBySPS */
extern "C" __attribute__((visibility("default"))) void* bDPBSizeBySPS = NULL;

/* Exported Object: vp9_switchable_interp_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_switchable_interp_tree = NULL;

/* Exported Object: gMPEG4_ENC_DRV_SW_IF */
extern "C" __attribute__((visibility("default"))) void* gMPEG4_ENC_DRV_SW_IF = NULL;

/* Demangled: H265_HAL_HWLock_sec */
extern "C" __attribute__((visibility("default"))) int H265_HAL_HWLock_sec(void) {
    ALOGD("H265_HAL_HWLock_sec() called");
    return 0;
}

/* Demangled: H264_HAL_GetBitStreamFlg */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetBitStreamFlg(void) {
    ALOGD("H264_HAL_GetBitStreamFlg() called");
    return 0;
}

/* Demangled: VP8_DecInit */
extern "C" __attribute__((visibility("default"))) int VP8_DecInit(void) {
    ALOGD("VP8_DecInit() called");
    return 0;
}

/* Demangled: VP9_Put_To_Display_List */
extern "C" __attribute__((visibility("default"))) int VP9_Put_To_Display_List(void) {
    ALOGD("VP9_Put_To_Display_List() called");
    return 0;
}

/* Demangled: VC1GetFreeInputBuffer */
extern "C" __attribute__((visibility("default"))) int VC1GetFreeInputBuffer(void) {
    ALOGD("VC1GetFreeInputBuffer() called");
    return 0;
}

/* Demangled: SearchStartCode */
extern "C" __attribute__((visibility("default"))) int SearchStartCode(void) {
    ALOGD("SearchStartCode() called");
    return 0;
}

/* Demangled: H265_RBSPGetBitOffset */
extern "C" __attribute__((visibility("default"))) int H265_RBSPGetBitOffset(void) {
    ALOGD("H265_RBSPGetBitOffset() called");
    return 0;
}

/* Demangled: H264_DEBUG_DumpSecureBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H264_DEBUG_DumpSecureBitStreamBuffer(void) {
    ALOGD("H264_DEBUG_DumpSecureBitStreamBuffer() called");
    return 0;
}

/* Demangled: H264_TestUE */
extern "C" __attribute__((visibility("default"))) int H264_TestUE(void) {
    ALOGD("H264_TestUE() called");
    return 0;
}

/* Demangled: VP8_ReadVP8PP */
extern "C" __attribute__((visibility("default"))) int VP8_ReadVP8PP(void) {
    ALOGD("VP8_ReadVP8PP() called");
    return 0;
}

/* Demangled: GetDecoderLibType */
extern "C" __attribute__((visibility("default"))) int GetDecoderLibType(void) {
    ALOGD("GetDecoderLibType() called");
    return 0;
}

/* Demangled: H265_DEBUG_DumpBitStreamBuffer */
extern "C" __attribute__((visibility("default"))) int H265_DEBUG_DumpBitStreamBuffer(void) {
    ALOGD("H265_DEBUG_DumpBitStreamBuffer() called");
    return 0;
}

/* Demangled: HEVC_SetHWModeSel */
extern "C" __attribute__((visibility("default"))) int HEVC_SetHWModeSel(void) {
    ALOGD("HEVC_SetHWModeSel() called");
    return 0;
}

/* Demangled: H264_HAL_Reording */
extern "C" __attribute__((visibility("default"))) int H264_HAL_Reording(void) {
    ALOGD("H264_HAL_Reording() called");
    return 0;
}

/* Demangled: H264_HAL_WriteSYS */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteSYS(void) {
    ALOGD("H264_HAL_WriteSYS() called");
    return 0;
}

/* Demangled: bChkRefInfo */
extern "C" __attribute__((visibility("default"))) int bChkRefInfo(void) {
    ALOGD("bChkRefInfo() called");
    return 0;
}

/* Demangled: H264_EncodeFrameSkipEnc */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameSkipEnc(void) {
    ALOGD("H264_EncodeFrameSkipEnc() called");
    return 0;
}

/* Demangled: setPRefPicList */
extern "C" __attribute__((visibility("default"))) int setPRefPicList(void) {
    ALOGD("setPRefPicList() called");
    return 0;
}

/* Demangled: H264_SetHWModeSel */
extern "C" __attribute__((visibility("default"))) int H264_SetHWModeSel(void) {
    ALOGD("H264_SetHWModeSel() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: eVEncDrvEncode */
extern "C" __attribute__((visibility("default"))) int eVEncDrvEncode(void) {
    ALOGD("eVEncDrvEncode() called");
    return 0;
}

/* Demangled: H265_HAL_InitH265BarrelShift */
extern "C" __attribute__((visibility("default"))) int H265_HAL_InitH265BarrelShift(void) {
    ALOGD("H265_HAL_InitH265BarrelShift() called");
    return 0;
}

/* Demangled: H265_HAL_ReadHEVCMV */
extern "C" __attribute__((visibility("default"))) int H265_HAL_ReadHEVCMV(void) {
    ALOGD("H265_HAL_ReadHEVCMV() called");
    return 0;
}

/* Demangled: h264_dec_init */
extern "C" __attribute__((visibility("default"))) int h264_dec_init(void) {
    ALOGD("h264_dec_init() called");
    return 0;
}

/* Demangled: mpeg4_enc_encode */
extern "C" __attribute__((visibility("default"))) int mpeg4_enc_encode(void) {
    ALOGD("mpeg4_enc_encode() called");
    return 0;
}

/* Demangled: H264_GetRCCode */
extern "C" __attribute__((visibility("default"))) int H264_GetRCCode(void) {
    ALOGD("H264_GetRCCode() called");
    return 0;
}

/* Demangled: HEVC_SetFrmInfo */
extern "C" __attribute__((visibility("default"))) int HEVC_SetFrmInfo(void) {
    ALOGD("HEVC_SetFrmInfo() called");
    return 0;
}

/* Demangled: H265_HAL_GetYCbCrCRC */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetYCbCrCRC(void) {
    ALOGD("H265_HAL_GetYCbCrCRC() called");
    return 0;
}

/* Demangled: H265_InitFBufInfo */
extern "C" __attribute__((visibility("default"))) int H265_InitFBufInfo(void) {
    ALOGD("H265_InitFBufInfo() called");
    return 0;
}

/* Exported Object: H265_sigLastScanCG32x32 */
extern "C" __attribute__((visibility("default"))) void* H265_sigLastScanCG32x32 = NULL;

/* Demangled: Vdec_Drv_H264_initMaxBufferSize */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_initMaxBufferSize(void) {
    ALOGD("Vdec_Drv_H264_initMaxBufferSize() called");
    return 0;
}

/* Demangled: VP9_Get_FreeFb */
extern "C" __attribute__((visibility("default"))) int VP9_Get_FreeFb(void) {
    ALOGD("VP9_Get_FreeFb() called");
    return 0;
}

/* Demangled: H264_AddTSVCModifySyntax */
extern "C" __attribute__((visibility("default"))) int H264_AddTSVCModifySyntax(void) {
    ALOGD("H264_AddTSVCModifySyntax() called");
    return 0;
}

/* Demangled: vc1_dec_getDisplayBuffer */
extern "C" __attribute__((visibility("default"))) int vc1_dec_getDisplayBuffer(void) {
    ALOGD("vc1_dec_getDisplayBuffer() called");
    return 0;
}

/* Demangled: H265_GetColorDesc */
extern "C" __attribute__((visibility("default"))) int H265_GetColorDesc(void) {
    ALOGD("H265_GetColorDesc() called");
    return 0;
}

/* Demangled: VP9_HAL_WriteVLDTOP */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_WriteVLDTOP(void) {
    ALOGD("VP9_HAL_WriteVLDTOP() called");
    return 0;
}

/* Demangled: H264_HAL_InitH264BarrelShifterAlign */
extern "C" __attribute__((visibility("default"))) int H264_HAL_InitH264BarrelShifterAlign(void) {
    ALOGD("H264_HAL_InitH264BarrelShifterAlign() called");
    return 0;
}

/* Demangled: VP8_DumpReg */
extern "C" __attribute__((visibility("default"))) int VP8_DumpReg(void) {
    ALOGD("VP8_DumpReg() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: EncDrvAddFrameSizes */
extern "C" __attribute__((visibility("default"))) int EncDrvAddFrameSizes(void) {
    ALOGD("EncDrvAddFrameSizes() called");
    return 0;
}

/* Exported Object: gH264_ENC_DRV_SW_IF */
extern "C" __attribute__((visibility("default"))) void* gH264_ENC_DRV_SW_IF = NULL;

/* Demangled: H264_HAL_B1ListSwap */
extern "C" __attribute__((visibility("default"))) int H264_HAL_B1ListSwap(void) {
    ALOGD("H264_HAL_B1ListSwap() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_decode_sec_tbase */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_decode_sec_tbase(void) {
    ALOGD("Vdec_Drv_H264_decode_sec_tbase() called");
    return 0;
}

/* Demangled: initSPS */
extern "C" __attribute__((visibility("default"))) int initSPS(void) {
    ALOGD("initSPS() called");
    return 0;
}

/* Demangled: get_binary_prob */
extern "C" __attribute__((visibility("default"))) int get_binary_prob(void) {
    ALOGD("get_binary_prob() called");
    return 0;
}

/* Demangled: tx_counts_to_branch_counts_8x8 */
extern "C" __attribute__((visibility("default"))) int tx_counts_to_branch_counts_8x8(void) {
    ALOGD("tx_counts_to_branch_counts_8x8() called");
    return 0;
}

/* Demangled: H265_HAL_WrapperOffset */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WrapperOffset(void) {
    ALOGD("H265_HAL_WrapperOffset() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_getFree */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_getFree(void) {
    ALOGD("Vdec_Drv_H264_getFree() called");
    return 0;
}

/* Demangled: VP9_Is_Compound_Ref_Allowed */
extern "C" __attribute__((visibility("default"))) int VP9_Is_Compound_Ref_Allowed(void) {
    ALOGD("VP9_Is_Compound_Ref_Allowed() called");
    return 0;
}

/* Exported Object: H265_quantTSDefault4x4 */
extern "C" __attribute__((visibility("default"))) void* H265_quantTSDefault4x4 = NULL;

/* Demangled: VP9_Set_MC_Ref_Scaling_Enable */
extern "C" __attribute__((visibility("default"))) int VP9_Set_MC_Ref_Scaling_Enable(void) {
    ALOGD("VP9_Set_MC_Ref_Scaling_Enable() called");
    return 0;
}

/* Demangled: VP9_UPDATE_COEF_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_COEF_PROBS(void) {
    ALOGD("VP9_UPDATE_COEF_PROBS() called");
    return 0;
}

/* Demangled: H264_HAL_AVCVLDGetBitS */
extern "C" __attribute__((visibility("default"))) int H264_HAL_AVCVLDGetBitS(void) {
    ALOGD("H264_HAL_AVCVLDGetBitS() called");
    return 0;
}

/* Demangled: vp9_dec_decode_sec */
extern "C" __attribute__((visibility("default"))) int vp9_dec_decode_sec(void) {
    ALOGD("vp9_dec_decode_sec() called");
    return 0;
}

/* Demangled: VP9_Read_Frame_Ref_Mode_Probs */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Frame_Ref_Mode_Probs(void) {
    ALOGD("VP9_Read_Frame_Ref_Mode_Probs() called");
    return 0;
}

/* Demangled: H264_UpdateViLTEBitrate */
extern "C" __attribute__((visibility("default"))) int H264_UpdateViLTEBitrate(void) {
    ALOGD("H264_UpdateViLTEBitrate() called");
    return 0;
}

/* Demangled: h264_enc_set_RFSOn */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_RFSOn(void) {
    ALOGD("h264_enc_set_RFSOn() called");
    return 0;
}

/* Demangled: HEVC_ModifyBufSize */
extern "C" __attribute__((visibility("default"))) int HEVC_ModifyBufSize(void) {
    ALOGD("HEVC_ModifyBufSize() called");
    return 0;
}

/* Demangled: DrvSetSCNOn */
extern "C" __attribute__((visibility("default"))) int DrvSetSCNOn(void) {
    ALOGD("DrvSetSCNOn() called");
    return 0;
}

/* Demangled: ReleaseYUV */
extern "C" __attribute__((visibility("default"))) int ReleaseYUV(void) {
    ALOGD("ReleaseYUV() called");
    return 0;
}

/* Demangled: H265_HAL_PredWeightTable */
extern "C" __attribute__((visibility("default"))) int H265_HAL_PredWeightTable(void) {
    ALOGD("H265_HAL_PredWeightTable() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_Decode_End */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_Decode_End(void) {
    ALOGD("Vdec_Drv_VP9_Decode_End() called");
    return 0;
}

/* Demangled: VC1FindFreeInputBuffer */
extern "C" __attribute__((visibility("default"))) int VC1FindFreeInputBuffer(void) {
    ALOGD("VC1FindFreeInputBuffer() called");
    return 0;
}

/* Demangled: EncH264ChangeResolation */
extern "C" __attribute__((visibility("default"))) int EncH264ChangeResolation(void) {
    ALOGD("EncH264ChangeResolation() called");
    return 0;
}

/* Demangled: MPEG2_Next_Start_Code */
extern "C" __attribute__((visibility("default"))) int MPEG2_Next_Start_Code(void) {
    ALOGD("MPEG2_Next_Start_Code() called");
    return 0;
}

/* Demangled: H265_GetInstByID */
extern "C" __attribute__((visibility("default"))) int H265_GetInstByID(void) {
    ALOGD("H265_GetInstByID() called");
    return 0;
}

/* Demangled: H264_HAL_WriteMISC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteMISC(void) {
    ALOGD("H264_HAL_WriteMISC() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_destroy */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_destroy(void) {
    ALOGD("Vdec_Drv_H264_destroy() called");
    return 0;
}

/* Exported Object: HDR_UUID */
extern "C" __attribute__((visibility("default"))) void* HDR_UUID = NULL;

/* Demangled: h264_sw_enc_deInit */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_deInit(void) {
    ALOGD("h264_sw_enc_deInit() called");
    return 0;
}

/* Demangled: H265_HAL_WriteSYS */
extern "C" __attribute__((visibility("default"))) int H265_HAL_WriteSYS(void) {
    ALOGD("H265_HAL_WriteSYS() called");
    return 0;
}

/* Demangled: H264SlidingWindowProce */
extern "C" __attribute__((visibility("default"))) int H264SlidingWindowProce(void) {
    ALOGD("H264SlidingWindowProce() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadMISC */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadMISC(void) {
    ALOGD("VP9_HAL_ReadMISC() called");
    return 0;
}

/* Demangled: VP9_Setup_Segmentation */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Segmentation(void) {
    ALOGD("VP9_Setup_Segmentation() called");
    return 0;
}

/* Demangled: h264_sw_enc_getParameter */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_getParameter(void) {
    ALOGD("h264_sw_enc_getParameter() called");
    return 0;
}

/* Demangled: VP8_ReadSOCGCON */
extern "C" __attribute__((visibility("default"))) int VP8_ReadSOCGCON(void) {
    ALOGD("VP8_ReadSOCGCON() called");
    return 0;
}

/* Exported Object: bForceNoReorderModeForVilteDebug */
extern "C" __attribute__((visibility("default"))) void* bForceNoReorderModeForVilteDebug = NULL;

/* Demangled: destroyPPS */
extern "C" __attribute__((visibility("default"))) int destroyPPS(void) {
    ALOGD("destroyPPS() called");
    return 0;
}

/* Demangled: VP8_SetBufStatus */
extern "C" __attribute__((visibility("default"))) int VP8_SetBufStatus(void) {
    ALOGD("VP8_SetBufStatus() called");
    return 0;
}

/* Exported Object: gfnMtkVP9SecVdec_tlcDecode */
extern "C" __attribute__((visibility("default"))) void* gfnMtkVP9SecVdec_tlcDecode = NULL;

/* Demangled: VP9_Set_SQT_Q_Table */
extern "C" __attribute__((visibility("default"))) int VP9_Set_SQT_Q_Table(void) {
    ALOGD("VP9_Set_SQT_Q_Table() called");
    return 0;
}

/* Demangled: H264_CheckHWParameter */
extern "C" __attribute__((visibility("default"))) int H264_CheckHWParameter(void) {
    ALOGD("H264_CheckHWParameter() called");
    return 0;
}

/* Demangled: H264_SeqLvlMMRSetting_EncInfo */
extern "C" __attribute__((visibility("default"))) int H264_SeqLvlMMRSetting_EncInfo(void) {
    ALOGD("H264_SeqLvlMMRSetting_EncInfo() called");
    return 0;
}

/* Demangled: H265_parsePPS */
extern "C" __attribute__((visibility("default"))) int H265_parsePPS(void) {
    ALOGD("H265_parsePPS() called");
    return 0;
}

/* Demangled: H264_HAL_SetPRefPicListReg */
extern "C" __attribute__((visibility("default"))) int H264_HAL_SetPRefPicListReg(void) {
    ALOGD("H264_HAL_SetPRefPicListReg() called");
    return 0;
}

/* Demangled: checkFixedMaxBufNeedReconfig */
extern "C" __attribute__((visibility("default"))) int checkFixedMaxBufNeedReconfig(void) {
    ALOGD("checkFixedMaxBufNeedReconfig() called");
    return 0;
}

/* Demangled: destroySEI */
extern "C" __attribute__((visibility("default"))) int destroySEI(void) {
    ALOGD("destroySEI() called");
    return 0;
}

/* Demangled: mpeg4_hw_reg_init */
extern "C" __attribute__((visibility("default"))) int mpeg4_hw_reg_init(void) {
    ALOGD("mpeg4_hw_reg_init() called");
    return 0;
}

/* Demangled: mpeg4_dec_init */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_init(void) {
    ALOGD("mpeg4_dec_init() called");
    return 0;
}

/* Exported Object: vp9_mv_fp_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_fp_tree = NULL;

/* Demangled: VP9_InitBool */
extern "C" __attribute__((visibility("default"))) int VP9_InitBool(void) {
    ALOGD("VP9_InitBool() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_open */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_open(void) {
    ALOGD("Vdec_Drv_H265_open() called");
    return 0;
}

/* Demangled: H265_parseSEI */
extern "C" __attribute__((visibility("default"))) int H265_parseSEI(void) {
    ALOGD("H265_parseSEI() called");
    return 0;
}

/* Demangled: Vdec_Drv_VP9_SuperFrame */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_VP9_SuperFrame(void) {
    ALOGD("Vdec_Drv_VP9_SuperFrame() called");
    return 0;
}

/* Demangled: h264_enc_set_ForceIntraOff */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_ForceIntraOff(void) {
    ALOGD("h264_enc_set_ForceIntraOff() called");
    return 0;
}

/* Demangled: h264_sw_enc_get_param_interlace */
extern "C" __attribute__((visibility("default"))) int h264_sw_enc_get_param_interlace(void) {
    ALOGD("h264_sw_enc_get_param_interlace() called");
    return 0;
}

/* Demangled: H265_HAL_GetPDNSetting */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetPDNSetting(void) {
    ALOGD("H265_HAL_GetPDNSetting() called");
    return 0;
}

/* Exported Object: gfnMtkH264SecVdec_tlcOpen */
extern "C" __attribute__((visibility("default"))) void* gfnMtkH264SecVdec_tlcOpen = NULL;

/* Demangled: VideoEncoderAllocateBitstreamBuffer2 */
extern "C" __attribute__((visibility("default"))) int VideoEncoderAllocateBitstreamBuffer2(void) {
    ALOGD("VideoEncoderAllocateBitstreamBuffer2() called");
    return 0;
}

/* Demangled: DrvPutOutputBufferCB */
extern "C" __attribute__((visibility("default"))) int DrvPutOutputBufferCB(void) {
    ALOGD("DrvPutOutputBufferCB() called");
    return 0;
}

/* Demangled: H265_HAL_GetStartCode */
extern "C" __attribute__((visibility("default"))) int H265_HAL_GetStartCode(void) {
    ALOGD("H265_HAL_GetStartCode() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_getDisplay */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_getDisplay(void) {
    ALOGD("Vdec_Drv_H265_getDisplay() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: VP9_Read_Literal */
extern "C" __attribute__((visibility("default"))) int VP9_Read_Literal(void) {
    ALOGD("VP9_Read_Literal() called");
    return 0;
}

/* Demangled: VideoEncoderAllocateBitstreamBuffer3 */
extern "C" __attribute__((visibility("default"))) int VideoEncoderAllocateBitstreamBuffer3(void) {
    ALOGD("VideoEncoderAllocateBitstreamBuffer3() called");
    return 0;
}

/* Demangled: eVDecDrvRelease */
extern "C" __attribute__((visibility("default"))) int eVDecDrvRelease(void) {
    ALOGD("eVDecDrvRelease() called");
    return 0;
}

/* Demangled: parseSliceHeaderInfo */
extern "C" __attribute__((visibility("default"))) int parseSliceHeaderInfo(void) {
    ALOGD("parseSliceHeaderInfo() called");
    return 0;
}

/* Demangled: VP8_InitDeQTable */
extern "C" __attribute__((visibility("default"))) int VP8_InitDeQTable(void) {
    ALOGD("VP8_InitDeQTable() called");
    return 0;
}

/* Demangled: VP9_Setup_Quantization */
extern "C" __attribute__((visibility("default"))) int VP9_Setup_Quantization(void) {
    ALOGD("VP9_Setup_Quantization() called");
    return 0;
}

/* Exported Object: ucH264RCPUCode_VILTE */
extern "C" __attribute__((visibility("default"))) void* ucH264RCPUCode_VILTE = NULL;

/* Demangled: H265_HAL_VDec_DumpReg */
extern "C" __attribute__((visibility("default"))) int H265_HAL_VDec_DumpReg(void) {
    ALOGD("H265_HAL_VDec_DumpReg() called");
    return 0;
}

/* Demangled: H264_HAL_GetBitStreamShift */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetBitStreamShift(void) {
    ALOGD("H264_HAL_GetBitStreamShift() called");
    return 0;
}

/* Exported Object: literal_to_filter */
extern "C" __attribute__((visibility("default"))) void* literal_to_filter = NULL;

/* Demangled: H264_SeqLvlMMRSetting */
extern "C" __attribute__((visibility("default"))) int H264_SeqLvlMMRSetting(void) {
    ALOGD("H264_SeqLvlMMRSetting() called");
    return 0;
}

/* Demangled: vc1_dec_getFreeInputBuffer */
extern "C" __attribute__((visibility("default"))) int vc1_dec_getFreeInputBuffer(void) {
    ALOGD("vc1_dec_getFreeInputBuffer() called");
    return 0;
}

/* Demangled: mpeg4_free_working_buffer */
extern "C" __attribute__((visibility("default"))) int mpeg4_free_working_buffer(void) {
    ALOGD("mpeg4_free_working_buffer() called");
    return 0;
}

/* Demangled: VP8_CheckCRCResult */
extern "C" __attribute__((visibility("default"))) int VP8_CheckCRCResult(void) {
    ALOGD("VP8_CheckCRCResult() called");
    return 0;
}

/* Demangled: H264_EncodeSkipFrame */
extern "C" __attribute__((visibility("default"))) int H264_EncodeSkipFrame(void) {
    ALOGD("H264_EncodeSkipFrame() called");
    return 0;
}

/* Demangled: mpeg4_dec_decodeChecker */
extern "C" __attribute__((visibility("default"))) int mpeg4_dec_decodeChecker(void) {
    ALOGD("mpeg4_dec_decodeChecker() called");
    return 0;
}

/* Demangled: H264_HAL_WriteAVCMV */
extern "C" __attribute__((visibility("default"))) int H264_HAL_WriteAVCMV(void) {
    ALOGD("H264_HAL_WriteAVCMV() called");
    return 0;
}

/* Demangled: h264_dec_set_slice_handle */
extern "C" __attribute__((visibility("default"))) int h264_dec_set_slice_handle(void) {
    ALOGD("h264_dec_set_slice_handle() called");
    return 0;
}

/* Demangled: VP8_ReverseInteger */
extern "C" __attribute__((visibility("default"))) int VP8_ReverseInteger(void) {
    ALOGD("VP8_ReverseInteger() called");
    return 0;
}

/* Demangled: h264_enc_getParameter */
extern "C" __attribute__((visibility("default"))) int h264_enc_getParameter(void) {
    ALOGD("h264_enc_getParameter() called");
    return 0;
}

/* Demangled: H265_HAL_AssignQuantParam */
extern "C" __attribute__((visibility("default"))) int H265_HAL_AssignQuantParam(void) {
    ALOGD("H265_HAL_AssignQuantParam() called");
    return 0;
}

/* Demangled: ReplaceNALSizeWithNALPrefix2Bytes */
extern "C" __attribute__((visibility("default"))) int ReplaceNALSizeWithNALPrefix2Bytes(void) {
    ALOGD("ReplaceNALSizeWithNALPrefix2Bytes() called");
    return 0;
}

/* Exported Object: bLengthOfNALSizeSet */
extern "C" __attribute__((visibility("default"))) void* bLengthOfNALSizeSet = NULL;

/* Demangled: RBSPGetUE */
extern "C" __attribute__((visibility("default"))) int RBSPGetUE(void) {
    ALOGD("RBSPGetUE() called");
    return 0;
}

/* Demangled: MPEG2_Parse_Seq_Disp_Ext */
extern "C" __attribute__((visibility("default"))) int MPEG2_Parse_Seq_Disp_Ext(void) {
    ALOGD("MPEG2_Parse_Seq_Disp_Ext() called");
    return 0;
}

/* Demangled: VP8_FlushCtxProbs */
extern "C" __attribute__((visibility("default"))) int VP8_FlushCtxProbs(void) {
    ALOGD("VP8_FlushCtxProbs() called");
    return 0;
}

/* Demangled: VP8_HwAccCoefProbUpdate */
extern "C" __attribute__((visibility("default"))) int VP8_HwAccCoefProbUpdate(void) {
    ALOGD("VP8_HwAccCoefProbUpdate() called");
    return 0;
}

/* Demangled: VP8_RemoveFromFrmBufDispList */
extern "C" __attribute__((visibility("default"))) int VP8_RemoveFromFrmBufDispList(void) {
    ALOGD("VP8_RemoveFromFrmBufDispList() called");
    return 0;
}

/* Demangled: Vdec_Drv_H264_open_sec */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H264_open_sec(void) {
    ALOGD("Vdec_Drv_H264_open_sec() called");
    return 0;
}

/* Demangled: EncMp4Frame */
extern "C" __attribute__((visibility("default"))) int EncMp4Frame(void) {
    ALOGD("EncMp4Frame() called");
    return 0;
}

/* Demangled: h264_enc_init_sec */
extern "C" __attribute__((visibility("default"))) int h264_enc_init_sec(void) {
    ALOGD("h264_enc_init_sec() called");
    return 0;
}

/* Exported Object: fgAVCDumpRegister */
extern "C" __attribute__((visibility("default"))) void* fgAVCDumpRegister = NULL;

/* Demangled: H264_TSVC_set_EncParam */
extern "C" __attribute__((visibility("default"))) int H264_TSVC_set_EncParam(void) {
    ALOGD("H264_TSVC_set_EncParam() called");
    return 0;
}

/* Demangled: H265_HAL_PowerDown */
extern "C" __attribute__((visibility("default"))) int H265_HAL_PowerDown(void) {
    ALOGD("H265_HAL_PowerDown() called");
    return 0;
}

/* Demangled: H265_HAL_HWLock */
extern "C" __attribute__((visibility("default"))) int H265_HAL_HWLock(void) {
    ALOGD("H265_HAL_HWLock() called");
    return 0;
}

/* Demangled: H264_HAL_GetYCbCrCRC */
extern "C" __attribute__((visibility("default"))) int H264_HAL_GetYCbCrCRC(void) {
    ALOGD("H264_HAL_GetYCbCrCRC() called");
    return 0;
}

/* Demangled: get_num_property */
extern "C" __attribute__((visibility("default"))) int get_num_property(void) {
    ALOGD("get_num_property() called");
    return 0;
}

/* Demangled: MPEG4BufferInvalidateCache */
extern "C" __attribute__((visibility("default"))) int MPEG4BufferInvalidateCache(void) {
    ALOGD("MPEG4BufferInvalidateCache() called");
    return 0;
}

/* Demangled: VP9_UPDATE_COMP_INTER_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_COMP_INTER_PROBS(void) {
    ALOGD("VP9_UPDATE_COMP_INTER_PROBS() called");
    return 0;
}

/* Demangled: H265_NALGroup */
extern "C" __attribute__((visibility("default"))) int H265_NALGroup(void) {
    ALOGD("H265_NALGroup() called");
    return 0;
}

/* Demangled: H265_VdecBufferFlushRange */
extern "C" __attribute__((visibility("default"))) int H265_VdecBufferFlushRange(void) {
    ALOGD("H265_VdecBufferFlushRange() called");
    return 0;
}

/* Demangled: HEVC_EncodeSPS */
extern "C" __attribute__((visibility("default"))) int HEVC_EncodeSPS(void) {
    ALOGD("HEVC_EncodeSPS() called");
    return 0;
}

/* Demangled: cleanSliceHeader */
extern "C" __attribute__((visibility("default"))) int cleanSliceHeader(void) {
    ALOGD("cleanSliceHeader() called");
    return 0;
}

/* Demangled: mpeg2_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int mpeg2_dec_getParameter(void) {
    ALOGD("mpeg2_dec_getParameter() called");
    return 0;
}

/* Demangled: VP9_UPDATE_SINGLE_REF_PROBS */
extern "C" __attribute__((visibility("default"))) int VP9_UPDATE_SINGLE_REF_PROBS(void) {
    ALOGD("VP9_UPDATE_SINGLE_REF_PROBS() called");
    return 0;
}

/* Demangled: h264_enc_set_EncParam */
extern "C" __attribute__((visibility("default"))) int h264_enc_set_EncParam(void) {
    ALOGD("h264_enc_set_EncParam() called");
    return 0;
}

/* Demangled: H265_GetFrameBufferFromFree */
extern "C" __attribute__((visibility("default"))) int H265_GetFrameBufferFromFree(void) {
    ALOGD("H265_GetFrameBufferFromFree() called");
    return 0;
}

/* Demangled: H265_TestSE */
extern "C" __attribute__((visibility("default"))) int H265_TestSE(void) {
    ALOGD("H265_TestSE() called");
    return 0;
}

/* Demangled: H264PutFrameBufferToFree */
extern "C" __attribute__((visibility("default"))) int H264PutFrameBufferToFree(void) {
    ALOGD("H264PutFrameBufferToFree() called");
    return 0;
}

/* Demangled: Vdec_Drv_H265_setPara */
extern "C" __attribute__((visibility("default"))) int Vdec_Drv_H265_setPara(void) {
    ALOGD("Vdec_Drv_H265_setPara() called");
    return 0;
}

/* Demangled: h265_dec_getParameter */
extern "C" __attribute__((visibility("default"))) int h265_dec_getParameter(void) {
    ALOGD("h265_dec_getParameter() called");
    return 0;
}

/* Demangled: H265_parseHRD */
extern "C" __attribute__((visibility("default"))) int H265_parseHRD(void) {
    ALOGD("H265_parseHRD() called");
    return 0;
}

/* Demangled: H264_EncodeFrameEnc_TriggerHW */
extern "C" __attribute__((visibility("default"))) int H264_EncodeFrameEnc_TriggerHW(void) {
    ALOGD("H264_EncodeFrameEnc_TriggerHW() called");
    return 0;
}

/* Demangled: VP8_AddToFrmBufDispList */
extern "C" __attribute__((visibility("default"))) int VP8_AddToFrmBufDispList(void) {
    ALOGD("VP8_AddToFrmBufDispList() called");
    return 0;
}

/* Demangled: VP8_WaitVLDFetchOK */
extern "C" __attribute__((visibility("default"))) int VP8_WaitVLDFetchOK(void) {
    ALOGD("VP8_WaitVLDFetchOK() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadVLDTOP */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadVLDTOP(void) {
    ALOGD("VP9_HAL_ReadVLDTOP() called");
    return 0;
}

/* Demangled: VP9_HAL_ReadPP */
extern "C" __attribute__((visibility("default"))) int VP9_HAL_ReadPP(void) {
    ALOGD("VP9_HAL_ReadPP() called");
    return 0;
}
