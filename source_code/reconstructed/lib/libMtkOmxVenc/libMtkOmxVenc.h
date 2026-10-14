/*
 * Reverse-Engineered ABI Specification for: libMtkOmxVenc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxVenc.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXVENC_H
#define BEGONIA_RE_LIBMTKOMXVENC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10MtkOmxVenc27SMVR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::SMVR_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
int _ZN10MtkOmxVenc27SMVR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc16allowEncodeVideoEi */
/* Demangled: MtkOmxVenc::allowEncodeVideo(int) */
int _ZN10MtkOmxVenc16allowEncodeVideoEi(void);

/* Symbol: _ZN10MtkOmxVenc19HandleSetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoVBSMC(OMX_VIDEO_PARAM_VBSMCTYPE*) */
int _ZN10MtkOmxVenc19HandleSetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26HandleGetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoMotionVector(OMX_VIDEO_PARAM_MOTIONVECTORTYPE*) */
int _ZN10MtkOmxVenc26HandleGetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE(void);

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiSizeEP25OMX_VIDEO_CONFIG_ROI_INFO */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetRoiSize(OMX_VIDEO_CONFIG_ROI_INFO*) */
int _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiSizeEP25OMX_VIDEO_CONFIG_ROI_INFO(void);

/* Symbol: _ZN10MtkOmxVenc34HandleGetGoogleDescribeColorFormatEPN7android25DescribeColorFormatParamsE */
/* Demangled: MtkOmxVenc::HandleGetGoogleDescribeColorFormat(android::DescribeColorFormatParams*) */
int _ZN10MtkOmxVenc34HandleGetGoogleDescribeColorFormatEPN7android25DescribeColorFormatParamsE(void);

/* Symbol: _ZN10MtkOmxVenc25ROI_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::ROI_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc25ROI_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZNK7android6VectorIhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIhE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc15ioctl_stream_onEi */
/* Demangled: MtkOmxVenc::ioctl_stream_on(int) */
int _ZN10MtkOmxVenc15ioctl_stream_onEi(void);

