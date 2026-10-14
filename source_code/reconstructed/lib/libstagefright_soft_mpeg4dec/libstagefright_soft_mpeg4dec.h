/*
 * Reverse-Engineered ABI Specification for: libstagefright_soft_mpeg4dec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_soft_mpeg4dec.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4DEC_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4DEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void);

/* Symbol: movePointerTo */
/* Demangled: movePointerTo */
int movePointerTo(void);

/* Symbol: CombinedHorzVertRingFilter */
/* Demangled: CombinedHorzVertRingFilter */
int CombinedHorzVertRingFilter(void);

/* Symbol: CopyVopMB */
/* Demangled: CopyVopMB */
int CopyVopMB(void);

/* Symbol: GetMBheaderDataPart_DQUANT_DC */
/* Demangled: GetMBheaderDataPart_DQUANT_DC */
int GetMBheaderDataPart_DQUANT_DC(void);

/* Symbol: PV_MCBPCtabintra */
/* Demangled: PV_MCBPCtabintra */
extern void* PV_MCBPCtabintra;

/* Symbol: PVDecodeVopHeader */
/* Demangled: PVDecodeVopHeader */
int PVDecodeVopHeader(void);

/* Symbol: GetMBheaderDataPart_P */
/* Demangled: GetMBheaderDataPart_P */
int GetMBheaderDataPart_P(void);

/* Symbol: idctrow3_intra */
/* Demangled: idctrow3_intra */
int idctrow3_intra(void);

/* Symbol: PVDecodeVopBody */
/* Demangled: PVDecodeVopBody */
int PVDecodeVopBody(void);

/* Symbol: PVSetReferenceYUV */
/* Demangled: PVSetReferenceYUV */
int PVSetReferenceYUV(void);

/* Symbol: BitstreamReadBits32HC */
/* Demangled: BitstreamReadBits32HC */
int BitstreamReadBits32HC(void);

/* Symbol: CombinedHorzVertFilter_NoSoftDeblocking */
/* Demangled: CombinedHorzVertFilter_NoSoftDeblocking */
int CombinedHorzVertFilter_NoSoftDeblocking(void);

/* Symbol: GetMBData */
/* Demangled: GetMBData */
int GetMBData(void);

/* Symbol: PVLocateH263FrameHeader */
/* Demangled: PVLocateH263FrameHeader */
int PVLocateH263FrameHeader(void);

