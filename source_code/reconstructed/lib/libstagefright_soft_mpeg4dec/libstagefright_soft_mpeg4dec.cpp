/*
 * Reverse-Engineered Source for: libstagefright_soft_mpeg4dec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_soft_mpeg4dec"

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
#include "libstagefright_soft_mpeg4dec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: movePointerTo */
extern "C" __attribute__((visibility("default"))) int movePointerTo(void) {
    ALOGD("movePointerTo() called");
    return 0;
}

/* Demangled: CombinedHorzVertRingFilter */
extern "C" __attribute__((visibility("default"))) int CombinedHorzVertRingFilter(void) {
    ALOGD("CombinedHorzVertRingFilter() called");
    return 0;
}

/* Demangled: CopyVopMB */
extern "C" __attribute__((visibility("default"))) int CopyVopMB(void) {
    ALOGD("CopyVopMB() called");
    return 0;
}

/* Demangled: GetMBheaderDataPart_DQUANT_DC */
extern "C" __attribute__((visibility("default"))) int GetMBheaderDataPart_DQUANT_DC(void) {
    ALOGD("GetMBheaderDataPart_DQUANT_DC() called");
    return 0;
}

/* Exported Object: PV_MCBPCtabintra */
extern "C" __attribute__((visibility("default"))) void* PV_MCBPCtabintra = NULL;

/* Demangled: PVDecodeVopHeader */
extern "C" __attribute__((visibility("default"))) int PVDecodeVopHeader(void) {
    ALOGD("PVDecodeVopHeader() called");
    return 0;
}

/* Demangled: GetMBheaderDataPart_P */
extern "C" __attribute__((visibility("default"))) int GetMBheaderDataPart_P(void) {
    ALOGD("GetMBheaderDataPart_P() called");
    return 0;
}

/* Demangled: idctrow3_intra */
extern "C" __attribute__((visibility("default"))) int idctrow3_intra(void) {
    ALOGD("idctrow3_intra() called");
    return 0;
}

/* Demangled: PVDecodeVopBody */
extern "C" __attribute__((visibility("default"))) int PVDecodeVopBody(void) {
    ALOGD("PVDecodeVopBody() called");
    return 0;
}

/* Demangled: PVSetReferenceYUV */
extern "C" __attribute__((visibility("default"))) int PVSetReferenceYUV(void) {
    ALOGD("PVSetReferenceYUV() called");
    return 0;
}

/* Demangled: BitstreamReadBits32HC */
extern "C" __attribute__((visibility("default"))) int BitstreamReadBits32HC(void) {
    ALOGD("BitstreamReadBits32HC() called");
    return 0;
}

/* Demangled: CombinedHorzVertFilter_NoSoftDeblocking */
extern "C" __attribute__((visibility("default"))) int CombinedHorzVertFilter_NoSoftDeblocking(void) {
    ALOGD("CombinedHorzVertFilter_NoSoftDeblocking() called");
    return 0;
}

/* Demangled: GetMBData */
extern "C" __attribute__((visibility("default"))) int GetMBData(void) {
    ALOGD("GetMBData() called");
    return 0;
}

/* Demangled: PVLocateH263FrameHeader */
extern "C" __attribute__((visibility("default"))) int PVLocateH263FrameHeader(void) {
    ALOGD("PVLocateH263FrameHeader() called");
    return 0;
}