/* Symbol: _ZN10MtkOmxVenc23WFD_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::WFD_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc23WFD_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _Z22MtkVenc_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j */
/* Demangled: MtkVenc_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _Z22MtkVenc_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void);

/* Symbol: _ZN10MtkOmxVenc26HDR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::HDR_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26HDR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _Z14v4l2_dump_qbufbPKcP11v4l2_buffer */
/* Demangled: v4l2_dump_qbuf(bool, char const*, v4l2_buffer*) */
int _Z14v4l2_dump_qbufbPKcP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc22Heif_GetExtensionIndexEPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::Heif_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc22Heif_GetExtensionIndexEPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc25releaseOutputNativeHandleEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::releaseOutputNativeHandle(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc25releaseOutputNativeHandleEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z21v4l2_dump_frmsizeenumbPKcP16v4l2_frmsizeenum */
/* Demangled: v4l2_dump_frmsizeenum(bool, char const*, v4l2_frmsizeenum*) */
int _Z21v4l2_dump_frmsizeenumbPKcP16v4l2_frmsizeenum(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_ */
/* Demangled: OmxMVAManager::newOmxMVAwithHndl(void*, void*) */
int _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_(void);

/* Symbol: _ZN10MtkOmxVenc33HandleGetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigGoogleIntraRefresh(OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE*) */
int _ZN10MtkOmxVenc33HandleGetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN10MtkOmxVenc17CommonErrorHandleE13OMX_ERRORTYPEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::CommonErrorHandle(OMX_ERRORTYPE, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17CommonErrorHandleE13OMX_ERRORTYPEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17doDequeInputFrameEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::doDequeInputFrame(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc17doDequeInputFrameEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: MPEG4ProfileLevelTable */
/* Demangled: MPEG4ProfileLevelTable */
extern void* MPEG4ProfileLevelTable;

/* Symbol: _ZN10MtkOmxVenc16FreeInputBuffersEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::FreeInputBuffers(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16FreeInputBuffersEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc12dumpCCOutputEPhj */
/* Demangled: MtkOmxVenc::dumpCCOutput(unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc12dumpCCOutputEPhj(void);

/* Symbol: _ZN10MtkOmxVenc22Omx2V4L2HevcProfileMapE25OMX_VIDEO_HEVCPROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2HevcProfileMap(OMX_VIDEO_HEVCPROFILETYPE) */
int _ZN10MtkOmxVenc22Omx2V4L2HevcProfileMapE25OMX_VIDEO_HEVCPROFILETYPE(void);

/* Symbol: _ZN13OmxMVAManagerC2Ev */
/* Demangled: OmxMVAManager::OmxMVAManager() */
int _ZN13OmxMVAManagerC2Ev(void);

/* Symbol: _ZN10MtkOmxVenc21ioctl_query_in_dmabufEv */
/* Demangled: MtkOmxVenc::ioctl_query_in_dmabuf() */
int _ZN10MtkOmxVenc21ioctl_query_in_dmabufEv(void);

/* Symbol: _ZN10MtkOmxVenc16InputErrorHandleEbP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::InputErrorHandle(bool, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16InputErrorHandleEbP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEEE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN10MtkOmxVenc13MtkOmxVencRoiEv */
/* Demangled: MtkOmxVenc::MtkOmxVencRoi() */
int _ZN10MtkOmxVenc13MtkOmxVencRoiEv(void);

/* Symbol: _ZN10MtkOmxVenc17onEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::onEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17onEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17ROI_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::ROI_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc17ROI_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN10MtkOmxVenc26ReturnPendingOutputBuffersEv */
/* Demangled: MtkOmxVenc::ReturnPendingOutputBuffers() */
int _ZN10MtkOmxVenc26ReturnPendingOutputBuffersEv(void);

/* Symbol: _ZNK7android6VectorIPhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc26GenerateDummyBufferH264EncEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::GenerateDummyBufferH264Enc(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc26GenerateDummyBufferH264EncEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z19PixelFormatToStringjb */
/* Demangled: PixelFormatToString(unsigned int, bool) */
int _Z19PixelFormatToStringjb(void);

/* Symbol: _ZN10MtkOmxVenc25profile_id_ioctl_set_ctrlEv */
/* Demangled: MtkOmxVenc::profile_id_ioctl_set_ctrl() */
int _ZN10MtkOmxVenc25profile_id_ioctl_set_ctrlEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_ */
/* Demangled: OmxMVAManager::newOmxMVAandVA(int, int, void*, void**) */
int _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_(void);

/* Symbol: _ZN10MtkOmxVenc16ComponentInitHDREP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitHDR(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc16ComponentInitHDREP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc17HandlePortDisableEj */
/* Demangled: MtkOmxVenc::HandlePortDisable(unsigned int) */
int _ZN10MtkOmxVenc17HandlePortDisableEj(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_req_bufsEi */
/* Demangled: MtkOmxVenc::ioctl_req_bufs(int) */
int _ZN10MtkOmxVenc14ioctl_req_bufsEi(void);

/* Symbol: _ZN10MtkOmxVenc23Omx2DriverMPEG4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2DriverMPEG4LevelMap(OMX_VIDEO_MPEG4LEVELTYPE) */
int _ZN10MtkOmxVenc23Omx2DriverMPEG4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc28EpilogueInputBufferHeaderUseEv */
/* Demangled: MtkOmxVenc::EpilogueInputBufferHeaderUse() */
int _ZN10MtkOmxVenc28EpilogueInputBufferHeaderUseEv(void);

/* Symbol: _ZN10MtkOmxVenc40HandleSetGoogleEnableAndroidNativeHandleEPN7android32EnableAndroidNativeBuffersParamsE */
/* Demangled: MtkOmxVenc::HandleSetGoogleEnableAndroidNativeHandle(android::EnableAndroidNativeBuffersParams*) */
int _ZN10MtkOmxVenc40HandleSetGoogleEnableAndroidNativeHandleEPN7android32EnableAndroidNativeBuffersParamsE(void);

/* Symbol: _ZN10MtkOmxVenc9WaitFenceEPh8OMX_BOOL */
/* Demangled: MtkOmxVenc::WaitFence(unsigned char*, OMX_BOOL) */
int _ZN10MtkOmxVenc9WaitFenceEPh8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVenc9IoctlPollEiPiPbS1_ */
/* Demangled: MtkOmxVenc::IoctlPoll(int, int*, bool*, bool*) */
int _ZN10MtkOmxVenc9IoctlPollEiPiPbS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTV14OmxIonMVAEntry */
/* Demangled: vtable for OmxIonMVAEntry */
extern void* _ZTV14OmxIonMVAEntry;

/* Symbol: _ZN10MtkOmxVenc15MtkOmxVencDebugEv */
/* Demangled: MtkOmxVenc::MtkOmxVencDebug() */
int _ZN10MtkOmxVenc15MtkOmxVencDebugEv(void);

/* Symbol: _ZN10MtkOmxVenc15deMtkOmxVencRoiEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencRoi() */
int _ZN10MtkOmxVenc15deMtkOmxVencRoiEv(void);

/* Symbol: _ZN10MtkOmxVenc18HDR_HandleStateSetEj */
/* Demangled: MtkOmxVenc::HDR_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc18HDR_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc16GetFreeRoiBufferEPPhPj */
/* Demangled: MtkOmxVenc::GetFreeRoiBuffer(unsigned char**, unsigned int*) */
int _ZN10MtkOmxVenc16GetFreeRoiBufferEPPhPj(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetOtherInitEP19OMX_PORT_PARAM_TYPE */
/* Demangled: MtkOmxVenc::HandleGetOtherInit(OMX_PORT_PARAM_TYPE*) */
int _ZN10MtkOmxVenc18HandleGetOtherInitEP19OMX_PORT_PARAM_TYPE(void);

/* Symbol: _ZN10MtkOmxVenc14VT_SetScenarioEb */
/* Demangled: MtkOmxVenc::VT_SetScenario(bool) */
int _ZN10MtkOmxVenc14VT_SetScenarioEb(void);

/* Symbol: _ZN10MtkOmxVenc22HandleGetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO */
/* Demangled: MtkOmxVenc::HandleGetVideoSliceFMO(OMX_VIDEO_PARAM_AVCSLICEFMO*) */
int _ZN10MtkOmxVenc22HandleGetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO(void);

/* Symbol: _ZN10MtkOmxVenc35HandleSetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE */
/* Demangled: MtkOmxVenc::HandleSetConfigDescribeColorAspects(android::DescribeColorAspectsParams*) */
int _ZN10MtkOmxVenc35HandleSetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE(void);

/* Symbol: _ZN10MtkOmxVenc21HDR_GetFreeInfoBufferEPPhPj */
/* Demangled: MtkOmxVenc::HDR_GetFreeInfoBuffer(unsigned char**, unsigned int*) */
int _ZN10MtkOmxVenc21HDR_GetFreeInfoBufferEPPhPj(void);

/* Symbol: _ZN10MtkOmxVenc16QueueInputBufferEi */
/* Demangled: MtkOmxVenc::QueueInputBuffer(int) */
int _ZN10MtkOmxVenc16QueueInputBufferEi(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
int _ZN10MtkOmxVenc18HandleGetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void);

/* Symbol: _ZN10MtkOmxVenc15isFlushingStateEv */
/* Demangled: MtkOmxVenc::isFlushingState() */
int _ZN10MtkOmxVenc15isFlushingStateEv(void);

/* Symbol: _ZN10MtkOmxVenc16SetPollInterruptEv */
/* Demangled: MtkOmxVenc::SetPollInterrupt() */
int _ZN10MtkOmxVenc16SetPollInterruptEv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j */
/* Demangled: MtkOmxVenc::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN10MtkOmxVenc14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void);

/* Symbol: _ZNK7android6VectorIPhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPhE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc24Omx2DriverH264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2DriverH264ProfileMap(OMX_VIDEO_AVCPROFILETYPE) */
int _ZN10MtkOmxVenc24Omx2DriverH264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc17Heif_GetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Heif_GetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc17Heif_GetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVencD1Ev */
/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
int _ZN10MtkOmxVencD1Ev(void);

/* Symbol: _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiInfoEPc */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetRoiInfo(char*) */
int _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiInfoEPc(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN13OmxMVAManager12getMapFromVaEPv */
/* Demangled: OmxMVAManager::getMapFromVa(void*) */
int _ZN13OmxMVAManager12getMapFromVaEPv(void);

/* Symbol: _ZN10MtkOmxVenc21OutputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh */
/* Demangled: MtkOmxVenc::OutputBufferHeaderUse(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN10MtkOmxVenc21OutputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh(void);

/* Symbol: _ZN10MtkOmxVenc35HandleGetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigVideoIntraVOPRefresh(OMX_CONFIG_INTRAREFRESHVOPTYPE*) */
int _ZN10MtkOmxVenc35HandleGetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPK13native_handleP11v4l2_buffer */
/* Demangled: MtkOmxVenc::SMVR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, native_handle const*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPK13native_handleP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc11HDR_SetModeEv */
/* Demangled: MtkOmxVenc::HDR_SetMode() */
int _ZN10MtkOmxVenc11HDR_SetModeEv(void);

/* Symbol: _ZN10MtkOmxVenc14NeedConversionEv */
/* Demangled: MtkOmxVenc::NeedConversion() */
int _ZN10MtkOmxVenc14NeedConversionEv(void);

/* Symbol: _ZN10MtkOmxVenc26HandleGetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoIntraRefresh(OMX_VIDEO_PARAM_INTRAREFRESHTYPE*) */
int _ZN10MtkOmxVenc26HandleGetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17HDR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc17HDR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxBufQ5ClearEv */
/* Demangled: MtkOmxBufQ::Clear() */
int _ZN10MtkOmxBufQ5ClearEv(void);

/* Symbol: _ZN10MtkOmxVenc20setDrvParamBeforeHdrEv */
/* Demangled: MtkOmxVenc::setDrvParamBeforeHdr() */
int _ZN10MtkOmxVenc20setDrvParamBeforeHdrEv(void);

/* Symbol: _ZN10MtkOmxVenc13MtkOmxVencWFDEv */
/* Demangled: MtkOmxVenc::MtkOmxVencWFD() */
int _ZN10MtkOmxVenc13MtkOmxVencWFDEv(void);

/* Symbol: _ZN10MtkOmxVenc20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<native_handle*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN10MtkOmxVenc20ClearVEncDrvBSBufferEPh */
/* Demangled: MtkOmxVenc::ClearVEncDrvBSBuffer(unsigned char*) */
int _ZN10MtkOmxVenc20ClearVEncDrvBSBufferEPh(void);

/* Symbol: _ZN10MtkOmxVenc12ROI_OnDeInitEv */
/* Demangled: MtkOmxVenc::ROI_OnDeInit() */
int _ZN10MtkOmxVenc12ROI_OnDeInitEv(void);

/* Symbol: _ZN10MtkOmxVenc22SMVR_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::SMVR_NotifyStopCommand() */
int _ZN10MtkOmxVenc22SMVR_NotifyStopCommandEv(void);

/* Symbol: _ZN10MtkOmxVenc12doDequeFrameEPP20OMX_BUFFERHEADERTYPES2_ */
/* Demangled: MtkOmxVenc::doDequeFrame(OMX_BUFFERHEADERTYPE**, OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc12doDequeFrameEPP20OMX_BUFFERHEADERTYPES2_(void);

/* Symbol: _ZN13OmxMVAManager8dumpListEv */
/* Demangled: OmxMVAManager::dumpList() */
int _ZN13OmxMVAManager8dumpListEv(void);

/* Symbol: _ZN10MtkOmxVenc21HandleGetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
int _ZN10MtkOmxVenc21HandleGetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc35HandleSetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVideoIntraVOPRefresh(OMX_CONFIG_INTRAREFRESHVOPTYPE*) */
int _ZN10MtkOmxVenc35HandleSetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::SMVR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**, void*) */
int _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc21BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc21BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc11EncodeVideoEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeVideo(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc11EncodeVideoEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc14MtkOmxVencSMVREv */
/* Demangled: MtkOmxVenc::MtkOmxVencSMVR() */
int _ZN10MtkOmxVenc14MtkOmxVencSMVREv(void);

/* Symbol: _ZN10MtkOmxVenc18trySendStopCommandEv */
/* Demangled: MtkOmxVenc::trySendStopCommand() */
int _ZN10MtkOmxVenc18trySendStopCommandEv(void);

/* Symbol: _ZN10MtkOmxVenc11dpFormatMapE23__VENC_DRV_YUV_FORMAT_T */
/* Demangled: MtkOmxVenc::dpFormatMap(__VENC_DRV_YUV_FORMAT_T) */
int _ZN10MtkOmxVenc11dpFormatMapE23__VENC_DRV_YUV_FORMAT_T(void);

/* Symbol: _ZN10MtkOmxVenc20Omx2V4L2H264LevelMapE22OMX_VIDEO_AVCLEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2H264LevelMap(OMX_VIDEO_AVCLEVELTYPE) */
int _ZN10MtkOmxVenc20Omx2V4L2H264LevelMapE22OMX_VIDEO_AVCLEVELTYPE(void);

/* Symbol: _ZN12OmxIonMVAMapD0Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD0Ev(void);

/* Symbol: _ZN10MtkOmxVenc15deMtkOmxVencWFDEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencWFD() */
int _ZN10MtkOmxVenc15deMtkOmxVencWFDEv(void);

/* Symbol: _ZNK7android6VectorIPhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPhE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc17WFD_DisableToggleEv */
/* Demangled: MtkOmxVenc::WFD_DisableToggle() */
int _ZN10MtkOmxVenc17WFD_DisableToggleEv(void);

/* Symbol: _ZN10MtkOmxVenc12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVenc::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN10MtkOmxVenc17QueueOutputBufferEi */
/* Demangled: MtkOmxVenc::QueueOutputBuffer(int) */
int _ZN10MtkOmxVenc17QueueOutputBufferEi(void);

/* Symbol: _ZN10MtkOmxVenc40HandleGetVideoProfileLevelQuerySupportedEP32OMX_VIDEO_PARAM_PROFILELEVELTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoProfileLevelQuerySupported(OMX_VIDEO_PARAM_PROFILELEVELTYPE*) */
int _ZN10MtkOmxVenc40HandleGetVideoProfileLevelQuerySupportedEP32OMX_VIDEO_PARAM_PROFILELEVELTYPE(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE12do_constructEPvj(void);

/* Symbol: H263ProfileLevelTable */
/* Demangled: H263ProfileLevelTable */
extern void* H263ProfileLevelTable;

/* Symbol: _ZN10MtkOmxVenc19ioctl_query_out_bufEiP11v4l2_buffer */
/* Demangled: MtkOmxVenc::ioctl_query_out_buf(int, v4l2_buffer*) */
int _ZN10MtkOmxVenc19ioctl_query_out_bufEiP11v4l2_buffer(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, unsigned char*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE;

/* Symbol: _ZN10MtkOmxVenc19VT_DumpOutputBufferEPhj */
/* Demangled: MtkOmxVenc::VT_DumpOutputBuffer(unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc19VT_DumpOutputBufferEPhj(void);

/* Symbol: _ZN10MtkOmxVenc26SetBitstreamSize4FrameworkEP20OMX_BUFFERHEADERTYPEPhj */
/* Demangled: MtkOmxVenc::SetBitstreamSize4Framework(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc26SetBitstreamSize4FrameworkEP20OMX_BUFFERHEADERTYPEPhj(void);

/* Symbol: _ZTVN7android6VectorIhEE */
/* Demangled: vtable for android::Vector<unsigned char> */
extern void* _ZTVN7android6VectorIhEE;

/* Symbol: _ZN10MtkOmxVenc16MtkOmxVencBufferEv */
/* Demangled: MtkOmxVenc::MtkOmxVencBuffer() */
int _ZN10MtkOmxVenc16MtkOmxVencBufferEv(void);

/* Symbol: _ZN10MtkOmxVenc32CheckOutputBufferPortAvailbilityEv */
/* Demangled: MtkOmxVenc::CheckOutputBufferPortAvailbility() */
int _ZN10MtkOmxVenc32CheckOutputBufferPortAvailbilityEv(void);

/* Symbol: _ZN10MtkOmxVencC2Ev */
/* Demangled: MtkOmxVenc::MtkOmxVenc() */
int _ZN10MtkOmxVencC2Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc22HandleGetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoImgeGrid(OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE*) */
int _ZN10MtkOmxVenc22HandleGetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE(void);

/* Symbol: _ZN35AndroidVendorConfigExtensionFactory28createAndroidVendorExtensionEPKcSt16initializer_listINS_15ParamDescribtorEE */
/* Demangled: AndroidVendorConfigExtensionFactory::createAndroidVendorExtension(char const*, std::initializer_list<AndroidVendorConfigExtensionFactory::ParamDescribtor>) */
int _ZN35AndroidVendorConfigExtensionFactory28createAndroidVendorExtensionEPKcSt16initializer_listINS_15ParamDescribtorEE(void);

/* Symbol: _Z16MTK_OMX_MEMALIGNjj */
/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
int _Z16MTK_OMX_MEMALIGNjj(void);

/* Symbol: _ZN10MtkOmxVenc17InitSecCnvtBufferEi */
/* Demangled: MtkOmxVenc::InitSecCnvtBuffer(int) */
int _ZN10MtkOmxVenc17InitSecCnvtBufferEi(void);

/* Symbol: _Z14v4l2_dump_cropbPKcP9v4l2_crop */
/* Demangled: v4l2_dump_crop(bool, char const*, v4l2_crop*) */
int _Z14v4l2_dump_cropbPKcP9v4l2_crop(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo */
/* Demangled: OmxMVAManager::getOmxInfoFromVA(void*, _VBufInfo*) */
int _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo(void);

/* Symbol: _Z23MtkVenc_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVenc_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z23MtkVenc_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc33HandleSetConfigVendorInputScalingEP22OMX_CONFIG_BOOLEANTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorInputScaling(OMX_CONFIG_BOOLEANTYPE*) */
int _ZN10MtkOmxVenc33HandleSetConfigVendorInputScalingEP22OMX_CONFIG_BOOLEANTYPE(void);

/* Symbol: _ZN10MtkOmxVenc36HandleSetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE */
/* Demangled: MtkOmxVenc::HandleSetConfigDescribeHDRStaticInfo(android::DescribeHDRStaticInfoParams*) */
int _ZN10MtkOmxVenc36HandleSetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE(void);

/* Symbol: _ZN13OmxMVAManagerD2Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD2Ev(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE */
/* Demangled: MtkOmxVenc::DescribeFlexibleColorFormat(android::DescribeColorFormatParams*) */
int _ZN10MtkOmxVenc27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE(void);

/* Symbol: _ZN10MtkOmxVenc25InitConvertFreeBufferListEii */
/* Demangled: MtkOmxVenc::InitConvertFreeBufferList(int, int) */
int _ZN10MtkOmxVenc25InitConvertFreeBufferListEii(void);

/* Symbol: _ZN10MtkOmxVenc17HandleSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
int _ZN10MtkOmxVenc17HandleSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void);

/* Symbol: _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::GetCmd(_MTK_OMX_CMD_QUEUE_ITEM**) */
int _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN10MtkOmxVenc18QueueBufferAdvanceEP10MtkOmxBufQP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::QueueBufferAdvance(MtkOmxBufQ*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18QueueBufferAdvanceEP10MtkOmxBufQP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc10WFD_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::WFD_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc10WFD_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc22HandleSetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoImgeGrid(OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE*) */
int _ZN10MtkOmxVenc22HandleSetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE(void);

/* Symbol: _ZN10MtkOmxVenc19Debug_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc19Debug_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: AndroidVendorConfigExtensionStore::getRegisteredExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc9indexTypeE13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::indexType(OMX_INDEXTYPE) */
int _ZN10MtkOmxVenc9indexTypeE13OMX_INDEXTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc19ioctl_send_stop_cmdEv */
/* Demangled: MtkOmxVenc::ioctl_send_stop_cmd() */
int _ZN10MtkOmxVenc19ioctl_send_stop_cmdEv(void);

/* Symbol: _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_ */
/* Demangled: OmxIonMVAMap::newEntryWithHndl(void*, void*) */
int _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoH263(OMX_VIDEO_PARAM_H263TYPE*) */
int _ZN10MtkOmxVenc18HandleGetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE(void);

/* Symbol: _ZN10MtkOmxVenc13ComponentInitEPvPc */
/* Demangled: MtkOmxVenc::ComponentInit(void*, char*) */
int _ZN10MtkOmxVenc13ComponentInitEPvPc(void);

/* Symbol: _ZN10MtkOmxVenc19ComponentDeInitHeifEv */
/* Demangled: MtkOmxVenc::ComponentDeInitHeif() */
int _ZN10MtkOmxVenc19ComponentDeInitHeifEv(void);

/* Symbol: _ZN10MtkOmxVenc20ioctl_runtime_configEiii */
/* Demangled: MtkOmxVenc::ioctl_runtime_config(int, int, int) */
int _ZN10MtkOmxVenc20ioctl_runtime_configEiii(void);

/* Symbol: _ZN14OmxIonMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxIonMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN14OmxIonMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvj */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIjE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc24Heif_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc24Heif_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN13OmxMVAManager16freeOmxMVAByHndlEPv */
/* Demangled: OmxMVAManager::freeOmxMVAByHndl(void*) */
int _ZN13OmxMVAManager16freeOmxMVAByHndlEPv(void);

/* Symbol: _ZN10MtkOmxVenc15ComponentInitVTEP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitVT(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc15ComponentInitVTEP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc31HandleSetVendorSetClientLocallyEP22OMX_CONFIG_BOOLEANTYPE */
/* Demangled: MtkOmxVenc::HandleSetVendorSetClientLocally(OMX_CONFIG_BOOLEANTYPE*) */
int _ZN10MtkOmxVenc31HandleSetVendorSetClientLocallyEP22OMX_CONFIG_BOOLEANTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc11Heif_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::Heif_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc11Heif_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc21ClearVEncDrvFrmBufferEPhS0_ */
/* Demangled: MtkOmxVenc::ClearVEncDrvFrmBuffer(unsigned char*, unsigned char*) */
int _ZN10MtkOmxVenc21ClearVEncDrvFrmBufferEPhS0_(void);

/* Symbol: _ZN10MtkOmxVenc16ROI_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::ROI_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc16ROI_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc18deMtkOmxVencBufferEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencBuffer() */
int _ZN10MtkOmxVenc18deMtkOmxVencBufferEv(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc11HDR_EnabledEv */
/* Demangled: MtkOmxVenc::HDR_Enabled() */
int _ZN10MtkOmxVenc11HDR_EnabledEv(void);

/* Symbol: _ZN13OmxMVAManager4initEPKcS1_ */
/* Demangled: OmxMVAManager::init(char const*, char const*) */
int _ZN13OmxMVAManager4initEPKcS1_(void);

/* Symbol: _ZN10MtkOmxVenc28Debug_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Debug_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc28Debug_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc23DequeOnGetConvertBufferEPPhPv */
/* Demangled: MtkOmxVenc::DequeOnGetConvertBuffer(unsigned char**, void*) */
int _ZN10MtkOmxVenc23DequeOnGetConvertBufferEPPhPv(void);

/* Symbol: _ZN10MtkOmxVenc14setBufferBlackEPhi */
/* Demangled: MtkOmxVenc::setBufferBlack(unsigned char*, int) */
int _ZN10MtkOmxVenc14setBufferBlackEPhi(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_dq_eventEP10v4l2_event */
/* Demangled: MtkOmxVenc::ioctl_dq_event(v4l2_event*) */
int _ZN10MtkOmxVenc14ioctl_dq_eventEP10v4l2_event(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc13setEncodeModeENS_10teeEnvTypeE */
/* Demangled: MtkOmxVenc::setEncodeMode(MtkOmxVenc::teeEnvType) */
int _ZN10MtkOmxVenc13setEncodeModeENS_10teeEnvTypeE(void);

/* Symbol: _ZN10MtkOmxBufQ9PushFrontEi */
/* Demangled: MtkOmxBufQ::PushFront(int) */
int _ZN10MtkOmxBufQ9PushFrontEi(void);

/* Symbol: _ZN10MtkOmxVenc15MtkOmxVencParamEv */
/* Demangled: MtkOmxVenc::MtkOmxVencParam() */
int _ZN10MtkOmxVenc15MtkOmxVencParamEv(void);

/* Symbol: _ZN10MtkOmxVenc17HandleSetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoVp8(OMX_VIDEO_PARAM_VP8TYPE*) */
int _ZN10MtkOmxVenc17HandleSetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE(void);

/* Symbol: _ZTV10MtkOmxVenc */
/* Demangled: vtable for MtkOmxVenc */
extern void* _ZTV10MtkOmxVenc;

/* Symbol: _ZN10MtkOmxVenc37HandleSetParamVencorSetRoiLicenseSizeEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiLicenseSize(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc37HandleSetParamVencorSetRoiLicenseSizeEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _Z22MtkVenc_FillThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVenc_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z22MtkVenc_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh */
/* Demangled: MtkOmxVenc::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN10MtkOmxVenc9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void);

/* Symbol: _ZN10MtkOmxVenc20Heif_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc20Heif_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16HandleDequeErrorEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::HandleDequeError(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16HandleDequeErrorEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZNK7android6VectorIhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc24HandleSetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
int _ZN10MtkOmxVenc24HandleSetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26HandleSetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoMotionVector(OMX_VIDEO_PARAM_MOTIONVECTORTYPE*) */
int _ZN10MtkOmxVenc26HandleSetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE(void);

/* Symbol: _ZN10MtkOmxVenc27Debug_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Debug_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc27Debug_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc14supportNVColorEv */
/* Demangled: MtkOmxVenc::supportNVColor() */
int _ZN10MtkOmxVenc14supportNVColorEv(void);

/* Symbol: _ZN10MtkOmxVenc27HandleSetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVideoBitrate(OMX_VIDEO_CONFIG_BITRATETYPE*) */
int _ZN10MtkOmxVenc27HandleSetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE(void);

/* Symbol: _ZTVN7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEEE */
/* Demangled: vtable for android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo> */
extern void* _ZTVN7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEEE;

/* Symbol: _ZN10MtkOmxVenc26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj */
/* Demangled: MtkOmxVenc::GetMetaHandleFromOmxHeader(OMX_BUFFERHEADERTYPE*, unsigned int*) */
int _ZN10MtkOmxVenc26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj(void);

/* Symbol: _ZN10MtkOmxVenc17CheckFormatToV4L2Ev */
/* Demangled: MtkOmxVenc::CheckFormatToV4L2() */
int _ZN10MtkOmxVenc17CheckFormatToV4L2Ev(void);

/* Symbol: _ZN10MtkOmxVenc10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17HandleGetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
int _ZN10MtkOmxVenc17HandleGetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentInitParamEv */
/* Demangled: MtkOmxVenc::ComponentInitParam() */
int _ZN10MtkOmxVenc18ComponentInitParamEv(void);

/* Symbol: _ZN10MtkOmxVenc13ioctl_set_fmtEP18video_encode_param */
/* Demangled: MtkOmxVenc::ioctl_set_fmt(video_encode_param*) */
int _ZN10MtkOmxVenc13ioctl_set_fmtEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc13DumpBitstreamEPcS0_i */
/* Demangled: MtkOmxVenc::DumpBitstream(char*, char*, int) */
int _ZN10MtkOmxVenc13DumpBitstreamEPcS0_i(void);

/* Symbol: _Z22v4l2_set_dma_in_memoryP11v4l2_bufferP18video_encode_paramib */
/* Demangled: v4l2_set_dma_in_memory(v4l2_buffer*, video_encode_param*, int, bool) */
int _Z22v4l2_set_dma_in_memoryP11v4l2_bufferP18video_encode_paramib(void);

/* Symbol: _ZN10MtkOmxVenc34EpilogueOutputBufferHeaderAllocateEv */
/* Demangled: MtkOmxVenc::EpilogueOutputBufferHeaderAllocate() */
int _ZN10MtkOmxVenc34EpilogueOutputBufferHeaderAllocateEv(void);

/* Symbol: _ZN10MtkOmxVenc27Debug_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc27Debug_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z31absolute_timespec_from_timespecR8timespecRKS_i */
/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void);

/* Symbol: _ZN10MtkOmxVenc20VT_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::VT_NotifyStopCommand() */
int _ZN10MtkOmxVenc20VT_NotifyStopCommandEv(void);

/* Symbol: _ZN10MtkOmxVenc25WFD_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::WFD_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc25WFD_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc16defaultHevcLevelEv */
/* Demangled: MtkOmxVenc::defaultHevcLevel() */
int _ZN10MtkOmxVenc16defaultHevcLevelEv(void);

/* Symbol: _ZN10MtkOmxVenc18QueryDriverH264EncE24OMX_VIDEO_AVCPROFILETYPE22OMX_VIDEO_AVCLEVELTYPE */
/* Demangled: MtkOmxVenc::QueryDriverH264Enc(OMX_VIDEO_AVCPROFILETYPE, OMX_VIDEO_AVCLEVELTYPE) */
int _ZN10MtkOmxVenc18QueryDriverH264EncE24OMX_VIDEO_AVCPROFILETYPE22OMX_VIDEO_AVCLEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc27HandleSetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigCommonRotate(OMX_CONFIG_ROTATIONTYPE*) */
int _ZN10MtkOmxVenc27HandleSetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17EncSettingHEIFEncEv */
/* Demangled: MtkOmxVenc::EncSettingHEIFEnc() */
int _ZN10MtkOmxVenc17EncSettingHEIFEncEv(void);

/* Symbol: _ZTV13OmxMVAManager */
/* Demangled: vtable for OmxMVAManager */
extern void* _ZTV13OmxMVAManager;

/* Symbol: _ZN10MtkOmxVenc12MtkOmxVencVTEv */
/* Demangled: MtkOmxVenc::MtkOmxVencVT() */
int _ZN10MtkOmxVenc12MtkOmxVencVTEv(void);

/* Symbol: _ZN10MtkOmxVenc18HandleSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
int _ZN10MtkOmxVenc18HandleSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void);

/* Symbol: _ZN7android2spINS_13GraphicBufferEEC2EPS1_ */
/* Demangled: android::sp<android::GraphicBuffer>::sp(android::GraphicBuffer*) */
int _ZN7android2spINS_13GraphicBufferEEC2EPS1_(void);

/* Symbol: _ZN10MtkOmxVenc17InitHeifEncParamsEv */
/* Demangled: MtkOmxVenc::InitHeifEncParams() */
int _ZN10MtkOmxVenc17InitHeifEncParamsEv(void);

/* Symbol: _ZN10MtkOmxBufQ13DequeueBufferEv */
/* Demangled: MtkOmxBufQ::DequeueBuffer() */
int _ZN10MtkOmxBufQ13DequeueBufferEv(void);

/* Symbol: _ZN10MtkOmxVenc16InitSecEncParamsEv */
/* Demangled: MtkOmxVenc::InitSecEncParams() */
int _ZN10MtkOmxVenc16InitSecEncParamsEv(void);

/* Symbol: _ZN10MtkOmxVenc25HDR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::HDR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc25HDR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc12Debug_MMPathEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_MMPath(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc12Debug_MMPathEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManager14getMapFromHndlEPv */
/* Demangled: OmxMVAManager::getMapFromHndl(void*) */
int _ZN13OmxMVAManager14getMapFromHndlEPv(void);

/* Symbol: _ZN10MtkOmxVenc15Debug_GetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Debug_GetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc15Debug_GetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc29HandleGetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoErrorCorrection(OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE*) */
int _ZN10MtkOmxVenc29HandleGetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc28HandleSetVendorTimelapseModeEP8OMX_BOOL */
/* Demangled: MtkOmxVenc::HandleSetVendorTimelapseMode(OMX_BOOL*) */
int _ZN10MtkOmxVenc28HandleSetVendorTimelapseModeEP8OMX_BOOL(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE;

/* Symbol: _ZN10MtkOmxVenc17waitForFillBufferEm */
/* Demangled: MtkOmxVenc::waitForFillBuffer(unsigned long) */
int _ZN10MtkOmxVenc17waitForFillBufferEm(void);

/* Symbol: _ZN10MtkOmxVenc14IsRGBSupportedEv */
/* Demangled: MtkOmxVenc::IsRGBSupported() */
int _ZN10MtkOmxVenc14IsRGBSupportedEv(void);

/* Symbol: _ZN10MtkOmxVenc13Heif_OnDeInitEv */
/* Demangled: MtkOmxVenc::Heif_OnDeInit() */
int _ZN10MtkOmxVenc13Heif_OnDeInitEv(void);

/* Symbol: _ZN10MtkOmxVenc12Debug_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::Debug_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc12Debug_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_enum_fmtE13v4l2_buf_type */
/* Demangled: MtkOmxVenc::ioctl_enum_fmt(v4l2_buf_type) */
int _ZN10MtkOmxVenc14ioctl_enum_fmtE13v4l2_buf_type(void);

/* Symbol: _ZN10MtkOmxVenc17FreeOutputBuffersEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::FreeOutputBuffers(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17FreeOutputBuffersEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17deMtkOmxVencDebugEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencDebug() */
int _ZN10MtkOmxVenc17deMtkOmxVencDebugEv(void);

/* Symbol: _ZN10MtkOmxVencD2Ev */
/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
int _ZN10MtkOmxVencD2Ev(void);

/* Symbol: _ZN10MtkOmxVenc21Debug_AppInsight_InitEP18video_encode_param */
/* Demangled: MtkOmxVenc::Debug_AppInsight_Init(video_encode_param*) */
int _ZN10MtkOmxVenc21Debug_AppInsight_InitEP18video_encode_param(void);

/* Symbol: _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_ */
/* Demangled: std::__1::function<void (void*, unsigned long)>::function<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, void>(std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>) */
int _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_(void);

/* Symbol: _Z15CommandToStringj */
/* Demangled: CommandToString(unsigned int) */
int _Z15CommandToStringj(void);

/* Symbol: _ZN10MtkOmxVenc17HandleGetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoVp8(OMX_VIDEO_PARAM_VP8TYPE*) */
int _ZN10MtkOmxVenc17HandleGetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE(void);

/* Symbol: _ZN10MtkOmxVenc22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVenc::SetInputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVenc22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_set_cropEP18video_encode_param */
/* Demangled: MtkOmxVenc::ioctl_set_crop(video_encode_param*) */
int _ZN10MtkOmxVenc14ioctl_set_cropEP18video_encode_param(void);

/* Symbol: _Z17MtkVenc_GetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVenc_GetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z17MtkVenc_GetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxBufQ6UnlockEv */
/* Demangled: MtkOmxBufQ::Unlock() */
int _ZN10MtkOmxBufQ6UnlockEv(void);

/* Symbol: _ZN10MtkOmxVenc29EpilogueOutputBufferHeaderUseEv */
/* Demangled: MtkOmxVenc::EpilogueOutputBufferHeaderUse() */
int _ZN10MtkOmxVenc29EpilogueOutputBufferHeaderUseEv(void);

/* Symbol: _ZN10MtkOmxVenc29HandleGetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigVideoFramerate(OMX_CONFIG_FRAMERATETYPE*) */
int _ZN10MtkOmxVenc29HandleGetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE8do_splatEPvPKvj */
/* Demangled: android::Vector<native_handle*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc29HandleSetConfigVendorConfigQPEP19OMX_VIDEO_CONFIG_QP */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorConfigQP(OMX_VIDEO_CONFIG_QP*) */
int _ZN10MtkOmxVenc29HandleSetConfigVendorConfigQPEP19OMX_VIDEO_CONFIG_QP(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTV11OmxMVAEntry */
/* Demangled: vtable for OmxMVAEntry */
extern void* _ZTV11OmxMVAEntry;

/* Symbol: _Z32video_encode_reset_in_fmt_pix_mpP11v4l2_formatP18video_encode_param */
/* Demangled: video_encode_reset_in_fmt_pix_mp(v4l2_format*, video_encode_param*) */
int _Z32video_encode_reset_in_fmt_pix_mpP11v4l2_formatP18video_encode_param(void);

/* Symbol: _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN10MtkOmxVenc22Heif_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::Heif_NotifyStopCommand() */
int _ZN10MtkOmxVenc22Heif_NotifyStopCommandEv(void);

/* Symbol: _ZN10MtkOmxVenc26Heif_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc26Heif_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone(std::__1::__function::__base<void (void*, unsigned long)>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE(void);

/* Symbol: _ZN10MtkOmxVenc15defaultAvcLevelEv */
/* Demangled: MtkOmxVenc::defaultAvcLevel() */
int _ZN10MtkOmxVenc15defaultAvcLevelEv(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentDeInitHDREv */
/* Demangled: MtkOmxVenc::ComponentDeInitHDR() */
int _ZN10MtkOmxVenc18ComponentDeInitHDREv(void);

/* Symbol: _ZN10MtkOmxVenc21HDR_GetExtensionIndexEPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::HDR_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc21HDR_GetExtensionIndexEPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::SMVR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**, void*) */
int _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _Z21v4l2_reset_dma_in_bufP11v4l2_bufferP10v4l2_planeii */
/* Demangled: v4l2_reset_dma_in_buf(v4l2_buffer*, v4l2_plane*, int, int) */
int _Z21v4l2_reset_dma_in_bufP11v4l2_bufferP10v4l2_planeii(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN10MtkOmxVenc25Omx2DriverMPEG4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2DriverMPEG4ProfileMap(OMX_VIDEO_MPEG4PROFILETYPE) */
int _ZN10MtkOmxVenc25Omx2DriverMPEG4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc17CheckOpaqueFormatEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::CheckOpaqueFormat(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17CheckOpaqueFormatEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc30HandleSetConfigVendorSkipFrameEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSkipFrame(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc30HandleSetConfigVendorSkipFrameEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZN10MtkOmxVenc14getHWLimitSizeEj */
/* Demangled: MtkOmxVenc::getHWLimitSize(unsigned int) */
int _ZN10MtkOmxVenc14getHWLimitSizeEj(void);

/* Symbol: _ZN10MtkOmxVenc23ROI_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::ROI_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc23ROI_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti */
/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void);

/* Symbol: _ZN12OmxIonMVAMapD1Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc22ioctl_query_out_dmabufEv */
/* Demangled: MtkOmxVenc::ioctl_query_out_dmabuf() */
int _ZN10MtkOmxVenc22ioctl_query_out_dmabufEv(void);

/* Symbol: _ZN10MtkOmxVenc26Heif_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Heif_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26Heif_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc19ioctl_set_fix_scaleEP18video_encode_param */
/* Demangled: MtkOmxVenc::ioctl_set_fix_scale(video_encode_param*) */
int _ZN10MtkOmxVenc19ioctl_set_fix_scaleEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc21HDR_SetFreeInfoBufferEPh */
/* Demangled: MtkOmxVenc::HDR_SetFreeInfoBuffer(unsigned char*) */
int _ZN10MtkOmxVenc21HDR_SetFreeInfoBufferEPh(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE;

/* Symbol: _ZN10MtkOmxVenc14QueryDriverEncEv */
/* Demangled: MtkOmxVenc::QueryDriverEnc() */
int _ZN10MtkOmxVenc14QueryDriverEncEv(void);

/* Symbol: _ZN10MtkOmxBufQ4SizeEv */
/* Demangled: MtkOmxBufQ::Size() */
int _ZN10MtkOmxBufQ4SizeEv(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN10MtkOmxVenc40HandleSetConfigVendorSliceLossIndicationEP32OMX_CONFIG_SLICE_LOSS_INDICATION */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSliceLossIndication(OMX_CONFIG_SLICE_LOSS_INDICATION*) */
int _ZN10MtkOmxVenc40HandleSetConfigVendorSliceLossIndicationEP32OMX_CONFIG_SLICE_LOSS_INDICATION(void);

/* Symbol: _ZN10MtkOmxVenc12Debug_MMDumpEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_MMDump(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc12Debug_MMDumpEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z22v4l2_reset_dma_out_bufP11v4l2_bufferP10v4l2_planeii */
/* Demangled: v4l2_reset_dma_out_buf(v4l2_buffer*, v4l2_plane*, int, int) */
int _Z22v4l2_reset_dma_out_bufP11v4l2_bufferP10v4l2_planeii(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc13InitEncParamsEv */
/* Demangled: MtkOmxVenc::InitEncParams() */
int _ZN10MtkOmxVenc13InitEncParamsEv(void);

/* Symbol: _ZN10MtkOmxBufQ8DumpBufQEbPKc */
/* Demangled: MtkOmxBufQ::DumpBufQ(bool, char const*) */
int _ZN10MtkOmxBufQ8DumpBufQEbPKc(void);

/* Symbol: _ZN10MtkOmxVenc15MtkOmxVencDequeEv */
/* Demangled: MtkOmxVenc::MtkOmxVencDeque() */
int _ZN10MtkOmxVenc15MtkOmxVencDequeEv(void);

/* Symbol: _ZN10MtkOmxVenc16HandleMarkBufferEjPv */
/* Demangled: MtkOmxVenc::HandleMarkBuffer(unsigned int, void*) */
int _ZN10MtkOmxVenc16HandleMarkBufferEjPv(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentInitDebugEP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitDebug(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc18ComponentInitDebugEP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc8DumpETBQEv */
/* Demangled: MtkOmxVenc::DumpETBQ() */
int _ZN10MtkOmxVenc8DumpETBQEv(void);

/* Symbol: _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::PutCmd(_MTK_OMX_CMD_QUEUE_ITEM*) */
int _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN10MtkOmxVenc23HDR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc23HDR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: MtkOmxSetCoreGlobal */
/* Demangled: MtkOmxSetCoreGlobal */
int MtkOmxSetCoreGlobal(void);

/* Symbol: _ZN10MtkOmxVenc11SendCommandEPv15OMX_COMMANDTYPEjS0_ */
/* Demangled: MtkOmxVenc::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN10MtkOmxVenc11SendCommandEPv15OMX_COMMANDTYPEjS0_(void);

/* Symbol: _ZN10MtkOmxVenc19HandleGetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoMpeg4(OMX_VIDEO_PARAM_MPEG4TYPE*) */
int _ZN10MtkOmxVenc19HandleGetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE(void);

/* Symbol: _ZN10MtkOmxVenc35HandleGetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE */
/* Demangled: MtkOmxVenc::HandleGetConfigDescribeColorAspects(android::DescribeColorAspectsParams*) */
int _ZN10MtkOmxVenc35HandleGetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE(void);

/* Symbol: _ZN10MtkOmxVenc15notifyFlushDoneEv */
/* Demangled: MtkOmxVenc::notifyFlushDone() */
int _ZN10MtkOmxVenc15notifyFlushDoneEv(void);

/* Symbol: _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL */
/* Demangled: OmxMVAManager::setBoolProperty(char const*, OMX_BOOL) */
int _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVenc17AllowToFreeBufferEj13OMX_STATETYPE */
/* Demangled: MtkOmxVenc::AllowToFreeBuffer(unsigned int, OMX_STATETYPE) */
int _ZN10MtkOmxVenc17AllowToFreeBufferEj13OMX_STATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc16InitAvcEncParamsEv */
/* Demangled: MtkOmxVenc::InitAvcEncParams() */
int _ZN10MtkOmxVenc16InitAvcEncParamsEv(void);

/* Symbol: _ZN10MtkOmxVenc18HandleSetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoH263(OMX_VIDEO_PARAM_H263TYPE*) */
int _ZN10MtkOmxVenc18HandleSetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE(void);

/* Symbol: _ZN10MtkOmxVenc8DumpFTBQEv */
/* Demangled: MtkOmxVenc::DumpFTBQ() */
int _ZN10MtkOmxVenc8DumpFTBQEv(void);

/* Symbol: _ZN10MtkOmxVenc19GetOutputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE */
/* Demangled: MtkOmxVenc::GetOutputPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
int _ZN10MtkOmxVenc19GetOutputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentInitDequeEv */
/* Demangled: MtkOmxVenc::ComponentInitDeque() */
int _ZN10MtkOmxVenc18ComponentInitDequeEv(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEj */
/* Demangled: AndroidVendorConfigExtensionStore::isIndexRegistered(unsigned int) */
int _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEj(void);

/* Symbol: _ZN14OmxIonMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxIonMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN14OmxIonMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN10MtkOmxVenc14SMVR_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::SMVR_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc14SMVR_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc15VT_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::VT_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc15VT_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc17HDR_SetStaticInfoEv */
/* Demangled: MtkOmxVenc::HDR_SetStaticInfo() */
int _ZN10MtkOmxVenc17HDR_SetStaticInfoEv(void);

/* Symbol: _Z30v4l2_get_nplane_by_pixelformatj */
/* Demangled: v4l2_get_nplane_by_pixelformat(unsigned int) */
int _Z30v4l2_get_nplane_by_pixelformatj(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetAudioInitEP19OMX_PORT_PARAM_TYPE */
/* Demangled: MtkOmxVenc::HandleGetAudioInit(OMX_PORT_PARAM_TYPE*) */
int _ZN10MtkOmxVenc18HandleGetAudioInitEP19OMX_PORT_PARAM_TYPE(void);

/* Symbol: _ZN10MtkOmxVenc16shouldThreadStopEv */
/* Demangled: MtkOmxVenc::shouldThreadStop() */
int _ZN10MtkOmxVenc16shouldThreadStopEv(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: AndroidVendorConfigExtensionStore::isIndexRegistered(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16bufferReadyStateE13OMX_STATETYPE */
/* Demangled: MtkOmxVenc::bufferReadyState(OMX_STATETYPE) */
int _ZN10MtkOmxVenc16bufferReadyStateE13OMX_STATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26HandleGetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoQuantization(OMX_VIDEO_PARAM_QUANTIZATIONTYPE*) */
int _ZN10MtkOmxVenc26HandleGetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc30HandleSetConfigVendorDrawBlackEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorDrawBlack(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc30HandleSetConfigVendorDrawBlackEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZN10MtkOmxVenc12Heif_EnabledEv */
/* Demangled: MtkOmxVenc::Heif_Enabled() */
int _ZN10MtkOmxVenc12Heif_EnabledEv(void);

/* Symbol: _ZN10MtkOmxVenc27DeinitConvertFreeBufferListEv */
/* Demangled: MtkOmxVenc::DeinitConvertFreeBufferList() */
int _ZN10MtkOmxVenc27DeinitConvertFreeBufferListEv(void);

/* Symbol: _ZN10MtkOmxVenc22tier_id_ioctl_set_ctrlEv */
/* Demangled: MtkOmxVenc::tier_id_ioctl_set_ctrl() */
int _ZN10MtkOmxVenc22tier_id_ioctl_set_ctrlEv(void);

/* Symbol: _ZN10MtkOmxBufQC1Ev */
/* Demangled: MtkOmxBufQ::MtkOmxBufQ() */
int _ZN10MtkOmxBufQC1Ev(void);

/* Symbol: _ZN10MtkOmxVenc25HandleSetVendorSetMCIModeEP8OMX_BOOL */
/* Demangled: MtkOmxVenc::HandleSetVendorSetMCIMode(OMX_BOOL*) */
int _ZN10MtkOmxVenc25HandleSetVendorSetMCIModeEP8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVenc35HandleSetVendorWhiteboardEffectModeEP8OMX_BOOL */
/* Demangled: MtkOmxVenc::HandleSetVendorWhiteboardEffectMode(OMX_BOOL*) */
int _ZN10MtkOmxVenc35HandleSetVendorWhiteboardEffectModeEP8OMX_BOOL(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManager17getMapIndexFromVaEPvb */
/* Demangled: OmxMVAManager::getMapIndexFromVa(void*, bool) */
int _ZN13OmxMVAManager17getMapIndexFromVaEPvb(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc15queryCapabilityEiiiii */
/* Demangled: MtkOmxVenc::queryCapability(int, int, int, int, int) */
int _ZN10MtkOmxVenc15queryCapabilityEiiiii(void);

/* Symbol: _ZN10MtkOmxVenc16HDR_GetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::HDR_GetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc16HDR_GetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIjE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc12HDR_OnDeInitEv */
/* Demangled: MtkOmxVenc::HDR_OnDeInit() */
int _ZN10MtkOmxVenc12HDR_OnDeInitEv(void);

/* Symbol: _ZNKSt3__18functionIFvPvmEEclES1_m */
/* Demangled: std::__1::function<void (void*, unsigned long)>::operator()(void*, unsigned long) const */
int _ZNKSt3__18functionIFvPvmEEclES1_m(void);

/* Symbol: _ZN10MtkOmxVenc7doDequeEv */
/* Demangled: MtkOmxVenc::doDeque() */
int _ZN10MtkOmxVenc7doDequeEv(void);

/* Symbol: _ZN10MtkOmxVenc31CheckInputBufferPortAvailbilityEv */
/* Demangled: MtkOmxVenc::CheckInputBufferPortAvailbility() */
int _ZN10MtkOmxVenc31CheckInputBufferPortAvailbilityEv(void);

/* Symbol: _ZN10MtkOmxVenc24InputBufferHeadersResizeEi */
/* Demangled: MtkOmxVenc::InputBufferHeadersResize(int) */
int _ZN10MtkOmxVenc24InputBufferHeadersResizeEi(void);

/* Symbol: _ZN10MtkOmxVenc21ioctl_subscribe_eventEi */
/* Demangled: MtkOmxVenc::ioctl_subscribe_event(int) */
int _ZN10MtkOmxVenc21ioctl_subscribe_eventEi(void);

/* Symbol: _ZN10MtkOmxBufQixEj */
/* Demangled: MtkOmxBufQ::operator[](unsigned int) */
int _ZN10MtkOmxBufQixEj(void);

/* Symbol: _ZN10MtkOmxVenc19SMVR_HandleStateSetEj */
/* Demangled: MtkOmxVenc::SMVR_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc19SMVR_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc29HandleSetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVideoFramerate(OMX_CONFIG_FRAMERATETYPE*) */
int _ZN10MtkOmxVenc29HandleSetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc21WFD_DrawYUVStripeLineEPPhS1_S1_jj */
/* Demangled: MtkOmxVenc::WFD_DrawYUVStripeLine(unsigned char**, unsigned char**, unsigned char**, unsigned int, unsigned int) */
int _ZN10MtkOmxVenc21WFD_DrawYUVStripeLineEPPhS1_S1_jj(void);

/* Symbol: _ZN10MtkOmxVenc23EncSettingDrvResolutionEv */
/* Demangled: MtkOmxVenc::EncSettingDrvResolution() */
int _ZN10MtkOmxVenc23EncSettingDrvResolutionEv(void);

/* Symbol: _Z16MtkOmxVencThreadPv */
/* Demangled: MtkOmxVencThread(void*) */
int _Z16MtkOmxVencThreadPv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_q_in_bufEP20OMX_BUFFERHEADERTYPEi */
/* Demangled: MtkOmxVenc::ioctl_q_in_buf(OMX_BUFFERHEADERTYPE*, int) */
int _ZN10MtkOmxVenc14ioctl_q_in_bufEP20OMX_BUFFERHEADERTYPEi(void);

/* Symbol: _ZN10MtkOmxVenc22Omx2V4L2H264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2H264ProfileMap(OMX_VIDEO_AVCPROFILETYPE) */
int _ZN10MtkOmxVenc22Omx2V4L2H264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc13HDR_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::HDR_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc13HDR_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc21HandleSMVRSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE */
/* Demangled: MtkOmxVenc::HandleSMVRSetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
int _ZN10MtkOmxVenc21HandleSMVRSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void);

/* Symbol: _ZN10MtkOmxVenc14v4l2_query_capEP15v4l2_capability */
/* Demangled: MtkOmxVenc::v4l2_query_cap(v4l2_capability*) */
int _ZN10MtkOmxVenc14v4l2_query_capEP15v4l2_capability(void);

/* Symbol: _ZN10MtkOmxVenc13drawRGBStripeEPviii */
/* Demangled: MtkOmxVenc::drawRGBStripe(void*, int, int, int) */
int _ZN10MtkOmxVenc13drawRGBStripeEPviii(void);

/* Symbol: _ZN10MtkOmxVenc16SetFreeRoiBufferEPh */
/* Demangled: MtkOmxVenc::SetFreeRoiBuffer(unsigned char*) */
int _ZN10MtkOmxVenc16SetFreeRoiBufferEPh(void);

/* Symbol: _Z17MtkVenc_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh */
/* Demangled: MtkVenc_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _Z17MtkVenc_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void);

/* Symbol: _ZN10MtkOmxVenc21HandleSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
int _ZN10MtkOmxVenc21HandleSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvj(void);

/* Symbol: roiExt */
/* Demangled: roiExt */
extern void* roiExt;

/* Symbol: _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _ZN13OmxMVAManagerC1EPKcS1_ */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
int _ZN13OmxMVAManagerC1EPKcS1_(void);

/* Symbol: _ZN10MtkOmxVenc10EncodeFuncEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeFunc(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc10EncodeFuncEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16onFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::onFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16onFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc19WFD_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::WFD_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc19WFD_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc15ioctl_dq_in_bufEPP20OMX_BUFFERHEADERTYPEPPh */
/* Demangled: MtkOmxVenc::ioctl_dq_in_buf(OMX_BUFFERHEADERTYPE**, unsigned char**) */
int _ZN10MtkOmxVenc15ioctl_dq_in_bufEPP20OMX_BUFFERHEADERTYPEPPh(void);

/* Symbol: _ZN10MtkOmxVenc11device_openEPKc */
/* Demangled: MtkOmxVenc::device_open(char const*) */
int _ZN10MtkOmxVenc11device_openEPKc(void);

/* Symbol: _ZN12OmxIonMVAMap8getIonFdEv */
/* Demangled: OmxIonMVAMap::getIonFd() */
int _ZN12OmxIonMVAMap8getIonFdEv(void);

/* Symbol: _ZN10MtkOmxBufQ16QueueBufferFrontEi */
/* Demangled: MtkOmxBufQ::QueueBufferFront(int) */
int _ZN10MtkOmxBufQ16QueueBufferFrontEi(void);

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_ */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM* const&) */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_(void);

/* Symbol: _ZN10MtkOmxVenc10dumpBufferEPcPhi */
/* Demangled: MtkOmxVenc::dumpBuffer(char*, unsigned char*, int) */
int _ZN10MtkOmxVenc10dumpBufferEPcPhi(void);

/* Symbol: _ZN10MtkOmxVenc14HandleStateSetEj */
/* Demangled: MtkOmxVenc::HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc14HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc23SetVEncDrvFrmBufferFlagEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::SetVEncDrvFrmBufferFlag(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc23SetVEncDrvFrmBufferFlagEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc11dumpCCInputEPhj */
/* Demangled: MtkOmxVenc::dumpCCInput(unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc11dumpCCInputEPhj(void);

/* Symbol: _ZN10MtkOmxVenc12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVenc::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN10MtkOmxVenc19GenerateDummyBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::GenerateDummyBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19GenerateDummyBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNSt3__110shared_ptrIvED2Ev */
/* Demangled: std::__1::shared_ptr<void>::~shared_ptr() */
int _ZNSt3__110shared_ptrIvED2Ev(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN12OmxIonMVAMap21getIonPhysicalAddressEii */
/* Demangled: OmxIonMVAMap::getIonPhysicalAddress(int, int) */
int _ZN12OmxIonMVAMap21getIonPhysicalAddressEii(void);

/* Symbol: _Z19MtkVenc_SendCommandPv15OMX_COMMANDTYPEjS_ */
/* Demangled: MtkVenc_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _Z19MtkVenc_SendCommandPv15OMX_COMMANDTYPEjS_(void);

/* Symbol: _Z23MtkVenc_ComponentDeInitPv */
/* Demangled: MtkVenc_ComponentDeInit(void*) */
int _Z23MtkVenc_ComponentDeInitPv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEEE;

/* Symbol: _ZN10MtkOmxVenc18Debug_GetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Debug_GetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc18Debug_GetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc13Debug_SetModeEv */
/* Demangled: MtkOmxVenc::Debug_SetMode() */
int _ZN10MtkOmxVenc13Debug_SetModeEv(void);

/* Symbol: _ZN10MtkOmxVenc25Debug_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc25Debug_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc11checkMemoryEPciS0_ */
/* Demangled: MtkOmxVenc::checkMemory(char*, int, char*) */
int _ZN10MtkOmxVenc11checkMemoryEPciS0_(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN10MtkOmxVenc17ComponentInitHeifEP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitHeif(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc17ComponentInitHeifEP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc33EpilogueInputBufferHeaderAllocateEv */
/* Demangled: MtkOmxVenc::EpilogueInputBufferHeaderAllocate() */
int _ZN10MtkOmxVenc33EpilogueInputBufferHeaderAllocateEv(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc19HandleSetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoMpeg4(OMX_VIDEO_PARAM_MPEG4TYPE*) */
int _ZN10MtkOmxVenc19HandleSetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE(void);

/* Symbol: _ZN10MtkOmxVenc15ioctl_q_out_bufEP20OMX_BUFFERHEADERTYPEi */
/* Demangled: MtkOmxVenc::ioctl_q_out_buf(OMX_BUFFERHEADERTYPE*, int) */
int _ZN10MtkOmxVenc15ioctl_q_out_bufEP20OMX_BUFFERHEADERTYPEi(void);

/* Symbol: _ZN10MtkOmxVenc20PrepareOutputBuffersEv */
/* Demangled: MtkOmxVenc::PrepareOutputBuffers() */
int _ZN10MtkOmxVenc20PrepareOutputBuffersEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE12do_constructEPvj(void);

/* Symbol: _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo */
/* Demangled: OmxMVAManager::getOmxInfoFromHndl(void*, _VBufInfo*) */
int _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo(void);

/* Symbol: _ZN10MtkOmxVenc15ComponentDeInitEPv */
/* Demangled: MtkOmxVenc::ComponentDeInit(void*) */
int _ZN10MtkOmxVenc15ComponentDeInitEPv(void);

/* Symbol: _ZN10MtkOmxVenc23Debug_GetExtensionIndexEPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::Debug_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc23Debug_GetExtensionIndexEPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc37HandleSetGoogleStoreMetaDataInBuffersEPN7android28StoreMetaDataInBuffersParamsE */
/* Demangled: MtkOmxVenc::HandleSetGoogleStoreMetaDataInBuffers(android::StoreMetaDataInBuffersParams*) */
int _ZN10MtkOmxVenc37HandleSetGoogleStoreMetaDataInBuffersEPN7android28StoreMetaDataInBuffersParamsE(void);

/* Symbol: _ZN10MtkOmxVenc29EncodeT_Output_GetBufferIndexEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeT_Output_GetBufferIndex(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc29EncodeT_Output_GetBufferIndexEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc13EncSettingEncEv */
/* Demangled: MtkOmxVenc::EncSettingEnc() */
int _ZN10MtkOmxVenc13EncSettingEncEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE;

/* Symbol: _ZN10MtkOmxVenc17EncSettingHEVCEncEv */
/* Demangled: MtkOmxVenc::EncSettingHEVCEnc() */
int _ZN10MtkOmxVenc17EncSettingHEVCEncEv(void);

/* Symbol: _ZN10MtkOmxVenc26ROI_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::ROI_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26ROI_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN12OmxIonMVAMap9dumpEntryEPv */
/* Demangled: OmxIonMVAMap::dumpEntry(void*) */
int _ZN12OmxIonMVAMap9dumpEntryEPv(void);

/* Symbol: _Z16MtkVenc_GetStatePvP13OMX_STATETYPE */
/* Demangled: MtkVenc_GetState(void*, OMX_STATETYPE*) */
int _Z16MtkVenc_GetStatePvP13OMX_STATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc14FlushInputPortEv */
/* Demangled: MtkOmxVenc::FlushInputPort() */
int _ZN10MtkOmxVenc14FlushInputPortEv(void);

/* Symbol: _ZN10MtkOmxVenc17VT_HandleStateSetEj */
/* Demangled: MtkOmxVenc::VT_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc17VT_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc9GetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVenc::GetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc9GetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z12MTK_OMX_FREEPv */
/* Demangled: MTK_OMX_FREE(void*) */
int _Z12MTK_OMX_FREEPv(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetVideoInitEP19OMX_PORT_PARAM_TYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoInit(OMX_PORT_PARAM_TYPE*) */
int _ZN10MtkOmxVenc18HandleGetVideoInitEP19OMX_PORT_PARAM_TYPE(void);

/* Symbol: _ZN10MtkOmxVenc22HandleSetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO */
/* Demangled: MtkOmxVenc::HandleSetVideoSliceFMO(OMX_VIDEO_PARAM_AVCSLICEFMO*) */
int _ZN10MtkOmxVenc22HandleSetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO(void);

/* Symbol: _ZN10MtkOmxVenc32EncodeT_Input_GetBufferHeaderPtrEi */
/* Demangled: MtkOmxVenc::EncodeT_Input_GetBufferHeaderPtr(int) */
int _ZN10MtkOmxVenc32EncodeT_Input_GetBufferHeaderPtrEi(void);

/* Symbol: _ZN10MtkOmxVenc11SMVR_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::SMVR_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc11SMVR_OnInitEP18video_encode_param(void);

/* Symbol: _Z21MtkVenc_ComponentInitPvPc */
/* Demangled: MtkVenc_ComponentInit(void*, char*) */
int _Z21MtkVenc_ComponentInitPvPc(void);

/* Symbol: _ZN10MtkOmxVenc13ROI_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::ROI_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc13ROI_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc19ROI_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::ROI_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19ROI_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc24HandleGetVendorOmxHandleEPj */
/* Demangled: MtkOmxVenc::HandleGetVendorOmxHandle(unsigned int*) */
int _ZN10MtkOmxVenc24HandleGetVendorOmxHandleEPj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc24VT_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::VT_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc24VT_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: HevcProfileLevelTable */
/* Demangled: HevcProfileLevelTable */
extern void* HevcProfileLevelTable;

/* Symbol: _ZN10MtkOmxVenc13GetVencFormatE17MTK_VENC_CODEC_ID */
/* Demangled: MtkOmxVenc::GetVencFormat(MTK_VENC_CODEC_ID) */
int _ZN10MtkOmxVenc13GetVencFormatE17MTK_VENC_CODEC_ID(void);

/* Symbol: _ZN10MtkOmxVenc17SMVR_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::SMVR_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc17SMVR_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN14MtkOmxCmdQueueC1Ev */
/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueC1Ev(void);

/* Symbol: _ZN10MtkOmxVenc20DequeueBufferAdvanceEP10MtkOmxBufQ */
/* Demangled: MtkOmxVenc::DequeueBufferAdvance(MtkOmxBufQ*) */
int _ZN10MtkOmxVenc20DequeueBufferAdvanceEP10MtkOmxBufQ(void);

/* Symbol: _ZN10MtkOmxVenc12Heif_SetModeEv */
/* Demangled: MtkOmxVenc::Heif_SetMode() */
int _ZN10MtkOmxVenc12Heif_SetModeEv(void);

/* Symbol: _ZN14MtkOmxCmdQueue10GetCmdSizeEv */
/* Demangled: MtkOmxCmdQueue::GetCmdSize() */
int _ZN14MtkOmxCmdQueue10GetCmdSizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc9EncodeEosEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeEos(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc9EncodeEosEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN12OmxIonMVAMap24newEntryWithHndlwithSizeEPvS0_j */
/* Demangled: OmxIonMVAMap::newEntryWithHndlwithSize(void*, void*, unsigned int) */
int _ZN12OmxIonMVAMap24newEntryWithHndlwithSizeEPvS0_j(void);

/* Symbol: _ZN10MtkOmxVenc17GetExtensionIndexEPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc15VT_SetConfigSliEP32OMX_CONFIG_SLICE_LOSS_INDICATION */
/* Demangled: MtkOmxVenc::VT_SetConfigSli(OMX_CONFIG_SLICE_LOSS_INDICATION*) */
int _ZN10MtkOmxVenc15VT_SetConfigSliEP32OMX_CONFIG_SLICE_LOSS_INDICATION(void);

/* Symbol: _ZN10MtkOmxVenc26GetMetaHandleFromBufferPtrEPhPj */
/* Demangled: MtkOmxVenc::GetMetaHandleFromBufferPtr(unsigned char*, unsigned int*) */
int _ZN10MtkOmxVenc26GetMetaHandleFromBufferPtrEPhPj(void);

/* Symbol: _ZN10MtkOmxVenc25WFD_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::WFD_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc25WFD_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16isFlushDoneStateEv */
/* Demangled: MtkOmxVenc::isFlushDoneState() */
int _ZN10MtkOmxVenc16isFlushDoneStateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN10MtkOmxBufQD1Ev */
/* Demangled: MtkOmxBufQ::~MtkOmxBufQ() */
int _ZN10MtkOmxBufQD1Ev(void);

/* Symbol: _ZN10MtkOmxVenc21ROI_GetExtensionIndexEPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::ROI_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc21ROI_GetExtensionIndexEPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc27SMVR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::SMVR_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc27SMVR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc21WFD_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::WFD_NotifyStopCommand() */
int _ZN10MtkOmxVenc21WFD_NotifyStopCommandEv(void);

/* Symbol: _ZN12OmxIonMVAMapD2Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD2Ev(void);

/* Symbol: _ZN10MtkOmxVenc19CheckGrallocWStrideEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::CheckGrallocWStride(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19CheckGrallocWStrideEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26HDR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::HDR_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26HDR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc26ROI_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::ROI_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
int _ZN10MtkOmxVenc26ROI_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc18ioctl_query_in_bufEiP11v4l2_buffer */
/* Demangled: MtkOmxVenc::ioctl_query_in_buf(int, v4l2_buffer*) */
int _ZN10MtkOmxVenc18ioctl_query_in_bufEiP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc19setDrvParamAfterEncEv */
/* Demangled: MtkOmxVenc::setDrvParamAfterEnc() */
int _ZN10MtkOmxVenc19setDrvParamAfterEncEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: _ZN10MtkOmxVenc20ioctl_clear_req_bufsEi */
/* Demangled: MtkOmxVenc::ioctl_clear_req_bufs(int) */
int _ZN10MtkOmxVenc20ioctl_clear_req_bufsEi(void);

/* Symbol: _ZN10MtkOmxVenc16waitIfNoEnqueuedEv */
/* Demangled: MtkOmxVenc::waitIfNoEnqueued() */
int _ZN10MtkOmxVenc16waitIfNoEnqueuedEv(void);

/* Symbol: _Z16sem_wait_timeoutP5sem_ti */
/* Demangled: sem_wait_timeout(sem_t*, int) */
int _Z16sem_wait_timeoutP5sem_ti(void);

/* Symbol: _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_ */
/* Demangled: OmxIonMVAMap::newEntryWithVa(void*, int, void*) */
int _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_(void);

/* Symbol: _ZN10MtkOmxVenc25ReturnPendingInputBuffersEv */
/* Demangled: MtkOmxVenc::ReturnPendingInputBuffers() */
int _ZN10MtkOmxVenc25ReturnPendingInputBuffersEv(void);

/* Symbol: _ZN10MtkOmxVenc12isFatalErrorEv */
/* Demangled: MtkOmxVenc::isFatalError() */
int _ZN10MtkOmxVenc12isFatalErrorEv(void);

/* Symbol: _ZN10MtkOmxVenc20GetFreeConvertBufferEPPhPj */
/* Demangled: MtkOmxVenc::GetFreeConvertBuffer(unsigned char**, unsigned int*) */
int _ZN10MtkOmxVenc20GetFreeConvertBufferEPPhPj(void);

/* Symbol: _ZN10MtkOmxVenc16GetPollInterruptEv */
/* Demangled: MtkOmxVenc::GetPollInterrupt() */
int _ZN10MtkOmxVenc16GetPollInterruptEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc23HandleGetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVenc23HandleGetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc28HandleSetConfigOperatingRateEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigOperatingRate(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc28HandleSetConfigOperatingRateEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIPhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPhE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc20Omx2V4L2HevcLevelMapE23OMX_VIDEO_HEVCLEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2HevcLevelMap(OMX_VIDEO_HEVCLEVELTYPE) */
int _ZN10MtkOmxVenc20Omx2V4L2HevcLevelMapE23OMX_VIDEO_HEVCLEVELTYPE(void);

/* Symbol: _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj */
/* Demangled: OmxMVAManager::getOmxMVAFromVA(void*, unsigned int*) */
int _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj(void);

/* Symbol: _ZN10MtkOmxVenc12VT_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::VT_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc12VT_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc18HandleGetImageInitEP19OMX_PORT_PARAM_TYPE */
/* Demangled: MtkOmxVenc::HandleGetImageInit(OMX_PORT_PARAM_TYPE*) */
int _ZN10MtkOmxVenc18HandleGetImageInitEP19OMX_PORT_PARAM_TYPE(void);

/* Symbol: _ZN10MtkOmxVenc25InputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj */
/* Demangled: MtkOmxVenc::InputBufferHeaderAllocate(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN10MtkOmxVenc25InputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj(void);

/* Symbol: _ZN10MtkOmxVenc10VT_SetModeEv */
/* Demangled: MtkOmxVenc::VT_SetMode() */
int _ZN10MtkOmxVenc10VT_SetModeEv(void);

/* Symbol: _ZN10MtkOmxVenc36HandleGetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE */
/* Demangled: MtkOmxVenc::HandleGetConfigDescribeHDR10PlusInfo(android::DescribeHDR10PlusInfoParams*) */
int _ZN10MtkOmxVenc36HandleGetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE(void);

/* Symbol: _ZNSt3__110shared_ptrI5MMLibED2Ev */
/* Demangled: std::__1::shared_ptr<MMLib>::~shared_ptr() */
int _ZNSt3__110shared_ptrI5MMLibED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStoreC1Ev */
/* Demangled: AndroidVendorConfigExtensionStore::AndroidVendorConfigExtensionStore() */
int _ZN33AndroidVendorConfigExtensionStoreC1Ev(void);

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN10MtkOmxVenc22Omx2DriverH264LevelMapE22OMX_VIDEO_AVCLEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2DriverH264LevelMap(OMX_VIDEO_AVCLEVELTYPE) */
int _ZN10MtkOmxVenc22Omx2DriverH264LevelMapE22OMX_VIDEO_AVCLEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentDeInitRoiEv */
/* Demangled: MtkOmxVenc::ComponentDeInitRoi() */
int _ZN10MtkOmxVenc18ComponentDeInitRoiEv(void);

/* Symbol: _ZN10MtkOmxVenc39HandleSetConfigVendorSetForceFullIframeEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetForceFullIframe(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc39HandleSetConfigVendorSetForceFullIframeEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZN10MtkOmxVenc10startFlushEP20OMX_BUFFERHEADERTYPEb */
/* Demangled: MtkOmxVenc::startFlush(OMX_BUFFERHEADERTYPE*, bool) */
int _ZN10MtkOmxVenc10startFlushEP20OMX_BUFFERHEADERTYPEb(void);

/* Symbol: _ZN13OmxMVAManager19getMapIndexFromHndlEPvb */
/* Demangled: OmxMVAManager::getMapIndexFromHndl(void*, bool) */
int _ZN13OmxMVAManager19getMapIndexFromHndlEPvb(void);

/* Symbol: MtkOmxComponentCreate */
/* Demangled: MtkOmxComponentCreate */
int MtkOmxComponentCreate(void);

/* Symbol: _ZN10MtkOmxVenc37HandleSetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigGoogleTemporalLayering(OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE*) */
int _ZN10MtkOmxVenc37HandleSetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE(void);

/* Symbol: _ZN10MtkOmxVenc22HandleSMVRSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE */
/* Demangled: MtkOmxVenc::HandleSMVRSetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
int _ZN10MtkOmxVenc22HandleSMVRSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void);

/* Symbol: _ZN10MtkOmxVenc30CheckBufferAvailabilityAdvanceEP10MtkOmxBufQS1_ */
/* Demangled: MtkOmxVenc::CheckBufferAvailabilityAdvance(MtkOmxBufQ*, MtkOmxBufQ*) */
int _ZN10MtkOmxVenc30CheckBufferAvailabilityAdvanceEP10MtkOmxBufQS1_(void);

/* Symbol: _ZN10MtkOmxVenc17deMtkOmxVencDequeEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencDeque() */
int _ZN10MtkOmxVenc17deMtkOmxVencDequeEv(void);

/* Symbol: _ZN10MtkOmxVenc17WFD_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::WFD_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc17WFD_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc14Heif_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Heif_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc14Heif_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc13Debug_EnabledEv */
/* Demangled: MtkOmxVenc::Debug_Enabled() */
int _ZN10MtkOmxVenc13Debug_EnabledEv(void);

/* Symbol: _ZN10MtkOmxVenc14Debug_OnDeInitEv */
/* Demangled: MtkOmxVenc::Debug_OnDeInit() */
int _ZN10MtkOmxVenc14Debug_OnDeInitEv(void);

/* Symbol: _ZN10MtkOmxVenc10isEosStateEv */
/* Demangled: MtkOmxVenc::isEosState() */
int _ZN10MtkOmxVenc10isEosStateEv(void);

/* Symbol: _Z18MtkVenc_FreeBufferPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVenc_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _Z18MtkVenc_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z22MtkOmxVencEncodeThreadPv */
/* Demangled: MtkOmxVencEncodeThread(void*) */
int _Z22MtkOmxVencEncodeThreadPv(void);

/* Symbol: _ZN10MtkOmxVenc12SetCallbacksEPvP16OMX_CALLBACKTYPES0_ */
/* Demangled: MtkOmxVenc::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _ZN10MtkOmxVenc12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void);

/* Symbol: _ZN10MtkOmxVenc29Buffer_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::Buffer_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
int _ZN10MtkOmxVenc29Buffer_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc26getInputBufferSizeByFormatE28OMX_VIDEO_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVenc::getInputBufferSizeByFormat(OMX_VIDEO_PORTDEFINITIONTYPE) */
int _ZN10MtkOmxVenc26getInputBufferSizeByFormatE28OMX_VIDEO_PORTDEFINITIONTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE8do_splatEPvPKvj(void);

/* Symbol: _Z14MTK_OMX_MEMSETPvij */
/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
int _Z14MTK_OMX_MEMSETPvij(void);

/* Symbol: _ZN10MtkOmxVenc26HandleSetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoIntraRefresh(OMX_VIDEO_PARAM_INTRAREFRESHTYPE*) */
int _ZN10MtkOmxVenc26HandleSetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE(void);

/* Symbol: _ZN10MtkOmxVenc19checkSecSwitchInEncEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::checkSecSwitchInEnc(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19checkSecSwitchInEncEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN10MtkOmxBufQC2Ev */
/* Demangled: MtkOmxBufQ::MtkOmxBufQ() */
int _ZN10MtkOmxBufQC2Ev(void);

/* Symbol: _ZTVN7android6VectorIP13native_handleEE */
/* Demangled: vtable for android::Vector<native_handle*> */
extern void* _ZTVN7android6VectorIP13native_handleEE;

/* Symbol: _ZN10MtkOmxVenc20SMVR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::SMVR_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc20SMVR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc21DequeOnGetInputBufferEPP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE**, void*) */
int _ZN10MtkOmxVenc21DequeOnGetInputBufferEPP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc14SetDbgInfo2IonERiS0_PviiiiiS0_S0_S1_iiiii */
/* Demangled: MtkOmxVenc::SetDbgInfo2Ion(int&, int&, void*, int, int, int, int, int, int&, int&, void*, int, int, int, int, int) */
int _ZN10MtkOmxVenc14SetDbgInfo2IonERiS0_PviiiiiS0_S0_S1_iiiii(void);

/* Symbol: _ZN10MtkOmxVenc19QueryDriverMPEG4EncEv */
/* Demangled: MtkOmxVenc::QueryDriverMPEG4Enc() */
int _ZN10MtkOmxVenc19QueryDriverMPEG4EncEv(void);

/* Symbol: _ZN10MtkOmxVenc33EncodeT_Output_GetBufferHeaderPtrEi */
/* Demangled: MtkOmxVenc::EncodeT_Output_GetBufferHeaderPtr(int) */
int _ZN10MtkOmxVenc33EncodeT_Output_GetBufferHeaderPtrEi(void);

/* Symbol: _ZN10MtkOmxVenc20SMVR_DumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj */
/* Demangled: MtkOmxVenc::SMVR_DumpInputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc20SMVR_DumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj(void);

/* Symbol: _ZN10MtkOmxVenc18Heif_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc18Heif_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv(void);

/* Symbol: _ZN13OmxMVAManager25newOmxMVAwithHndlwithSizeEPvS0_j */
/* Demangled: OmxMVAManager::newOmxMVAwithHndlwithSize(void*, void*, unsigned int) */
int _ZN13OmxMVAManager25newOmxMVAwithHndlwithSizeEPvS0_j(void);

/* Symbol: _ZN10MtkOmxVenc18checkSecSwitchInCCEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::checkSecSwitchInCC(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18checkSecSwitchInCCEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN10MtkOmxVenc25normalSecureSwitchHndlingEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::normalSecureSwitchHndling(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc25normalSecureSwitchHndlingEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN10MtkOmxVenc16InitVP8EncParamsEv */
/* Demangled: MtkOmxVenc::InitVP8EncParams() */
int _ZN10MtkOmxVenc16InitVP8EncParamsEv(void);

/* Symbol: _ZN10MtkOmxVenc28HandleSetVendor3DVideoRecodeEP21OMX_VIDEO_H264FPATYPE */
/* Demangled: MtkOmxVenc::HandleSetVendor3DVideoRecode(OMX_VIDEO_H264FPATYPE*) */
int _ZN10MtkOmxVenc28HandleSetVendor3DVideoRecodeEP21OMX_VIDEO_H264FPATYPE(void);

/* Symbol: _ZN10MtkOmxVenc25OutputBufferHeadersResizeEi */
/* Demangled: MtkOmxVenc::OutputBufferHeadersResize(int) */
int _ZN10MtkOmxVenc25OutputBufferHeadersResizeEi(void);

/* Symbol: _ZN10MtkOmxVenc19GetVEncDrvFrmBufferEPhjS0_jP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: MtkOmxVenc::GetVEncDrvFrmBuffer(unsigned char*, unsigned int, unsigned char*, unsigned int, __VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN10MtkOmxVenc19GetVEncDrvFrmBufferEPhjS0_jP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo */
/* Demangled: OmxMVAEntry::setToVBufInfo(_VBufInfo*) */
int _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo(void);

/* Symbol: _ZN10MtkOmxVenc19Omx2V4L2HevcTierMapE23OMX_VIDEO_HEVCLEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2HevcTierMap(OMX_VIDEO_HEVCLEVELTYPE) */
int _ZN10MtkOmxVenc19Omx2V4L2HevcTierMapE23OMX_VIDEO_HEVCLEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18QueryDriverHEIFEncEv */
/* Demangled: MtkOmxVenc::QueryDriverHEIFEnc() */
int _ZN10MtkOmxVenc18QueryDriverHEIFEncEv(void);

/* Symbol: _ZN10MtkOmxVenc17Heif_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Heif_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc17Heif_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc25ROI_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::ROI_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
int _ZN10MtkOmxVenc25ROI_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc15FlushOutputPortEv */
/* Demangled: MtkOmxVenc::FlushOutputPort() */
int _ZN10MtkOmxVenc15FlushOutputPortEv(void);

/* Symbol: _ZN10MtkOmxVenc30HandleSetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE */
/* Demangled: MtkOmxVenc::HandleSetStandardComponentRole(OMX_PARAM_COMPONENTROLETYPE*) */
int _ZN10MtkOmxVenc30HandleSetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE(void);

/* Symbol: _ZN10MtkOmxVenc35HandleGetGoogleDescribeColorFormat2EPN7android26DescribeColorFormat2ParamsE */
/* Demangled: MtkOmxVenc::HandleGetGoogleDescribeColorFormat2(android::DescribeColorFormat2Params*) */
int _ZN10MtkOmxVenc35HandleGetGoogleDescribeColorFormat2EPN7android26DescribeColorFormat2ParamsE(void);

/* Symbol: _ZN10MtkOmxVenc28VT_SetConfigResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION */
/* Demangled: MtkOmxVenc::VT_SetConfigResolutionChange(OMX_VIDEO_PARAM_RESOLUTION*) */
int _ZN10MtkOmxVenc28VT_SetConfigResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION(void);

/* Symbol: _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEPhiS1_ */
/* Demangled: MtkOmxVenc::startDeque(int, OMX_BUFFERHEADERTYPE*, unsigned char*, int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEPhiS1_(void);

/* Symbol: _Z13StateToStringj */
/* Demangled: StateToString(unsigned int) */
int _Z13StateToStringj(void);

/* Symbol: _ZN10MtkOmxVenc10startFlushEb */
/* Demangled: MtkOmxVenc::startFlush(bool) */
int _ZN10MtkOmxVenc10startFlushEb(void);

/* Symbol: _ZN10MtkOmxVenc26OutputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj */
/* Demangled: MtkOmxVenc::OutputBufferHeaderAllocate(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN10MtkOmxVenc26OutputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj(void);

/* Symbol: _ZN10MtkOmxVenc36HandleSetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE */
/* Demangled: MtkOmxVenc::HandleSetConfigDescribeHDR10PlusInfo(android::DescribeHDR10PlusInfoParams*) */
int _ZN10MtkOmxVenc36HandleSetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE(void);

/* Symbol: _ZN10MtkOmxVenc10startDequeEv */
/* Demangled: MtkOmxVenc::startDeque() */
int _ZN10MtkOmxVenc10startDequeEv(void);

/* Symbol: _ZN10MtkOmxVenc24Omx2DriverHEVCProfileMapE25OMX_VIDEO_HEVCPROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2DriverHEVCProfileMap(OMX_VIDEO_HEVCPROFILETYPE) */
int _ZN10MtkOmxVenc24Omx2DriverHEVCProfileMapE25OMX_VIDEO_HEVCPROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc10ROI_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::ROI_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc10ROI_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc28HandleSetParamVencorSetRoiOnEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiOn(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc28HandleSetParamVencorSetRoiOnEP17OMX_PARAM_U32TYPE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN10MtkOmxVenc27Heif_DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Heif_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE**, v4l2_buffer*) */
int _ZN10MtkOmxVenc27Heif_DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_ */
/* Demangled: OmxMVAManager::newOmxMVAwithVA(void*, int, void*) */
int _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_(void);

/* Symbol: _ZN10MtkOmxVenc18ComponentDeInitWFDEv */
/* Demangled: MtkOmxVenc::ComponentDeInitWFD() */
int _ZN10MtkOmxVenc18ComponentDeInitWFDEv(void);

/* Symbol: _ZN10MtkOmxVenc19HDR_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19HDR_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN14MtkOmxCmdQueueD1Ev */
/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueD1Ev(void);

/* Symbol: _ZN10MtkOmxVenc23HandleVTSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleVTSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
int _ZN10MtkOmxVenc23HandleVTSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc14ioctl_set_ctrlEP18video_encode_param */
/* Demangled: MtkOmxVenc::ioctl_set_ctrl(video_encode_param*) */
int _ZN10MtkOmxVenc14ioctl_set_ctrlEP18video_encode_param(void);

/* Symbol: _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN10MtkOmxVenc19ioctl_runtime_queryEiPi */
/* Demangled: MtkOmxVenc::ioctl_runtime_query(int, int*) */
int _ZN10MtkOmxVenc19ioctl_runtime_queryEiPi(void);

/* Symbol: _ZN10MtkOmxVenc18DeInitSecEncParamsEv */
/* Demangled: MtkOmxVenc::DeInitSecEncParams() */
int _ZN10MtkOmxVenc18DeInitSecEncParamsEv(void);

/* Symbol: _Z28v4l2_reset_dma_out_fix_scaleP14v4l2_selectionii */
/* Demangled: v4l2_reset_dma_out_fix_scale(v4l2_selection*, int, int) */
int _Z28v4l2_reset_dma_out_fix_scaleP14v4l2_selectionii(void);

/* Symbol: _ZN10MtkOmxVenc37HandleGetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN10MtkOmxVenc37HandleGetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _Z20MtkVenc_SetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVenc_SetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z20MtkVenc_SetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVenc20PortBuffersPopulatedEv */
/* Demangled: MtkOmxVenc::PortBuffersPopulated() */
int _ZN10MtkOmxVenc20PortBuffersPopulatedEv(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc19HDR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc19HDR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN12OmxIonMVAMap15mIonHandleCountE */
/* Demangled: OmxIonMVAMap::mIonHandleCount */
extern void* _ZN12OmxIonMVAMap15mIonHandleCountE;

/* Symbol: _ZN13OmxMVAManager14mEnableMoreLogE */
/* Demangled: OmxMVAManager::mEnableMoreLog */
extern void* _ZN13OmxMVAManager14mEnableMoreLogE;

/* Symbol: _ZN10MtkOmxVenc17ComponentRoleEnumEPvPhj */
/* Demangled: MtkOmxVenc::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc17ComponentRoleEnumEPvPhj(void);

/* Symbol: _ZN10MtkOmxVenc27HandleGetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigCommonRotate(OMX_CONFIG_ROTATIONTYPE*) */
int _ZN10MtkOmxVenc27HandleGetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc35HandleSetConfigVendorSetForceIframeEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetForceIframe(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc35HandleSetConfigVendorSetForceIframeEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE10do_destroyEPvj */
/* Demangled: android::Vector<native_handle*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc23epilogueDequeInputFrameEP20OMX_BUFFERHEADERTYPEPh */
/* Demangled: MtkOmxVenc::epilogueDequeInputFrame(OMX_BUFFERHEADERTYPE*, unsigned char*) */
int _ZN10MtkOmxVenc23epilogueDequeInputFrameEP20OMX_BUFFERHEADERTYPEPh(void);

/* Symbol: _ZNK7android6VectorIhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE8do_splatEPvPKvj(void);

/* Symbol: _ZTV12OmxIonMVAMap */
/* Demangled: vtable for OmxIonMVAMap */
extern void* _ZTV12OmxIonMVAMap;

/* Symbol: _ZN10MtkOmxVenc24SMVR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::SMVR_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc24SMVR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc20WFD_HandleDequeFrameEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::WFD_HandleDequeFrame(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc20WFD_HandleDequeFrameEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN12OmxIonMVAMap8newEntryEiiPv */
/* Demangled: OmxIonMVAMap::newEntry(int, int, void*) */
int _ZN12OmxIonMVAMap8newEntryEiiPv(void);

/* Symbol: _ZN10MtkOmxVenc22Omx2DriverHEVCLevelMapE23OMX_VIDEO_HEVCLEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2DriverHEVCLevelMap(OMX_VIDEO_HEVCLEVELTYPE) */
int _ZN10MtkOmxVenc22Omx2DriverHEVCLevelMapE23OMX_VIDEO_HEVCLEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc30HandleGetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE */
/* Demangled: MtkOmxVenc::HandleGetStandardComponentRole(OMX_PARAM_COMPONENTROLETYPE*) */
int _ZN10MtkOmxVenc30HandleGetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE(void);

/* Symbol: _ZN10MtkOmxVenc40HandleSetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigHDRAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN10MtkOmxVenc40HandleSetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN13OmxMVAManager13freeOmxMVAAllEv */
/* Demangled: OmxMVAManager::freeOmxMVAAll() */
int _ZN13OmxMVAManager13freeOmxMVAAllEv(void);

/* Symbol: _ZN10MtkOmxVenc27Debug_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Debug_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc27Debug_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _Z21MtkOmxVencDequeThreadPv */
/* Demangled: MtkOmxVencDequeThread(void*) */
int _Z21MtkOmxVencDequeThreadPv(void);

/* Symbol: _ZN12OmxIonMVAMapC1EPKc */
/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
int _ZN12OmxIonMVAMapC1EPKc(void);

/* Symbol: _ZN10MtkOmxVenc16HDR_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::HDR_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc16HDR_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc19DeinitConvertBufferEPPh */
/* Demangled: MtkOmxVenc::DeinitConvertBuffer(unsigned char**) */
int _ZN10MtkOmxVenc19DeinitConvertBufferEPPh(void);

/* Symbol: _ZN10MtkOmxVenc37HandleGetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigGoogleTemporalLayering(OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE*) */
int _ZN10MtkOmxVenc37HandleGetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17InitVideoEncodeHWEv */
/* Demangled: MtkOmxVenc::InitVideoEncodeHW() */
int _ZN10MtkOmxVenc17InitVideoEncodeHWEv(void);

/* Symbol: _ZN10MtkOmxVenc21Omx2V4L2Mpeg4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2Mpeg4LevelMap(OMX_VIDEO_MPEG4LEVELTYPE) */
int _ZN10MtkOmxVenc21Omx2V4L2Mpeg4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStoreD1Ev */
/* Demangled: AndroidVendorConfigExtensionStore::~AndroidVendorConfigExtensionStore() */
int _ZN33AndroidVendorConfigExtensionStoreD1Ev(void);

/* Symbol: _ZN10MtkOmxBufQ15QueueBufferBackEi */
/* Demangled: MtkOmxBufQ::QueueBufferBack(int) */
int _ZN10MtkOmxBufQ15QueueBufferBackEi(void);

/* Symbol: _ZNK7android6VectorIhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIhE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc24Omx2DriverH263ProfileMapE25OMX_VIDEO_H263PROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2DriverH263ProfileMap(OMX_VIDEO_H263PROFILETYPE) */
int _ZN10MtkOmxVenc24Omx2DriverH263ProfileMapE25OMX_VIDEO_H263PROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc20VT_GetExtensionIndexEPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVenc::VT_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVenc20VT_GetExtensionIndexEPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN14MtkOmxCmdQueueC2Ev */
/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueC2Ev(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc39HandleSetGoogleStoreANWBufferInMetadataEPN7android28StoreMetaDataInBuffersParamsE */
/* Demangled: MtkOmxVenc::HandleSetGoogleStoreANWBufferInMetadata(android::StoreMetaDataInBuffersParams*) */
int _ZN10MtkOmxVenc39HandleSetGoogleStoreANWBufferInMetadataEPN7android28StoreMetaDataInBuffersParamsE(void);

/* Symbol: _ZN10MtkOmxVenc25WFD_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::WFD_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc25WFD_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc20Debug_FillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc20Debug_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16EncSettingVP8EncEv */
/* Demangled: MtkOmxVenc::EncSettingVP8Enc() */
int _ZN10MtkOmxVenc16EncSettingVP8EncEv(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc16ComponentInitWFDEP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitWFD(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc16ComponentInitWFDEP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc18WFD_HandleStateSetEj */
/* Demangled: MtkOmxVenc::WFD_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc18WFD_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc28HandleSetVendorPrependSPSPPSEPN7android30PrependSPSPPSToIDRFramesParamsE */
/* Demangled: MtkOmxVenc::HandleSetVendorPrependSPSPPS(android::PrependSPSPPSToIDRFramesParams*) */
int _ZN10MtkOmxVenc28HandleSetVendorPrependSPSPPSEPN7android30PrependSPSPPSToIDRFramesParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc21Debug_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc21Debug_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEiS1_ */
/* Demangled: MtkOmxVenc::startDeque(int, OMX_BUFFERHEADERTYPE*, int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEiS1_(void);

/* Symbol: _ZN10MtkOmxBufQ17DequeueBufferBackEv */
/* Demangled: MtkOmxBufQ::DequeueBufferBack() */
int _ZN10MtkOmxBufQ17DequeueBufferBackEv(void);

/* Symbol: _Z15v4l2_reset_rectP9v4l2_rectii */
/* Demangled: v4l2_reset_rect(v4l2_rect*, int, int) */
int _Z15v4l2_reset_rectP9v4l2_rectii(void);

/* Symbol: _Z16v4l2_dump_selectbPKcP14v4l2_selection */
/* Demangled: v4l2_dump_select(bool, char const*, v4l2_selection*) */
int _Z16v4l2_dump_selectbPKcP14v4l2_selection(void);

/* Symbol: _Z27MtkVenc_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h */
/* Demangled: MtkVenc_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _Z27MtkVenc_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void);

/* Symbol: _ZN10MtkOmxVenc31HandleGetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE */
/* Demangled: MtkOmxVenc::HandleGetGoogleTemporalLayering(OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE*) */
int _ZN10MtkOmxVenc31HandleGetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE(void);

/* Symbol: _ZN10MtkOmxVenc37HandleSetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN10MtkOmxVenc37HandleSetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc21HDR_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::HDR_NotifyStopCommand() */
int _ZN10MtkOmxVenc21HDR_NotifyStopCommandEv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv(void);

/* Symbol: _Z23v4l2_set_dma_out_memoryP11v4l2_bufferi */
/* Demangled: v4l2_set_dma_out_memory(v4l2_buffer*, int) */
int _Z23v4l2_set_dma_out_memoryP11v4l2_bufferi(void);

/* Symbol: _ZN10MtkOmxBufQD2Ev */
/* Demangled: MtkOmxBufQ::~MtkOmxBufQ() */
int _ZN10MtkOmxBufQD2Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::clear() */
int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE12do_constructEPvj */
/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc27Heif_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Heif_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc27Heif_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL */
/* Demangled: OmxIonMVAMap::setBoolProperty(char const*, OMX_BOOL) */
int _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVenc31HandleSetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE */
/* Demangled: MtkOmxVenc::HandleSetGoogleTemporalLayering(OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE*) */
int _ZN10MtkOmxVenc31HandleSetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE;

/* Symbol: _ZN12OmxIonMVAMap9freeEntryEPv */
/* Demangled: OmxIonMVAMap::freeEntry(void*) */
int _ZN12OmxIonMVAMap9freeEntryEPv(void);

/* Symbol: _ZN10MtkOmxVenc17UnmapOutputMemoryEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::UnmapOutputMemory(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17UnmapOutputMemoryEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN13OmxMVAManagerC1EPKc */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
int _ZN13OmxMVAManagerC1EPKc(void);

/* Symbol: _ZN10MtkOmxVenc20ComponentDeinitDequeEv */
/* Demangled: MtkOmxVenc::ComponentDeinitDeque() */
int _ZN10MtkOmxVenc20ComponentDeinitDequeEv(void);

/* Symbol: _ZN10MtkOmxVenc19PrepareOutputBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::PrepareOutputBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19PrepareOutputBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18ROI_HandleStateSetEj */
/* Demangled: MtkOmxVenc::ROI_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc18ROI_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc19DeInitVideoEncodeHWEb */
/* Demangled: MtkOmxVenc::DeInitVideoEncodeHW(bool) */
int _ZN10MtkOmxVenc19DeInitVideoEncodeHWEb(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::GraphicBuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE;

/* Symbol: _ZN10MtkOmxVenc28Debug_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Debug_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc28Debug_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void);

/* Symbol: _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi */
/* Demangled: OmxIonMVAMap::mapIon(OmxIonMVAEntry*, int) */
int _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStore17registerExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: AndroidVendorConfigExtensionStore::registerExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN33AndroidVendorConfigExtensionStore17registerExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc21Debug_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc21Debug_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo */
/* Demangled: OmxIonMVAEntry::setToVBufInfo(_VBufInfo*) */
int _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo(void);

/* Symbol: _ZN10MtkOmxVenc16HandlePortEnableEj */
/* Demangled: MtkOmxVenc::HandlePortEnable(unsigned int) */
int _ZN10MtkOmxVenc16HandlePortEnableEj(void);

/* Symbol: _ZN10MtkOmxVenc19notifyFlushDoneV4L2Ev */
/* Demangled: MtkOmxVenc::notifyFlushDoneV4L2() */
int _ZN10MtkOmxVenc19notifyFlushDoneV4L2Ev(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStoreC2Ev */
/* Demangled: AndroidVendorConfigExtensionStore::AndroidVendorConfigExtensionStore() */
int _ZN33AndroidVendorConfigExtensionStoreC2Ev(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10MtkOmxVenc24epilogueDequeOutputFrameEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::epilogueDequeOutputFrame(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc24epilogueDequeOutputFrameEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16UnmapInputMemoryEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::UnmapInputMemory(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16UnmapInputMemoryEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::NewCmdItem(_MTK_OMX_CMD_QUEUE_ITEM**) */
int _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_front(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN10MtkOmxVenc13HDR_GetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::HDR_GetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc13HDR_GetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc16deMtkOmxVencHeifEv */
/* Demangled: MtkOmxVenc::deMtkOmxVencHeif() */
int _ZN10MtkOmxVenc16deMtkOmxVencHeifEv(void);

/* Symbol: _ZN10MtkOmxVenc14setYUVMVAForCCEPvS0_iiiPPhS2_Pji */
/* Demangled: MtkOmxVenc::setYUVMVAForCC(void*, void*, int, int, int, unsigned char**, unsigned char**, unsigned int*, int) */
int _ZN10MtkOmxVenc14setYUVMVAForCCEPvS0_iiiPPhS2_Pji(void);

/* Symbol: _ZN10MtkOmxVenc15HandlePortFlushEj */
/* Demangled: MtkOmxVenc::HandlePortFlush(unsigned int) */
int _ZN10MtkOmxVenc15HandlePortFlushEj(void);

/* Symbol: _ZN10MtkOmxVenc24HandleGetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
int _ZN10MtkOmxVenc24HandleGetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void);

/* Symbol: _ZN10MtkOmxVenc8GetStateEPvP13OMX_STATETYPE */
/* Demangled: MtkOmxVenc::GetState(void*, OMX_STATETYPE*) */
int _ZN10MtkOmxVenc8GetStateEPvP13OMX_STATETYPE(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv(void);

/* Symbol: _ZN10MtkOmxVenc19Heif_FillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19Heif_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc20Heif_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Heif_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc20Heif_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc9SetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVenc::SetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc9SetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN10MtkOmxVenc22VT_GetResolutionChangeEPNS_22video_resolutionchangeE */
/* Demangled: MtkOmxVenc::VT_GetResolutionChange(MtkOmxVenc::video_resolutionchange*) */
int _ZN10MtkOmxVenc22VT_GetResolutionChangeEPNS_22video_resolutionchangeE(void);

/* Symbol: _ZN10MtkOmxVenc9VT_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::VT_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc9VT_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc10HDR_OnInitEP18video_encode_param */
/* Demangled: MtkOmxVenc::HDR_OnInit(video_encode_param*) */
int _ZN10MtkOmxVenc10HDR_OnInitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc40HandleGetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigHDRAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
int _ZN10MtkOmxVenc40HandleGetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc37HandleSetConfigVendorResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorResolutionChange(OMX_VIDEO_PARAM_RESOLUTION*) */
int _ZN10MtkOmxVenc37HandleSetConfigVendorResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION(void);

/* Symbol: _ZTVN7android6VectorIP11OmxMVAEntryEE */
/* Demangled: vtable for android::Vector<OmxMVAEntry*> */
extern void* _ZTVN7android6VectorIP11OmxMVAEntryEE;

/* Symbol: _ZN10MtkOmxVenc33HandleSetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigGoogleIntraRefresh(OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE*) */
int _ZN10MtkOmxVenc33HandleSetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE(void);

/* Symbol: _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPK13native_handle */
/* Demangled: MtkOmxVenc::SMVR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**, native_handle const*) */
int _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPK13native_handle(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN10MtkOmxVenc24v4l2_find_video_open_devEv */
/* Demangled: MtkOmxVenc::v4l2_find_video_open_dev() */
int _ZN10MtkOmxVenc24v4l2_find_video_open_devEv(void);

/* Symbol: _ZN10MtkOmxVenc33HandleSetParamVencorSetRoiLicenseEPh */
/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiLicense(unsigned char*) */
int _ZN10MtkOmxVenc33HandleSetParamVencorSetRoiLicenseEPh(void);

/* Symbol: _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::FreeCmdItem(_MTK_OMX_CMD_QUEUE_ITEM*) */
int _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN10MtkOmxVenc21shouldNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::shouldNotifyFlushDone(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc21shouldNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _Z33video_encode_reset_out_fmt_pix_mpP11v4l2_formatP18video_encode_param */
/* Demangled: video_encode_reset_out_fmt_pix_mp(v4l2_format*, video_encode_param*) */
int _Z33video_encode_reset_out_fmt_pix_mpP11v4l2_formatP18video_encode_param(void);

/* Symbol: _ZNK7android6VectorIPhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPhE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVenc::SetOutputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVenc23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN10MtkOmxVenc16WFD_EnableToggleEv */
/* Demangled: MtkOmxVenc::WFD_EnableToggle() */
int _ZN10MtkOmxVenc16WFD_EnableToggleEv(void);

/* Symbol: _ZN10MtkOmxVenc24HandleWFDSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleWFDSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
int _ZN10MtkOmxVenc24HandleWFDSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc16Debug_AppInsightEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Debug_AppInsight(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc16Debug_AppInsightEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN13OmxMVAManagerC2EPKcS1_ */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
int _ZN13OmxMVAManagerC2EPKcS1_(void);

/* Symbol: _ZN10MtkOmxVenc14mEnableMoreLogE */
/* Demangled: MtkOmxVenc::mEnableMoreLog */
extern void* _ZN10MtkOmxVenc14mEnableMoreLogE;

/* Symbol: _ZN10MtkOmxVenc17defaultAvcProfileEv */
/* Demangled: MtkOmxVenc::defaultAvcProfile() */
int _ZN10MtkOmxVenc17defaultAvcProfileEv(void);

/* Symbol: _ZN10MtkOmxVenc9codecNameEv */
/* Demangled: MtkOmxVenc::codecName() */
int _ZN10MtkOmxVenc9codecNameEv(void);

/* Symbol: _ZN10MtkOmxVenc31HandleGetVendorQueryCodecsSizesEP26OMX_VIDEO_PARAM_SPEC_QUERY */
/* Demangled: MtkOmxVenc::HandleGetVendorQueryCodecsSizes(OMX_VIDEO_PARAM_SPEC_QUERY*) */
int _ZN10MtkOmxVenc31HandleGetVendorQueryCodecsSizesEP26OMX_VIDEO_PARAM_SPEC_QUERY(void);

/* Symbol: _ZTVN7android6VectorIPhEE */
/* Demangled: vtable for android::Vector<unsigned char*> */
extern void* _ZTVN7android6VectorIPhEE;

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::pop_front() */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv(void);

/* Symbol: _ZN10MtkOmxVenc29HandleSetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoErrorCorrection(OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE*) */
int _ZN10MtkOmxVenc29HandleSetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc11WFD_SetModeEv */
/* Demangled: MtkOmxVenc::WFD_SetMode() */
int _ZN10MtkOmxVenc11WFD_SetModeEv(void);

/* Symbol: _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN13OmxMVAManagerD0Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD0Ev(void);

/* Symbol: _ZN10MtkOmxVenc17QueryDriverFormatEP31__VENC_DRV_QUERY_VIDEO_FORMAT_T */
/* Demangled: MtkOmxVenc::QueryDriverFormat(__VENC_DRV_QUERY_VIDEO_FORMAT_T*) */
int _ZN10MtkOmxVenc17QueryDriverFormatEP31__VENC_DRV_QUERY_VIDEO_FORMAT_T(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE7do_copyEPvPKvj */
/* Demangled: android::Vector<native_handle*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc26WFD_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::WFD_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
int _ZN10MtkOmxVenc26WFD_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN13OmxMVAManager14freeOmxMVAByVaEPv */
/* Demangled: OmxMVAManager::freeOmxMVAByVa(void*) */
int _ZN13OmxMVAManager14freeOmxMVAByVaEPv(void);

/* Symbol: _ZN10MtkOmxVenc18QueryDriverHEVCEncEv */
/* Demangled: MtkOmxVenc::QueryDriverHEVCEnc() */
int _ZN10MtkOmxVenc18QueryDriverHEVCEncEv(void);

/* Symbol: _ZN10MtkOmxBufQ4PushEi */
/* Demangled: MtkOmxBufQ::Push(int) */
int _ZN10MtkOmxBufQ4PushEi(void);

/* Symbol: _ZN10MtkOmxVenc15ioctl_set_paramEP18video_encode_param */
/* Demangled: MtkOmxVenc::ioctl_set_param(video_encode_param*) */
int _ZN10MtkOmxVenc15ioctl_set_paramEP18video_encode_param(void);

/* Symbol: _Z27v4l2_reset_dma_in_fix_scaleP14v4l2_selectionii */
/* Demangled: v4l2_reset_dma_in_fix_scale(v4l2_selection*, int, int) */
int _Z27v4l2_reset_dma_in_fix_scaleP14v4l2_selectionii(void);

/* Symbol: _ZN14MtkOmxCmdQueueD2Ev */
/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueD2Ev(void);

/* Symbol: _Z20MtkVenc_SetCallbacksPvP16OMX_CALLBACKTYPES_ */
/* Demangled: MtkVenc_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _Z20MtkVenc_SetCallbacksPvP16OMX_CALLBACKTYPES_(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<native_handle*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc38HandleSMVRSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD */
/* Demangled: MtkOmxVenc::HandleSMVRSetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
int _ZN10MtkOmxVenc38HandleSMVRSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void);

/* Symbol: _ZN10MtkOmxVenc16ioctl_stream_offEi */
/* Demangled: MtkOmxVenc::ioctl_stream_off(int) */
int _ZN10MtkOmxVenc16ioctl_stream_offEi(void);

/* Symbol: _ZN10MtkOmxVenc27shouldNotifyFlushDoneBufferEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::shouldNotifyFlushDoneBuffer(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc27shouldNotifyFlushDoneBufferEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN10MtkOmxVenc15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc19EncSettingEncCommonEv */
/* Demangled: MtkOmxVenc::EncSettingEncCommon() */
int _ZN10MtkOmxVenc19EncSettingEncCommonEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_front(_MTK_OMX_CMD_QUEUE_ITEM** const&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN10MtkOmxVenc13MtkOmxVencHDREv */
/* Demangled: MtkOmxVenc::MtkOmxVencHDR() */
int _ZN10MtkOmxVenc13MtkOmxVencHDREv(void);

/* Symbol: _ZN10MtkOmxVenc13ROI_GetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::ROI_GetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc13ROI_GetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc17InitConvertBufferEPPhPji */
/* Demangled: MtkOmxVenc::InitConvertBuffer(unsigned char**, unsigned int*, int) */
int _ZN10MtkOmxVenc17InitConvertBufferEPPhPji(void);

/* Symbol: _Z20MtkVenc_GetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVenc_GetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z20MtkVenc_GetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVenc26HandleSetVendorSetScenarioEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetVendorSetScenario(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc26HandleSetVendorSetScenarioEP17OMX_PARAM_U32TYPE(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN10MtkOmxVenc20InputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh */
/* Demangled: MtkOmxVenc::InputBufferHeaderUse(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN10MtkOmxVenc20InputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh(void);

/* Symbol: _ZN10MtkOmxVenc27HandleGetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE */
/* Demangled: MtkOmxVenc::HandleGetConfigVideoBitrate(OMX_VIDEO_CONFIG_BITRATETYPE*) */
int _ZN10MtkOmxVenc27HandleGetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE(void);

/* Symbol: _ZN10MtkOmxVenc21notifyFlushDoneBufferEv */
/* Demangled: MtkOmxVenc::notifyFlushDoneBuffer() */
int _ZN10MtkOmxVenc21notifyFlushDoneBufferEv(void);

/* Symbol: _ZN10MtkOmxVenc20Buffer_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::Buffer_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc20Buffer_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc19HandleSetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC */
/* Demangled: MtkOmxVenc::HandleSetConfigTSVC(OMX_VIDEO_CONFIG_TSVC*) */
int _ZN10MtkOmxVenc19HandleSetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC(void);

/* Symbol: _ZN10MtkOmxVenc26HandleSetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetVideoQuantization(OMX_VIDEO_PARAM_QUANTIZATIONTYPE*) */
int _ZN10MtkOmxVenc26HandleSetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE(void);

/* Symbol: _ZN10MtkOmxVenc14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc24HandleGetVendorNonRefPOpEP17OMX_VIDEO_NONREFP */
/* Demangled: MtkOmxVenc::HandleGetVendorNonRefPOp(OMX_VIDEO_NONREFP*) */
int _ZN10MtkOmxVenc24HandleGetVendorNonRefPOpEP17OMX_VIDEO_NONREFP(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc25HDR_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::HDR_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc25HDR_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc18doDequeOutputFrameEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::doDequeOutputFrame(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc18doDequeOutputFrameEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEEE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN13OmxMVAManager18syncBufferCacheFrmEPhb */
/* Demangled: OmxMVAManager::syncBufferCacheFrm(unsigned char*, bool) */
int _ZN13OmxMVAManager18syncBufferCacheFrmEPhb(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc15deMtkOmxVencHDREv */
/* Demangled: MtkOmxVenc::deMtkOmxVencHDR() */
int _ZN10MtkOmxVenc15deMtkOmxVencHDREv(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxBufQ12FillSequenceEii */
/* Demangled: MtkOmxBufQ::FillSequence(int, int) */
int _ZN10MtkOmxBufQ12FillSequenceEii(void);

/* Symbol: _ZN10MtkOmxVenc15SendStopCommandEb */
/* Demangled: MtkOmxVenc::SendStopCommand(bool) */
int _ZN10MtkOmxVenc15SendStopCommandEb(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN10MtkOmxVenc23level_id_ioctl_set_ctrlEv */
/* Demangled: MtkOmxVenc::level_id_ioctl_set_ctrl() */
int _ZN10MtkOmxVenc23level_id_ioctl_set_ctrlEv(void);

/* Symbol: _ZN10MtkOmxBufQ4LockEv */
/* Demangled: MtkOmxBufQ::Lock() */
int _ZN10MtkOmxBufQ4LockEv(void);

/* Symbol: _ZN10MtkOmxVenc24HandleInputPortPopulatedEv */
/* Demangled: MtkOmxVenc::HandleInputPortPopulated() */
int _ZN10MtkOmxVenc24HandleInputPortPopulatedEv(void);

/* Symbol: _ZN10MtkOmxVenc25HandleOutputPortPopulatedEv */
/* Demangled: MtkOmxVenc::HandleOutputPortPopulated() */
int _ZN10MtkOmxVenc25HandleOutputPortPopulatedEv(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEj */
/* Demangled: AndroidVendorConfigExtensionStore::getRegisteredExtension(unsigned int) */
int _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEj(void);

/* Symbol: _ZNK7android6VectorIhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManagerC1Ev */
/* Demangled: OmxMVAManager::OmxMVAManager() */
int _ZN13OmxMVAManagerC1Ev(void);

/* Symbol: _ZN33AndroidVendorConfigExtensionStoreD2Ev */
/* Demangled: AndroidVendorConfigExtensionStore::~AndroidVendorConfigExtensionStore() */
int _ZN33AndroidVendorConfigExtensionStoreD2Ev(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*> >::__swap_out_circular_buffer(std::__1::__split_buffer<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*>&>&) */
int _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE12do_constructEPvj(void);

/* Symbol: _Z13MTK_OMX_ALLOCj */
/* Demangled: MTK_OMX_ALLOC(unsigned int) */
int _Z13MTK_OMX_ALLOCj(void);

/* Symbol: _ZN10MtkOmxVenc16requeueBsBuffersEv */
/* Demangled: MtkOmxVenc::requeueBsBuffers() */
int _ZN10MtkOmxVenc16requeueBsBuffersEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPvP11v4l2_buffer */
/* Demangled: MtkOmxVenc::SMVR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, void*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPvP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc22DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEPv */
/* Demangled: MtkOmxVenc::DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE**, void*) */
int _ZN10MtkOmxVenc22DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc18EncSettingMPEG4EncEv */
/* Demangled: MtkOmxVenc::EncSettingMPEG4Enc() */
int _ZN10MtkOmxVenc18EncSettingMPEG4EncEv(void);

/* Symbol: _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*> >::__push_back_slow_path<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE* const&>(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE* const&) */
int _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN10MtkOmxVenc19HandleGetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE */
/* Demangled: MtkOmxVenc::HandleGetVideoVBSMC(OMX_VIDEO_PARAM_VBSMCTYPE*) */
int _ZN10MtkOmxVenc19HandleGetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE(void);

/* Symbol: _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc36HandleGetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE */
/* Demangled: MtkOmxVenc::HandleGetConfigDescribeHDRStaticInfo(android::DescribeHDRStaticInfoParams*) */
int _ZN10MtkOmxVenc36HandleGetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE(void);

/* Symbol: _ZN10MtkOmxVenc16ioctl_dq_out_bufEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::ioctl_dq_out_buf(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc16ioctl_dq_out_bufEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17DrawYUVStripeLineEPh */
/* Demangled: MtkOmxVenc::DrawYUVStripeLine(unsigned char*) */
int _ZN10MtkOmxVenc17DrawYUVStripeLineEPh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN10MtkOmxVenc22Omx2DriverH263LevelMapE23OMX_VIDEO_H263LEVELTYPE */
/* Demangled: MtkOmxVenc::Omx2DriverH263LevelMap(OMX_VIDEO_H263LEVELTYPE) */
int _ZN10MtkOmxVenc22Omx2DriverH263LevelMapE23OMX_VIDEO_H263LEVELTYPE(void);

/* Symbol: _ZN10MtkOmxVenc34HandleGetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD */
/* Demangled: MtkOmxVenc::HandleGetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
int _ZN10MtkOmxVenc34HandleGetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void);

/* Symbol: _ZNK7android6VectorIPhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPhE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc18onStartDequeBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::onStartDequeBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18onStartDequeBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: AvcProfileLevelTable */
/* Demangled: AvcProfileLevelTable */
extern void* AvcProfileLevelTable;

/* Symbol: _ZN10MtkOmxVenc20setDrvParamBeforeEncEv */
/* Demangled: MtkOmxVenc::setDrvParamBeforeEnc() */
int _ZN10MtkOmxVenc20setDrvParamBeforeEncEv(void);

/* Symbol: _ZNK7android6VectorIhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE7do_copyEPvPKvj(void);

/* Symbol: _Z25MtkVenc_GetExtensionIndexPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkVenc_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _Z25MtkVenc_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPK13native_handle */
/* Demangled: MtkOmxVenc::SMVR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**, native_handle const*) */
int _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPK13native_handle(void);

/* Symbol: _ZN10MtkOmxVenc14Heif_GetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Heif_GetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc14Heif_GetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc18GetVEncDrvBSBufferEPhjP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: MtkOmxVenc::GetVEncDrvBSBuffer(unsigned char*, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN10MtkOmxVenc18GetVEncDrvBSBufferEPhjP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _ZN10MtkOmxVenc22EncodeT_GetBufferIndexEP20OMX_BUFFERHEADERTYPEPS1_i */
/* Demangled: MtkOmxVenc::EncodeT_GetBufferIndex(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE**, int) */
int _ZN10MtkOmxVenc22EncodeT_GetBufferIndexEP20OMX_BUFFERHEADERTYPEPS1_i(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN10MtkOmxVenc18InitMpeg4EncParamsEv */
/* Demangled: MtkOmxVenc::InitMpeg4EncParams() */
int _ZN10MtkOmxVenc18InitMpeg4EncParamsEv(void);

/* Symbol: _ZN10MtkOmxVenc19Heif_HandleStateSetEj */
/* Demangled: MtkOmxVenc::Heif_HandleStateSet(unsigned int) */
int _ZN10MtkOmxVenc19Heif_HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVenc28EncodeT_Input_GetBufferIndexEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeT_Input_GetBufferIndex(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc28EncodeT_Input_GetBufferIndexEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZTVN7MtkVenc17MtkRoiConfigEntryE */
/* Demangled: vtable for MtkVenc::MtkRoiConfigEntry */
extern void* _ZTVN7MtkVenc17MtkRoiConfigEntryE;

/* Symbol: _ZN13OmxMVAManager18syncBufferCacheFrmEPh */
/* Demangled: OmxMVAManager::syncBufferCacheFrm(unsigned char*) */
int _ZN13OmxMVAManager18syncBufferCacheFrmEPh(void);

/* Symbol: _ZN10MtkOmxVenc17InitH263EncParamsEv */
/* Demangled: MtkOmxVenc::InitH263EncParams() */
int _ZN10MtkOmxVenc17InitH263EncParamsEv(void);

/* Symbol: _ZN10MtkOmxVenc16WFD_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::WFD_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc16WFD_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc26Heif_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::Heif_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26Heif_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVenc19HandleGetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC */
/* Demangled: MtkOmxVenc::HandleGetConfigTSVC(OMX_VIDEO_CONFIG_TSVC*) */
int _ZN10MtkOmxVenc19HandleGetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc16DumpCorruptedMemEPcS0_i */
/* Demangled: MtkOmxVenc::DumpCorruptedMem(char*, char*, int) */
int _ZN10MtkOmxVenc16DumpCorruptedMemEPcS0_i(void);

/* Symbol: _ZN12OmxIonMVAMapC2EPKc */
/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
int _ZN12OmxIonMVAMapC2EPKc(void);

/* Symbol: _ZN10MtkOmxVenc33HandleSetConfigVendorSetIIntervalEP17OMX_PARAM_U32TYPE */
/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetIInterval(OMX_PARAM_U32TYPE*) */
int _ZN10MtkOmxVenc33HandleSetConfigVendorSetIIntervalEP17OMX_PARAM_U32TYPE(void);

/* Symbol: _ZN10MtkOmxVenc12SMVR_SetModeEv */
/* Demangled: MtkOmxVenc::SMVR_SetMode() */
int _ZN10MtkOmxVenc12SMVR_SetModeEv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc16deMtkOmxVencSMVREv */
/* Demangled: MtkOmxVenc::deMtkOmxVencSMVR() */
int _ZN10MtkOmxVenc16deMtkOmxVencSMVREv(void);

/* Symbol: _ZN10MtkOmxVenc34HandleSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD */
/* Demangled: MtkOmxVenc::HandleSetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
int _ZN10MtkOmxVenc34HandleSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void);

/* Symbol: _ZN10MtkOmxVencD0Ev */
/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
int _ZN10MtkOmxVencD0Ev(void);

/* Symbol: _ZN10MtkOmxVenc18tryNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVenc::tryNotifyFlushDone(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18tryNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::__add_back_capacity() */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVenc16CheckFormatToDrvEv */
/* Demangled: MtkOmxVenc::CheckFormatToDrv() */
int _ZN10MtkOmxVenc16CheckFormatToDrvEv(void);

/* Symbol: _Z13get_sem_valueP5sem_t */
/* Demangled: get_sem_value(sem_t*) */
int _Z13get_sem_valueP5sem_t(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv(void);

/* Symbol: _ZN10MtkOmxVenc10EncodeInitEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::EncodeInit(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc10EncodeInitEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17QueryDriverVP8EncEv */
/* Demangled: MtkOmxVenc::QueryDriverVP8Enc() */
int _ZN10MtkOmxVenc17QueryDriverVP8EncEv(void);

/* Symbol: _ZN10MtkOmxVenc24HandleSetVendorNonRefPOpEP17OMX_VIDEO_NONREFP */
/* Demangled: MtkOmxVenc::HandleSetVendorNonRefPOp(OMX_VIDEO_NONREFP*) */
int _ZN10MtkOmxVenc24HandleSetVendorNonRefPOpEP17OMX_VIDEO_NONREFP(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvj(void);

/* Symbol: vtExt */
/* Demangled: vtExt */
extern void* vtExt;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN10MtkOmxVenc11isBufferSecEPhjPi */
/* Demangled: MtkOmxVenc::isBufferSec(unsigned char*, unsigned int, int*) */
int _ZN10MtkOmxVenc11isBufferSecEPhjPi(void);

/* Symbol: _ZN10MtkOmxVenc13dumpSecBufferEPcii */
/* Demangled: MtkOmxVenc::dumpSecBuffer(char*, int, int) */
int _ZN10MtkOmxVenc13dumpSecBufferEPcii(void);

/* Symbol: _ZN10MtkOmxVenc18defaultHevcProfileEv */
/* Demangled: MtkOmxVenc::defaultHevcProfile() */
int _ZN10MtkOmxVenc18defaultHevcProfileEv(void);

/* Symbol: _ZN10MtkOmxVenc13waitFlushDoneEv */
/* Demangled: MtkOmxVenc::waitFlushDone() */
int _ZN10MtkOmxVenc13waitFlushDoneEv(void);

/* Symbol: _ZN10MtkOmxVenc16ComponentInitRoiEP33AndroidVendorConfigExtensionStore */
/* Demangled: MtkOmxVenc::ComponentInitRoi(AndroidVendorConfigExtensionStore*) */
int _ZN10MtkOmxVenc16ComponentInitRoiEP33AndroidVendorConfigExtensionStore(void);

/* Symbol: _ZN10MtkOmxVenc19VT_ResolutionChangeEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::VT_ResolutionChange(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc19VT_ResolutionChangeEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc12WFD_OnDeInitEv */
/* Demangled: MtkOmxVenc::WFD_OnDeInit() */
int _ZN10MtkOmxVenc12WFD_OnDeInitEv(void);

/* Symbol: _ZN10MtkOmxVenc18GetInputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE */
/* Demangled: MtkOmxVenc::GetInputPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
int _ZN10MtkOmxVenc18GetInputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void);

/* Symbol: _ZN10MtkOmxVenc21InitConvertBufferSizeEPj */
/* Demangled: MtkOmxVenc::InitConvertBufferSize(unsigned int*) */
int _ZN10MtkOmxVenc21InitConvertBufferSizeEPj(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc18onStartFlushBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::onStartFlushBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18onStartFlushBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc15Debug_SetConfigE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Debug_SetConfig(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc15Debug_SetConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVenc13dumpYUVBufferEPcPhS1_S1_ii */
/* Demangled: MtkOmxVenc::dumpYUVBuffer(char*, unsigned char*, unsigned char*, unsigned char*, int, int) */
int _ZN10MtkOmxVenc13dumpYUVBufferEPcPhS1_S1_ii(void);

/* Symbol: _ZN10MtkOmxVenc17OutputErrorHandleEbP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::OutputErrorHandle(bool, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc17OutputErrorHandleEbP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc17Debug_MMDump_InitEP18video_encode_param */
/* Demangled: MtkOmxVenc::Debug_MMDump_Init(video_encode_param*) */
int _ZN10MtkOmxVenc17Debug_MMDump_InitEP18video_encode_param(void);

/* Symbol: _ZN10MtkOmxVenc23Omx2V4L2Mpeg4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE */
/* Demangled: MtkOmxVenc::Omx2V4L2Mpeg4ProfileMap(OMX_VIDEO_MPEG4PROFILETYPE) */
int _ZN10MtkOmxVenc23Omx2V4L2Mpeg4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE(void);

/* Symbol: _ZN10MtkOmxVenc18Debug_SetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVenc::Debug_SetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVenc18Debug_SetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE12do_constructEPvj(void);

/* Symbol: _Z13v4l2_dump_fmtbPKcP11v4l2_format */
/* Demangled: v4l2_dump_fmt(bool, char const*, v4l2_format*) */
int _Z13v4l2_dump_fmtbPKcP11v4l2_format(void);

/* Symbol: _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _Z17MtkVenc_SetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVenc_SetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z17MtkVenc_SetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVenc15dumpInputBufferEP20OMX_BUFFERHEADERTYPEP26__VENC_DRV_PARAM_FRM_BUF_Tj */
/* Demangled: MtkOmxVenc::dumpInputBuffer(OMX_BUFFERHEADERTYPE*, __VENC_DRV_PARAM_FRM_BUF_T*, unsigned int) */
int _ZN10MtkOmxVenc15dumpInputBufferEP20OMX_BUFFERHEADERTYPEP26__VENC_DRV_PARAM_FRM_BUF_Tj(void);

/* Symbol: _ZN10MtkOmxVenc17EncSettingH264EncEv */
/* Demangled: MtkOmxVenc::EncSettingH264Enc() */
int _ZN10MtkOmxVenc17EncSettingH264EncEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManagerC2EPKc */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
int _ZN13OmxMVAManagerC2EPKc(void);

/* Symbol: _ZN10MtkOmxVenc19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h */
/* Demangled: MtkOmxVenc::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _ZN10MtkOmxVenc19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc25HDR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc25HDR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN10MtkOmxVenc20SetFreeConvertBufferEPh */
/* Demangled: MtkOmxVenc::SetFreeConvertBuffer(unsigned char*) */
int _ZN10MtkOmxVenc20SetFreeConvertBufferEPh(void);

/* Symbol: _ZN10MtkOmxVenc12colorConvertEPhjS0_j */
/* Demangled: MtkOmxVenc::colorConvert(unsigned char*, unsigned int, unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc12colorConvertEPhjS0_j(void);

/* Symbol: _ZN10MtkOmxVenc23CheckBufferAvailabilityEv */
/* Demangled: MtkOmxVenc::CheckBufferAvailability() */
int _ZN10MtkOmxVenc23CheckBufferAvailabilityEv(void);

/* Symbol: _ZN10MtkOmxVenc23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVenc::HandleSetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVenc23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVenc14MtkOmxVencHeifEv */
/* Demangled: MtkOmxVenc::MtkOmxVencHeif() */
int _ZN10MtkOmxVenc14MtkOmxVencHeifEv(void);

/* Symbol: _ZN10MtkOmxVenc20ComponentDeInitDebugEv */
/* Demangled: MtkOmxVenc::ComponentDeInitDebug() */
int _ZN10MtkOmxVenc20ComponentDeInitDebugEv(void);

/* Symbol: _ZN10MtkOmxVenc26WFD_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer */
/* Demangled: MtkOmxVenc::WFD_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
int _ZN10MtkOmxVenc26WFD_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void);

/* Symbol: _ZN10MtkOmxVencC1Ev */
/* Demangled: MtkOmxVenc::MtkOmxVenc() */
int _ZN10MtkOmxVencC1Ev(void);

/* Symbol: _ZN10MtkOmxVenc19requeueFrameBuffersEv */
/* Demangled: MtkOmxVenc::requeueFrameBuffers() */
int _ZN10MtkOmxVenc19requeueFrameBuffersEv(void);

/* Symbol: _ZN10MtkOmxVenc21ROI_NotifyStopCommandEv */
/* Demangled: MtkOmxVenc::ROI_NotifyStopCommand() */
int _ZN10MtkOmxVenc21ROI_NotifyStopCommandEv(void);

/* Symbol: _ZN10MtkOmxVenc18HDR_FillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::HDR_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVenc18HDR_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVenc16VT_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVenc::VT_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
int _ZN10MtkOmxVenc16VT_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::operator()(void*&&, unsigned long&&) */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIPN7MtkVenc7RoiInfoEEE */
/* Demangled: vtable for android::Vector<MtkVenc::RoiInfo*> */
extern void* _ZTVN7android6VectorIPN7MtkVenc7RoiInfoEEE;

/* Symbol: _ZN10MtkOmxVenc17InitHevcEncParamsEv */
/* Demangled: MtkOmxVenc::InitHevcEncParams() */
int _ZN10MtkOmxVenc17InitHevcEncParamsEv(void);

/* Symbol: _Z25MtkVenc_ComponentRoleEnumPvPhj */
/* Demangled: MtkVenc_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _Z25MtkVenc_ComponentRoleEnumPvPhj(void);

/* Symbol: _ZN10MtkOmxBufQ7IsEmptyEv */
/* Demangled: MtkOmxBufQ::IsEmpty() */
int _ZN10MtkOmxBufQ7IsEmptyEv(void);

/* Symbol: _ZN10MtkOmxVenc16dumpOutputBufferEP20OMX_BUFFERHEADERTYPEPhj */
/* Demangled: MtkOmxVenc::dumpOutputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVenc16dumpOutputBufferEP20OMX_BUFFERHEADERTYPEPhj(void);

/* Symbol: _ZN13OmxMVAManagerD1Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD1Ev(void);

/* Symbol: _ZN10MtkOmxBufQ10PendingNumEi */
/* Demangled: MtkOmxBufQ::PendingNum(int) */
int _ZN10MtkOmxBufQ10PendingNumEi(void);

/* Symbol: _ZN10MtkOmxVenc33HandleGetVendorQueryDriverVersionEP25OMX_VIDEO_PARAM_DRIVERVER */
/* Demangled: MtkOmxVenc::HandleGetVendorQueryDriverVersion(OMX_VIDEO_PARAM_DRIVERVER*) */
int _ZN10MtkOmxVenc33HandleGetVendorQueryDriverVersionEP25OMX_VIDEO_PARAM_DRIVERVER(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIP13native_handleE12do_constructEPvj */
/* Demangled: android::Vector<native_handle*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP13native_handleE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVenc12device_closeEi */
/* Demangled: MtkOmxVenc::device_close(int) */
int _ZN10MtkOmxVenc12device_closeEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXVENC_H */