/* Symbol: PVGetVideoDimensions */
/* Demangled: PVGetVideoDimensions */
int PVGetVideoDimensions(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: DecodeDataPart_P_VideoPacket */
/* Demangled: DecodeDataPart_P_VideoPacket */
int DecodeDataPart_P_VideoPacket(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void);

/* Symbol: quickSearchDCM */
/* Demangled: quickSearchDCM */
int quickSearchDCM(void);

/* Symbol: _Z15Copy_Blk_to_VopPhS_i */
/* Demangled: Copy_Blk_to_Vop(unsigned char*, unsigned char*, int) */
int _Z15Copy_Blk_to_VopPhS_i(void);

/* Symbol: FindMaxMin */
/* Demangled: FindMaxMin */
int FindMaxMin(void);

/* Symbol: PVDecPostProcess */
/* Demangled: PVDecPostProcess */
int PVDecPostProcess(void);

/* Symbol: PVGetVolInfo */
/* Demangled: PVGetVolInfo */
int PVGetVolInfo(void);

/* Symbol: VlcDequantH263InterBlock */
/* Demangled: VlcDequantH263InterBlock */
int VlcDequantH263InterBlock(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void);

/* Symbol: idctrow0 */
/* Demangled: idctrow0 */
int idctrow0(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE;

/* Symbol: GetMBData_DataPart */
/* Demangled: GetMBData_DataPart */
int GetMBData_DataPart(void);

/* Symbol: idctrow1 */
/* Demangled: idctrow1 */
int idctrow1(void);

/* Symbol: IsIntraFrame */
/* Demangled: IsIntraFrame */
int IsIntraFrame(void);

/* Symbol: idctrow2 */
/* Demangled: idctrow2 */
int idctrow2(void);

/* Symbol: PV_GobHeader */
/* Demangled: PV_GobHeader */
int PV_GobHeader(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void);

/* Symbol: quickSearchMotionMarker */
/* Demangled: quickSearchMotionMarker */
int quickSearchMotionMarker(void);

/* Symbol: cal_dc_scaler */
/* Demangled: cal_dc_scaler */
int cal_dc_scaler(void);

/* Symbol: idctrow3 */
/* Demangled: idctrow3 */
int idctrow3(void);

/* Symbol: idctrow4 */
/* Demangled: idctrow4 */
int idctrow4(void);

/* Symbol: MBMotionComp */
/* Demangled: MBMotionComp */
int MBMotionComp(void);

/* Symbol: PVGetDecMemoryUsage */
/* Demangled: PVGetDecMemoryUsage */
int PVGetDecMemoryUsage(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void);

/* Symbol: PVSearchNextM4VFrame */
/* Demangled: PVSearchNextM4VFrame */
int PVSearchNextM4VFrame(void);

/* Symbol: PV_H263SliceHeader */
/* Demangled: PV_H263SliceHeader */
int PV_H263SliceHeader(void);

/* Symbol: pp_semaphore_luma */
/* Demangled: pp_semaphore_luma */
int pp_semaphore_luma(void);

/* Symbol: PVGetDecFramerate */
/* Demangled: PVGetDecFramerate */
int PVGetDecFramerate(void);

/* Symbol: PutSKIPPED_B */
/* Demangled: PutSKIPPED_B */
int PutSKIPPED_B(void);

/* Symbol: PVGetDecOutputFrame */
/* Demangled: PVGetDecOutputFrame */
int PVGetDecOutputFrame(void);

/* Symbol: PV_DecodeVop */
/* Demangled: PV_DecodeVop */
int PV_DecodeVop(void);

/* Symbol: PV_VlcDecMCBPC_com_intra */
/* Demangled: PV_VlcDecMCBPC_com_intra */
int PV_VlcDecMCBPC_com_intra(void);

/* Symbol: PV_TMNMVtab0 */
/* Demangled: PV_TMNMVtab0 */
extern void* PV_TMNMVtab0;

/* Symbol: PVInitVideoDecoder */
/* Demangled: PVInitVideoDecoder */
int PVInitVideoDecoder(void);

/* Symbol: PV_BitstreamByteAlign */
/* Demangled: PV_BitstreamByteAlign */
int PV_BitstreamByteAlign(void);

/* Symbol: doDCACPrediction_I */
/* Demangled: doDCACPrediction_I */
int doDCACPrediction_I(void);

/* Symbol: PV_TMNMVtab1 */
/* Demangled: PV_TMNMVtab1 */
extern void* PV_TMNMVtab1;

/* Symbol: _ZN7android9SoftMPEG411initDecoderEv */
/* Demangled: android::SoftMPEG4::initDecoder() */
int _ZN7android9SoftMPEG411initDecoderEv(void);

/* Symbol: _ZN7android9SoftMPEG4C1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftMPEG4::SoftMPEG4(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android9SoftMPEG4C1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: PVLocateM4VFrameBoundary */
/* Demangled: PVLocateM4VFrameBoundary */
int PVLocateM4VFrameBoundary(void);

/* Symbol: PV_TMNMVtab2 */
/* Demangled: PV_TMNMVtab2 */
extern void* PV_TMNMVtab2;

/* Symbol: pp_semaphore_chroma_inter */
/* Demangled: pp_semaphore_chroma_inter */
int pp_semaphore_chroma_inter(void);

/* Symbol: VlcDecTCOEFShortHeader_AnnexI */
/* Demangled: VlcDecTCOEFShortHeader_AnnexI */
int VlcDecTCOEFShortHeader_AnnexI(void);

/* Symbol: PVSetPostProcType */
/* Demangled: PVSetPostProcType */
int PVSetPostProcType(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: PostProcSemaphore */
/* Demangled: PostProcSemaphore */
int PostProcSemaphore(void);

/* Symbol: PV_VlcDecMCBPC_com_inter */
/* Demangled: PV_VlcDecMCBPC_com_inter */
int PV_VlcDecMCBPC_com_inter(void);

/* Symbol: _ZN7android9SoftMPEG420onPortFlushCompletedEj */
/* Demangled: android::SoftMPEG4::onPortFlushCompleted(unsigned int) */
int _ZN7android9SoftMPEG420onPortFlushCompletedEj(void);

/* Symbol: quickSearchVideoPacketHeader */
/* Demangled: quickSearchVideoPacketHeader */
int quickSearchVideoPacketHeader(void);

/* Symbol: VlcDecTCOEFShortHeader */
/* Demangled: VlcDecTCOEFShortHeader */
int VlcDecTCOEFShortHeader(void);

/* Symbol: intra_max_run0 */
/* Demangled: intra_max_run0 */
extern void* intra_max_run0;

/* Symbol: BitstreamReadBits16 */
/* Demangled: BitstreamReadBits16 */
int BitstreamReadBits16(void);

/* Symbol: Deringing_Chroma */
/* Demangled: Deringing_Chroma */
int Deringing_Chroma(void);

/* Symbol: intra_max_run1 */
/* Demangled: intra_max_run1 */
extern void* intra_max_run1;

/* Symbol: BitstreamClose */
/* Demangled: BitstreamClose */
int BitstreamClose(void);

/* Symbol: Deringing_Luma */
/* Demangled: Deringing_Luma */
int Deringing_Luma(void);

/* Symbol: PV_VlcDecIntraDCPredSize */
/* Demangled: PV_VlcDecIntraDCPredSize */
int PV_VlcDecIntraDCPredSize(void);

/* Symbol: _ZN7android9SoftMPEG4D2Ev */
/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
int _ZN7android9SoftMPEG4D2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void);

/* Symbol: PV_DCT3Dtab0 */
/* Demangled: PV_DCT3Dtab0 */
extern void* PV_DCT3Dtab0;

/* Symbol: _ZN7android9SoftMPEG47onResetEv */
/* Demangled: android::SoftMPEG4::onReset() */
int _ZN7android9SoftMPEG47onResetEv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: DecodeDataPart_I_VideoPacket */
/* Demangled: DecodeDataPart_I_VideoPacket */
int DecodeDataPart_I_VideoPacket(void);

/* Symbol: PV_DCT3Dtab1 */
/* Demangled: PV_DCT3Dtab1 */
extern void* PV_DCT3Dtab1;

/* Symbol: inter_max_run0 */
/* Demangled: inter_max_run0 */
extern void* inter_max_run0;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void);

/* Symbol: PV_DCT3Dtab2 */
/* Demangled: PV_DCT3Dtab2 */
extern void* PV_DCT3Dtab2;

/* Symbol: inter_max_run1 */
/* Demangled: inter_max_run1 */
extern void* inter_max_run1;

/* Symbol: zigzag_inv */
/* Demangled: zigzag_inv */
extern void* zigzag_inv;

/* Symbol: _ZN7android9SoftMPEG4D1Ev */
/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
int _ZN7android9SoftMPEG4D1Ev(void);

/* Symbol: PV_DeScaleMVD */
/* Demangled: PV_DeScaleMVD */
int PV_DeScaleMVD(void);

/* Symbol: PV_DCT3Dtab3 */
/* Demangled: PV_DCT3Dtab3 */
extern void* PV_DCT3Dtab3;

/* Symbol: BitstreamCheckEndBuffer */
/* Demangled: BitstreamCheckEndBuffer */
int BitstreamCheckEndBuffer(void);

/* Symbol: BitstreamReset */
/* Demangled: BitstreamReset */
int BitstreamReset(void);

/* Symbol: H263_Deblock */
/* Demangled: H263_Deblock */
int H263_Deblock(void);

/* Symbol: PV_DCT3Dtab4 */
/* Demangled: PV_DCT3Dtab4 */
extern void* PV_DCT3Dtab4;

/* Symbol: intra_max_level */
/* Demangled: intra_max_level */
extern void* intra_max_level;

/* Symbol: idctrow2_intra */
/* Demangled: idctrow2_intra */
int idctrow2_intra(void);

/* Symbol: PutSKIPPED_MB */
/* Demangled: PutSKIPPED_MB */
int PutSKIPPED_MB(void);

/* Symbol: PV_DCT3Dtab5 */
/* Demangled: PV_DCT3Dtab5 */
extern void* PV_DCT3Dtab5;

/* Symbol: _ZN7android9SoftMPEG4D0Ev */
/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
int _ZN7android9SoftMPEG4D0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void);