/* Demangled: PVGetVideoDimensions */
extern "C" __attribute__((visibility("default"))) int PVGetVideoDimensions(void) {
    ALOGD("PVGetVideoDimensions() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: DecodeDataPart_P_VideoPacket */
extern "C" __attribute__((visibility("default"))) int DecodeDataPart_P_VideoPacket(void) {
    ALOGD("DecodeDataPart_P_VideoPacket() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: quickSearchDCM */
extern "C" __attribute__((visibility("default"))) int quickSearchDCM(void) {
    ALOGD("quickSearchDCM() called");
    return 0;
}

/* Demangled: Copy_Blk_to_Vop(unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15Copy_Blk_to_VopPhS_i(void) {
    ALOGD("_Z15Copy_Blk_to_VopPhS_i() called");
    return 0;
}

/* Demangled: FindMaxMin */
extern "C" __attribute__((visibility("default"))) int FindMaxMin(void) {
    ALOGD("FindMaxMin() called");
    return 0;
}

/* Demangled: PVDecPostProcess */
extern "C" __attribute__((visibility("default"))) int PVDecPostProcess(void) {
    ALOGD("PVDecPostProcess() called");
    return 0;
}

/* Demangled: PVGetVolInfo */
extern "C" __attribute__((visibility("default"))) int PVGetVolInfo(void) {
    ALOGD("PVGetVolInfo() called");
    return 0;
}

/* Demangled: VlcDequantH263InterBlock */
extern "C" __attribute__((visibility("default"))) int VlcDequantH263InterBlock(void) {
    ALOGD("VlcDequantH263InterBlock() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: idctrow0 */
extern "C" __attribute__((visibility("default"))) int idctrow0(void) {
    ALOGD("idctrow0() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE = NULL;

/* Demangled: GetMBData_DataPart */
extern "C" __attribute__((visibility("default"))) int GetMBData_DataPart(void) {
    ALOGD("GetMBData_DataPart() called");
    return 0;
}

/* Demangled: idctrow1 */
extern "C" __attribute__((visibility("default"))) int idctrow1(void) {
    ALOGD("idctrow1() called");
    return 0;
}

/* Demangled: IsIntraFrame */
extern "C" __attribute__((visibility("default"))) int IsIntraFrame(void) {
    ALOGD("IsIntraFrame() called");
    return 0;
}

/* Demangled: idctrow2 */
extern "C" __attribute__((visibility("default"))) int idctrow2(void) {
    ALOGD("idctrow2() called");
    return 0;
}

/* Demangled: PV_GobHeader */
extern "C" __attribute__((visibility("default"))) int PV_GobHeader(void) {
    ALOGD("PV_GobHeader() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: quickSearchMotionMarker */
extern "C" __attribute__((visibility("default"))) int quickSearchMotionMarker(void) {
    ALOGD("quickSearchMotionMarker() called");
    return 0;
}

/* Demangled: cal_dc_scaler */
extern "C" __attribute__((visibility("default"))) int cal_dc_scaler(void) {
    ALOGD("cal_dc_scaler() called");
    return 0;
}

/* Demangled: idctrow3 */
extern "C" __attribute__((visibility("default"))) int idctrow3(void) {
    ALOGD("idctrow3() called");
    return 0;
}

/* Demangled: idctrow4 */
extern "C" __attribute__((visibility("default"))) int idctrow4(void) {
    ALOGD("idctrow4() called");
    return 0;
}

/* Demangled: MBMotionComp */
extern "C" __attribute__((visibility("default"))) int MBMotionComp(void) {
    ALOGD("MBMotionComp() called");
    return 0;
}

/* Demangled: PVGetDecMemoryUsage */
extern "C" __attribute__((visibility("default"))) int PVGetDecMemoryUsage(void) {
    ALOGD("PVGetDecMemoryUsage() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: PVSearchNextM4VFrame */
extern "C" __attribute__((visibility("default"))) int PVSearchNextM4VFrame(void) {
    ALOGD("PVSearchNextM4VFrame() called");
    return 0;
}

/* Demangled: PV_H263SliceHeader */
extern "C" __attribute__((visibility("default"))) int PV_H263SliceHeader(void) {
    ALOGD("PV_H263SliceHeader() called");
    return 0;
}

/* Demangled: pp_semaphore_luma */
extern "C" __attribute__((visibility("default"))) int pp_semaphore_luma(void) {
    ALOGD("pp_semaphore_luma() called");
    return 0;
}

/* Demangled: PVGetDecFramerate */
extern "C" __attribute__((visibility("default"))) int PVGetDecFramerate(void) {
    ALOGD("PVGetDecFramerate() called");
    return 0;
}

/* Demangled: PutSKIPPED_B */
extern "C" __attribute__((visibility("default"))) int PutSKIPPED_B(void) {
    ALOGD("PutSKIPPED_B() called");
    return 0;
}

/* Demangled: PVGetDecOutputFrame */
extern "C" __attribute__((visibility("default"))) int PVGetDecOutputFrame(void) {
    ALOGD("PVGetDecOutputFrame() called");
    return 0;
}

/* Demangled: PV_DecodeVop */
extern "C" __attribute__((visibility("default"))) int PV_DecodeVop(void) {
    ALOGD("PV_DecodeVop() called");
    return 0;
}

/* Demangled: PV_VlcDecMCBPC_com_intra */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecMCBPC_com_intra(void) {
    ALOGD("PV_VlcDecMCBPC_com_intra() called");
    return 0;
}

/* Exported Object: PV_TMNMVtab0 */
extern "C" __attribute__((visibility("default"))) void* PV_TMNMVtab0 = NULL;

/* Demangled: PVInitVideoDecoder */
extern "C" __attribute__((visibility("default"))) int PVInitVideoDecoder(void) {
    ALOGD("PVInitVideoDecoder() called");
    return 0;
}

/* Demangled: PV_BitstreamByteAlign */
extern "C" __attribute__((visibility("default"))) int PV_BitstreamByteAlign(void) {
    ALOGD("PV_BitstreamByteAlign() called");
    return 0;
}

/* Demangled: doDCACPrediction_I */
extern "C" __attribute__((visibility("default"))) int doDCACPrediction_I(void) {
    ALOGD("doDCACPrediction_I() called");
    return 0;
}

/* Exported Object: PV_TMNMVtab1 */
extern "C" __attribute__((visibility("default"))) void* PV_TMNMVtab1 = NULL;

/* Demangled: android::SoftMPEG4::initDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG411initDecoderEv(void) {
    ALOGD("_ZN7android9SoftMPEG411initDecoderEv() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::SoftMPEG4(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG4C1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android9SoftMPEG4C1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: PVLocateM4VFrameBoundary */
extern "C" __attribute__((visibility("default"))) int PVLocateM4VFrameBoundary(void) {
    ALOGD("PVLocateM4VFrameBoundary() called");
    return 0;
}

/* Exported Object: PV_TMNMVtab2 */
extern "C" __attribute__((visibility("default"))) void* PV_TMNMVtab2 = NULL;

/* Demangled: pp_semaphore_chroma_inter */
extern "C" __attribute__((visibility("default"))) int pp_semaphore_chroma_inter(void) {
    ALOGD("pp_semaphore_chroma_inter() called");
    return 0;
}

/* Demangled: VlcDecTCOEFShortHeader_AnnexI */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFShortHeader_AnnexI(void) {
    ALOGD("VlcDecTCOEFShortHeader_AnnexI() called");
    return 0;
}

/* Demangled: PVSetPostProcType */
extern "C" __attribute__((visibility("default"))) int PVSetPostProcType(void) {
    ALOGD("PVSetPostProcType() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: PostProcSemaphore */
extern "C" __attribute__((visibility("default"))) int PostProcSemaphore(void) {
    ALOGD("PostProcSemaphore() called");
    return 0;
}

/* Demangled: PV_VlcDecMCBPC_com_inter */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecMCBPC_com_inter(void) {
    ALOGD("PV_VlcDecMCBPC_com_inter() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::onPortFlushCompleted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG420onPortFlushCompletedEj(void) {
    ALOGD("_ZN7android9SoftMPEG420onPortFlushCompletedEj() called");
    return 0;
}

/* Demangled: quickSearchVideoPacketHeader */
extern "C" __attribute__((visibility("default"))) int quickSearchVideoPacketHeader(void) {
    ALOGD("quickSearchVideoPacketHeader() called");
    return 0;
}

/* Demangled: VlcDecTCOEFShortHeader */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFShortHeader(void) {
    ALOGD("VlcDecTCOEFShortHeader() called");
    return 0;
}

/* Exported Object: intra_max_run0 */
extern "C" __attribute__((visibility("default"))) void* intra_max_run0 = NULL;

/* Demangled: BitstreamReadBits16 */
extern "C" __attribute__((visibility("default"))) int BitstreamReadBits16(void) {
    ALOGD("BitstreamReadBits16() called");
    return 0;
}

/* Demangled: Deringing_Chroma */
extern "C" __attribute__((visibility("default"))) int Deringing_Chroma(void) {
    ALOGD("Deringing_Chroma() called");
    return 0;
}

/* Exported Object: intra_max_run1 */
extern "C" __attribute__((visibility("default"))) void* intra_max_run1 = NULL;

/* Demangled: BitstreamClose */
extern "C" __attribute__((visibility("default"))) int BitstreamClose(void) {
    ALOGD("BitstreamClose() called");
    return 0;
}

/* Demangled: Deringing_Luma */
extern "C" __attribute__((visibility("default"))) int Deringing_Luma(void) {
    ALOGD("Deringing_Luma() called");
    return 0;
}

/* Demangled: PV_VlcDecIntraDCPredSize */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecIntraDCPredSize(void) {
    ALOGD("PV_VlcDecIntraDCPredSize() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG4D2Ev(void) {
    ALOGD("_ZN7android9SoftMPEG4D2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab0 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab0 = NULL;

/* Demangled: android::SoftMPEG4::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG47onResetEv(void) {
    ALOGD("_ZN7android9SoftMPEG47onResetEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: DecodeDataPart_I_VideoPacket */
extern "C" __attribute__((visibility("default"))) int DecodeDataPart_I_VideoPacket(void) {
    ALOGD("DecodeDataPart_I_VideoPacket() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab1 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab1 = NULL;

/* Exported Object: inter_max_run0 */
extern "C" __attribute__((visibility("default"))) void* inter_max_run0 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab2 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab2 = NULL;

/* Exported Object: inter_max_run1 */
extern "C" __attribute__((visibility("default"))) void* inter_max_run1 = NULL;

/* Exported Object: zigzag_inv */
extern "C" __attribute__((visibility("default"))) void* zigzag_inv = NULL;

/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG4D1Ev(void) {
    ALOGD("_ZN7android9SoftMPEG4D1Ev() called");
    return 0;
}

/* Demangled: PV_DeScaleMVD */
extern "C" __attribute__((visibility("default"))) int PV_DeScaleMVD(void) {
    ALOGD("PV_DeScaleMVD() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab3 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab3 = NULL;

/* Demangled: BitstreamCheckEndBuffer */
extern "C" __attribute__((visibility("default"))) int BitstreamCheckEndBuffer(void) {
    ALOGD("BitstreamCheckEndBuffer() called");
    return 0;
}

/* Demangled: BitstreamReset */
extern "C" __attribute__((visibility("default"))) int BitstreamReset(void) {
    ALOGD("BitstreamReset() called");
    return 0;
}

/* Demangled: H263_Deblock */
extern "C" __attribute__((visibility("default"))) int H263_Deblock(void) {
    ALOGD("H263_Deblock() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab4 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab4 = NULL;

/* Exported Object: intra_max_level */
extern "C" __attribute__((visibility("default"))) void* intra_max_level = NULL;

/* Demangled: idctrow2_intra */
extern "C" __attribute__((visibility("default"))) int idctrow2_intra(void) {
    ALOGD("idctrow2_intra() called");
    return 0;
}

/* Demangled: PutSKIPPED_MB */
extern "C" __attribute__((visibility("default"))) int PutSKIPPED_MB(void) {
    ALOGD("PutSKIPPED_MB() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab5 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab5 = NULL;

/* Demangled: android::SoftMPEG4::~SoftMPEG4() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG4D0Ev(void) {
    ALOGD("_ZN7android9SoftMPEG4D0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: PV_BitstreamShowBitsByteAlignNoForceStuffing */
extern "C" __attribute__((visibility("default"))) int PV_BitstreamShowBitsByteAlignNoForceStuffing(void) {
    ALOGD("PV_BitstreamShowBitsByteAlignNoForceStuffing() called");
    return 0;
}

/* Demangled: MBlockIDCT */
extern "C" __attribute__((visibility("default"))) int MBlockIDCT(void) {
    ALOGD("MBlockIDCT() called");
    return 0;
}

/* Demangled: SkippedMBMotionComp */
extern "C" __attribute__((visibility("default"))) int SkippedMBMotionComp(void) {
    ALOGD("SkippedMBMotionComp() called");
    return 0;
}

/* Demangled: PVDecSetEnhReference */
extern "C" __attribute__((visibility("default"))) int PVDecSetEnhReference(void) {
    ALOGD("PVDecSetEnhReference() called");
    return 0;
}

/* Demangled: PV_VlcDecMCBPC_com_inter_H263 */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecMCBPC_com_inter_H263(void) {
    ALOGD("PV_VlcDecMCBPC_com_inter_H263() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab6 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab6 = NULL;

/* Demangled: VlcDecTCOEFShortHeader_AnnexT */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFShortHeader_AnnexT(void) {
    ALOGD("VlcDecTCOEFShortHeader_AnnexT() called");
    return 0;
}

/* Demangled: idctrow0_intra */
extern "C" __attribute__((visibility("default"))) int idctrow0_intra(void) {
    ALOGD("idctrow0_intra() called");
    return 0;
}

/* Demangled: idctrow4_intra */
extern "C" __attribute__((visibility("default"))) int idctrow4_intra(void) {
    ALOGD("idctrow4_intra() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab7 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab7 = NULL;

/* Demangled: PVResetVideoDecoder */
extern "C" __attribute__((visibility("default"))) int PVResetVideoDecoder(void) {
    ALOGD("PVResetVideoDecoder() called");
    return 0;
}

/* Demangled: BitstreamReadBits32 */
extern "C" __attribute__((visibility("default"))) int BitstreamReadBits32(void) {
    ALOGD("BitstreamReadBits32() called");
    return 0;
}

/* Demangled: BitstreamShowBits32HC */
extern "C" __attribute__((visibility("default"))) int BitstreamShowBits32HC(void) {
    ALOGD("BitstreamShowBits32HC() called");
    return 0;
}

/* Demangled: PV_BitstreamShowBitsByteAlign */
extern "C" __attribute__((visibility("default"))) int PV_BitstreamShowBitsByteAlign(void) {
    ALOGD("PV_BitstreamShowBitsByteAlign() called");
    return 0;
}

/* Exported Object: PV_DCT3Dtab8 */
extern "C" __attribute__((visibility("default"))) void* PV_DCT3Dtab8 = NULL;

/* Exported Object: PV_MCBPCtab1 */
extern "C" __attribute__((visibility("default"))) void* PV_MCBPCtab1 = NULL;

/* Demangled: PVCleanUpVideoDecoder */
extern "C" __attribute__((visibility("default"))) int PVCleanUpVideoDecoder(void) {
    ALOGD("PVCleanUpVideoDecoder() called");
    return 0;
}

/* Demangled: doDCACPrediction */
extern "C" __attribute__((visibility("default"))) int doDCACPrediction(void) {
    ALOGD("doDCACPrediction() called");
    return 0;
}

/* Demangled: mv_prediction */
extern "C" __attribute__((visibility("default"))) int mv_prediction(void) {
    ALOGD("mv_prediction() called");
    return 0;
}

/* Demangled: VlcDequantH263IntraBlock */
extern "C" __attribute__((visibility("default"))) int VlcDequantH263IntraBlock(void) {
    ALOGD("VlcDequantH263IntraBlock() called");
    return 0;
}

/* Demangled: BlockIDCT_intra */
extern "C" __attribute__((visibility("default"))) int BlockIDCT_intra(void) {
    ALOGD("BlockIDCT_intra() called");
    return 0;
}

/* Demangled: PVGetLayerID */
extern "C" __attribute__((visibility("default"))) int PVGetLayerID(void) {
    ALOGD("PVGetLayerID() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: BitstreamOpen */
extern "C" __attribute__((visibility("default"))) int BitstreamOpen(void) {
    ALOGD("BitstreamOpen() called");
    return 0;
}

/* Demangled: ConcealPacket */
extern "C" __attribute__((visibility("default"))) int ConcealPacket(void) {
    ALOGD("ConcealPacket() called");
    return 0;
}

/* Demangled: DecodeShortHeader */
extern "C" __attribute__((visibility("default"))) int DecodeShortHeader(void) {
    ALOGD("DecodeShortHeader() called");
    return 0;
}

/* Demangled: VlcDequantH263IntraBlock_SH */
extern "C" __attribute__((visibility("default"))) int VlcDequantH263IntraBlock_SH(void) {
    ALOGD("VlcDequantH263IntraBlock_SH() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: BitstreamRead1Bits */
extern "C" __attribute__((visibility("default"))) int BitstreamRead1Bits(void) {
    ALOGD("BitstreamRead1Bits() called");
    return 0;
}

/* Demangled: validStuffing */
extern "C" __attribute__((visibility("default"))) int validStuffing(void) {
    ALOGD("validStuffing() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE = NULL;

/* Demangled: PVExtractVolHeader */
extern "C" __attribute__((visibility("default"))) int PVExtractVolHeader(void) {
    ALOGD("PVExtractVolHeader() called");
    return 0;
}

/* Demangled: PostFilter */
extern "C" __attribute__((visibility("default"))) int PostFilter(void) {
    ALOGD("PostFilter() called");
    return 0;
}

/* Demangled: getPointer */
extern "C" __attribute__((visibility("default"))) int getPointer(void) {
    ALOGD("getPointer() called");
    return 0;
}

/* Demangled: DecodeFrameCombinedMode */
extern "C" __attribute__((visibility("default"))) int DecodeFrameCombinedMode(void) {
    ALOGD("DecodeFrameCombinedMode() called");
    return 0;
}

/* Demangled: PV_VlcDecMV */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecMV(void) {
    ALOGD("PV_VlcDecMV() called");
    return 0;
}

/* Exported Object: PV_MCBPCtab */
extern "C" __attribute__((visibility("default"))) void* PV_MCBPCtab = NULL;

/* Demangled: VlcDecTCOEFShortHeader_AnnexIT */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFShortHeader_AnnexIT(void) {
    ALOGD("VlcDecTCOEFShortHeader_AnnexIT() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: PVLocateH263FrameBoundary(tagBitstream*) */
extern "C" __attribute__((visibility("default"))) int _Z25PVLocateH263FrameBoundaryP12tagBitstream(void) {
    ALOGD("_Z25PVLocateH263FrameBoundaryP12tagBitstream() called");
    return 0;
}

/* Demangled: idctcol0 */
extern "C" __attribute__((visibility("default"))) int idctcol0(void) {
    ALOGD("idctcol0() called");
    return 0;
}

/* Demangled: CalcNumBits(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11CalcNumBitsj(void) {
    ALOGD("_Z11CalcNumBitsj() called");
    return 0;
}

/* Demangled: BlockIDCT */
extern "C" __attribute__((visibility("default"))) int BlockIDCT(void) {
    ALOGD("BlockIDCT() called");
    return 0;
}

/* Demangled: idctcol1 */
extern "C" __attribute__((visibility("default"))) int idctcol1(void) {
    ALOGD("idctcol1() called");
    return 0;
}

/* Exported Object: RvlcDCTtabIntra */
extern "C" __attribute__((visibility("default"))) void* RvlcDCTtabIntra = NULL;

/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: BitstreamByteAlignNoForceStuffing */
extern "C" __attribute__((visibility("default"))) int BitstreamByteAlignNoForceStuffing(void) {
    ALOGD("BitstreamByteAlignNoForceStuffing() called");
    return 0;
}

/* Demangled: validStuffing_h263 */
extern "C" __attribute__((visibility("default"))) int validStuffing_h263(void) {
    ALOGD("validStuffing_h263() called");
    return 0;
}

/* Demangled: GetPredOutside */
extern "C" __attribute__((visibility("default"))) int GetPredOutside(void) {
    ALOGD("GetPredOutside() called");
    return 0;
}

/* Demangled: idctcol2 */
extern "C" __attribute__((visibility("default"))) int idctcol2(void) {
    ALOGD("idctcol2() called");
    return 0;
}

/* Demangled: VlcDecTCOEFIntra */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFIntra(void) {
    ALOGD("VlcDecTCOEFIntra() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::updatePortDefinitions(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG421updatePortDefinitionsEbb(void) {
    ALOGD("_ZN7android9SoftMPEG421updatePortDefinitionsEbb() called");
    return 0;
}

/* Demangled: idctcol3 */
extern "C" __attribute__((visibility("default"))) int idctcol3(void) {
    ALOGD("idctcol3() called");
    return 0;
}

/* Demangled: PV_ReadVideoPacketHeader */
extern "C" __attribute__((visibility("default"))) int PV_ReadVideoPacketHeader(void) {
    ALOGD("PV_ReadVideoPacketHeader() called");
    return 0;
}

/* Demangled: PVDecSetReference */
extern "C" __attribute__((visibility("default"))) int PVDecSetReference(void) {
    ALOGD("PVDecSetReference() called");
    return 0;
}

/* Demangled: DecodeUserData */
extern "C" __attribute__((visibility("default"))) int DecodeUserData(void) {
    ALOGD("DecodeUserData() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG413onQueueFilledEj(void) {
    ALOGD("_ZN7android9SoftMPEG413onQueueFilledEj() called");
    return 0;
}

/* Demangled: idctcol4 */
extern "C" __attribute__((visibility("default"))) int idctcol4(void) {
    ALOGD("idctcol4() called");
    return 0;
}

/* Demangled: PVAllocVideoData */
extern "C" __attribute__((visibility("default"))) int PVAllocVideoData(void) {
    ALOGD("PVAllocVideoData() called");
    return 0;
}

/* Demangled: PV_DecodeMBVec */
extern "C" __attribute__((visibility("default"))) int PV_DecodeMBVec(void) {
    ALOGD("PV_DecodeMBVec() called");
    return 0;
}

/* Demangled: PV_GetMBvectors */
extern "C" __attribute__((visibility("default"))) int PV_GetMBvectors(void) {
    ALOGD("PV_GetMBvectors() called");
    return 0;
}

/* Exported Object: inter_max_level */
extern "C" __attribute__((visibility("default"))) void* inter_max_level = NULL;

/* Demangled: BitstreamShowBits32 */
extern "C" __attribute__((visibility("default"))) int BitstreamShowBits32(void) {
    ALOGD("BitstreamShowBits32() called");
    return 0;
}

/* Demangled: quickSearchH263SliceHeader */
extern "C" __attribute__((visibility("default"))) int quickSearchH263SliceHeader(void) {
    ALOGD("quickSearchH263SliceHeader() called");
    return 0;
}

/* Exported Object: RvlcDCTtabInter */
extern "C" __attribute__((visibility("default"))) void* RvlcDCTtabInter = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: quickSearchGOBHeader */
extern "C" __attribute__((visibility("default"))) int quickSearchGOBHeader(void) {
    ALOGD("quickSearchGOBHeader() called");
    return 0;
}

/* Demangled: PV_VlcDecCBPY */
extern "C" __attribute__((visibility("default"))) int PV_VlcDecCBPY(void) {
    ALOGD("PV_VlcDecCBPY() called");
    return 0;
}

/* Demangled: VlcDecTCOEFInter */
extern "C" __attribute__((visibility("default"))) int VlcDecTCOEFInter(void) {
    ALOGD("VlcDecTCOEFInter() called");
    return 0;
}

/* Exported Object: ptrRvlcTab */
extern "C" __attribute__((visibility("default"))) void* ptrRvlcTab = NULL;

/* Demangled: DecodeFrameDataPartMode */
extern "C" __attribute__((visibility("default"))) int DecodeFrameDataPartMode(void) {
    ALOGD("DecodeFrameDataPartMode() called");
    return 0;
}

/* Demangled: GetPredAdvancedBy1x0 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvancedBy1x0(void) {
    ALOGD("GetPredAdvancedBy1x0() called");
    return 0;
}

/* Demangled: PVGetVideoTimeStamp */
extern "C" __attribute__((visibility("default"))) int PVGetVideoTimeStamp(void) {
    ALOGD("PVGetVideoTimeStamp() called");
    return 0;
}

/* Demangled: VideoDecoderErrorDetected */
extern "C" __attribute__((visibility("default"))) int VideoDecoderErrorDetected(void) {
    ALOGD("VideoDecoderErrorDetected() called");
    return 0;
}

/* Demangled: DecodeGOVHeader */
extern "C" __attribute__((visibility("default"))) int DecodeGOVHeader(void) {
    ALOGD("DecodeGOVHeader() called");
    return 0;
}

/* Demangled: android::SoftMPEG4::handlePortSettingsChange() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG424handlePortSettingsChangeEv(void) {
    ALOGD("_ZN7android9SoftMPEG424handlePortSettingsChangeEv() called");
    return 0;
}

/* Demangled: PV_BitstreamFlushBitsCheck */
extern "C" __attribute__((visibility("default"))) int PV_BitstreamFlushBitsCheck(void) {
    ALOGD("PV_BitstreamFlushBitsCheck() called");
    return 0;
}

/* Demangled: ConcealTexture_I */
extern "C" __attribute__((visibility("default"))) int ConcealTexture_I(void) {
    ALOGD("ConcealTexture_I() called");
    return 0;
}

/* Demangled: GetPredAdvancedBy1x1 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvancedBy1x1(void) {
    ALOGD("GetPredAdvancedBy1x1() called");
    return 0;
}

/* Demangled: PVLocateFrameHeader */
extern "C" __attribute__((visibility("default"))) int PVLocateFrameHeader(void) {
    ALOGD("PVLocateFrameHeader() called");
    return 0;
}

/* Demangled: RvlcDecTCOEFIntra */
extern "C" __attribute__((visibility("default"))) int RvlcDecTCOEFIntra(void) {
    ALOGD("RvlcDecTCOEFIntra() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SoftMPEG4 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9SoftMPEG4E = NULL;

/* Demangled: GetMBheader */
extern "C" __attribute__((visibility("default"))) int GetMBheader(void) {
    ALOGD("GetMBheader() called");
    return 0;
}

/* Demangled: GetPredAdvancedBy0x0 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvancedBy0x0(void) {
    ALOGD("GetPredAdvancedBy0x0() called");
    return 0;
}

/* Demangled: PVDecodeVideoFrame */
extern "C" __attribute__((visibility("default"))) int PVDecodeVideoFrame(void) {
    ALOGD("PVDecodeVideoFrame() called");
    return 0;
}

/* Exported Object: scale */
extern "C" __attribute__((visibility("default"))) void* scale = NULL;

/* Demangled: android::SoftMPEG4::SoftMPEG4(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SoftMPEG4C2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android9SoftMPEG4C2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: PVSearchNextH263Frame */
extern "C" __attribute__((visibility("default"))) int PVSearchNextH263Frame(void) {
    ALOGD("PVSearchNextH263Frame() called");
    return 0;
}

/* Demangled: GetPredAdvancedBy0x1 */
extern "C" __attribute__((visibility("default"))) int GetPredAdvancedBy0x1(void) {
    ALOGD("GetPredAdvancedBy0x1() called");
    return 0;
}

/* Demangled: PVGetDecBitrate */
extern "C" __attribute__((visibility("default"))) int PVGetDecBitrate(void) {
    ALOGD("PVGetDecBitrate() called");
    return 0;
}

/* Demangled: PVGetDecBitstreamMode */
extern "C" __attribute__((visibility("default"))) int PVGetDecBitstreamMode(void) {
    ALOGD("PVGetDecBitstreamMode() called");
    return 0;
}

/* Demangled: BitstreamFillCache */
extern "C" __attribute__((visibility("default"))) int BitstreamFillCache(void) {
    ALOGD("BitstreamFillCache() called");
    return 0;
}

/* Demangled: PV_DecodePredictedIntraDC */
extern "C" __attribute__((visibility("default"))) int PV_DecodePredictedIntraDC(void) {
    ALOGD("PV_DecodePredictedIntraDC() called");
    return 0;
}

/* Demangled: RvlcDecTCOEFInter */
extern "C" __attribute__((visibility("default"))) int RvlcDecTCOEFInter(void) {
    ALOGD("RvlcDecTCOEFInter() called");
    return 0;
}

/* Exported Object: PV_CBPYtab */
extern "C" __attribute__((visibility("default"))) void* PV_CBPYtab = NULL;

/* Demangled: CombinedHorzVertFilter */
extern "C" __attribute__((visibility("default"))) int CombinedHorzVertFilter(void) {
    ALOGD("CombinedHorzVertFilter() called");
    return 0;
}

/* Demangled: PVGetBufferDimensions */
extern "C" __attribute__((visibility("default"))) int PVGetBufferDimensions(void) {
    ALOGD("PVGetBufferDimensions() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: ConcealTexture_P */
extern "C" __attribute__((visibility("default"))) int ConcealTexture_P(void) {
    ALOGD("ConcealTexture_P() called");
    return 0;
}

/* Demangled: CalcVopDisplayTime */
extern "C" __attribute__((visibility("default"))) int CalcVopDisplayTime(void) {
    ALOGD("CalcVopDisplayTime() called");
    return 0;
}

/* Demangled: AdaptiveSmooth_NoMMX */
extern "C" __attribute__((visibility("default"))) int AdaptiveSmooth_NoMMX(void) {
    ALOGD("AdaptiveSmooth_NoMMX() called");
    return 0;
}

/* Demangled: idctrow1_intra */
extern "C" __attribute__((visibility("default"))) int idctrow1_intra(void) {
    ALOGD("idctrow1_intra() called");
    return 0;
}

/* Demangled: DecodeVOLHeader */
extern "C" __attribute__((visibility("default"))) int DecodeVOLHeader(void) {
    ALOGD("DecodeVOLHeader() called");
    return 0;
}

/* Demangled: DecodeVOPHeader */
extern "C" __attribute__((visibility("default"))) int DecodeVOPHeader(void) {
    ALOGD("DecodeVOPHeader() called");
    return 0;
}