/* Symbol: PV_BitstreamShowBitsByteAlignNoForceStuffing */
/* Demangled: PV_BitstreamShowBitsByteAlignNoForceStuffing */
int PV_BitstreamShowBitsByteAlignNoForceStuffing(void);

/* Symbol: MBlockIDCT */
/* Demangled: MBlockIDCT */
int MBlockIDCT(void);

/* Symbol: SkippedMBMotionComp */
/* Demangled: SkippedMBMotionComp */
int SkippedMBMotionComp(void);

/* Symbol: PVDecSetEnhReference */
/* Demangled: PVDecSetEnhReference */
int PVDecSetEnhReference(void);

/* Symbol: PV_VlcDecMCBPC_com_inter_H263 */
/* Demangled: PV_VlcDecMCBPC_com_inter_H263 */
int PV_VlcDecMCBPC_com_inter_H263(void);

/* Symbol: PV_DCT3Dtab6 */
/* Demangled: PV_DCT3Dtab6 */
extern void* PV_DCT3Dtab6;

/* Symbol: VlcDecTCOEFShortHeader_AnnexT */
/* Demangled: VlcDecTCOEFShortHeader_AnnexT */
int VlcDecTCOEFShortHeader_AnnexT(void);

/* Symbol: idctrow0_intra */
/* Demangled: idctrow0_intra */
int idctrow0_intra(void);

/* Symbol: idctrow4_intra */
/* Demangled: idctrow4_intra */
int idctrow4_intra(void);

/* Symbol: PV_DCT3Dtab7 */
/* Demangled: PV_DCT3Dtab7 */
extern void* PV_DCT3Dtab7;

/* Symbol: PVResetVideoDecoder */
/* Demangled: PVResetVideoDecoder */
int PVResetVideoDecoder(void);

/* Symbol: BitstreamReadBits32 */
/* Demangled: BitstreamReadBits32 */
int BitstreamReadBits32(void);

/* Symbol: BitstreamShowBits32HC */
/* Demangled: BitstreamShowBits32HC */
int BitstreamShowBits32HC(void);

/* Symbol: PV_BitstreamShowBitsByteAlign */
/* Demangled: PV_BitstreamShowBitsByteAlign */
int PV_BitstreamShowBitsByteAlign(void);

/* Symbol: PV_DCT3Dtab8 */
/* Demangled: PV_DCT3Dtab8 */
extern void* PV_DCT3Dtab8;

/* Symbol: PV_MCBPCtab1 */
/* Demangled: PV_MCBPCtab1 */
extern void* PV_MCBPCtab1;

/* Symbol: PVCleanUpVideoDecoder */
/* Demangled: PVCleanUpVideoDecoder */
int PVCleanUpVideoDecoder(void);

/* Symbol: doDCACPrediction */
/* Demangled: doDCACPrediction */
int doDCACPrediction(void);

/* Symbol: mv_prediction */
/* Demangled: mv_prediction */
int mv_prediction(void);

/* Symbol: VlcDequantH263IntraBlock */
/* Demangled: VlcDequantH263IntraBlock */
int VlcDequantH263IntraBlock(void);

/* Symbol: BlockIDCT_intra */
/* Demangled: BlockIDCT_intra */
int BlockIDCT_intra(void);

/* Symbol: PVGetLayerID */
/* Demangled: PVGetLayerID */
int PVGetLayerID(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: BitstreamOpen */
/* Demangled: BitstreamOpen */
int BitstreamOpen(void);

/* Symbol: ConcealPacket */
/* Demangled: ConcealPacket */
int ConcealPacket(void);

/* Symbol: DecodeShortHeader */
/* Demangled: DecodeShortHeader */
int DecodeShortHeader(void);

/* Symbol: VlcDequantH263IntraBlock_SH */
/* Demangled: VlcDequantH263IntraBlock_SH */
int VlcDequantH263IntraBlock_SH(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void);

/* Symbol: BitstreamRead1Bits */
/* Demangled: BitstreamRead1Bits */
int BitstreamRead1Bits(void);

/* Symbol: validStuffing */
/* Demangled: validStuffing */
int validStuffing(void);

/* Symbol: _ZTVN7android4ListINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::List<android::sp<android::ABuffer> > */
extern void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE;

/* Symbol: PVExtractVolHeader */
/* Demangled: PVExtractVolHeader */
int PVExtractVolHeader(void);

/* Symbol: PostFilter */
/* Demangled: PostFilter */
int PostFilter(void);

/* Symbol: getPointer */
/* Demangled: getPointer */
int getPointer(void);

/* Symbol: DecodeFrameCombinedMode */
/* Demangled: DecodeFrameCombinedMode */
int DecodeFrameCombinedMode(void);

/* Symbol: PV_VlcDecMV */
/* Demangled: PV_VlcDecMV */
int PV_VlcDecMV(void);

/* Symbol: PV_MCBPCtab */
/* Demangled: PV_MCBPCtab */
extern void* PV_MCBPCtab;

/* Symbol: VlcDecTCOEFShortHeader_AnnexIT */
/* Demangled: VlcDecTCOEFShortHeader_AnnexIT */
int VlcDecTCOEFShortHeader_AnnexIT(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: _Z25PVLocateH263FrameBoundaryP12tagBitstream */
/* Demangled: PVLocateH263FrameBoundary(tagBitstream*) */
int _Z25PVLocateH263FrameBoundaryP12tagBitstream(void);

/* Symbol: idctcol0 */
/* Demangled: idctcol0 */
int idctcol0(void);

/* Symbol: _Z11CalcNumBitsj */
/* Demangled: CalcNumBits(unsigned int) */
int _Z11CalcNumBitsj(void);

/* Symbol: BlockIDCT */
/* Demangled: BlockIDCT */
int BlockIDCT(void);

/* Symbol: idctcol1 */
/* Demangled: idctcol1 */
int idctcol1(void);

/* Symbol: RvlcDCTtabIntra */
/* Demangled: RvlcDCTtabIntra */
extern void* RvlcDCTtabIntra;

/* Symbol: _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: BitstreamByteAlignNoForceStuffing */
/* Demangled: BitstreamByteAlignNoForceStuffing */
int BitstreamByteAlignNoForceStuffing(void);

/* Symbol: validStuffing_h263 */
/* Demangled: validStuffing_h263 */
int validStuffing_h263(void);

/* Symbol: GetPredOutside */
/* Demangled: GetPredOutside */
int GetPredOutside(void);

/* Symbol: idctcol2 */
/* Demangled: idctcol2 */
int idctcol2(void);

/* Symbol: VlcDecTCOEFIntra */
/* Demangled: VlcDecTCOEFIntra */
int VlcDecTCOEFIntra(void);

/* Symbol: _ZN7android9SoftMPEG421updatePortDefinitionsEbb */
/* Demangled: android::SoftMPEG4::updatePortDefinitions(bool, bool) */
int _ZN7android9SoftMPEG421updatePortDefinitionsEbb(void);

/* Symbol: idctcol3 */
/* Demangled: idctcol3 */
int idctcol3(void);

/* Symbol: PV_ReadVideoPacketHeader */
/* Demangled: PV_ReadVideoPacketHeader */
int PV_ReadVideoPacketHeader(void);

/* Symbol: PVDecSetReference */
/* Demangled: PVDecSetReference */
int PVDecSetReference(void);

/* Symbol: DecodeUserData */
/* Demangled: DecodeUserData */
int DecodeUserData(void);

/* Symbol: _ZN7android9SoftMPEG413onQueueFilledEj */
/* Demangled: android::SoftMPEG4::onQueueFilled(unsigned int) */
int _ZN7android9SoftMPEG413onQueueFilledEj(void);

/* Symbol: idctcol4 */
/* Demangled: idctcol4 */
int idctcol4(void);

/* Symbol: PVAllocVideoData */
/* Demangled: PVAllocVideoData */
int PVAllocVideoData(void);

/* Symbol: PV_DecodeMBVec */
/* Demangled: PV_DecodeMBVec */
int PV_DecodeMBVec(void);

/* Symbol: PV_GetMBvectors */
/* Demangled: PV_GetMBvectors */
int PV_GetMBvectors(void);

/* Symbol: inter_max_level */
/* Demangled: inter_max_level */
extern void* inter_max_level;

/* Symbol: BitstreamShowBits32 */
/* Demangled: BitstreamShowBits32 */
int BitstreamShowBits32(void);

/* Symbol: quickSearchH263SliceHeader */
/* Demangled: quickSearchH263SliceHeader */
int quickSearchH263SliceHeader(void);

/* Symbol: RvlcDCTtabInter */
/* Demangled: RvlcDCTtabInter */
extern void* RvlcDCTtabInter;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE;

/* Symbol: quickSearchGOBHeader */
/* Demangled: quickSearchGOBHeader */
int quickSearchGOBHeader(void);

/* Symbol: PV_VlcDecCBPY */
/* Demangled: PV_VlcDecCBPY */
int PV_VlcDecCBPY(void);

/* Symbol: VlcDecTCOEFInter */
/* Demangled: VlcDecTCOEFInter */
int VlcDecTCOEFInter(void);

/* Symbol: ptrRvlcTab */
/* Demangled: ptrRvlcTab */
extern void* ptrRvlcTab;

/* Symbol: DecodeFrameDataPartMode */
/* Demangled: DecodeFrameDataPartMode */
int DecodeFrameDataPartMode(void);

/* Symbol: GetPredAdvancedBy1x0 */
/* Demangled: GetPredAdvancedBy1x0 */
int GetPredAdvancedBy1x0(void);

/* Symbol: PVGetVideoTimeStamp */
/* Demangled: PVGetVideoTimeStamp */
int PVGetVideoTimeStamp(void);

/* Symbol: VideoDecoderErrorDetected */
/* Demangled: VideoDecoderErrorDetected */
int VideoDecoderErrorDetected(void);

/* Symbol: DecodeGOVHeader */
/* Demangled: DecodeGOVHeader */
int DecodeGOVHeader(void);

/* Symbol: _ZN7android9SoftMPEG424handlePortSettingsChangeEv */
/* Demangled: android::SoftMPEG4::handlePortSettingsChange() */
int _ZN7android9SoftMPEG424handlePortSettingsChangeEv(void);

/* Symbol: PV_BitstreamFlushBitsCheck */
/* Demangled: PV_BitstreamFlushBitsCheck */
int PV_BitstreamFlushBitsCheck(void);

/* Symbol: ConcealTexture_I */
/* Demangled: ConcealTexture_I */
int ConcealTexture_I(void);

/* Symbol: GetPredAdvancedBy1x1 */
/* Demangled: GetPredAdvancedBy1x1 */
int GetPredAdvancedBy1x1(void);

/* Symbol: PVLocateFrameHeader */
/* Demangled: PVLocateFrameHeader */
int PVLocateFrameHeader(void);

/* Symbol: RvlcDecTCOEFIntra */
/* Demangled: RvlcDecTCOEFIntra */
int RvlcDecTCOEFIntra(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android9SoftMPEG4E */
/* Demangled: vtable for android::SoftMPEG4 */
extern void* _ZTVN7android9SoftMPEG4E;

/* Symbol: GetMBheader */
/* Demangled: GetMBheader */
int GetMBheader(void);

/* Symbol: GetPredAdvancedBy0x0 */
/* Demangled: GetPredAdvancedBy0x0 */
int GetPredAdvancedBy0x0(void);

/* Symbol: PVDecodeVideoFrame */
/* Demangled: PVDecodeVideoFrame */
int PVDecodeVideoFrame(void);

/* Symbol: scale */
/* Demangled: scale */
extern void* scale;

/* Symbol: _ZN7android9SoftMPEG4C2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftMPEG4::SoftMPEG4(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android9SoftMPEG4C2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: PVSearchNextH263Frame */
/* Demangled: PVSearchNextH263Frame */
int PVSearchNextH263Frame(void);

/* Symbol: GetPredAdvancedBy0x1 */
/* Demangled: GetPredAdvancedBy0x1 */
int GetPredAdvancedBy0x1(void);

/* Symbol: PVGetDecBitrate */
/* Demangled: PVGetDecBitrate */
int PVGetDecBitrate(void);

/* Symbol: PVGetDecBitstreamMode */
/* Demangled: PVGetDecBitstreamMode */
int PVGetDecBitstreamMode(void);

/* Symbol: BitstreamFillCache */
/* Demangled: BitstreamFillCache */
int BitstreamFillCache(void);

/* Symbol: PV_DecodePredictedIntraDC */
/* Demangled: PV_DecodePredictedIntraDC */
int PV_DecodePredictedIntraDC(void);

/* Symbol: RvlcDecTCOEFInter */
/* Demangled: RvlcDecTCOEFInter */
int RvlcDecTCOEFInter(void);

/* Symbol: PV_CBPYtab */
/* Demangled: PV_CBPYtab */
extern void* PV_CBPYtab;

/* Symbol: CombinedHorzVertFilter */
/* Demangled: CombinedHorzVertFilter */
int CombinedHorzVertFilter(void);

/* Symbol: PVGetBufferDimensions */
/* Demangled: PVGetBufferDimensions */
int PVGetBufferDimensions(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: ConcealTexture_P */
/* Demangled: ConcealTexture_P */
int ConcealTexture_P(void);

/* Symbol: CalcVopDisplayTime */
/* Demangled: CalcVopDisplayTime */
int CalcVopDisplayTime(void);

/* Symbol: AdaptiveSmooth_NoMMX */
/* Demangled: AdaptiveSmooth_NoMMX */
int AdaptiveSmooth_NoMMX(void);

/* Symbol: idctrow1_intra */
/* Demangled: idctrow1_intra */
int idctrow1_intra(void);

/* Symbol: DecodeVOLHeader */
/* Demangled: DecodeVOLHeader */
int DecodeVOLHeader(void);

/* Symbol: DecodeVOPHeader */
/* Demangled: DecodeVOPHeader */
int DecodeVOPHeader(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_MPEG4DEC_H */
